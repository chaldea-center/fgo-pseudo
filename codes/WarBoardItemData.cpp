void __fastcall WarBoardItemData___ctor(
        WarBoardItemData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserGetItemData_o *getItemData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *Instance; // x0
  struct System_Int32_array *Individuality; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *Entity; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FA229 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_WarBoardItemMaster___, layout);
    sub_1B640C8(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FA229 = 1;
  }
  *(_QWORD *)&this->fields.forceId = -1LL;
  *(_QWORD *)&this->fields.pieceIndex = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.serverData = getItemData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.serverData, (int32_t)getItemData, v9, v10);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.itemId = layout->fields.effectId,
        Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL),
        this->fields._individuality_k__BackingField = Individuality,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields._individuality_k__BackingField,
          (int32_t)Individuality,
          v13,
          v14),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarBoardItemMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.itemId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
  this->fields.itemEntity = (struct WarBoardItemEntity_o *)Entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemEntity, (int32_t)Entity, v16, v17);
  this->fields._isUse_k__BackingField = 0;
  *(_QWORD *)&this->fields.forceId = -1LL;
  this->fields.pieceIndex = -1;
  if ( getItemData )
  {
    this->fields._isUse_k__BackingField = getItemData->fields.isUse;
    *(_QWORD *)&this->fields.forceId = *(_QWORD *)&getItemData->fields.forceId;
    this->fields.pieceIndex = getItemData->fields.pieceIndex;
  }
}


bool __fastcall WarBoardItemData__CheckEnableGet(
        WarBoardItemData_o *this,
        WarBoardPieceData_o *piece,
        const MethodInfo *method)
{
  if ( !piece )
    sub_1B64324(this);
  return piece->fields._type_k__BackingField != 1;
}


bool __fastcall WarBoardItemData__CheckImmediately(WarBoardItemData_o *this, const MethodInfo *method)
{
  return 1;
}


bool __fastcall WarBoardItemData__Get(
        WarBoardItemData_o *this,
        WarBoardPieceData_o *piece,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        bool isInsertTask,
        const MethodInfo *method)
{
  int32_t type_k__BackingField; // w19

  if ( !piece )
    sub_1B64324(this);
  type_k__BackingField = piece->fields._type_k__BackingField;
  if ( type_k__BackingField != 1 )
  {
    *(_QWORD *)&this->fields.forceId = *(_QWORD *)&piece->fields._forceId_k__BackingField;
    this->fields.pieceIndex = piece->fields._index_k__BackingField;
    WarBoardItemData__Use(this, piece, taskList, 0, method);
  }
  return type_k__BackingField != 1;
}


System_Int32_array *__fastcall WarBoardItemData__GetIndividuality(
        WarBoardItemData_o *this,
        IWarBoardObjectData_IndivGetArgs_o *args,
        const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


WarBoardItemEntity_o *__fastcall WarBoardItemData__GetItemEntity(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields.itemEntity;
}


void __fastcall WarBoardItemData__ResetItem(WarBoardItemData_o *this, const MethodInfo *method)
{
  WarBoardItemData_SaveData_o *localSaveData; // x0

  this->fields._isUse_k__BackingField = 0;
  localSaveData = this->fields.localSaveData;
  *(_QWORD *)&this->fields.forceId = -1LL;
  this->fields.pieceIndex = -1;
  if ( !localSaveData
    || (WarBoardItemData_SaveData__Save(localSaveData, method),
        (localSaveData = (WarBoardItemData_SaveData_o *)this->fields.component) == 0LL) )
  {
    sub_1B64324(localSaveData);
  }
  WarBoardItemComponent__Reset((WarBoardItemComponent_o *)localSaveData, 0LL);
}


void __fastcall WarBoardItemData__SetComponent(
        WarBoardItemData_o *this,
        WarBoardItemComponent_o *component,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.component = component;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.component, (int32_t)component, (int32_t)method, v3);
}


void __fastcall WarBoardItemData__SetItemEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1B64324(0LL);
  WarBoardItemComponent__SetColliderEnable(component, enable, 0LL);
}


void __fastcall WarBoardItemData__SetTouchEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1B64324(0LL);
  WarBoardItemComponent__SetTouchEnable(component, enable, 0LL);
}


