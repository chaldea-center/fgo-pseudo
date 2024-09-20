void __fastcall WarBoardItemData___ctor(
        WarBoardItemData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserGetItemData_o *getItemData,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct System_Int32_array *Individuality; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *Entity; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A58F41 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A58F41 = 1;
  }
  *(_QWORD *)&this->fields.forceId = -1LL;
  *(_QWORD *)&this->fields.pieceIndex = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.serverData = getItemData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.serverData, (int32_t)getItemData, v7, v8);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.itemId = layout->fields.effectId,
        Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL),
        this->fields._individuality_k__BackingField = Individuality,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields._individuality_k__BackingField,
          (int32_t)Individuality,
          v12,
          v13),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardItemMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.itemId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
  this->fields.itemEntity = (struct WarBoardItemEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemEntity, (int32_t)Entity, v15, v16);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(localSaveData, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.component, (int32_t)component, (int32_t)method, v3);
}


void __fastcall WarBoardItemData__SetItemEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1B8880C(0LL, enable);
  WarBoardItemComponent__SetColliderEnable(component, enable, 0LL);
}


void __fastcall WarBoardItemData__SetTouchEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1B8880C(0LL, enable);
  WarBoardItemComponent__SetTouchEnable(component, enable, 0LL);
}


System_String_o *__fastcall WarBoardItemData__ToJson(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardUserGetItemData_o *serverData; // x20
  struct WarBoardUserGetItemData_o **p_serverData; // x21
  Il2CppObject *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A58F48 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&WarBoardUserGetItemData_TypeInfo);
    byte_4A58F48 = 1;
  }
  p_serverData = &this->fields.serverData;
  serverData = this->fields.serverData;
  if ( !serverData )
  {
    v5 = (Il2CppObject *)sub_1B887FC(WarBoardUserGetItemData_TypeInfo);
    System_Object___ctor(v5, 0LL);
    *p_serverData = (struct WarBoardUserGetItemData_o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.serverData, (int32_t)v5, v6, v7);
    serverData = *p_serverData;
    if ( !*p_serverData )
      sub_1B8880C(v8, v9);
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
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x20
  System_Func_object__bool__o *v6; // x21
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct WarBoardUserGetItemData_o *serverData; // x8

  if ( (byte_4A58F47 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    sub_1B885B0(&System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardItemData__UpdateFromServerData_b__60_0__);
    byte_4A58F47 = 1;
  }
  if ( warBoardDataEnt )
  {
    getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEnt->fields.getItemInfo;
    v6 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v6,
      (Il2CppObject *)this,
      Method_WarBoardItemData__UpdateFromServerData_b__60_0__,
      0LL);
    v7 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
           getItemInfo,
           (System_Func_TSource__bool__o *)v6,
           (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    this->fields.serverData = (struct WarBoardUserGetItemData_o *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.serverData, (int32_t)v7, v8, v9);
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
  __int64 v9; // x21
  __int64 component; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x23
  __int64 v15; // x8
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x8
  System_String_o *v18; // x24
  DataVals_o *v19; // x0
  __int64 v20; // x8
  int v21; // w25
  __int64 v22; // x24
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  struct WarBoardItemEntity_o *v28; // x8
  struct System_Int32_array *funcId; // x1
  const MethodInfo *v30; // x1
  DataVals_array *DataValsList; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  BattleServantData_o *v34; // x22
  int32_t v35; // w0
  __int64 v36; // x22
  WarBoardTaskBase_TaskCallback_o *v37; // x23
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  Il2CppObject *Instance; // x20
  __int64 v47; // x21
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x0

  if ( (byte_4A58F45 & 1) == 0 )
  {
    sub_1B885B0(&DataVals_TypeInfo);
    sub_1B885B0(&WarBoardManager_ExecuteProcParam_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__);
    sub_1B885B0(&WarBoardItemData___c__DisplayClass54_0_TypeInfo);
    sub_1B885B0(&WarBoardCallbackTask_TypeInfo);
    sub_1B885B0(&WarBoardTaskBase___TypeInfo);
    byte_4A58F45 = 1;
  }
  v9 = sub_1B887FC(WarBoardItemData___c__DisplayClass54_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_31;
  *(_QWORD *)(v9 + 16) = piece;
  v14 = v9 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)piece, v12, v13);
  v15 = *(_QWORD *)(v9 + 16);
  if ( !v15 )
    goto LABEL_31;
  if ( *(_DWORD *)(v15 + 16) == 1 )
    return;
  component = (__int64)this->fields.component;
  this->fields._isUse_k__BackingField = 1;
  if ( !component )
    goto LABEL_31;
  WarBoardItemComponent__OnUse((WarBoardItemComponent_o *)component, *(_DWORD *)(v15 + 64), taskList, 0, 0LL);
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_31;
  svals = itemEntity->fields.svals;
  if ( !svals )
    goto LABEL_31;
  if ( !svals->max_length )
    goto LABEL_32;
  v18 = svals->m_Items[0];
  v19 = (DataVals_o *)sub_1B887FC(DataVals_TypeInfo);
  DataVals___ctor(v19, v18, 0LL);
  if ( !*(_QWORD *)v14 )
    goto LABEL_31;
  component = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
  if ( !component )
    goto LABEL_31;
  BattleServantData__updateResultState((BattleServantData_o *)component, 0LL);
  if ( !*(_QWORD *)v14 )
    goto LABEL_31;
  v20 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
  if ( !v20 )
    goto LABEL_31;
  v21 = *(_DWORD *)(v20 + 24);
  v22 = sub_1B887FC(WarBoardManager_ExecuteProcParam_TypeInfo);
  *(_BYTE *)(v22 + 64) = 1;
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  v23 = *(_QWORD *)v14;
  *(_QWORD *)(v22 + 16) = *(_QWORD *)v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 16), v23, v24, v25);
  *(_DWORD *)(v22 + 24) = v21;
  *(_DWORD *)(v22 + 28) = v21;
  v28 = this->fields.itemEntity;
  if ( !v28 )
    goto LABEL_31;
  funcId = v28->fields.funcId;
  *(_QWORD *)(v22 + 32) = funcId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)funcId, v26, v27);
  DataValsList = WarBoardItemData__getDataValsList(this, v30);
  *(_QWORD *)(v22 + 40) = DataValsList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 40), (int32_t)DataValsList, v32, v33);
  *(_BYTE *)(v22 + 64) = 0;
  component = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !component )
    goto LABEL_31;
  component = WarBoardManager__ExecuteProcList(
                (WarBoardManager_o *)component,
                (WarBoardManager_ExecuteProcParam_o *)v22,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL);
  if ( !*(_QWORD *)v14 )
    goto LABEL_31;
  v34 = *(BattleServantData_o **)(*(_QWORD *)v14 + 128LL);
  if ( !v34 )
    goto LABEL_31;
  v35 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v34->klass->vtable._13_get_resultHp.method)(
          v34,
          v34->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__setHp(v34, v35, 0, 0LL);
  v36 = sub_1B887FC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v36, 0LL, 0LL);
  v37 = (WarBoardTaskBase_TaskCallback_o *)sub_1B887FC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v37,
    (Il2CppObject *)v9,
    Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__,
    0LL);
  if ( !v36 )
    goto LABEL_31;
  *(_QWORD *)(v36 + 40) = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 40), (int32_t)v37, v38, v39);
  if ( taskList )
  {
    items = taskList->fields._items;
    v43 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( items )
    {
      size = taskList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)v36,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + size;
        taskList->fields._size = size + 1;
        v45[4] = (Il2CppClass *)v36;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 4), v36, v40, v41);
      }
      return;
    }
