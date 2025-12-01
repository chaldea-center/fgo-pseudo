void StandFigureSlideComponent___cctor(const MethodInfo *method)
{
  struct StandFigureSlideComponent_StaticFields *static_fields; // x8
  ManagerConfig_c *v2; // x0

  if ( (byte_4CC3E47 & 1) == 0 )
  {
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&StandFigureSlideComponent_TypeInfo);
    byte_4CC3E47 = 1;
  }
  static_fields = StandFigureSlideComponent_TypeInfo->static_fields;
  static_fields->FRAME_IN_POS_X = -540.0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
    static_fields = StandFigureSlideComponent_TypeInfo->static_fields;
  }
  static_fields->FRAME_OUT_POS_X = (float)-v2->static_fields->WIDTH;
}


void StandFigureSlideComponent___ctor(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC3E46 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_4CC3E46 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.figureCollectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void StandFigureSlideComponent__Awake(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_StandFigureSlideComponent__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x20
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2

  if ( (byte_4CC3E3C & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_StandFigureSlideComponent___ctor__);
    sub_1C713B0(&Method_CStateManager_StandFigureSlideComponent__add__);
    sub_1C713B0(&CStateManager_StandFigureSlideComponent__TypeInfo);
    sub_1C713B0(&StandFigureSlideComponent_StateNone_TypeInfo);
    sub_1C713B0(&StandFigureSlideComponent_StateReady_TypeInfo);
    sub_1C713B0(&StandFigureSlideComponent_StateSlide_TypeInfo);
    byte_4CC3E3C = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C715FC(CStateManager_StandFigureSlideComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3394668 *)Method_CStateManager_StandFigureSlideComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_StandFigureSlideComponent__o *)v4;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_1C715FC(StandFigureSlideComponent_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3394710 *)Method_CStateManager_StandFigureSlideComponent__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_1C715FC(StandFigureSlideComponent_StateReady_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15
      || (CStateManager_object___add(
            v15,
            1,
            (IState_T__o *)v16,
            (const MethodInfo_3394710 *)Method_CStateManager_StandFigureSlideComponent__add__),
          v17 = (CStateManager_T__o *)*p_mFSM,
          v18 = (Il2CppObject *)sub_1C715FC(StandFigureSlideComponent_StateSlide_TypeInfo),
          System_Object___ctor(v18, 0),
          !v17) )
    {
LABEL_9:
      sub_1C71608(v13, v14);
    }
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_3394710 *)Method_CStateManager_StandFigureSlideComponent__add__);
    StandFigureSlideComponent__SetState(this, 0, v19);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, 288.0, v21);
  StandFigureSlideComponent__SetEnable(this, 1, v22);
}


void StandFigureSlideComponent__CreateEndCallback(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t createNumMax; // w9
  int32_t v9; // w8
  GrandQuestFolderBoardItem_o *p_createCallback; // x0
  struct System_Action_o *v11; // x19
  struct System_Action_o *createCallback; // t1

  createNumMax = this->fields.createNumMax;
  v9 = this->fields.createNum + 1;
  this->fields.createNum = v9;
  if ( v9 >= createNumMax )
  {
    createCallback = this->fields.createCallback;
    p_createCallback = (GrandQuestFolderBoardItem_o *)&this->fields.createCallback;
    v11 = createCallback;
    p_createCallback[-1].fields._ClosedMessage_k__BackingField = 0;
    if ( createCallback )
    {
      p_createCallback->klass = 0;
      sub_1C71354(p_createCallback, 0, v2, v3, v4, v5, v6, v7);
      ((void (__fastcall *)(intptr_t, intptr_t))v11->fields.invoke_impl)(v11->fields.method_code, v11->fields.method);
    }
  }
}