System_String_o *__fastcall WarBoardItemData__ToJson(WarBoardItemData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct WarBoardUserGetItemData_o *serverData; // x20
  struct WarBoardUserGetItemData_o **p_serverData; // x21
  Il2CppObject *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x0

  if ( (byte_49FA230 & 1) == 0 )
  {
    sub_1B640C8(&JsonManager_TypeInfo, method);
    sub_1B640C8(&WarBoardUserGetItemData_TypeInfo, v4);
    byte_49FA230 = 1;
  }
  p_serverData = &this->fields.serverData;
  serverData = this->fields.serverData;
  if ( !serverData )
  {
    v7 = (Il2CppObject *)sub_1B64314(WarBoardUserGetItemData_TypeInfo, method, v2);
    System_Object___ctor(v7, 0LL);
    *p_serverData = (struct WarBoardUserGetItemData_o *)v7;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.serverData, (int32_t)v7, v8, v9);
    serverData = *p_serverData;
    if ( !*p_serverData )
      sub_1B64324(v10);
    serverData->fields.squareIndex = this->fields._squareIndex_k__BackingField;
  }
  *(_QWORD *)&serverData->fields.forceId = *(_QWORD *)&this->fields.forceId;
  serverData->fields.pieceIndex = this->fields.pieceIndex;
  serverData->fields.isUse = this->fields._isUse_k__BackingField;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)serverData, 0, 0, 0LL);
}


void __fastcall WarBoardItemData__UpdateFromServerData(
        WarBoardItemData_o *this,
        WarBoardDataEntity_o *warBoardDataEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x20
  System_Func_object__bool__o *v8; // x21
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct WarBoardUserGetItemData_o *serverData; // x8

  if ( (byte_49FA22F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, warBoardDataEnt);
    sub_1B640C8(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardItemData__UpdateFromServerData_b__60_0__, v6);
    byte_49FA22F = 1;
  }
  if ( warBoardDataEnt )
  {
    getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEnt->fields.getItemInfo;
    v8 = (System_Func_object__bool__o *)sub_1B64314(
                                          System_Func_WarBoardUserGetItemData__bool__TypeInfo,
                                          warBoardDataEnt,
                                          method);
    System_Func_object__bool____ctor(
      v8,
      (Il2CppObject *)this,
      Method_WarBoardItemData__UpdateFromServerData_b__60_0__,
      0LL);
    v9 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
           getItemInfo,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    this->fields.serverData = (struct WarBoardUserGetItemData_o *)v9;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.serverData, (int32_t)v9, v10, v11);
    serverData = this->fields.serverData;
    if ( serverData )
    {
      *(_QWORD *)&this->fields.forceId = *(_QWORD *)&serverData->fields.forceId;
      this->fields.pieceIndex = serverData->fields.pieceIndex;
      this->fields._isUse_k__BackingField = serverData->fields.isUse;
    }
  }
}


