void StandFigureSlideComponent___cctor(const MethodInfo *method)
{
  struct StandFigureSlideComponent_StaticFields *static_fields; // x8
  ManagerConfig_c *v2; // x0

  if ( (byte_4C3445F & 1) == 0 )
  {
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&StandFigureSlideComponent_TypeInfo);
    byte_4C3445F = 1;
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
  const MethodInfo *v5; // x3

  if ( (byte_4C3445E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_4C3445E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.figureCollectList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void StandFigureSlideComponent__Awake(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_StandFigureSlideComponent__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v8; // x22
  __int64 v9; // x0
  CStateManager_T__o *v10; // x21
  Il2CppObject *v11; // x22
  CStateManager_T__o *v12; // x20
  Il2CppObject *v13; // x21
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4C34454 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_StandFigureSlideComponent___ctor__);
    sub_1C32C20(&Method_CStateManager_StandFigureSlideComponent__add__);
    sub_1C32C20(&CStateManager_StandFigureSlideComponent__TypeInfo);
    sub_1C32C20(&StandFigureSlideComponent_StateNone_TypeInfo);
    sub_1C32C20(&StandFigureSlideComponent_StateReady_TypeInfo);
    sub_1C32C20(&StandFigureSlideComponent_StateSlide_TypeInfo);
    byte_4C34454 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C32E6C(CStateManager_StandFigureSlideComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3322708 *)Method_CStateManager_StandFigureSlideComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_StandFigureSlideComponent__o *)v4;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1C32E6C(StandFigureSlideComponent_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_33227B0 *)Method_CStateManager_StandFigureSlideComponent__add__);
    v10 = (CStateManager_T__o *)*p_mFSM;
    v11 = (Il2CppObject *)sub_1C32E6C(StandFigureSlideComponent_StateReady_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !v10
      || (CStateManager_object___add(
            v10,
            1,
            (IState_T__o *)v11,
            (const MethodInfo_33227B0 *)Method_CStateManager_StandFigureSlideComponent__add__),
          v12 = (CStateManager_T__o *)*p_mFSM,
          v13 = (Il2CppObject *)sub_1C32E6C(StandFigureSlideComponent_StateSlide_TypeInfo),
          System_Object___ctor(v13, 0),
          !v12) )
    {
LABEL_9:
      sub_1C32E7C(v9);
    }
    CStateManager_object___add(
      v12,
      2,
      (IState_T__o *)v13,
      (const MethodInfo_33227B0 *)Method_CStateManager_StandFigureSlideComponent__add__);
    StandFigureSlideComponent__SetState(this, 0, v14);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, 288.0, v16);
  StandFigureSlideComponent__SetEnable(this, 1, v17);
}


