void __fastcall BattleResultBondsFigureComponent___ctor(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B194B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v5, v6);
    byte_4B194B5 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
      sub_1BCA784(p_createCallback, 0LL, v2, v3, v4, v5, v6, v7);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v11->fields.m_target)(
        v11->fields.original_method_info,
        *(_QWORD *)&v11->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *Instance; // x0
  __int64 v38; // x1
  DataManager_o *v39; // x27
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x27
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  _BOOL8 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  SvtMultiPortraitEntity_o *current; // x26
  int klass_high; // w29
  int32_t portraitImageId; // w27
  System_Action_o *v57; // x28
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  UnityEngine_Component_o *v66; // x27
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v72; // x1
  struct System_Int32_array *v73; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v75; // x28
  StandFigureCollect_o *v76; // x29
  __int64 v77; // x0
  __int64 v78; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  System_Action_o *v89; // x26
  UIStandFigureR_o *RenderPrefab_38693360; // x0
  System_Collections_Generic_List_object__o *figureCollectList; // x19
  UIStandFigureR_o *v92; // x21
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  StandFigureCollect_o *v96; // x20
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  struct System_Object_array *items; // x8
  _QWORD *v104; // x9
  __int64 size; // x10
  Il2CppClass **v106; // x0
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B194B4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, parent, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_BattleResultBondsFigureComponent_CreateEndCallback__, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&StandFigureCollect_TypeInfo, v35, v36);
    byte_4B194B4 = 1;
  }
  memset(&v110, 0, sizeof(v110));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v39 = (DataManager_o *)Instance;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = DataManager__GetMasterData_object_(
               v39,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.createCallback,
    (int64_t)callBack,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( !EntityListOrderBy
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    ++this->fields.createNumMax;
    v89 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
    System_Action___ctor(v89, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    RenderPrefab_38693360 = StandFigureManager__CreateRenderPrefab_38693360(
                              parent,
                              svtId,
                              imageLimitCount,
                              offsetKind,
                              faceType,
                              depth,
                              v89,
                              0,
                              -1,
                              0LL);
    figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v92 = RenderPrefab_38693360;
    v96 = (StandFigureCollect_o *)sub_1BCAA2C(StandFigureCollect_TypeInfo, v93, v94, v95);
    StandFigureCollect___ctor(v96, 0LL, v92, 0LL);
    if ( figureCollectList )
    {
      items = figureCollectList->fields._items;
      v104 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++figureCollectList->fields._version;
      if ( items )
      {
        size = figureCollectList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            figureCollectList,
            (Il2CppObject *)v96,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
        }
        else
        {
          v106 = &items->obj.klass + size;
          figureCollectList->fields._size = size + 1;
          v106[4] = (Il2CppClass *)v96;
          sub_1BCA784((PartyOrganizationUtility_o *)(v106 + 4), (int64_t)v96, v97, v98, v99, v100, v101, v102);
        }
        return;
      }
    }
LABEL_36:
    sub_1BCAA3C(Instance, v38);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v109,
    (System_Collections_Generic_List_object__o *)EntityListOrderBy,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v110 = v109;
  while ( 1 )
  {
    v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v110,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v50 )
      break;
    current = (SvtMultiPortraitEntity_o *)v110.fields._current;
    if ( !v110.fields._current )
      sub_1BCAA3C(v50, v51);
    klass_high = HIDWORD(v110.fields._current[2].klass);
    ++this->fields.createNumMax;
    portraitImageId = current->fields.portraitImageId;
    v57 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53);
    System_Action___ctor(v57, (Il2CppObject *)this, Method_BattleResultBondsFigureComponent_CreateEndCallback__, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         parent,
                         portraitImageId,
                         offsetKind,
                         faceType,
                         (klass_high & (unsigned int)~(klass_high >> 31)) + depth,
                         v57,
                         0,
                         -1,
                         0LL);
    v66 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1BCAA3C(0LL, v59);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int64_t)current,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v66, 0LL);
      v73 = current->fields.commonPosition;
      if ( !v73 )
        sub_1BCAA3C(gameObject, v72);
      max_length = v73->max_length;
      if ( max_length == 1 )
        sub_1BCAA44(gameObject, v72);
      if ( !max_length )
        sub_1BCAA44(gameObject, v72);
      GameObjectExtensions__AddLocalPosition_34331980(gameObject, (float)v73->m_Items[1], (float)v73->m_Items[2], 0LL);
    }
    v75 = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v76 = (StandFigureCollect_o *)sub_1BCAA2C(StandFigureCollect_TypeInfo, v67, v68, v69);
    StandFigureCollect___ctor(v76, current, (UIStandFigureR_o *)v66, 0LL);
    if ( !v75 )
      sub_1BCAA3C(v77, v78);
    v85 = v75->fields._items;
    v86 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v75->fields._version;
    if ( !v85 )
      sub_1BCAA3C(v77, v78);
    v87 = v75->fields._size;
    if ( (unsigned int)v87 >= v85->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v75,
        (Il2CppObject *)v76,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    }
    else
    {
      v88 = &v85->obj.klass + v87;
      v75->fields._size = v87 + 1;
      v88[4] = (Il2CppClass *)v76;
      sub_1BCA784((PartyOrganizationUtility_o *)(v88 + 4), (int64_t)v76, v79, v80, v81, v82, v83, v84);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v110,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void __fastcall BattleResultBondsFigureComponent__DestroyFigure(
        BattleResultBondsFigureComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *figureCollectList; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x24
  UnityEngine_Object_o *monitor; // x20
  __int64 v19; // x1
  UIStandFigureR_o *v20; // x0
  __int64 v21; // x1
  UnityEngine_Component_o *v22; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v25; // x8
  int32_t size; // w2
  int v27; // w9
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B194B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B194B2 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    figureCollectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v15 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1BCAA3C(v15, v16);
    monitor = (UnityEngine_Object_o *)v29.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v20 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v20 )
        sub_1BCAA3C(0LL, v19);
      UIStandFigureR__ReleaseCharacter(v20, 0LL);
      v22 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v22 )
        sub_1BCAA3C(0LL, v21);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v25 = this->fields.figureCollectList;
  if ( !v25 )
LABEL_22:
    sub_1BCAA3C(figureCollectList, method);
  size = v25->fields._size;
  v27 = v25->fields._version + 1;
  v25->fields._size = 0;
  v25->fields._version = v27;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v25->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t ImageLimitCount; // w26
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  int32_t ServantImageLimitSealAfter; // w3

  if ( (byte_4B194B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, parent, *(_QWORD *)&svtId);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B194B3 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, parent);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v23);
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