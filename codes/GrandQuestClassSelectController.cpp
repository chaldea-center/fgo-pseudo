void GrandQuestClassSelectController___cctor(const MethodInfo *method)
{
  struct GrandQuestClassSelectController_StaticFields *static_fields; // x8

  if ( (byte_596B267 & 1) == 0 )
  {
    sub_2213A60(&GrandQuestClassSelectController_TypeInfo);
    byte_596B267 = 1;
  }
  static_fields = GrandQuestClassSelectController_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->UpdateInfoTimeInterval = 0x3F00000040400000LL;
  static_fields->EXIT_TIME = 0.25;
}


void GrandQuestClassSelectController___ctor(GrandQuestClassSelectController_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void GrandQuestClassSelectController__Awake(GrandQuestClassSelectController_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_EventDelegate__o *typeHierarchy; // x20
  EventDelegate_Callback_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  void *monitor; // x8
  System_Collections_Generic_List_EventDelegate__o *v9; // x20
  EventDelegate_Callback_o *v10; // x21
  void *v11; // x8
  System_Collections_Generic_List_EventDelegate__o *v12; // x20
  EventDelegate_Callback_o *v13; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_596B24B & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_GrandQuestClassSelectController__Awake_b__45_0__);
    sub_2213A60(&Method_GrandQuestClassSelectController__Awake_b__45_1__);
    this = (GrandQuestClassSelectController_o *)sub_2213A60(&Method_GrandQuestClassSelectController__Awake_b__45_2__);
    byte_596B24B = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    goto LABEL_9;
  typeHierarchy = (System_Collections_Generic_List_EventDelegate__o *)klass->_2.typeHierarchy;
  v5 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v5, v2, Method_GrandQuestClassSelectController__Awake_b__45_0__, 0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v6, v7);
  this = (GrandQuestClassSelectController_o *)EventDelegate__Add(typeHierarchy, v5, 0);
  monitor = v2[4].monitor;
  if ( !monitor
    || (v9 = (System_Collections_Generic_List_EventDelegate__o *)*((_QWORD *)monitor + 25),
        v10 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v10, v2, Method_GrandQuestClassSelectController__Awake_b__45_1__, 0),
        this = (GrandQuestClassSelectController_o *)EventDelegate__Add(v9, v10, 0),
        (v11 = v2[7].monitor) == 0) )
  {
LABEL_9:
    sub_2213CDC(this, method);
  }
  v12 = (System_Collections_Generic_List_EventDelegate__o *)*((_QWORD *)v11 + 25);
  v13 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v13, v2, Method_GrandQuestClassSelectController__Awake_b__45_2__, 0);
  EventDelegate__Add(v12, v13, 0);
}


void GrandQuestClassSelectController__ClearBoardList(GrandQuestClassSelectController_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *folderBoardWrapContent; // x0
  int32_t childCount; // w0
  int v5; // w22
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2

  if ( (byte_596B25B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B25B = 1;
  }
  folderBoardWrapContent = (UnityEngine_Component_o *)this->fields.folderBoardWrapContent;
  if ( !folderBoardWrapContent )
    goto LABEL_17;
  folderBoardWrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardWrapContent, 0);
  if ( !folderBoardWrapContent )
    goto LABEL_17;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)folderBoardWrapContent, 0);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      folderBoardWrapContent = (UnityEngine_Component_o *)this->fields.folderBoardWrapContent;
      if ( !folderBoardWrapContent )
        break;
      folderBoardWrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                            folderBoardWrapContent,
                                                            0);
      if ( !folderBoardWrapContent )
        break;
      folderBoardWrapContent = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                            (UnityEngine_Transform_o *)folderBoardWrapContent,
                                                            v5 - 2,
                                                            0);
      if ( !folderBoardWrapContent )
        break;
      folderBoardWrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                            folderBoardWrapContent,
                                                            0);
      if ( !folderBoardWrapContent )
        break;
      v6 = (UnityEngine_Object_o *)folderBoardWrapContent;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)folderBoardWrapContent, 0, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      UnityEngine_Object__Destroy_83459800(v6, 0);
      if ( (unsigned int)--v5 <= 1 )
        goto LABEL_14;
    }
LABEL_17:
    sub_2213CDC(folderBoardWrapContent, method);
  }
LABEL_14:
  folderBoardWrapContent = (UnityEngine_Component_o *)this->fields.folderBoardWrapContent;
  if ( !folderBoardWrapContent )
    goto LABEL_17;
  folderBoardWrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardWrapContent, 0);
  if ( !folderBoardWrapContent )
    goto LABEL_17;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)folderBoardWrapContent, 0);
}


