void GrandQuestClassSelectController___cctor(const MethodInfo *method)
{
  struct GrandQuestClassSelectController_StaticFields *static_fields; // x8

  if ( (byte_4D273EB & 1) == 0 )
  {
    sub_1C94098(&GrandQuestClassSelectController_TypeInfo);
    byte_4D273EB = 1;
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
  void *monitor; // x8
  System_Collections_Generic_List_EventDelegate__o *v7; // x20
  EventDelegate_Callback_o *v8; // x21
  void *v9; // x8
  System_Collections_Generic_List_EventDelegate__o *v10; // x20
  EventDelegate_Callback_o *v11; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4D273CF & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&EventDelegate_TypeInfo);
    sub_1C94098(&Method_GrandQuestClassSelectController__Awake_b__45_0__);
    sub_1C94098(&Method_GrandQuestClassSelectController__Awake_b__45_1__);
    this = (GrandQuestClassSelectController_o *)sub_1C94098(&Method_GrandQuestClassSelectController__Awake_b__45_2__);
    byte_4D273CF = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    goto LABEL_9;
  typeHierarchy = (System_Collections_Generic_List_EventDelegate__o *)klass->_2.typeHierarchy;
  v5 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v5, v2, Method_GrandQuestClassSelectController__Awake_b__45_0__, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  this = (GrandQuestClassSelectController_o *)EventDelegate__Add(typeHierarchy, v5, 0);
  monitor = v2[4].monitor;
  if ( !monitor
    || (v7 = (System_Collections_Generic_List_EventDelegate__o *)*((_QWORD *)monitor + 25),
        v8 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v8, v2, Method_GrandQuestClassSelectController__Awake_b__45_1__, 0),
        this = (GrandQuestClassSelectController_o *)EventDelegate__Add(v7, v8, 0),
        (v9 = v2[7].monitor) == 0) )
  {
LABEL_9:
    sub_1C942F0(this, method);
  }
  v10 = (System_Collections_Generic_List_EventDelegate__o *)*((_QWORD *)v9 + 25);
  v11 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v11, v2, Method_GrandQuestClassSelectController__Awake_b__45_2__, 0);
  EventDelegate__Add(v10, v11, 0);
}


void GrandQuestClassSelectController__ClearBoardList(GrandQuestClassSelectController_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *folderBoardWrapContent; // x0
  int32_t childCount; // w0
  int v5; // w22
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4D273DF & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D273DF = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(v6, 0);
      if ( --v5 <= 1 )
        goto LABEL_14;
    }
LABEL_17:
    sub_1C942F0(folderBoardWrapContent, method);
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

  if ( (byte_4D273D2 & 1) == 0 )
  {
    sub_1C94098(&GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49_TypeInfo);
    byte_4D273D2 = 1;
  }
  v5 = sub_1C942E4(GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1C9403C(v5 + 40, endCallback);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *GrandQuestClassSelectController__CoWaitUntilCenterChildStart(
        GrandQuestClassSelectController_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4D273D4 & 1) == 0 )
  {
    sub_1C94098(&GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51_TypeInfo);
    byte_4D273D4 = 1;
  }
  v5 = sub_1C942E4(GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1C9403C(v5 + 40, endCallback);
  return (System_Collections_IEnumerator_o *)v5;
}