void StandFigureSlideComponent__CreateFigurePrefab(
        StandFigureSlideComponent_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t depth,
        float alpha,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  DataManager_o *v17; // x25
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x25
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  _BOOL8 v25; // x0
  __int64 v26; // x1
  SvtMultiPortraitEntity_o *current; // x24
  int klass_high; // w27
  int32_t portraitImageId; // w25
  System_Action_o *v30; // x26
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UIStandFigureR_o *v39; // x25
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v41; // x0
  const MethodInfo *v42; // x1
  struct System_Int32_array *v43; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v45; // x26
  StandFigureCollect_o *v46; // x27
  __int64 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  System_Action_o *v59; // x24
  UIStandFigureR_o *v60; // x21
  System_Collections_Generic_List_object__o *figureCollectList; // x19
  StandFigureCollect_o *v62; // x20
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+30h] [xbp-90h] BYREF
  int32_t v75; // [xsp+58h] [xbp-68h]
  int32_t v76; // [xsp+5Ch] [xbp-64h]

  if ( (byte_4CC3E40 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StandFigureCollect_TypeInfo);
    sub_1C713B0(&Method_StandFigureSlideComponent_CreateEndCallback__);
    byte_4CC3E40 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v17 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v17,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_36;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        imageLimitCount,
                        0,
                        0);
  this->fields.createCallback = callBack;
  *(_QWORD *)&this->fields.createNumMax = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.createCallback,
    (int32_t)callBack,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !EntityListOrderBy
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v59 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v59, (Il2CppObject *)this, Method_StandFigureSlideComponent_CreateEndCallback__, 0);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_40949764(
                                  gameObject,
                                  svtId,
                                  imageLimitCount,
                                  6,
                                  0,
                                  depth,
                                  v59,
                                  0,
                                  -1,
                                  0,
                                  0);
    if ( Instance )
    {
      v60 = (UIStandFigureR_o *)Instance;
      UIStandFigureR__SetAlpha((UIStandFigureR_o *)Instance, alpha, 0);
      figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
      v62 = (StandFigureCollect_o *)sub_1C715FC(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v62, 0, v60, 0);
      if ( figureCollectList )
      {
        items = figureCollectList->fields._items;
        v70 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
        ++figureCollectList->fields._version;
        if ( items )
        {
          size = figureCollectList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              figureCollectList,
              (Il2CppObject *)v62,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
          }
          else
          {
            v72 = &items->obj.klass + size;
            figureCollectList->fields._size = size + 1;
            v72[4] = (Il2CppClass *)v62;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v72 + 4), (int32_t)v62, v63, v64, v65, v66, v67, v68);
          }
          return;
        }
      }
    }
LABEL_36:
    sub_1C71608(Instance, v16);
  }
  v75 = svtId;
  v76 = imageLimitCount;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v73,
    (System_Collections_Generic_List_object__o *)EntityListOrderBy,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v74 = v73;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v74,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v25 )
      break;
    current = (SvtMultiPortraitEntity_o *)v74.fields._current;
    if ( !v74.fields._current )
      sub_1C71608(v25, v26);
    klass_high = HIDWORD(v74.fields._current[2].klass);
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v30 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_StandFigureSlideComponent_CreateEndCallback__, 0);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         gameObject,
                         portraitImageId,
                         6,
                         0,
                         (klass_high & (unsigned int)~(klass_high >> 31)) + depth,
                         v30,
                         0,
                         -1,
                         0,
                         0);
    v39 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C71608(0, v32);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    UIStandFigureR__SetAlpha(v39, alpha, 0);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v39, 0);
      v43 = current->fields.commonPosition;
      if ( !v43 )
        sub_1C71608(v41, v42);
      max_length = v43->max_length;
      if ( max_length == 1 )
        sub_1C71610(v41);
      if ( !max_length )
        sub_1C71610(v41);
      GameObjectExtensions__AddLocalPosition_36390912(v41, (float)v43->m_Items[0], (float)v43->m_Items[1], v42);
    }
    v45 = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v46 = (StandFigureCollect_o *)sub_1C715FC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v46, current, v39, 0);
    if ( !v45 )
      sub_1C71608(v47, v48);
    v55 = v45->fields._items;
    v56 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v45->fields._version;
    if ( !v55 )
      sub_1C71608(v47, v48);
    v57 = v45->fields._size;
    if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v45,
        (Il2CppObject *)v46,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &v55->obj.klass + v57;
      v45->fields._size = v57 + 1;
      v58[4] = (Il2CppClass *)v46;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v58 + 4), (int32_t)v46, v49, v50, v51, v52, v53, v54);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v74,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void StandFigureSlideComponent__Destroy(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x24
  UnityEngine_Object_o *monitor; // x20
  __int64 v8; // x1
  UIStandFigureR_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v13; // x8
  int32_t size; // w2
  int v15; // w9
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC3E3E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3E3E = 1;
  }
  memset(&v17, 0, sizeof(v17));
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)figureCollectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C71608(v4, v5);
    monitor = (UnityEngine_Object_o *)v17.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    {
      v9 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v9 )
        sub_1C71608(0, v8);
      UIStandFigureR__ReleaseCharacter(v9, 0);
      v11 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v11 )
        sub_1C71608(0, v10);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71724796(gameObject, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v13 = this->fields.figureCollectList;
  if ( !v13 )
LABEL_22:
    sub_1C71608(figureCollectList, method);
  size = v13->fields._size;
  v15 = v13->fields._version + 1;
  v13->fields._size = 0;
  v13->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v13->fields._items, 0, size, 0);
}


