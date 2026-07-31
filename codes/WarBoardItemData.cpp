void WarBoardItemData___ctor(
        WarBoardItemData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserGetItemData_o *getItemData,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int32_t effectId; // w9
  struct System_Int32_array *Individuality; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Il2CppObject *Entity; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  bool isUse; // w8
  int32_t pieceIndex; // w9

  if ( (byte_5936146 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5936146 = 1;
  }
  *(_QWORD *)&this->fields.forceId = -1;
  *(_QWORD *)&this->fields.pieceIndex = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.serverData = getItemData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.serverData,
    (int32_t)getItemData,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !layout )
    goto LABEL_9;
  effectId = layout->fields.effectId;
  this->fields._squareIndex_k__BackingField = layout->fields.squareIndex;
  this->fields.itemId = effectId;
  Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0);
  this->fields._individuality_k__BackingField = Individuality;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)Individuality,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardItemMaster___)) == 0 )
  {
LABEL_9:
    sub_21FFECC(Instance, v14);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.itemId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
  this->fields.itemEntity = (struct WarBoardItemEntity_o *)Entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemEntity,
    (int32_t)Entity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields._isUse_k__BackingField = 0;
  this->fields.pieceIndex = -1;
  *(_QWORD *)&this->fields.forceId = -1;
  if ( getItemData )
  {
    isUse = getItemData->fields.isUse;
    *(_QWORD *)&this->fields.forceId = *(_QWORD *)&getItemData->fields.forceId;
    pieceIndex = getItemData->fields.pieceIndex;
    this->fields._isUse_k__BackingField = isUse;
    this->fields.pieceIndex = pieceIndex;
  }
}


bool WarBoardItemData__CheckEnableGet(WarBoardItemData_o *this, WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
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
  this->fields.pieceIndex = -1;
  *(_QWORD *)&this->fields.forceId = -1;
  if ( !localSaveData
    || (WarBoardItemData_SaveData__Save(localSaveData, method),
        (localSaveData = (WarBoardItemData_SaveData_o *)this->fields.component) == 0) )
  {
    sub_21FFECC(localSaveData, method);
  }
  WarBoardItemComponent__Reset((WarBoardItemComponent_o *)localSaveData, 0);
}


