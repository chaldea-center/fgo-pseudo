void __fastcall BattleResultBondsFigureComponent___ctor(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A72FCA & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, method);
    sub_1B90010(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v3);
    byte_4A72FCA = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultBondsFigureComponent__CreateEndCallback(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t createNumMax; // w9
  int32_t v5; // w8
  ServantStatusBattleListViewItem_o *p_createCallback; // x0
  struct System_Action_o *v7; // x19
  struct System_Action_o *createCallback; // t1

  createNumMax = this->fields.createNumMax;
  v5 = this->fields.createNum + 1;
  this->fields.createNum = v5;
  if ( v5 >= createNumMax )
  {
    createCallback = this->fields.createCallback;
    p_createCallback = (ServantStatusBattleListViewItem_o *)&this->fields.createCallback;
    v7 = createCallback;
    *(_QWORD *)&p_createCallback[-1].fields.isMine = 0LL;
    if ( createCallback )
    {
      p_createCallback->klass = 0LL;
      sub_1B8FFB4(p_createCallback, 0, v2, v3);
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
  int32_t v31; // w3
  _BOOL8 v32; // x0
  __int64 v33; // x1
  SvtMultiPortraitEntity_o *current; // x26
  int klass_high; // w29
  int32_t portraitImageId; // w27
  System_Action_o *v37; // x28
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  UnityEngine_Component_o *v42; // x27
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v45; // x1
  struct System_Int32_array *v46; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v48; // x28
  StandFigureCollect_o *v49; // x29
  __int64 v50; // x0
  __int64 v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  System_Action_o *v58; // x26
  UIStandFigureR_o *RenderPrefab_38029576; // x0
  System_Collections_Generic_List_object__o *figureCollectList; // x19
  UIStandFigureR_o *v61; // x21
  StandFigureCollect_o *v62; // x20
  int32_t v63; // w2
  int32_t v64; // w3
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A72FC9 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, parent);
    sub_1B90010(&Method_BattleResultBondsFigureComponent_CreateEndCallback__, v15);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v16);
    sub_1B90010(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v17);
    sub_1B90010(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v18);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v19);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v20);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v21);
    sub_1B90010(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v22);
    sub_1B90010(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v23);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B90010(&StandFigureCollect_TypeInfo, v25);
    byte_4A72FC9 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v28 = (DataManager_o *)Instance;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = DataManager__GetMasterData_object_(
               v28,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.createCallback, (int32_t)callBack, v30, v31);
  if ( !EntityListOrderBy
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_2E9BBF0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v58 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(v58, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    RenderPrefab_38029576 = StandFigureManager__CreateRenderPrefab_38029576(
                              parent,
                              svtId,
                              imageLimitCount,
                              offsetKind,
                              faceType,
                              depth,
                              v58,
                              0,
                              -1,
                              0LL);
    figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v61 = RenderPrefab_38029576;
    v62 = (StandFigureCollect_o *)sub_1B9025C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v62, 0LL, v61, 0LL);
    if ( figureCollectList )
    {
      items = figureCollectList->fields._items;
      v66 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++figureCollectList->fields._version;
      if ( items )
      {
        size = figureCollectList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            figureCollectList,
            (Il2CppObject *)v62,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
        }
        else
        {
          v68 = &items->obj.klass + size;
          figureCollectList->fields._size = size + 1;
          v68[4] = (Il2CppClass *)v62;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)v62, v63, v64);
        }
        return;
      }
    }
LABEL_36:
    sub_1B9026C(Instance, v27);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)EntityListOrderBy,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v72 = v71;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v32 )
      break;
    current = (SvtMultiPortraitEntity_o *)v72.fields._current;
    if ( !v72.fields._current )
      sub_1B9026C(v32, v33);
    klass_high = HIDWORD(v72.fields._current[2].klass);
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v37 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(v37, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         parent,
                         portraitImageId,
                         offsetKind,
                         faceType,
                         (klass_high & (unsigned int)~(klass_high >> 31)) + depth,
                         v37,
                         0,
                         -1,
                         0LL);
    v42 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1B9026C(0LL, v39);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v40,
      v41);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v42, 0LL);
      v46 = current->fields.commonPosition;
      if ( !v46 )
        sub_1B9026C(gameObject, v45);
      max_length = v46->max_length;
      if ( max_length == 1 )
        sub_1B90274(gameObject, v45);
      if ( !max_length )
        sub_1B90274(gameObject, v45);
      GameObjectExtensions__AddLocalPosition_33771676(gameObject, (float)v46->m_Items[1], (float)v46->m_Items[2], 0LL);
    }
    v48 = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v49 = (StandFigureCollect_o *)sub_1B9025C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v49, current, (UIStandFigureR_o *)v42, 0LL);
    if ( !v48 )
      sub_1B9026C(v50, v51);
    v54 = v48->fields._items;
    v55 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v48->fields._version;
    if ( !v54 )
      sub_1B9026C(v50, v51);
    v56 = v48->fields._size;
    if ( (unsigned int)v56 >= v54->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v48,
        (Il2CppObject *)v49,
        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->obj.klass + v56;
      v48->fields._size = v56 + 1;
      v57[4] = (Il2CppClass *)v49;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v49, v52, v53);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  System_Collections_Generic_List_object__o *figureCollectList; // x0
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

  if ( (byte_4A72FC7 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    byte_4A72FC7 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    figureCollectList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1B9026C(v9, v10);
    monitor = (UnityEngine_Object_o *)v22.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v14 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v14 )
        sub_1B9026C(0LL, v13);
      UIStandFigureR__ReleaseCharacter(v14, 0LL);
      v16 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v16 )
        sub_1B9026C(0LL, v15);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69539628(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v18 = this->fields.figureCollectList;
  if ( !v18 )
LABEL_22:
    sub_1B9026C(figureCollectList, method);
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

  if ( (byte_4A72FC8 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, parent);
    sub_1B90010(&ImageLimitCount_TypeInfo, v17);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4A72FC8 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1B9026C(Instance, v21);
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