void StandFigureSlideComponent___cctor(const MethodInfo *method)
{
  struct StandFigureSlideComponent_StaticFields *static_fields; // x8
  ManagerConfig_c *v2; // x0

  if ( (byte_4C537E4 & 1) == 0 )
  {
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&StandFigureSlideComponent_TypeInfo);
    byte_4C537E4 = 1;
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

  if ( (byte_4C537E3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_4C537E3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.figureCollectList, (int32_t)v3, v4, v5);
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
  __int64 v10; // x1
  CStateManager_T__o *v11; // x21
  Il2CppObject *v12; // x22
  CStateManager_T__o *v13; // x20
  Il2CppObject *v14; // x21
  const MethodInfo *v15; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_4C537D9 & 1) == 0 )
  {
    sub_1C3E564(&Method_CStateManager_StandFigureSlideComponent___ctor__);
    sub_1C3E564(&Method_CStateManager_StandFigureSlideComponent__add__);
    sub_1C3E564(&CStateManager_StandFigureSlideComponent__TypeInfo);
    sub_1C3E564(&StandFigureSlideComponent_StateNone_TypeInfo);
    sub_1C3E564(&StandFigureSlideComponent_StateReady_TypeInfo);
    sub_1C3E564(&StandFigureSlideComponent_StateSlide_TypeInfo);
    byte_4C537D9 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C3E7B0(CStateManager_StandFigureSlideComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_333EE28 *)Method_CStateManager_StandFigureSlideComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_StandFigureSlideComponent__o *)v4;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1C3E7B0(StandFigureSlideComponent_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_333EED0 *)Method_CStateManager_StandFigureSlideComponent__add__);
    v11 = (CStateManager_T__o *)*p_mFSM;
    v12 = (Il2CppObject *)sub_1C3E7B0(StandFigureSlideComponent_StateReady_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !v11
      || (CStateManager_object___add(
            v11,
            1,
            (IState_T__o *)v12,
            (const MethodInfo_333EED0 *)Method_CStateManager_StandFigureSlideComponent__add__),
          v13 = (CStateManager_T__o *)*p_mFSM,
          v14 = (Il2CppObject *)sub_1C3E7B0(StandFigureSlideComponent_StateSlide_TypeInfo),
          System_Object___ctor(v14, 0),
          !v13) )
    {
LABEL_9:
      sub_1C3E7C0(v9, v10);
    }
    CStateManager_object___add(
      v13,
      2,
      (IState_T__o *)v14,
      (const MethodInfo_333EED0 *)Method_CStateManager_StandFigureSlideComponent__add__);
    StandFigureSlideComponent__SetState(this, 0, v15);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, 288.0, v17);
  StandFigureSlideComponent__SetEnable(this, 1, v18);
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
      sub_1C3E508(p_createCallback, 0, v2, v3);
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
  __int64 v16; // x1
  DataManager_o *v17; // x25
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  _BOOL8 v21; // x0
  __int64 v22; // x1
  SvtMultiPortraitEntity_o *current; // x24
  int klass_high; // w27
  int32_t portraitImageId; // w25
  System_Action_o *v26; // x26
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UIStandFigureR_o *v31; // x25
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v33; // x0
  const MethodInfo *v34; // x1
  struct System_Int32_array *v35; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v37; // x26
  StandFigureCollect_o *v38; // x27
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  System_Action_o *v47; // x24
  UIStandFigureR_o *v48; // x21
  System_Collections_Generic_List_object__o *figureCollectList; // x19
  StandFigureCollect_o *v50; // x20
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+30h] [xbp-90h] BYREF
  int32_t v59; // [xsp+58h] [xbp-68h]
  int32_t v60; // [xsp+5Ch] [xbp-64h]

  if ( (byte_4C537DD & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StandFigureCollect_TypeInfo);
    sub_1C3E564(&Method_StandFigureSlideComponent_CreateEndCallback__);
    byte_4C537DD = 1;
  }
  memset(&v58, 0, sizeof(v58));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v17 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v17,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.createCallback, (int32_t)callBack, v19, v20);
  if ( !EntityListOrderBy
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v47 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v47, (Il2CppObject *)this, Method_StandFigureSlideComponent_CreateEndCallback__, 0);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_40722664(
                                  gameObject,
                                  svtId,
                                  imageLimitCount,
                                  6,
                                  0,
                                  depth,
                                  v47,
                                  0,
                                  -1,
                                  0,
                                  0);
    if ( Instance )
    {
      v48 = (UIStandFigureR_o *)Instance;
      UIStandFigureR__SetAlpha((UIStandFigureR_o *)Instance, alpha, 0);
      figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
      v50 = (StandFigureCollect_o *)sub_1C3E7B0(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v50, 0, v48, 0);
      if ( figureCollectList )
      {
        items = figureCollectList->fields._items;
        v54 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
        ++figureCollectList->fields._version;
        if ( items )
        {
          size = figureCollectList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              figureCollectList,
              (Il2CppObject *)v50,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = &items->obj.klass + size;
            figureCollectList->fields._size = size + 1;
            v56[4] = (Il2CppClass *)v50;
            sub_1C3E508((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v50, v51, v52);
          }
          return;
        }
      }
    }
