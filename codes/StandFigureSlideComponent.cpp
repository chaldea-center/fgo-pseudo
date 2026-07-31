void StandFigureSlideComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ManagerConfig_c *v3; // x0
  struct StandFigureSlideComponent_StaticFields *static_fields; // x8
  int v5; // w9

  if ( (byte_5934F37 & 1) == 0 )
  {
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&StandFigureSlideComponent_TypeInfo);
    byte_5934F37 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  static_fields = StandFigureSlideComponent_TypeInfo->static_fields;
  v5 = *(&ManagerConfig_TypeInfo->_2.cctor_finished + 1);
  static_fields->FRAME_IN_POS_X = -540.0;
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = ManagerConfig_TypeInfo;
    static_fields = StandFigureSlideComponent_TypeInfo->static_fields;
  }
  static_fields->FRAME_OUT_POS_X = (float)-v3->static_fields->WIDTH;
}


void StandFigureSlideComponent___ctor(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5934F36 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_5934F36 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.figureCollectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void StandFigureSlideComponent__Awake(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_StandFigureSlideComponent__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
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

  if ( (byte_5934F2C & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_StandFigureSlideComponent___ctor__);
    sub_21FFC50(&Method_CStateManager_StandFigureSlideComponent__add__);
    sub_21FFC50(&CStateManager_StandFigureSlideComponent__TypeInfo);
    sub_21FFC50(&StandFigureSlideComponent_StateNone_TypeInfo);
    sub_21FFC50(&StandFigureSlideComponent_StateReady_TypeInfo);
    sub_21FFC50(&StandFigureSlideComponent_StateSlide_TypeInfo);
    byte_5934F2C = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_21FFEBC(CStateManager_StandFigureSlideComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3E505AC *)Method_CStateManager_StandFigureSlideComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_StandFigureSlideComponent__o *)v4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_21FFEBC(StandFigureSlideComponent_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3E5065C *)Method_CStateManager_StandFigureSlideComponent__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_21FFEBC(StandFigureSlideComponent_StateReady_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15
      || (CStateManager_object___add(
            v15,
            1,
            (IState_T__o *)v16,
            (const MethodInfo_3E5065C *)Method_CStateManager_StandFigureSlideComponent__add__),
          v17 = (CStateManager_T__o *)*p_mFSM,
          v18 = (Il2CppObject *)sub_21FFEBC(StandFigureSlideComponent_StateSlide_TypeInfo),
          System_Object___ctor(v18, 0),
          !v17) )
    {
LABEL_9:
      sub_21FFECC(v13, v14);
    }
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_3E5065C *)Method_CStateManager_StandFigureSlideComponent__add__);
    StandFigureSlideComponent__SetState(this, 0, v19);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, 288.0, v21);
  StandFigureSlideComponent__SetEnable(this, 1, v22);
}