System_Collections_IEnumerator_o *GrandQuestClassSelectController__CoWaitUntilBoardInit(
        GrandQuestClassSelectController_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596B24E & 1) == 0 )
  {
    sub_2213A60(&GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49_TypeInfo);
    byte_596B24E = 1;
  }
  v5 = sub_2213CCC(GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)endCallback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *GrandQuestClassSelectController__CoWaitUntilCenterChildStart(
        GrandQuestClassSelectController_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596B250 & 1) == 0 )
  {
    sub_2213A60(&GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51_TypeInfo);
    byte_596B250 = 1;
  }
  v5 = sub_2213CCC(GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)endCallback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestClassSelectController__CreateBoardList(
        GrandQuestClassSelectController_o *this,
        int32_t focusWarId,
        const MethodInfo *method)
{
  int v4; // w8
  System_Collections_Generic_List_object__o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *folderBoardWrapContent; // x20
  struct UIWrapContent_o **p_folderBoardWrapContent; // x25
  unsigned __int64 v16; // x1
  __int64 v17; // x2
  __int64 folderBoardScrollView; // x0
  Il2CppObject *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct UICenterOnChild_o **p_folderBoardCenterChild; // x20
  UnityEngine_Object_o *folderBoardCenterChild; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct UICenterOnChild_o *v41; // x20
  MissionNaviTransitionBoardItem_o *p_onFinished; // x20
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v44; // x23
  System_Delegate_o *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Delegate_o *v52; // x8
  System_Delegate_c *v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct UIScrollView_o *v60; // x20
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v62; // x23
  System_Delegate_o *v63; // x0
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  System_Collections_Generic_List_object__o *v68; // x22
  int32_t v69; // w26
  UnityEngine_Vector3_c **v70; // x27
  __int64 v71; // x28
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  WarEntity_o *v78; // x29
  struct GrandQuestResourceCatalogAssetBundle_o *resourceAssetBundle; // x8
  struct GrandQuestResourceContents_o *Contents_k__BackingField; // x8
  WarReleaseEntity_o *v81; // x23
  Il2CppObject *GrandQuestFolderBoardPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v84; // x20
  UnityEngine_Transform_o *v85; // x21
  System_String_o **p_closedDialogMessage; // x8
  System_String_o *v87; // x24
  System_String_o *v88; // x0
  System_String_o *v89; // x0
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  __int64 v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  __int64 v99; // x8
  const MethodInfo *v100; // x2
  struct GrandQuestRootComponent_o *rootComponent; // x8
  int32_t v102; // w9
  UnityEngine_Vector3_c **v103; // x23
  BlankEarthSpotEntity_o *SpotEntityByWarId; // x0
  __int64 v105; // x1
  __int64 v106; // x2
  GrandQuestViewSwitcher_c *v107; // x8
  BlankEarthSpotEntity_o *v108; // x27
  int32_t DefaultGrandClassIconId; // w21
  int32_t v110; // w27
  int32_t v111; // w22
  System_String_o *PrioredName; // x25
  GrandQuestFolderBoardItem_o *v113; // x29
  int32_t v114; // w2
  struct GrandQuestResourceCatalogAssetBundle_o *v115; // x8
  struct GrandQuestResourceContents_o *v116; // x8
  AtlasManagerUnit_o *BoardUiAtlasManagerUnit_k__BackingField; // x21
  System_Action_o *v118; // x22
  const MethodInfo *v119; // x4
  UnityEngine_GameObject_o *slideIndexPrefab; // x20
  UnityEngine_Transform_o *v121; // x0
  UnityEngine_GameObject_o *v122; // x20
  UnityEngine_Transform_o *v123; // x21
  const MethodInfo *v124; // x3
  const MethodInfo *v125; // x3
  Il2CppObject *Item; // x0
  System_String_o *v127; // x2
  System_String_o *v128; // x3
  int32_t v129; // w4
  int32_t v130; // w5
  bool v131; // w6
  bool v132; // w7
  const MethodInfo *v133; // x1
  const MethodInfo *v134; // x2
  struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o *folderBoardList; // x8
  const MethodInfo *v136; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v137; // [xsp+10h] [xbp-A0h]
  int64_t listCreatedTime; // [xsp+20h] [xbp-90h]
  struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o **p_folderBoardList; // [xsp+30h] [xbp-80h]
  int32_t index; // [xsp+3Ch] [xbp-74h]
  Il2CppObject *component; // [xsp+40h] [xbp-70h] BYREF
  int32_t warId; // [xsp+4Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B252 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BaseMonoBehaviour_createObject_GrandQuestFolderBoardComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    sub_2213A60(&Method_UnityEngine_GameObject_TryGetComponent_SelectBannerSliderIcon___);
    sub_2213A60(&Method_GrandQuestClassSelectController_OnCenterOnChildFinishedFolderBoard__);
    sub_2213A60(&Method_GrandQuestClassSelectController_OnDragStarted__);
    sub_2213A60(&GrandQuestFolderBoardItem_TypeInfo);
    sub_2213A60(&GrandQuestViewSwitcher_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_GrandQuestFolderBoardComponent__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIScrollView_OnDragNotification_TypeInfo);
    sub_2213A60(&SpringPanel_OnFinished_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass54_0__CreateBoardList_b__0__);
    sub_2213A60(&GrandQuestClassSelectController___c__DisplayClass54_0_TypeInfo);
    sub_2213A60(&StringLiteral_21574/*"img_slider_on"*/);
    sub_2213A60(&StringLiteral_18064/*"board_"*/);
    sub_2213A60(&StringLiteral_21573/*"img_slider_off"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B252 = 1;
  }
  v4 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  warId = 0;
  component = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&focusWarId, method);
  listCreatedTime = NetworkManager__getTime(0);
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GrandQuestFolderBoardComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent___ctor__);
  this->fields.folderBoardList = (struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o *)v5;
  p_folderBoardList = &this->fields.folderBoardList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.folderBoardList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  p_folderBoardWrapContent = &this->fields.folderBoardWrapContent;
  folderBoardWrapContent = (UnityEngine_Object_o *)this->fields.folderBoardWrapContent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  if ( UnityEngine_Object__op_Equality(folderBoardWrapContent, 0, 0) )
  {
    folderBoardScrollView = (__int64)this->fields.folderBoardScrollView;
    if ( !folderBoardScrollView )
      goto LABEL_96;
    folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)folderBoardScrollView,
                                       0);
    if ( !folderBoardScrollView )
      goto LABEL_96;
    v19 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)folderBoardScrollView,
            (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    *p_folderBoardWrapContent = (struct UIWrapContent_o *)v19;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.folderBoardWrapContent,
      (int32_t)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  p_folderBoardCenterChild = &this->fields.folderBoardCenterChild;
  folderBoardCenterChild = (UnityEngine_Object_o *)this->fields.folderBoardCenterChild;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
  if ( UnityEngine_Object__op_Equality(folderBoardCenterChild, 0, 0) )
  {
    folderBoardScrollView = (__int64)*p_folderBoardWrapContent;
    if ( !*p_folderBoardWrapContent )
      goto LABEL_96;
    folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)folderBoardScrollView,
                                       0);
    if ( !folderBoardScrollView )
      goto LABEL_96;
    v34 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)folderBoardScrollView,
            (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_folderBoardCenterChild = (struct UICenterOnChild_o *)v34;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.folderBoardCenterChild,
      (int32_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  folderBoardScrollView = (__int64)*p_folderBoardCenterChild;
  if ( !*p_folderBoardCenterChild )
    goto LABEL_96;
  *(_QWORD *)(folderBoardScrollView + 40) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(folderBoardScrollView + 40), 0, v28, v29, v30, v31, v32, v33);
  v41 = *p_folderBoardCenterChild;
  if ( !v41 )
    goto LABEL_96;
  onFinished = (System_Delegate_o *)v41->fields.onFinished;
  p_onFinished = (MissionNaviTransitionBoardItem_o *)&v41->fields.onFinished;
  v44 = (SpringPanel_OnFinished_o *)sub_2213CCC(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(
    v44,
    (Il2CppObject *)this,
    Method_GrandQuestClassSelectController_OnCenterOnChildFinishedFolderBoard__,
    0);
  v45 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v44, 0);
  v52 = v45;
  if ( v45 )
  {
    v53 = (System_Delegate_c *)SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v45->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_29;
    p_onFinished->klass = (MissionNaviTransitionBoardItem_c *)v45;
    if ( v45->klass != v53 )
      goto LABEL_29;
  }
  else
  {
    p_onFinished->klass = 0;
  }
  sub_2213A04(p_onFinished, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  folderBoardScrollView = (__int64)this->fields.folderBoardScrollView;
  if ( !folderBoardScrollView )
    goto LABEL_96;
  *(_QWORD *)(folderBoardScrollView + 88) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(folderBoardScrollView + 88), 0, v54, v55, v56, v57, v58, v59);
  v60 = this->fields.folderBoardScrollView;
  if ( !v60 )
    goto LABEL_96;
  onDragStarted = (System_Delegate_o *)v60->fields.onDragStarted;
  p_onFinished = (MissionNaviTransitionBoardItem_o *)&v60->fields.onDragStarted;
  v62 = (UIScrollView_OnDragNotification_o *)sub_2213CCC(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(
    v62,
    (Il2CppObject *)this,
    Method_GrandQuestClassSelectController_OnDragStarted__,
    0);
  v63 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v62, 0);
  v52 = v63;
  if ( !v63 )
    goto LABEL_30;
  v53 = (System_Delegate_c *)UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v63->klass != UIScrollView_OnDragNotification_TypeInfo
    || (p_onFinished->klass = (MissionNaviTransitionBoardItem_c *)v63, v63->klass != v53) )
  {
LABEL_29:
    sub_221405C(v52, v53, v46, v47);
LABEL_30:
    p_onFinished->klass = 0;
  }
  sub_2213A04(p_onFinished, (int32_t)v52, v46, v47, v64, v65, v66, v67);
  if ( !this->fields.rootComponent )
    goto LABEL_96;
  folderBoardScrollView = (__int64)GrandQuestRootComponent__GetGrandWarInfoList(
                                     (GrandQuestRootComponent_o *)folderBoardScrollView,
                                     (const MethodInfo *)v16);
  if ( !folderBoardScrollView )
    goto LABEL_96;
  v68 = (System_Collections_Generic_List_object__o *)folderBoardScrollView;
  if ( *(int *)(folderBoardScrollView + 24) >= 1 )
  {
    index = 0;
    v69 = 0;
    v70 = &UnityEngine_Vector3_TypeInfo;
    v137 = (System_Collections_Generic_List_object__o *)folderBoardScrollView;
    while ( 1 )
    {
      v71 = sub_2213CCC(GrandQuestClassSelectController___c__DisplayClass54_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v71, 0);
      if ( !v71 )
        break;
      *(_QWORD *)(v71 + 24) = this;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v71 + 24), (int32_t)this, v72, v73, v74, v75, v76, v77);
      folderBoardScrollView = (__int64)System_Collections_Generic_List_object___get_Item(
                                         v68,
                                         v69,
                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MapControl_WarInfo__get_Item__);
      if ( !folderBoardScrollView )
        break;
      folderBoardScrollView = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)folderBoardScrollView, 0);
      if ( !folderBoardScrollView )
        break;
      v78 = (WarEntity_o *)folderBoardScrollView;
      v16 = *(unsigned int *)(folderBoardScrollView + 16);
      folderBoardScrollView = (__int64)this->fields.warReleaseMaster;
      warId = v16;
      if ( !folderBoardScrollView )
        break;
      folderBoardScrollView = (__int64)WarReleaseMaster__GetOpenEntity(
                                         (WarReleaseMaster_o *)folderBoardScrollView,
                                         v16,
                                         0);
      resourceAssetBundle = this->fields.resourceAssetBundle;
      if ( !resourceAssetBundle )
        break;
      Contents_k__BackingField = resourceAssetBundle->fields._Contents_k__BackingField;
      if ( !Contents_k__BackingField )
        break;
      v81 = (WarReleaseEntity_o *)folderBoardScrollView;
      folderBoardScrollView = (__int64)*p_folderBoardWrapContent;
      if ( !*p_folderBoardWrapContent )
        break;
      GrandQuestFolderBoardPrefab_k__BackingField = (Il2CppObject *)Contents_k__BackingField->fields._GrandQuestFolderBoardPrefab_k__BackingField;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)folderBoardScrollView, 0);
      folderBoardScrollView = (__int64)BaseMonoBehaviour__createObject_object_(
                                         (BaseMonoBehaviour_o *)this,
                                         GrandQuestFolderBoardPrefab_k__BackingField,
                                         transform,
                                         0,
                                         (const MethodInfo_380F544 *)Method_BaseMonoBehaviour_createObject_GrandQuestFolderBoardComponent___);
      if ( !folderBoardScrollView )
        break;
      v84 = (UnityEngine_Object_o *)folderBoardScrollView;
      v85 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)folderBoardScrollView, 0);
      folderBoardScrollView = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !folderBoardScrollView )
        break;
      folderBoardScrollView = QuestTree__IsActiveWar((QuestTree_o *)folderBoardScrollView, warId, 0);
      p_closedDialogMessage = (System_String_o **)&StringLiteral_1/*""*/;
      if ( (folderBoardScrollView & 1) == 0 )
      {
        if ( v81 )
        {
          folderBoardScrollView = WarReleaseEntity__IsClose(v81, 0);
          p_closedDialogMessage = &v81->fields.closedDialogMessage;
          if ( (folderBoardScrollView & 1) == 0 )
            p_closedDialogMessage = (System_String_o **)&StringLiteral_1/*""*/;
        }
      }
      v87 = *p_closedDialogMessage;
      if ( !byte_5969AE5 )
      {
        folderBoardScrollView = sub_2213A60(v70);
        byte_5969AE5 = 1;
      }
      if ( !v85 )
        break;
      UnityEngine_Transform__set_localScale(v85, (*v70)->static_fields->oneVector, 0);
      folderBoardScrollView = (__int64)*p_folderBoardWrapContent;
      if ( !*p_folderBoardWrapContent )
        break;
      folderBoardScrollView = (__int64)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)folderBoardScrollView,
                                         0);
      if ( !folderBoardScrollView )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)folderBoardScrollView, 0);
      UnityEngine_Transform__set_localPosition(v85, localPosition, 0);
      v88 = System_Int32__ToString((int32_t)&warId, 0);
      v89 = System_String__Concat_75651716((System_String_o *)StringLiteral_18064/*"board_"*/, v88, 0);
      UnityEngine_Object__set_name(v84, v89, 0);
      folderBoardScrollView = (__int64)*p_folderBoardList;
      if ( !*p_folderBoardList )
        break;
      v96 = *(_QWORD *)(folderBoardScrollView + 16);
      v97 = Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__Add__;
      ++*(_DWORD *)(folderBoardScrollView + 28);
      if ( !v96 )
        break;
      v98 = *(int *)(folderBoardScrollView + 24);
      if ( (unsigned int)v98 >= *(_DWORD *)(v96 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)folderBoardScrollView,
          (Il2CppObject *)v84,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
      }
      else
      {
        v99 = v96 + 8 * v98;
        *(_DWORD *)(folderBoardScrollView + 24) = v98 + 1;
        *(_QWORD *)(v99 + 32) = v84;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v99 + 32), (int32_t)v84, v90, v91, v92, v93, v94, v95);
      }
      v16 = (unsigned int)warId;
      rootComponent = this->fields.rootComponent;
      *(_DWORD *)(v71 + 16) = v69;
      v102 = index;
      if ( (_DWORD)v16 == focusWarId )
        v102 = v69;
      index = v102;
      if ( !rootComponent )
        break;
      v103 = v70;
      SpotEntityByWarId = GrandQuestRootComponent__GetSpotEntityByWarId(
                            (GrandQuestRootComponent_o *)folderBoardScrollView,
                            v16,
                            v100);
      v107 = GrandQuestViewSwitcher_TypeInfo;
      v108 = SpotEntityByWarId;
      if ( !*(&GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo, v105, v106);
        v107 = GrandQuestViewSwitcher_TypeInfo;
      }
      DefaultGrandClassIconId = v107->static_fields->DefaultGrandClassIconId;
      if ( v108 && BlankEarthSpotEntity__GetGrandClassIconId(v108, -1, 0) >= 1 )
        DefaultGrandClassIconId = BlankEarthSpotEntity__GetGrandClassIconId(v108, -1, 0);
      v110 = *(_DWORD *)(v71 + 16);
      v111 = warId;
      PrioredName = WarEntity__GetPrioredName(v78, 0);
      v113 = (GrandQuestFolderBoardItem_o *)sub_2213CCC(GrandQuestFolderBoardItem_TypeInfo);
      GrandQuestFolderBoardItem___ctor(
        v113,
        v110,
        v114,
        v111,
        PrioredName,
        DefaultGrandClassIconId,
        listCreatedTime,
        v87,
        v136);
      v115 = this->fields.resourceAssetBundle;
      if ( !v115 )
        break;
      v116 = v115->fields._Contents_k__BackingField;
      p_folderBoardWrapContent = &this->fields.folderBoardWrapContent;
      if ( !v116 )
        break;
      BoardUiAtlasManagerUnit_k__BackingField = v116->fields._BoardUiAtlasManagerUnit_k__BackingField;
      v70 = v103;
      v118 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v118,
        (Il2CppObject *)v71,
        Method_GrandQuestClassSelectController___c__DisplayClass54_0__CreateBoardList_b__0__,
        0);
      GrandQuestFolderBoardComponent__SetBoardInfo(
        (GrandQuestFolderBoardComponent_o *)v84,
        v113,
        BoardUiAtlasManagerUnit_k__BackingField,
        v118,
        v119);
      folderBoardScrollView = (__int64)this->fields.sliderGrid;
      if ( !folderBoardScrollView )
        break;
      slideIndexPrefab = this->fields.slideIndexPrefab;
      v121 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)folderBoardScrollView, 0);
      folderBoardScrollView = (__int64)BaseMonoBehaviour__createObject(
                                         (BaseMonoBehaviour_o *)this,
                                         slideIndexPrefab,
                                         v121,
                                         0,
                                         0);
      v68 = v137;
      if ( !folderBoardScrollView )
        break;
      v122 = (UnityEngine_GameObject_o *)folderBoardScrollView;
      folderBoardScrollView = (__int64)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)folderBoardScrollView,
                                         0);
      v123 = (UnityEngine_Transform_o *)folderBoardScrollView;
      if ( !byte_5969AE5 )
      {
        folderBoardScrollView = sub_2213A60(v103);
        byte_5969AE5 = 1;
      }
      if ( !v123 )
        break;
      UnityEngine_Transform__set_localScale(v123, (*v103)->static_fields->oneVector, 0);
      folderBoardScrollView = UnityEngine_GameObject__TryGetComponent_object_(
                                v122,
                                &component,
                                (const MethodInfo_38B7F30 *)Method_UnityEngine_GameObject_TryGetComponent_SelectBannerSliderIcon___);
      if ( (folderBoardScrollView & 1) != 0 )
      {
        if ( !component )
          break;
        GrandQuestClassSelectController__SetImage(
          this,
          (UISprite_o *)component[2].monitor,
          (System_String_o *)StringLiteral_21573/*"img_slider_off"*/,
          v124);
        if ( !component )
          break;
        GrandQuestClassSelectController__SetImage(
          this,
          (UISprite_o *)component[2].klass,
          (System_String_o *)StringLiteral_21574/*"img_slider_on"*/,
          v125);
      }
      if ( ++v69 >= v137->fields._size )
        goto LABEL_80;
    }