void StandFigureSlideComponent__EndSlide(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  StandFigureSlideComponent_o *v2; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  System_Action_o *mSlideEndAct; // t1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v2 = this;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, v2->fields.mTgtPosX, v4);
  StandFigureSlideComponent__SetFigureAlpha(v2, v2->fields.mTgtAlp, v5);
  StandFigureSlideComponent__SetState(v2, 1, v6);
  mSlideEndAct = v2->fields.mSlideEndAct;
  v2 = (StandFigureSlideComponent_o *)((char *)v2 + 88);
  ActionExtensions__Call(mSlideEndAct, 0);
  v2->klass = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v2, 0, v8, v9, v10, v11, v12, v13);
}


int32_t StandFigureSlideComponent__GetState(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  StandFigureSlideComponent_o *v2; // x19
  struct CStateManager_StandFigureSlideComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4CC3E44 & 1) == 0 )
  {
    this = (StandFigureSlideComponent_o *)sub_1C713B0(&Method_CStateManager_StandFigureSlideComponent__getState__);
    byte_4CC3E44 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C71608(this, method);
  return mFSM->fields.m_state;
}


bool StandFigureSlideComponent__IsEnable(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  return this->fields.mIsEnable;
}


bool StandFigureSlideComponent__IsFrameIn(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  return this->fields.mIsFrameIn;
}


bool StandFigureSlideComponent__IsLoding(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  return this->fields.mIsLoading;
}


bool StandFigureSlideComponent__IsMoving(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  return StandFigureSlideComponent__GetState(this, method) == 2;
}


void StandFigureSlideComponent__OnClickBtn(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  if ( StandFigureSlideComponent__GetState(this, method) )
    ActionExtensions__Call(this->fields.mBtnAct, 0);
}


// attributes: thunk
void StandFigureSlideComponent__OnDestroy(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  StandFigureSlideComponent__Destroy(this, method);
}