void StandFigureSlideComponent__CreateEndCallback(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t createNumMax; // w9
  int32_t v9; // w8
  MissionNaviTransitionBoardItem_o *p_createCallback; // x0
  struct System_Action_o *v11; // x19
  struct System_Action_o *createCallback; // t1

  createNumMax = this->fields.createNumMax;
  v9 = this->fields.createNum + 1;
  this->fields.createNum = v9;
  if ( v9 >= createNumMax )
  {
    createCallback = this->fields.createCallback;
    p_createCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.createCallback;
    v11 = createCallback;
    *(_QWORD *)&p_createCallback[-1].fields._BoardType_k__BackingField = 0;
    if ( createCallback )
    {
      p_createCallback->klass = 0;
      sub_21FFBF4(p_createCallback, 0, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  _BOOL8 v25; // x0
  __int64 v26; // x1
  SvtMultiPortraitEntity_o *current; // x24
  int klass_high; // w27
  System_Action_c *v29; // x0
  int32_t portraitImageId; // w25
  System_Action_o *v31; // x26
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  UIStandFigureR_o *v40; // x25
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v42; // x0
  const MethodInfo *v43; // x1
  struct System_Int32_array *v44; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v46; // x26
  StandFigureCollect_o *v47; // x27
  __int64 v48; // x0
  __int64 v49; // x1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  System_Action_c *v60; // x0
  System_Action_o *v61; // x24
  UIStandFigureR_o *v62; // x21
  System_Collections_Generic_List_object__o *figureCollectList; // x19
  StandFigureCollect_o *v64; // x20
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+30h] [xbp-90h] BYREF
  int32_t v77; // [xsp+58h] [xbp-68h]
  int32_t v78; // [xsp+5Ch] [xbp-64h]

  if ( (byte_5934F30 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StandFigureCollect_TypeInfo);
    sub_21FFC50(&Method_StandFigureSlideComponent_CreateEndCallback__);
    byte_5934F30 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v17 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v17,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_35;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        imageLimitCount,
                        0,
                        0);
  this->fields.createCallback = callBack;
  *(_QWORD *)&this->fields.createNumMax = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.createCallback,
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
          (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    v60 = System_Action_TypeInfo;
    ++this->fields.createNumMax;
    v61 = (System_Action_o *)sub_21FFEBC(v60);
    System_Action___ctor(v61, (Il2CppObject *)this, Method_StandFigureSlideComponent_CreateEndCallback__, 0);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_47607168(
                                  gameObject,
                                  svtId,
                                  imageLimitCount,
                                  6,
                                  0,
                                  depth,
                                  v61,
                                  0,
                                  -1,
                                  0,
                                  0);
    if ( Instance )
    {
      v62 = (UIStandFigureR_o *)Instance;
      UIStandFigureR__SetAlpha((UIStandFigureR_o *)Instance, alpha, 0);
      figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
      v64 = (StandFigureCollect_o *)sub_21FFEBC(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v64, 0, v62, 0);
      if ( figureCollectList )
      {
        items = figureCollectList->fields._items;
        v72 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
        ++figureCollectList->fields._version;
        if ( items )
        {
          size = figureCollectList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              figureCollectList,
              (Il2CppObject *)v64,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
          }
          else
          {
            v74 = &items->obj.klass + size;
            figureCollectList->fields._size = size + 1;
            v74[4] = (Il2CppClass *)v64;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v74 + 4), (int32_t)v64, v65, v66, v67, v68, v69, v70);
          }
          return;
        }
      }
    }
LABEL_35:
    sub_21FFECC(Instance, v16);
  }
  v77 = svtId;
  v78 = imageLimitCount;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    (System_Collections_Generic_List_object__o *)EntityListOrderBy,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v76 = v75;
  v75.fields._list = 0;
  *(_QWORD *)&v75.fields._index = &v76;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v25 )
      break;
    current = (SvtMultiPortraitEntity_o *)v76.fields._current;
    if ( !v76.fields._current )
      sub_21FFECC(v25, v26);
    klass_high = HIDWORD(v76.fields._current[2].klass);
    v29 = System_Action_TypeInfo;
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v31 = (System_Action_o *)sub_21FFEBC(v29);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_StandFigureSlideComponent_CreateEndCallback__, 0);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         gameObject,
                         portraitImageId,
                         6,
                         0,
                         (klass_high & (unsigned int)~(klass_high >> 31)) + depth,
                         v31,
                         0,
                         -1,
                         0,
                         0);
    v40 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_21FFECC(0, v33);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    UIStandFigureR__SetAlpha(v40, alpha, 0);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v40, 0);
      v44 = current->fields.commonPosition;
      if ( !v44 )
        sub_21FFECC(v42, v43);
      max_length = v44->max_length;
      if ( max_length == 1 )
        sub_21FFED4(v42);
      if ( !max_length )
        sub_21FFED4(v42);
      GameObjectExtensions__AddLocalPosition_42877056(v42, (float)v44->m_Items[0], (float)v44->m_Items[1], v43);
    }
    v46 = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v47 = (StandFigureCollect_o *)sub_21FFEBC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v47, current, v40, 0);
    if ( !v46
      || (v56 = v46->fields._items,
          v57 = Method_System_Collections_Generic_List_StandFigureCollect__Add__,
          ++v46->fields._version,
          !v56) )
    {
      sub_21FFECC(v48, v49);
    }
    v58 = v46->fields._size;
    if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v46,
        (Il2CppObject *)v47,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v59 = &v56->obj.klass + v58;
      v46->fields._size = v58 + 1;
      v59[4] = (Il2CppClass *)v47;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v59 + 4), (int32_t)v47, v50, v51, v52, v53, v54, v55);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void StandFigureSlideComponent__Destroy(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *current; // x24
  UnityEngine_Object_o *monitor; // x20
  __int64 v9; // x1
  UIStandFigureR_o *v10; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v16; // x8
  int32_t size; // w2
  int v18; // w9
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5934F2E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934F2E = 1;
  }
  figureCollectList = this->fields.figureCollectList;
  memset(&v20, 0, sizeof(v20));
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)figureCollectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v20 = v19;
  v19.fields._list = 0;
  *(_QWORD *)&v19.fields._index = &v20;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_21FFECC(v4, v5);
    monitor = (UnityEngine_Object_o *)v20.fields._current[1].monitor;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    {
      v10 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v10 )
        sub_21FFECC(0, v9);
      UIStandFigureR__ReleaseCharacter(v10, 0);
      v12 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v12 )
        sub_21FFECC(0, v11);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v12, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
      UnityEngine_Object__DestroyImmediate_83246828(gameObject, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v16 = this->fields.figureCollectList;
  if ( !v16 )
LABEL_22:
    sub_21FFECC(figureCollectList, method);
  size = v16->fields._size;
  v18 = v16->fields._version + 1;
  v16->fields._size = 0;
  v16->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0);
}