LABEL_36:
    sub_1C3E7C0(Instance, v16);
  }
  v59 = svtId;
  v60 = imageLimitCount;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    (System_Collections_Generic_List_object__o *)EntityListOrderBy,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v58 = v57;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v21 )
      break;
    current = (SvtMultiPortraitEntity_o *)v58.fields._current;
    if ( !v58.fields._current )
      sub_1C3E7C0(v21, v22);
    klass_high = HIDWORD(v58.fields._current[2].klass);
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v26 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_StandFigureSlideComponent_CreateEndCallback__, 0);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         gameObject,
                         portraitImageId,
                         6,
                         0,
                         (klass_high & (unsigned int)~(klass_high >> 31)) + depth,
                         v26,
                         0,
                         -1,
                         0,
                         0);
    v31 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C3E7C0(0, v28);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C3E508((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v29, v30);
    UIStandFigureR__SetAlpha(v31, alpha, 0);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0);
      v35 = current->fields.commonPosition;
      if ( !v35 )
        sub_1C3E7C0(v33, v34);
      max_length = v35->max_length;
      if ( max_length == 1 )
        sub_1C3E7C8(v33, v34);
      if ( !max_length )
        sub_1C3E7C8(v33, v34);
      GameObjectExtensions__AddLocalPosition_36177228(v33, (float)v35->m_Items[0], (float)v35->m_Items[1], v34);
    }
    v37 = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v38 = (StandFigureCollect_o *)sub_1C3E7B0(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v38, current, v31, 0);
    if ( !v37 )
      sub_1C3E7C0(v39, v40);
    v43 = v37->fields._items;
    v44 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v37->fields._version;
    if ( !v43 )
      sub_1C3E7C0(v39, v40);
    v45 = v37->fields._size;
    if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v37,
        (Il2CppObject *)v38,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = &v43->obj.klass + v45;
      v37->fields._size = v45 + 1;
      v46[4] = (Il2CppClass *)v38;
      sub_1C3E508((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v38, v41, v42);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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

  if ( (byte_4C537DB & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C537DB = 1;
  }
  memset(&v17, 0, sizeof(v17));
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)figureCollectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C3E7C0(v4, v5);
    monitor = (UnityEngine_Object_o *)v17.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    {
      v9 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v9 )
        sub_1C3E7C0(0, v8);
      UIStandFigureR__ReleaseCharacter(v9, 0);
      v11 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v11 )
        sub_1C3E7C0(0, v10);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71341752(gameObject, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v13 = this->fields.figureCollectList;
  if ( !v13 )
LABEL_22:
    sub_1C3E7C0(figureCollectList, method);
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
  sub_1C3E508((CGThumbnailListItem_o *)v2, 0, v8, v9);
}


int32_t StandFigureSlideComponent__GetState(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  StandFigureSlideComponent_o *v2; // x19
  struct CStateManager_StandFigureSlideComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C537E1 & 1) == 0 )
  {
    this = (StandFigureSlideComponent_o *)sub_1C3E564(&Method_CStateManager_StandFigureSlideComponent__getState__);
    byte_4C537E1 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C3E7C0(this, method);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mBtnAct, (int32_t)btn_act, (int32_t)method, v3);
}


void StandFigureSlideComponent__SetEnable(StandFigureSlideComponent_o *this, bool is_enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *mBtnColl; // x0
  _BOOL8 v5; // x1

  mBtnColl = (UnityEngine_Collider_o *)this->fields.mBtnColl;
  v5 = is_enable;
  this->fields.mIsEnable = v5;
  if ( !mBtnColl )
    sub_1C3E7C0(0, v5);
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

  if ( (byte_4C537DE & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C537DE = 1;
  }
  memset(&v13, 0, sizeof(v13));
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
    sub_1C3E7C0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)figureCollectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v6 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C3E7C0(v6, v7);
    monitor = (UnityEngine_Object_o *)v13.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    {
      v11 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v11 )
        sub_1C3E7C0(0, v10);
      UIStandFigureR__SetAlpha(v11, alpha, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void StandFigureSlideComponent__SetState(StandFigureSlideComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C537E2 & 1) == 0 )
  {
    sub_1C3E564(&Method_CStateManager_StandFigureSlideComponent__setState__);
    byte_4C537E2 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C3E7C0(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_333EF5C *)Method_CStateManager_StandFigureSlideComponent__setState__);
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
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Action_o *v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
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

  if ( (byte_4C537DC & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__0__);
    sub_1C3E564(&Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__1__);
    sub_1C3E564(&StandFigureSlideComponent___c__DisplayClass31_0_TypeInfo);
    byte_4C537DC = 1;
  }
  v9 = sub_1C3E7B0(StandFigureSlideComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_17;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = end_act;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 24), (int32_t)end_act, v14, v15);
  v16 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)v9, Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__0__, 0);
  *(_QWORD *)(v9 + 32) = v16;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v16, v17, v18);
  this->fields.mIsLoading = 1;
  StandFigureSlideComponent__SetState(this, 0, v19);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0
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
                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0)
    || (monitor = Instance[1].monitor) == 0 )
  {
LABEL_17:
    sub_1C3E7C0(Instance, v11);
  }
  if ( v24 == monitor[15] )
    goto LABEL_13;