void StandFigureSlideComponent__SetBtnAct(
        StandFigureSlideComponent_o *this,
        System_Action_o *btn_act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.mBtnAct = btn_act;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mBtnAct,
    (int32_t)btn_act,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void StandFigureSlideComponent__SetEnable(StandFigureSlideComponent_o *this, bool is_enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *mBtnColl; // x0
  _BOOL8 v5; // x1

  mBtnColl = (UnityEngine_Collider_o *)this->fields.mBtnColl;
  v5 = is_enable;
  this->fields.mIsEnable = v5;
  if ( !mBtnColl )
    sub_1C71608(0, v5);
  UnityEngine_Collider__set_enabled(mBtnColl, v5, 0);
}


void StandFigureSlideComponent__SetFigureAlpha(
        StandFigureSlideComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x23
  UnityEngine_Object_o *monitor; // x19
  __int64 v10; // x1
  UIStandFigureR_o *v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC3E41 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3E41 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
    sub_1C71608(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)figureCollectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v6 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C71608(v6, v7);
    monitor = (UnityEngine_Object_o *)v13.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    {
      v11 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v11 )
        sub_1C71608(0, v10);
      UIStandFigureR__SetAlpha(v11, alpha, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void StandFigureSlideComponent__SetState(StandFigureSlideComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4CC3E45 & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_StandFigureSlideComponent__setState__);
    byte_4CC3E45 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C71608(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_339479C *)Method_CStateManager_StandFigureSlideComponent__setState__);
}


void StandFigureSlideComponent__Setup(
        StandFigureSlideComponent_o *this,
        UserServantEntity_o *usd,
        int32_t depth,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v9; // x21
  Il2CppObject *Instance; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Action_o *v24; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x2
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x8
  int32_t SvtId; // w24
  int32_t FigureImageLimitCount; // w25
  int32_t ServantImageLimitSealAfter; // w0
  int v36; // w24
  _DWORD *monitor; // x8
  const MethodInfo *v38; // x3
  int32_t v39; // w23
  int32_t v40; // w22
  int32_t v41; // w22
  UnityEngine_GameObject_o *gameObject; // x24
  System_Action_o *v43; // x25
  const MethodInfo *v44; // x6

  if ( (byte_4CC3E3F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__0__);
    sub_1C713B0(&Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__1__);
    sub_1C713B0(&StandFigureSlideComponent___c__DisplayClass31_0_TypeInfo);
    byte_4CC3E3F = 1;
  }
  v9 = sub_1C715FC(StandFigureSlideComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_17;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = end_act;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)end_act, v18, v19, v20, v21, v22, v23);
  v24 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v9, Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__0__, 0);
  *(_QWORD *)(v9 + 32) = v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)v24, v25, v26, v27, v28, v29, v30);
  this->fields.mIsLoading = 1;
  StandFigureSlideComponent__SetState(this, 0, v31);
  if ( !usd )
  {
LABEL_13:
    ActionExtensions__Call(*(System_Action_o **)(v9 + 32), 0);
    return;
  }
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_17;
  if ( figureCollectList->fields._size < 1 )
    goto LABEL_14;
  SvtId = UserServantEntity__getSvtId(usd, 0);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(usd, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       SvtId,
                                       FigureImageLimitCount,
                                       0),
        Instance = (Il2CppObject *)ServantScriptMaster__getId(SvtId, ServantImageLimitSealAfter, 0),
        !this->fields.figureCollectList)
    || (v36 = (int)Instance,
        (Instance = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this->fields.figureCollectList,
                      0,
                      (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0)
    || (monitor = Instance[1].monitor) == 0 )
  {
LABEL_17:
    sub_1C71608(Instance, v11);
  }
  if ( v36 == monitor[15] )
    goto LABEL_13;
LABEL_14:
  StandFigureSlideComponent__Destroy(this, v11);
  StandFigureSlideComponent__SlideOut(this, 0, 1, v38);
  v39 = UserServantEntity__getSvtId(usd, 0);
  v40 = UserServantEntity__getFigureImageLimitCount(usd, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_17;
  v41 = ServantLimitImageMaster__GetServantImageLimitSealAfter((ServantLimitImageMaster_o *)Instance, v39, v40, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v43 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)v9, Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__1__, 0);
  StandFigureSlideComponent__CreateFigurePrefab(this, gameObject, v39, v41, depth, 0.0, v43, v44);
}


void StandFigureSlideComponent__SlideIn(
        StandFigureSlideComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  StandFigureSlideComponent_c *v11; // x0
  float FRAME_IN_POS_X; // s0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4CC3E42 & 1) == 0 )
  {
    sub_1C713B0(&StandFigureSlideComponent_TypeInfo);
    byte_4CC3E42 = 1;
  }
  if ( this->fields.mIsEnable
    && (StandFigureSlideComponent__GetState(this, (const MethodInfo *)end_act) != 2 || !this->fields.mIsFrameIn) )
  {
    v11 = StandFigureSlideComponent_TypeInfo;
    if ( !StandFigureSlideComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureSlideComponent_TypeInfo);
      v11 = StandFigureSlideComponent_TypeInfo;
    }
    FRAME_IN_POS_X = v11->static_fields->FRAME_IN_POS_X;
    this->fields.mTgtAlp = 1.0;
    this->fields.mSpdRateAlp = 0.175;
    this->fields.mIsFrameIn = 1;
    this->fields.mTgtPosX = FRAME_IN_POS_X;
    this->fields.mSlideEndAct = end_act;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mSlideEndAct, (int32_t)end_act, v5, v6, v7, v8, v9, v10);
    if ( StandFigureSlideComponent__GetState(this, v13) )
      StandFigureSlideComponent__SetState(this, 2, v14);
  }
}