void __fastcall WarBoardItemData__Use(
        WarBoardItemData_o *this,
        WarBoardPieceData_o *piece,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        bool isInsertTask,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x21
  __int64 component; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x23
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x8
  System_String_o *v27; // x24
  DataVals_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x8
  int v32; // w25
  __int64 v33; // x24
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  struct WarBoardItemEntity_o *v39; // x8
  struct System_Int32_array *funcId; // x1
  const MethodInfo *v41; // x1
  DataVals_array *DataValsList; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  BattleServantData_o *v45; // x22
  int32_t v46; // w0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  WarBoardTaskBase_TaskCallback_o *v52; // x23
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w2
  int32_t v56; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  Il2CppObject *Instance; // x20
  __int64 v62; // x21
  int32_t v63; // w2
  int32_t v64; // w3
  __int64 v65; // x0

  if ( (byte_49FA22D & 1) == 0 )
  {
    sub_1B640C8(&DataVals_TypeInfo, piece);
    sub_1B640C8(&WarBoardManager_ExecuteProcParam_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v12);
    sub_1B640C8(&Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__, v13);
    sub_1B640C8(&WarBoardItemData___c__DisplayClass54_0_TypeInfo, v14);
    sub_1B640C8(&WarBoardCallbackTask_TypeInfo, v15);
    sub_1B640C8(&WarBoardTaskBase___TypeInfo, v16);
    byte_49FA22D = 1;
  }
  v17 = sub_1B64314(WarBoardItemData___c__DisplayClass54_0_TypeInfo, piece, taskList);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_31;
  *(_QWORD *)(v17 + 16) = piece;
  v21 = v17 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)piece, v19, v20);
  v22 = *(_QWORD *)(v17 + 16);
  if ( !v22 )
    goto LABEL_31;
  if ( *(_DWORD *)(v22 + 16) == 1 )
    return;
  component = (__int64)this->fields.component;
  this->fields._isUse_k__BackingField = 1;
  if ( !component )
    goto LABEL_31;
  WarBoardItemComponent__OnUse((WarBoardItemComponent_o *)component, *(_DWORD *)(v22 + 64), taskList, 0, 0LL);
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_31;
  svals = itemEntity->fields.svals;
  if ( !svals )
    goto LABEL_31;
  if ( !svals->max_length )
    goto LABEL_32;
  v27 = svals->m_Items[0];
  v28 = (DataVals_o *)sub_1B64314(DataVals_TypeInfo, v23, v24);
  DataVals___ctor(v28, v27, 0LL);
  if ( !*(_QWORD *)v21 )
    goto LABEL_31;
  component = *(_QWORD *)(*(_QWORD *)v21 + 128LL);
  if ( !component )
    goto LABEL_31;
  BattleServantData__updateResultState((BattleServantData_o *)component, 0LL);
  if ( !*(_QWORD *)v21 )
    goto LABEL_31;
  v31 = *(_QWORD *)(*(_QWORD *)v21 + 128LL);
  if ( !v31 )
    goto LABEL_31;
  v32 = *(_DWORD *)(v31 + 24);
  v33 = sub_1B64314(WarBoardManager_ExecuteProcParam_TypeInfo, v29, v30);
  *(_BYTE *)(v33 + 64) = 1;
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  v34 = *(_QWORD *)v21;
  *(_QWORD *)(v33 + 16) = *(_QWORD *)v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 16), v34, v35, v36);
  *(_DWORD *)(v33 + 24) = v32;
  *(_DWORD *)(v33 + 28) = v32;
  v39 = this->fields.itemEntity;
  if ( !v39 )
    goto LABEL_31;
  funcId = v39->fields.funcId;
  *(_QWORD *)(v33 + 32) = funcId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)funcId, v37, v38);
  DataValsList = WarBoardItemData__getDataValsList(this, v41);
  *(_QWORD *)(v33 + 40) = DataValsList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 40), (int32_t)DataValsList, v43, v44);
  *(_BYTE *)(v33 + 64) = 0;
  component = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !component )
    goto LABEL_31;
  component = WarBoardManager__ExecuteProcList(
                (WarBoardManager_o *)component,
                (WarBoardManager_ExecuteProcParam_o *)v33,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL);
  if ( !*(_QWORD *)v21 )
    goto LABEL_31;
  v45 = *(BattleServantData_o **)(*(_QWORD *)v21 + 128LL);
  if ( !v45 )
    goto LABEL_31;
  v46 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v45->klass->vtable._13_get_resultHp.method)(
          v45,
          v45->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__setHp(v45, v46, 0, 0LL);
  v49 = sub_1B64314(WarBoardCallbackTask_TypeInfo, v47, v48);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v49, 0LL, 0LL);
  v52 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v50, v51);
  WarBoardTaskBase_TaskCallback___ctor(
    v52,
    (Il2CppObject *)v17,
    Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__,
    0LL);
  if ( !v49 )
    goto LABEL_31;
  *(_QWORD *)(v49 + 40) = v52;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 40), (int32_t)v52, v53, v54);
  if ( taskList )
  {
    items = taskList->fields._items;
    v58 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( items )
    {
      size = taskList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)v49,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &items->obj.klass + size;
        taskList->fields._size = size + 1;
        v60[4] = (Il2CppClass *)v49;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 4), v49, v55, v56);
      }
      return;
    }
LABEL_31:
    sub_1B64324(component);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  component = sub_1B64170(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !component )
    goto LABEL_31;
  v62 = component;
  component = sub_1B64204(v49, *(_QWORD *)(*(_QWORD *)component + 64LL));
  if ( !component )
  {
    v65 = sub_1B64348(0LL);
    sub_1B641F0(v65, 0LL);
  }
  if ( !*(_DWORD *)(v62 + 24) )
LABEL_32:
    sub_1B6432C(component, v23);
  *(_QWORD *)(v62 + 32) = v49;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v62 + 32), v49, v63, v64);
  if ( !Instance )
    goto LABEL_31;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v62, 0LL);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v62, 0LL);
}


bool __fastcall WarBoardItemData___UpdateFromServerData_b__60_0(
        WarBoardItemData_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.squareIndex == this->fields._squareIndex_k__BackingField;
}


