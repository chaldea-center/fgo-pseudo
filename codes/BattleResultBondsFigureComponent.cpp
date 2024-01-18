void __fastcall BattleResultBondsFigureComponent___ctor(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418855C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v3);
    byte_418855C = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
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
      sub_B2C2F8(p_createCallback, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v25; // x1
  DataManager_o *v26; // x23
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x27
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  _BOOL8 v34; // x0
  __int64 v35; // x1
  SvtMultiPortraitEntity_o *current; // x26
  int klass; // w23
  int32_t portraitImageId; // w27
  System_Action_o *v39; // x28
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Component_o *v48; // x27
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v51; // x1
  struct System_Int32_array *v52; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v54; // x28
  StandFigureCollect_o *v55; // x23
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x0
  __int64 v59; // x0
  System_Action_o *v60; // x23
  UIStandFigureR_o *RenderPrefab_27085276; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x19
  UIStandFigureR_o *v63; // x21
  StandFigureCollect_o *v64; // x20
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_418855B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, parent);
    sub_B2C35C(&Method_BattleResultBondsFigureComponent_CreateEndCallback__, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v15);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&StandFigureCollect_TypeInfo, v23);
    byte_418855B = 1;
  }
  memset(&v70, 0, sizeof(v70));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v26 = Instance;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v26,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_29;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        imageLimitCount,
                        0LL);
  this->fields.createCallback = callBack;
  *(_QWORD *)&this->fields.createNumMax = 0LL;
  sub_B2C2F8(
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
          (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v60 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v60, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    RenderPrefab_27085276 = StandFigureManager__CreateRenderPrefab_27085276(
                              parent,
                              svtId,
                              imageLimitCount,
                              offsetKind,
                              faceType,
                              depth,
                              v60,
                              0,
                              -1,
                              0LL);
    figureCollectList = this->fields.figureCollectList;
    v63 = RenderPrefab_27085276;
    v64 = (StandFigureCollect_o *)sub_B2C42C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v64, 0LL, v63, 0LL);
    if ( figureCollectList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)figureCollectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
      return;
    }
LABEL_29:
    sub_B2C434(Instance, v25);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v69,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v70 = v69;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v70,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v34 )
      break;
    current = (SvtMultiPortraitEntity_o *)v70.fields.current;
    if ( !v70.fields.current )
      sub_B2C434(v34, v35);
    klass = (int)v70.fields.current[2].klass;
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v39 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         parent,
                         portraitImageId,
                         offsetKind,
                         faceType,
                         (klass & (unsigned int)~(klass >> 31)) + depth,
                         v39,
                         0,
                         -1,
                         0LL);
    v48 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B2C434(0LL, v41);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (System_Int32_array **)current,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v48, 0LL);
      v52 = current->fields.commonPosition;
      if ( !v52 )
        sub_B2C434(gameObject, v51);
      max_length = v52->max_length;
      if ( max_length == 1 )
      {
        v58 = sub_B2C460(gameObject);
        sub_B2C400(v58, 0LL);
      }
      if ( !max_length )
      {
        v59 = sub_B2C460(gameObject);
        sub_B2C400(v59, 0LL);
      }
      GameObjectExtensions__AddLocalPosition_31326896(gameObject, (float)v52->m_Items[1], (float)v52->m_Items[2], 0LL);
    }
    v54 = this->fields.figureCollectList;
    v55 = (StandFigureCollect_o *)sub_B2C42C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v55, current, (UIStandFigureR_o *)v48, 0LL);
    if ( !v54 )
      sub_B2C434(v56, v57);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v54,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v70,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  __int64 v10; // x1
  Il2CppObject *current; // x23
  UnityEngine_Object_o *monitor; // x20
  __int64 v13; // x1
  UIStandFigureR_o *v14; // x0
  __int64 v15; // x1
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4188559 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4188559 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)figureCollectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v19,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    current = v19.fields.current;
    if ( !v19.fields.current )
      sub_B2C434(v9, v10);
    monitor = (UnityEngine_Object_o *)v19.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v14 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v14 )
        sub_B2C434(0LL, v13);
      UIStandFigureR__ReleaseCharacter(v14, 0LL);
      v16 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v16 )
        sub_B2C434(0LL, v15);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
LABEL_22:
    sub_B2C434(figureCollectList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)figureCollectList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
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
  __int64 v21; // x1
  int32_t ServantImageLimitSealAfter; // w3

  if ( (byte_418855A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, parent);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_418855A = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v21);
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