void StandFigureSlideComponent__SlideOut(
        StandFigureSlideComponent_o *this,
        System_Action_o *end_act,
        bool is_force,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  StandFigureSlideComponent_c *v13; // x0
  float FRAME_OUT_POS_X; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_4CC3E43 & 1) == 0 )
  {
    sub_1C713B0(&StandFigureSlideComponent_TypeInfo);
    byte_4CC3E43 = 1;
  }
  if ( this->fields.mIsEnable
    && (StandFigureSlideComponent__GetState(this, (const MethodInfo *)end_act) != 2 || this->fields.mIsFrameIn) )
  {
    v13 = StandFigureSlideComponent_TypeInfo;
    if ( !StandFigureSlideComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureSlideComponent_TypeInfo);
      v13 = StandFigureSlideComponent_TypeInfo;
    }
    FRAME_OUT_POS_X = v13->static_fields->FRAME_OUT_POS_X;
    this->fields.mTgtAlp = 0.0;
    this->fields.mTgtPosX = FRAME_OUT_POS_X;
    this->fields.mSpdRateAlp = 0.45;
    if ( is_force )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, this->fields.mTgtPosX, v16);
    }
    this->fields.mIsFrameIn = 0;
    this->fields.mSlideEndAct = end_act;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mSlideEndAct, (int32_t)end_act, v7, v8, v9, v10, v11, v12);
    if ( StandFigureSlideComponent__GetState(this, v17) )
      StandFigureSlideComponent__SetState(this, 2, v18);
  }
}


void StandFigureSlideComponent__ToggleSlide(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3

  if ( this->fields.mIsFrameIn )
    StandFigureSlideComponent__SlideOut(this, 0, 0, v3);
  else
    StandFigureSlideComponent__SlideIn(this, 0, v2);
}


void StandFigureSlideComponent__Update(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4CC3E3D & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_StandFigureSlideComponent__update__);
    byte_4CC3E3D = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3394778 *)Method_CStateManager_StandFigureSlideComponent__update__);
}


