void WarBoardItemData___ctor(
        WarBoardItemData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserGetItemData_o *getItemData,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct System_Int32_array *Individuality; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *Entity; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C24E78 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_WarBoardItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C24E78 = 1;
  }
  *(_QWORD *)&this->fields.forceId = -1;
  *(_QWORD *)&this->fields.pieceIndex = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.serverData = getItemData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.serverData, (int32_t)getItemData, v7, v8);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.itemId = layout->fields.effectId,
        Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0),
        this->fields._individuality_k__BackingField = Individuality,
        sub_1C2D434(
          (CGThumbnailListItem_o *)&this->fields._individuality_k__BackingField,
          (int32_t)Individuality,
          v12,
          v13),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarBoardItemMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.itemId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
  this->fields.itemEntity = (struct WarBoardItemEntity_o *)Entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemEntity, (int32_t)Entity, v15, v16);
  this->fields._isUse_k__BackingField = 0;
  *(_QWORD *)&this->fields.forceId = -1;
  this->fields.pieceIndex = -1;
  if ( getItemData )
  {
    this->fields._isUse_k__BackingField = getItemData->fields.isUse;
    *(_QWORD *)&this->fields.forceId = *(_QWORD *)&getItemData->fields.forceId;
    this->fields.pieceIndex = getItemData->fields.pieceIndex;
  }
}


bool WarBoardItemData__CheckEnableGet(WarBoardItemData_o *this, WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_1C2D6EC(this, 0);
  return piece->fields._type_k__BackingField != 1;
}


bool WarBoardItemData__CheckImmediately(WarBoardItemData_o *this, const MethodInfo *method)
{
  return 1;
}


bool WarBoardItemData__Get(
        WarBoardItemData_o *this,
        WarBoardPieceData_o *piece,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        bool isInsertTask,
        const MethodInfo *method)
{
  int32_t type_k__BackingField; // w19

  if ( !piece )
    sub_1C2D6EC(this, 0);
  type_k__BackingField = piece->fields._type_k__BackingField;
  if ( type_k__BackingField != 1 )
  {
    *(_QWORD *)&this->fields.forceId = *(_QWORD *)&piece->fields._forceId_k__BackingField;
    this->fields.pieceIndex = piece->fields._index_k__BackingField;
    WarBoardItemData__Use(this, piece, taskList, 0, method);
  }
  return type_k__BackingField != 1;
}


System_Int32_array *WarBoardItemData__GetIndividuality(
        WarBoardItemData_o *this,
        IWarBoardObjectData_IndivGetArgs_o *args,
        const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


WarBoardItemEntity_o *WarBoardItemData__GetItemEntity(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields.itemEntity;
}


void WarBoardItemData__ResetItem(WarBoardItemData_o *this, const MethodInfo *method)
{
  WarBoardItemData_SaveData_o *localSaveData; // x0

  this->fields._isUse_k__BackingField = 0;
  localSaveData = this->fields.localSaveData;
  *(_QWORD *)&this->fields.forceId = -1;
  this->fields.pieceIndex = -1;
  if ( !localSaveData
    || (WarBoardItemData_SaveData__Save(localSaveData, method),
        (localSaveData = (WarBoardItemData_SaveData_o *)this->fields.component) == 0) )
  {
    sub_1C2D6EC(localSaveData, method);
  }
  WarBoardItemComponent__Reset((WarBoardItemComponent_o *)localSaveData, 0);
}


void WarBoardItemData__SetComponent(
        WarBoardItemData_o *this,
        WarBoardItemComponent_o *component,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.component = component;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.component, (int32_t)component, (int32_t)method, v3);
}


void WarBoardItemData__SetItemEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1C2D6EC(0, enable);
  WarBoardItemComponent__SetColliderEnable(component, enable, 0);
}


void WarBoardItemData__SetTouchEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1C2D6EC(0, enable);
  WarBoardItemComponent__SetTouchEnable(component, enable, 0);
}


