void __fastcall WarBoardItemData___ctor(
        WarBoardItemData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserGetItemData_o *getItemData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  struct System_Int32_array *Individuality; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *Entity; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4B425F4 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_WarBoardItemMaster___, layout);
    sub_1BDB878(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B425F4 = 1;
  }
  *(_QWORD *)&this->fields.forceId = -1LL;
  *(_QWORD *)&this->fields.pieceIndex = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.serverData = getItemData;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.serverData, (int32_t)getItemData, v9, v10);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.itemId = layout->fields.effectId,
        Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL),
        this->fields._individuality_k__BackingField = Individuality,
        sub_1BDB81C(
          (CGThumbnailListItem_o *)&this->fields._individuality_k__BackingField,
          (int32_t)Individuality,
          v14,
          v15),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_WarBoardItemMaster___)) == 0LL )
  {
    sub_1BDBAD4(Instance, v12);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.itemId,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
  this->fields.itemEntity = (struct WarBoardItemEntity_o *)Entity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.itemEntity, (int32_t)Entity, v17, v18);
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
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(localSaveData, method);
  }
  WarBoardItemComponent__Reset((WarBoardItemComponent_o *)localSaveData, 0LL);
}


void __fastcall WarBoardItemData__SetComponent(
        WarBoardItemData_o *this,
        WarBoardItemComponent_o *component,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.component = component;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.component, (int32_t)component, (int32_t)method, v3);
}


void __fastcall WarBoardItemData__SetItemEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1BDBAD4(0LL, enable);
  WarBoardItemComponent__SetColliderEnable(component, enable, 0LL);
}


void __fastcall WarBoardItemData__SetTouchEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1BDBAD4(0LL, enable);
  WarBoardItemComponent__SetTouchEnable(component, enable, 0LL);
}