void GrandQuestClassSelectController__CreateBoardList(
        GrandQuestClassSelectController_o *this,
        int32_t focusWarId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  UnityEngine_Object_o *folderBoardWrapContent; // x20
  struct UIWrapContent_o **p_folderBoardWrapContent; // x25
  unsigned __int64 v7; // x1
  __int64 folderBoardScrollView; // x0
  Il2CppObject *v9; // x0
  struct UICenterOnChild_o **p_folderBoardCenterChild; // x20
  UnityEngine_Object_o *folderBoardCenterChild; // x21
  Il2CppObject *v12; // x0
  struct UICenterOnChild_o *v13; // x20
  _QWORD *p_onFinished; // x20
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v16; // x23
  System_Delegate_o *v17; // x0
  System_Delegate_o *v18; // x8
  SpringPanel_OnFinished_c *v19; // x1
  struct UIScrollView_o *v20; // x20
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v22; // x23
  System_Delegate_o *v23; // x0
  UIScrollView_OnDragNotification_c *v24; // x1
  System_Collections_Generic_List_object__o *v25; // x22
  UnityEngine_Transform_o *v26; // x27
  int32_t v27; // w26
  __int64 v28; // x28
  WarEntity_o *v29; // x29
  struct GrandQuestResourceCatalogAssetBundle_o *resourceAssetBundle; // x8
  struct GrandQuestResourceContents_o *Contents_k__BackingField; // x8
  WarReleaseEntity_o *v32; // x23
  Il2CppObject *GrandQuestFolderBoardPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v35; // x20
  UnityEngine_Transform_o *v36; // x21
  System_String_o **p_closedDialogMessage; // x8
  System_String_o *v38; // x19
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  const MethodInfo *v45; // x2
  int32_t v46; // w9
  UnityEngine_Transform_o *v47; // x24
  BlankEarthSpotEntity_o *SpotEntityByWarId; // x0
  GrandQuestViewSwitcher_c *v49; // x8
  BlankEarthSpotEntity_o *v50; // x27
  int32_t DefaultGrandClassIconId; // w21
  int32_t v52; // w27
  int32_t bannerId; // w22
  int32_t v54; // w25
  System_String_o *PrioredName; // x23
  GrandQuestFolderBoardItem_o *v56; // x29
  struct GrandQuestResourceCatalogAssetBundle_o *v57; // x8
  struct GrandQuestResourceContents_o *v58; // x8
  AtlasManagerUnit_o *BoardUiAtlasManagerUnit_k__BackingField; // x21
  System_Action_o *v60; // x22
  const MethodInfo *v61; // x4
  UnityEngine_GameObject_o *slideIndexPrefab; // x20
  UnityEngine_Transform_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x20
  UnityEngine_Transform_o *v65; // x21
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x3
  Il2CppObject *Item; // x0
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x2
  struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o *folderBoardList; // x8
  const MethodInfo *v72; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v73; // [xsp+8h] [xbp-A8h]
  struct UIWrapContent_o **v74; // [xsp+10h] [xbp-A0h]
  int64_t listCreatedTime; // [xsp+18h] [xbp-98h]
  struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o **p_folderBoardList; // [xsp+28h] [xbp-88h]
  GrandQuestClassSelectController_o *v78; // [xsp+30h] [xbp-80h]
  int32_t index; // [xsp+3Ch] [xbp-74h]
  Il2CppObject *component; // [xsp+40h] [xbp-70h] BYREF
  int32_t warId; // [xsp+4Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D273D6 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BaseMonoBehaviour_createObject_GrandQuestFolderBoardComponent___);
    sub_1C94098(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_1C94098(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    sub_1C94098(&Method_UnityEngine_GameObject_TryGetComponent_SelectBannerSliderIcon___);
    sub_1C94098(&Method_GrandQuestClassSelectController_OnCenterOnChildFinishedFolderBoard__);
    sub_1C94098(&Method_GrandQuestClassSelectController_OnDragStarted__);
    sub_1C94098(&GrandQuestFolderBoardItem_TypeInfo);
    sub_1C94098(&GrandQuestViewSwitcher_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_WarInfo__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_WarInfo__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_GrandQuestFolderBoardComponent__TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UIScrollView_OnDragNotification_TypeInfo);
    sub_1C94098(&SpringPanel_OnFinished_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass54_0__CreateBoardList_b__0__);
    sub_1C94098(&GrandQuestClassSelectController___c__DisplayClass54_0_TypeInfo);
    sub_1C94098(&StringLiteral_20757/*"img_slider_on"*/);
    sub_1C94098(&StringLiteral_17406/*"board_"*/);
    sub_1C94098(&StringLiteral_20756/*"img_slider_off"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D273D6 = 1;
  }
  warId = 0;
  component = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  listCreatedTime = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GrandQuestFolderBoardComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent___ctor__);
  this->fields.folderBoardList = (struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o *)v4;
  p_folderBoardList = &this->fields.folderBoardList;
  sub_1C9403C(&this->fields.folderBoardList, v4);
  p_folderBoardWrapContent = &this->fields.folderBoardWrapContent;
  folderBoardWrapContent = (UnityEngine_Object_o *)this->fields.folderBoardWrapContent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(folderBoardWrapContent, 0, 0) )
  {
    folderBoardScrollView = (__int64)this->fields.folderBoardScrollView;
    if ( !folderBoardScrollView )
      goto LABEL_98;
    folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)folderBoardScrollView,
                                       0);
    if ( !folderBoardScrollView )
      goto LABEL_98;
    v9 = UnityEngine_GameObject__AddComponent_object_(
           (UnityEngine_GameObject_o *)folderBoardScrollView,
           (const MethodInfo_31F46A8 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    *p_folderBoardWrapContent = (struct UIWrapContent_o *)v9;
    sub_1C9403C(&this->fields.folderBoardWrapContent, v9);
  }
  p_folderBoardCenterChild = &this->fields.folderBoardCenterChild;
  folderBoardCenterChild = (UnityEngine_Object_o *)this->fields.folderBoardCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(folderBoardCenterChild, 0, 0) )
  {
    folderBoardScrollView = (__int64)*p_folderBoardWrapContent;
    if ( !*p_folderBoardWrapContent )
      goto LABEL_98;
    folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)folderBoardScrollView,
                                       0);
    if ( !folderBoardScrollView )
      goto LABEL_98;
    v12 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)folderBoardScrollView,
            (const MethodInfo_31F46A8 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_folderBoardCenterChild = (struct UICenterOnChild_o *)v12;
    sub_1C9403C(&this->fields.folderBoardCenterChild, v12);
  }
  folderBoardScrollView = (__int64)*p_folderBoardCenterChild;
  if ( !*p_folderBoardCenterChild )
    goto LABEL_98;
  *(_QWORD *)(folderBoardScrollView + 40) = 0;
  folderBoardScrollView = sub_1C9403C(folderBoardScrollView + 40, 0);
  v13 = *p_folderBoardCenterChild;
  if ( !v13 )
    goto LABEL_98;
  onFinished = (System_Delegate_o *)v13->fields.onFinished;
  p_onFinished = &v13->fields.onFinished;
  v16 = (SpringPanel_OnFinished_o *)sub_1C942E4(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(
    v16,
    (Il2CppObject *)this,
    Method_GrandQuestClassSelectController_OnCenterOnChildFinishedFolderBoard__,
    0);
  v17 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v16, 0);
  v18 = v17;
  if ( v17 )
  {
    v19 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v17->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_29;
    *p_onFinished = v17;
    if ( (SpringPanel_OnFinished_c *)v17->klass != v19 )
      goto LABEL_29;
  }
  else
  {
    *p_onFinished = 0;
  }
  sub_1C9403C(p_onFinished, v17);
  folderBoardScrollView = (__int64)this->fields.folderBoardScrollView;
  if ( !folderBoardScrollView )
    goto LABEL_98;
  *(_QWORD *)(folderBoardScrollView + 88) = 0;
  folderBoardScrollView = sub_1C9403C(folderBoardScrollView + 88, 0);
  v20 = this->fields.folderBoardScrollView;
  if ( !v20 )
    goto LABEL_98;
  onDragStarted = (System_Delegate_o *)v20->fields.onDragStarted;
  p_onFinished = &v20->fields.onDragStarted;
  v22 = (UIScrollView_OnDragNotification_o *)sub_1C942E4(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(
    v22,
    (Il2CppObject *)this,
    Method_GrandQuestClassSelectController_OnDragStarted__,
    0);
  v23 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v22, 0);
  v18 = v23;
  if ( !v23 )
    goto LABEL_30;
  v24 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v23->klass != UIScrollView_OnDragNotification_TypeInfo
    || (*p_onFinished = v23, (UIScrollView_OnDragNotification_c *)v23->klass != v24) )
  {
LABEL_29:
    sub_1C9468C(v18);
LABEL_30:
    *p_onFinished = v18;
  }
  folderBoardScrollView = sub_1C9403C(p_onFinished, v18);
  if ( !this->fields.rootComponent )
    goto LABEL_98;
  folderBoardScrollView = (__int64)GrandQuestRootComponent__GetGrandWarInfoList(
                                     (GrandQuestRootComponent_o *)folderBoardScrollView,
                                     (const MethodInfo *)v7);
  if ( !folderBoardScrollView )
    goto LABEL_98;
  v25 = (System_Collections_Generic_List_object__o *)folderBoardScrollView;
  if ( *(int *)(folderBoardScrollView + 24) >= 1 )
  {
    v26 = 0;
    v27 = 0;
    index = 0;
    v73 = (System_Collections_Generic_List_object__o *)folderBoardScrollView;
    v74 = &this->fields.folderBoardWrapContent;
    v78 = this;
    while ( 1 )
    {
      v28 = sub_1C942E4(GrandQuestClassSelectController___c__DisplayClass54_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v28, 0);
      if ( !v28 )
        break;
      *(_QWORD *)(v28 + 24) = this;
      sub_1C9403C(v28 + 24, this);
      folderBoardScrollView = (__int64)System_Collections_Generic_List_object___get_Item(
                                         v25,
                                         v27,
                                         (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_MapControl_WarInfo__get_Item__);
      if ( !folderBoardScrollView )
        break;
      folderBoardScrollView = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)folderBoardScrollView, 0);
      if ( !folderBoardScrollView )
        break;
      v7 = *(unsigned int *)(folderBoardScrollView + 16);
      v29 = (WarEntity_o *)folderBoardScrollView;
      warId = *(_DWORD *)(folderBoardScrollView + 16);
      folderBoardScrollView = (__int64)this->fields.warReleaseMaster;
      if ( !folderBoardScrollView )
        break;
      folderBoardScrollView = (__int64)WarReleaseMaster__GetOpenEntity(
                                         (WarReleaseMaster_o *)folderBoardScrollView,
                                         v7,
                                         0);
      resourceAssetBundle = this->fields.resourceAssetBundle;
      if ( !resourceAssetBundle )
        break;
      Contents_k__BackingField = resourceAssetBundle->fields._Contents_k__BackingField;
      if ( !Contents_k__BackingField )
        break;
      v32 = (WarReleaseEntity_o *)folderBoardScrollView;
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
                                         (const MethodInfo_3184C94 *)Method_BaseMonoBehaviour_createObject_GrandQuestFolderBoardComponent___);
      if ( !folderBoardScrollView )
        break;
      v35 = (UnityEngine_Object_o *)folderBoardScrollView;
      v36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)folderBoardScrollView, 0);
      folderBoardScrollView = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !folderBoardScrollView )
        break;
      folderBoardScrollView = QuestTree__IsActiveWar((QuestTree_o *)folderBoardScrollView, warId, 0);
      if ( (folderBoardScrollView & 1) != 0 )
      {
        p_closedDialogMessage = (System_String_o **)&StringLiteral_1/*""*/;
      }
      else
      {
        v26 = v36;
        p_closedDialogMessage = (System_String_o **)&StringLiteral_1/*""*/;
        if ( v32 )
        {
          folderBoardScrollView = WarReleaseEntity__IsClose(v32, 0);
          p_closedDialogMessage = &v32->fields.closedDialogMessage;
          if ( (folderBoardScrollView & 1) == 0 )
            p_closedDialogMessage = (System_String_o **)&StringLiteral_1/*""*/;
        }
      }
      v38 = *p_closedDialogMessage;
      if ( !byte_4D25F1E )
      {
        folderBoardScrollView = sub_1C94098(&UnityEngine_Vector3_TypeInfo);
        byte_4D25F1E = 1;
      }
      if ( !v36 )
        break;
      UnityEngine_Transform__set_localScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      folderBoardScrollView = (__int64)*p_folderBoardWrapContent;
      if ( !*p_folderBoardWrapContent )
        break;
      folderBoardScrollView = (__int64)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)folderBoardScrollView,
                                         0);
      if ( !folderBoardScrollView )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)folderBoardScrollView, 0);
      UnityEngine_Transform__set_localPosition(v36, localPosition, 0);
      v39 = System_Int32__ToString((int32_t)&warId, 0);
      v40 = System_String__Concat_64417744((System_String_o *)StringLiteral_17406/*"board_"*/, v39, 0);
      UnityEngine_Object__set_name(v35, v40, 0);
      folderBoardScrollView = (__int64)*p_folderBoardList;
      if ( !*p_folderBoardList )
        break;
      v41 = *(_QWORD *)(folderBoardScrollView + 16);
      v42 = Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__Add__;
      ++*(_DWORD *)(folderBoardScrollView + 28);
      if ( !v41 )
        break;
      v43 = *(int *)(folderBoardScrollView + 24);
      if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)folderBoardScrollView,
          (Il2CppObject *)v35,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = v41 + 8 * v43;
        *(_DWORD *)(folderBoardScrollView + 24) = v43 + 1;
        *(_QWORD *)(v44 + 32) = v35;
        folderBoardScrollView = sub_1C9403C(v44 + 32, v35);
      }
      v7 = (unsigned int)warId;
      *(_DWORD *)(v28 + 16) = v27;
      v46 = index;
      if ( (_DWORD)v7 == focusWarId )
        v46 = v27;
      index = v46;
      if ( !v78->fields.rootComponent )
        break;
      v47 = v26;
      SpotEntityByWarId = GrandQuestRootComponent__GetSpotEntityByWarId(
                            (GrandQuestRootComponent_o *)folderBoardScrollView,
                            v7,
                            v45);
      v49 = GrandQuestViewSwitcher_TypeInfo;
      v50 = SpotEntityByWarId;
      if ( !GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo);
        v49 = GrandQuestViewSwitcher_TypeInfo;
      }
      DefaultGrandClassIconId = v49->static_fields->DefaultGrandClassIconId;
      if ( v50 && BlankEarthSpotEntity__GetGrandClassIconId(v50, -1, 0) >= 1 )
        DefaultGrandClassIconId = BlankEarthSpotEntity__GetGrandClassIconId(v50, -1, 0);
      v52 = *(_DWORD *)(v28 + 16);
      bannerId = v29->fields.bannerId;
      v54 = warId;
      PrioredName = WarEntity__GetPrioredName(v29, 0);
      v56 = (GrandQuestFolderBoardItem_o *)sub_1C942E4(GrandQuestFolderBoardItem_TypeInfo);
      GrandQuestFolderBoardItem___ctor_33468652(
        v56,
        v52,
        bannerId,
        v54,
        PrioredName,
        DefaultGrandClassIconId,
        listCreatedTime,
        v38,
        v72);
      this = v78;
      v57 = v78->fields.resourceAssetBundle;
      if ( !v57 )
        break;
      v58 = v57->fields._Contents_k__BackingField;
      p_folderBoardWrapContent = v74;
      if ( !v58 )
        break;
      BoardUiAtlasManagerUnit_k__BackingField = v58->fields._BoardUiAtlasManagerUnit_k__BackingField;
      v26 = v47;
      v60 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(
        v60,
        (Il2CppObject *)v28,
        Method_GrandQuestClassSelectController___c__DisplayClass54_0__CreateBoardList_b__0__,
        0);
      GrandQuestFolderBoardComponent__SetBoardInfo(
        (GrandQuestFolderBoardComponent_o *)v35,
        v56,
        BoardUiAtlasManagerUnit_k__BackingField,
        v60,
        v61);
      folderBoardScrollView = (__int64)v78->fields.sliderGrid;
      if ( !folderBoardScrollView )
        break;
      slideIndexPrefab = v78->fields.slideIndexPrefab;
      v63 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)folderBoardScrollView, 0);
      folderBoardScrollView = (__int64)BaseMonoBehaviour__createObject(
                                         (BaseMonoBehaviour_o *)v78,
                                         slideIndexPrefab,
                                         v63,
                                         0,
                                         0);
      v25 = v73;
      if ( !folderBoardScrollView )
        break;
      v64 = (UnityEngine_GameObject_o *)folderBoardScrollView;
      folderBoardScrollView = (__int64)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)folderBoardScrollView,
                                         0);
      v65 = (UnityEngine_Transform_o *)folderBoardScrollView;
      if ( !byte_4D25F1E )
      {
        folderBoardScrollView = sub_1C94098(&UnityEngine_Vector3_TypeInfo);
        byte_4D25F1E = 1;
      }
      if ( !v65 )
        break;
      UnityEngine_Transform__set_localScale(v65, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      folderBoardScrollView = UnityEngine_GameObject__TryGetComponent_object_(
                                v64,
                                &component,
                                (const MethodInfo_31F5A20 *)Method_UnityEngine_GameObject_TryGetComponent_SelectBannerSliderIcon___);
      if ( (folderBoardScrollView & 1) != 0 )
      {
        if ( !component )
          break;
        GrandQuestClassSelectController__SetImage(
          v78,
          (UISprite_o *)component[2].monitor,
          (System_String_o *)StringLiteral_20756/*"img_slider_off"*/,
          v66);
        if ( !component )
          break;
        GrandQuestClassSelectController__SetImage(
          v78,
          (UISprite_o *)component[2].klass,
          (System_String_o *)StringLiteral_20757/*"img_slider_on"*/,
          v67);
      }
      if ( ++v27 >= v73->fields._size )
        goto LABEL_82;
    }
