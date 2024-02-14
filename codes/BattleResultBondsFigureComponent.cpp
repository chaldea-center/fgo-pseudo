void __fastcall BattleResultBondsFigureComponent___ctor(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421523A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v4);
    byte_421523A = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v5;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
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
      sub_B0D840(p_createCallback, 0LL, v2, v3, v4, v5, v6, v7);
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
  DataManager_o *Instance; // x0
  DataManager_o *v25; // x23
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x27
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  _BOOL8 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  SvtMultiPortraitEntity_o *current; // x26
  int klass; // w23
  int32_t portraitImageId; // w27
  System_Action_o *v41; // x28
  UIStandFigureR_o *PrefabForImageId; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UnityEngine_Component_o *v49; // x27
  __int64 v50; // x1
  __int64 v51; // x2
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *v54; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v56; // x28
  StandFigureCollect_o *v57; // x23
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x0
  System_Action_o *v61; // x23
  UIStandFigureR_o *RenderPrefab_25972252; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x19
  UIStandFigureR_o *v64; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  StandFigureCollect_o *v67; // x20
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4215239 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, parent);
    sub_B0D8A4(&Method_BattleResultBondsFigureComponent_CreateEndCallback__, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v15);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B0D8A4(&StandFigureCollect_TypeInfo, v23);
    byte_4215239 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v25 = Instance;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v25,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_29;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        imageLimitCount,
                        0LL);
  this->fields.createCallback = callBack;
  *(_QWORD *)&this->fields.createNumMax = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.createCallback,
    (System_Int32_array **)callBack,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !EntityListOrderBy
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v61 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v33, v34);
    System_Action___ctor(v61, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    RenderPrefab_25972252 = StandFigureManager__CreateRenderPrefab_25972252(
                              parent,
                              svtId,
                              imageLimitCount,
                              offsetKind,
                              faceType,
                              depth,
                              v61,
                              0,
                              -1,
                              0LL);
    figureCollectList = this->fields.figureCollectList;
    v64 = RenderPrefab_25972252;
    v67 = (StandFigureCollect_o *)sub_B0D974(StandFigureCollect_TypeInfo, v65, v66);
    StandFigureCollect___ctor(v67, 0LL, v64, 0LL);
    if ( figureCollectList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)figureCollectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
      return;
    }
LABEL_29:
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v72,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v73 = v72;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v73,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v35 )
      break;
    current = (SvtMultiPortraitEntity_o *)v73.fields.current;
    if ( !v73.fields.current )
      sub_B0D97C(v35);
    klass = (int)v73.fields.current[2].klass;
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v41 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v36, v37);
    System_Action___ctor(v41, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         parent,
                         portraitImageId,
                         offsetKind,
                         faceType,
                         (klass & (unsigned int)~(klass >> 31)) + depth,
                         v41,
                         0,
                         -1,
                         0LL);
    v49 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B0D97C(0LL);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B0D840(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (System_Int32_array **)current,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v49, 0LL);
      v54 = current->fields.commonPosition;
      if ( !v54 )
        sub_B0D97C(gameObject);
      max_length = v54->max_length;
      if ( max_length == 1 )
      {
        v59 = sub_B0D9A8(gameObject);
        sub_B0D948(v59, 0LL);
      }
      if ( !max_length )
      {
        v60 = sub_B0D9A8(gameObject);
        sub_B0D948(v60, 0LL);
      }
      GameObjectExtensions__AddLocalPosition_31179660(gameObject, (float)v54->m_Items[1], (float)v54->m_Items[2], 0LL);
    }
    v56 = this->fields.figureCollectList;
    v57 = (StandFigureCollect_o *)sub_B0D974(StandFigureCollect_TypeInfo, v50, v51);
    StandFigureCollect___ctor(v57, current, (UIStandFigureR_o *)v49, 0LL);
    if ( !v56 )
      sub_B0D97C(v58);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v56,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v73,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  _BOOL8 v9; // x0
  Il2CppObject *current; // x23
  UnityEngine_Object_o *monitor; // x20
  UIStandFigureR_o *v12; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4215237 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4215237 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)figureCollectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v16,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    current = v16.fields.current;
    if ( !v16.fields.current )
      sub_B0D97C(v9);
    monitor = (UnityEngine_Object_o *)v16.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v12 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v12 )
        sub_B0D97C(0LL);
      UIStandFigureR__ReleaseCharacter(v12, 0LL);
      v13 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v13 )
        sub_B0D97C(0LL);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34935488(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
LABEL_22:
    sub_B0D97C(figureCollectList);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)figureCollectList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
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
  DataManager_o *Instance; // x0
  int32_t ServantImageLimitSealAfter; // w3

  if ( (byte_4215238 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, parent);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4215238 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
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