System_String_o *__fastcall WarBoardItemData__ToJson(WarBoardItemData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarBoardUserGetItemData_o *serverData; // x20
  struct WarBoardUserGetItemData_o **p_serverData; // x21
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B425FB & 1) == 0 )
  {
    sub_1BDB878(&JsonManager_TypeInfo, method);
    sub_1BDB878(&WarBoardUserGetItemData_TypeInfo, v3);
    byte_4B425FB = 1;
  }
  p_serverData = &this->fields.serverData;
  serverData = this->fields.serverData;
  if ( !serverData )
  {
    v6 = (Il2CppObject *)sub_1BDBAC4(WarBoardUserGetItemData_TypeInfo);
    System_Object___ctor(v6, 0LL);
    *p_serverData = (struct WarBoardUserGetItemData_o *)v6;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.serverData, (int32_t)v6, v7, v8);
    serverData = *p_serverData;
    if ( !*p_serverData )
      sub_1BDBAD4(v9, v10);
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
  const MethodInfo *v11; // x3
  struct WarBoardUserGetItemData_o *serverData; // x8

  if ( (byte_4B425FA & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, warBoardDataEnt);
    sub_1BDB878(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v5);
    sub_1BDB878(&Method_WarBoardItemData__UpdateFromServerData_b__60_0__, v6);
    byte_4B425FA = 1;
  }
  if ( warBoardDataEnt )
  {
    getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEnt->fields.getItemInfo;
    v8 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v8,
      (Il2CppObject *)this,
      Method_WarBoardItemData__UpdateFromServerData_b__60_0__,
      0LL);
    v9 = System_Linq_Enumerable__FirstOrDefault_object__50698552(
           getItemInfo,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    this->fields.serverData = (struct WarBoardUserGetItemData_o *)v9;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.serverData, (int32_t)v9, v10, v11);
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
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x23
  __int64 v23; // x8
  __int64 v24; // x2
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x8
  System_String_o *v27; // x24
  DataVals_o *v28; // x0
  __int64 v29; // x8
  int v30; // w25
  __int64 v31; // x24
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct WarBoardItemEntity_o *v37; // x8
  struct System_Int32_array *funcId; // x1
  const MethodInfo *v39; // x1
  DataVals_array *DataValsList; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  BattleServantData_o *v43; // x22
  int32_t v44; // w0
  __int64 v45; // x22
  WarBoardTaskBase_TaskCallback_o *v46; // x23
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  Il2CppObject *Instance; // x20
  __int64 v56; // x21
  const MethodInfo *v57; // x3
  __int64 v58; // x0

  if ( (byte_4B425F8 & 1) == 0 )
  {
    sub_1BDB878(&DataVals_TypeInfo, piece);
    sub_1BDB878(&WarBoardManager_ExecuteProcParam_TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1BDB878(&WarBoardTaskBase_TaskCallback_TypeInfo, v12);
    sub_1BDB878(&Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__, v13);
    sub_1BDB878(&WarBoardItemData___c__DisplayClass54_0_TypeInfo, v14);
    sub_1BDB878(&WarBoardCallbackTask_TypeInfo, v15);
    sub_1BDB878(&WarBoardTaskBase___TypeInfo, v16);
    byte_4B425F8 = 1;
  }
  v17 = sub_1BDBAC4(WarBoardItemData___c__DisplayClass54_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_31;
  *(_QWORD *)(v17 + 16) = piece;
  v22 = v17 + 16;
  sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)piece, v20, v21);
  v23 = *(_QWORD *)(v17 + 16);
  if ( !v23 )
    goto LABEL_31;
  if ( *(_DWORD *)(v23 + 16) == 1 )
    return;
  component = (__int64)this->fields.component;
  this->fields._isUse_k__BackingField = 1;
  if ( !component )
    goto LABEL_31;
  WarBoardItemComponent__OnUse((WarBoardItemComponent_o *)component, *(_DWORD *)(v23 + 64), taskList, 0, 0LL);
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_31;
  svals = itemEntity->fields.svals;
  if ( !svals )
    goto LABEL_31;
  if ( !svals->max_length )
    goto LABEL_32;
  v27 = svals->m_Items[0];
  v28 = (DataVals_o *)sub_1BDBAC4(DataVals_TypeInfo);
  DataVals___ctor(v28, v27, 0LL);
  if ( !*(_QWORD *)v22 )
    goto LABEL_31;
  component = *(_QWORD *)(*(_QWORD *)v22 + 128LL);
  if ( !component )
    goto LABEL_31;
  BattleServantData__updateResultState((BattleServantData_o *)component, 0LL);
  if ( !*(_QWORD *)v22 )
    goto LABEL_31;
  v29 = *(_QWORD *)(*(_QWORD *)v22 + 128LL);
  if ( !v29 )
    goto LABEL_31;
  v30 = *(_DWORD *)(v29 + 24);
  v31 = sub_1BDBAC4(WarBoardManager_ExecuteProcParam_TypeInfo);
  *(_BYTE *)(v31 + 64) = 1;
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  v32 = *(_QWORD *)v22;
  *(_QWORD *)(v31 + 16) = *(_QWORD *)v22;
  sub_1BDB81C((CGThumbnailListItem_o *)(v31 + 16), v32, v33, v34);
  *(_DWORD *)(v31 + 24) = v30;
  *(_DWORD *)(v31 + 28) = v30;
  v37 = this->fields.itemEntity;
  if ( !v37 )
    goto LABEL_31;
  funcId = v37->fields.funcId;
  *(_QWORD *)(v31 + 32) = funcId;
  sub_1BDB81C((CGThumbnailListItem_o *)(v31 + 32), (int32_t)funcId, v35, v36);
  DataValsList = WarBoardItemData__getDataValsList(this, v39);
  *(_QWORD *)(v31 + 40) = DataValsList;
  sub_1BDB81C((CGThumbnailListItem_o *)(v31 + 40), (int32_t)DataValsList, v41, v42);
  *(_BYTE *)(v31 + 64) = 0;
  component = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !component )
    goto LABEL_31;
  component = WarBoardManager__ExecuteProcList(
                (WarBoardManager_o *)component,
                (WarBoardManager_ExecuteProcParam_o *)v31,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL);
  if ( !*(_QWORD *)v22 )
    goto LABEL_31;
  v43 = *(BattleServantData_o **)(*(_QWORD *)v22 + 128LL);
  if ( !v43 )
    goto LABEL_31;
  v44 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v43->klass->vtable._13_get_resultHp.method)(
          v43,
          v43->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__setHp(v43, v44, 0, 0LL);
  v45 = sub_1BDBAC4(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v45, 0LL, 0LL);
  v46 = (WarBoardTaskBase_TaskCallback_o *)sub_1BDBAC4(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v46,
    (Il2CppObject *)v17,
    Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__,
    0LL);
  if ( !v45 )
    goto LABEL_31;
  *(_QWORD *)(v45 + 40) = v46;
  sub_1BDB81C((CGThumbnailListItem_o *)(v45 + 40), (int32_t)v46, v47, v48);
  if ( taskList )
  {
    items = taskList->fields._items;
    v52 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( items )
    {
      size = taskList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)v45,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        taskList->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v45;
        sub_1BDB81C((CGThumbnailListItem_o *)(v54 + 4), v45, v49, v50);
      }
      return;
    }