void StandFigureSlideComponent__CreateEndCallback(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t createNumMax; // w9
  int32_t v5; // w8
  CGThumbnailListItem_o *p_createCallback; // x0
  struct System_Action_o *v7; // x19
  struct System_Action_o *createCallback; // t1

  createNumMax = this->fields.createNumMax;
  v5 = this->fields.createNum + 1;
  this->fields.createNum = v5;
  if ( v5 >= createNumMax )
  {
    createCallback = this->fields.createCallback;
    p_createCallback = (CGThumbnailListItem_o *)&this->fields.createCallback;
    v7 = createCallback;
    p_createCallback[-1].fields._ThumbnailSpritePath_k__BackingField = 0;
    if ( createCallback )
    {
      p_createCallback->klass = 0;
      sub_1C32BC4(p_createCallback, 0, v2, v3);
      ((void (__fastcall *)(intptr_t, intptr_t))v7->fields.invoke_impl)(v7->fields.method_code, v7->fields.method);
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
  DataManager_o *v16; // x25
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x25
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  _BOOL8 v20; // x0
  SvtMultiPortraitEntity_o *current; // x24
  int klass_high; // w27
  int32_t portraitImageId; // w25
  System_Action_o *v24; // x26
  UIStandFigureR_o *PrefabForImageId; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UIStandFigureR_o *v28; // x25
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v30; // x0
  const MethodInfo *v31; // x1
  struct System_Int32_array *v32; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v34; // x26
  StandFigureCollect_o *v35; // x27
  __int64 v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  System_Action_o *v43; // x24
  UIStandFigureR_o *v44; // x21
  System_Collections_Generic_List_object__o *figureCollectList; // x19
  StandFigureCollect_o *v46; // x20
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+30h] [xbp-90h] BYREF
  int32_t v55; // [xsp+58h] [xbp-68h]
  int32_t v56; // [xsp+5Ch] [xbp-64h]

  if ( (byte_4C34458 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StandFigureCollect_TypeInfo);
    sub_1C32C20(&Method_StandFigureSlideComponent_CreateEndCallback__);
    byte_4C34458 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v16 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v16,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.createCallback, (int32_t)callBack, v18, v19);
  if ( !EntityListOrderBy
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v43 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v43, (Il2CppObject *)this, Method_StandFigureSlideComponent_CreateEndCallback__, 0);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_40577020(
                                  gameObject,
                                  svtId,
                                  imageLimitCount,
                                  6,
                                  0,
                                  depth,
                                  v43,
                                  0,
                                  -1,
                                  0,
                                  0);
    if ( Instance )
    {
      v44 = (UIStandFigureR_o *)Instance;
      UIStandFigureR__SetAlpha((UIStandFigureR_o *)Instance, alpha, 0);
      figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
      v46 = (StandFigureCollect_o *)sub_1C32E6C(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v46, 0, v44, 0);
      if ( figureCollectList )
      {
        items = figureCollectList->fields._items;
        v50 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
        ++figureCollectList->fields._version;
        if ( items )
        {
          size = figureCollectList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              figureCollectList,
              (Il2CppObject *)v46,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = &items->obj.klass + size;
            figureCollectList->fields._size = size + 1;
            v52[4] = (Il2CppClass *)v46;
            sub_1C32BC4((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v46, v47, v48);
          }
          return;
        }
      }
    }
LABEL_36:
    sub_1C32E7C(Instance);
  }
  v55 = svtId;
  v56 = imageLimitCount;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)EntityListOrderBy,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v20 )
      break;
    current = (SvtMultiPortraitEntity_o *)v54.fields._current;
    if ( !v54.fields._current )
      sub_1C32E7C(v20);
    klass_high = HIDWORD(v54.fields._current[2].klass);
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v24 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_StandFigureSlideComponent_CreateEndCallback__, 0);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         gameObject,
                         portraitImageId,
                         6,
                         0,
                         (klass_high & (unsigned int)~(klass_high >> 31)) + depth,
                         v24,
                         0,
                         -1,
                         0,
                         0);
    v28 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C32E7C(0);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C32BC4((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v26, v27);
    UIStandFigureR__SetAlpha(v28, alpha, 0);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0);
      v32 = current->fields.commonPosition;
      if ( !v32 )
        sub_1C32E7C(v30);
      max_length = v32->max_length;
      if ( max_length == 1 )
        sub_1C32E84(v30);
      if ( !max_length )
        sub_1C32E84(v30);
      GameObjectExtensions__AddLocalPosition_36037696(v30, (float)v32->m_Items[0], (float)v32->m_Items[1], v31);
    }
    v34 = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v35 = (StandFigureCollect_o *)sub_1C32E6C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v35, current, v28, 0);
    if ( !v34 )
      sub_1C32E7C(v36);
    v39 = v34->fields._items;
    v40 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v34->fields._version;
    if ( !v39 )
      sub_1C32E7C(v36);
    v41 = v34->fields._size;
    if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        (Il2CppObject *)v35,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &v39->obj.klass + v41;
      v34->fields._size = v41 + 1;
      v42[4] = (Il2CppClass *)v35;
      sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v35, v37, v38);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void StandFigureSlideComponent__Destroy(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x24
  UnityEngine_Object_o *monitor; // x20
  UIStandFigureR_o *v7; // x0
  UnityEngine_Component_o *v8; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C34456 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34456 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)figureCollectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_1C32E7C(v4);
    monitor = (UnityEngine_Object_o *)v14.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    {
      v7 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v7 )
        sub_1C32E7C(0);
      UIStandFigureR__ReleaseCharacter(v7, 0);
      v8 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v8 )
        sub_1C32E7C(0);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71223828(gameObject, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v10 = this->fields.figureCollectList;
  if ( !v10 )
LABEL_22:
    sub_1C32E7C(figureCollectList);
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0);
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
  const MethodInfo *v9; // x3

  v2 = this;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, v2->fields.mTgtPosX, v4);
  StandFigureSlideComponent__SetFigureAlpha(v2, v2->fields.mTgtAlp, v5);
  StandFigureSlideComponent__SetState(v2, 1, v6);
  mSlideEndAct = v2->fields.mSlideEndAct;
  v2 = (StandFigureSlideComponent_o *)((char *)v2 + 88);
  ActionExtensions__Call(mSlideEndAct, 0);
  v2->klass = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)v2, 0, v8, v9);
}


