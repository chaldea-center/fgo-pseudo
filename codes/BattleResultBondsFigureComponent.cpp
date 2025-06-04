void __fastcall BattleResultBondsFigureComponent___ctor(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B0564A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v3);
    byte_4B0564A = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultBondsFigureComponent__CreateEndCallback(
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
    p_createCallback[-1].fields._ThumbnailSpritePath_k__BackingField = 0LL;
    if ( createCallback )
    {
      p_createCallback->klass = 0LL;
      sub_1BC2FAC(p_createCallback, 0, v2, v3);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v7->fields.m_target)(
        v7->fields.original_method_info,
        *(_QWORD *)&v7->fields.extra_arg);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  DataManager_o *v28; // x27
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x27
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  _BOOL8 v32; // x0
  __int64 v33; // x1
  SvtMultiPortraitEntity_o *current; // x26
  int klass_high; // w29
  int32_t portraitImageId; // w27
  System_Action_o *v37; // x28
  CGThumbnailListItem_o *PrefabForImageId; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UnityEngine_Component_o *v42; // x27
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  struct System_Int32_array *v47; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v49; // x28
  StandFigureCollect_o *v50; // x29
  __int64 v51; // x0
  __int64 v52; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  System_Action_o *v59; // x26
  UIStandFigureR_o *RenderPrefab_39781712; // x0
  System_Collections_Generic_List_object__o *figureCollectList; // x19
  UIStandFigureR_o *v62; // x21
  StandFigureCollect_o *v63; // x20
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B05649 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, parent);
    sub_1BC3008(&Method_BattleResultBondsFigureComponent_CreateEndCallback__, v15);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v16);
    sub_1BC3008(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v17);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v23);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BC3008(&StandFigureCollect_TypeInfo, v25);
    byte_4B05649 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v28 = (DataManager_o *)Instance;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = DataManager__GetMasterData_object_(
               v28,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_36;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        imageLimitCount,
                        0,
                        0LL);
  this->fields.createCallback = callBack;
  *(_QWORD *)&this->fields.createNumMax = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.createCallback, (int32_t)callBack, v30, v31);
  if ( !EntityListOrderBy
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v59 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v59, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    RenderPrefab_39781712 = StandFigureManager__CreateRenderPrefab_39781712(
                              parent,
                              svtId,
                              imageLimitCount,
                              offsetKind,
                              faceType,
                              depth,
                              v59,
                              0,
                              -1,
                              0LL,
                              0LL);
    figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v62 = RenderPrefab_39781712;
    v63 = (StandFigureCollect_o *)sub_1BC3254(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v63, 0LL, v62, 0LL);
    if ( figureCollectList )
    {
      items = figureCollectList->fields._items;
      v67 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++figureCollectList->fields._version;
      if ( items )
      {
        size = figureCollectList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            figureCollectList,
            (Il2CppObject *)v63,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
        }
        else
        {
          v69 = &items->obj.klass + size;
          figureCollectList->fields._size = size + 1;
          v69[4] = (Il2CppClass *)v63;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v63, v64, v65);
        }
        return;
      }
    }
LABEL_36:
    sub_1BC3264(Instance, v27);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v72,
    (System_Collections_Generic_List_object__o *)EntityListOrderBy,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v73 = v72;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v32 )
      break;
    current = (SvtMultiPortraitEntity_o *)v73.fields._current;
    if ( !v73.fields._current )
      sub_1BC3264(v32, v33);
    klass_high = HIDWORD(v73.fields._current[2].klass);
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v37 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v37, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    PrefabForImageId = (CGThumbnailListItem_o *)StandFigureManager__CreatePrefabForImageId(
                                                  parent,
                                                  portraitImageId,
                                                  offsetKind,
                                                  faceType,
                                                  (klass_high & (unsigned int)~(klass_high >> 31)) + depth,
                                                  v37,
                                                  0,
                                                  -1,
                                                  0LL,
                                                  0LL);
    v42 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1BC3264(0LL, v39);
    PrefabForImageId[1].klass = (CGThumbnailListItem_c *)current;
    sub_1BC2FAC(PrefabForImageId + 1, (int32_t)current, v40, v41);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v42, 0LL);
      v47 = current->fields.commonPosition;
      if ( !v47 )
        sub_1BC3264(gameObject, v45);
      max_length = v47->max_length;
      if ( max_length == 1 )
        sub_1BC326C(gameObject, v45, v46);
      if ( !max_length )
        sub_1BC326C(gameObject, v45, v46);
      GameObjectExtensions__AddLocalPosition_35212856(gameObject, (float)v47->m_Items[1], (float)v47->m_Items[2], 0LL);
    }
    v49 = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v50 = (StandFigureCollect_o *)sub_1BC3254(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v50, current, (UIStandFigureR_o *)v42, 0LL);
    if ( !v49 )
      sub_1BC3264(v51, v52);
    v55 = v49->fields._items;
    v56 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v49->fields._version;
    if ( !v55 )
      sub_1BC3264(v51, v52);
    v57 = v49->fields._size;
    if ( (unsigned int)v57 >= v55->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v49,
        (Il2CppObject *)v50,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &v55->obj.klass + v57;
      v49->fields._size = v57 + 1;
      v58[4] = (Il2CppClass *)v50;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v50, v53, v54);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  Il2CppObject *current; // x24
  UnityEngine_Object_o *monitor; // x20
  __int64 v13; // x1
  UIStandFigureR_o *v14; // x0
  __int64 v15; // x1
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v18; // x8
  int32_t size; // w2
  int v20; // w9
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B05647 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4B05647 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)figureCollectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1BC3264(v9, v10);
    monitor = (UnityEngine_Object_o *)v22.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v14 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v14 )
        sub_1BC3264(0LL, v13);
      UIStandFigureR__ReleaseCharacter(v14, 0LL);
      v16 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v16 )
        sub_1BC3264(0LL, v15);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70034488(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v18 = this->fields.figureCollectList;
  if ( !v18 )
LABEL_22:
    sub_1BC3264(figureCollectList, method);
  size = v18->fields._size;
  v20 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  int32_t ServantImageLimitSealAfter; // w3

  if ( (byte_4B05648 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, parent);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v17);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4B05648 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v21);
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