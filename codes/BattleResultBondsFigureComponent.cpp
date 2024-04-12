void __fastcall BattleResultBondsFigureComponent___ctor(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B0A21 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_B52984(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_42B0A21 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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
      sub_B52920(p_createCallback, 0LL, v2, v3, v4, v5, v6, v7);
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  DataManager_o *v15; // x23
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x27
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  _BOOL8 v23; // x0
  __int64 v24; // x1
  SvtMultiPortraitEntity_o *current; // x26
  int klass; // w23
  int32_t portraitImageId; // w27
  System_Action_o *v28; // x28
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Component_o *v37; // x27
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v40; // x1
  struct System_Int32_array *v41; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v43; // x28
  StandFigureCollect_o *v44; // x23
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x0
  __int64 v48; // x0
  System_Action_o *v49; // x23
  UIStandFigureR_o *RenderPrefab_26220588; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x19
  UIStandFigureR_o *v52; // x21
  StandFigureCollect_o *v53; // x20
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42B0A20 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleResultBondsFigureComponent_CreateEndCallback__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StandFigureCollect_TypeInfo);
    byte_42B0A20 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v15 = Instance;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v15,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_29;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        imageLimitCount,
                        0LL);
  this->fields.createCallback = callBack;
  *(_QWORD *)&this->fields.createNumMax = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.createCallback,
    (System_Int32_array **)callBack,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !EntityListOrderBy
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v49 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v49, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    RenderPrefab_26220588 = StandFigureManager__CreateRenderPrefab_26220588(
                              parent,
                              svtId,
                              imageLimitCount,
                              offsetKind,
                              faceType,
                              depth,
                              v49,
                              0,
                              -1,
                              0LL);
    figureCollectList = this->fields.figureCollectList;
    v52 = RenderPrefab_26220588;
    v53 = (StandFigureCollect_o *)sub_B52A54(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v53, 0LL, v52, 0LL);
    if ( figureCollectList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)figureCollectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
      return;
    }
LABEL_29:
    sub_B52A5C(Instance, v14);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v58,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v59,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v23 )
      break;
    current = (SvtMultiPortraitEntity_o *)v59.fields.current;
    if ( !v59.fields.current )
      sub_B52A5C(v23, v24);
    klass = (int)v59.fields.current[2].klass;
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v28 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         parent,
                         portraitImageId,
                         offsetKind,
                         faceType,
                         (klass & (unsigned int)~(klass >> 31)) + depth,
                         v28,
                         0,
                         -1,
                         0LL);
    v37 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B52A5C(0LL, v30);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B52920(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (System_Int32_array **)current,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v37, 0LL);
      v41 = current->fields.commonPosition;
      if ( !v41 )
        sub_B52A5C(gameObject, v40);
      max_length = v41->max_length;
      if ( max_length == 1 )
      {
        v47 = sub_B52A88(gameObject);
        sub_B52A28(v47, 0LL);
      }
      if ( !max_length )
      {
        v48 = sub_B52A88(gameObject);
        sub_B52A28(v48, 0LL);
      }
      GameObjectExtensions__AddLocalPosition_32086032(gameObject, (float)v41->m_Items[1], (float)v41->m_Items[2], 0LL);
    }
    v43 = this->fields.figureCollectList;
    v44 = (StandFigureCollect_o *)sub_B52A54(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v44, current, (UIStandFigureR_o *)v37, 0LL);
    if ( !v43 )
      sub_B52A5C(v45, v46);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v43,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v59,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void __fastcall BattleResultBondsFigureComponent__DestroyFigure(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x23
  UnityEngine_Object_o *monitor; // x20
  __int64 v8; // x1
  UIStandFigureR_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B0A1E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0A1E = 1;
  }
  memset(&v14, 0, sizeof(v14));
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)figureCollectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v14,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v14.fields.current;
    if ( !v14.fields.current )
      sub_B52A5C(v4, v5);
    monitor = (UnityEngine_Object_o *)v14.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v9 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v9 )
        sub_B52A5C(0LL, v8);
      UIStandFigureR__ReleaseCharacter(v9, 0LL);
      v11 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v11 )
        sub_B52A5C(0LL, v10);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35617168(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
LABEL_22:
    sub_B52A5C(figureCollectList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)figureCollectList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
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
  int32_t ImageLimitCount; // w26
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  int32_t ServantImageLimitSealAfter; // w3

  if ( (byte_42B0A1F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0A1F = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v19);
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