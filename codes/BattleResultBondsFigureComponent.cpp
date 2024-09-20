void __fastcall BattleResultBondsFigureComponent___ctor(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E2B1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_4A5E2B1 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
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
      sub_1B88554(p_createCallback, 0, v2, v3);
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
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  DataManager_o *v17; // x27
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x27
  int32_t v19; // w2
  int32_t v20; // w3
  _BOOL8 v21; // x0
  __int64 v22; // x1
  SvtMultiPortraitEntity_o *current; // x26
  int klass_high; // w29
  int32_t portraitImageId; // w27
  System_Action_o *v26; // x28
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  UnityEngine_Component_o *v31; // x27
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x1
  struct System_Int32_array *v35; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v37; // x28
  StandFigureCollect_o *v38; // x29
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  System_Action_o *v47; // x26
  UIStandFigureR_o *RenderPrefab_37977456; // x0
  System_Collections_Generic_List_object__o *figureCollectList; // x19
  UIStandFigureR_o *v50; // x21
  StandFigureCollect_o *v51; // x20
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A5E2B0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleResultBondsFigureComponent_CreateEndCallback__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StandFigureCollect_TypeInfo);
    byte_4A5E2B0 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v17 = (DataManager_o *)Instance;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = DataManager__GetMasterData_object_(
               v17,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.createCallback, (int32_t)callBack, v19, v20);
  if ( !EntityListOrderBy
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v47 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v47, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    RenderPrefab_37977456 = StandFigureManager__CreateRenderPrefab_37977456(
                              parent,
                              svtId,
                              imageLimitCount,
                              offsetKind,
                              faceType,
                              depth,
                              v47,
                              0,
                              -1,
                              0LL);
    figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v50 = RenderPrefab_37977456;
    v51 = (StandFigureCollect_o *)sub_1B887FC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v51, 0LL, v50, 0LL);
    if ( figureCollectList )
    {
      items = figureCollectList->fields._items;
      v55 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++figureCollectList->fields._version;
      if ( items )
      {
        size = figureCollectList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            figureCollectList,
            (Il2CppObject *)v51,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &items->obj.klass + size;
          figureCollectList->fields._size = size + 1;
          v57[4] = (Il2CppClass *)v51;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v51, v52, v53);
        }
        return;
      }
    }
LABEL_36:
    sub_1B8880C(Instance, v16);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_object__o *)EntityListOrderBy,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v61 = v60;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v21 )
      break;
    current = (SvtMultiPortraitEntity_o *)v61.fields._current;
    if ( !v61.fields._current )
      sub_1B8880C(v21, v22);
    klass_high = HIDWORD(v61.fields._current[2].klass);
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         parent,
                         portraitImageId,
                         offsetKind,
                         faceType,
                         (klass_high & (unsigned int)~(klass_high >> 31)) + depth,
                         v26,
                         0,
                         -1,
                         0LL);
    v31 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1B8880C(0LL, v28);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v29,
      v30);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v31, 0LL);
      v35 = current->fields.commonPosition;
      if ( !v35 )
        sub_1B8880C(gameObject, v34);
      max_length = v35->max_length;
      if ( max_length == 1 )
        sub_1B88814(gameObject, v34);
      if ( !max_length )
        sub_1B88814(gameObject, v34);
      GameObjectExtensions__AddLocalPosition_33725056(gameObject, (float)v35->m_Items[1], (float)v35->m_Items[2], 0LL);
    }
    v37 = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v38 = (StandFigureCollect_o *)sub_1B887FC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v38, current, (UIStandFigureR_o *)v31, 0LL);
    if ( !v37 )
      sub_1B8880C(v39, v40);
    v43 = v37->fields._items;
    v44 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v37->fields._version;
    if ( !v43 )
      sub_1B8880C(v39, v40);
    v45 = v37->fields._size;
    if ( (unsigned int)v45 >= v43->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v37,
        (Il2CppObject *)v38,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = &v43->obj.klass + v45;
      v37->fields._size = v45 + 1;
      v46[4] = (Il2CppClass *)v38;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v38, v41, v42);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void __fastcall BattleResultBondsFigureComponent__DestroyFigure(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *figureCollectList; // x0
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

  if ( (byte_4A5E2AE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E2AE = 1;
  }
  memset(&v17, 0, sizeof(v17));
  figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    figureCollectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B8880C(v4, v5);
    monitor = (UnityEngine_Object_o *)v17.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v9 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v9 )
        sub_1B8880C(0LL, v8);
      UIStandFigureR__ReleaseCharacter(v9, 0LL);
      v11 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v11 )
        sub_1B8880C(0LL, v10);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69459568(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v13 = this->fields.figureCollectList;
  if ( !v13 )
LABEL_22:
    sub_1B8880C(figureCollectList, method);
  size = v13->fields._size;
  v15 = v13->fields._version + 1;
  v13->fields._size = 0;
  v13->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v13->fields._items, 0, size, 0LL);
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
  int32_t ImageLimitCount; // w26
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  int32_t ServantImageLimitSealAfter; // w3

  if ( (byte_4A5E2AF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E2AF = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v19);
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