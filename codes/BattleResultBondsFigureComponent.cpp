void __fastcall BattleResultBondsFigureComponent___ctor(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E88A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v5, v6, v7);
    byte_42E88A0 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
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
      sub_B5D560(p_createCallback, 0LL, v2, v3, v4, v5, v6, v7);
      System_Action__Invoke(v11, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  DataManager_o *Instance; // x0
  __int64 v47; // x1
  DataManager_o *v48; // x23
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x27
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  _BOOL8 v56; // x0
  __int64 v57; // x1
  SvtMultiPortraitEntity_o *current; // x26
  int klass; // w23
  int32_t portraitImageId; // w27
  System_Action_o *v61; // x28
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UnityEngine_Component_o *v70; // x27
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v73; // x1
  struct System_Int32_array *v74; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v76; // x28
  StandFigureCollect_o *v77; // x23
  __int64 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x0
  __int64 v81; // x0
  System_Action_o *v82; // x23
  UIStandFigureR_o *RenderPrefab_26229964; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x19
  UIStandFigureR_o *v85; // x21
  StandFigureCollect_o *v86; // x20
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v92; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42E889F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)parent, svtId, *(_QWORD *)&imageLimitCount);
    sub_B5D5C4(&Method_BattleResultBondsFigureComponent_CreateEndCallback__, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v37, v38, v39);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41, v42);
    sub_B5D5C4(&StandFigureCollect_TypeInfo, v43, v44, v45);
    byte_42E889F = 1;
  }
  memset(&v92, 0, sizeof(v92));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v48 = Instance;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v48,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_29;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        imageLimitCount,
                        0LL);
  this->fields.createCallback = callBack;
  *(_QWORD *)&this->fields.createNumMax = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.createCallback,
    (System_Int32_array **)callBack,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  if ( !EntityListOrderBy
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v82 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v82, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    RenderPrefab_26229964 = StandFigureManager__CreateRenderPrefab_26229964(
                              parent,
                              svtId,
                              imageLimitCount,
                              offsetKind,
                              faceType,
                              depth,
                              v82,
                              0,
                              -1,
                              0LL);
    figureCollectList = this->fields.figureCollectList;
    v85 = RenderPrefab_26229964;
    v86 = (StandFigureCollect_o *)sub_B5D694(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v86, 0LL, v85, 0LL);
    if ( figureCollectList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)figureCollectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v86,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
      return;
    }
LABEL_29:
    sub_B5D69C(Instance, v47);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v91,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v92 = v91;
  while ( 1 )
  {
    v56 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v92,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v56 )
      break;
    current = (SvtMultiPortraitEntity_o *)v92.fields.current;
    if ( !v92.fields.current )
      sub_B5D69C(v56, v57);
    klass = (int)v92.fields.current[2].klass;
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v61 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v61, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         parent,
                         portraitImageId,
                         offsetKind,
                         faceType,
                         (klass & (unsigned int)~(klass >> 31)) + depth,
                         v61,
                         0,
                         -1,
                         0LL);
    v70 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B5D69C(0LL, v63);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B5D560(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (System_Int32_array **)current,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v70, 0LL);
      v74 = current->fields.commonPosition;
      if ( !v74 )
        sub_B5D69C(gameObject, v73);
      max_length = v74->max_length;
      if ( max_length == 1 )
      {
        v80 = sub_B5D6C8(gameObject);
        sub_B5D668(v80, 0LL);
      }
      if ( !max_length )
      {
        v81 = sub_B5D6C8(gameObject);
        sub_B5D668(v81, 0LL);
      }
      GameObjectExtensions__AddLocalPosition_32431468(gameObject, (float)v74->m_Items[1], (float)v74->m_Items[2], 0LL);
    }
    v76 = this->fields.figureCollectList;
    v77 = (StandFigureCollect_o *)sub_B5D694(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v77, current, (UIStandFigureR_o *)v70, 0LL);
    if ( !v76 )
      sub_B5D69C(v78, v79);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v76,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v92,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void __fastcall BattleResultBondsFigureComponent__DestroyFigure(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x23
  UnityEngine_Object_o *monitor; // x20
  __int64 v25; // x1
  UIStandFigureR_o *v26; // x0
  __int64 v27; // x1
  UnityEngine_Component_o *v28; // x0
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E889D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E889D = 1;
  }
  memset(&v31, 0, sizeof(v31));
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)figureCollectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v21 )
      break;
    current = v31.fields.current;
    if ( !v31.fields.current )
      sub_B5D69C(v21, v22);
    monitor = (UnityEngine_Object_o *)v31.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v26 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v26 )
        sub_B5D69C(0LL, v25);
      UIStandFigureR__ReleaseCharacter(v26, 0LL);
      v28 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v28 )
        sub_B5D69C(0LL, v27);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v28, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
LABEL_22:
    sub_B5D69C(figureCollectList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)figureCollectList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
}


// local variable allocation has failed, the output may be wrong!
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int32_t ImageLimitCount; // w26
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  int32_t ServantImageLimitSealAfter; // w3

  if ( (byte_42E889E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      (_DWORD)parent,
      svtId,
      *(_QWORD *)&limitCount);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E889E = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v25);
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