LABEL_98:
    sub_1C942F0(folderBoardScrollView, v7);
  }
  index = 0;
LABEL_82:
  folderBoardScrollView = (__int64)*p_folderBoardWrapContent;
  if ( !*p_folderBoardWrapContent )
    goto LABEL_98;
  UIWrapContent__SortBasedOnScrollMovement((UIWrapContent_o *)folderBoardScrollView, 0);
  folderBoardScrollView = (__int64)*p_folderBoardWrapContent;
  if ( !*p_folderBoardWrapContent )
    goto LABEL_98;
  UIWrapContent__resetScroll((UIWrapContent_o *)folderBoardScrollView, 0);
  folderBoardScrollView = (__int64)*p_folderBoardWrapContent;
  if ( !*p_folderBoardWrapContent )
    goto LABEL_98;
  UIWrapContent__WrapContent((UIWrapContent_o *)folderBoardScrollView, 0);
  folderBoardScrollView = (__int64)*p_folderBoardList;
  if ( !*p_folderBoardList )
    goto LABEL_98;
  if ( *(int *)(folderBoardScrollView + 24) >= 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)folderBoardScrollView,
             index,
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
    this->fields.currentFolderBoard = (struct GrandQuestFolderBoardComponent_o *)Item;
    sub_1C9403C(&this->fields.currentFolderBoard, Item);
    GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(this, v69);
    GrandQuestClassSelectController__SetCurrentSelectButtonFrameActive(this, 1, v70);
  }
  folderBoardScrollView = (__int64)this->fields.upArrowBtn;
  if ( !folderBoardScrollView )
    goto LABEL_98;
  folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)folderBoardScrollView,
                                     0);
  if ( !*p_folderBoardList )
    goto LABEL_98;
  if ( !folderBoardScrollView )
    goto LABEL_98;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)folderBoardScrollView,
    (*p_folderBoardList)->fields._size > 1,
    0);
  folderBoardScrollView = (__int64)this->fields.downArrowBtn;
  if ( !folderBoardScrollView )
    goto LABEL_98;
  folderBoardScrollView = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)folderBoardScrollView,
                                     0);
  if ( !*p_folderBoardList )
    goto LABEL_98;
  if ( !folderBoardScrollView )
    goto LABEL_98;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)folderBoardScrollView,
    (*p_folderBoardList)->fields._size > 1,
    0);
  folderBoardList = this->fields.folderBoardList;
  if ( !folderBoardList )
    goto LABEL_98;
  folderBoardScrollView = (__int64)this->fields.folderBoardScrollView;
  if ( !folderBoardScrollView )
    goto LABEL_98;
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)folderBoardScrollView,
    folderBoardList->fields._size > 1,
    0);
  folderBoardScrollView = (__int64)this->fields.sliderGrid;
  if ( !folderBoardScrollView )
    goto LABEL_98;
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
  struct System_Collections_Generic_List_GrandQuestFolderBoardComponent__o *folderBoardList; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D273DD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Single_GrandQuestFolderBoardComponent___);
    sub_1C94098(&System_Func_GrandQuestFolderBoardComponent__bool__TypeInfo);
    sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass64_0__GetFolderBoardByWarId_b__0__);
    sub_1C94098(&GrandQuestClassSelectController___c__DisplayClass64_0_TypeInfo);
    byte_4D273DD = 1;
  }
  v5 = sub_1C942E4(GrandQuestClassSelectController___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_DWORD *)(v5 + 16) = warId;
  folderBoardList = this->fields.folderBoardList;
  v9 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_GrandQuestFolderBoardComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_GrandQuestClassSelectController___c__DisplayClass64_0__GetFolderBoardByWarId_b__0__,
    0);
  return (GrandQuestFolderBoardComponent_o *)System_Linq_Enumerable__Single_object__52268676(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)folderBoardList,
                                               (System_Func_TSource__bool__o *)v9,
                                               (const MethodInfo_31D8E84 *)Method_System_Linq_Enumerable_Single_GrandQuestFolderBoardComponent___);
}


