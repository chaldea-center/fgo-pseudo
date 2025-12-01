void WarBoardItemData___ctor(
        WarBoardItemData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserGetItemData_o *getItemData,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  struct System_Int32_array *Individuality; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *Entity; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4CC4F3F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_WarBoardItemMaster___);
    sub_1C713B0(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC4F3F = 1;
  }
  *(_QWORD *)&this->fields.forceId = -1;
  *(_QWORD *)&this->fields.pieceIndex = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.serverData = getItemData;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.serverData, (int32_t)getItemData, v7, v8, v9, v10, v11, v12);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.itemId = layout->fields.effectId,
        Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0),
        this->fields._individuality_k__BackingField = Individuality,
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields._individuality_k__BackingField,
          (int32_t)Individuality,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_WarBoardItemMaster___)) == 0 )
  {
    sub_1C71608(Instance, v14);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.itemId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
  this->fields.itemEntity = (struct WarBoardItemEntity_o *)Entity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemEntity, (int32_t)Entity, v23, v24, v25, v26, v27, v28);
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
    sub_1C71608(this, 0);
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
    sub_1C71608(this, 0);
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
    sub_1C71608(localSaveData, method);
  }
  WarBoardItemComponent__Reset((WarBoardItemComponent_o *)localSaveData, 0);
}


void WarBoardItemData__SetComponent(
        WarBoardItemData_o *this,
        WarBoardItemComponent_o *component,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.component = component;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.component,
    (int32_t)component,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardItemData__SetItemEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1C71608(0, enable);
  WarBoardItemComponent__SetColliderEnable(component, enable, 0);
}


void WarBoardItemData__SetTouchEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1C71608(0, enable);
  WarBoardItemComponent__SetTouchEnable(component, enable, 0);
}


