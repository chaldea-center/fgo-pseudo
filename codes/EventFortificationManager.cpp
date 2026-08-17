void EventFortificationManager___ctor(EventFortificationManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventFortificationManager__AssertionCheck(EventFortificationManager_o *this, const MethodInfo *method)
{
  ;
}


void EventFortificationManager__CloseServantFortificationList(
        EventFortificationManager_o *this,
        bool requestFinish,
        UserServantEntity_o *servantData,
        const MethodInfo *method)
{
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  const MethodInfo_47A29F8 *v22; // x0
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  AvalonSceneManager_c *v26; // x8
  CommonUI_o *v27; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x21

  if ( (byte_596A670 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    sub_2213A60(&EventFortificationManager___c__DisplayClass32_0_TypeInfo);
    byte_596A670 = 1;
  }
  v6 = sub_2213CCC(EventFortificationManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_9;
  *(_QWORD *)(v6 + 16) = servantData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)servantData, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)this, v15, v16, v17, v18, v19, v20);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  v22 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  organizationPanel->fields.isTouchEnabled = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance(v22);
  v26 = AvalonSceneManager_TypeInfo;
  v27 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v24, v25);
    v26 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
  v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v6,
    (intptr_t)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
    0);
  if ( !v27 )
LABEL_9:
    sub_2213CDC(v7, v8);
  CommonUI__maskFadeout(v27, 1, DEFAULT_FADE_TIME, v29, 0);
}


void EventFortificationManager__CreateOrganizationUI(
        EventFortificationManager_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x22
  UnityEngine_GameObject_o *transform; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *autoFortificationButton_k__BackingField; // x22
  Il2CppObject *Component_object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_Transform_o *v19; // x21
  UnityEngine_Transform_o *v20; // x21
  AutoFortificationButtonComponent_o *v21; // x20
  int32_t eventId; // w21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3

  if ( (byte_596A668 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A668 = 1;
  }
  p_autoOrganizationBtn = &this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent, method);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(autoOrganizationBtn, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_25;
    autoFortificationButton_k__BackingField = (Il2CppObject *)assetManager->fields._autoFortificationButton_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              autoFortificationButton_k__BackingField,
                                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         transform,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    *p_autoOrganizationBtn = (struct AutoFortificationButtonComponent_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.autoOrganizationBtn,
      (int32_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0);
    if ( !transform )
      goto LABEL_25;
    UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)transform, parent, 0);
    transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0);
    v19 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE5 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v19 )
      goto LABEL_25;
    UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0);
    v20 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE0 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v20
      || (UnityEngine_Transform__set_localPosition(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
          (transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn) == 0)
      || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0)) == 0 )
    {
LABEL_25:
      sub_2213CDC(transform, v8);
    }
    UnityEngine_GameObject__SetActive(transform, 0, 0);
  }
  v21 = this->fields.autoOrganizationBtn;
  eventId = this->fields.eventId;
  v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__,
    0);
  if ( !v21 )
    goto LABEL_25;
  AutoFortificationButtonComponent__Init(v21, eventId, v23, v24);
}


void EventFortificationManager__DestroyList(EventFortificationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FortificationAssetManager_o *assetManager; // x0
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  UnityEngine_Object_o *v36; // x21
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  UnityEngine_Object_o *v48; // x21
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  UnityEngine_Object_o *v60; // x21
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x21
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  UnityEngine_Object_o *v72; // x21
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x21
  EventFortificationManager___c_c *v80; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__36_0; // x22
  Il2CppObject *v83; // x23
  struct EventFortificationManager___c_StaticFields *v84; // x0
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  System_Collections_Generic_List_object__o *v91; // x21
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  MissionNaviTransitionBoardItem_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v99; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v101; // x0
  struct EventFortificationManager___c_StaticFields *v102; // x8
  System_Action_object__o *_9__36_1; // x21
  Il2CppObject *v104; // x22
  struct EventFortificationManager___c_StaticFields *v105; // x0
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  System_Collections_Generic_List_object__o *v112; // x20
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7

  if ( (byte_596A673 & 1) == 0 )
  {
    sub_2213A60(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventFortificationManager___c__DestroyList_b__36_0__);
    sub_2213A60(&Method_EventFortificationManager___c__DestroyList_b__36_1__);
    sub_2213A60(&EventFortificationManager___c_TypeInfo);
    byte_596A673 = 1;
  }
  assetManager = this->fields.assetManager;
  if ( assetManager )
    FortificationAssetManager__Release(assetManager, this->fields.eventId, 0);
  p_fortificationCamera = &this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(fortificationCamera, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_64;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    *p_fortificationCamera = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fortificationCamera, 0, v13, v14, v15, v16, v17, v18);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(organizationPanel, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)*p_organizationPanel;
    if ( !*p_organizationPanel )
      goto LABEL_64;
    v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
    UnityEngine_Object__Destroy_83459800(v24, 0);
    *p_organizationPanel = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.organizationPanel, 0, v25, v26, v27, v28, v29, v30);
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v21);
  if ( UnityEngine_Object__op_Inequality(fortificationConfirmDialog, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_64;
    v36 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
    UnityEngine_Object__Destroy_83459800(v36, 0);
    *p_fortificationConfirmDialog = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.fortificationConfirmDialog,
      0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v33);
  if ( UnityEngine_Object__op_Inequality(fortificationAutomaticDialog, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)*p_fortificationAutomaticDialog;
    if ( !*p_fortificationAutomaticDialog )
      goto LABEL_64;
    v48 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
    UnityEngine_Object__Destroy_83459800(v48, 0);
    *p_fortificationAutomaticDialog = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.fortificationAutomaticDialog,
      0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v45);
  if ( UnityEngine_Object__op_Inequality(eventFortificationListViewManager, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)*p_eventFortificationListViewManager;
    if ( !*p_eventFortificationListViewManager )
      goto LABEL_64;
    v60 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58, v59);
    UnityEngine_Object__Destroy_83459800(v60, 0);
    *p_eventFortificationListViewManager = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventFortificationListViewManager,
      0,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  p_autoOrganizationBtn = &this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v57);
  if ( UnityEngine_Object__op_Inequality(autoOrganizationBtn, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)*p_autoOrganizationBtn;
    if ( *p_autoOrganizationBtn )
    {
      v72 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70, v71);
      UnityEngine_Object__Destroy_83459800(v72, 0);
      *p_autoOrganizationBtn = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.autoOrganizationBtn,
        0,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
      goto LABEL_47;
    }