void StandFigureSlideComponent__EndSlide(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, this->fields.mTgtPosX, v4);
  StandFigureSlideComponent__SetFigureAlpha(this, this->fields.mTgtAlp, v5);
  StandFigureSlideComponent__SetState(this, 1, v6);
  ActionExtensions__Call(this->fields.mSlideEndAct, 0);
  this->fields.mSlideEndAct = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mSlideEndAct, 0, v7, v8, v9, v10, v11, v12);
}


int32_t StandFigureSlideComponent__GetState(StandFigureSlideComponent_o *this, const MethodInfo *method)
{
  StandFigureSlideComponent_o *v2; // x19
  struct CStateManager_StandFigureSlideComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_5934F34 & 1) == 0 )
  {
    this = (StandFigureSlideComponent_o *)sub_21FFC50(&Method_CStateManager_StandFigureSlideComponent__getState__);
    byte_5934F34 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_21FFECC(this, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mBtnAct = btn_act;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mBtnAct,
    (int32_t)btn_act,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void StandFigureSlideComponent__SetEnable(StandFigureSlideComponent_o *this, bool is_enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *mBtnColl; // x0

  mBtnColl = (UnityEngine_Collider_o *)this->fields.mBtnColl;
  this->fields.mIsEnable = is_enable;
  if ( !mBtnColl )
    sub_21FFECC(0, is_enable);
  UnityEngine_Collider__set_enabled(mBtnColl, is_enable, 0);
}


void StandFigureSlideComponent__SetFigureAlpha(
        StandFigureSlideComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *current; // x23
  UnityEngine_Object_o *v10; // x19
  __int64 v11; // x1
  UIStandFigureR_o *v12; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5934F31 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934F31 = 1;
  }
  figureCollectList = this->fields.figureCollectList;
  memset(&v13, 0, sizeof(v13));
  if ( !figureCollectList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)figureCollectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v6 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_21FFECC(v6, v7);
    v10 = *(UnityEngine_Object_o **)((char *)&v13.fields._current->klass + (unsigned __int64)off_18);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
    {
      v12 = *(UIStandFigureR_o **)((char *)off_18 + (_QWORD)current);
      if ( !v12 )
        sub_21FFECC(0, v11);
      UIStandFigureR__SetAlpha(v12, alpha, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void StandFigureSlideComponent__SetState(StandFigureSlideComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_5934F35 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_StandFigureSlideComponent__setState__);
    byte_5934F35 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_21FFECC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3E506E4 *)Method_CStateManager_StandFigureSlideComponent__setState__);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Action_o *v24; // x24
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x2
  struct System_Collections_Generic_List_StandFigureCollect__o *figureCollectList; // x8
  int32_t ServantId; // w24
  int32_t FigureImage; // w25
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

  if ( (byte_5934F2F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__0__);
    sub_21FFC50(&Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__1__);
    sub_21FFC50(&StandFigureSlideComponent___c__DisplayClass31_0_TypeInfo);
    byte_5934F2F = 1;
  }
  v9 = sub_21FFEBC(StandFigureSlideComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_17;
  *(_QWORD *)(v9 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = end_act;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)end_act, v18, v19, v20, v21, v22, v23);
  v24 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v9, Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__0__, 0);
  *(_QWORD *)(v9 + 32) = v24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)v24, v25, v26, v27, v28, v29, v30);
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
  ServantId = UserServantEntity__GetServantId(usd, -1, 0);
  FigureImage = UserServantEntity__GetFigureImage(usd, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       ServantId,
                                       FigureImage,
                                       0),
        Instance = (Il2CppObject *)ServantScriptMaster__getId(ServantId, ServantImageLimitSealAfter, 0),
        !this->fields.figureCollectList)
    || (v36 = (int)Instance,
        (Instance = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this->fields.figureCollectList,
                      0,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0)
    || (monitor = Instance[1].monitor) == 0 )
  {
LABEL_17:
    sub_21FFECC(Instance, v11);
  }
  if ( v36 == monitor[15] )
    goto LABEL_13;
