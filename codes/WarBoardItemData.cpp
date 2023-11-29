void __fastcall WarBoardItemData___ctor(
        WarBoardItemData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserGetItemData_o *getItemData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Int32_array *Individuality; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct WarBoardItemEntity_o *Entity; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40F642A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardItemMaster___, layout);
    sub_B16FFC(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F642A = 1;
  }
  *(_QWORD *)&this->fields.forceId = -1LL;
  *(_QWORD *)&this->fields.pieceIndex = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.serverData = getItemData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.serverData,
    (System_Int32_array **)getItemData,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.itemId = layout->fields.effectId,
        Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL),
        this->fields._individuality_k__BackingField = Individuality,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._individuality_k__BackingField,
          (System_Int32_array **)Individuality,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardItemMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = (struct WarBoardItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            MasterData_WarQuestSelectionMaster,
                                            this->fields.itemId,
                                            (const MethodInfo_266F388 *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int__GetEntity__);
  this->fields.itemEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemEntity,
    (System_Int32_array **)Entity,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields._isUse_k__BackingField = 0;
  *(_QWORD *)&this->fields.forceId = -1LL;
  this->fields.pieceIndex = -1;
  if ( getItemData )
  {
    this->fields._isUse_k__BackingField = getItemData->fields.isUse;
    this->fields.forceId = getItemData->fields.forceId;
    this->fields.groupId = getItemData->fields.groupId;
    this->fields.pieceIndex = getItemData->fields.pieceIndex;
  }
}


bool __fastcall WarBoardItemData__CheckEnableGet(
        WarBoardItemData_o *this,
        WarBoardPieceData_o *piece,
        const MethodInfo *method)
{
  if ( !piece )
    sub_B170D4();
  return !WarBoardPieceData__get_isMaster(piece, 0LL);
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
  const MethodInfo *v8; // x4

  if ( !piece )
    sub_B170D4();
  if ( WarBoardPieceData__get_isMaster(piece, 0LL) )
    return 0;
  this->fields.forceId = piece->fields._forceId_k__BackingField;
  this->fields.groupId = piece->fields._groupId_k__BackingField;
  this->fields.pieceIndex = piece->fields._index_k__BackingField;
  WarBoardItemData__Use(this, piece, taskList, 0, v8);
  return 1;
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
  const MethodInfo *v4; // x1
  WarBoardItemComponent_o *component; // x0

  this->fields._isUse_k__BackingField = 0;
  localSaveData = this->fields.localSaveData;
  *(_QWORD *)&this->fields.forceId = -1LL;
  this->fields.pieceIndex = -1;
  if ( !localSaveData
    || (WarBoardItemData_SaveData__Save(localSaveData, 0LL), (component = this->fields.component) == 0LL) )
  {
    sub_B170D4();
  }
  WarBoardItemComponent__Reset(component, v4);
}


void __fastcall WarBoardItemData__SetComponent(
        WarBoardItemData_o *this,
        WarBoardItemComponent_o *component,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.component = component;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.component,
    (System_Int32_array **)component,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardItemData__SetItemEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B170D4();
  WarBoardItemComponent__SetColliderEnable(component, enable, method);
}


void __fastcall WarBoardItemData__SetTouchEnable(WarBoardItemData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardItemComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B170D4();
  WarBoardItemComponent__SetTouchEnable(component, enable, method);
}