void WarBoardItemData__SetComponent(
        WarBoardItemData_o *this,
        WarBoardItemComponent_o *component,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.component = component;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.component,
    (int32_t)component,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardItemData__SetItemEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_21FFECC(0, enable);
  WarBoardItemComponent__SetColliderEnable(component, enable, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardItemData__SetTouchEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_21FFECC(0, enable);
  WarBoardItemComponent__SetTouchEnable(component, enable, 0);
}


System_String_o *WarBoardItemData__ToJson(WarBoardItemData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct WarBoardUserGetItemData_o *serverData; // x20
  struct WarBoardUserGetItemData_o **p_serverData; // x21
  Il2CppObject *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x0
  bool isUse_k__BackingField; // w9
  JsonManager_c *v15; // x0
  int32_t pieceIndex; // w8
  int v17; // w10

  if ( (byte_593614B & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&WarBoardUserGetItemData_TypeInfo);
    byte_593614B = 1;
  }
  p_serverData = &this->fields.serverData;
  serverData = this->fields.serverData;
  if ( !serverData )
  {
    v6 = (Il2CppObject *)sub_21FFEBC(WarBoardUserGetItemData_TypeInfo);
    System_Object___ctor(v6, 0);
    *p_serverData = (struct WarBoardUserGetItemData_o *)v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.serverData, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    serverData = *p_serverData;
    if ( !*p_serverData )
      sub_21FFECC(v13, method);
    serverData->fields.squareIndex = this->fields._squareIndex_k__BackingField;
  }
  isUse_k__BackingField = this->fields._isUse_k__BackingField;
  v15 = JsonManager_TypeInfo;
  *(_QWORD *)&serverData->fields.forceId = *(_QWORD *)&this->fields.forceId;
  pieceIndex = this->fields.pieceIndex;
  serverData->fields.isUse = isUse_k__BackingField;
  v17 = *(&v15->_2.cctor_finished + 1);
  serverData->fields.pieceIndex = pieceIndex;
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(v15, method, v2);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct WarBoardUserGetItemData_o *serverData; // x8
  int32_t pieceIndex; // w9
  bool isUse; // w8

  if ( (byte_593614A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    sub_21FFC50(&System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardItemData__UpdateFromServerData_b__60_0__);
    byte_593614A = 1;
  }
  if ( warBoardDataEnt )
  {
    getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEnt->fields.getItemInfo;
    v6 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v6,
      (Il2CppObject *)this,
      Method_WarBoardItemData__UpdateFromServerData_b__60_0__,
      0);
    v7 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
           getItemInfo,
           (System_Func_TSource__bool__o *)v6,
           (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    this->fields.serverData = (struct WarBoardUserGetItemData_o *)v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.serverData, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    serverData = this->fields.serverData;
    if ( serverData )
    {
      *(_QWORD *)&this->fields.forceId = *(_QWORD *)&serverData->fields.forceId;
      pieceIndex = serverData->fields.pieceIndex;
      isUse = serverData->fields.isUse;
      this->fields.pieceIndex = pieceIndex;
      this->fields._isUse_k__BackingField = isUse;
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
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
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct WarBoardItemEntity_o *v40; // x8
  struct System_Int32_array *funcId; // x1
  const MethodInfo *v42; // x1
  DataVals_array *DataValsList; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  BattleServantData_o *v50; // x22
  int32_t v51; // w0
  __int64 v52; // x22
  WarBoardTaskBase_TaskCallback_o *v53; // x23
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  Il2CppObject *Instance; // x19
  __int64 v71; // x21
  __int64 v72; // x1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  __int64 v85; // x0

  if ( (byte_5936148 & 1) == 0 )
  {
    sub_21FFC50(&DataVals_TypeInfo);
    sub_21FFC50(&WarBoardManager_ExecuteProcParam_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__);
    sub_21FFC50(&WarBoardItemData___c__DisplayClass54_0_TypeInfo);
    sub_21FFC50(&WarBoardCallbackTask_TypeInfo);
    sub_21FFC50(&WarBoardTaskBase___TypeInfo);
    byte_5936148 = 1;
  }
  v9 = sub_21FFEBC(WarBoardItemData___c__DisplayClass54_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_35;
  *(_QWORD *)(v9 + 16) = piece;
  v18 = v9 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)piece, v12, v13, v14, v15, v16, v17);
  v19 = *(_QWORD *)(v9 + 16);
  if ( !v19 )
    goto LABEL_35;
  if ( *(_DWORD *)(v19 + 16) == 1 )
    return;
  component = (__int64)this->fields.component;
  this->fields._isUse_k__BackingField = 1;
  if ( !component )
    goto LABEL_35;
  WarBoardItemComponent__OnUse((WarBoardItemComponent_o *)component, *(_DWORD *)(v19 + 64), taskList, 0, 0);
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_35;
  svals = itemEntity->fields.svals;
  if ( !svals )
    goto LABEL_35;
  if ( !LODWORD(svals->max_length) )
    goto LABEL_36;
  v22 = svals->m_Items[0];
  v23 = (DataVals_o *)sub_21FFEBC(DataVals_TypeInfo);
  DataVals___ctor(v23, v22, 0);
  if ( !*(_QWORD *)v18 )
    goto LABEL_35;
  component = *(_QWORD *)(*(_QWORD *)v18 + 128LL);
  if ( !component )
    goto LABEL_35;
  BattleServantData__updateResultState((BattleServantData_o *)component, 0);
  if ( !*(_QWORD *)v18 )
    goto LABEL_35;
  v24 = *(_QWORD *)(*(_QWORD *)v18 + 128LL);
  if ( !v24 )
    goto LABEL_35;
  v25 = *(_DWORD *)(v24 + 24);
  v26 = sub_21FFEBC(WarBoardManager_ExecuteProcParam_TypeInfo);
  *(_BYTE *)(v26 + 64) = 1;
  System_Object___ctor((Il2CppObject *)v26, 0);
  v27 = *(_QWORD *)v18;
  *(_QWORD *)(v26 + 16) = *(_QWORD *)v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 16), v27, v28, v29, v30, v31, v32, v33);
  v40 = this->fields.itemEntity;
  *(_DWORD *)(v26 + 24) = v25;
  *(_DWORD *)(v26 + 28) = v25;
  if ( !v40 )
    goto LABEL_35;
  funcId = v40->fields.funcId;
  *(_QWORD *)(v26 + 32) = funcId;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 32), (int32_t)funcId, v34, v35, v36, v37, v38, v39);
  DataValsList = WarBoardItemData__getDataValsList(this, v42);
  *(_QWORD *)(v26 + 40) = DataValsList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 40), (int32_t)DataValsList, v44, v45, v46, v47, v48, v49);
  *(_BYTE *)(v26 + 64) = 0;
  component = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !component )
    goto LABEL_35;
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
    goto LABEL_35;
  v50 = *(BattleServantData_o **)(*(_QWORD *)v18 + 128LL);
  if ( !v50 )
    goto LABEL_35;
  v51 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v50->klass->vtable._13_get_resultHp.methodPtr)(
          v50,
          v50->klass->vtable._13_get_resultHp.method);
  BattleServantData__setHp(v50, v51, 0, 0, 0);
  v52 = sub_21FFEBC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v52, 0, 0);
  v53 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v53,
    (Il2CppObject *)v9,
    Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__,
    0);
  if ( !v52 )
    goto LABEL_35;
  *(_QWORD *)(v52 + 40) = v53;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v52 + 40), (int32_t)v53, v54, v55, v56, v57, v58, v59);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    component = sub_21FFD10(WarBoardTaskBase___TypeInfo, 1);
    v71 = component;
    if ( isInsertTask )
    {
      if ( !component )
        goto LABEL_35;
      component = sub_21FFDA4(v52, *(_QWORD *)(*(_QWORD *)component + 64LL));
      if ( component )
      {
        if ( *(_DWORD *)(v71 + 24) )
        {
          *(_QWORD *)(v71 + 32) = v52;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v71 + 32), v52, v73, v74, v75, v76, v77, v78);
          if ( Instance )
          {
            WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v71, 0);
            return;
          }
          goto LABEL_35;
        }
        goto LABEL_36;
      }
    }
    else
    {
      if ( !component )
        goto LABEL_35;
      component = sub_21FFDA4(v52, *(_QWORD *)(*(_QWORD *)component + 64LL));
      if ( component )
      {
        if ( *(_DWORD *)(v71 + 24) )
        {
          *(_QWORD *)(v71 + 32) = v52;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v71 + 32), v52, v79, v80, v81, v82, v83, v84);
          if ( Instance )
          {
            WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v71, 0);
            return;
          }
