void __fastcall BattleResultBondsFigureComponent___ctor(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FA8EF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v6);
    byte_40FA8EF = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultBondsFigureComponent__CreateEndCallback(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t createNumMax; // w9
  int32_t v9; // w8
  BattleServantConfConponent_o *p_createCallback; // x0
  System_Action_o *v11; // x19
  struct System_Action_o *createCallback; // t1

  createNumMax = this->fields.createNumMax;
  v9 = this->fields.createNum + 1;
  this->fields.createNum = v9;
  if ( v9 >= createNumMax )
  {
    createCallback = this->fields.createCallback;
    p_createCallback = (BattleServantConfConponent_o *)&this->fields.createCallback;
    v11 = createCallback;
    *(_QWORD *)&p_createCallback[-1].fields.isOpenAfter = 0LL;
    if ( createCallback )
    {
      p_createCallback->klass = 0LL;
      sub_B16F98(p_createCallback, 0LL, v2, v3, v4, v5, v6, v7);
      System_Action__Invoke(v11, 0LL);
    }
  }
}


void __fastcall BattleResultBondsFigureComponent__CreateFigurePrefab(
        BattleResultBondsFigureComponent_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  WebViewManager_o *Instance; // x0
  DataManager_o *v25; // x23
  SvtMultiPortraitMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x27
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  SvtMultiPortraitEntity_o *current; // x26
  int klass; // w23
  int32_t portraitImageId; // w27
  System_Action_o *v45; // x28
  UIStandFigureR_o *PrefabForImageId; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_Component_o *v53; // x27
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  struct System_Int32_array *v62; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v64; // x28
  StandFigureCollect_o *v65; // x23
  System_Action_o *v66; // x23
  UIStandFigureR_o *RenderPrefab_26843068; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x19
  UIStandFigureR_o *v69; // x21
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  StandFigureCollect_o *v74; // x20
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40FA8EE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, parent);
    sub_B16FFC(&Method_BattleResultBondsFigureComponent_CreateEndCallback__, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v15);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&StandFigureCollect_TypeInfo, v23);
    byte_40FA8EE = 1;
  }
  memset(&v80, 0, sizeof(v80));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v25 = (DataManager_o *)Instance;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_WarQuestSelectionMaster = (SvtMultiPortraitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     v25,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        MasterData_WarQuestSelectionMaster,
                        svtId,
                        imageLimitCount,
                        0LL);
  this->fields.createCallback = callBack;
  *(_QWORD *)&this->fields.createNumMax = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.createCallback,
    (System_Int32_array **)callBack,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( !EntityListOrderBy
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v66 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v36, v37);
    System_Action___ctor(v66, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    RenderPrefab_26843068 = StandFigureManager__CreateRenderPrefab_26843068(
                              parent,
                              svtId,
                              imageLimitCount,
                              offsetKind,
                              faceType,
                              depth,
                              v66,
                              0,
                              -1,
                              0LL);
    figureCollectList = this->fields.figureCollectList;
    v69 = RenderPrefab_26843068;
    v74 = (StandFigureCollect_o *)sub_B170CC(StandFigureCollect_TypeInfo, v70, v71, v72, v73);
    StandFigureCollect___ctor(v74, 0LL, v69, 0LL);
    if ( figureCollectList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)figureCollectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
      return;
    }
LABEL_29:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v79,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v80 = v79;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v80,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = (SvtMultiPortraitEntity_o *)v80.fields.current;
    if ( !v80.fields.current )
      sub_B170D4();
    klass = (int)v80.fields.current[2].klass;
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v45 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v38, v39, v40, v41);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         parent,
                         portraitImageId,
                         offsetKind,
                         faceType,
                         (klass & (unsigned int)~(klass >> 31)) + depth,
                         v45,
                         0,
                         -1,
                         0LL);
    v53 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B170D4();
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B16F98(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (System_Int32_array **)current,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v53, 0LL);
      v62 = current->fields.commonPosition;
      if ( !v62 )
        sub_B170D4();
      max_length = v62->max_length;
      if ( max_length == 1 )
      {
        sub_B17100(gameObject, v60, v61);
        sub_B170A0();
      }
      if ( !max_length )
      {
        sub_B17100(gameObject, v60, v61);
        sub_B170A0();
      }
      GameObjectExtensions__AddLocalPosition_27420940(gameObject, (float)v62->m_Items[1], (float)v62->m_Items[2], 0LL);
    }
    v64 = this->fields.figureCollectList;
    v65 = (StandFigureCollect_o *)sub_B170CC(StandFigureCollect_TypeInfo, v54, v55, v56, v57);
    StandFigureCollect___ctor(v65, current, (UIStandFigureR_o *)v53, 0LL);
    if ( !v64 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v64,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v80,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void __fastcall BattleResultBondsFigureComponent__DestroyFigure(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x0
  Il2CppObject *current; // x23
  UnityEngine_Object_o *monitor; // x20
  UIStandFigureR_o *v11; // x0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v14; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FA8EC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FA8EC = 1;
  }
  memset(&v16, 0, sizeof(v16));
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)figureCollectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    current = v16.fields.current;
    if ( !v16.fields.current )
      sub_B170D4();
    monitor = (UnityEngine_Object_o *)v16.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v11 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v11 )
        sub_B170D4();
      UIStandFigureR__ReleaseCharacter(v11, 0LL);
      v12 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v12 )
        sub_B170D4();
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v14 = this->fields.figureCollectList;
  if ( !v14 )
LABEL_22:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v14,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
}


void __fastcall BattleResultBondsFigureComponent__SetupFigure(
        BattleResultBondsFigureComponent_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t ImageLimitCount; // w26
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t ServantImageLimitSealAfter; // w3

  if ( (byte_40FA8ED & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, parent);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40FA8ED = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 svtId,
                                 ImageLimitCount,
                                 0LL);
  BattleResultBondsFigureComponent__CreateFigurePrefab(
    this,
    parent,
    svtId,
    ServantImageLimitSealAfter,
    offsetKind,
    faceType,
    depth,
    endCallback,
    method);
}