LABEL_64:
    sub_2213CDC(v9, v7);
  }
LABEL_47:
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( eventFortificationWorkManagers )
  {
    v80 = EventFortificationManager___c_TypeInfo;
    if ( !*(&EventFortificationManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, v7, v69);
      v80 = EventFortificationManager___c_TypeInfo;
    }
    static_fields = v80->static_fields;
    _9__36_0 = (System_Action_object__o *)static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !*(&v80->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v80, v7, v69);
        static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v83 = (Il2CppObject *)static_fields->__9;
      _9__36_0 = (System_Action_object__o *)sub_2213CCC(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(_9__36_0, v83, Method_EventFortificationManager___c__DestroyList_b__36_0__, 0);
      v84 = EventFortificationManager___c_TypeInfo->static_fields;
      v84->__9__36_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v84->__9__36_0, (int32_t)_9__36_0, v85, v86, v87, v88, v89, v90);
    }
    System_Collections_Generic_List_object___ForEach(
      eventFortificationWorkManagers,
      (System_Action_T__o *)_9__36_0,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v91 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v91,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v91;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventFortificationWorkManagers,
      (int32_t)v91,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (MissionNaviTransitionBoardItem_o *)&this->fields.eventFortificationWorkMiniManagers;
  v99 = (System_Collections_Generic_List_object__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers )
  {
    v101 = EventFortificationManager___c_TypeInfo;
    if ( !*(&EventFortificationManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, v7, v69);
      v101 = EventFortificationManager___c_TypeInfo;
    }
    v102 = v101->static_fields;
    _9__36_1 = (System_Action_object__o *)v102->__9__36_1;
    if ( !_9__36_1 )
    {
      if ( !*(&v101->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v101, v7, v69);
        v102 = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v104 = (Il2CppObject *)v102->__9;
      _9__36_1 = (System_Action_object__o *)sub_2213CCC(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(_9__36_1, v104, Method_EventFortificationManager___c__DestroyList_b__36_1__, 0);
      v105 = EventFortificationManager___c_TypeInfo->static_fields;
      v105->__9__36_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v105->__9__36_1,
        (int32_t)_9__36_1,
        v106,
        v107,
        v108,
        v109,
        v110,
        v111);
    }
    System_Collections_Generic_List_object___ForEach(
      v99,
      (System_Action_T__o *)_9__36_1,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v112 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v112,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    p_eventFortificationWorkMiniManagers->klass = (MissionNaviTransitionBoardItem_c *)v112;
    sub_2213A04(p_eventFortificationWorkMiniManagers, (int32_t)v112, v113, v114, v115, v116, v117, v118);
  }
}


void EventFortificationManager__Init(
        EventFortificationManager_o *this,
        int32_t eventId,
        int32_t slotIndex,
        UnityEngine_Transform_o *uiParent,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w9
  System_Collections_Generic_List_EventFortificationWorkManager__c *v25; // x0
  System_Collections_Generic_List_object__o *v26; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x1
  MissionNaviTransitionBoardItem_o *p_assetManager; // x19
  FortificationAssetManager_o *klass; // x21
  struct FortificationAssetManager_o *assetManager; // t1
  FortificationAssetManager_o *v37; // x21
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t v44; // w19
  System_Action_o *v45; // x22

  if ( (byte_596A66C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&FortificationAssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_2213A60(&Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__);
    sub_2213A60(&EventFortificationManager___c__DisplayClass28_0_TypeInfo);
    byte_596A66C = 1;
  }
  v9 = sub_2213CCC(EventFortificationManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_8;
  *(_DWORD *)(v9 + 16) = eventId;
  *(_QWORD *)(v9 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = uiParent;
  *(_DWORD *)(v9 + 32) = slotIndex;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)uiParent, v18, v19, v20, v21, v22, v23);
  v24 = *(_DWORD *)(v9 + 32);
  v25 = System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo;
  this->fields.eventId = *(_DWORD *)(v9 + 16);
  this->fields.slotIndex = v24;
  v26 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFortificationWorkManagers,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  EventFortificationManager__InitFortificationWorkMini(this, v33);
  assetManager = this->fields.assetManager;
  p_assetManager = (MissionNaviTransitionBoardItem_o *)&this->fields.assetManager;
  klass = assetManager;
  if ( !assetManager )
  {
    v37 = (FortificationAssetManager_o *)sub_2213CCC(FortificationAssetManager_TypeInfo);
    FortificationAssetManager___ctor(v37, 0);
    p_assetManager->klass = (MissionNaviTransitionBoardItem_c *)v37;
    sub_2213A04(p_assetManager, (int32_t)v37, v38, v39, v40, v41, v42, v43);
    klass = (FortificationAssetManager_o *)p_assetManager->klass;
  }
  v44 = *(_DWORD *)(v9 + 16);
  v45 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)v9, Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__, 0);
  if ( !klass )
LABEL_8:
    sub_2213CDC(v10, v11);
  FortificationAssetManager__GetAssets(klass, v44, v45, 0);
}


void EventFortificationManager__InitDialog(EventFortificationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *fortificationConfirmDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  __int64 v24; // x2
  struct FortificationAssetManager_o *v25; // x8
  Il2CppObject *fortificationAutomaticDialog_k__BackingField; // x21
  Il2CppObject *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  UnityEngine_GameObject_o *v34; // x0
  const MethodInfo *v35; // x2

  if ( (byte_596A669 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A669 = 1;
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationConfirmDialog, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_24;
    fortificationConfirmDialog_k__BackingField = (Il2CppObject *)assetManager->fields._fortificationConfirmDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       fortificationConfirmDialog_k__BackingField,
                                       (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v6 )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v6,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    *p_fortificationConfirmDialog = (struct FortificationConfirmDialogComponent_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.fortificationConfirmDialog,
      (int32_t)Component_object,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    v6 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v19);
  }
  v6 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
  if ( !*p_fortificationConfirmDialog )
    goto LABEL_24;
  FortificationConfirmDialogComponent__Init((FortificationConfirmDialogComponent_o *)v6, this->fields.eventId, 0);
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationAutomaticDialog, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v25 = this->fields.assetManager;
    if ( v25 )
    {
      fortificationAutomaticDialog_k__BackingField = (Il2CppObject *)v25->fields._fortificationAutomaticDialog_k__BackingField;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v24);
      v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         fortificationAutomaticDialog_k__BackingField,
                                         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v6 )
      {
        v27 = UnityEngine_GameObject__GetComponent_object_(
                v6,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
        *p_fortificationAutomaticDialog = (struct FortificationAutomaticDialogComponent_o *)v27;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.fortificationAutomaticDialog,
          (int32_t)v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        v6 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
        if ( *p_fortificationAutomaticDialog )
        {
          v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
          EventFortificationManager__LocateObjectToUIRoot(this, v34, v35);
          goto LABEL_22;
        }
      }
    }
LABEL_24:
    sub_2213CDC(v6, v7);
  }
LABEL_22:
  v6 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
  if ( !*p_fortificationAutomaticDialog )
    goto LABEL_24;
  BaseDialog__Init((BaseDialog_o *)v6, 0);
}


