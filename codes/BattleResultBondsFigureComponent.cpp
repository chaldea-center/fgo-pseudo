void __fastcall BattleResultBondsFigureComponent___ctor(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF4E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v4);
    byte_49FF4E0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
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
      sub_1B6406C(p_createCallback, 0, v2, v3);
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
  DataManager_o *v27; // x27
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x27
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x1
  __int64 v32; // x2
  _BOOL8 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  SvtMultiPortraitEntity_o *current; // x26
  int klass_high; // w29
  int32_t portraitImageId; // w27
  System_Action_o *v39; // x28
  UIStandFigureR_o *PrefabForImageId; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  UnityEngine_Component_o *v43; // x27
  __int64 v44; // x1
  __int64 v45; // x2
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v48; // x1
  struct System_Int32_array *v49; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v51; // x28
  StandFigureCollect_o *v52; // x29
  __int64 v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  System_Action_o *v60; // x26
  UIStandFigureR_o *RenderPrefab_37607928; // x0
  System_Collections_Generic_List_object__o *figureCollectList; // x19
  UIStandFigureR_o *v63; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  StandFigureCollect_o *v66; // x20
  int32_t v67; // w2
  int32_t v68; // w3
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FF4DF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, parent);
    sub_1B640C8(&Method_BattleResultBondsFigureComponent_CreateEndCallback__, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v17);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B640C8(&StandFigureCollect_TypeInfo, v25);
    byte_49FF4DF = 1;
  }
  memset(&v76, 0, sizeof(v76));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v27 = (DataManager_o *)Instance;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = DataManager__GetMasterData_object_(
               v27,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.createCallback, (int32_t)callBack, v29, v30);
  if ( !EntityListOrderBy
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v60 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v31, v32);
    System_Action___ctor(v60, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    RenderPrefab_37607928 = StandFigureManager__CreateRenderPrefab_37607928(
                              parent,
                              svtId,
                              imageLimitCount,
                              offsetKind,
                              faceType,
                              depth,
                              v60,
                              0,
                              -1,
                              0LL);
    figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v63 = RenderPrefab_37607928;
    v66 = (StandFigureCollect_o *)sub_1B64314(StandFigureCollect_TypeInfo, v64, v65);
    StandFigureCollect___ctor(v66, 0LL, v63, 0LL);
    if ( figureCollectList )
    {
      items = figureCollectList->fields._items;
      v70 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++figureCollectList->fields._version;
      if ( items )
      {
        size = figureCollectList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            figureCollectList,
            (Il2CppObject *)v66,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
        }
        else
        {
          v72 = &items->obj.klass + size;
          figureCollectList->fields._size = size + 1;
          v72[4] = (Il2CppClass *)v66;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v72 + 4), (int32_t)v66, v67, v68);
        }
        return;
      }
    }
LABEL_36:
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    (System_Collections_Generic_List_object__o *)EntityListOrderBy,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v76 = v75;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v33 )
      break;
    current = (SvtMultiPortraitEntity_o *)v76.fields._current;
    if ( !v76.fields._current )
      sub_1B64324(v33);
    klass_high = HIDWORD(v76.fields._current[2].klass);
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v34, v35);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         parent,
                         portraitImageId,
                         offsetKind,
                         faceType,
                         (klass_high & (unsigned int)~(klass_high >> 31)) + depth,
                         v39,
                         0,
                         -1,
                         0LL);
    v43 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1B64324(0LL);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v41,
      v42);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v43, 0LL);
      v49 = current->fields.commonPosition;
      if ( !v49 )
        sub_1B64324(gameObject);
      max_length = v49->max_length;
      if ( max_length == 1 )
        sub_1B6432C(gameObject, v48);
      if ( !max_length )
        sub_1B6432C(gameObject, v48);
      GameObjectExtensions__AddLocalPosition_33376396(gameObject, (float)v49->m_Items[1], (float)v49->m_Items[2], 0LL);
    }
    v51 = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v52 = (StandFigureCollect_o *)sub_1B64314(StandFigureCollect_TypeInfo, v44, v45);
    StandFigureCollect___ctor(v52, current, (UIStandFigureR_o *)v43, 0LL);
    if ( !v51 )
      sub_1B64324(v53);
    v56 = v51->fields._items;
    v57 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v51->fields._version;
    if ( !v56 )
      sub_1B64324(v53);
    v58 = v51->fields._size;
    if ( (unsigned int)v58 >= v56->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v51,
        (Il2CppObject *)v52,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v59 = &v56->obj.klass + v58;
      v51->fields._size = v58 + 1;
      v59[4] = (Il2CppClass *)v52;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v52, v54, v55);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  Il2CppObject *current; // x24
  UnityEngine_Object_o *monitor; // x20
  UIStandFigureR_o *v12; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v15; // x8
  int32_t size; // w2
  int v17; // w9
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FF4DD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FF4DD = 1;
  }
  memset(&v19, 0, sizeof(v19));
  figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    figureCollectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1B64324(v9);
    monitor = (UnityEngine_Object_o *)v19.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v12 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v12 )
        sub_1B64324(0LL);
      UIStandFigureR__ReleaseCharacter(v12, 0LL);
      v13 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v13 )
        sub_1B64324(0LL);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69127924(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v15 = this->fields.figureCollectList;
  if ( !v15 )
LABEL_22:
    sub_1B64324(figureCollectList);
  size = v15->fields._size;
  v17 = v15->fields._version + 1;
  v15->fields._size = 0;
  v15->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0LL);
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
  int32_t ServantImageLimitSealAfter; // w3

  if ( (byte_49FF4DE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, parent);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_49FF4DE = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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