LABEL_96:
    sub_2213CDC(folderBoardScrollView, v16);
  }
  index = 0;
LABEL_80:
  folderBoardScrollView = (__int64)*p_folderBoardWrapContent;
  if ( !*p_folderBoardWrapContent )
    goto LABEL_96;
  UIWrapContent__SortBasedOnScrollMovement((UIWrapContent_o *)folderBoardScrollView, 0);
  folderBoardScrollView = (__int64)*p_folderBoardWrapContent;
  if ( !*p_folderBoardWrapContent )
    goto LABEL_96;
  UIWrapContent__resetScroll((UIWrapContent_o *)folderBoardScrollView, 0);
  folderBoardScrollView = (__int64)*p_folderBoardWrapContent;
  if ( !*p_folderBoardWrapContent )
    goto LABEL_96;
  UIWrapContent__WrapContent((UIWrapContent_o *)folderBoardScrollView, 0);
  folderBoardScrollView = (__int64)*p_folderBoardList;
  if ( !*p_folderBoardList )
    goto LABEL_96;
  if ( *(int *)(folderBoardScrollView + 24) >= 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)folderBoardScrollView,
             index,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
    this->fields.currentFolderBoard = (struct GrandQuestFolderBoardComponent_o *)Item;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentFolderBoard,
      (int32_t)Item,
      v127,
      v128,
      v129,
      v130,
      v131,
      v132);
    GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(this, v133);
    GrandQuestClassSelectController__SetCurrentSelectButtonFrameActive(this, 1, v134);
  }
  folderBoardScrollView = (__int64)this->fields.upArrowBtn;
  if ( !folderBoardScrollView )
    goto LABEL_96;
  folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)folderBoardScrollView,
                                     0);
  if ( !*p_folderBoardList )
    goto LABEL_96;
  if ( !folderBoardScrollView )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)folderBoardScrollView,
    (*p_folderBoardList)->fields._size > 1,
    0);
  folderBoardScrollView = (__int64)this->fields.downArrowBtn;
  if ( !folderBoardScrollView )
    goto LABEL_96;
  folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)folderBoardScrollView,
                                     0);
  if ( !*p_folderBoardList )
    goto LABEL_96;
  if ( !folderBoardScrollView )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)folderBoardScrollView,
    (*p_folderBoardList)->fields._size > 1,
    0);
  folderBoardList = this->fields.folderBoardList;
  if ( !folderBoardList )
    goto LABEL_96;
  folderBoardScrollView = (__int64)this->fields.folderBoardScrollView;
  if ( !folderBoardScrollView )
    goto LABEL_96;
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)folderBoardScrollView,
    folderBoardList->fields._size > 1,
    0);
  folderBoardScrollView = (__int64)this->fields.sliderGrid;
  if ( !folderBoardScrollView )
    goto LABEL_96;
  UIGrid__set_repositionNow((UIGrid_o *)folderBoardScrollView, 1, 0);
}


GrandQuestFolderBoardComponent_o *GrandQuestClassSelectController__GetFolderBoardByWarId(
        GrandQuestClassSelectController_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o *folderBoardList; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_596B259 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Single_GrandQuestFolderBoardComponent___);
    sub_2213A60(&System_Func_GrandQuestFolderBoardComponent__bool__TypeInfo);
    sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass64_0__GetFolderBoardByWarId_b__0__);
    sub_2213A60(&GrandQuestClassSelectController___c__DisplayClass64_0_TypeInfo);
    byte_596B259 = 1;
  }
  v5 = sub_2213CCC(GrandQuestClassSelectController___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  folderBoardList = this->fields.folderBoardList;
  *(_DWORD *)(v5 + 16) = warId;
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GrandQuestFolderBoardComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_GrandQuestClassSelectController___c__DisplayClass64_0__GetFolderBoardByWarId_b__0__,
    0);
  return (GrandQuestFolderBoardComponent_o *)System_Linq_Enumerable__Single_object__59342384(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)folderBoardList,
                                               (System_Func_TSource__bool__o *)v9,
                                               (const MethodInfo_3897E30 *)Method_System_Linq_Enumerable_Single_GrandQuestFolderBoardComponent___);
}


SchedulerTaskBase_o *GrandQuestClassSelectController__GetTaskOfChangeClassTab(
        GrandQuestClassSelectController_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Func_bool__c *v14; // x0
  System_Func_bool__o *v15; // x21
  __int64 v16; // x19
  SchedulerTaskBase_TaskCallback_o *v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596B261 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&SchedulerTaskWaitWhile_TypeInfo);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass72_0__GetTaskOfChangeClassTab_b__0__);
    sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass72_0__GetTaskOfChangeClassTab_b__1__);
    sub_2213A60(&GrandQuestClassSelectController___c__DisplayClass72_0_TypeInfo);
    byte_596B261 = 1;
  }
  v5 = sub_2213CCC(GrandQuestClassSelectController___c__DisplayClass72_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = System_Func_bool__TypeInfo;
  *(_DWORD *)(v5 + 32) = classId;
  *(_BYTE *)(v5 + 16) = 1;
  v15 = (System_Func_bool__o *)sub_2213CCC(v14);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_GrandQuestClassSelectController___c__DisplayClass72_0__GetTaskOfChangeClassTab_b__0__,
    0);
  v16 = sub_2213CCC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v16, v15, 0);
  v17 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_GrandQuestClassSelectController___c__DisplayClass72_0__GetTaskOfChangeClassTab_b__1__,
    0);
  if ( !v16 )
LABEL_6:
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v16 + 24) = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 24), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  return (SchedulerTaskBase_o *)v16;
}


SchedulerTaskBase_o *GrandQuestClassSelectController__GetTaskOfRelease(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Func_bool__c *v12; // x0
  System_Func_bool__o *v13; // x21
  __int64 v14; // x20
  SchedulerTaskBase_TaskCallback_o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_596B25D & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&SchedulerTaskWaitWhile_TypeInfo);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass68_0__GetTaskOfRelease_b__0__);
    sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass68_0__GetTaskOfRelease_b__1__);
    sub_2213A60(&GrandQuestClassSelectController___c__DisplayClass68_0_TypeInfo);
    byte_596B25D = 1;
  }
  v3 = sub_2213CCC(GrandQuestClassSelectController___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_6;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = System_Func_bool__TypeInfo;
  *(_BYTE *)(v3 + 16) = 1;
  v13 = (System_Func_bool__o *)sub_2213CCC(v12);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v3,
    Method_GrandQuestClassSelectController___c__DisplayClass68_0__GetTaskOfRelease_b__0__,
    0);
  v14 = sub_2213CCC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v14, v13, 0);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v3,
    Method_GrandQuestClassSelectController___c__DisplayClass68_0__GetTaskOfRelease_b__1__,
    0);
  if ( !v14 )
LABEL_6:
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v14 + 24) = v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 24), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  return (SchedulerTaskBase_o *)v14;
}


SchedulerTaskBase_o *GrandQuestClassSelectController__GetTaskOfSlideInClassTab(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Func_bool__c *v12; // x0
  System_Func_bool__o *v13; // x21
  __int64 v14; // x20
  SchedulerTaskBase_TaskCallback_o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_596B25F & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&SchedulerTaskWaitWhile_TypeInfo);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass70_0__GetTaskOfSlideInClassTab_b__0__);
    sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass70_0__GetTaskOfSlideInClassTab_b__1__);
    sub_2213A60(&GrandQuestClassSelectController___c__DisplayClass70_0_TypeInfo);
    byte_596B25F = 1;
  }
  v3 = sub_2213CCC(GrandQuestClassSelectController___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_6;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = System_Func_bool__TypeInfo;
  *(_BYTE *)(v3 + 16) = 1;
  v13 = (System_Func_bool__o *)sub_2213CCC(v12);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v3,
    Method_GrandQuestClassSelectController___c__DisplayClass70_0__GetTaskOfSlideInClassTab_b__0__,
    0);
  v14 = sub_2213CCC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v14, v13, 0);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v3,
    Method_GrandQuestClassSelectController___c__DisplayClass70_0__GetTaskOfSlideInClassTab_b__1__,
    0);
  if ( !v14 )
LABEL_6:
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v14 + 24) = v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 24), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  return (SchedulerTaskBase_o *)v14;
}