System_String_o *WarBoardItemData__ToJson(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardUserGetItemData_o *serverData; // x20
  struct WarBoardUserGetItemData_o **p_serverData; // x21
  Il2CppObject *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4C24E7F & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&WarBoardUserGetItemData_TypeInfo);
    byte_4C24E7F = 1;
  }
  p_serverData = &this->fields.serverData;
  serverData = this->fields.serverData;
  if ( !serverData )
  {
    v5 = (Il2CppObject *)sub_1C2D6DC(WarBoardUserGetItemData_TypeInfo);
    System_Object___ctor(v5, 0);
    *p_serverData = (struct WarBoardUserGetItemData_o *)v5;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.serverData, (int32_t)v5, v6, v7);
    serverData = *p_serverData;
    if ( !*p_serverData )
      sub_1C2D6EC(v8, v9);
    serverData->fields.squareIndex = this->fields._squareIndex_k__BackingField;
  }
  *(_QWORD *)&serverData->fields.forceId = *(_QWORD *)&this->fields.forceId;
  serverData->fields.pieceIndex = this->fields.pieceIndex;
  serverData->fields.isUse = this->fields._isUse_k__BackingField;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)serverData, 0, 0, 0);
}


void WarBoardItemData__UpdateFromServerData(
        WarBoardItemData_o *this,
        WarBoardDataEntity_o *warBoardDataEnt,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x20
  System_Func_object__bool__o *v6; // x21
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct WarBoardUserGetItemData_o *serverData; // x8

  if ( (byte_4C24E7E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    sub_1C2D490(&System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    sub_1C2D490(&Method_WarBoardItemData__UpdateFromServerData_b__60_0__);
    byte_4C24E7E = 1;
  }
  if ( warBoardDataEnt )
  {
    getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEnt->fields.getItemInfo;
    v6 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v6,
      (Il2CppObject *)this,
      Method_WarBoardItemData__UpdateFromServerData_b__60_0__,
      0);
    v7 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
           getItemInfo,
           (System_Func_TSource__bool__o *)v6,
           (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    this->fields.serverData = (struct WarBoardUserGetItemData_o *)v7;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.serverData, (int32_t)v7, v8, v9);
    serverData = this->fields.serverData;
    if ( serverData )
    {
      *(_QWORD *)&this->fields.forceId = *(_QWORD *)&serverData->fields.forceId;
      this->fields.pieceIndex = serverData->fields.pieceIndex;
      this->fields._isUse_k__BackingField = serverData->fields.isUse;
    }
  }
}


void WarBoardItemData__Use(
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
  const MethodInfo *v13; // x3
  __int64 v14; // x23
  __int64 v15; // x8
  __int64 v16; // x2
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x8
  System_String_o *v19; // x24
  DataVals_o *v20; // x0
  __int64 v21; // x8
  int v22; // w25
  __int64 v23; // x24
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct WarBoardItemEntity_o *v29; // x8
  struct System_Int32_array *funcId; // x1
  const MethodInfo *v31; // x1
  DataVals_array *DataValsList; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  BattleServantData_o *v35; // x22
  int32_t v36; // w0
  __int64 v37; // x22
  WarBoardTaskBase_TaskCallback_o *v38; // x23
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  Il2CppObject *Instance; // x20
  __int64 v48; // x21
  const MethodInfo *v49; // x3
  __int64 v50; // x0

  if ( (byte_4C24E7C & 1) == 0 )
  {
    sub_1C2D490(&DataVals_TypeInfo);
    sub_1C2D490(&WarBoardManager_ExecuteProcParam_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__);
    sub_1C2D490(&WarBoardItemData___c__DisplayClass54_0_TypeInfo);
    sub_1C2D490(&WarBoardCallbackTask_TypeInfo);
    sub_1C2D490(&WarBoardTaskBase___TypeInfo);
    byte_4C24E7C = 1;
  }
  v9 = sub_1C2D6DC(WarBoardItemData___c__DisplayClass54_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_31;
  *(_QWORD *)(v9 + 16) = piece;
  v14 = v9 + 16;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)piece, v12, v13);
  v15 = *(_QWORD *)(v9 + 16);
  if ( !v15 )
    goto LABEL_31;
  if ( *(_DWORD *)(v15 + 16) == 1 )
    return;
  component = (__int64)this->fields.component;
  this->fields._isUse_k__BackingField = 1;
  if ( !component )
    goto LABEL_31;
  WarBoardItemComponent__OnUse((WarBoardItemComponent_o *)component, *(_DWORD *)(v15 + 64), taskList, 0, 0);
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_31;
  svals = itemEntity->fields.svals;
  if ( !svals )
    goto LABEL_31;
  if ( !LODWORD(svals->max_length) )
    goto LABEL_32;
  v19 = svals->m_Items[0];
  v20 = (DataVals_o *)sub_1C2D6DC(DataVals_TypeInfo);
  DataVals___ctor(v20, v19, 0);
  if ( !*(_QWORD *)v14 )
    goto LABEL_31;
  component = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
  if ( !component )
    goto LABEL_31;
  BattleServantData__updateResultState((BattleServantData_o *)component, 0);
  if ( !*(_QWORD *)v14 )
    goto LABEL_31;
  v21 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
  if ( !v21 )
    goto LABEL_31;
  v22 = *(_DWORD *)(v21 + 24);
  v23 = sub_1C2D6DC(WarBoardManager_ExecuteProcParam_TypeInfo);
  *(_BYTE *)(v23 + 64) = 1;
  System_Object___ctor((Il2CppObject *)v23, 0);
  v24 = *(_QWORD *)v14;
  *(_QWORD *)(v23 + 16) = *(_QWORD *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)(v23 + 16), v24, v25, v26);
  *(_DWORD *)(v23 + 24) = v22;
  *(_DWORD *)(v23 + 28) = v22;
  v29 = this->fields.itemEntity;
  if ( !v29 )
    goto LABEL_31;
  funcId = v29->fields.funcId;
  *(_QWORD *)(v23 + 32) = funcId;
  sub_1C2D434((CGThumbnailListItem_o *)(v23 + 32), (int32_t)funcId, v27, v28);
  DataValsList = WarBoardItemData__getDataValsList(this, v31);
  *(_QWORD *)(v23 + 40) = DataValsList;
  sub_1C2D434((CGThumbnailListItem_o *)(v23 + 40), (int32_t)DataValsList, v33, v34);
  *(_BYTE *)(v23 + 64) = 0;
  component = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !component )
    goto LABEL_31;
  component = WarBoardManager__ExecuteProcList(
                (WarBoardManager_o *)component,
                (WarBoardManager_ExecuteProcParam_o *)v23,
                0,
                0,
                0,
                0,
                0,
                0);
  if ( !*(_QWORD *)v14 )
    goto LABEL_31;
  v35 = *(BattleServantData_o **)(*(_QWORD *)v14 + 128LL);
  if ( !v35 )
    goto LABEL_31;
  v36 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v35->klass->vtable._13_get_resultHp.methodPtr)(
          v35,
          v35->klass->vtable._13_get_resultHp.method);
  BattleServantData__setHp(v35, v36, 0, 0, 0);
  v37 = sub_1C2D6DC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v37, 0, 0);
  v38 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v38,
    (Il2CppObject *)v9,
    Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__,
    0);
  if ( !v37 )
    goto LABEL_31;
  *(_QWORD *)(v37 + 40) = v38;
  sub_1C2D434((CGThumbnailListItem_o *)(v37 + 40), (int32_t)v38, v39, v40);
  if ( taskList )
  {
    items = taskList->fields._items;
    v44 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( items )
    {
      size = taskList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)v37,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        taskList->fields._size = size + 1;
        v46[4] = (Il2CppClass *)v37;
        sub_1C2D434((CGThumbnailListItem_o *)(v46 + 4), v37, v41, v42);
      }
      return;
    }