LABEL_14:
  StandFigureSlideComponent__Destroy(this, v11);
  StandFigureSlideComponent__SlideOut(this, 0, 1, v38);
  v39 = UserServantEntity__GetServantId(usd, -1, 0);
  v40 = UserServantEntity__GetFigureImage(usd, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_17;
  v41 = ServantLimitImageMaster__GetServantImageLimitSealAfter((ServantLimitImageMaster_o *)Instance, v39, v40, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v43 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)v9, Method_StandFigureSlideComponent___c__DisplayClass31_0__Setup_b__1__, 0);
  StandFigureSlideComponent__CreateFigurePrefab(this, gameObject, v39, v41, depth, 0.0, v43, v44);
}


void StandFigureSlideComponent__SlideIn(
        StandFigureSlideComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  StandFigureSlideComponent_c *v12; // x0
  float *static_fields; // x8
  float v14; // s0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_5934F32 & 1) == 0 )
  {
    sub_21FFC50(&StandFigureSlideComponent_TypeInfo);
    byte_5934F32 = 1;
  }
  if ( this->fields.mIsEnable
    && (StandFigureSlideComponent__GetState(this, (const MethodInfo *)end_act) != 2 || !this->fields.mIsFrameIn) )
  {
    v12 = StandFigureSlideComponent_TypeInfo;
    if ( !*(&StandFigureSlideComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(StandFigureSlideComponent_TypeInfo, v5, v6);
      v12 = StandFigureSlideComponent_TypeInfo;
    }
    static_fields = (float *)v12->static_fields;
    this->fields.mTgtAlp = 1.0;
    v14 = *static_fields;
    this->fields.mSpdRateAlp = 0.175;
    this->fields.mIsFrameIn = 1;
    this->fields.mTgtPosX = v14;
    this->fields.mSlideEndAct = end_act;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mSlideEndAct,
      (int32_t)end_act,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    if ( StandFigureSlideComponent__GetState(this, v15) )
      StandFigureSlideComponent__SetState(this, 2, v16);
  }
}


void StandFigureSlideComponent__SlideOut(
        StandFigureSlideComponent_o *this,
        System_Action_o *end_act,
        bool is_force,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  StandFigureSlideComponent_c *v14; // x0
  struct StandFigureSlideComponent_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_5934F33 & 1) == 0 )
  {
    sub_21FFC50(&StandFigureSlideComponent_TypeInfo);
    byte_5934F33 = 1;
  }
  if ( this->fields.mIsEnable
    && (StandFigureSlideComponent__GetState(this, (const MethodInfo *)end_act) != 2 || this->fields.mIsFrameIn) )
  {
    v14 = StandFigureSlideComponent_TypeInfo;
    if ( !*(&StandFigureSlideComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(StandFigureSlideComponent_TypeInfo, v7, v8);
      v14 = StandFigureSlideComponent_TypeInfo;
    }
    static_fields = v14->static_fields;
    this->fields.mTgtAlp = 0.0;
    this->fields.mTgtPosX = static_fields->FRAME_OUT_POS_X;
    this->fields.mSpdRateAlp = 0.45;
    if ( is_force )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, this->fields.mTgtPosX, v17);
    }
    this->fields.mIsFrameIn = 0;
    this->fields.mSlideEndAct = end_act;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mSlideEndAct,
      (int32_t)end_act,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    if ( StandFigureSlideComponent__GetState(this, v18) )
      StandFigureSlideComponent__SetState(this, 2, v19);
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

  if ( (byte_5934F2D & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_StandFigureSlideComponent__update__);
    byte_5934F2D = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3E506C4 *)Method_CStateManager_StandFigureSlideComponent__update__);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  float mNowAlp; // s9
  float mTgtAlp; // s10
  TransitionCalculator_float__o *v23; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_5934F38 & 1) == 0 )
  {
    sub_21FFC50(&Method_TransitionCalculator_float___ctor__);
    sub_21FFC50(&TransitionCalculator_float__TypeInfo);
    byte_5934F38 = 1;
  }
  v5 = ChangedFPSUtil__CovertFrameNumToSecond(17, 0);
  v6 = ExtraEasing__AsymptoticSeriesFloat(0.35, 17.0, 0);
  if ( !that )
    sub_21FFECC(v6, v7);
  v8 = (System_Func_T__T__float__T__o *)v6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, v10);
  mTgtPosX = that->fields.mTgtPosX;
  v13 = LocalPositionX;
  v14 = (TransitionCalculator_float__o *)sub_21FFEBC(TransitionCalculator_float__TypeInfo);
  TransitionCalculator_float____ctor(
    v14,
    v13,
    mTgtPosX,
    v5,
    v8,
    (const MethodInfo_3BB5C04 *)Method_TransitionCalculator_float___ctor__);
  this->fields.positionCalculator = v14;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  mTgtAlp = that->fields.mTgtAlp;
  mNowAlp = that->fields.mNowAlp;
  v23 = (TransitionCalculator_float__o *)sub_21FFEBC(TransitionCalculator_float__TypeInfo);
  TransitionCalculator_float____ctor(
    v23,
    mNowAlp,
    mTgtAlp,
    v5,
    v8,
    (const MethodInfo_3BB5C04 *)Method_TransitionCalculator_float___ctor__);
  this->fields.alphaCalculator = v23;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.alphaCalculator,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
  if ( (byte_5934F39 & 1) == 0 )
  {
    sub_21FFC50(&Method_TransitionCalculator_float__IsFinished__);
    this = (StandFigureSlideComponent_StateSlide_o *)sub_21FFC50(&Method_TransitionCalculator_float__Update__);
    byte_5934F39 = 1;
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
         (const MethodInfo_3BB5C64 *)Method_TransitionCalculator_float__Update__);
  GameObjectExtensions__SetLocalPositionX((UnityEngine_GameObject_o *)v5, v6, v7);
  this = (StandFigureSlideComponent_StateSlide_o *)v4->fields.alphaCalculator;
  if ( !this
    || (v8 = TransitionCalculator_float___Update(
               (TransitionCalculator_float__o *)this,
               (const MethodInfo_3BB5C64 *)Method_TransitionCalculator_float__Update__),
        that->fields.mNowAlp = v8,
        StandFigureSlideComponent__SetFigureAlpha(that, v8, v9),
        (this = (StandFigureSlideComponent_StateSlide_o *)v4->fields.positionCalculator) == 0) )
  {
LABEL_10:
    sub_21FFECC(this, that);
  }
  if ( TransitionCalculator_float___IsFinished(
         (TransitionCalculator_float__o *)this,
         (const MethodInfo_3BB5CB4 *)Method_TransitionCalculator_float__IsFinished__) )
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
    sub_21FFECC(_4__this, method);
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
    sub_21FFECC(0, method);
  _4__this->fields.mNowAlp = 0.0;
  StandFigureSlideComponent__SetFigureAlpha(_4__this, 0.0, method);
  ActionExtensions__Call(this->fields.this_end_act, 0);
}