SchedulerTaskBase_o *GrandQuestClassSelectController__GetTaskOfChangeClassTab(
        GrandQuestClassSelectController_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Func_bool__o *v14; // x20
  __int64 v15; // x19
  SchedulerTaskBase_TaskCallback_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D273E5 & 1) == 0 )
  {
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C94098(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass72_0__GetTaskOfChangeClassTab_b__0__);
    sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass72_0__GetTaskOfChangeClassTab_b__1__);
    sub_1C94098(&GrandQuestClassSelectController___c__DisplayClass72_0_TypeInfo);
    byte_4D273E5 = 1;
  }
  v5 = sub_1C942E4(GrandQuestClassSelectController___c__DisplayClass72_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 32) = classId;
  *(_BYTE *)(v5 + 16) = 1;
  v14 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_GrandQuestClassSelectController___c__DisplayClass72_0__GetTaskOfChangeClassTab_b__0__,
    0);
  v15 = sub_1C942E4(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v15, v14, 0);
  v16 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_GrandQuestClassSelectController___c__DisplayClass72_0__GetTaskOfChangeClassTab_b__1__,
    0);
  if ( !v15 )
LABEL_6:
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v15 + 24) = v16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v15 + 24), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  return (SchedulerTaskBase_o *)v15;
}


SchedulerTaskBase_o *GrandQuestClassSelectController__GetTaskOfRelease(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Func_bool__o *v12; // x21
  __int64 v13; // x19
  SchedulerTaskBase_TaskCallback_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D273E1 & 1) == 0 )
  {
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C94098(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass68_0__GetTaskOfRelease_b__0__);
    sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass68_0__GetTaskOfRelease_b__1__);
    sub_1C94098(&GrandQuestClassSelectController___c__DisplayClass68_0_TypeInfo);
    byte_4D273E1 = 1;
  }
  v3 = sub_1C942E4(GrandQuestClassSelectController___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_6;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_BYTE *)(v3 + 16) = 1;
  v12 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)v3,
    Method_GrandQuestClassSelectController___c__DisplayClass68_0__GetTaskOfRelease_b__0__,
    0);
  v13 = sub_1C942E4(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v13, v12, 0);
  v14 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v14,
    (Il2CppObject *)v3,
    Method_GrandQuestClassSelectController___c__DisplayClass68_0__GetTaskOfRelease_b__1__,
    0);
  if ( !v13 )
LABEL_6:
    sub_1C942F0(v4, v5);
  *(_QWORD *)(v13 + 24) = v14;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 24), (int32_t)v14, v15, v16, v17, v18, v19, v20);
  return (SchedulerTaskBase_o *)v13;
}


SchedulerTaskBase_o *GrandQuestClassSelectController__GetTaskOfSlideInClassTab(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Func_bool__o *v12; // x21
  __int64 v13; // x19
  SchedulerTaskBase_TaskCallback_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D273E3 & 1) == 0 )
  {
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C94098(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass70_0__GetTaskOfSlideInClassTab_b__0__);
    sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass70_0__GetTaskOfSlideInClassTab_b__1__);
    sub_1C94098(&GrandQuestClassSelectController___c__DisplayClass70_0_TypeInfo);
    byte_4D273E3 = 1;
  }
  v3 = sub_1C942E4(GrandQuestClassSelectController___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_6;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_BYTE *)(v3 + 16) = 1;
  v12 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)v3,
    Method_GrandQuestClassSelectController___c__DisplayClass70_0__GetTaskOfSlideInClassTab_b__0__,
    0);
  v13 = sub_1C942E4(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v13, v12, 0);
  v14 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v14,
    (Il2CppObject *)v3,
    Method_GrandQuestClassSelectController___c__DisplayClass70_0__GetTaskOfSlideInClassTab_b__1__,
    0);
  if ( !v13 )
LABEL_6:
    sub_1C942F0(v4, v5);
  *(_QWORD *)(v13 + 24) = v14;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 24), (int32_t)v14, v15, v16, v17, v18, v19, v20);
  return (SchedulerTaskBase_o *)v13;
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
  Il2CppObject *Master_object; // x0
  struct WarReleaseMaster_o **p_warReleaseMaster; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x8

  if ( (byte_4D273D0 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D273D0 = 1;
  }
  this->fields.rootComponent = grandQuestRoot;
  sub_1C9403C(&this->fields.rootComponent, grandQuestRoot);
  this->fields.setTouchBlockAction = setTouchBlockAct;
  sub_1C9403C(&this->fields.setTouchBlockAction, setTouchBlockAct);
  this->fields.selectClassAction = selectClassAct;
  sub_1C9403C(&this->fields.selectClassAction, selectClassAct);
  this->fields.changeClassAction = changeClassAct;
  sub_1C9403C(&this->fields.changeClassAction, changeClassAct);
  this->fields.resourceAssetBundle = resourceCatalog;
  sub_1C9403C(&this->fields.resourceAssetBundle, resourceCatalog);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  this->fields.warReleaseMaster = (struct WarReleaseMaster_o *)Master_object;
  p_warReleaseMaster = &this->fields.warReleaseMaster;
  v15 = sub_1C9403C(p_warReleaseMaster, Master_object);
  v17 = (__int64)*(p_warReleaseMaster - 21);
  *((_BYTE *)p_warReleaseMaster + 32) = 0;
  if ( !v17 )
    sub_1C942F0(v15, v16);
  *(_DWORD *)(v17 + 32) = 1106247680;
}