void GrandQuestClassSelectController__Init(
        GrandQuestClassSelectController_o *this,
        GrandQuestRootComponent_o *grandQuestRoot,
        GrandQuestResourceCatalogAssetBundle_o *resourceCatalog,
        System_Action_bool__o *setTouchBlockAct,
        System_Action_int__o *selectClassAct,
        System_Action_int__o *changeClassAct,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x1
  __int64 v39; // x2
  Il2CppObject *Master_object; // x0
  struct WarReleaseMaster_o **p_warReleaseMaster; // x19
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x8

  if ( (byte_596B24C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596B24C = 1;
  }
  this->fields.rootComponent = grandQuestRoot;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rootComponent,
    (int32_t)grandQuestRoot,
    (System_String_o *)resourceCatalog,
    (System_String_o *)setTouchBlockAct,
    (int32_t)selectClassAct,
    (int32_t)changeClassAct,
    (bool)method,
    v7);
  this->fields.setTouchBlockAction = setTouchBlockAct;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setTouchBlockAction,
    (int32_t)setTouchBlockAct,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.selectClassAction = selectClassAct;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectClassAction,
    (int32_t)selectClassAct,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.changeClassAction = changeClassAct;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.changeClassAction,
    (int32_t)changeClassAct,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.resourceAssetBundle = resourceCatalog;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resourceAssetBundle,
    (int32_t)resourceCatalog,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38, v39);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  this->fields.warReleaseMaster = (struct WarReleaseMaster_o *)Master_object;
  p_warReleaseMaster = &this->fields.warReleaseMaster;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_warReleaseMaster,
    (int32_t)Master_object,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v50 = (__int64)*(p_warReleaseMaster - 21);
  *((_BYTE *)p_warReleaseMaster + 32) = 0;
  if ( !v50 )
    sub_2213CDC(v48, v49);
  *(_DWORD *)(v50 + 32) = 1106247680;
}


void GrandQuestClassSelectController__OnCenterOnChildFinishedFolderBoard(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  GrandQuestClassSelectController_o *v2; // x19
  struct UICenterOnChild_o *folderBoardCenterChild; // x8
  GrandQuestClassSelectController_o *v4; // x20
  System_Action_o *initBoardCenterCallback; // x0
  _BOOL4 v6; // w24
  int32_t selectButtonOptionInfoFrameSp; // w23
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w21
  GrandQuestClassSelectController_o *v15; // x22
  _BOOL4 v16; // w8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Action_bool__o *setTouchBlockAction; // x8
  int32_t currentMoveIdx; // w8
  const MethodInfo *v27; // x2
  UICenterOnChild_o *v28; // x20
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  struct System_Action_int__o *changeClassAction; // x20
  struct UISprite_o *selectClassSprite; // x8
  const MethodInfo *v34; // x2
  struct UICenterOnChild_o *v35; // x8

  v2 = this;
  if ( (byte_596B253 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_GrandQuestFolderBoardComponent___);
    this = (GrandQuestClassSelectController_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___);
    byte_596B253 = 1;
  }
  folderBoardCenterChild = v2->fields.folderBoardCenterChild;
  if ( !folderBoardCenterChild )
    goto LABEL_20;
  this = (GrandQuestClassSelectController_o *)folderBoardCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_20;
  this = (GrandQuestClassSelectController_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___);
  if ( !this )
    goto LABEL_20;
  v4 = this;
  initBoardCenterCallback = v2->fields.initBoardCenterCallback;
  v6 = initBoardCenterCallback || v2->fields.currentState == 0;
  selectButtonOptionInfoFrameSp = (int32_t)v4->fields.selectButtonOptionInfoFrameSp;
  ActionExtensions__Call(initBoardCenterCallback, 0);
  v2->fields.initBoardCenterCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.initBoardCenterCallback, 0, v8, v9, v10, v11, v12, v13);
  this = (GrandQuestClassSelectController_o *)v2->fields.sliderGrid;
  if ( !this )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    this = (GrandQuestClassSelectController_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_20;
    this = (GrandQuestClassSelectController_o *)UnityEngine_Transform__get_childCount(
                                                  (UnityEngine_Transform_o *)this,
                                                  0);
    if ( v14 >= (int)this )
      break;
    this = (GrandQuestClassSelectController_o *)v2->fields.sliderGrid;
    if ( this )
    {
      this = (GrandQuestClassSelectController_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
      if ( this )
      {
        this = (GrandQuestClassSelectController_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)this,
                                                      v14,
                                                      0);
        if ( this )
        {
          this = (GrandQuestClassSelectController_o *)UnityEngine_Component__GetComponentInChildren_object__58855044(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
          if ( this )
          {
            v15 = this;
            SelectBannerSliderIcon__setEnableOnImg((SelectBannerSliderIcon_o *)this, 0, 0);
            if ( selectButtonOptionInfoFrameSp == v14 )
              SelectBannerSliderIcon__setEnableOnImg((SelectBannerSliderIcon_o *)v15, 1, 0);
            this = (GrandQuestClassSelectController_o *)v2->fields.sliderGrid;
            ++v14;
            if ( this )
              continue;
          }
        }
      }
    }
    goto LABEL_20;
  }
  v16 = !v2->fields.isDragging && selectButtonOptionInfoFrameSp == v2->fields.currentMoveIdx;
  if ( !v16 && !v6 )
  {
    rootComponent = v2->fields.rootComponent;
    if ( rootComponent )
    {
      mTerminalScene = rootComponent->fields.mTerminalScene;
      if ( mTerminalScene )
      {
        this = (GrandQuestClassSelectController_o *)mTerminalScene->fields.mTitleInfo;
        if ( this )
        {
          TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0);
          MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
          setTouchBlockAction = v2->fields.setTouchBlockAction;
          if ( setTouchBlockAction )
            ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))setTouchBlockAction->fields.invoke_impl)(
              setTouchBlockAction->fields.method_code,
              0,
              setTouchBlockAction->fields.method);
          currentMoveIdx = v2->fields.currentMoveIdx;
          v2->fields.isDragging = 0;
          v2->fields.currentFolderBoard = (struct GrandQuestFolderBoardComponent_o *)v4;
          v2->fields.isMovePositiveIndex = currentMoveIdx < selectButtonOptionInfoFrameSp;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v2->fields.currentFolderBoard,
            (int32_t)v4,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          v2->fields.currentMoveIdx = selectButtonOptionInfoFrameSp;
          GrandQuestClassSelectController__SetCurrentSelectButtonFrameActive(v2, 1, v27);
          this = (GrandQuestClassSelectController_o *)v2->fields.folderBoardWrapContent;
          if ( this )
          {
            v28 = v2->fields.folderBoardCenterChild;
            this = (GrandQuestClassSelectController_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
            if ( this )
            {
              this = (GrandQuestClassSelectController_o *)UnityEngine_Transform__GetChild(
                                                            (UnityEngine_Transform_o *)this,
                                                            v2->fields.currentMoveIdx,
                                                            0);
              if ( v28 )
              {
                UICenterOnChild__CenterOn_56214248(v28, (UnityEngine_Transform_o *)this, 1, 0, 0);
                GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(v2, v29);
                this = (GrandQuestClassSelectController_o *)v2->fields.selectClassButton;
                if ( this )
                {
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
                  this = (GrandQuestClassSelectController_o *)v2->fields.rootComponent;
                  if ( this )
                  {
                    GrandQuestRootComponent__SetButtonEnabled((GrandQuestRootComponent_o *)this, 1, v30);
                    GrandQuestClassSelectController__SetEnabledArrowButtons(v2, 1, v31);
                    if ( !v2->fields.onClickMove )
                    {
                      this = (GrandQuestClassSelectController_o *)v2->fields.folderBoardWrapContent;
                      if ( !this )
                        goto LABEL_20;
                      changeClassAction = v2->fields.changeClassAction;
                      this = (GrandQuestClassSelectController_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
                      if ( !this )
                        goto LABEL_20;
                      this = (GrandQuestClassSelectController_o *)UnityEngine_Transform__GetChild(
                                                                    (UnityEngine_Transform_o *)this,
                                                                    v2->fields.currentMoveIdx,
                                                                    0);
                      if ( !this )
                        goto LABEL_20;
                      this = (GrandQuestClassSelectController_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)this,
                                                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_GrandQuestFolderBoardComponent___);
                      if ( !this )
                        goto LABEL_20;
                      selectClassSprite = this->fields.selectClassSprite;
                      if ( !selectClassSprite || !changeClassAction )
                        goto LABEL_20;
                      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))changeClassAction->fields.invoke_impl)(
                        changeClassAction->fields.method_code,
                        LODWORD(selectClassSprite->fields.mParent),
                        changeClassAction->fields.method);
                      GrandQuestClassSelectController__RefreshBoardListMaskDisplay(v2, v2->fields.currentMoveIdx, v34);
                    }
                    v35 = v2->fields.folderBoardCenterChild;
                    v2->fields.onClickMove = 0;
                    if ( v35 )
                    {
                      v35->fields.springStrength = 30.0;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_2213CDC(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestClassSelectController__OnClickBoard(
        GrandQuestClassSelectController_o *this,
        int32_t moveIdx,
        bool isPlaySe,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_596B257 & 1) == 0 )
  {
    sub_2213A60(&Method_GrandQuestClassSelectController_OnClickBoard__);
    byte_596B257 = 1;
  }
  if ( !this->fields.isTouchBoard && this->fields.currentMoveIdx != moveIdx )
  {
    if ( isPlaySe )
    {
      v7 = Method_GrandQuestClassSelectController_OnClickBoard__;
      if ( (*((_BYTE *)Method_GrandQuestClassSelectController_OnClickBoard__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_2213A78(Method_GrandQuestClassSelectController_OnClickBoard__);
      v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0, 0);
    }
    this->fields.isDragging = 1;
    GrandQuestClassSelectController__OnMoveBoardByClick(this, moveIdx, (const MethodInfo *)isPlaySe);
  }
}


void GrandQuestClassSelectController__OnClickChallengeButton(
        GrandQuestClassSelectController_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Action_int__o *selectClassAction; // x8

  if ( (byte_596B256 & 1) == 0 )
  {
    sub_2213A60(&Method_GrandQuestClassSelectController_OnClickChallengeButton__);
    byte_596B256 = 1;
  }
  if ( this->fields.selectClassAction )
  {
    v5 = Method_GrandQuestClassSelectController_OnClickChallengeButton__;
    if ( (*((_BYTE *)Method_GrandQuestClassSelectController_OnClickChallengeButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_GrandQuestClassSelectController_OnClickChallengeButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    selectClassAction = this->fields.selectClassAction;
    this->fields.isTouchBoard = 1;
    if ( !selectClassAction )
      sub_2213CDC(v7, v8);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))selectClassAction->fields.invoke_impl)(
      selectClassAction->fields.method_code,
      (unsigned int)warId,
      selectClassAction->fields.method);
  }
}


void GrandQuestClassSelectController__OnClickUpDownChangeBoard(
        GrandQuestClassSelectController_o *this,
        bool isUp,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  int32_t currentMoveIdx; // w8
  UnityEngine_Component_o *folderBoardWrapContent; // x0
  int v10; // w20
  const MethodInfo *v11; // x2
  float childCount; // s1
  float v13; // s0
  float v14; // s0
  int32_t v15; // w1

  if ( (byte_596B255 & 1) == 0 )
  {
    sub_2213A60(&Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__);
    byte_596B255 = 1;
  }
  if ( !this->fields.isDragging )
  {
    v5 = Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__;
    if ( (*((_BYTE *)Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0);
    currentMoveIdx = this->fields.currentMoveIdx;
    folderBoardWrapContent = (UnityEngine_Component_o *)this->fields.folderBoardWrapContent;
    if ( isUp )
      v10 = currentMoveIdx - 1;
    else
      v10 = currentMoveIdx + 1;
    if ( !folderBoardWrapContent
      || (folderBoardWrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                folderBoardWrapContent,
                                                                0)) == 0 )
    {
      sub_2213CDC(folderBoardWrapContent, v7);
    }
    childCount = (float)UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)folderBoardWrapContent, 0);
    v13 = (float)v10 - (float)(floorf((float)v10 / childCount) * childCount);
    if ( v13 <= childCount )
      childCount = v13;
    if ( v13 >= 0.0 )
      v14 = childCount;
    else
      v14 = 0.0;
    if ( v14 == INFINITY )
      v15 = 0x80000000;
    else
      v15 = (int)v14;
    GrandQuestClassSelectController__OnMoveBoardByClick(this, v15, v11);
  }
}


void GrandQuestClassSelectController__OnDragStarted(GrandQuestClassSelectController_o *this, const MethodInfo *method)
{
  struct UICenterOnChild_o *folderBoardCenterChild; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  GrandQuestClassSelectController_o *v4; // x19
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  folderBoardCenterChild = this->fields.folderBoardCenterChild;
  this->fields.onClickMove = 0;
  if ( !folderBoardCenterChild )
    goto LABEL_9;
  rootComponent = this->fields.rootComponent;
  v4 = this;
  folderBoardCenterChild->fields.springStrength = 30.0;
  if ( !rootComponent )
    goto LABEL_9;
  mTerminalScene = rootComponent->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_9;
  this = (GrandQuestClassSelectController_o *)mTerminalScene->fields.mTitleInfo;
  if ( !this )
    goto LABEL_9;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 0, 0);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  this = (GrandQuestClassSelectController_o *)v4->fields.folderBoardScrollView;
  if ( !this
    || (UIScrollView__DisableSpring((UIScrollView_o *)this, 0),
        v4->fields.isDragging = 1,
        GrandQuestClassSelectController__SetCurrentSelectButtonFrameActive(v4, 0, v6),
        (this = (GrandQuestClassSelectController_o *)v4->fields.selectClassButton) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0),
        (this = (GrandQuestClassSelectController_o *)v4->fields.rootComponent) == 0) )
  {
LABEL_9:
    sub_2213CDC(this, method);
  }
  GrandQuestRootComponent__SetButtonEnabled((GrandQuestRootComponent_o *)this, 0, v7);
}


void GrandQuestClassSelectController__OnMoveBoardByClick(
        GrandQuestClassSelectController_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  TitleInfoControl_o *mTitleInfo; // x0
  __int64 v6; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  struct System_Action_bool__o *setTouchBlockAction; // x8
  UnityEngine_Transform_o *v12; // x20
  struct GrandQuestFolderBoardComponent_o *Component_object; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct UICenterOnChild_o *folderBoardCenterChild; // x8
  struct GrandQuestFolderBoardItem_o *boardInfo; // x8
  struct System_Action_int__o *changeClassAction; // x9
  const MethodInfo *v23; // x1

  if ( (byte_596B258 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_GrandQuestFolderBoardComponent___);
    byte_596B258 = 1;
  }
  GrandQuestClassSelectController__SetCurrentSelectButtonFrameActive(this, 0, method);
  rootComponent = this->fields.rootComponent;
  this->fields.isMovePositiveIndex = this->fields.currentMoveIdx < moveIndex;
  if ( !rootComponent )
    goto LABEL_17;
  mTerminalScene = rootComponent->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_17;
  mTitleInfo = mTerminalScene->fields.mTitleInfo;
  if ( !mTitleInfo )
    goto LABEL_17;
  TitleInfoControl__setBackBtnColliderEnable(mTitleInfo, 0, 0);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  GrandQuestClassSelectController__SetEnabledArrowButtons(this, 0, v9);
  setTouchBlockAction = this->fields.setTouchBlockAction;
  if ( setTouchBlockAction )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))setTouchBlockAction->fields.invoke_impl)(
      setTouchBlockAction->fields.method_code,
      1,
      setTouchBlockAction->fields.method);
  GrandQuestClassSelectController__RefreshBoardListMaskDisplay(this, moveIndex, v10);
  mTitleInfo = (TitleInfoControl_o *)this->fields.folderBoardWrapContent;
  if ( !mTitleInfo )
    goto LABEL_17;
  mTitleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mTitleInfo, 0);
  if ( !mTitleInfo )
    goto LABEL_17;
  mTitleInfo = (TitleInfoControl_o *)UnityEngine_Transform__GetChild(
                                       (UnityEngine_Transform_o *)mTitleInfo,
                                       moveIndex,
                                       0);
  if ( !mTitleInfo )
    goto LABEL_17;
  v12 = (UnityEngine_Transform_o *)mTitleInfo;
  Component_object = (struct GrandQuestFolderBoardComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)mTitleInfo,
                                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_GrandQuestFolderBoardComponent___);
  this->fields.currentFolderBoard = Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentFolderBoard,
    (int32_t)Component_object,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  folderBoardCenterChild = this->fields.folderBoardCenterChild;
  this->fields.onClickMove = 1;
  if ( !folderBoardCenterChild
    || (folderBoardCenterChild->fields.springStrength = 6.0, !Component_object)
    || (boardInfo = Component_object->fields.boardInfo) == 0
    || (changeClassAction = this->fields.changeClassAction) == 0
    || (((void (__fastcall *)(intptr_t, _QWORD, intptr_t))changeClassAction->fields.invoke_impl)(
          changeClassAction->fields.method_code,
          (unsigned int)boardInfo->fields._WarId_k__BackingField,
          changeClassAction->fields.method),
        GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(this, v23),
        (mTitleInfo = (TitleInfoControl_o *)this->fields.folderBoardCenterChild) == 0) )
  {
LABEL_17:
    sub_2213CDC(mTitleInfo, v6);
  }
  UICenterOnChild__CenterOn_56214248((UICenterOnChild_o *)mTitleInfo, v12, 1, 0, 0);
}