int32_t StandFigureSlideComponent__GetState(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  StandFigureSlideComponent_o *v2; // x19
  struct CStateManager_StandFigureSlideComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C3445C & 1) == 0 )
  {
    this = (StandFigureSlideComponent_o *)sub_1C32C20(&Method_CStateManager_StandFigureSlideComponent__getState__);
    byte_4C3445C = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C32E7C(this);
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
  const MethodInfo *v3; // x3

  this->fields.mBtnAct = btn_act;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mBtnAct, (int32_t)btn_act, (int32_t)method, v3);
}


void StandFigureSlideComponent__SetEnable(StandFigureSlideComponent_o *this, bool is_enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *mBtnColl; // x0
  bool v5; // w1

  mBtnColl = (UnityEngine_Collider_o *)this->fields.mBtnColl;
  v5 = is_enable;
  this->fields.mIsEnable = v5;
  if ( !mBtnColl )
    sub_1C32E7C(0);
  UnityEngine_Collider__set_enabled(mBtnColl, v5, 0);
}


void StandFigureSlideComponent__SetFigureAlpha(
        StandFigureSlideComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x0
  _BOOL8 v6; // x0
  Il2CppObject *current; // x23
  UnityEngine_Object_o *monitor; // x19
  UIStandFigureR_o *v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C34459 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34459 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)figureCollectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v11 = v10;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v6 )
      break;
    current = v11.fields._current;
    if ( !v11.fields._current )
      sub_1C32E7C(v6);
    monitor = (UnityEngine_Object_o *)v11.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    {
      v9 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v9 )
        sub_1C32E7C(0);
      UIStandFigureR__SetAlpha(v9, alpha, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void StandFigureSlideComponent__SetState(StandFigureSlideComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C3445D & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_StandFigureSlideComponent__setState__);
    byte_4C3445D = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C32E7C(0);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_332283C *)Method_CStateManager_StandFigureSlideComponent__setState__);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_o *v15; // x24
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x8
  int32_t SvtId; // w24
  int32_t FigureImageLimitCount; // w25
  int32_t ServantImageLimitSealAfter; // w0
  int v24; // w24
  _DWORD *monitor; // x8
  const MethodInfo *v26; // x3
  int32_t v27; // w23
  int32_t v28; // w22
  int32_t v29; // w22
  UnityEngine_GameObject_o *gameObject; // x24
  System_Action_o *v31; // x25
  const MethodInfo *v32; // x6

  if ( (byte_4C34457 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__0__);
    sub_1C32C20(&Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__1__);
    sub_1C32C20(&StandFigureSlideComponent___c__DisplayClass31_0_TypeInfo);
    byte_4C34457 = 1;
  }
  v9 = sub_1C32E6C(StandFigureSlideComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_17;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = end_act;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 24), (int32_t)end_act, v13, v14);
  v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v9, Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__0__, 0);
  *(_QWORD *)(v9 + 32) = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v15, v16, v17);
  this->fields.mIsLoading = 1;
  StandFigureSlideComponent__SetState(this, 0, v18);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       SvtId,
                                       FigureImageLimitCount,
                                       0),
        Instance = (Il2CppObject *)ServantScriptMaster__getId(SvtId, ServantImageLimitSealAfter, 0),
        !this->fields.figureCollectList)
    || (v24 = (int)Instance,
        (Instance = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this->fields.figureCollectList,
                      0,
                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0)
    || (monitor = Instance[1].monitor) == 0 )
  {
LABEL_17:
    sub_1C32E7C(Instance);
  }
  if ( v24 == monitor[15] )
    goto LABEL_13;