System_String_o *__fastcall WarBoardItemData__ToJson(WarBoardItemData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct WarBoardUserGetItemData_o *serverData; // x8
  struct WarBoardUserGetItemData_o **p_serverData; // x20
  WarBoardUserGetItemData_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct WarBoardUserGetItemData_o *v16; // x8
  struct WarBoardUserGetItemData_o *v17; // x8
  struct WarBoardUserGetItemData_o *v18; // x8
  Il2CppObject *v19; // x19

  if ( (byte_40F6431 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, method);
    sub_B16FFC(&WarBoardUserGetItemData_TypeInfo, v6);
    byte_40F6431 = 1;
  }
  p_serverData = &this->fields.serverData;
  serverData = this->fields.serverData;
  if ( !serverData )
  {
    v9 = (WarBoardUserGetItemData_o *)sub_B170CC(WarBoardUserGetItemData_TypeInfo, method, v2, v3, v4);
    WarBoardUserGetItemData___ctor(v9, 0LL);
    *p_serverData = v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.serverData,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    if ( !*p_serverData )
      goto LABEL_13;
    (*p_serverData)->fields.squareIndex = this->fields._squareIndex_k__BackingField;
    serverData = this->fields.serverData;
    if ( !serverData )
      goto LABEL_13;
  }
  serverData->fields.forceId = this->fields.forceId;
  v16 = this->fields.serverData;
  if ( !v16
    || (v16->fields.groupId = this->fields.groupId, (v17 = this->fields.serverData) == 0LL)
    || (v17->fields.pieceIndex = this->fields.pieceIndex, (v18 = this->fields.serverData) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  v18->fields.isUse = this->fields._isUse_k__BackingField;
  v19 = (Il2CppObject *)this->fields.serverData;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(v19, 0, 0, 0LL);
}


void __fastcall WarBoardItemData__UpdateFromServerData(
        WarBoardItemData_o *this,
        WarBoardDataEntity_o *warBoardDataEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x21
  WarBoardData_SquareRangeSearch_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct WarBoardUserGetItemData_o *serverData; // x8

  if ( (byte_40F6430 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, warBoardDataEnt);
    sub_B16FFC(&Method_System_Func_WarBoardUserGetItemData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardItemData__UpdateFromServerData_b__60_0__, v9);
    byte_40F6430 = 1;
  }
  if ( warBoardDataEnt )
  {
    getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEnt->fields.getItemInfo;
    v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_WarBoardUserGetItemData__bool__TypeInfo,
                                                                               warBoardDataEnt,
                                                                               method,
                                                                               v3,
                                                                               v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v11,
      (Il2CppObject *)this,
      Method_WarBoardItemData__UpdateFromServerData_b__60_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
    v12 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            getItemInfo,
            (System_Func_TSource__bool__o *)v11,
            (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    this->fields.serverData = (struct WarBoardUserGetItemData_o *)v12;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.serverData,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    serverData = this->fields.serverData;
    if ( serverData )
    {
      this->fields.forceId = serverData->fields.forceId;
      this->fields.groupId = serverData->fields.groupId;
      this->fields.pieceIndex = serverData->fields.pieceIndex;
      this->fields._isUse_k__BackingField = serverData->fields.isUse;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array ***v24; // x23
  WarBoardPieceData_o *v25; // x0
  const MethodInfo *v26; // x4
  WarBoardItemComponent_o *component; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x8
  System_String_o *v35; // x24
  DataVals_o *v36; // x0
  BattleServantData_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Int32_array *v42; // x8
  il2cpp_array_size_t max_length; // w26
  __int64 v44; // x24
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct WarBoardItemEntity_o *v58; // x8
  System_Int32_array **funcId; // x1
  const MethodInfo *v60; // x1
  System_Int32_array **DataValsList; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  WebViewManager_o *Instance; // x0
  const MethodInfo *v69; // x7
  BattleServantData_o *v70; // x22
  int32_t v71; // w0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  __int64 v76; // x22
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  WarBoardTaskBase_TaskCallback_o *v81; // x23
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  WebViewManager_o *v88; // x20
  __int64 v89; // x2
  __int64 v90; // x0
  __int64 v91; // x21
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  const MethodInfo *v97; // x3

  if ( (byte_40F642E & 1) == 0 )
  {
    sub_B16FFC(&DataVals_TypeInfo, piece);
    sub_B16FFC(&WarBoardManager_ExecuteProcParam_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__, v13);
    sub_B16FFC(&WarBoardItemData___c__DisplayClass54_0_TypeInfo, v14);
    sub_B16FFC(&WarBoardCallbackTask_TypeInfo, v15);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v16);
    byte_40F642E = 1;
  }
  v17 = sub_B170CC(WarBoardItemData___c__DisplayClass54_0_TypeInfo, piece, taskList, isInsertTask, method);
  WarBoardItemData___c__DisplayClass54_0___ctor((WarBoardItemData___c__DisplayClass54_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_30;
  *(_QWORD *)(v17 + 16) = piece;
  v24 = (System_Int32_array ***)(v17 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)piece, v18, v19, v20, v21, v22, v23);
  v25 = *(WarBoardPieceData_o **)(v17 + 16);
  if ( !v25 )
    goto LABEL_30;
  if ( WarBoardPieceData__get_isMaster(v25, 0LL) )
    return;
  this->fields._isUse_k__BackingField = 1;
  if ( !*v24 )
    goto LABEL_30;
  component = this->fields.component;
  if ( !component )
    goto LABEL_30;
  WarBoardItemComponent__OnUse(component, *((_DWORD *)*v24 + 16), taskList, 0, v26);
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_30;
  svals = itemEntity->fields.svals;
  if ( !svals )
    goto LABEL_30;
  if ( !svals->max_length )
    goto LABEL_31;
  v35 = svals->m_Items[0];
  v36 = (DataVals_o *)sub_B170CC(DataVals_TypeInfo, v29, v30, v31, v32);
  DataVals___ctor(v36, v35, 0LL);
  if ( !*v24 )
    goto LABEL_30;
  v37 = (BattleServantData_o *)(*v24)[16];
  if ( !v37 )
    goto LABEL_30;
  BattleServantData__updateResultState(v37, 0LL);
  if ( !*v24 )
    goto LABEL_30;
  v42 = (*v24)[16];
  if ( !v42 )
    goto LABEL_30;
  max_length = v42->max_length;
  v44 = sub_B170CC(WarBoardManager_ExecuteProcParam_TypeInfo, v38, v39, v40, v41);
  WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v44, 0LL);
  if ( !v44 )
    goto LABEL_30;
  v51 = *v24;
  *(_QWORD *)(v44 + 16) = *v24;
  sub_B16F98((BattleServantConfConponent_o *)(v44 + 16), v51, v45, v46, v47, v48, v49, v50);
  *(_DWORD *)(v44 + 24) = max_length;
  *(_DWORD *)(v44 + 28) = max_length;
  v58 = this->fields.itemEntity;
  if ( !v58 )
    goto LABEL_30;
  funcId = (System_Int32_array **)v58->fields.funcId;
  *(_QWORD *)(v44 + 32) = funcId;
  sub_B16F98((BattleServantConfConponent_o *)(v44 + 32), funcId, v52, v53, v54, v55, v56, v57);
  DataValsList = (System_Int32_array **)WarBoardItemData__getDataValsList(this, v60);
  *(_QWORD *)(v44 + 40) = DataValsList;
  sub_B16F98((BattleServantConfConponent_o *)(v44 + 40), DataValsList, v62, v63, v64, v65, v66, v67);
  *(_BYTE *)(v44 + 64) = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  WarBoardManager__ExecuteProcList(
    (WarBoardManager_o *)Instance,
    (WarBoardManager_ExecuteProcParam_o *)v44,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    v69);
  if ( !*v24 )
    goto LABEL_30;
  v70 = (BattleServantData_o *)(*v24)[16];
  if ( !v70 )
    goto LABEL_30;
  v71 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v70->klass->vtable._13_get_resultHp.method)(
          v70,
          v70->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__setHp(v70, v71, 0, 0LL);
  v76 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v72, v73, v74, v75);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v76, 0LL, 0LL);
  v81 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v77, v78, v79, v80);
  WarBoardTaskBase_TaskCallback___ctor(
    v81,
    (Il2CppObject *)v17,
    Method_WarBoardItemData___c__DisplayClass54_0__Use_b__0__,
    0LL);
  if ( !v76 )
    goto LABEL_30;
  *(_QWORD *)(v76 + 40) = v81;
  sub_B16F98((BattleServantConfConponent_o *)(v76 + 40), (System_Int32_array **)v81, v82, v83, v84, v85, v86, v87);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  v88 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v90 = sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v89);
  if ( !v90 )
LABEL_30:
    sub_B170D4();
  v91 = v90;
  v28 = sub_B170BC(v76, *(_QWORD *)(*(_QWORD *)v90 + 64LL));
  if ( !v28 )
  {
    sub_B170F4(0LL);
    sub_B170A0();
  }
  if ( !*(_DWORD *)(v91 + 24) )
  {
LABEL_31:
    sub_B17100(v28, v29, v30);
    sub_B170A0();
  }
  *(_QWORD *)(v91 + 32) = v76;
  sub_B16F98((BattleServantConfConponent_o *)(v91 + 32), (System_Int32_array **)v76, v30, v92, v93, v94, v95, v96);
  if ( !v88 )
    goto LABEL_30;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)v88, 0, (WarBoardTaskBase_array *)v91, v97);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)v88, 0, (WarBoardTaskBase_array *)v91, v97);
}