void GrandQuestClassSelectController__Quit(GrandQuestClassSelectController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *folderBoardPanel; // x0
  UnityEngine_Transform_o *v4; // x20
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o *folderBoardList; // x8
  int32_t size; // w2
  int v8; // w9
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_596B25C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__Clear__);
    byte_596B25C = 1;
  }
  folderBoardPanel = this->fields.folderBoardPanel;
  if ( !folderBoardPanel )
    goto LABEL_12;
  folderBoardPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(folderBoardPanel, 0);
  v4 = (UnityEngine_Transform_o *)folderBoardPanel;
  if ( !byte_5969AE0 )
  {
    folderBoardPanel = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v4 )
    goto LABEL_12;
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  GrandQuestClassSelectController__ClearBoardList(this, v5);
  folderBoardList = this->fields.folderBoardList;
  this->fields.currentState = 0;
  if ( folderBoardList )
  {
    size = folderBoardList->fields._size;
    v8 = folderBoardList->fields._version + 1;
    folderBoardList->fields._size = 0;
    folderBoardList->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)folderBoardList->fields._items, 0, size, 0);
  }
  folderBoardPanel = (UnityEngine_GameObject_o *)this->fields.sliderGrid;
  if ( !folderBoardPanel )
LABEL_12:
    sub_2213CDC(folderBoardPanel, method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)folderBoardPanel, 0);
  TransformHelper__DestroyChildren(transform, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestClassSelectController__RefreshBoardListMaskDisplay(
        GrandQuestClassSelectController_o *this,
        int32_t selectedBoardIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *folderBoardList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  WarReleaseMaster_o *warReleaseMaster; // x0
  int v11; // w24
  WarReleaseEntity_o *OpenEntity; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596B254 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
    byte_596B254 = 1;
  }
  folderBoardList = (System_Collections_Generic_List_object__o *)this->fields.folderBoardList;
  memset(&v14, 0, sizeof(v14));
  if ( !folderBoardList )
    sub_2213CDC(0, *(_QWORD *)&selectedBoardIndex);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    folderBoardList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
  v14 = v13;
  v13.fields._list = 0;
  *(_QWORD *)&v13.fields._index = &v14;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__);
    if ( !v6 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_2213CDC(v6, v7);
    klass = v14.fields._current[8].klass;
    if ( !klass )
      sub_2213CDC(v6, v7);
    warReleaseMaster = this->fields.warReleaseMaster;
    if ( !warReleaseMaster )
      sub_2213CDC(0, v7);
    v11 = (int)v14.fields._current[9].klass;
    OpenEntity = WarReleaseMaster__GetOpenEntity(warReleaseMaster, (int32_t)klass->_1.klass, 0);
    if ( OpenEntity )
      LOBYTE(OpenEntity) = WarReleaseEntity__IsClose(OpenEntity, 0);
    BasicHelper__SetActiveSafely(
      (UnityEngine_Component_o *)current[5].monitor,
      (v11 != selectedBoardIndex) | (unsigned __int8)OpenEntity & 1,
      0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
}


void GrandQuestClassSelectController__Release(
        GrandQuestClassSelectController_o *this,
        System_Action_o *callback,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_GameObject_o *folderBoardPanel; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Action_o **v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UnityEngine_Transform_o *transform; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Transform_o *v26; // x20
  float v27; // s0
  System_Action_o *v28; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  SlideFadeObject_o *v33; // x19
  float OutPosOffsetX; // s9
  float EXIT_TIME; // s8
  System_Action_o *v36; // x21

  if ( (byte_596B25E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_2213A60(&GrandQuestClassSelectController_TypeInfo);
    sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass69_0__Release_b__0__);
    sub_2213A60(&GrandQuestClassSelectController___c__DisplayClass69_0_TypeInfo);
    byte_596B25E = 1;
  }
  v7 = sub_2213CCC(GrandQuestClassSelectController___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  v16 = (System_Action_o **)(v7 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v17, v18, v19, v20, v21, v22);
  folderBoardPanel = this->fields.folderBoardPanel;
  if ( !isQuick )
  {
    if ( folderBoardPanel )
    {
      gameObject = UnityEngine_GameObject__get_gameObject(folderBoardPanel, 0);
      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                           gameObject,
                           (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
      v33 = (SlideFadeObject_o *)Component_object;
      if ( !*(&GrandQuestClassSelectController_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo, v31, v32);
      OutPosOffsetX = GrandQuestClassSelectController__get_OutPosOffsetX((const MethodInfo *)Component_object);
      EXIT_TIME = GrandQuestClassSelectController_TypeInfo->static_fields->EXIT_TIME;
      v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v36,
        (Il2CppObject *)v7,
        Method_GrandQuestClassSelectController___c__DisplayClass69_0__Release_b__0__,
        0);
      if ( v33 )
      {
        SlideFadeObject__SlideOut_42907896(v33, OutPosOffsetX, EXIT_TIME, 0.0, v36, 0);
        return;
      }
    }
LABEL_14:
    sub_2213CDC(folderBoardPanel, v9);
  }
  if ( !folderBoardPanel )
    goto LABEL_14;
  transform = UnityEngine_GameObject__get_transform(folderBoardPanel, 0);
  v26 = transform;
  if ( !*(&GrandQuestClassSelectController_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo, v24, v25);
  v27 = GrandQuestClassSelectController__get_OutPosOffsetX((const MethodInfo *)transform);
  TransformHelper__SetLocalPositionX(v26, v27, 0);
  v28 = *v16;
  this->fields.currentState = 1;
  ActionExtensions__Call(v28, 0);
}


void GrandQuestClassSelectController__ResetOnClickMoveParam(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  struct UICenterOnChild_o *folderBoardCenterChild; // x8

  folderBoardCenterChild = this->fields.folderBoardCenterChild;
  this->fields.onClickMove = 0;
  if ( !folderBoardCenterChild )
    sub_2213CDC(this, method);
  folderBoardCenterChild->fields.springStrength = 30.0;
}


void GrandQuestClassSelectController__SetActiveSelectButtonOptionText(
        GrandQuestClassSelectController_o *this,
        bool isActive,
        const MethodInfo *method)
{
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.selectButtonOptionInfoLb, isActive, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.selectButtonOptionInfoFrameSp, isActive, 0);
}


void GrandQuestClassSelectController__SetBoardCenter(
        GrandQuestClassSelectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Component_o *folderBoardWrapContent; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UICenterOnChild_o *folderBoardCenterChild; // x20

  if ( (byte_596B25A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_FixedSpringPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B25A = 1;
  }
  folderBoardWrapContent = (UnityEngine_Component_o *)this->fields.folderBoardWrapContent;
  if ( !folderBoardWrapContent )
    goto LABEL_15;
  folderBoardWrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(folderBoardWrapContent, 0);
  if ( !folderBoardWrapContent )
    goto LABEL_15;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)folderBoardWrapContent, 0) >= 1 )
  {
    folderBoardWrapContent = (UnityEngine_Component_o *)this->fields.folderBoardScrollView;
    if ( !folderBoardWrapContent )
      goto LABEL_15;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         folderBoardWrapContent,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_FixedSpringPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      this->fields.initBoardCenterCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.initBoardCenterCallback,
        (int32_t)callback,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      folderBoardWrapContent = (UnityEngine_Component_o *)this->fields.folderBoardWrapContent;
      if ( folderBoardWrapContent )
      {
        folderBoardCenterChild = this->fields.folderBoardCenterChild;
        folderBoardWrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                              folderBoardWrapContent,
                                                              0);
        if ( folderBoardWrapContent )
        {
          folderBoardWrapContent = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                                (UnityEngine_Transform_o *)folderBoardWrapContent,
                                                                this->fields.currentMoveIdx,
                                                                0);
          if ( folderBoardCenterChild )
          {
            UICenterOnChild__CenterOn_56214248(
              folderBoardCenterChild,
              (UnityEngine_Transform_o *)folderBoardWrapContent,
              1,
              0,
              0);
            return;
          }
        }
      }
LABEL_15:
      sub_2213CDC(folderBoardWrapContent, callback);
    }
  }
  ActionExtensions__Call(callback, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestClassSelectController__SetButtonActive(
        GrandQuestClassSelectController_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *selectClassButton; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2

  selectClassButton = (UnityEngine_Component_o *)this->fields.selectClassButton;
  if ( !selectClassButton )
    goto LABEL_8;
  selectClassButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectClassButton, 0);
  if ( !selectClassButton )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectClassButton, isActive, 0);
  if ( isActive )
  {
    GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(this, v6);
  }
  else
  {
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.selectButtonOptionInfoLb, 0, 0);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.selectButtonOptionInfoFrameSp, 0, 0);
  }
  selectClassButton = (UnityEngine_Component_o *)this->fields.rootComponent;
  if ( !selectClassButton )