LABEL_14:
  StandFigureSlideComponent__Destroy(this, v19);
  StandFigureSlideComponent__SlideOut(this, 0, 1, v26);
  v27 = UserServantEntity__getSvtId(usd, 0);
  v28 = UserServantEntity__getFigureImageLimitCount(usd, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_17;
  v29 = ServantLimitImageMaster__GetServantImageLimitSealAfter((ServantLimitImageMaster_o *)Instance, v27, v28, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v31 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v9, Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__1__, 0);
  StandFigureSlideComponent__CreateFigurePrefab(this, gameObject, v27, v29, depth, 0.0, v31, v32);
}


void StandFigureSlideComponent__SlideIn(
        StandFigureSlideComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  StandFigureSlideComponent_c *v7; // x0
  float FRAME_IN_POS_X; // s0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4C3445A & 1) == 0 )
  {
    sub_1C32C20(&StandFigureSlideComponent_TypeInfo);
    byte_4C3445A = 1;
  }
  if ( this->fields.mIsEnable
    && (StandFigureSlideComponent__GetState(this, (const MethodInfo *)end_act) != 2 || !this->fields.mIsFrameIn) )
  {
    v7 = StandFigureSlideComponent_TypeInfo;
    if ( !StandFigureSlideComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureSlideComponent_TypeInfo);
      v7 = StandFigureSlideComponent_TypeInfo;
    }
    FRAME_IN_POS_X = v7->static_fields->FRAME_IN_POS_X;
    this->fields.mTgtAlp = 1.0;
    this->fields.mSpdRateAlp = 0.175;
    this->fields.mIsFrameIn = 1;
    this->fields.mTgtPosX = FRAME_IN_POS_X;
    this->fields.mSlideEndAct = end_act;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mSlideEndAct, (int32_t)end_act, v5, v6);
    if ( StandFigureSlideComponent__GetState(this, v9) )
      StandFigureSlideComponent__SetState(this, 2, v10);
  }
}