void GrandQuestClassSelectController__OnCenterOnChildFinishedFolderBoard(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  GrandQuestClassSelectController_o *v2; // x19
  struct UICenterOnChild_o *folderBoardCenterChild; // x8
  GrandQuestClassSelectController_o *v4; // x20
  int32_t selectButtonOptionInfoFrameSp; // w23
  System_Action_o *initBoardCenterCallback; // x0
  _BOOL4 v7; // w24
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w21
  GrandQuestClassSelectController_o *v15; // x22
  _BOOL4 v16; // w8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
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
  if ( (byte_4D273D7 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_GrandQuestFolderBoardComponent___);
    this = (GrandQuestClassSelectController_o *)sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___);
    byte_4D273D7 = 1;
  }
  folderBoardCenterChild = v2->fields.folderBoardCenterChild;
  if ( !folderBoardCenterChild )
    goto LABEL_46;
  this = (GrandQuestClassSelectController_o *)folderBoardCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_46;
  this = (GrandQuestClassSelectController_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___);
  if ( !this )
    goto LABEL_46;
  v4 = this;
  selectButtonOptionInfoFrameSp = (int32_t)this->fields.selectButtonOptionInfoFrameSp;
  initBoardCenterCallback = v2->fields.initBoardCenterCallback;
  v7 = initBoardCenterCallback || v2->fields.currentState == 0;
  ActionExtensions__Call(initBoardCenterCallback, 0);
  v2->fields.initBoardCenterCallback = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields.initBoardCenterCallback, 0, v8, v9, v10, v11, v12, v13);
  this = (GrandQuestClassSelectController_o *)v2->fields.sliderGrid;
  if ( !this )
    goto LABEL_46;
  v14 = 0;
  while ( 1 )
  {
    this = (GrandQuestClassSelectController_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_46;
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
          this = (GrandQuestClassSelectController_o *)UnityEngine_Component__GetComponentInChildren_object__51981160(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_3192B68 *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
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
    goto LABEL_46;
  }
  v16 = !v2->fields.isDragging && selectButtonOptionInfoFrameSp == v2->fields.currentMoveIdx;
  if ( !v16 && !v7 )
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
          v2->fields.isMovePositiveIndex = currentMoveIdx < selectButtonOptionInfoFrameSp;
          v2->fields.currentFolderBoard = (struct GrandQuestFolderBoardComponent_o *)v4;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v2->fields.currentFolderBoard,
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
                UICenterOnChild__CenterOn_49839336(v28, (UnityEngine_Transform_o *)this, 1, 0);
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
                        goto LABEL_46;
                      changeClassAction = v2->fields.changeClassAction;
                      this = (GrandQuestClassSelectController_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
                      if ( !this )
                        goto LABEL_46;
                      this = (GrandQuestClassSelectController_o *)UnityEngine_Transform__GetChild(
                                                                    (UnityEngine_Transform_o *)this,
                                                                    v2->fields.currentMoveIdx,
                                                                    0);
                      if ( !this )
                        goto LABEL_46;
                      this = (GrandQuestClassSelectController_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)this,
                                                                    (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_GrandQuestFolderBoardComponent___);
                      if ( !this )
                        goto LABEL_46;
                      selectClassSprite = this->fields.selectClassSprite;
                      if ( !selectClassSprite || !changeClassAction )
                        goto LABEL_46;
                      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))changeClassAction->fields.invoke_impl)(
                        changeClassAction->fields.method_code,
                        HIDWORD(selectClassSprite->fields.mParent),
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
LABEL_46:
    sub_1C942F0(this, method);
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

  if ( (byte_4D273DB & 1) == 0 )
  {
    sub_1C94098(&Method_GrandQuestClassSelectController_OnClickBoard__);
    byte_4D273DB = 1;
  }
  if ( !this->fields.isTouchBoard && this->fields.currentMoveIdx != moveIdx )
  {
    if ( isPlaySe )
    {
      v7 = Method_GrandQuestClassSelectController_OnClickBoard__;
      if ( (*((_BYTE *)Method_GrandQuestClassSelectController_OnClickBoard__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C940B0(Method_GrandQuestClassSelectController_OnClickBoard__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C9407C(v7, v7[4]);
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

  if ( (byte_4D273DA & 1) == 0 )
  {
    sub_1C94098(&Method_GrandQuestClassSelectController_OnClickChallengeButton__);
    byte_4D273DA = 1;
  }
  if ( this->fields.selectClassAction )
  {
    v5 = Method_GrandQuestClassSelectController_OnClickChallengeButton__;
    if ( (*((_BYTE *)Method_GrandQuestClassSelectController_OnClickChallengeButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C940B0(Method_GrandQuestClassSelectController_OnClickChallengeButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    selectClassAction = this->fields.selectClassAction;
    this->fields.isTouchBoard = 1;
    if ( !selectClassAction )
      sub_1C942F0(v7, v8);
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
  UnityEngine_Component_o *folderBoardWrapContent; // x0
  int v9; // w20
  int32_t currentMoveIdx; // w21
  const MethodInfo *v11; // x2
  float childCount; // s1
  float v13; // s0
  int32_t v14; // w1

  if ( (byte_4D273D9 & 1) == 0 )
  {
    sub_1C94098(&Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__);
    byte_4D273D9 = 1;
  }
  if ( !this->fields.isDragging )
  {
    v5 = Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__;
    if ( (*((_BYTE *)Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C940B0(Method_GrandQuestClassSelectController_OnClickUpDownChangeBoard__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0);
    folderBoardWrapContent = (UnityEngine_Component_o *)this->fields.folderBoardWrapContent;
    if ( isUp )
      v9 = -1;
    else
      v9 = 1;
    if ( !folderBoardWrapContent
      || (currentMoveIdx = this->fields.currentMoveIdx,
          (folderBoardWrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                 folderBoardWrapContent,
                                                                 0)) == 0) )
    {
      sub_1C942F0(folderBoardWrapContent, v7);
    }
    childCount = (float)UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)folderBoardWrapContent, 0);
    v13 = (float)(currentMoveIdx + v9) - (float)(floorf((float)(currentMoveIdx + v9) / childCount) * childCount);
    if ( v13 <= childCount )
      childCount = v13;
    if ( v13 < 0.0 )
      childCount = 0.0;
    if ( childCount == INFINITY )
      v14 = 0x80000000;
    else
      v14 = (int)childCount;
    GrandQuestClassSelectController__OnMoveBoardByClick(this, v14, v11);
  }
}


void GrandQuestClassSelectController__OnDragStarted(GrandQuestClassSelectController_o *this, const MethodInfo *method)
{
  struct UICenterOnChild_o *folderBoardCenterChild; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  GrandQuestClassSelectController_o *v4; // x19
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  folderBoardCenterChild = this->fields.folderBoardCenterChild;
  this->fields.onClickMove = 0;
  if ( !folderBoardCenterChild )
    goto LABEL_9;
  folderBoardCenterChild->fields.springStrength = 30.0;
  rootComponent = this->fields.rootComponent;
  v4 = this;
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
    sub_1C942F0(this, method);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UICenterOnChild_o *folderBoardCenterChild; // x8
  struct GrandQuestFolderBoardItem_o *boardInfo; // x8
  struct System_Action_int__o *changeClassAction; // x9
  const MethodInfo *v23; // x1

  if ( (byte_4D273DC & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_GrandQuestFolderBoardComponent___);
    byte_4D273DC = 1;
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
                                                                  (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_GrandQuestFolderBoardComponent___);
  this->fields.currentFolderBoard = Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentFolderBoard,
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
    sub_1C942F0(mTitleInfo, v6);
  }
  UICenterOnChild__CenterOn_49839336((UICenterOnChild_o *)mTitleInfo, v12, 1, 0);
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

  if ( (byte_4D273E0 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__Clear__);
    byte_4D273E0 = 1;
  }
  folderBoardPanel = this->fields.folderBoardPanel;
  if ( !folderBoardPanel )
    goto LABEL_12;
  folderBoardPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(folderBoardPanel, 0);
  v4 = (UnityEngine_Transform_o *)folderBoardPanel;
  if ( !byte_4D25F19 )
  {
    folderBoardPanel = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
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
    sub_1C942F0(folderBoardPanel, method);
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
  bool IsClose; // w8
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D273D8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
    byte_4D273D8 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  folderBoardList = (System_Collections_Generic_List_object__o *)this->fields.folderBoardList;
  if ( !folderBoardList )
    sub_1C942F0(0, *(_QWORD *)&selectedBoardIndex);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    folderBoardList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__);
    if ( !v6 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1C942F0(v6, v7);
    klass = v15.fields._current[8].klass;
    if ( !klass )
      sub_1C942F0(v6, v7);
    warReleaseMaster = this->fields.warReleaseMaster;
    if ( !warReleaseMaster )
      sub_1C942F0(0, v7);
    v11 = (int)v15.fields._current[9].klass;
    OpenEntity = WarReleaseMaster__GetOpenEntity(warReleaseMaster, HIDWORD(klass->_1.klass), 0);
    if ( OpenEntity )
      IsClose = WarReleaseEntity__IsClose(OpenEntity, 0);
    else
      IsClose = 0;
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)current[5].monitor, IsClose || v11 != selectedBoardIndex, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Action_o **v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v24; // x20
  float v25; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  SlideFadeObject_o *v28; // x19
  float OutPosOffsetX; // s9
  float EXIT_TIME; // s8
  System_Action_o *v31; // x21

  if ( (byte_4D273E2 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C94098(&GrandQuestClassSelectController_TypeInfo);
    sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass69_0__Release_b__0__);
    sub_1C94098(&GrandQuestClassSelectController___c__DisplayClass69_0_TypeInfo);
    byte_4D273E2 = 1;
  }
  v7 = sub_1C942E4(GrandQuestClassSelectController___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  v16 = (System_Action_o **)(v7 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v17, v18, v19, v20, v21, v22);
  folderBoardPanel = this->fields.folderBoardPanel;
  if ( !folderBoardPanel )
    goto LABEL_13;
  if ( !isQuick )
  {
    gameObject = UnityEngine_GameObject__get_gameObject(folderBoardPanel, 0);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_31F6278 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    v28 = (SlideFadeObject_o *)Component_object;
    if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
    OutPosOffsetX = GrandQuestClassSelectController__get_OutPosOffsetX((const MethodInfo *)Component_object);
    EXIT_TIME = GrandQuestClassSelectController_TypeInfo->static_fields->EXIT_TIME;
    v31 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v7,
      Method_GrandQuestClassSelectController___c__DisplayClass69_0__Release_b__0__,
      0);
    if ( v28 )
    {
      SlideFadeObject__SlideOut_36815192(v28, OutPosOffsetX, EXIT_TIME, 0.0, v31, 0);
      return;
    }
LABEL_13:
    sub_1C942F0(folderBoardPanel, v9);
  }
  transform = UnityEngine_GameObject__get_transform(folderBoardPanel, 0);
  v24 = transform;
  if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
  v25 = GrandQuestClassSelectController__get_OutPosOffsetX((const MethodInfo *)transform);
  TransformHelper__SetLocalPositionX(v24, v25, 0);
  this->fields.currentState = 1;
  ActionExtensions__Call(*v16, 0);
}


void GrandQuestClassSelectController__ResetOnClickMoveParam(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  struct UICenterOnChild_o *folderBoardCenterChild; // x8

  folderBoardCenterChild = this->fields.folderBoardCenterChild;
  this->fields.onClickMove = 0;
  if ( !folderBoardCenterChild )
    sub_1C942F0(this, method);
  folderBoardCenterChild->fields.springStrength = 30.0;
}


void GrandQuestClassSelectController__SetActiveSelectButtonOptionText(
        GrandQuestClassSelectController_o *this,
        bool isActive,
        const MethodInfo *method)
{
  bool v4; // w20

  v4 = isActive;
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.selectButtonOptionInfoLb, isActive, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.selectButtonOptionInfoFrameSp, v4, 0);
}


void GrandQuestClassSelectController__SetBoardCenter(
        GrandQuestClassSelectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Component_o *folderBoardWrapContent; // x0
  Il2CppObject *Component_object; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UICenterOnChild_o *folderBoardCenterChild; // x20

  if ( (byte_4D273DE & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_FixedSpringPanel___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D273DE = 1;
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
                         (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_FixedSpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      this->fields.initBoardCenterCallback = callback;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.initBoardCenterCallback,
        (int32_t)callback,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
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
            UICenterOnChild__CenterOn_49839336(
              folderBoardCenterChild,
              (UnityEngine_Transform_o *)folderBoardWrapContent,
              1,
              0);
            return;
          }
        }
      }
LABEL_15:
      sub_1C942F0(folderBoardWrapContent, callback);
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
    sub_1C942F0(selectClassButton, isActive);
  GrandQuestRootComponent__SetButtonActive((GrandQuestRootComponent_o *)selectClassButton, isActive, v7);
}


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
    sub_1C942F0(0, classId);
  transform = UnityEngine_GameObject__get_transform(folderBoardPanel, 0);
  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
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
  UnityEngine_Object_o *currentFolderBoard; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  struct GrandQuestFolderBoardComponent_o *v11; // x8
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D273EA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D273EA = 1;
  }
  memset(&v12, 0, sizeof(v12));
  folderBoardList = (System_Collections_Generic_List_object__o *)this->fields.folderBoardList;
  if ( folderBoardList && folderBoardList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      folderBoardList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__);
      if ( !v6 )
        break;
      if ( !v12.fields._current )
        sub_1C942F0(v6, v7);
      BasicHelper__SetActiveSafely(
        *(UnityEngine_Component_o **)((char *)&v12.fields._current->klass + (unsigned __int64)&qword_70),
        0,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
    if ( isActive )
    {
      currentFolderBoard = (UnityEngine_Object_o *)this->fields.currentFolderBoard;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__op_Equality(currentFolderBoard, 0, 0);
      if ( !v9 )
      {
        v11 = this->fields.currentFolderBoard;
        if ( !v11 )
          sub_1C942F0(v9, v10);
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v11->fields.selectedFrame, 1, 0);
      }
    }
  }
}


void GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentFolderBoard; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D273E8 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D273E8 = 1;
  }
  currentFolderBoard = (UnityEngine_Object_o *)this->fields.currentFolderBoard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(currentFolderBoard, 0, 0) )
    GrandQuestClassSelectController__SetSelectButtonOptionText(this, this->fields.currentFolderBoard, v4);
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
  bool v5; // w20

  upArrowBtn = (UnityEngine_Behaviour_o *)this->fields.upArrowBtn;
  if ( !upArrowBtn
    || (v5 = isEnabled,
        UnityEngine_Behaviour__set_enabled(upArrowBtn, isEnabled, 0),
        (upArrowBtn = (UnityEngine_Behaviour_o *)this->fields.downArrowBtn) == 0) )
  {
    sub_1C942F0(upArrowBtn, isEnabled);
  }
  UnityEngine_Behaviour__set_enabled(upArrowBtn, v5, 0);
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
    sub_1C942F0(this, uiSprite);
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
    sub_1C942F0(this, method);
  folderBoardCenterChild->fields.springStrength = 6.0;
}


void GrandQuestClassSelectController__SetPositionByWarId(
        GrandQuestClassSelectController_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *folderBoardList; // x0
  int size; // w22
  int32_t v7; // w21
  __int64 v8; // x1
  _DWORD *monitor; // x8
  GrandQuestClassSelectController_o *v10; // x0
  int32_t v11; // w1

  if ( (byte_4D273E6 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
    byte_4D273E6 = 1;
  }
  folderBoardList = (System_Collections_Generic_List_object__o *)this->fields.folderBoardList;
  if ( folderBoardList )
  {
    size = folderBoardList->fields._size;
    if ( size < 1 )
    {
LABEL_14:
      v10 = this;
      v11 = 0;
      this->fields.currentMoveIdx = 0;
    }
    else
    {
      v7 = 0;
      while ( 1 )
      {
        folderBoardList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         folderBoardList,
                                                                         v7,
                                                                         (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
        if ( !folderBoardList )
LABEL_12:
          sub_1C942F0(folderBoardList, v8);
        monitor = folderBoardList[3].monitor;
        if ( !monitor )
          return;
        if ( warId < 1 || monitor[31] == warId )
          break;
        if ( size == ++v7 )
          goto LABEL_14;
        folderBoardList = (System_Collections_Generic_List_object__o *)this->fields.folderBoardList;
        if ( !folderBoardList )
          goto LABEL_12;
      }
      v11 = folderBoardList[3].fields._size;
      v10 = this;
      this->fields.currentMoveIdx = v11;
    }
    GrandQuestClassSelectController__RefreshBoardListMaskDisplay(v10, v11, method);
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
  if ( (byte_4D273E9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Count__);
    this = (GrandQuestClassSelectController_o *)sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
    byte_4D273E9 = 1;
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
                                                    (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GrandQuestFolderInformationText__get_Item__);
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
    sub_1C942F0(this, board);
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
  Il2CppObject *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  System_Action_o *v18; // x20
  const MethodInfo *v19; // x2

  if ( (byte_4D273D1 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass47_0__SetupBoardList_g__SetBoardCenterFunc_0__);
    sub_1C94098(&GrandQuestClassSelectController___c__DisplayClass47_0_TypeInfo);
    sub_1C94098(&StringLiteral_20700/*"img_questboard_selectbg"*/);
    sub_1C94098(&StringLiteral_17577/*"btn_grand_select"*/);
    sub_1C94098(&StringLiteral_20375/*"icon_grand_arrow"*/);
    byte_4D273D1 = 1;
  }
  v7 = (Il2CppObject *)sub_1C942E4(GrandQuestClassSelectController___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  v7[1].klass = (Il2CppClass *)this;
  sub_1C9403C(&v7[1], this);
  v7[1].monitor = callback;
  sub_1C9403C(&v7[1].monitor, callback);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.upArrowSprite,
    (System_String_o *)StringLiteral_20375/*"icon_grand_arrow"*/,
    v10);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.downArrowSprite,
    (System_String_o *)StringLiteral_20375/*"icon_grand_arrow"*/,
    v11);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.selectedMark,
    (System_String_o *)StringLiteral_20700/*"img_questboard_selectbg"*/,
    v12);
  GrandQuestClassSelectController__SetImage(
    this,
    this->fields.selectClassSprite,
    (System_String_o *)StringLiteral_17577/*"btn_grand_select"*/,
    v13);
  this->fields.currentState = 0;
  GrandQuestClassSelectController__SetCurrentSelectButtonFrameActive(this, 0, v14);
  GrandQuestClassSelectController__SetEnabledArrowButtons(this, 1, v15);
  GrandQuestClassSelectController__CreateBoardList(this, warId, v16);
  GrandQuestClassSelectController__SetPositionByWarId(this, warId, v17);
  v18 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    v7,
    Method_GrandQuestClassSelectController___c__DisplayClass47_0__SetupBoardList_g__SetBoardCenterFunc_0__,
    0);
  GrandQuestClassSelectController__WaitCenterChildStart(this, v18, v19);
}


void GrandQuestClassSelectController__SlideInClassTab(
        GrandQuestClassSelectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  GrandQuestClassSelectController_c *v27; // x0
  SlideFadeObject_o *v28; // x20
  float OutPosOffsetX; // s9
  float INTO_TIME; // s8
  System_Action_o *v31; // x21

  if ( (byte_4D273E4 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C94098(&GrandQuestClassSelectController_TypeInfo);
    sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass71_0__SlideInClassTab_b__0__);
    sub_1C94098(&GrandQuestClassSelectController___c__DisplayClass71_0_TypeInfo);
    byte_4D273E4 = 1;
  }
  v5 = sub_1C942E4(GrandQuestClassSelectController___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v14, v15, v16, v17, v18, v19);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.folderBoardPanel,
                       (const MethodInfo_31F6278 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Component_object, v21, v22, v23, v24, v25, v26);
  v27 = GrandQuestClassSelectController_TypeInfo;
  v28 = *(SlideFadeObject_o **)(v5 + 16);
  if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
  OutPosOffsetX = GrandQuestClassSelectController__get_OutPosOffsetX((const MethodInfo *)v27);
  INTO_TIME = GrandQuestClassSelectController_TypeInfo->static_fields->INTO_TIME;
  v31 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_GrandQuestClassSelectController___c__DisplayClass71_0__SlideInClassTab_b__0__,
    0);
  if ( !v28 )
LABEL_8:
    sub_1C942F0(v6, v7);
  SlideFadeObject__SlideIn_36814248(v28, OutPosOffsetX, INTO_TIME, 0.0, v31, 0);
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
  float realtimeSinceStartup; // s0
  GrandQuestClassSelectController_c *v5; // x0
  float mUpdateTimeOld; // s9
  float v7; // s8
  UnityEngine_Component_o *selectClassButton; // x0
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4D273D5 & 1) == 0 )
  {
    sub_1C94098(&GrandQuestClassSelectController_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D273D5 = 1;
  }
  if ( this->fields.currentState == 2 )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    v5 = GrandQuestClassSelectController_TypeInfo;
    mUpdateTimeOld = this->fields.mUpdateTimeOld;
    v7 = realtimeSinceStartup;
    if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
      v5 = GrandQuestClassSelectController_TypeInfo;
    }
    if ( (float)(v7 - mUpdateTimeOld) >= v5->static_fields->UpdateInfoTimeInterval )
    {
      selectClassButton = (UnityEngine_Component_o *)this->fields.selectClassButton;
      if ( selectClassButton )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(selectClassButton, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            GrandQuestClassSelectController__UpdateBoardInfo(this, v10);
            GrandQuestClassSelectController__SetCurrentSelectButtonOptionText(this, v11);
            return;
          }
        }
      }
      sub_1C942F0(selectClassButton, v3);
    }
  }
}