LABEL_31:
    sub_1C2D6EC(component, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  component = sub_1C2D538(WarBoardTaskBase___TypeInfo, 1);
  if ( !component )
    goto LABEL_31;
  v48 = component;
  component = sub_1C2D5CC(v37, *(_QWORD *)(*(_QWORD *)component + 64LL));
  if ( !component )
  {
    v50 = sub_1C2D710();
    sub_1C2D5B8(v50, 0);
  }
  if ( !*(_DWORD *)(v48 + 24) )
LABEL_32:
    sub_1C2D6F4(component, v11, v16);
  *(_QWORD *)(v48 + 32) = v37;
  sub_1C2D434((CGThumbnailListItem_o *)(v48 + 32), v37, v16, v49);
  if ( !Instance )
    goto LABEL_31;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v48, 0);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v48, 0);
}


bool WarBoardItemData___UpdateFromServerData_b__60_0(
        WarBoardItemData_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.squareIndex == this->fields._squareIndex_k__BackingField;
}


DataVals_array *WarBoardItemData__getDataValsList(WarBoardItemData_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *v2; // x19
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x23
  __int64 v5; // x2
  il2cpp_array_size_t max_length; // x8
  WarBoardItemData_o *v7; // x19
  unsigned __int64 v8; // x24
  System_String_o **m_Items; // x25
  CGThumbnailListItem_o *p_forceId; // x20
  System_String_o *v11; // x22
  DataVals_o *v12; // x21
  const MethodInfo *v13; // x3
  DataVals_o *v14; // x20
  const MethodInfo *v15; // x3
  __int64 v17; // x0

  v2 = this;
  if ( (byte_4C24E7D & 1) == 0 )
  {
    sub_1C2D490(&DataVals___TypeInfo);
    sub_1C2D490(&DataVals_TypeInfo);
    this = (WarBoardItemData_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C24E7D = 1;
  }
  itemEntity = v2->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_21;
  svals = itemEntity->fields.svals;
  if ( !svals )
  {
    v7 = (WarBoardItemData_o *)sub_1C2D538(DataVals___TypeInfo, 1);
    v14 = (DataVals_o *)sub_1C2D6DC(DataVals_TypeInfo);
    DataVals___ctor(v14, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v7 )
    {
      if ( v14 )
      {
        this = (WarBoardItemData_o *)sub_1C2D5CC(v14, v7->klass->_1.element_class);
        if ( !this )
        {
LABEL_22:
          v17 = sub_1C2D710();
          sub_1C2D5B8(v17, 0);
        }
      }
      if ( !LODWORD(v7->fields._individuality_k__BackingField) )
        goto LABEL_20;
      *(_QWORD *)&v7->fields.forceId = v14;
      sub_1C2D434((CGThumbnailListItem_o *)&v7->fields.forceId, (int32_t)v14, v5, v15);
      return (DataVals_array *)v7;
    }
LABEL_21:
    sub_1C2D6EC(this, method);
  }
  this = (WarBoardItemData_o *)sub_1C2D538(DataVals___TypeInfo, LODWORD(svals->max_length));
  max_length = svals->max_length;
  v7 = this;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    m_Items = svals->m_Items;
    p_forceId = (CGThumbnailListItem_o *)&this->fields.forceId;
    while ( v8 < (unsigned int)max_length )
    {
      v11 = *m_Items;
      v12 = (DataVals_o *)sub_1C2D6DC(DataVals_TypeInfo);
      DataVals___ctor(v12, v11, 0);
      if ( !v7 )
        goto LABEL_21;
      if ( v12 )
      {
        this = (WarBoardItemData_o *)sub_1C2D5CC(v12, v7->klass->_1.element_class);
        if ( !this )
          goto LABEL_22;
      }
      if ( v8 >= LODWORD(v7->fields._individuality_k__BackingField) )
        break;
      p_forceId->klass = (CGThumbnailListItem_c *)v12;
      sub_1C2D434(p_forceId, (int32_t)v12, v5, v13);
      LODWORD(max_length) = svals->max_length;
      ++v8;
      ++m_Items;
      p_forceId = (CGThumbnailListItem_o *)((char *)p_forceId + 8);
      if ( (__int64)v8 >= (int)max_length )
        return (DataVals_array *)v7;
    }
LABEL_20:
    sub_1C2D6F4(this, method, v5);
  }
  return (DataVals_array *)v7;
}