LABEL_31:
    sub_1B8880C(component, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  component = sub_1B88658(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !component )
    goto LABEL_31;
  v47 = component;
  component = sub_1B886EC(v36, *(_QWORD *)(*(_QWORD *)component + 64LL));
  if ( !component )
  {
    v50 = sub_1B88830(0LL);
    sub_1B886D8(v50, 0LL);
  }
  if ( !*(_DWORD *)(v47 + 24) )
LABEL_32:
    sub_1B88814(component, v11);
  *(_QWORD *)(v47 + 32) = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v47 + 32), v36, v48, v49);
  if ( !Instance )
    goto LABEL_31;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v47, 0LL);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v47, 0LL);
}


bool __fastcall WarBoardItemData___UpdateFromServerData_b__60_0(
        WarBoardItemData_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.squareIndex == this->fields._squareIndex_k__BackingField;
}


DataVals_array *__fastcall WarBoardItemData__getDataValsList(WarBoardItemData_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *v2; // x19
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x23
  __int64 v5; // x8
  DataVals_array *v6; // x19
  unsigned __int64 v7; // x24
  System_String_o **m_Items; // x25
  ServantStatusBattleListViewItem_o *p_forceId; // x20
  System_String_o *v10; // x22
  DataVals_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  DataVals_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v18; // x0

  v2 = this;
  if ( (byte_4A58F46 & 1) == 0 )
  {
    sub_1B885B0(&DataVals___TypeInfo);
    sub_1B885B0(&DataVals_TypeInfo);
    this = (WarBoardItemData_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58F46 = 1;
  }
  itemEntity = v2->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_21;
  svals = itemEntity->fields.svals;
  if ( !svals )
  {
    v6 = (DataVals_array *)sub_1B88658(DataVals___TypeInfo, 1LL);
    v14 = (DataVals_o *)sub_1B887FC(DataVals_TypeInfo);
    DataVals___ctor(v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v6 )
    {
      if ( v14 )
      {
        this = (WarBoardItemData_o *)sub_1B886EC(v14, v6->obj.klass->_1.element_class);
        if ( !this )
        {
LABEL_22:
          v18 = sub_1B88830(this);
          sub_1B886D8(v18, 0LL);
        }
      }
      if ( !v6->max_length )
        goto LABEL_20;
      v6->m_Items[0] = v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)v6->m_Items, (int32_t)v14, v15, v16);
      return v6;
    }
LABEL_21:
    sub_1B8880C(this, method);
  }
  this = (WarBoardItemData_o *)sub_1B88658(DataVals___TypeInfo, svals->max_length);
  v5 = *(_QWORD *)&svals->max_length;
  v6 = (DataVals_array *)this;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    m_Items = svals->m_Items;
    p_forceId = (ServantStatusBattleListViewItem_o *)&this->fields.forceId;
    while ( v7 < (unsigned int)v5 )
    {
      v10 = *m_Items;
      v11 = (DataVals_o *)sub_1B887FC(DataVals_TypeInfo);
      DataVals___ctor(v11, v10, 0LL);
      if ( !v6 )
        goto LABEL_21;
      if ( v11 )
      {
        this = (WarBoardItemData_o *)sub_1B886EC(v11, v6->obj.klass->_1.element_class);
        if ( !this )
          goto LABEL_22;
      }
      if ( v7 >= v6->max_length )
        break;
      p_forceId->klass = (ServantStatusBattleListViewItem_c *)v11;
      sub_1B88554(p_forceId, (int32_t)v11, v12, v13);
      LODWORD(v5) = svals->max_length;
      ++v7;
      ++m_Items;
      p_forceId = (ServantStatusBattleListViewItem_o *)((char *)p_forceId + 8);
      if ( (__int64)v7 >= (int)v5 )
        return v6;
    }