void EventFortificationManager__InitFortificationWorkMini(EventFortificationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v5; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v7; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__25_0; // x21
  Il2CppObject *v10; // x22
  struct EventFortificationManager___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596A66B & 1) == 0 )
  {
    sub_2213A60(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkManager__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_2213A60(&Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__);
    sub_2213A60(&EventFortificationManager___c_TypeInfo);
    byte_596A66B = 1;
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (MissionNaviTransitionBoardItem_o *)&this->fields.eventFortificationWorkMiniManagers;
  v5 = (System_Collections_Generic_List_object__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers && v5->fields._size >= 1 )
  {
    v7 = EventFortificationManager___c_TypeInfo;
    if ( !*(&EventFortificationManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, method, v2);
      v7 = EventFortificationManager___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__25_0 = (System_Action_object__o *)static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, method, v2);
        static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__25_0 = (System_Action_object__o *)sub_2213CCC(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(
        _9__25_0,
        v10,
        Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__,
        0);
      v11 = EventFortificationManager___c_TypeInfo->static_fields;
      v11->__9__25_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__25_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__25_0, (int32_t)_9__25_0, v12, v13, v14, v15, v16, v17);
    }
    System_Collections_Generic_List_object___ForEach(
      v5,
      (System_Action_T__o *)_9__25_0,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  p_eventFortificationWorkMiniManagers->klass = (MissionNaviTransitionBoardItem_c *)v18;
  sub_2213A04(p_eventFortificationWorkMiniManagers, (int32_t)v18, v19, v20, v21, v22, v23, v24);
}


void EventFortificationManager__InitListViewPanel(EventFortificationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *eventFortificationListViewPanel_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v19; // x2

  if ( (byte_596A66A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A66A = 1;
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(eventFortificationListViewManager, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_13;
    eventFortificationListViewPanel_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationListViewPanel_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       eventFortificationListViewPanel_k__BackingField,
                                       (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v6
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v6,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___),
          *p_eventFortificationListViewManager = (struct EventFortificationListViewManager_o *)Component_object,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.eventFortificationListViewManager,
            (int32_t)Component_object,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17),
          (v6 = (UnityEngine_GameObject_o *)*p_eventFortificationListViewManager) == 0) )
    {
LABEL_13:
      sub_2213CDC(v6, v7);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v19);
  }
}


bool EventFortificationManager__IsOrganizationPanelActive(EventFortificationManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *organizationPanel; // x0

  organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
  if ( !organizationPanel
    || (organizationPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(organizationPanel, 0)) == 0 )
  {
    sub_2213CDC(organizationPanel, method);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)organizationPanel, 0);
}


void EventFortificationManager__LocateObjectToFotificationPanel(
        EventFortificationManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  EventFortificationManager_o *v6; // x20

  if ( !obj )
    goto LABEL_9;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_GameObject__get_transform(obj, 0);
  this = (EventFortificationManager_o *)UnityEngine_Component__get_gameObject(v4, 0);
  if ( !this )
    goto LABEL_9;
  this = (EventFortificationManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0);
  this = (EventFortificationManager_o *)UnityEngine_GameObject__get_transform(obj, 0);
  v6 = this;
  if ( !byte_5969AE5 )
  {
    this = (EventFortificationManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0)) == 0) )
  {
LABEL_9:
    sub_2213CDC(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventFortificationManager__LocateObjectToUIRoot(
        EventFortificationManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  EventFortificationManager_o *v4; // x20
  EventFortificationManager_o *v5; // x20

  if ( !obj )
    goto LABEL_8;
  v4 = this;
  this = (EventFortificationManager_o *)UnityEngine_GameObject__get_transform(obj, 0);
  if ( !this )
    goto LABEL_8;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.uiRoot, 0);
  this = (EventFortificationManager_o *)UnityEngine_GameObject__get_transform(obj, 0);
  v5 = this;
  if ( !byte_5969AE5 )
  {
    this = (EventFortificationManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v5
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v5,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0)) == 0) )
  {
LABEL_8:
    sub_2213CDC(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventFortificationManager__OnClickBackBtn(EventFortificationManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  void *organizationPanel; // x0
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__34_0; // x21
  Il2CppObject *v11; // x22
  struct EventFortificationManager___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *v19; // x8
  int32_t size; // w2
  int v21; // w9

  if ( (byte_596A672 & 1) == 0 )
  {
    sub_2213A60(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_2213A60(&Method_EventFortificationManager_OnClickBackBtn__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_2213A60(&Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__);
    sub_2213A60(&EventFortificationManager___c_TypeInfo);
    byte_596A672 = 1;
  }
  v3 = Method_EventFortificationManager_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickBackBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventFortificationManager_OnClickBackBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_20;
  FortificationOrganizationPanelComponent__Close((FortificationOrganizationPanelComponent_o *)organizationPanel, 0);
  organizationPanel = this->fields.autoOrganizationBtn;
  if ( !organizationPanel )
    goto LABEL_20;
  organizationPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)organizationPanel, 0);
  if ( !organizationPanel )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)organizationPanel, 0, 0);
  organizationPanel = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( !*(&EventFortificationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, v5, v7);
    organizationPanel = EventFortificationManager___c_TypeInfo;
  }
  static_fields = (struct EventFortificationManager___c_StaticFields *)*((_QWORD *)organizationPanel + 23);
  _9__34_0 = (System_Action_object__o *)static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !*((_DWORD *)organizationPanel + 57) )
    {
      j_il2cpp_runtime_class_init_0(organizationPanel, v5, v7);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_object__o *)sub_2213CCC(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(_9__34_0, v11, Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, 0);
    v12 = EventFortificationManager___c_TypeInfo->static_fields;
    v12->__9__34_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__34_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__34_0, (int32_t)_9__34_0, v13, v14, v15, v16, v17, v18);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_20;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)_9__34_0,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v19 = this->fields.eventFortificationWorkManagers;
  if ( !v19 )
    goto LABEL_20;
  size = v19->fields._size;
  v21 = v19->fields._version + 1;
  v19->fields._size = 0;
  v19->fields._version = v21;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0);
  organizationPanel = this->fields.eventFortificationListViewManager;
  if ( !organizationPanel )