void GrandQuestClassSelectController__UpdateBoardInfo(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *folderBoardList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D273E7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D273E7 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  folderBoardList = (System_Collections_Generic_List_object__o *)this->fields.folderBoardList;
  if ( folderBoardList && folderBoardList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      folderBoardList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__MoveNext__) )
    {
      current = v7.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
      if ( v5 )
        break;
      if ( !current )
        sub_1C942F0(v5, v6);
      GrandQuestFolderBoardComponent__UpdateInfoText((GrandQuestFolderBoardComponent_o *)current, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GrandQuestFolderBoardComponent__Dispose__);
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

  if ( (byte_4D273D3 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D273D3 = 1;
  }
  folderBoardCenterChild = (UnityEngine_Object_o *)this->fields.folderBoardCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(folderBoardCenterChild, 0, 0) )
    goto LABEL_9;
  v8 = this->fields.folderBoardCenterChild;
  if ( !v8 )
    sub_1C942F0(0, v6);
  if ( UICenterOnChild__ExistScrollView(v8, 0) )
  {
    ActionExtensions__Call(endCallback, 0);
  }
  else
  {
LABEL_9:
    v9 = GrandQuestClassSelectController__CoWaitUntilCenterChildStart(this, endCallback, v7);
    UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v9, 0);
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
  if ( (byte_4D273EC & 1) == 0 )
  {
    this = (GrandQuestClassSelectController_o *)sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___);
    byte_4D273EC = 1;
  }
  folderBoardCenterChild = v2->fields.folderBoardCenterChild;
  if ( !folderBoardCenterChild
    || (this = (GrandQuestClassSelectController_o *)folderBoardCenterChild->fields.mCenteredObject) == 0
    || (this = (GrandQuestClassSelectController_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_GrandQuestFolderBoardComponent___)) == 0
    || (selectClassSprite = this->fields.selectClassSprite) == 0 )
  {
    sub_1C942F0(this, method);
  }
  GrandQuestClassSelectController__OnClickChallengeButton(v2, HIDWORD(selectClassSprite->fields.mParent), v4);
}