LABEL_35:
          sub_21FFECC(component, v11);
        }
LABEL_36:
        sub_21FFED4(component);
      }
    }
    v85 = sub_21FFEF0(component, v72);
    sub_21FFD90(v85, 0);
  }
  items = taskList->fields._items;
  v67 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_35;
  size = taskList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v52,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
  }
  else
  {
    v69 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v69[4] = (Il2CppClass *)v52;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v69 + 4), v52, v60, v61, v62, v63, v64, v65);
  }
}


bool WarBoardItemData___UpdateFromServerData_b__60_0(
        WarBoardItemData_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.squareIndex == this->fields._squareIndex_k__BackingField;
}


DataVals_array *WarBoardItemData__getDataValsList(WarBoardItemData_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *v2; // x19
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x22
  il2cpp_array_size_t max_length; // x8
  WarBoardItemData_o *v6; // x19
  unsigned __int64 v7; // x23
  __int64 v8; // x25
  System_String_o *v9; // x21
  DataVals_o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  DataVals_o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v26; // x0

  v2 = this;
  if ( (byte_5936149 & 1) == 0 )
  {
    sub_21FFC50(&DataVals___TypeInfo);
    sub_21FFC50(&DataVals_TypeInfo);
    this = (WarBoardItemData_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5936149 = 1;
  }
  itemEntity = v2->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_21;
  svals = itemEntity->fields.svals;
  if ( !svals )
  {
    v6 = (WarBoardItemData_o *)sub_21FFD10(DataVals___TypeInfo, 1);
    v18 = (DataVals_o *)sub_21FFEBC(DataVals_TypeInfo);
    DataVals___ctor(v18, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v6 )
    {
      if ( v18 )
      {
        this = (WarBoardItemData_o *)sub_21FFDA4(v18, v6->klass->_1.element_class);
        if ( !this )
        {
LABEL_22:
          v26 = sub_21FFEF0(this, v17);
          sub_21FFD90(v26, 0);
        }
      }
      if ( !LODWORD(v6->fields._individuality_k__BackingField) )
        goto LABEL_20;
      *(_QWORD *)&v6->fields.forceId = v18;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->fields.forceId, (int32_t)v18, v19, v20, v21, v22, v23, v24);
      return (DataVals_array *)v6;
    }
LABEL_21:
    sub_21FFECC(this, method);
  }
  this = (WarBoardItemData_o *)sub_21FFD10(DataVals___TypeInfo, LODWORD(svals->max_length));
  max_length = svals->max_length;
  v6 = this;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    v8 = 32;
    while ( v7 < (unsigned int)max_length )
    {
      v9 = *(System_String_o **)((char *)&svals->obj.klass + v8);
      v10 = (DataVals_o *)sub_21FFEBC(DataVals_TypeInfo);
      DataVals___ctor(v10, v9, 0);
      if ( !v6 )
        goto LABEL_21;
      if ( v10 )
      {
        this = (WarBoardItemData_o *)sub_21FFDA4(v10, v6->klass->_1.element_class);
        if ( !this )
          goto LABEL_22;
      }
      if ( v7 >= LODWORD(v6->fields._individuality_k__BackingField) )
        break;
      *(WarBoardItemData_c **)((char *)&v6->klass + v8) = (WarBoardItemData_c *)v10;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)v6 + v8), (int32_t)v10, v11, v12, v13, v14, v15, v16);
      LODWORD(max_length) = svals->max_length;
      ++v7;
      v8 += 8;
      if ( (__int64)v7 >= (int)max_length )
        return (DataVals_array *)v6;
    }