LABEL_20:
    sub_2213CDC(organizationPanel, v5);
  ListViewManager__ClearScrollBarValue((ListViewManager_o *)organizationPanel, 1, 0);
}


void EventFortificationManager__OnClickOrganizationBtn(EventFortificationManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  FortificationAssetManager_o *assetManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_596A671 & 1) == 0 )
  {
    sub_2213A60(&Method_EventFortificationManager_OnClickOrganizationBtn__);
    byte_596A671 = 1;
  }
  v3 = Method_EventFortificationManager_OnClickOrganizationBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickOrganizationBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventFortificationManager_OnClickOrganizationBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  assetManager = this->fields.assetManager;
  if ( !assetManager
    || (assetManager = (FortificationAssetManager_o *)FortificationAssetManager__GetOrganizationBgTex(
                                                        assetManager,
                                                        this->fields.eventId,
                                                        this->fields.slotIndex,
                                                        0,
                                                        0),
        !this->fields.organizationPanel)
    || (FortificationOrganizationPanelComponent__Open(
          this->fields.organizationPanel,
          this->fields.eventId,
          (UnityEngine_Texture2D_o *)assetManager,
          this->fields.mainPanel,
          this->fields.eventRoot,
          this->fields.fortificationCamera,
          this->fields.mainCamera,
          0),
        (assetManager = (FortificationAssetManager_o *)this->fields.autoOrganizationBtn) == 0)
    || (assetManager = (FortificationAssetManager_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)assetManager,
                                                        0)) == 0 )
  {
    sub_2213CDC(assetManager, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assetManager, 1, 0);
  EventFortificationManager__SetFortificationWork(this, v7);
}


void EventFortificationManager__ResetRewardSceneObj(EventFortificationManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainPanel; // x0

  mainPanel = this->fields.mainPanel;
  if ( !mainPanel || (UnityEngine_GameObject__SetActive(mainPanel, 1, 0), (mainPanel = this->fields.eventRoot) == 0) )
    sub_2213CDC(mainPanel, method);
  UnityEngine_GameObject__SetActive(mainPanel, 1, 0);
}


void EventFortificationManager__SelectFortificationServant(
        EventFortificationManager_o *this,
        EventFortificationWorkItem_o *item,
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
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  AvalonSceneManager_c *v24; // x8
  CommonUI_o *v25; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  if ( (byte_596A66F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__);
    sub_2213A60(&EventFortificationManager___c__DisplayClass31_0_TypeInfo);
    byte_596A66F = 1;
  }
  v5 = sub_2213CCC(EventFortificationManager___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)item, v14, v15, v16, v17, v18, v19);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = AvalonSceneManager_TypeInfo;
  v25 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v22, v23);
    v24 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v24->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
    0);
  if ( !v25 )
LABEL_9:
    sub_2213CDC(v6, v7);
  CommonUI__maskFadeout(v25, 1, DEFAULT_FADE_TIME, v27, 0);
}