LABEL_14:
  StandFigureSlideComponent__Destroy(this, v11);
  StandFigureSlideComponent__SlideOut(this, 0, 1, v26);
  v27 = UserServantEntity__getSvtId(usd, 0);
  v28 = UserServantEntity__getFigureImageLimitCount(usd, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_17;
  v29 = ServantLimitImageMaster__GetServantImageLimitSealAfter((ServantLimitImageMaster_o *)Instance, v27, v28, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v31 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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

  if ( (byte_4C537DF & 1) == 0 )
  {
    sub_1C3E564(&StandFigureSlideComponent_TypeInfo);
    byte_4C537DF = 1;
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
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mSlideEndAct, (int32_t)end_act, v5, v6);
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

  if ( (byte_4C537E0 & 1) == 0 )
  {
    sub_1C3E564(&StandFigureSlideComponent_TypeInfo);
    byte_4C537E0 = 1;
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
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mSlideEndAct, (int32_t)end_act, v7, v8);
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

  if ( (byte_4C537DA & 1) == 0 )
  {
    sub_1C3E564(&Method_CStateManager_StandFigureSlideComponent__update__);
    byte_4C537DA = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_333EF38 *)Method_CStateManager_StandFigureSlideComponent__update__);
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
  const MethodInfo *v16; // x3
  float mNowAlp; // s9
  float mTgtAlp; // s10
  TransitionCalculator_float__o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C537E5 & 1) == 0 )
  {
    sub_1C3E564(&Method_TransitionCalculator_float___ctor__);
    sub_1C3E564(&TransitionCalculator_float__TypeInfo);
    byte_4C537E5 = 1;
  }
  v5 = ChangedFPSUtil__CovertFrameNumToSecond(17, 0);
  v6 = ExtraEasing__AsymptoticSeriesFloat(0.35, 17.0, 0);
  if ( !that )
    sub_1C3E7C0(v6, v7);
  v8 = (System_Func_T__T__float__T__o *)v6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, v10);
  mTgtPosX = that->fields.mTgtPosX;
  v13 = LocalPositionX;
  v14 = (TransitionCalculator_float__o *)sub_1C3E7B0(TransitionCalculator_float__TypeInfo);
  TransitionCalculator_float____ctor(
    v14,
    v13,
    mTgtPosX,
    v5,
    v8,
    (const MethodInfo_3A78570 *)Method_TransitionCalculator_float___ctor__);
  this->fields.positionCalculator = v14;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v14, v15, v16);
  mTgtAlp = that->fields.mTgtAlp;
  mNowAlp = that->fields.mNowAlp;
  v19 = (TransitionCalculator_float__o *)sub_1C3E7B0(TransitionCalculator_float__TypeInfo);
  TransitionCalculator_float____ctor(
    v19,
    mNowAlp,
    mTgtAlp,
    v5,
    v8,
    (const MethodInfo_3A78570 *)Method_TransitionCalculator_float___ctor__);
  this->fields.alphaCalculator = v19;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.alphaCalculator, (int32_t)v19, v20, v21);
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
  if ( (byte_4C537E6 & 1) == 0 )
  {
    sub_1C3E564(&Method_TransitionCalculator_float__IsFinished__);
    this = (StandFigureSlideComponent_StateSlide_o *)sub_1C3E564(&Method_TransitionCalculator_float__Update__);
    byte_4C537E6 = 1;
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
         (const MethodInfo_3A785D0 *)Method_TransitionCalculator_float__Update__);
  GameObjectExtensions__SetLocalPositionX((UnityEngine_GameObject_o *)v5, v6, v7);
  this = (StandFigureSlideComponent_StateSlide_o *)v4->fields.alphaCalculator;
  if ( !this
    || (v8 = TransitionCalculator_float___Update(
               (TransitionCalculator_float__o *)this,
               (const MethodInfo_3A785D0 *)Method_TransitionCalculator_float__Update__),
        that->fields.mNowAlp = v8,
        StandFigureSlideComponent__SetFigureAlpha(that, v8, v9),
        (this = (StandFigureSlideComponent_StateSlide_o *)v4->fields.positionCalculator) == 0) )
  {
LABEL_10:
    sub_1C3E7C0(this, that);
  }
  if ( TransitionCalculator_float___IsFinished(
         (TransitionCalculator_float__o *)this,
         (const MethodInfo_3A78638 *)Method_TransitionCalculator_float__IsFinished__) )
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
    sub_1C3E7C0(_4__this, method);
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
    sub_1C3E7C0(0, method);
  _4__this->fields.mNowAlp = 0.0;
  StandFigureSlideComponent__SetFigureAlpha(_4__this, 0.0, method);
  ActionExtensions__Call(this->fields.this_end_act, 0);
}