bool GrandQuestClassSelectController___CoWaitUntilBoardInit_b__49_0(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentFolderBoard; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *folderBoardList; // x0

  if ( (byte_4D273ED & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D273ED = 1;
  }
  currentFolderBoard = (UnityEngine_Object_o *)this->fields.currentFolderBoard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                                                   (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GrandQuestFolderBoardComponent__get_Item__);
  if ( !folderBoardList )
LABEL_12:
    sub_1C942F0(folderBoardList, v4);
  return !GrandQuestFolderBoardComponent__ExistBoardImage((GrandQuestFolderBoardComponent_o *)folderBoardList, v4);
}


bool GrandQuestClassSelectController___CoWaitUntilCenterChildStart_b__51_0(
        GrandQuestClassSelectController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *folderBoardCenterChild; // x20
  __int64 v4; // x1
  UICenterOnChild_o *v6; // x0

  if ( (byte_4D273EE & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D273EE = 1;
  }
  folderBoardCenterChild = (UnityEngine_Object_o *)this->fields.folderBoardCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(folderBoardCenterChild, 0, 0) )
  {
    return 1;
  }
  else
  {
    v6 = this->fields.folderBoardCenterChild;
    if ( !v6 )
      sub_1C942F0(0, v4);
    return !UICenterOnChild__ExistScrollView(v6, 0);
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
  if ( v2 < 1.7778 )
    return -800.0;
  else
    return -800.0 - (float)((float)(v2 * 576.0) + -1024.0);
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
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitWhile_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  bool result; // w0
  System_Action_o *endCallback; // x0

  if ( (byte_4D273F3 & 1) == 0 )
  {
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&Method_GrandQuestClassSelectController__CoWaitUntilBoardInit_b__49_0__);
    sub_1C94098(&UnityEngine_WaitWhile_TypeInfo);
    byte_4D273F3 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    endCallback = this->fields.endCallback;
    this->fields.__1__state = -1;
    ActionExtensions__Call(endCallback, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v5 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v5, _4__this, Method_GrandQuestClassSelectController__CoWaitUntilBoardInit_b__49_0__, 0);
    v6 = (UnityEngine_WaitWhile_o *)sub_1C942E4(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v6, v5, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_GrandQuestClassSelectController__CoWaitUntilBoardInit_d__49_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitWhile_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  bool result; // w0
  System_Action_o *endCallback; // x0

  if ( (byte_4D273F4 & 1) == 0 )
  {
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&Method_GrandQuestClassSelectController__CoWaitUntilCenterChildStart_b__51_0__);
    sub_1C94098(&UnityEngine_WaitWhile_TypeInfo);
    byte_4D273F4 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    endCallback = this->fields.endCallback;
    this->fields.__1__state = -1;
    ActionExtensions__Call(endCallback, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v5 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v5,
      _4__this,
      Method_GrandQuestClassSelectController__CoWaitUntilCenterChildStart_b__51_0__,
      0);
    v6 = (UnityEngine_WaitWhile_o *)sub_1C942E4(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v6, v5, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_GrandQuestClassSelectController__CoWaitUntilCenterChildStart_d__51_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
    sub_1C942F0(this, method);
  v4 = GrandQuestClassSelectController__CoWaitUntilBoardInit(this->fields.__4__this, this->fields.callback, v2);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164(_4__this, v4, 0);
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
  if ( (byte_4D273EF & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (GrandQuestClassSelectController___c__DisplayClass47_0_o *)sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass47_0__SetupBoardList_b__1__);
    byte_4D273EF = 1;
  }
  klass = (GrandQuestClassSelectController_o *)v2[1].klass;
  if ( !klass )
    sub_1C942F0(this, method);
  klass->fields.currentState = 2;
  v4 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
  GrandQuestClassSelectController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(0, method);
  GrandQuestClassSelectController__OnClickBoard(_4__this, this->fields.index, 1, v2);
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
    sub_1C942F0(this, x);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v3 = this;
  if ( (byte_4D273F0 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (GrandQuestClassSelectController___c__DisplayClass68_0_o *)sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass68_0__GetTaskOfRelease_b__2__);
    byte_4D273F0 = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestClassSelectController___c__DisplayClass68_0__GetTaskOfRelease_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_1C942F0(this, method);
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
  struct GrandQuestClassSelectController_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.isTouchBoard = 0,
        ActionExtensions__Call(this->fields.callback, 0),
        (v4 = this->fields.__4__this) == 0) )
  {
    sub_1C942F0(this, method);
  }
  v4->fields.currentState = 1;
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v3 = this;
  if ( (byte_4D273F1 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (GrandQuestClassSelectController___c__DisplayClass70_0_o *)sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass70_0__GetTaskOfSlideInClassTab_b__2__);
    byte_4D273F1 = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestClassSelectController___c__DisplayClass70_0__GetTaskOfSlideInClassTab_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_1C942F0(this, method);
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
    sub_1C942F0(sfo, method);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v3 = this;
  if ( (byte_4D273F2 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (GrandQuestClassSelectController___c__DisplayClass72_0_o *)sub_1C94098(&Method_GrandQuestClassSelectController___c__DisplayClass72_0__GetTaskOfChangeClassTab_b__2__);
    byte_4D273F2 = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestClassSelectController___c__DisplayClass72_0__GetTaskOfChangeClassTab_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_1C942F0(this, method);
  GrandQuestClassSelectController__SetClassTab(_4__this, (int32_t)method, _9__2, v2);
}


void GrandQuestClassSelectController___c__DisplayClass72_0___GetTaskOfChangeClassTab_b__2(
        GrandQuestClassSelectController___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  this->fields.isTabChange = 0;
}