void StandFigureSlideComponent__SlideOut(
        StandFigureSlideComponent_o *this,
        System_Action_o *end_act,
        bool is_force,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  StandFigureSlideComponent_c *v9; // x0
  float FRAME_OUT_POS_X; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4C3445B & 1) == 0 )
  {
    sub_1C32C20(&StandFigureSlideComponent_TypeInfo);
    byte_4C3445B = 1;
  }
  if ( this->fields.mIsEnable
    && (StandFigureSlideComponent__GetState(this, (const MethodInfo *)end_act) != 2 || this->fields.mIsFrameIn) )
  {
    v9 = StandFigureSlideComponent_TypeInfo;
    if ( !StandFigureSlideComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureSlideComponent_TypeInfo);
      v9 = StandFigureSlideComponent_TypeInfo;
    }
    FRAME_OUT_POS_X = v9->static_fields->FRAME_OUT_POS_X;
    this->fields.mTgtAlp = 0.0;
    this->fields.mTgtPosX = FRAME_OUT_POS_X;
    this->fields.mSpdRateAlp = 0.45;
    if ( is_force )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, this->fields.mTgtPosX, v12);
    }
    this->fields.mIsFrameIn = 0;
    this->fields.mSlideEndAct = end_act;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mSlideEndAct, (int32_t)end_act, v7, v8);
    if ( StandFigureSlideComponent__GetState(this, v13) )
      StandFigureSlideComponent__SetState(this, 2, v14);
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

  if ( (byte_4C34455 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_StandFigureSlideComponent__update__);
    byte_4C34455 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3322818 *)Method_CStateManager_StandFigureSlideComponent__update__);
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
  System_Func_T__T__float__T__o *v7; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x1
  float LocalPositionX; // s0
  float mTgtPosX; // s9
  float v12; // s10
  TransitionCalculator_float__o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  float mNowAlp; // s9
  float mTgtAlp; // s10
  TransitionCalculator_float__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C34460 & 1) == 0 )
  {
    sub_1C32C20(&Method_TransitionCalculator_float___ctor__);
    sub_1C32C20(&TransitionCalculator_float__TypeInfo);
    byte_4C34460 = 1;
  }
  v5 = ChangedFPSUtil__CovertFrameNumToSecond(17, 0);
  v6 = ExtraEasing__AsymptoticSeriesFloat(0.35, 17.0, 0);
  if ( !that )
    sub_1C32E7C(v6);
  v7 = (System_Func_T__T__float__T__o *)v6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, v9);
  mTgtPosX = that->fields.mTgtPosX;
  v12 = LocalPositionX;
  v13 = (TransitionCalculator_float__o *)sub_1C32E6C(TransitionCalculator_float__TypeInfo);
  TransitionCalculator_float____ctor(
    v13,
    v12,
    mTgtPosX,
    v5,
    v7,
    (const MethodInfo_3A5B8CC *)Method_TransitionCalculator_float___ctor__);
  this->fields.positionCalculator = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v13, v14, v15);
  mTgtAlp = that->fields.mTgtAlp;
  mNowAlp = that->fields.mNowAlp;
  v18 = (TransitionCalculator_float__o *)sub_1C32E6C(TransitionCalculator_float__TypeInfo);
  TransitionCalculator_float____ctor(
    v18,
    mNowAlp,
    mTgtAlp,
    v5,
    v7,
    (const MethodInfo_3A5B8CC *)Method_TransitionCalculator_float___ctor__);
  this->fields.alphaCalculator = v18;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.alphaCalculator, (int32_t)v18, v19, v20);
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
  if ( (byte_4C34461 & 1) == 0 )
  {
    sub_1C32C20(&Method_TransitionCalculator_float__IsFinished__);
    this = (StandFigureSlideComponent_StateSlide_o *)sub_1C32C20(&Method_TransitionCalculator_float__Update__);
    byte_4C34461 = 1;
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
         (const MethodInfo_3A5B92C *)Method_TransitionCalculator_float__Update__);
  GameObjectExtensions__SetLocalPositionX((UnityEngine_GameObject_o *)v5, v6, v7);
  this = (StandFigureSlideComponent_StateSlide_o *)v4->fields.alphaCalculator;
  if ( !this
    || (v8 = TransitionCalculator_float___Update(
               (TransitionCalculator_float__o *)this,
               (const MethodInfo_3A5B92C *)Method_TransitionCalculator_float__Update__),
        that->fields.mNowAlp = v8,
        StandFigureSlideComponent__SetFigureAlpha(that, v8, v9),
        (this = (StandFigureSlideComponent_StateSlide_o *)v4->fields.positionCalculator) == 0) )
  {
LABEL_10:
    sub_1C32E7C(this);
  }
  if ( TransitionCalculator_float___IsFinished(
         (TransitionCalculator_float__o *)this,
         (const MethodInfo_3A5B994 *)Method_TransitionCalculator_float__IsFinished__) )
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
    sub_1C32E7C(_4__this);
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
    sub_1C32E7C(0);
  _4__this->fields.mNowAlp = 0.0;
  StandFigureSlideComponent__SetFigureAlpha(_4__this, 0.0, method);
  ActionExtensions__Call(this->fields.this_end_act, 0);
}