LABEL_8:
    sub_2213CDC(selectClassButton, isActive);
  GrandQuestRootComponent__SetButtonActive((GrandQuestRootComponent_o *)selectClassButton, isActive, v7);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestClassSelectController__SetClassTab(
        GrandQuestClassSelectController_o *this,
        int32_t classId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *folderBoardPanel; // x0
  UnityEngine_Transform_o *transform; // x20

  folderBoardPanel = this->fields.folderBoardPanel;
  if ( !folderBoardPanel )
    sub_2213CDC(0, *(_QWORD *)&classId);
  transform = UnityEngine_GameObject__get_transform(folderBoardPanel, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  TransformHelper__SetLocalPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  ActionExtensions__Call(callback, 0);
}


void GrandQuestClassSelectController__SetCurrentSelectButtonFrameActive(
        GrandQuestClassSelectController_o *this,
        bool isActive,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *folderBoardList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *currentFolderBoard; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  struct GrandQuestFolderBoardComponent_o *v13; // x8
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596B266 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B266 = 1;
  }
  folderBoardList = (System_Collections_Generic_List_object__o *)this->fields.folderBoardList;
  memset(&v14, 0, sizeof(v14));
  if ( folderBoardList && folderBoardList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      folderBoardList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v14,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__);
      if ( !v6 )
        break;
      if ( !v14.fields._current )
        sub_2213CDC(v6, v7);
      BasicHelper__SetActiveSafely(
        *(UnityEngine_Component_o **)((char *)&v14.fields._current->klass + (unsigned __int64)&qword_70),
        0,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
    if ( isActive )
    {
      currentFolderBoard = (UnityEngine_Object_o *)this->fields.currentFolderBoard;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      v11 = UnityEngine_Object__op_Equality(currentFolderBoard, 0, 0);
      if ( !v11 )
      {
        v13 = this->fields.currentFolderBoard;
        if ( !v13 )
          sub_2213CDC(v11, v12);
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v13->fields.selectedFrame, 1, 0);
      }
    }
  }
}


void GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *currentFolderBoard; // x20
  const MethodInfo *v5; // x2

  if ( (byte_596B264 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B264 = 1;
  }
  currentFolderBoard = (UnityEngine_Object_o *)this->fields.currentFolderBoard;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(currentFolderBoard, 0, 0) )
    GrandQuestClassSelectController__SetSelectButtonOptionText(this, this->fields.currentFolderBoard, v5);
}


void GrandQuestClassSelectController__SetDispPosition(
        GrandQuestClassSelectController_o *this,
        int32_t currentIdx,
        const MethodInfo *method)
{
  this->fields.currentMoveIdx = currentIdx;
  GrandQuestClassSelectController__RefreshBoardListMaskDisplay(this, currentIdx, method);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestClassSelectController__SetEnabledArrowButtons(
        GrandQuestClassSelectController_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *upArrowBtn; // x0

  upArrowBtn = (UnityEngine_Behaviour_o *)this->fields.upArrowBtn;
  if ( !upArrowBtn
    || (UnityEngine_Behaviour__set_enabled(upArrowBtn, isEnabled, 0),
        (upArrowBtn = (UnityEngine_Behaviour_o *)this->fields.downArrowBtn) == 0) )
  {
    sub_2213CDC(upArrowBtn, isEnabled);
  }
  UnityEngine_Behaviour__set_enabled(upArrowBtn, isEnabled, 0);
}


void GrandQuestClassSelectController__SetImage(
        GrandQuestClassSelectController_o *this,
        UISprite_o *uiSprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  struct GrandQuestResourceCatalogAssetBundle_o *resourceAssetBundle; // x8
  struct GrandQuestResourceContents_o *Contents_k__BackingField; // x8

  resourceAssetBundle = this->fields.resourceAssetBundle;
  if ( !resourceAssetBundle
    || (Contents_k__BackingField = resourceAssetBundle->fields._Contents_k__BackingField) == 0
    || (this = (GrandQuestClassSelectController_o *)Contents_k__BackingField->fields._BoardUiAtlasManagerUnit_k__BackingField) == 0
    || (this = (GrandQuestClassSelectController_o *)AtlasManagerUnit__SetUI(
                                                      (AtlasManagerUnit_o *)this,
                                                      uiSprite,
                                                      spriteName,
                                                      0),
        !uiSprite) )
  {
    sub_2213CDC(this, uiSprite);
  }
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))uiSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
    uiSprite,
    uiSprite->klass->vtable._33_MakePixelPerfect.method);
}


void GrandQuestClassSelectController__SetOnClickMoveParam(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  struct UICenterOnChild_o *folderBoardCenterChild; // x8

  folderBoardCenterChild = this->fields.folderBoardCenterChild;
  this->fields.onClickMove = 1;
  if ( !folderBoardCenterChild )
    sub_2213CDC(this, method);
  folderBoardCenterChild->fields.springStrength = 6.0;
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestClassSelectController__SetPositionByWarId(
        GrandQuestClassSelectController_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o *folderBoardList; // x8
  int size; // w22
  int32_t v7; // w21
  System_Collections_Generic_List_object__o *Item; // x0
  _DWORD *monitor; // x8
  GrandQuestClassSelectController_o *v10; // x0
  int32_t v11; // w1

  if ( (byte_596B262 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
    byte_596B262 = 1;
  }
  folderBoardList = this->fields.folderBoardList;
  if ( folderBoardList )
  {
    size = folderBoardList->fields._size;
    if ( size < 1 )
    {
LABEL_12:
      v10 = this;
      v11 = 0;
      this->fields.currentMoveIdx = 0;
LABEL_15:
      GrandQuestClassSelectController__RefreshBoardListMaskDisplay(v10, v11, method);
    }
    else
    {
      v7 = 0;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.folderBoardList;
        if ( !Item
          || (Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    Item,
                                                                    v7,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__)) == 0 )
        {
          sub_2213CDC(Item, *(_QWORD *)&warId);
        }
        monitor = Item[3].monitor;
        if ( !monitor )
          break;
        if ( warId < 1 || monitor[30] == warId )
        {
          v11 = Item[3].fields._size;
          v10 = this;
          this->fields.currentMoveIdx = v11;
          goto LABEL_15;
        }
        if ( size == ++v7 )
          goto LABEL_12;
      }
    }
  }
}


