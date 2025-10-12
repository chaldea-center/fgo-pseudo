void BattleResultBondsFigureComponent___ctor(BattleResultBondsFigureComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3B194 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_4C3B194 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultBondsFigureComponent__CreateEndCallback(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
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


void BattleResultBondsFigureComponent__CreateFigurePrefab(
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
  Il2CppObject *Instance; // x0
  DataManager_o *v16; // x27
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x27
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  _BOOL8 v20; // x0
  SvtMultiPortraitEntity_o *current; // x26
  int klass_high; // w29
  int32_t portraitImageId; // w27
  System_Action_o *v24; // x28
  UIStandFigureR_o *PrefabForImageId; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Component_o *v28; // x27
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *v31; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v33; // x28
  StandFigureCollect_o *v34; // x29
  __int64 v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  System_Action_o *v42; // x26
  UIStandFigureR_o *RenderPrefab_40577020; // x0
  System_Collections_Generic_List_object__o *figureCollectList; // x19
  UIStandFigureR_o *v45; // x21
  StandFigureCollect_o *v46; // x20
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C3B193 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BattleResultBondsFigureComponent_CreateEndCallback__);
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
    byte_4C3B193 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v16 = (DataManager_o *)Instance;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = DataManager__GetMasterData_object_(
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
    v42 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v42, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0);
    RenderPrefab_40577020 = StandFigureManager__CreateRenderPrefab_40577020(
                              parent,
                              svtId,
                              imageLimitCount,
                              offsetKind,
                              faceType,
                              depth,
                              v42,
                              0,
                              -1,
                              0,
                              0);
    figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v45 = RenderPrefab_40577020;
    v46 = (StandFigureCollect_o *)sub_1C32E6C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v46, 0, v45, 0);
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
LABEL_36:
    sub_1C32E7C(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    (System_Collections_Generic_List_object__o *)EntityListOrderBy,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v56 = v55;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v20 )
      break;
    current = (SvtMultiPortraitEntity_o *)v56.fields._current;
    if ( !v56.fields._current )
      sub_1C32E7C(v20);
    klass_high = HIDWORD(v56.fields._current[2].klass);
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v24 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         parent,
                         portraitImageId,
                         offsetKind,
                         faceType,
                         (klass_high & (unsigned int)~(klass_high >> 31)) + depth,
                         v24,
                         0,
                         -1,
                         0,
                         0);
    v28 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C32E7C(0);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C32BC4((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v26, v27);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v28, 0);
      v31 = current->fields.commonPosition;
      if ( !v31 )
        sub_1C32E7C(gameObject);
      max_length = v31->max_length;
      if ( max_length == 1 )
        sub_1C32E84(gameObject);
      if ( !max_length )
        sub_1C32E84(gameObject);
      GameObjectExtensions__AddLocalPosition_36037696(gameObject, (float)v31->m_Items[0], (float)v31->m_Items[1], 0);
    }
    v33 = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v34 = (StandFigureCollect_o *)sub_1C32E6C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v34, current, (UIStandFigureR_o *)v28, 0);
    if ( !v33 )
      sub_1C32E7C(v35);
    v38 = v33->fields._items;
    v39 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v33->fields._version;
    if ( !v38 )
      sub_1C32E7C(v35);
    v40 = v33->fields._size;
    if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)v34,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &v38->obj.klass + v40;
      v33->fields._size = v40 + 1;
      v41[4] = (Il2CppClass *)v34;
      sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v34, v36, v37);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void BattleResultBondsFigureComponent__DestroyFigure(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_4C3B191 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B191 = 1;
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


void BattleResultBondsFigureComponent__SetupFigure(
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
  Il2CppObject *Instance; // x0
  int32_t ServantImageLimitSealAfter; // w3

  if ( (byte_4C3B192 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3B192 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 ImageLimitCount,
                                 0);
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