LABEL_31:
    sub_1BDBAD4(component, v19);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  component = sub_1BDB920(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !component )
    goto LABEL_31;
  v56 = component;
  component = sub_1BDB9B4(v45, *(_QWORD *)(*(_QWORD *)component + 64LL));
  if ( !component )
  {
    v58 = sub_1BDBAF8();
    sub_1BDB9A0(v58, 0LL);
  }
  if ( !*(_DWORD *)(v56 + 24) )
LABEL_32:
    sub_1BDBADC(component, v19, v24);
  *(_QWORD *)(v56 + 32) = v45;
  sub_1BDB81C((CGThumbnailListItem_o *)(v56 + 32), v45, v24, v57);
  if ( !Instance )
    goto LABEL_31;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v56, 0LL);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v56, 0LL);
}


bool __fastcall WarBoardItemData___UpdateFromServerData_b__60_0(
        WarBoardItemData_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.squareIndex == this->fields._squareIndex_k__BackingField;
}


DataVals_array *__fastcall WarBoardItemData__getDataValsList(WarBoardItemData_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x23
  __int64 v7; // x2
  __int64 v8; // x8
  DataVals_array *v9; // x19
  unsigned __int64 v10; // x24
  System_String_o **m_Items; // x25
  CGThumbnailListItem_o *p_forceId; // x20
  System_String_o *v13; // x22
  DataVals_o *v14; // x21
  const MethodInfo *v15; // x3
  DataVals_o *v16; // x20
  const MethodInfo *v17; // x3
  __int64 v19; // x0

  v2 = this;
  if ( (byte_4B425F9 & 1) == 0 )
  {
    sub_1BDB878(&DataVals___TypeInfo, method);
    sub_1BDB878(&DataVals_TypeInfo, v3);
    this = (WarBoardItemData_o *)sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B425F9 = 1;
  }
  itemEntity = v2->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_21;
  svals = itemEntity->fields.svals;
  if ( !svals )
  {
    v9 = (DataVals_array *)sub_1BDB920(DataVals___TypeInfo, 1LL);
    v16 = (DataVals_o *)sub_1BDBAC4(DataVals_TypeInfo);
    DataVals___ctor(v16, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v9 )
    {
      if ( v16 )
      {
        this = (WarBoardItemData_o *)sub_1BDB9B4(v16, v9->obj.klass->_1.element_class);
        if ( !this )
        {
LABEL_22:
          v19 = sub_1BDBAF8();
          sub_1BDB9A0(v19, 0LL);
        }
      }
      if ( !v9->max_length )
        goto LABEL_20;
      v9->m_Items[0] = v16;
      sub_1BDB81C((CGThumbnailListItem_o *)v9->m_Items, (int32_t)v16, v7, v17);
      return v9;
    }
LABEL_21:
    sub_1BDBAD4(this, method);
  }
  this = (WarBoardItemData_o *)sub_1BDB920(DataVals___TypeInfo, svals->max_length);
  v8 = *(_QWORD *)&svals->max_length;
  v9 = (DataVals_array *)this;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    m_Items = svals->m_Items;
    p_forceId = (CGThumbnailListItem_o *)&this->fields.forceId;
    while ( v10 < (unsigned int)v8 )
    {
      v13 = *m_Items;
      v14 = (DataVals_o *)sub_1BDBAC4(DataVals_TypeInfo);
      DataVals___ctor(v14, v13, 0LL);
      if ( !v9 )
        goto LABEL_21;
      if ( v14 )
      {
        this = (WarBoardItemData_o *)sub_1BDB9B4(v14, v9->obj.klass->_1.element_class);
        if ( !this )
          goto LABEL_22;
      }
      if ( v10 >= v9->max_length )
        break;
      p_forceId->klass = (CGThumbnailListItem_c *)v14;
      sub_1BDB81C(p_forceId, (int32_t)v14, v7, v15);
      LODWORD(v8) = svals->max_length;
      ++v10;
      ++m_Items;
      p_forceId = (CGThumbnailListItem_o *)((char *)p_forceId + 8);
      if ( (__int64)v10 >= (int)v8 )
        return v9;
    }
LABEL_20:
    sub_1BDBADC(this, method, v7);
  }
  return v9;
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
  __int64 v6; // x1
  __int64 v7; // x1
  struct WarBoardItemEntity_o *itemEntity; // x8
  int baseImageId; // w8
  Il2CppObject *v10; // x0
  int v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B425F7 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&StringLiteral_22417/*"onBoard_itembase_{0}"*/, v6);
    sub_1BDB878(&StringLiteral_22416/*"onBoard_itembase"*/, v7);
    byte_4B425F7 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    return (System_String_o *)StringLiteral_22416/*"onBoard_itembase"*/;
  baseImageId = itemEntity->fields.baseImageId;
  if ( baseImageId <= 0 )
    return (System_String_o *)StringLiteral_22416/*"onBoard_itembase"*/;
  v12 = baseImageId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_22417/*"onBoard_itembase_{0}"*/, v10, 0LL);
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

  if ( (byte_4B425F6 & 1) == 0 )
  {
    sub_1BDB878(&string_TypeInfo, method);
    byte_4B425F6 = 1;
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
    sub_1BDBAD4(this, method);
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

  if ( (byte_4B425F5 & 1) == 0 )
  {
    sub_1BDB878(&string_TypeInfo, method);
    byte_4B425F5 = 1;
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
  const MethodInfo *v3; // x3

  this->fields._individuality_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._individuality_k__BackingField,
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


void __fastcall WarBoardItemData_SaveData___ctor_37100072(
        WarBoardItemData_SaveData_o *this,
        WarBoardItemData_o *owner,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct WarBoardItemData_o *v11; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.owner, (int32_t)owner, v5, v6);
  WarBoardItemData_SaveData__Save(this, v7);
  v11 = this->fields.owner;
  if ( !v11 )
    sub_1BDBAD4(0LL, v8);
  v11->fields.localSaveData = this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v11->fields.localSaveData, (int32_t)this, v9, v10);
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
    sub_1BDBAD4(this, method);
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
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct WarBoardItemData_o *owner; // x0

  if ( !data )
    sub_1BDBAD4(this, 0LL);
  Item = WarBoardData__GetItem(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Item;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.owner, (int32_t)Item, v5, v6);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1BDB81C((CGThumbnailListItem_o *)&owner->fields.localSaveData, (int32_t)this, v7, v8);
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
    sub_1BDBAD4(0LL, method);
  WarBoardPieceData__ChangeStatus(piece, method);
}