void GrandQuestClassSelectController__SetSelectButtonOptionText(
        GrandQuestClassSelectController_o *this,
        GrandQuestFolderBoardComponent_o *board,
        const MethodInfo *method)
{
  GrandQuestClassSelectController_o *v4; // x19
  struct System_Collections_Generic_List_GrandQuestFolderInformationText__o *mInfoTextList; // x8
  _BOOL4 v6; // w22
  GrandQuestBoardOptionTextComponent_o **p_selectButtonOptionInfoLb; // x21
  UISprite_o **p_selectButtonOptionInfoFrameSp; // x19
  UnityEngine_Component_o *selectButtonOptionInfoFrameSp; // t1
  const MethodInfo *v10; // x3

  v4 = this;
  if ( (byte_596B265 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__);
    this = (GrandQuestClassSelectController_o *)sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    byte_596B265 = 1;
  }
  if ( !board )
    goto LABEL_12;
  mInfoTextList = board->fields.mInfoTextList;
  if ( mInfoTextList )
    v6 = mInfoTextList->fields._size > 0;
  else
    v6 = 0;
  p_selectButtonOptionInfoLb = &v4->fields.selectButtonOptionInfoLb;
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v4->fields.selectButtonOptionInfoLb, v6, 0);
  selectButtonOptionInfoFrameSp = (UnityEngine_Component_o *)v4->fields.selectButtonOptionInfoFrameSp;
  p_selectButtonOptionInfoFrameSp = &v4->fields.selectButtonOptionInfoFrameSp;
  BasicHelper__SetActiveSafely(selectButtonOptionInfoFrameSp, v6, 0);
  if ( v6 )
  {
    this = (GrandQuestClassSelectController_o *)board->fields.mInfoTextList;
    if ( this )
    {
      this = (GrandQuestClassSelectController_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    0,
                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
      if ( this )
      {
        GrandQuestFolderInformationText__SetTime(
          (GrandQuestFolderInformationText_o *)this,
          p_selectButtonOptionInfoLb,
          p_selectButtonOptionInfoFrameSp,
          v10);
        return;
      }
    }
LABEL_12:
    sub_2213CDC(this, board);
  }
}


void GrandQuestClassSelectController__SetTouchBlock(
        GrandQuestClassSelectController_o *this,
        bool isBlock,
        const MethodInfo *method)
{
  struct System_Action_bool__o *setTouchBlockAction; // x8

  setTouchBlockAction = this->fields.setTouchBlockAction;
  if ( setTouchBlockAction )
    ((void (__fastcall *)(intptr_t, bool, intptr_t))setTouchBlockAction->fields.invoke_impl)(
      setTouchBlockAction->fields.method_code,
      isBlock,
      setTouchBlockAction->fields.method);
}


void GrandQuestClassSelectController__SetupBoardList(
        GrandQuestClassSelectController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  System_Action_o *v30; // x20
  const MethodInfo *v31; // x2

  if ( (byte_596B24D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass47_0__SetupBoardList_g__SetBoardCenterFunc_0__);
    sub_2213A60(&GrandQuestClassSelectController___c__DisplayClass47_0_TypeInfo);
    sub_2213A60(&StringLiteral_21517/*"img_questboard_selectbg"*/);
    sub_2213A60(&StringLiteral_18259/*"btn_grand_select"*/);
    sub_2213A60(&StringLiteral_21180/*"icon_grand_arrow"*/);
    byte_596B24D = 1;
  }
  v7 = sub_2213CCC(GrandQuestClassSelectController___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.upArrowSprite,
    (System_String_o *)StringLiteral_21180/*"icon_grand_arrow"*/,
    v22);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.downArrowSprite,
    (System_String_o *)StringLiteral_21180/*"icon_grand_arrow"*/,
    v23);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.selectedMark,
    (System_String_o *)StringLiteral_21517/*"img_questboard_selectbg"*/,
    v24);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.selectClassSprite,
    (System_String_o *)StringLiteral_18259/*"btn_grand_select"*/,
    v25);
  this->fields.currentState = 0;
  GrandQuestClassSelectController__SetCurrentSelectButtonFrameActive(this, 0, v26);
  GrandQuestClassSelectController__SetEnabledArrowButtons(this, 1, v27);
  GrandQuestClassSelectController__CreateBoardList(this, warId, v28);
  GrandQuestClassSelectController__SetPositionByWarId(this, warId, v29);
  v30 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v7,
    Method_GrandQuestClassSelectController___c__DisplayClass47_0__SetupBoardList_g__SetBoardCenterFunc_0__,
    0);
  GrandQuestClassSelectController__WaitCenterChildStart(this, v30, v31);
}


void GrandQuestClassSelectController__SlideInClassTab(
        GrandQuestClassSelectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *Component_object; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  __int64 v28; // x2
  GrandQuestClassSelectController_c *v29; // x0
  SlideFadeObject_o *v30; // x20
  float OutPosOffsetX; // s9
  float INTO_TIME; // s8
  System_Action_o *v33; // x21

  if ( (byte_596B260 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_2213A60(&GrandQuestClassSelectController_TypeInfo);
    sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass71_0__SlideInClassTab_b__0__);
    sub_2213A60(&GrandQuestClassSelectController___c__DisplayClass71_0_TypeInfo);
    byte_596B260 = 1;
  }
  v5 = sub_2213CCC(GrandQuestClassSelectController___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v14, v15, v16, v17, v18, v19);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.folderBoardPanel,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Component_object, v21, v22, v23, v24, v25, v26);
  v29 = GrandQuestClassSelectController_TypeInfo;
  v30 = *(SlideFadeObject_o **)(v5 + 16);
  if ( !*(&GrandQuestClassSelectController_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo, v27, v28);
  OutPosOffsetX = GrandQuestClassSelectController__get_OutPosOffsetX((const MethodInfo *)v29);
  INTO_TIME = GrandQuestClassSelectController_TypeInfo->static_fields->INTO_TIME;
  v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v5,
    Method_GrandQuestClassSelectController___c__DisplayClass71_0__SlideInClassTab_b__0__,
    0);
  if ( !v30 )
LABEL_8:
    sub_2213CDC(v6, v7);
  SlideFadeObject__SlideIn_42906952(v30, OutPosOffsetX, INTO_TIME, 0.0, v33, 0);
}


void GrandQuestClassSelectController__StartUp(
        GrandQuestClassSelectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  ActionExtensions__Call(callback, 0);
}


void GrandQuestClassSelectController__Update(GrandQuestClassSelectController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  float realtimeSinceStartup; // s0
  GrandQuestClassSelectController_c *v6; // x0
  float v7; // s8
  float mUpdateTimeOld; // s9
  UnityEngine_Component_o *selectClassButton; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_596B251 & 1) == 0 )
  {
    sub_2213A60(&GrandQuestClassSelectController_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B251 = 1;
  }
  if ( this->fields.currentState == 2 )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    v6 = GrandQuestClassSelectController_TypeInfo;
    v7 = realtimeSinceStartup;
    mUpdateTimeOld = this->fields.mUpdateTimeOld;
    if ( !*(&GrandQuestClassSelectController_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo, v3, v4);
      v6 = GrandQuestClassSelectController_TypeInfo;
    }
    if ( (float)(v7 - mUpdateTimeOld) >= v6->static_fields->UpdateInfoTimeInterval )
    {
      selectClassButton = (UnityEngine_Component_o *)this->fields.selectClassButton;
      if ( selectClassButton )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(selectClassButton, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
        if ( !UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
          goto LABEL_15;
        selectClassButton = (UnityEngine_Component_o *)this->fields.selectClassButton;
        if ( selectClassButton )
        {
          selectClassButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectClassButton, 0);
          if ( selectClassButton )
          {
            if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)selectClassButton, 0) )
              return;
LABEL_15:
            this->fields.mUpdateTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
            GrandQuestClassSelectController__UpdateBoardInfo(this, v13);
            GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(this, v14);
            return;
          }
        }
      }
      sub_2213CDC(selectClassButton, v3);
    }
  }
}


void GrandQuestClassSelectController__UpdateBoardInfo(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *folderBoardList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596B263 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B263 = 1;
  }
  folderBoardList = (System_Collections_Generic_List_object__o *)this->fields.folderBoardList;
  memset(&v9, 0, sizeof(v9));
  if ( folderBoardList && folderBoardList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      folderBoardList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__) )
    {
      current = v9.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
      v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
      if ( v7 )
        break;
      if ( !current )
        sub_2213CDC(v7, v8);
      GrandQuestFolderBoardComponent__UpdateInfoText((GrandQuestFolderBoardComponent_o *)current, v8);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
  }
}


void GrandQuestClassSelectController__WaitCenterChildStart(
        GrandQuestClassSelectController_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *folderBoardCenterChild; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UICenterOnChild_o *v8; // x0
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_596B24F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B24F = 1;
  }
  folderBoardCenterChild = (UnityEngine_Object_o *)this->fields.folderBoardCenterChild;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endCallback, method);
  if ( !UnityEngine_Object__op_Inequality(folderBoardCenterChild, 0, 0) )
    goto LABEL_9;
  v8 = this->fields.folderBoardCenterChild;
  if ( !v8 )
    sub_2213CDC(0, v6);
  if ( UICenterOnChild__ExistScrollView(v8, 0) )
  {
    ActionExtensions__Call(endCallback, 0);
  }
  else
  {
LABEL_9:
    v9 = GrandQuestClassSelectController__CoWaitUntilCenterChildStart(this, endCallback, v7);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v9, 0);
  }
}


void GrandQuestClassSelectController___Awake_b__45_0(GrandQuestClassSelectController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  GrandQuestClassSelectController__OnClickUpDownChangeBoard(this, 1, v2);
}


void GrandQuestClassSelectController___Awake_b__45_1(GrandQuestClassSelectController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  GrandQuestClassSelectController__OnClickUpDownChangeBoard(this, 0, v2);
}


void GrandQuestClassSelectController___Awake_b__45_2(GrandQuestClassSelectController_o *this, const MethodInfo *method)
{
  GrandQuestClassSelectController_o *v2; // x19
  struct UICenterOnChild_o *folderBoardCenterChild; // x8
  const MethodInfo *v4; // x2
  struct UISprite_o *selectClassSprite; // x8

  v2 = this;
  if ( (byte_596B268 & 1) == 0 )
  {
    this = (GrandQuestClassSelectController_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___);
    byte_596B268 = 1;
  }
  folderBoardCenterChild = v2->fields.folderBoardCenterChild;
  if ( !folderBoardCenterChild
    || (this = (GrandQuestClassSelectController_o *)folderBoardCenterChild->fields.mCenteredObject) == 0
    || (this = (GrandQuestClassSelectController_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___)) == 0
    || (selectClassSprite = this->fields.selectClassSprite) == 0 )
  {
    sub_2213CDC(this, method);
  }
  GrandQuestClassSelectController__OnClickChallengeButton(v2, (int32_t)selectClassSprite->fields.mParent, v4);
}