void EventFortificationManager__SetFortificationWork(EventFortificationManager_o *this, const MethodInfo *method)
{
  Il2CppObject *object; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x23
  Il2CppObject *eventFortificationWorkObj_k__BackingField; // x22
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x0
  int32_t eventId; // w24
  EventFortificationWorkManager_o *v16; // x22
  System_Action_object__o *v17; // x25
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Component_o *organizationPanel; // x0
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  UnityEngine_Transform_o *v28; // x0
  __int64 v29; // x1
  UnityEngine_Transform_o *v30; // x24
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  UnityEngine_Transform_o *v33; // x0
  __int64 v34; // x1
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x8
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A66D & 1) == 0 )
  {
    sub_2213A60(&System_Action_EventFortificationWorkItem__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_2213A60(&Method_EventFortificationManager_SelectFortificationServant__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_UIAtlas___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_14250/*"Terminal/Atlas/TerminalAtlas"*/);
    byte_596A66D = 1;
  }
  entities = 0;
  memset(&v50, 0, sizeof(v50));
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_14250/*"Terminal/Atlas/TerminalAtlas"*/,
             (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_UIAtlas___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_43;
  if ( !EventFortificationMaster__TryGetEntityList(
          (EventFortificationMaster_o *)Instance,
          &entities,
          this->fields.eventId,
          0) )
    return;
  Instance = (DataManager_o *)entities;
  if ( !entities )
LABEL_43:
    sub_2213CDC(Instance, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v50 = v49;
  v49.fields._list = 0;
  *(_QWORD *)&v49.fields._index = &v50;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v50,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v6 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_2213CDC(v6, v7);
    current = (EventFortificationEntity_o *)v50.fields._current;
    eventFortificationWorkObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkObj_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    v12 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkObj_k__BackingField,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v12 )
      sub_2213CDC(0, v13);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v12,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v16 = (EventFortificationWorkManager_o *)Component_object;
    v17 = (System_Action_object__o *)sub_2213CCC(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_object____ctor(
      v17,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0);
    if ( !v16 )
      sub_2213CDC(v18, v19);
    EventFortificationWorkManager__SetServantFortificationWork(
      v16,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v17,
      this->fields.organizationPanel,
      (UIAtlas_o *)object,
      0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
    organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
    if ( !organizationPanel )
      sub_2213CDC(0, v20);
    v23 = UnityEngine_Component__get_gameObject(organizationPanel, 0);
    if ( !v23 )
      sub_2213CDC(0, v24);
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v23, 0);
    GameObjectExtensions__SetParent(gameObject, transform, 0);
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
    if ( !v26 )
      sub_2213CDC(0, v27);
    v28 = UnityEngine_GameObject__get_transform(v26, 0);
    v30 = v28;
    if ( !byte_5969AE5 )
    {
      v28 = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v30 )
      sub_2213CDC(v28, v29);
    UnityEngine_Transform__set_localScale(v30, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
    if ( !v31 )
      sub_2213CDC(0, v32);
    v33 = UnityEngine_GameObject__get_transform(v31, 0);
    if ( !current )
      sub_2213CDC(v33, v34);
    if ( !v33 )
      sub_2213CDC(0, v34);
    v52.fields.y = (float)current->fields.y;
    v52.fields.x = (float)current->fields.x;
    v52.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v33, v52, 0);
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
    if ( !v35 )
      sub_2213CDC(0, v36);
    UnityEngine_GameObject__SetActive(v35, 1, 0);
    eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
    if ( !eventFortificationWorkManagers
      || (items = eventFortificationWorkManagers->fields._items,
          v46 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__,
          ++eventFortificationWorkManagers->fields._version,
          !items) )
    {
      sub_2213CDC(eventFortificationWorkManagers, v37);
    }
    size = eventFortificationWorkManagers->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkManagers,
        (Il2CppObject *)v16,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &items->obj.klass + size;
      eventFortificationWorkManagers->fields._size = size + 1;
      v48[4] = (Il2CppClass *)v16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 4), (int32_t)v16, v38, v39, v40, v41, v42, v43);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void EventFortificationManager__SetFortificationWorkMini(EventFortificationManager_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x21
  Il2CppObject *eventFortificationWorkMiniObj_k__BackingField; // x20
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x20
  int32_t eventId; // w22
  System_Action_object__o *v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A66E & 1) == 0 )
  {
    sub_2213A60(&System_Action_EventFortificationWorkItem__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_2213A60(&Method_EventFortificationManager_SelectFortificationServant__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A66E = 1;
  }
  entities = 0;
  memset(&v39, 0, sizeof(v39));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_33;
  if ( !EventFortificationMaster__TryGetEntityList(
          (EventFortificationMaster_o *)Instance,
          &entities,
          this->fields.eventId,
          0) )
    return;
  Instance = (DataManager_o *)entities;
  if ( !entities )
LABEL_33:
    sub_2213CDC(Instance, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v39 = v38;
  v38.fields._list = 0;
  *(_QWORD *)&v38.fields._index = &v39;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v39,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v5 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_2213CDC(v5, v6);
    current = (EventFortificationEntity_o *)v39.fields._current;
    eventFortificationWorkMiniObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkMiniObj_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v11 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkMiniObj_k__BackingField,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      sub_2213CDC(0, v12);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v11,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v15 = (System_Action_object__o *)sub_2213CCC(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_object____ctor(
      v15,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0);
    if ( !Component_object )
      sub_2213CDC(v16, v17);
    EventFortificationWorkManager__SetServantFortificationWork(
      (EventFortificationWorkManager_o *)Component_object,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v15,
      0,
      0,
      0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
    EventFortificationManager__LocateObjectToFotificationPanel(this, gameObject, v19);
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
    if ( !v20 )
      sub_2213CDC(0, v21);
    transform = UnityEngine_GameObject__get_transform(v20, 0);
    if ( !current )
      sub_2213CDC(transform, v23);
    if ( !transform )
      sub_2213CDC(0, v23);
    v41.fields.y = (float)current->fields.rewardSceneY;
    v41.fields.x = (float)current->fields.rewardSceneX;
    v41.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v41, 0);
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
    if ( !v24 )
      sub_2213CDC(0, v25);
    UnityEngine_GameObject__SetActive(v24, 1, 0);
    eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkMiniManagers;
    if ( !eventFortificationWorkMiniManagers
      || (items = eventFortificationWorkMiniManagers->fields._items,
          v35 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__,
          ++eventFortificationWorkMiniManagers->fields._version,
          !items) )
    {
      sub_2213CDC(eventFortificationWorkMiniManagers, v26);
    }
    size = eventFortificationWorkMiniManagers->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkMiniManagers,
        Component_object,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = &items->obj.klass + size;
      eventFortificationWorkMiniManagers->fields._size = size + 1;
      v37[4] = (Il2CppClass *)Component_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v37 + 4),
        (int32_t)Component_object,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void EventFortificationManager__SetFotificationOrganizationPanel(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *fortificationCamera_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x2
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  __int64 v22; // x2
  struct FortificationAssetManager_o *v23; // x8
  Il2CppObject *organizationPanel_k__BackingField; // x21
  Il2CppObject *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  UnityEngine_GameObject_o *v32; // x1
  const MethodInfo *v33; // x2

  if ( (byte_596A667 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A667 = 1;
  }
  p_fortificationCamera = &this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationCamera, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_22;
    fortificationCamera_k__BackingField = (Il2CppObject *)assetManager->fields._fortificationCamera_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       fortificationCamera_k__BackingField,
                                       (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v6 )
      goto LABEL_22;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v6,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    *p_fortificationCamera = (struct MapCamera_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.fortificationCamera,
      (int32_t)Component_object,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    v6 = (UnityEngine_GameObject_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v19);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(organizationPanel, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v23 = this->fields.assetManager;
    if ( v23 )
    {
      organizationPanel_k__BackingField = (Il2CppObject *)v23->fields._organizationPanel_k__BackingField;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v22);
      v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         organizationPanel_k__BackingField,
                                         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v6 )
      {
        v25 = UnityEngine_GameObject__GetComponent_object_(
                v6,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
        *p_organizationPanel = (struct FortificationOrganizationPanelComponent_o *)v25;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.organizationPanel,
          (int32_t)v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        v6 = (UnityEngine_GameObject_o *)*p_organizationPanel;
        if ( *p_organizationPanel )
        {
          v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
          EventFortificationManager__LocateObjectToUIRoot(this, v32, v33);
          return;
        }
      }
    }
LABEL_22:
    sub_2213CDC(v6, v7);
  }
}


void EventFortificationManager__SetTheDataRegisteredInTheMaster(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  ;
}


bool EventFortificationManager__TryGetUserEventFortificationEntity(
        EventFortificationManager_o *this,
        int32_t fortificationIdx,
        int32_t position,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *MasterData_object; // x22
  struct SetSvtInfo_array *setSvtInfos; // x8
  int max_length; // w9
  int v13; // w11
  char v14; // w10
  SetSvtInfo_o *v15; // x13
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596A674 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A674 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_22;
  Instance = (DataManager_o *)UserEventFortificationMaster__TryGetEntity(
                                (UserEventFortificationMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                this->fields.eventId,
                                fortificationIdx,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_22;
    setSvtInfos = entity->fields.setSvtInfos;
    if ( !setSvtInfos )
      goto LABEL_22;
    max_length = setSvtInfos->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        if ( max_length == v13 )
          sub_2213CE4(Instance);
        v15 = setSvtInfos->m_Items[v13];
        if ( !v15 )
          break;
        ++v13;
        v14 |= v15->fields.position == position;
        if ( (max_length & ~(max_length >> 31)) == v13 )
          return v14 & 1;
      }
LABEL_22:
      sub_2213CDC(Instance, v8);
    }
  }
  v14 = 0;
  return v14 & 1;
}


void EventFortificationManager___CreateOrganizationUI_b__22_0(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  FortificationAutomaticDialogComponent_o *fortificationAutomaticDialog; // x0
  __int64 v6; // x1
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  FortificationAutomaticDialogComponent_o *v8; // x20
  System_Action_o *v9; // x21
  System_Action_o *v10; // x22

  if ( (byte_596A675 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
    sub_2213A60(&Method_EventFortificationManager__CreateOrganizationUI_b__22_1__);
    sub_2213A60(&Method_EventFortificationManager__CreateOrganizationUI_b__22_2__);
    byte_596A675 = 1;
  }
  v3 = Method_EventFortificationManager__CreateOrganizationUI_b__22_0__;
  if ( (*((_BYTE *)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  fortificationAutomaticDialog = this->fields.fortificationAutomaticDialog;
  organizationPanel->fields.isTouchEnabled = 0;
  if ( !fortificationAutomaticDialog
    || (FortificationAutomaticDialogComponent__Init(fortificationAutomaticDialog, this->fields.eventId, 0),
        v8 = this->fields.fortificationAutomaticDialog,
        v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_1__,
          0),
        v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_2__,
          0),
        !v8) )
  {
LABEL_9:
    sub_2213CDC(fortificationAutomaticDialog, v6);
  }
  FortificationAutomaticDialogComponent__Open(v8, v9, v10, 0);
}


void EventFortificationManager___CreateOrganizationUI_b__22_1(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventFortificationManager___c_c *v4; // x0
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__22_3; // x21
  Il2CppObject *v8; // x22
  struct EventFortificationManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  struct EventFortificationManager___c_StaticFields *v18; // x8
  System_Action_object__o *_9__22_4; // x20
  Il2CppObject *v20; // x21
  struct EventFortificationManager___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_596A676 & 1) == 0 )
  {
    sub_2213A60(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_2213A60(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__);
    sub_2213A60(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__);
    sub_2213A60(&EventFortificationManager___c_TypeInfo);
    byte_596A676 = 1;
  }
  v4 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( !*(&EventFortificationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, method, v2);
    v4 = EventFortificationManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__22_3 = (System_Action_object__o *)static_fields->__9__22_3;
  if ( !_9__22_3 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__22_3 = (System_Action_object__o *)sub_2213CCC(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(_9__22_3, v8, Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__, 0);
    v9 = EventFortificationManager___c_TypeInfo->static_fields;
    v9->__9__22_3 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__22_3, (int32_t)_9__22_3, v10, v11, v12, v13, v14, v15);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_18;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)_9__22_3,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v4 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkMiniManagers;
  if ( !*(&EventFortificationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, method, v16);
    v4 = EventFortificationManager___c_TypeInfo;
  }
  v18 = v4->static_fields;
  _9__22_4 = (System_Action_object__o *)v18->__9__22_4;
  if ( !_9__22_4 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v16);
      v18 = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__22_4 = (System_Action_object__o *)sub_2213CCC(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(_9__22_4, v20, Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__, 0);
    v21 = EventFortificationManager___c_TypeInfo->static_fields;
    v21->__9__22_4 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__22_4, (int32_t)_9__22_4, v22, v23, v24, v25, v26, v27);
  }
  if ( !eventFortificationWorkMiniManagers )
LABEL_18:
    sub_2213CDC(v4, method);
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__22_4,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
}


void EventFortificationManager___CreateOrganizationUI_b__22_2(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8

  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    sub_2213CDC(this, method);
  organizationPanel->fields.isTouchEnabled = 1;
}


void EventFortificationManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A677 & 1) == 0 )
  {
    sub_2213A60(&EventFortificationManager___c_TypeInfo);
    byte_596A677 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventFortificationManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventFortificationManager___c_TypeInfo->static_fields->__9 = (struct EventFortificationManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventFortificationManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventFortificationManager___c___ctor(EventFortificationManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventFortificationManager___c___CloseServantFortificationList_b__32_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  EventFortificationWorkManager__ModifyItems(data, 0);
}


void EventFortificationManager___c___CloseServantFortificationList_b__32_2(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  EventFortificationWorkManager__ModifyItems(data, 0);
}


void EventFortificationManager___c___CreateOrganizationUI_b__22_3(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  EventFortificationWorkManager__ModifyItems(data, 0);
}


void EventFortificationManager___c___CreateOrganizationUI_b__22_4(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  EventFortificationWorkManager__ModifyItems(data, 0);
}


void EventFortificationManager___c___DestroyList_b__36_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_596A67B & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A67B = 1;
  }
  if ( !data )
    sub_2213CDC(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


void EventFortificationManager___c___DestroyList_b__36_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_596A67C & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A67C = 1;
  }
  if ( !data )
    sub_2213CDC(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


void EventFortificationManager___c___InitFortificationWorkMini_b__25_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_596A678 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A678 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, data, method);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0, 0);
  if ( v4 )
  {
    if ( !data )
      sub_2213CDC(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
}


void EventFortificationManager___c___OnClickBackBtn_b__34_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_596A67A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A67A = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, data, method);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0, 0);
  if ( v4 )
  {
    if ( !data )
      sub_2213CDC(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
}


void EventFortificationManager___c___SelectFortificationServant_b__31_1(
        EventFortificationManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  CommonUI_o *v5; // x19

  if ( (byte_596A679 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A679 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v3, v4);
  if ( !v5 )
    sub_2213CDC(Instance, v3);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void EventFortificationManager___c__DisplayClass28_0___ctor(
        EventFortificationManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventFortificationManager___c__DisplayClass28_0___Init_b__0(
        EventFortificationManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v5; // x1
  struct EventFortificationManager_o *v6; // x8
  struct EventFortificationManager_o *v7; // x8
  struct EventFortificationManager_o *v8; // x8
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x2
  struct EventFortificationManager_o *v11; // x8
  int32_t v12; // w20
  UISprite_o *organizationBtnSp; // x21
  struct EventFortificationManager_o *v14; // x8
  struct EventFortificationManager_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventFortificationManager_o *v17; // x8
  __int64 v18; // x2
  struct EventFortificationManager_o *v19; // x8
  int32_t eventId; // w20
  UISprite_o *maskSp; // x21
  struct EventFortificationManager_o *v22; // x8
  __int64 v23; // x2
  struct EventFortificationManager_o *v24; // x8
  UILabel_o *maskLb; // x20
  struct EventFortificationManager_o *v26; // x8
  struct UITexture_o *fortificationSlotBg; // x20
  const MethodInfo *v28; // x2

  if ( (byte_596A67D & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_18337/*"btn_txt_event_organization"*/);
    sub_2213A60(&StringLiteral_6776/*"FORTIFICATION_EVENT_END_MSG"*/);
    sub_2213A60(&StringLiteral_18221/*"btn_bg_event_organization"*/);
    sub_2213A60(&StringLiteral_20183/*"event_tab_bg_mask"*/);
    byte_596A67D = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  this->fields.eventId,
                                                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventEntity__IsEventPeriod(
                                                                        (EventEntity_o *)Master_object,
                                                                        0,
                                                                        0),
        ((unsigned __int8)Master_object & 1) == 0) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)_4__this->fields.organizationBtnSp;
      if ( Master_object )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GameObjectExtensions__GetParent(gameObject, 0);
        if ( Master_object )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)Master_object,
                                                                          0);
          if ( Master_object )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
            v17 = this->fields.__4__this;
            if ( v17 )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v17->fields.maskSp;
              if ( Master_object )
              {
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)Master_object,
                                                                                0);
                if ( Master_object )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                  v19 = this->fields.__4__this;
                  if ( v19 )
                  {
                    eventId = this->fields.eventId;
                    maskSp = v19->fields.maskSp;
                    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5, v18);
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_47569484(
                                                                                    eventId,
                                                                                    maskSp,
                                                                                    (System_String_o *)StringLiteral_20183/*"event_tab_bg_mask"*/,
                                                                                    0);
                    v22 = this->fields.__4__this;
                    if ( v22 )
                    {
                      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v22->fields.maskLb;
                      if ( Master_object )
                      {
                        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)Master_object,
                                                                                        0);
                        if ( Master_object )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                          v24 = this->fields.__4__this;
                          if ( v24 )
                          {
                            maskLb = v24->fields.maskLb;
                            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v23);
                            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                                            (System_String_o *)StringLiteral_6776/*"FORTIFICATION_EVENT_END_MSG"*/,
                                                                                            0);
                            if ( maskLb )
                            {
                              UILabel__set_text(maskLb, (System_String_o *)Master_object, 0);
                              goto LABEL_41;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_50:
    sub_2213CDC(Master_object, v5);
  }
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v6->fields.maskSp;
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v7->fields.maskLb;
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v8->fields.organizationBtnSp;
  if ( !Master_object )
    goto LABEL_50;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GameObjectExtensions__GetParent(v9, 0);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_50;
  v12 = this->fields.eventId;
  organizationBtnSp = v11->fields.organizationBtnSp;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5, v10);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_47569484(
                                                                  v12,
                                                                  organizationBtnSp,
                                                                  (System_String_o *)StringLiteral_18221/*"btn_bg_event_organization"*/,
                                                                  0);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_47569484(
                                                                  this->fields.eventId,
                                                                  v14->fields.organizationBtnTxtSp,
                                                                  (System_String_o *)StringLiteral_18337/*"btn_txt_event_organization"*/,
                                                                  0);
