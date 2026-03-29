void BattleResultBondsFigureComponent___ctor(BattleResultBondsFigureComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D342FE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_4D342FE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultBondsFigureComponent__CreateEndCallback(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
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
      sub_1C93A78(p_createCallback, 0, v2, v3, v4, v5, v6, v7);
      ((void (__fastcall *)(intptr_t, intptr_t))v11->fields.invoke_impl)(v11->fields.method_code, v11->fields.method);
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
  __int64 v16; // x1
  DataManager_o *v17; // x27
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x27
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  _BOOL8 v25; // x0
  __int64 v26; // x1
  SvtMultiPortraitEntity_o *current; // x26
  int klass_high; // w29
  int32_t portraitImageId; // w27
  System_Action_o *v30; // x28
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UnityEngine_Component_o *v39; // x27
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v42; // x1
  struct System_Int32_array *v43; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v45; // x28
  StandFigureCollect_o *v46; // x29
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
  System_Action_o *v59; // x26
  UIStandFigureR_o *RenderPrefab_41393712; // x0
  System_Collections_Generic_List_object__o *figureCollectList; // x19
  UIStandFigureR_o *v62; // x21
  StandFigureCollect_o *v63; // x20
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4D342FD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BattleResultBondsFigureComponent_CreateEndCallback__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StandFigureCollect_TypeInfo);
    byte_4D342FD = 1;
  }
  memset(&v77, 0, sizeof(v77));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v17 = (DataManager_o *)Instance;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = DataManager__GetMasterData_object_(
               v17,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
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
  sub_1C93A78(
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
          (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v59 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v59, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0);
    RenderPrefab_41393712 = StandFigureManager__CreateRenderPrefab_41393712(
                              parent,
                              svtId,
                              imageLimitCount,
                              offsetKind,
                              faceType,
                              depth,
                              v59,
                              0,
                              -1,
                              0,
                              0);
    figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v62 = RenderPrefab_41393712;
    v63 = (StandFigureCollect_o *)sub_1C93D20(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v63, 0, v62, 0);
    if ( figureCollectList )
    {
      items = figureCollectList->fields._items;
      v71 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++figureCollectList->fields._version;
      if ( items )
      {
        size = figureCollectList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            figureCollectList,
            (Il2CppObject *)v63,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          v73 = &items->obj.klass + size;
          figureCollectList->fields._size = size + 1;
          v73[4] = (Il2CppClass *)v63;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v73 + 4), (int32_t)v63, v64, v65, v66, v67, v68, v69);
        }
        return;
      }
    }
LABEL_36:
    sub_1C93D2C(Instance, v16);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    (System_Collections_Generic_List_object__o *)EntityListOrderBy,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v77 = v76;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v77,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v25 )
      break;
    current = (SvtMultiPortraitEntity_o *)v77.fields._current;
    if ( !v77.fields._current )
      sub_1C93D2C(v25, v26);
    klass_high = HIDWORD(v77.fields._current[2].klass);
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v30 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         parent,
                         portraitImageId,
                         offsetKind,
                         faceType,
                         (klass_high & (unsigned int)~(klass_high >> 31)) + depth,
                         v30,
                         0,
                         -1,
                         0,
                         0);
    v39 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C93D2C(0, v32);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v39, 0);
      v43 = current->fields.commonPosition;
      if ( !v43 )
        sub_1C93D2C(gameObject, v42);
      max_length = v43->max_length;
      if ( max_length == 1 )
        sub_1C93D34(gameObject);
      if ( !max_length )
        sub_1C93D34(gameObject);
      GameObjectExtensions__AddLocalPosition_36746104(gameObject, (float)v43->m_Items[0], (float)v43->m_Items[1], 0);
    }
    v45 = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v46 = (StandFigureCollect_o *)sub_1C93D20(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v46, current, (UIStandFigureR_o *)v39, 0);
    if ( !v45 )
      sub_1C93D2C(v47, v48);
    v55 = v45->fields._items;
    v56 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v45->fields._version;
    if ( !v55 )
      sub_1C93D2C(v47, v48);
    v57 = v45->fields._size;
    if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v45,
        (Il2CppObject *)v46,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &v55->obj.klass + v57;
      v45->fields._size = v57 + 1;
      v58[4] = (Il2CppClass *)v46;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v58 + 4), (int32_t)v46, v49, v50, v51, v52, v53, v54);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v77,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void BattleResultBondsFigureComponent__DestroyFigure(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_4D342FB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D342FB = 1;
  }
  memset(&v17, 0, sizeof(v17));
  figureCollectList = this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)figureCollectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C93D2C(v4, v5);
    monitor = (UnityEngine_Object_o *)v17.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    {
      v9 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v9 )
        sub_1C93D2C(0, v8);
      UIStandFigureR__ReleaseCharacter(v9, 0);
      v11 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v11 )
        sub_1C93D2C(0, v10);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_72120096(gameObject, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v13 = this->fields.figureCollectList;
  if ( !v13 )
LABEL_22:
    sub_1C93D2C(figureCollectList, method);
  size = v13->fields._size;
  v15 = v13->fields._version + 1;
  v13->fields._size = 0;
  v13->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v13->fields._items, 0, size, 0);
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
  __int64 v19; // x1
  int32_t ServantImageLimitSealAfter; // w3

  if ( (byte_4D342FC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D342FC = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v19);
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