System_String_o *WarBoardItemData__ToJson(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardUserGetItemData_o *serverData; // x20
  struct WarBoardUserGetItemData_o **p_serverData; // x21
  Il2CppObject *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4CC4F46 & 1) == 0 )
  {
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&WarBoardUserGetItemData_TypeInfo);
    byte_4CC4F46 = 1;
  }
  p_serverData = &this->fields.serverData;
  serverData = this->fields.serverData;
  if ( !serverData )
  {
    v5 = (Il2CppObject *)sub_1C715FC(WarBoardUserGetItemData_TypeInfo);
    System_Object___ctor(v5, 0);
    *p_serverData = (struct WarBoardUserGetItemData_o *)v5;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.serverData, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    serverData = *p_serverData;
    if ( !*p_serverData )
      sub_1C71608(v12, v13);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct WarBoardUserGetItemData_o *serverData; // x8

  if ( (byte_4CC4F45 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    sub_1C713B0(&System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    sub_1C713B0(&Method_WarBoardItemData__UpdateFromServerData_b__60_0__);
    byte_4CC4F45 = 1;
  }
  if ( warBoardDataEnt )
  {
    getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEnt->fields.getItemInfo;
    v6 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v6,
      (Il2CppObject *)this,
      Method_WarBoardItemData__UpdateFromServerData_b__60_0__,
      0);
    v7 = System_Linq_Enumerable__FirstOrDefault_object__51858576(
           getItemInfo,
           (System_Func_TSource__bool__o *)v6,
           (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    this->fields.serverData = (struct WarBoardUserGetItemData_o *)v7;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.serverData, (int32_t)v7, v8, v9, v10, v11, v12, v13);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x23
  __int64 v19; // x8
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x8
  System_String_o *v22; // x24
  DataVals_o *v23; // x0
  __int64 v24; // x8
  int v25; // w25
  __int64 v26; // x24
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct WarBoardItemEntity_o *v40; // x8
  struct System_Int32_array *funcId; // x1
  const MethodInfo *v42; // x1
  DataVals_array *DataValsList; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  BattleServantData_o *v50; // x22
  int32_t v51; // w0
  __int64 v52; // x22
  WarBoardTaskBase_TaskCallback_o *v53; // x23
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  Il2CppObject *Instance; // x20
  __int64 v71; // x21
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  __int64 v78; // x0

  if ( (byte_4CC4F43 & 1) == 0 )
  {
    sub_1C713B0(&DataVals_TypeInfo);
    sub_1C713B0(&WarBoardManager_ExecuteProcParam_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C713B0(&Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__);
    sub_1C713B0(&WarBoardItemData___c__DisplayClass54_0_TypeInfo);
    sub_1C713B0(&WarBoardCallbackTask_TypeInfo);
    sub_1C713B0(&WarBoardTaskBase___TypeInfo);
    byte_4CC4F43 = 1;
  }
  v9 = sub_1C715FC(WarBoardItemData___c__DisplayClass54_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_31;
  *(_QWORD *)(v9 + 16) = piece;
  v18 = v9 + 16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)piece, v12, v13, v14, v15, v16, v17);
  v19 = *(_QWORD *)(v9 + 16);
  if ( !v19 )
    goto LABEL_31;
  if ( *(_DWORD *)(v19 + 16) == 1 )
    return;
  component = (__int64)this->fields.component;
  this->fields._isUse_k__BackingField = 1;
  if ( !component )
    goto LABEL_31;
  WarBoardItemComponent__OnUse((WarBoardItemComponent_o *)component, *(_DWORD *)(v19 + 64), taskList, 0, 0);
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_31;
  svals = itemEntity->fields.svals;
  if ( !svals )
    goto LABEL_31;
  if ( !LODWORD(svals->max_length) )
    goto LABEL_32;
  v22 = svals->m_Items[0];
  v23 = (DataVals_o *)sub_1C715FC(DataVals_TypeInfo);
  DataVals___ctor(v23, v22, 0);
  if ( !*(_QWORD *)v18 )
    goto LABEL_31;
  component = *(_QWORD *)(*(_QWORD *)v18 + 128LL);
  if ( !component )
    goto LABEL_31;
  BattleServantData__updateResultState((BattleServantData_o *)component, 0);
  if ( !*(_QWORD *)v18 )
    goto LABEL_31;
  v24 = *(_QWORD *)(*(_QWORD *)v18 + 128LL);
  if ( !v24 )
    goto LABEL_31;
  v25 = *(_DWORD *)(v24 + 24);
  v26 = sub_1C715FC(WarBoardManager_ExecuteProcParam_TypeInfo);
  *(_BYTE *)(v26 + 64) = 1;
  System_Object___ctor((Il2CppObject *)v26, 0);
  v27 = *(_QWORD *)v18;
  *(_QWORD *)(v26 + 16) = *(_QWORD *)v18;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v26 + 16), v27, v28, v29, v30, v31, v32, v33);
  *(_DWORD *)(v26 + 24) = v25;
  *(_DWORD *)(v26 + 28) = v25;
  v40 = this->fields.itemEntity;
  if ( !v40 )
    goto LABEL_31;
  funcId = v40->fields.funcId;
  *(_QWORD *)(v26 + 32) = funcId;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v26 + 32), (int32_t)funcId, v34, v35, v36, v37, v38, v39);
  DataValsList = WarBoardItemData__getDataValsList(this, v42);
  *(_QWORD *)(v26 + 40) = DataValsList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v26 + 40), (int32_t)DataValsList, v44, v45, v46, v47, v48, v49);
  *(_BYTE *)(v26 + 64) = 0;
  component = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !component )
    goto LABEL_31;
  component = WarBoardManager__ExecuteProcList(
                (WarBoardManager_o *)component,
                (WarBoardManager_ExecuteProcParam_o *)v26,
                0,
                0,
                0,
                0,
                0,
                0);
  if ( !*(_QWORD *)v18 )
    goto LABEL_31;
  v50 = *(BattleServantData_o **)(*(_QWORD *)v18 + 128LL);
  if ( !v50 )
    goto LABEL_31;
  v51 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v50->klass->vtable._13_get_resultHp.methodPtr)(
          v50,
          v50->klass->vtable._13_get_resultHp.method);
  BattleServantData__setHp(v50, v51, 0, 0, 0);
  v52 = sub_1C715FC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v52, 0, 0);
  v53 = (WarBoardTaskBase_TaskCallback_o *)sub_1C715FC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v53,
    (Il2CppObject *)v9,
    Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__,
    0);
  if ( !v52 )
    goto LABEL_31;
  *(_QWORD *)(v52 + 40) = v53;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v52 + 40), (int32_t)v53, v54, v55, v56, v57, v58, v59);
  if ( taskList )
  {
    items = taskList->fields._items;
    v67 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( items )
    {
      size = taskList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)v52,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = &items->obj.klass + size;
        taskList->fields._size = size + 1;
        v69[4] = (Il2CppClass *)v52;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v69 + 4), v52, v60, v61, v62, v63, v64, v65);
      }
      return;
    }
LABEL_31:
    sub_1C71608(component, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  component = sub_1C71458(WarBoardTaskBase___TypeInfo, 1);
  if ( !component )
    goto LABEL_31;
  v71 = component;
  component = sub_1C714EC(v52, *(_QWORD *)(*(_QWORD *)component + 64LL));
  if ( !component )
  {
    v78 = sub_1C7162C();
    sub_1C714D8(v78, 0);
  }
  if ( !*(_DWORD *)(v71 + 24) )
LABEL_32:
    sub_1C71610(component);
  *(_QWORD *)(v71 + 32) = v52;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v71 + 32), v52, v72, v73, v74, v75, v76, v77);
  if ( !Instance )
    goto LABEL_31;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v71, 0);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v71, 0);
}


bool WarBoardItemData___UpdateFromServerData_b__60_0(
        WarBoardItemData_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.squareIndex == this->fields._squareIndex_k__BackingField;
}