bool __fastcall WarBoardItemData___UpdateFromServerData_b__60_0(
        WarBoardItemData_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.squareIndex == this->fields._squareIndex_k__BackingField;
}


DataVals_array *__fastcall WarBoardItemData__getDataValsList(WarBoardItemData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  struct WarBoardItemEntity_o *itemEntity; // x8
  struct System_String_array *svals; // x23
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x8
  DataVals_array *v14; // x19
  unsigned __int64 v15; // x24
  System_String_o **m_Items; // x25
  BattleServantConfConponent_o *v17; // x20
  System_String_o *v18; // x22
  DataVals_o *v19; // x21
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  DataVals_o *v29; // x20
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_40F642F & 1) == 0 )
  {
    sub_B16FFC(&DataVals___TypeInfo, method);
    sub_B16FFC(&DataVals_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40F642F = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_21;
  svals = itemEntity->fields.svals;
  if ( !svals )
  {
    v14 = (DataVals_array *)sub_B17014(DataVals___TypeInfo, 1LL, v2);
    v29 = (DataVals_o *)sub_B170CC(DataVals_TypeInfo, v25, v26, v27, v28);
    DataVals___ctor(v29, (System_String_o *)StringLiteral_1, 0LL);
    if ( v14 )
    {
      if ( v29 )
      {
        v8 = sub_B170BC(v29, v14->obj.klass->_1.element_class);
        if ( !v8 )
        {
LABEL_22:
          sub_B170F4(v8);
          sub_B170A0();
        }
      }
      if ( !v14->max_length )
        goto LABEL_20;
      v14->m_Items[0] = v29;
      sub_B16F98((BattleServantConfConponent_o *)v14->m_Items, (System_Int32_array **)v29, v10, v30, v31, v32, v33, v34);
      return v14;
    }
LABEL_21:
    sub_B170D4();
  }
  v8 = sub_B17014(DataVals___TypeInfo, svals->max_length, v2);
  v13 = *(_QWORD *)&svals->max_length;
  v14 = (DataVals_array *)v8;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    m_Items = svals->m_Items;
    v17 = (BattleServantConfConponent_o *)(v8 + 32);
    while ( v15 < (unsigned int)v13 )
    {
      v18 = *m_Items;
      v19 = (DataVals_o *)sub_B170CC(DataVals_TypeInfo, v9, v10, v11, v12);
      DataVals___ctor(v19, v18, 0LL);
      if ( !v14 )
        goto LABEL_21;
      if ( v19 )
      {
        v8 = sub_B170BC(v19, v14->obj.klass->_1.element_class);
        if ( !v8 )
          goto LABEL_22;
      }
      if ( v15 >= v14->max_length )
        break;
      v17->klass = (BattleServantConfConponent_c *)v19;
      sub_B16F98(v17, (System_Int32_array **)v19, v10, v20, v21, v22, v23, v24);
      LODWORD(v13) = svals->max_length;
      ++v15;
      ++m_Items;
      v17 = (BattleServantConfConponent_o *)((char *)v17 + 8);
      if ( (__int64)v15 >= (int)v13 )
        return v14;
    }
LABEL_20:
    sub_B17100(v8, v9, v10);
    sub_B170A0();
  }
  return v14;
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

  if ( (byte_40F642D & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21142, v3);
    sub_B16FFC(&StringLiteral_21141, v4);
    byte_40F642D = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
    return (System_String_o *)StringLiteral_21141;
  baseImageId = itemEntity->fields.baseImageId;
  if ( baseImageId <= 0 )
    return (System_String_o *)StringLiteral_21141;
  v9 = baseImageId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format((System_String_o *)StringLiteral_21142, v7, 0LL);
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

  if ( (byte_40F642C & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    byte_40F642C = 1;
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
    sub_B170D4();
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

  if ( (byte_40F642B & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    byte_40F642B = 1;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._individuality_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._individuality_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void __fastcall WarBoardItemData_SaveData___ctor_20743588(
        WarBoardItemData_SaveData_o *this,
        WarBoardItemData_o *owner,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct WarBoardItemData_o *v18; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)owner, v5, v6, v7, v8, v9, v10);
  WarBoardItemData_SaveData__Save(this, v11);
  v18 = this->fields.owner;
  if ( !v18 )
    sub_B170D4();
  v18->fields.localSaveData = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v18->fields.localSaveData,
    (System_Int32_array **)this,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall WarBoardItemData_SaveData__Load(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *owner; // x8
  struct WarBoardItemData_o *v3; // x8
  struct WarBoardItemData_o *v4; // x8
  struct WarBoardItemData_o *v5; // x8
  struct WarBoardItemData_o *v6; // x8
  struct WarBoardUserGetItemData_o *serverData; // x8
  struct WarBoardItemData_o *v8; // x8
  struct WarBoardUserGetItemData_o *v9; // x8
  struct WarBoardItemData_o *v10; // x8
  struct WarBoardUserGetItemData_o *v11; // x8
  struct WarBoardItemData_o *v12; // x8
  struct WarBoardUserGetItemData_o *v13; // x8

  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields._isUse_k__BackingField = this->fields.isUse;
    v3 = this->fields.owner;
    if ( !v3 )
      goto LABEL_15;
    v3->fields.forceId = this->fields.forceId;
    v4 = this->fields.owner;
    if ( !v4 )
      goto LABEL_15;
    v4->fields.groupId = this->fields.groupId;
    v5 = this->fields.owner;
    if ( !v5 )
      goto LABEL_15;
    v5->fields.pieceIndex = this->fields.pieceIndex;
    v6 = this->fields.owner;
    if ( !v6 )
      goto LABEL_15;
    serverData = v6->fields.serverData;
    if ( !serverData )
      return;
    serverData->fields.isUse = this->fields.isUse;
    v8 = this->fields.owner;
    if ( !v8
      || (v9 = v8->fields.serverData) == 0LL
      || (v9->fields.forceId = this->fields.forceId, (v10 = this->fields.owner) == 0LL)
      || (v11 = v10->fields.serverData) == 0LL
      || (v11->fields.groupId = this->fields.groupId, (v12 = this->fields.owner) == 0LL)
      || (v13 = v12->fields.serverData) == 0LL )
    {
LABEL_15:
      sub_B170D4();
    }
    v13->fields.pieceIndex = this->fields.pieceIndex;
  }
}


void __fastcall WarBoardItemData_SaveData__Save(WarBoardItemData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardItemData_o *owner; // x8

  owner = this->fields.owner;
  if ( !owner )
    sub_B170D4();
  this->fields.squareIndex = owner->fields._squareIndex_k__BackingField;
  this->fields.isUse = owner->fields._isUse_k__BackingField;
  this->fields.forceId = owner->fields.forceId;
  this->fields.groupId = owner->fields.groupId;
  this->fields.pieceIndex = owner->fields.pieceIndex;
}


void __fastcall WarBoardItemData_SaveData__SetOwner(
        WarBoardItemData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardItemData_o *Item; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct WarBoardItemData_o *owner; // x0

  if ( !data )
    sub_B170D4();
  Item = WarBoardData__GetItem(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Item;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)Item, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_B16F98(
      (BattleServantConfConponent_o *)&owner->fields.localSaveData,
      (System_Int32_array **)this,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
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
    sub_B170D4();
  WarBoardPieceData__ChangeStatus(piece, 0LL);
}