bool WarBoardItemData__get_Acquired(WarBoardItemData_o *this, const MethodInfo *method)
{
  return (this->fields.forceId & 0x80000000) == 0 && this->fields.groupId >= 0;
}


int32_t WarBoardItemData__get_AiTargetSortPrimeIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return 0;
}


int32_t WarBoardItemData__get_AiTargetSortSecondIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t WarBoardItemData__get_BaseImageId(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.baseImageId;
  else
    return 0;
}


System_String_o *WarBoardItemData__get_BaseImageSpriteName(WarBoardItemData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  struct WarBoardItemEntity_o *itemEntity; // x8
  int baseImageId; // w8
  Il2CppObject *v8; // x0
  int v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C24E7B & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_22378/*"onBoard_itembase_{0}"*/);
    sub_1C2D490(&StringLiteral_22377/*"onBoard_itembase"*/);
    byte_4C24E7B = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    return (System_String_o *)StringLiteral_22377/*"onBoard_itembase"*/;
  baseImageId = itemEntity->fields.baseImageId;
  if ( baseImageId <= 0 )
    return (System_String_o *)StringLiteral_22377/*"onBoard_itembase"*/;
  v10 = baseImageId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_22378/*"onBoard_itembase_{0}"*/, v8, 0);
}


WarBoardItemComponent_o *WarBoardItemData__get_Component(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields.component;
}