void StandFigureSlideComponent_StateNone___ctor(StandFigureSlideComponent_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StandFigureSlideComponent_StateNone__begin(
        StandFigureSlideComponent_StateNone_o *this,
        StandFigureSlideComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void StandFigureSlideComponent_StateNone__end(
        StandFigureSlideComponent_StateNone_o *this,
        StandFigureSlideComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void StandFigureSlideComponent_StateNone__update(
        StandFigureSlideComponent_StateNone_o *this,
        StandFigureSlideComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void StandFigureSlideComponent_StateReady___ctor(
        StandFigureSlideComponent_StateReady_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StandFigureSlideComponent_StateReady__begin(
        StandFigureSlideComponent_StateReady_o *this,
        StandFigureSlideComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void StandFigureSlideComponent_StateReady__end(
        StandFigureSlideComponent_StateReady_o *this,
        StandFigureSlideComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void StandFigureSlideComponent_StateReady__update(
        StandFigureSlideComponent_StateReady_o *this,
        StandFigureSlideComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void StandFigureSlideComponent_StateSlide___ctor(
        StandFigureSlideComponent_StateSlide_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StandFigureSlideComponent_StateSlide__begin(
        StandFigureSlideComponent_StateSlide_o *this,
        StandFigureSlideComponent_o *that,
        const MethodInfo *method)
{
  float v5; // s8
  System_Func_float__float__float__float__o *v6; // x0
  __int64 v7; // x1
  System_Func_T__T__float__T__o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1
  float LocalPositionX; // s0
  float mTgtPosX; // s9
  float v13; // s10
  TransitionCalculator_float__o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  float mNowAlp; // s9
  float mTgtAlp; // s10
  TransitionCalculator_float__o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4CC3E48 & 1) == 0 )
  {
    sub_1C713B0(&Method_TransitionCalculator_float___ctor__);
    sub_1C713B0(&TransitionCalculator_float__TypeInfo);
    byte_4CC3E48 = 1;
  }
  v5 = ChangedFPSUtil__CovertFrameNumToSecond(17, 0);
  v6 = ExtraEasing__AsymptoticSeriesFloat(0.35, 17.0, 0);
  if ( !that )
    sub_1C71608(v6, v7);
  v8 = (System_Func_T__T__float__T__o *)v6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, v10);
  mTgtPosX = that->fields.mTgtPosX;
  v13 = LocalPositionX;
  v14 = (TransitionCalculator_float__o *)sub_1C715FC(TransitionCalculator_float__TypeInfo);
  TransitionCalculator_float____ctor(
    v14,
    v13,
    mTgtPosX,
    v5,
    v8,
    (const MethodInfo_3B00FE4 *)Method_TransitionCalculator_float___ctor__);
  this->fields.positionCalculator = v14;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  mTgtAlp = that->fields.mTgtAlp;
  mNowAlp = that->fields.mNowAlp;
  v23 = (TransitionCalculator_float__o *)sub_1C715FC(TransitionCalculator_float__TypeInfo);
  TransitionCalculator_float____ctor(
    v23,
    mNowAlp,
    mTgtAlp,
    v5,
    v8,
    (const MethodInfo_3B00FE4 *)Method_TransitionCalculator_float___ctor__);
  this->fields.alphaCalculator = v23;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.alphaCalculator, (int32_t)v23, v24, v25, v26, v27, v28, v29);
}


void StandFigureSlideComponent_StateSlide__end(
        StandFigureSlideComponent_StateSlide_o *this,
        StandFigureSlideComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void StandFigureSlideComponent_StateSlide__update(
        StandFigureSlideComponent_StateSlide_o *this,
        StandFigureSlideComponent_o *that,
        const MethodInfo *method)
{
  StandFigureSlideComponent_StateSlide_o *v4; // x20
  StandFigureSlideComponent_StateSlide_o *v5; // x21
  float v6; // s0
  const MethodInfo *v7; // x1
  float v8; // s0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  v4 = this;
  if ( (byte_4CC3E49 & 1) == 0 )
  {
    sub_1C713B0(&Method_TransitionCalculator_float__IsFinished__);
    this = (StandFigureSlideComponent_StateSlide_o *)sub_1C713B0(&Method_TransitionCalculator_float__Update__);
    byte_4CC3E49 = 1;
  }
  if ( !that )
    goto LABEL_10;
  this = (StandFigureSlideComponent_StateSlide_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)that,
                                                     0);
  if ( !v4->fields.positionCalculator )
    goto LABEL_10;
  v5 = this;
  v6 = TransitionCalculator_float___Update(
         v4->fields.positionCalculator,
         (const MethodInfo_3B01044 *)Method_TransitionCalculator_float__Update__);
  GameObjectExtensions__SetLocalPositionX((UnityEngine_GameObject_o *)v5, v6, v7);
  this = (StandFigureSlideComponent_StateSlide_o *)v4->fields.alphaCalculator;
  if ( !this
    || (v8 = TransitionCalculator_float___Update(
               (TransitionCalculator_float__o *)this,
               (const MethodInfo_3B01044 *)Method_TransitionCalculator_float__Update__),
        that->fields.mNowAlp = v8,
        StandFigureSlideComponent__SetFigureAlpha(that, v8, v9),
        (this = (StandFigureSlideComponent_StateSlide_o *)v4->fields.positionCalculator) == 0) )
  {
LABEL_10:
    sub_1C71608(this, that);
  }
  if ( TransitionCalculator_float___IsFinished(
         (TransitionCalculator_float__o *)this,
         (const MethodInfo_3B010AC *)Method_TransitionCalculator_float__IsFinished__) )
  {
    StandFigureSlideComponent__EndSlide(that, v10);
  }
}


void StandFigureSlideComponent___c__DisplayClass31_0___ctor(
        StandFigureSlideComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StandFigureSlideComponent___c__DisplayClass31_0___Setup_b__0(
        StandFigureSlideComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  StandFigureSlideComponent_o *_4__this; // x0
  struct StandFigureSlideComponent_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (StandFigureSlideComponent__SetState(_4__this, 1, v2),
        ActionExtensions__Call(this->fields.end_act, 0),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_1C71608(_4__this, method);
  }
  v5->fields.mIsLoading = 0;
}


void StandFigureSlideComponent___c__DisplayClass31_0___Setup_b__1(
        StandFigureSlideComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  struct StandFigureSlideComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  _4__this->fields.mNowAlp = 0.0;
  StandFigureSlideComponent__SetFigureAlpha(_4__this, 0.0, method);
  ActionExtensions__Call(this->fields.this_end_act, 0);
}