DataVals_array *__fastcall WarBoardItemData__getDataValsList(WarBoardItemData_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x23
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  DataVals_array *v10; // x19
  unsigned __int64 v11; // x24
  System_String_o **m_Items; // x25
  ServantStatusBattleListViewItem_o *p_forceId; // x20
  System_String_o *v14; // x22
  DataVals_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  DataVals_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v24; // x0

  v2 = this;
  if ( (byte_49FA22E & 1) == 0 )
  {
    sub_1B640C8(&DataVals___TypeInfo, method);
    sub_1B640C8(&DataVals_TypeInfo, v3);
    this = (WarBoardItemData_o *)sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FA22E = 1;
  }
  itemEntity = v2->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_21;
  svals = itemEntity->fields.svals;
  if ( !svals )
  {
    v10 = (DataVals_array *)sub_1B64170(DataVals___TypeInfo, 1LL);
    v20 = (DataVals_o *)sub_1B64314(DataVals_TypeInfo, v18, v19);
    DataVals___ctor(v20, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v10 )
    {
      if ( v20 )
      {
        this = (WarBoardItemData_o *)sub_1B64204(v20, v10->obj.klass->_1.element_class);
        if ( !this )
        {
LABEL_22:
          v24 = sub_1B64348(this);
          sub_1B641F0(v24, 0LL);
        }
      }
      if ( !v10->max_length )
        goto LABEL_20;
      v10->m_Items[0] = v20;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v10->m_Items, (int32_t)v20, v21, v22);
      return v10;
    }
LABEL_21:
    sub_1B64324(this);
  }
  this = (WarBoardItemData_o *)sub_1B64170(DataVals___TypeInfo, svals->max_length);
  v9 = *(_QWORD *)&svals->max_length;
  v10 = (DataVals_array *)this;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    m_Items = svals->m_Items;
    p_forceId = (ServantStatusBattleListViewItem_o *)&this->fields.forceId;
    while ( v11 < (unsigned int)v9 )
    {
      v14 = *m_Items;
      v15 = (DataVals_o *)sub_1B64314(DataVals_TypeInfo, v7, v8);
      DataVals___ctor(v15, v14, 0LL);
      if ( !v10 )
        goto LABEL_21;
      if ( v15 )
      {
        this = (WarBoardItemData_o *)sub_1B64204(v15, v10->obj.klass->_1.element_class);
        if ( !this )
          goto LABEL_22;
      }
      if ( v11 >= v10->max_length )
        break;
      p_forceId->klass = (ServantStatusBattleListViewItem_c *)v15;
      sub_1B6406C(p_forceId, (int32_t)v15, v16, v17);
      LODWORD(v9) = svals->max_length;
      ++v11;
      ++m_Items;
      p_forceId = (ServantStatusBattleListViewItem_o *)((char *)p_forceId + 8);
      if ( (__int64)v11 >= (int)v9 )
        return v10;
    }
LABEL_20:
    sub_1B6432C(this, v7);
  }
  return v10;
}


bool __fastcall WarBoardItemData__get_Acquired(WarBoardItemData_o *this, const MethodInfo *method)
{
  return (this->fields.forceId & 0x80000000) == 0 && this->fields.groupId >= 0;
}


int32_t __fastcall WarBoardItemData__get_AiTargetSortPrimeIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return 0;
}


int32_t __fastcall WarBoardItemData__get_AiTargetSortSecondIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t __fastcall WarBoardItemData__get_BaseImageId(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.baseImageId;
  else
    return 0;
}


System_String_o *__fastcall WarBoardItemData__get_BaseImageSpriteName(
        WarBoardItemData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarBoardItemEntity_o *itemEntity; // x8
  int baseImageId; // w8
  Il2CppObject *v7; // x0
  int v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_49FA22C & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&StringLiteral_22153/*"onBoard_itembase_{0}"*/, v3);
    sub_1B640C8(&StringLiteral_22152/*"onBoard_itembase"*/, v4);
    byte_49FA22C = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    return (System_String_o *)StringLiteral_22152/*"onBoard_itembase"*/;
  baseImageId = itemEntity->fields.baseImageId;
  if ( baseImageId <= 0 )
    return (System_String_o *)StringLiteral_22152/*"onBoard_itembase"*/;
  v9 = baseImageId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format((System_String_o *)StringLiteral_22153/*"onBoard_itembase_{0}"*/, v7, 0LL);
}


WarBoardItemComponent_o *__fastcall WarBoardItemData__get_Component(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields.component;
}


bool __fastcall WarBoardItemData__get_IsAiTargetable(WarBoardItemData_o *this, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (this->fields.forceId & 0x80000000) != 0 )
    LOBYTE(v2) = 1;
  else
    return (unsigned int)this->fields.groupId >> 31;
  return v2;
}


bool __fastcall WarBoardItemData__get_IsPutInit(WarBoardItemData_o *this, const MethodInfo *method)
{
  return 1;
}