LABEL_41:
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v26->fields.assetManager;
  if ( !Master_object )
    goto LABEL_50;
  fortificationSlotBg = v26->fields.fortificationSlotBg;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)FortificationAssetManager__GetOrganizationBgTex(
                                                                  (FortificationAssetManager_o *)Master_object,
                                                                  this->fields.eventId,
                                                                  this->fields.slotIndex,
                                                                  1,
                                                                  0);
  if ( !fortificationSlotBg )
    goto LABEL_50;
  ((void (__fastcall *)(struct UITexture_o *, DataMasterBase_TMaster__TEntity__PKType__o *, const MethodInfo *))fortificationSlotBg->klass->vtable._27_set_mainTexture.methodPtr)(
    fortificationSlotBg,
    Master_object,
    fortificationSlotBg->klass->vtable._27_set_mainTexture.method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__SetFotificationOrganizationPanel((EventFortificationManager_o *)Master_object, v5);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__InitDialog((EventFortificationManager_o *)Master_object, v5);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__InitListViewPanel((EventFortificationManager_o *)Master_object, v5);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__SetFortificationWorkMini((EventFortificationManager_o *)Master_object, v5);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__CreateOrganizationUI(
    (EventFortificationManager_o *)Master_object,
    this->fields.uiParent,
    v28);
}