LABEL_20:
    sub_21FFED4(this);
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

  if ( (byte_5936147 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23485/*"onBoard_itembase_{0}"*/);
    sub_21FFC50(&StringLiteral_23484/*"onBoard_itembase"*/);
    byte_5936147 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    return (System_String_o *)StringLiteral_23484/*"onBoard_itembase"*/;
  baseImageId = itemEntity->fields.baseImageId;
  if ( baseImageId <= 0 )
    return (System_String_o *)StringLiteral_23484/*"onBoard_itembase"*/;
  v7 = baseImageId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v7);
  return System_String__Format((System_String_o *)StringLiteral_23485/*"onBoard_itembase_{0}"*/, v5, 0);
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
  System_String_o **p_effectName; // x8

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    p_effectName = &itemEntity->fields.effectName;
  else
    p_effectName = *(System_String_o ***)(qword_594C0B8 + 184);
  return *p_effectName;
}


int32_t WarBoardItemData__get_evalValue(WarBoardItemData_o *this, const MethodInfo *method)
{
  struct WarBoardItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    sub_21FFECC(this, method);
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
  System_String_o **p_name; // x8

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    p_name = &itemEntity->fields.name;
  else
    p_name = *(System_String_o ***)(qword_594C0B8 + 184);
  return *p_name;
}


int32_t WarBoardItemData__get_squareIndex(WarBoardItemData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


void WarBoardItemData__set_individuality(WarBoardItemData_o *this, System_Int32_array *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._individuality_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  this->fields.isUse = 0;
  this->fields.pieceIndex = -1;
  this->fields.squareIndex = -1;
  *(_QWORD *)&this->fields.forceId = -1;
}


void WarBoardItemData_SaveData___ctor_45000812(
        WarBoardItemData_SaveData_o *this,
        WarBoardItemData_o *owner,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct WarBoardItemData_o *v19; // x0

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.owner = owner;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.owner, (int32_t)owner, v5, v6, v7, v8, v9, v10);
  WarBoardItemData_SaveData__Save(this, v11);
  v19 = this->fields.owner;
  if ( !v19 )
    sub_21FFECC(0, v12);
  v19->fields.localSaveData = this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v19->fields.localSaveData,
    (int32_t)this,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void WarBoardItemData_SaveData__Load(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *owner; // x11
  int32_t forceId; // w9
  int32_t groupId; // w10
  bool isUse; // w8
  int32_t pieceIndex; // w12
  struct WarBoardUserGetItemData_o *serverData; // x13

  owner = this->fields.owner;
  if ( owner )
  {
    forceId = this->fields.forceId;
    groupId = this->fields.groupId;
    isUse = this->fields.isUse;
    pieceIndex = this->fields.pieceIndex;
    serverData = owner->fields.serverData;
    owner->fields._isUse_k__BackingField = isUse;
    owner->fields.forceId = forceId;
    owner->fields.groupId = groupId;
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
  __int64 v3; // d0

  owner = this->fields.owner;
  if ( !owner )
    sub_21FFECC(this, method);
  this->fields.squareIndex = owner->fields._squareIndex_k__BackingField;
  v3 = *(_QWORD *)&owner->fields.forceId;
  this->fields.isUse = owner->fields._isUse_k__BackingField;
  *(_QWORD *)&this->fields.forceId = v3;
  this->fields.pieceIndex = owner->fields.pieceIndex;
}


void WarBoardItemData_SaveData__SetOwner(
        WarBoardItemData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardItemData_o *Item; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct WarBoardItemData_o *owner; // x0

  if ( !data )
    sub_21FFECC(this, 0);
  Item = WarBoardData__GetItem(data, this->fields.squareIndex, 0);
  this->fields.owner = Item;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.owner, (int32_t)Item, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&owner->fields.localSaveData,
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
    sub_21FFECC(0, method);
  WarBoardPieceData__ChangeStatus(piece, method);
}