LABEL_20:
    sub_1B88814(this, method);
  }
  return v6;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  struct WarBoardItemEntity_o *itemEntity; // x8
  int baseImageId; // w8
  Il2CppObject *v8; // x0
  int v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4A58F44 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_22241/*"onBoard_itembase_{0}"*/);
    sub_1B885B0(&StringLiteral_22240/*"onBoard_itembase"*/);
    byte_4A58F44 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    return (System_String_o *)StringLiteral_22240/*"onBoard_itembase"*/;
  baseImageId = itemEntity->fields.baseImageId;
  if ( baseImageId <= 0 )
    return (System_String_o *)StringLiteral_22240/*"onBoard_itembase"*/;
  v10 = baseImageId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_22241/*"onBoard_itembase_{0}"*/, v8, 0LL);
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

  if ( (byte_4A58F43 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    byte_4A58F43 = 1;
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
    sub_1B8880C(this, method);
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

  if ( (byte_4A58F42 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    byte_4A58F42 = 1;
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
  sub_1B88554(
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


void __fastcall WarBoardItemData_SaveData___ctor_35540044(
        WarBoardItemData_SaveData_o *this,
        WarBoardItemData_o *owner,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct WarBoardItemData_o *v11; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.owner, (int32_t)owner, v5, v6);
  WarBoardItemData_SaveData__Save(this, v7);
  v11 = this->fields.owner;
  if ( !v11 )
    sub_1B8880C(0LL, v8);
  v11->fields.localSaveData = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->fields.localSaveData, (int32_t)this, v9, v10);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, 0LL);
  Item = WarBoardData__GetItem(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.owner, (int32_t)Item, v5, v6);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&owner->fields.localSaveData, (int32_t)this, v7, v8);
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
    sub_1B8880C(0LL, method);
  WarBoardPieceData__ChangeStatus(piece, method);
}