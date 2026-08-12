void BattleResultBondsFigureComponent___ctor(BattleResultBondsFigureComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_597442F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_2213A60(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_597442F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultBondsFigureComponent__CreateEndCallback(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
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
      sub_2213A04(p_createCallback, 0, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  _BOOL8 v25; // x0
  __int64 v26; // x1
  SvtMultiPortraitEntity_o *current; // x26
  int klass_high; // w29
  System_Action_c *v29; // x0
  int32_t portraitImageId; // w27
  System_Action_o *v31; // x28
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  UnityEngine_Component_o *v40; // x27
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v43; // x1
  struct System_Int32_array *v44; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v46; // x28
  StandFigureCollect_o *v47; // x29
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
  System_Action_o *v61; // x26
  UIStandFigureR_o *RenderPrefab_47638192; // x0
  System_Collections_Generic_List_object__o *figureCollectList; // x19
  UIStandFigureR_o *v64; // x21
  StandFigureCollect_o *v65; // x20
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_597442E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleResultBondsFigureComponent_CreateEndCallback__);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StandFigureCollect_TypeInfo);
    byte_597442E = 1;
  }
  memset(&v79, 0, sizeof(v79));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v17 = (DataManager_o *)Instance;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = DataManager__GetMasterData_object_(
               v17,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
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
  sub_2213A04(
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
          (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    v60 = System_Action_TypeInfo;
    ++this->fields.createNumMax;
    v61 = (System_Action_o *)sub_2213CCC(v60);
    System_Action___ctor(v61, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0);
    RenderPrefab_47638192 = StandFigureManager__CreateRenderPrefab_47638192(
                              parent,
                              svtId,
                              imageLimitCount,
                              offsetKind,
                              faceType,
                              depth,
                              v61,
                              0,
                              -1,
                              0,
                              0);
    figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v64 = RenderPrefab_47638192;
    v65 = (StandFigureCollect_o *)sub_2213CCC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v65, 0, v64, 0);
    if ( figureCollectList )
    {
      items = figureCollectList->fields._items;
      v73 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++figureCollectList->fields._version;
      if ( items )
      {
        size = figureCollectList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            figureCollectList,
            (Il2CppObject *)v65,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = &items->obj.klass + size;
          figureCollectList->fields._size = size + 1;
          v75[4] = (Il2CppClass *)v65;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v75 + 4), (int32_t)v65, v66, v67, v68, v69, v70, v71);
        }
        return;
      }
    }
LABEL_35:
    sub_2213CDC(Instance, v16);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v78,
    (System_Collections_Generic_List_object__o *)EntityListOrderBy,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v79 = v78;
  v78.fields._list = 0;
  *(_QWORD *)&v78.fields._index = &v79;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v79,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v25 )
      break;
    current = (SvtMultiPortraitEntity_o *)v79.fields._current;
    if ( !v79.fields._current )
      sub_2213CDC(v25, v26);
    klass_high = HIDWORD(v79.fields._current[2].klass);
    v29 = System_Action_TypeInfo;
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v31 = (System_Action_o *)sub_2213CCC(v29);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         parent,
                         portraitImageId,
                         offsetKind,
                         faceType,
                         (klass_high & (unsigned int)~(klass_high >> 31)) + depth,
                         v31,
                         0,
                         -1,
                         0,
                         0);
    v40 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_2213CDC(0, v33);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v40, 0);
      v44 = current->fields.commonPosition;
      if ( !v44 )
        sub_2213CDC(gameObject, v43);
      max_length = v44->max_length;
      if ( max_length == 1 )
        sub_2213CE4(gameObject);
      if ( !max_length )
        sub_2213CE4(gameObject);
      GameObjectExtensions__AddLocalPosition_42892452(gameObject, (float)v44->m_Items[0], (float)v44->m_Items[1], 0);
    }
    v46 = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v47 = (StandFigureCollect_o *)sub_2213CCC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v47, current, (UIStandFigureR_o *)v40, 0);
    if ( !v46
      || (v56 = v46->fields._items,
          v57 = Method_System_Collections_Generic_List_StandFigureCollect__Add__,
          ++v46->fields._version,
          !v56) )
    {
      sub_2213CDC(v48, v49);
    }
    v58 = v46->fields._size;
    if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v46,
        (Il2CppObject *)v47,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v59 = &v56->obj.klass + v58;
      v46->fields._size = v58 + 1;
      v59[4] = (Il2CppClass *)v47;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v59 + 4), (int32_t)v47, v50, v51, v52, v53, v54, v55);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v79,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  __int64 v12; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_597442C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597442C = 1;
  }
  figureCollectList = this->fields.figureCollectList;
  memset(&v18, 0, sizeof(v18));
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)figureCollectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v18 = v17;
  v17.fields._list = 0;
  *(_QWORD *)&v17.fields._index = &v18;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_2213CDC(v4, v5);
    monitor = (UnityEngine_Object_o *)v18.fields._current[1].monitor;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    {
      v9 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v9 )
        sub_2213CDC(0, v8);
      UIStandFigureR__ReleaseCharacter(v9, 0);
      v11 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v11 )
        sub_2213CDC(0, v10);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      UnityEngine_Object__DestroyImmediate_83460132(gameObject, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v14 = this->fields.figureCollectList;
  if ( !v14 )
LABEL_22:
    sub_2213CDC(figureCollectList, method);
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0);
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

  if ( (byte_597442D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597442D = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, parent);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v19);
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