DataVals_array *WarBoardItemData__getDataValsList(WarBoardItemData_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *v2; // x19
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x23
  il2cpp_array_size_t max_length; // x8
  WarBoardItemData_o *v6; // x19
  unsigned __int64 v7; // x24
  System_String_o **m_Items; // x25
  GrandQuestFolderBoardItem_o *p_forceId; // x20
  System_String_o *v10; // x22
  DataVals_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  DataVals_o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  __int64 v26; // x0

  v2 = this;
  if ( (byte_4CC4F44 & 1) == 0 )
  {
    sub_1C713B0(&DataVals___TypeInfo);
    sub_1C713B0(&DataVals_TypeInfo);
    this = (WarBoardItemData_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC4F44 = 1;
  }
  itemEntity = v2->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_21;
  svals = itemEntity->fields.svals;
  if ( !svals )
  {
    v6 = (WarBoardItemData_o *)sub_1C71458(DataVals___TypeInfo, 1);
    v18 = (DataVals_o *)sub_1C715FC(DataVals_TypeInfo);
    DataVals___ctor(v18, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v6 )
    {
      if ( v18 )
      {
        this = (WarBoardItemData_o *)sub_1C714EC(v18, v6->klass->_1.element_class);
        if ( !this )
        {
LABEL_22:
          v26 = sub_1C7162C();
          sub_1C714D8(v26, 0);
        }
      }
      if ( !LODWORD(v6->fields._individuality_k__BackingField) )
        goto LABEL_20;
      *(_QWORD *)&v6->fields.forceId = v18;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v6->fields.forceId, (int32_t)v18, v19, v20, v21, v22, v23, v24);
      return (DataVals_array *)v6;
    }
LABEL_21:
    sub_1C71608(this, method);
  }
  this = (WarBoardItemData_o *)sub_1C71458(DataVals___TypeInfo, LODWORD(svals->max_length));
  max_length = svals->max_length;
  v6 = this;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    m_Items = svals->m_Items;
    p_forceId = (GrandQuestFolderBoardItem_o *)&this->fields.forceId;
    while ( v7 < (unsigned int)max_length )
    {
      v10 = *m_Items;
      v11 = (DataVals_o *)sub_1C715FC(DataVals_TypeInfo);
      DataVals___ctor(v11, v10, 0);
      if ( !v6 )
        goto LABEL_21;
      if ( v11 )
      {
        this = (WarBoardItemData_o *)sub_1C714EC(v11, v6->klass->_1.element_class);
        if ( !this )
          goto LABEL_22;
      }
      if ( v7 >= LODWORD(v6->fields._individuality_k__BackingField) )
        break;
      p_forceId->klass = (GrandQuestFolderBoardItem_c *)v11;
      sub_1C71354(p_forceId, (int32_t)v11, v12, v13, v14, v15, v16, v17);
      LODWORD(max_length) = svals->max_length;
      ++v7;
      ++m_Items;
      p_forceId = (GrandQuestFolderBoardItem_o *)((char *)p_forceId + 8);
      if ( (__int64)v7 >= (int)max_length )
        return (DataVals_array *)v6;
    }
LABEL_20:
    sub_1C71610(this);
  }
  return (DataVals_array *)v6;
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
  struct WarBoardItemEntity_o *itemEntity; // x8
  int baseImageId; // w8
  Il2CppObject *v5; // x0
  int v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4CC4F42 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_22502/*"onBoard_itembase_{0}"*/);
    sub_1C713B0(&StringLiteral_22501/*"onBoard_itembase"*/);
    byte_4CC4F42 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    return (System_String_o *)StringLiteral_22501/*"onBoard_itembase"*/;
  baseImageId = itemEntity->fields.baseImageId;
  if ( baseImageId <= 0 )
    return (System_String_o *)StringLiteral_22501/*"onBoard_itembase"*/;
  v7 = baseImageId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format((System_String_o *)StringLiteral_22502/*"onBoard_itembase_{0}"*/, v5, 0);
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

  if ( (byte_4CC4F41 & 1) == 0 )
  {
    sub_1C713B0(&string_TypeInfo);
    byte_4CC4F41 = 1;
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
    sub_1C71608(this, method);
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

  if ( (byte_4CC4F40 & 1) == 0 )
  {
    sub_1C713B0(&string_TypeInfo);
    byte_4CC4F40 = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._individuality_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void WarBoardItemData_SaveData___ctor_38387668(
        WarBoardItemData_SaveData_o *this,
        WarBoardItemData_o *owner,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct WarBoardItemData_o *v19; // x0

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.owner = owner;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.owner, (int32_t)owner, v5, v6, v7, v8, v9, v10);
  WarBoardItemData_SaveData__Save(this, v11);
  v19 = this->fields.owner;
  if ( !v19 )
    sub_1C71608(0, v12);
  v19->fields.localSaveData = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v19->fields.localSaveData, (int32_t)this, v13, v14, v15, v16, v17, v18);
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
    sub_1C71608(this, method);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct WarBoardItemData_o *owner; // x0

  if ( !data )
    sub_1C71608(this, 0);
  Item = WarBoardData__GetItem(data, this->fields.squareIndex, 0);
  this->fields.owner = Item;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.owner, (int32_t)Item, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&owner->fields.localSaveData,
      (int32_t)this,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
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
    sub_1C71608(0, method);
  WarBoardPieceData__ChangeStatus(piece, method);
}