int32_t __fastcall WarBoardItemData__get_NowSquareIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t __fastcall WarBoardItemData__get_PutSquareIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


System_String_o *__fastcall WarBoardItemData__get_description(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_StaticFields *p_effectName; // x8

  if ( (byte_49FA22B & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    byte_49FA22B = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    p_effectName = (struct System_String_StaticFields *)&itemEntity->fields.effectName;
  else
    p_effectName = string_TypeInfo->static_fields;
  return p_effectName->Empty;
}


int32_t __fastcall WarBoardItemData__get_evalValue(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    sub_1B64324(this);
  return itemEntity->fields.evalValue;
}


System_Int32_array *__fastcall WarBoardItemData__get_individuality(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


bool __fastcall WarBoardItemData__get_isUse(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._isUse_k__BackingField;
}


int32_t __fastcall WarBoardItemData__get_itemEntityIconId(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.iconId;
  else
    return 0;
}


System_String_o *__fastcall WarBoardItemData__get_name(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_StaticFields *p_name; // x8

  if ( (byte_49FA22A & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    byte_49FA22A = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    p_name = (struct System_String_StaticFields *)&itemEntity->fields.name;
  else
    p_name = string_TypeInfo->static_fields;
  return p_name->Empty;
}


int32_t __fastcall WarBoardItemData__get_squareIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


void __fastcall WarBoardItemData__set_individuality(
        WarBoardItemData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._individuality_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall WarBoardItemData__set_isUse(WarBoardItemData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isUse_k__BackingField = value;
}


void __fastcall WarBoardItemData__set_squareIndex(WarBoardItemData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._squareIndex_k__BackingField = value;
}


void __fastcall WarBoardItemData_SaveData___ctor(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.pieceIndex = -1;
  *(_QWORD *)&this->fields.forceId = -1LL;
  this->fields.squareIndex = -1;
  this->fields.isUse = 0;
}


void __fastcall WarBoardItemData_SaveData___ctor_35241216(
        WarBoardItemData_SaveData_o *this,
        WarBoardItemData_o *owner,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct WarBoardItemData_o *v10; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.owner, (int32_t)owner, v5, v6);
  WarBoardItemData_SaveData__Save(this, v7);
  v10 = this->fields.owner;
  if ( !v10 )
    sub_1B64324(0LL);
  v10->fields.localSaveData = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->fields.localSaveData, (int32_t)this, v8, v9);
}


void __fastcall WarBoardItemData_SaveData__Load(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *owner; // x12
  bool isUse; // w8
  struct WarBoardUserGetItemData_o *serverData; // x13
  int32_t forceId; // w9
  int32_t groupId; // w10
  int32_t pieceIndex; // w11

  owner = this->fields.owner;
  if ( owner )
  {
    isUse = this->fields.isUse;
    serverData = owner->fields.serverData;
    owner->fields._isUse_k__BackingField = isUse;
    forceId = this->fields.forceId;
    owner->fields.forceId = forceId;
    groupId = this->fields.groupId;
    owner->fields.groupId = groupId;
    pieceIndex = this->fields.pieceIndex;
    owner->fields.pieceIndex = pieceIndex;
    if ( serverData )
    {
      serverData->fields.isUse = isUse;
      serverData->fields.forceId = forceId;
      serverData->fields.groupId = groupId;
      serverData->fields.pieceIndex = pieceIndex;
    }
  }
}


void __fastcall WarBoardItemData_SaveData__Save(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *owner; // x8

  owner = this->fields.owner;
  if ( !owner )
    sub_1B64324(this);
  this->fields.squareIndex = owner->fields._squareIndex_k__BackingField;
  this->fields.isUse = owner->fields._isUse_k__BackingField;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&owner->fields.forceId;
  this->fields.pieceIndex = owner->fields.pieceIndex;
}


void __fastcall WarBoardItemData_SaveData__SetOwner(
        WarBoardItemData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardItemData_o *Item; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  struct WarBoardItemData_o *owner; // x0

  if ( !data )
    sub_1B64324(this);
  Item = WarBoardData__GetItem(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.owner, (int32_t)Item, v5, v6);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&owner->fields.localSaveData, (int32_t)this, v7, v8);
  }
}


void __fastcall WarBoardItemData___c__DisplayClass54_0___ctor(
        WarBoardItemData___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardItemData___c__DisplayClass54_0___Use_b__0(
        WarBoardItemData___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *piece; // x0

  piece = this->fields.piece;
  if ( !piece )
    sub_1B64324(0LL);
  WarBoardPieceData__ChangeStatus(piece, method);
}