void EventFortificationManager___c__DisplayClass31_0___ctor(
        EventFortificationManager___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventFortificationManager___c__DisplayClass31_0___SelectFortificationServant_b__0(
        EventFortificationManager___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  EventFortificationManager___c__DisplayClass31_0_o *v2; // x19
  struct EventFortificationManager_o *_4__this; // x8
  struct EventFortificationManager_o *v4; // x24
  EventFortificationListViewManager_o *eventFortificationListViewManager; // x20
  int32_t eventId; // w21
  FortificationConfirmDialogComponent_o *fortificationConfirmDialog; // x22
  EventFortificationWorkItem_o *item; // x23
  System_Action_bool__object__o *v9; // x25
  const MethodInfo *v10; // x5
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct EventFortificationManager_o *v17; // x8
  struct EventFortificationListViewManager_o *v18; // x19
  void *static_fields; // x8
  System_Action_o *v20; // x20
  Il2CppObject *v21; // x21
  struct EventFortificationManager___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x2

  v2 = this;
  if ( (byte_596A67E & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__UserServantEntity__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventFortificationManager_CloseServantFortificationList__);
    sub_2213A60(&Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_2213A60(&EventFortificationManager___c_TypeInfo);
    byte_596A67E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (EventFortificationManager___c__DisplayClass31_0_o *)_4__this->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_17;
  this = (EventFortificationManager___c__DisplayClass31_0_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_17;
  eventFortificationListViewManager = v4->fields.eventFortificationListViewManager;
  eventId = v4->fields.eventId;
  fortificationConfirmDialog = v4->fields.fortificationConfirmDialog;
  item = v2->fields.item;
  v9 = (System_Action_bool__object__o *)sub_2213CCC(System_Action_bool__UserServantEntity__TypeInfo);
  System_Action_bool__object____ctor(
    v9,
    (Il2CppObject *)v4,
    Method_EventFortificationManager_CloseServantFortificationList__,
    0);
  if ( !eventFortificationListViewManager )
    goto LABEL_17;
  EventFortificationListViewManager__CreateList(
    eventFortificationListViewManager,
    eventId,
    fortificationConfirmDialog,
    item,
    (System_Action_bool__UserServantEntity__o *)v9,
    v10);
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_17;
  v18 = v17->fields.eventFortificationListViewManager;
  this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
  if ( !*(&EventFortificationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, method, v11);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
  }
  static_fields = this[5].fields.item;
  v20 = (System_Action_o *)*((_QWORD *)static_fields + 4);
  if ( !v20 )
  {
    if ( !HIDWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v11);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v21 = *(Il2CppObject **)static_fields;
    v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v20, v21, Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, 0);
    v22 = EventFortificationManager___c_TypeInfo->static_fields;
    v22->__9__31_1 = v20;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22->__9__31_1, (int32_t)v20, v23, v24, v25, v26, v27, v28);
  }
  if ( !v18 )
LABEL_17:
    sub_2213CDC(this, method);
  v18->fields.CallbackFunc2 = v20;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v18->fields.CallbackFunc2,
    (int32_t)v20,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  EventFortificationListViewManager__SetMode_38221188(v18, 2, v29);
}


void EventFortificationManager___c__DisplayClass32_0___ctor(
        EventFortificationManager___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventFortificationManager___c__DisplayClass32_0___CloseServantFortificationList_b__0(
        EventFortificationManager___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventFortificationManager___c__DisplayClass32_0_o *v3; // x19
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct EventFortificationManager_o *_4__this; // x8
  EventFortificationListViewManager_o *eventFortificationListViewManager; // x20
  const MethodInfo *v8; // x2
  struct EventFortificationManager_o *v9; // x8
  struct EventFortificationManager_o *v10; // x8
  __int64 v11; // x2
  struct EventFortificationManager_o *v12; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  void *static_fields; // x8
  System_Action_object__o *v15; // x21
  Il2CppObject *v16; // x22
  struct EventFortificationManager___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x2
  struct EventFortificationManager_o *v25; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  void *v27; // x8
  System_Action_object__o *v28; // x20
  Il2CppObject *v29; // x21
  struct EventFortificationManager___c_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x2
  CommonUI_o *v38; // x19

  v3 = this;
  if ( (byte_596A67F & 1) == 0 )
  {
    sub_2213A60(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__);
    sub_2213A60(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__);
    sub_2213A60(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    sub_2213A60(&EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_2213A60(&StringLiteral_17566/*"ar200"*/);
    byte_596A67F = 1;
  }
  if ( v3->fields.servantData )
  {
    v4 = Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__;
    if ( (*((_BYTE *)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__ + 83)
        & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                  v5,
                                                                  (System_String_o *)StringLiteral_17566/*"ar200"*/,
                                                                  0,
                                                                  0);
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  eventFortificationListViewManager = _4__this->fields.eventFortificationListViewManager;
  if ( !eventFortificationListViewManager )
    goto LABEL_34;
  EventFortificationListViewManager__StatusRequest(_4__this->fields.eventFortificationListViewManager, 0, v2);
  EventFortificationListViewManager__SetStatusKind(eventFortificationListViewManager, 0, v8);
  v9 = v3->fields.__4__this;
  if ( !v9 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v9->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_34;
  EventFortificationListViewManager__DestroyList((EventFortificationListViewManager_o *)this, method);
  v10 = v3->fields.__4__this;
  if ( !v10 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v10->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
  if ( !this )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v12 = v3->fields.__4__this;
  if ( !v12 )
    goto LABEL_34;
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)v12->fields.eventFortificationWorkManagers;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  if ( !*(&EventFortificationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, method, v11);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  }
  static_fields = this[5].fields.__4__this;
  v15 = (System_Action_object__o *)*((_QWORD *)static_fields + 5);
  if ( !v15 )
  {
    if ( !HIDWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v11);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v16 = *(Il2CppObject **)static_fields;
    v15 = (System_Action_object__o *)sub_2213CCC(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      v15,
      v16,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__,
      0);
    v17 = EventFortificationManager___c_TypeInfo->static_fields;
    v17->__9__32_1 = (struct System_Action_EventFortificationWorkManager__o *)v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__32_1, (int32_t)v15, v18, v19, v20, v21, v22, v23);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)v15,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v25 = v3->fields.__4__this;
  if ( !v25 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)v25->fields.eventFortificationWorkMiniManagers;
  if ( !*(&EventFortificationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, method, v24);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  }
  v27 = this[5].fields.__4__this;
  v28 = (System_Action_object__o *)*((_QWORD *)v27 + 6);
  if ( !v28 )
  {
    if ( !HIDWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v24);
      v27 = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v29 = *(Il2CppObject **)v27;
    v28 = (System_Action_object__o *)sub_2213CCC(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      v28,
      v29,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__,
      0);
    v30 = EventFortificationManager___c_TypeInfo->static_fields;
    v30->__9__32_2 = (struct System_Action_EventFortificationWorkManager__o *)v28;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->__9__32_2, (int32_t)v28, v31, v32, v33, v34, v35, v36);
  }
  if ( !eventFortificationWorkMiniManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)v28,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  this = (EventFortificationManager___c__DisplayClass32_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v38 = (CommonUI_o *)this;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method, v37);
  if ( !v38 )
LABEL_34:
    sub_2213CDC(this, method);
  CommonUI__maskFadein(v38, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}