bool WarBoardItemData__get_IsAiTargetable(WarBoardItemData_o *this, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( this->fields.forceId < 0 )
    LOBYTE(v2) = 1;
  else
    return (unsigned int)this->fields.groupId >> 31;
  return v2;
}


bool WarBoardItemData__get_IsPutInit(WarBoardItemData_o *this, const MethodInfo *method)
{
  return 1;
}


int32_t WarBoardItemData__get_NowSquareIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t WarBoardItemData__get_PutSquareIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


System_String_o *WarBoardItemData__get_description(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_StaticFields *p_effectName; // x8

  if ( (byte_4C24E7A & 1) == 0 )
  {
    sub_1C2D490(&string_TypeInfo);
    byte_4C24E7A = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    p_effectName = (struct System_String_StaticFields *)&itemEntity->fields.effectName;
  else
    p_effectName = string_TypeInfo->static_fields;
  return p_effectName->Empty;
}


int32_t WarBoardItemData__get_evalValue(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    sub_1C2D6EC(this, method);
  return itemEntity->fields.evalValue;
}


System_Int32_array *WarBoardItemData__get_individuality(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


bool WarBoardItemData__get_isUse(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._isUse_k__BackingField;
}


int32_t WarBoardItemData__get_itemEntityIconId(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.iconId;
  else
    return 0;
}


System_String_o *WarBoardItemData__get_name(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_StaticFields *p_name; // x8

  if ( (byte_4C24E79 & 1) == 0 )
  {
    sub_1C2D490(&string_TypeInfo);
    byte_4C24E79 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    p_name = (struct System_String_StaticFields *)&itemEntity->fields.name;
  else
    p_name = string_TypeInfo->static_fields;
  return p_name->Empty;
}


int32_t WarBoardItemData__get_squareIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


void WarBoardItemData__set_individuality(WarBoardItemData_o *this, System_Int32_array *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._individuality_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void WarBoardItemData__set_isUse(WarBoardItemData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isUse_k__BackingField = value;
}


void WarBoardItemData__set_squareIndex(WarBoardItemData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._squareIndex_k__BackingField = value;
}


void WarBoardItemData_SaveData___ctor(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.pieceIndex = -1;
  *(_QWORD *)&this->fields.forceId = -1;
  this->fields.squareIndex = -1;
  this->fields.isUse = 0;
}


void WarBoardItemData_SaveData___ctor_37908992(
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

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.owner = owner;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.owner, (int32_t)owner, v5, v6);
  WarBoardItemData_SaveData__Save(this, v7);
  v11 = this->fields.owner;
  if ( !v11 )
    sub_1C2D6EC(0, v8);
  v11->fields.localSaveData = this;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.localSaveData, (int32_t)this, v9, v10);
}


void WarBoardItemData_SaveData__Load(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
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


void WarBoardItemData_SaveData__Save(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *owner; // x8

  owner = this->fields.owner;
  if ( !owner )
    sub_1C2D6EC(this, method);
  this->fields.squareIndex = owner->fields._squareIndex_k__BackingField;
  this->fields.isUse = owner->fields._isUse_k__BackingField;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&owner->fields.forceId;
  this->fields.pieceIndex = owner->fields.pieceIndex;
}


void WarBoardItemData_SaveData__SetOwner(
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
    sub_1C2D6EC(this, 0);
  Item = WarBoardData__GetItem(data, this->fields.squareIndex, 0);
  this->fields.owner = Item;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.owner, (int32_t)Item, v5, v6);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1C2D434((CGThumbnailListItem_o *)&owner->fields.localSaveData, (int32_t)this, v7, v8);
  }
}


void WarBoardItemData___c__DisplayClass54_0___ctor(
        WarBoardItemData___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardItemData___c__DisplayClass54_0___Use_b__0(
        WarBoardItemData___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *piece; // x0

  piece = this->fields.piece;
  if ( !piece )
    sub_1C2D6EC(0, method);
  WarBoardPieceData__ChangeStatus(piece, method);
}