bool GrandQuestClassSelectController___CoWaitUntilBoardInit_b__49_0(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *currentFolderBoard; // x20
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *folderBoardList; // x0

  if ( (byte_596B269 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B269 = 1;
  }
  currentFolderBoard = (UnityEngine_Object_o *)this->fields.currentFolderBoard;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(currentFolderBoard, 0, 0) )
    return 1;
  folderBoardList = (System_Collections_Generic_List_object__o *)this->fields.folderBoardList;
  if ( !folderBoardList )
    goto LABEL_12;
  if ( folderBoardList->fields._size < 1 )
    return 1;
  folderBoardList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   folderBoardList,
                                                                   0,
                                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
  if ( !folderBoardList )
LABEL_12:
    sub_2213CDC(folderBoardList, v5);
  return !GrandQuestFolderBoardComponent__ExistBoardImage((GrandQuestFolderBoardComponent_o *)folderBoardList, v5);
}


bool GrandQuestClassSelectController___CoWaitUntilCenterChildStart_b__51_0(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *folderBoardCenterChild; // x20
  __int64 v5; // x1
  UICenterOnChild_o *v7; // x0

  if ( (byte_596B26A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B26A = 1;
  }
  folderBoardCenterChild = (UnityEngine_Object_o *)this->fields.folderBoardCenterChild;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(folderBoardCenterChild, 0, 0) )
  {
    return 1;
  }
  else
  {
    v7 = this->fields.folderBoardCenterChild;
    if ( !v7 )
      sub_2213CDC(0, v5);
    return !UICenterOnChild__ExistScrollView(v7, 0);
  }
}


int32_t GrandQuestClassSelectController__get_CurrentState(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  return this->fields.currentState;
}


bool GrandQuestClassSelectController__get_IsMovePositiveIndex(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  return this->fields.isMovePositiveIndex;
}


float GrandQuestClassSelectController__get_OutPosOffsetX(const MethodInfo *method)
{
  int32_t width; // w19
  float v2; // s0

  width = UnityEngine_Screen__get_width(0);
  v2 = (float)width / (float)UnityEngine_Screen__get_height(0);
  if ( v2 >= 1.7778 )
    return -800.0 - (float)((float)(v2 * 576.0) + -1024.0);
  else
    return -800.0;
}


void GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49___ctor(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49__MoveNext(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w22
  System_Action_o *endCallback; // x0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitWhile_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596B26F & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_GrandQuestClassSelectController__CoWaitUntilBoardInit_b__49_0__);
    sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    byte_596B26F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      endCallback = this->fields.endCallback;
      this->fields.__1__state = -1;
      ActionExtensions__Call(endCallback, 0);
    }
  }
  else
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_GrandQuestClassSelectController__CoWaitUntilBoardInit_b__49_0__, 0);
    v7 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v7, v6, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    this->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49__System_Collections_IEnumerator_Reset(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49__System_Collections_IEnumerator_get_Current(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49__System_IDisposable_Dispose(
        GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49_o *this,
        const MethodInfo *method)
{
  ;
}


void GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51___ctor(
        GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51__MoveNext(
        GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w22
  System_Action_o *endCallback; // x0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitWhile_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596B270 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_GrandQuestClassSelectController__CoWaitUntilCenterChildStart_b__51_0__);
    sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    byte_596B270 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      endCallback = this->fields.endCallback;
      this->fields.__1__state = -1;
      ActionExtensions__Call(endCallback, 0);
    }
  }
  else
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v6,
      _4__this,
      Method_GrandQuestClassSelectController__CoWaitUntilCenterChildStart_b__51_0__,
      0);
    v7 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v7, v6, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    this->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51__System_Collections_IEnumerator_Reset(
        GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51__System_Collections_IEnumerator_get_Current(
        GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51__System_IDisposable_Dispose(
        GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51_o *this,
        const MethodInfo *method)
{
  ;
}


void GrandQuestClassSelectController___c__DisplayClass47_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestClassSelectController___c__DisplayClass47_0___SetupBoardList_b__1(
        GrandQuestClassSelectController___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v4; // x1

  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  v4 = GrandQuestClassSelectController__CoWaitUntilBoardInit(this->fields.__4__this, this->fields.callback, v2);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756(_4__this, v4, 0);
}


void GrandQuestClassSelectController___c__DisplayClass47_0___SetupBoardList_g__SetBoardCenterFunc_0(
        GrandQuestClassSelectController___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  GrandQuestClassSelectController_o *klass; // x20
  System_Action_o *v4; // x21
  const MethodInfo *v5; // x2

  v2 = (Il2CppObject *)this;
  if ( (byte_596B26B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (GrandQuestClassSelectController___c__DisplayClass47_0_o *)sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass47_0__SetupBoardList_b__1__);
    byte_596B26B = 1;
  }
  klass = (GrandQuestClassSelectController_o *)v2[1].klass;
  if ( !klass )
    sub_2213CDC(this, method);
  klass->fields.currentState = 2;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, v2, Method_GrandQuestClassSelectController___c__DisplayClass47_0__SetupBoardList_b__1__, 0);
  GrandQuestClassSelectController__SetBoardCenter(klass, v4, v5);
}


void GrandQuestClassSelectController___c__DisplayClass54_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestClassSelectController___c__DisplayClass54_0___CreateBoardList_b__0(
        GrandQuestClassSelectController___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  GrandQuestClassSelectController__OnClickBoard(this->fields.__4__this, this->fields.index, 1, v2);
}


void GrandQuestClassSelectController___c__DisplayClass64_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestClassSelectController___c__DisplayClass64_0___GetFolderBoardByWarId_b__0(
        GrandQuestClassSelectController___c__DisplayClass64_0_o *this,
        GrandQuestFolderBoardComponent_o *x,
        const MethodInfo *method)
{
  struct GrandQuestFolderBoardItem_o *boardInfo; // x8

  if ( !x || (boardInfo = x->fields.boardInfo) == 0 )
    sub_2213CDC(this, x);
  return boardInfo->fields._WarId_k__BackingField == this->fields.warId;
}


void GrandQuestClassSelectController___c__DisplayClass68_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestClassSelectController___c__DisplayClass68_0___GetTaskOfRelease_b__0(
        GrandQuestClassSelectController___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotReleased;
}


void GrandQuestClassSelectController___c__DisplayClass68_0___GetTaskOfRelease_b__1(
        GrandQuestClassSelectController___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestClassSelectController___c__DisplayClass68_0_o *v3; // x19
  System_Action_o *_9__2; // x22
  GrandQuestClassSelectController_o *_4__this; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = this;
  if ( (byte_596B26C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (GrandQuestClassSelectController___c__DisplayClass68_0_o *)sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass68_0__GetTaskOfRelease_b__2__);
    byte_596B26C = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestClassSelectController___c__DisplayClass68_0__GetTaskOfRelease_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_2213CDC(this, method);
  GrandQuestClassSelectController__Release(_4__this, _9__2, 0, v2);
}


void GrandQuestClassSelectController___c__DisplayClass68_0___GetTaskOfRelease_b__2(
        GrandQuestClassSelectController___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  this->fields.isNotReleased = 0;
}


void GrandQuestClassSelectController___c__DisplayClass69_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestClassSelectController___c__DisplayClass69_0___Release_b__0(
        GrandQuestClassSelectController___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  struct GrandQuestClassSelectController_o *_4__this; // x8
  System_Action_o *callback; // x0
  struct GrandQuestClassSelectController_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (callback = this->fields.callback,
        _4__this->fields.isTouchBoard = 0,
        ActionExtensions__Call(callback, 0),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, method);
  }
  v5->fields.currentState = 1;
}


void GrandQuestClassSelectController___c__DisplayClass70_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestClassSelectController___c__DisplayClass70_0___GetTaskOfSlideInClassTab_b__0(
        GrandQuestClassSelectController___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isTabChange;
}


void GrandQuestClassSelectController___c__DisplayClass70_0___GetTaskOfSlideInClassTab_b__1(
        GrandQuestClassSelectController___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GrandQuestClassSelectController___c__DisplayClass70_0_o *v3; // x19
  System_Action_o *_9__2; // x22
  GrandQuestClassSelectController_o *_4__this; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = this;
  if ( (byte_596B26D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (GrandQuestClassSelectController___c__DisplayClass70_0_o *)sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass70_0__GetTaskOfSlideInClassTab_b__2__);
    byte_596B26D = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestClassSelectController___c__DisplayClass70_0__GetTaskOfSlideInClassTab_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_2213CDC(this, method);
  GrandQuestClassSelectController__SlideInClassTab(_4__this, _9__2, v2);
}


void GrandQuestClassSelectController___c__DisplayClass70_0___GetTaskOfSlideInClassTab_b__2(
        GrandQuestClassSelectController___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  this->fields.isTabChange = 0;
}


void GrandQuestClassSelectController___c__DisplayClass71_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestClassSelectController___c__DisplayClass71_0___SlideInClassTab_b__0(
        GrandQuestClassSelectController___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  SlideFadeObject_o *sfo; // x0
  struct GrandQuestClassSelectController_o *_4__this; // x8

  sfo = this->fields.sfo;
  if ( !sfo
    || (SlideFadeObject__ResetPosition(sfo, 0),
        ActionExtensions__Call(this->fields.callback, 0),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_2213CDC(sfo, method);
  }
  _4__this->fields.currentState = 2;
}


void GrandQuestClassSelectController___c__DisplayClass72_0___ctor(
        GrandQuestClassSelectController___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestClassSelectController___c__DisplayClass72_0___GetTaskOfChangeClassTab_b__0(
        GrandQuestClassSelectController___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isTabChange;
}


void GrandQuestClassSelectController___c__DisplayClass72_0___GetTaskOfChangeClassTab_b__1(
        GrandQuestClassSelectController___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestClassSelectController___c__DisplayClass72_0_o *v3; // x19
  System_Action_o *_9__2; // x22
  GrandQuestClassSelectController_o *_4__this; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = this;
  if ( (byte_596B26E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (GrandQuestClassSelectController___c__DisplayClass72_0_o *)sub_2213A60(&Method_GrandQuestClassSelectController___c__DisplayClass72_0__GetTaskOfChangeClassTab_b__2__);
    byte_596B26E = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestClassSelectController___c__DisplayClass72_0__GetTaskOfChangeClassTab_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_2213CDC(this, method);
  GrandQuestClassSelectController__SetClassTab(_4__this, (int32_t)method, _9__2, v2);
}


void GrandQuestClassSelectController___c__DisplayClass72_0___GetTaskOfChangeClassTab_b__2(
        GrandQuestClassSelectController___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  this->fields.isTabChange = 0;
}