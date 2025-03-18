void __fastcall BattleResultBondsFigureComponent___ctor(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C253BE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v3);
    byte_4C253BE = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v4;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultBondsFigureComponent__CreateEndCallback(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t createNumMax; // w9
  int32_t v9; // w8
  PartyOrganizationUtility_o *p_createCallback; // x0
  struct System_Action_o *v11; // x19
  struct System_Action_o *createCallback; // t1

  createNumMax = this->fields.createNumMax;
  v9 = this->fields.createNum + 1;
  this->fields.createNum = v9;
  if ( v9 >= createNumMax )
  {
    createCallback = this->fields.createCallback;
    p_createCallback = (PartyOrganizationUtility_o *)&this->fields.createCallback;
    v11 = createCallback;
    *(_QWORD *)&p_createCallback[-1].fields._IsQuestStartMenuMode_k__BackingField = 0LL;
    if ( createCallback )
    {
      p_createCallback->klass = 0LL;
      sub_1C3B708(p_createCallback, 0LL, v2, v3, v4, v5, v6, v7);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v11->fields.m_target)(
        v11->fields.original_method_info,
        *(_QWORD *)&v11->fields.extra_arg);
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
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  _BOOL8 v36; // x0
  __int64 v37; // x1
  SvtMultiPortraitEntity_o *current; // x26
  int klass_high; // w29
  int32_t portraitImageId; // w27
  System_Action_o *v41; // x28
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UnityEngine_Component_o *v50; // x27
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v53; // x1
  struct System_Int32_array *v54; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v56; // x28
  StandFigureCollect_o *v57; // x29
  __int64 v58; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  System_Action_o *v70; // x26
  UIStandFigureR_o *RenderPrefab_39403160; // x0
  System_Collections_Generic_List_object__o *figureCollectList; // x19
  UIStandFigureR_o *v73; // x21
  StandFigureCollect_o *v74; // x20
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct System_Object_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  Il2CppClass **v84; // x0
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C253BD & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, parent);
    sub_1C3B764(&Method_BattleResultBondsFigureComponent_CreateEndCallback__, v15);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v16);
    sub_1C3B764(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v17);
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v23);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1C3B764(&StandFigureCollect_TypeInfo, v25);
    byte_4C253BD = 1;
  }
  memset(&v88, 0, sizeof(v88));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v28 = (DataManager_o *)Instance;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = DataManager__GetMasterData_object_(
               v28,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
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
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.createCallback,
    (int64_t)callBack,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( !EntityListOrderBy
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v70 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v70, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    RenderPrefab_39403160 = StandFigureManager__CreateRenderPrefab_39403160(
                              parent,
                              svtId,
                              imageLimitCount,
                              offsetKind,
                              faceType,
                              depth,
                              v70,
                              0,
                              -1,
                              0LL,
                              0LL);
    figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v73 = RenderPrefab_39403160;
    v74 = (StandFigureCollect_o *)sub_1C3B9B0(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v74, 0LL, v73, 0LL);
    if ( figureCollectList )
    {
      items = figureCollectList->fields._items;
      v82 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++figureCollectList->fields._version;
      if ( items )
      {
        size = figureCollectList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            figureCollectList,
            (Il2CppObject *)v74,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
        }
        else
        {
          v84 = &items->obj.klass + size;
          figureCollectList->fields._size = size + 1;
          v84[4] = (Il2CppClass *)v74;
          sub_1C3B708((PartyOrganizationUtility_o *)(v84 + 4), (int64_t)v74, v75, v76, v77, v78, v79, v80);
        }
        return;
      }
    }
LABEL_36:
    sub_1C3B9C0(Instance, v27);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    (System_Collections_Generic_List_object__o *)EntityListOrderBy,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v88 = v87;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v88,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v36 )
      break;
    current = (SvtMultiPortraitEntity_o *)v88.fields._current;
    if ( !v88.fields._current )
      sub_1C3B9C0(v36, v37);
    klass_high = HIDWORD(v88.fields._current[2].klass);
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v41 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v41, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         parent,
                         portraitImageId,
                         offsetKind,
                         faceType,
                         (klass_high & (unsigned int)~(klass_high >> 31)) + depth,
                         v41,
                         0,
                         -1,
                         0LL,
                         0LL);
    v50 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C3B9C0(0LL, v43);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int64_t)current,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v50, 0LL);
      v54 = current->fields.commonPosition;
      if ( !v54 )
        sub_1C3B9C0(gameObject, v53);
      max_length = v54->max_length;
      if ( max_length == 1 )
        sub_1C3B9C8(gameObject, v53);
      if ( !max_length )
        sub_1C3B9C8(gameObject, v53);
      GameObjectExtensions__AddLocalPosition_34964328(gameObject, (float)v54->m_Items[1], (float)v54->m_Items[2], 0LL);
    }
    v56 = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v57 = (StandFigureCollect_o *)sub_1C3B9B0(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v57, current, (UIStandFigureR_o *)v50, 0LL);
    if ( !v56 )
      sub_1C3B9C0(v58, v59);
    v66 = v56->fields._items;
    v67 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v56->fields._version;
    if ( !v66 )
      sub_1C3B9C0(v58, v59);
    v68 = v56->fields._size;
    if ( (unsigned int)v68 >= v66->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v56,
        (Il2CppObject *)v57,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &v66->obj.klass + v68;
      v56->fields._size = v68 + 1;
      v69[4] = (Il2CppClass *)v57;
      sub_1C3B708((PartyOrganizationUtility_o *)(v69 + 4), (int64_t)v57, v60, v61, v62, v63, v64, v65);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v88,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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

  if ( (byte_4C253BB & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    byte_4C253BB = 1;
  }
  memset(&v22, 0, sizeof(v22));
  figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    figureCollectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1C3B9C0(v9, v10);
    monitor = (UnityEngine_Object_o *)v22.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v14 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v14 )
        sub_1C3B9C0(0LL, v13);
      UIStandFigureR__ReleaseCharacter(v14, 0LL);
      v16 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v16 )
        sub_1C3B9C0(0LL, v15);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71122936(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v18 = this->fields.figureCollectList;
  if ( !v18 )
LABEL_22:
    sub_1C3B9C0(figureCollectList, method);
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

  if ( (byte_4C253BC & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, parent);
    sub_1C3B764(&ImageLimitCount_TypeInfo, v17);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4C253BC = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v21);
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