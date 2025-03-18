void __fastcall EventFortificationManager___ctor(EventFortificationManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventFortificationManager__AssertionCheck(EventFortificationManager_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationManager__CloseServantFortificationList(
        EventFortificationManager_o *this,
        bool requestFinish,
        UserServantEntity_o *servantData,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v27; // x8
  CommonUI_o *v28; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x21

  if ( (byte_4C26028 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, requestFinish);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v8);
    sub_1C3B764(&EventFortificationManager___c__DisplayClass32_0_TypeInfo, v9);
    byte_4C26028 = 1;
  }
  v10 = sub_1C3B9B0(EventFortificationManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 16) = servantData;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)servantData, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)this, v19, v20, v21, v22, v23, v24);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = AvalonSceneManager_TypeInfo;
  v28 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v27 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
  v30 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v10,
    (intptr_t)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
    0LL);
  if ( !v28 )
LABEL_9:
    sub_1C3B9C0(v11, v12);
  CommonUI__maskFadeout(v28, 1, DEFAULT_FADE_TIME, v30, 0LL);
}


void __fastcall EventFortificationManager__CreateOrganizationUI(
        EventFortificationManager_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x22
  __int64 transform; // x0
  __int64 v12; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *autoFortificationButton_k__BackingField; // x22
  Il2CppObject *Component_object; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UnityEngine_Transform_o *v22; // x21
  UnityEngine_Transform_o *v23; // x21
  AutoFortificationButtonComponent_o *v24; // x20
  int32_t eventId; // w21
  System_Action_o *v26; // x22

  if ( (byte_4C26020 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, parent);
    sub_1C3B764(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, v5);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___, v6);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    byte_4C26020 = 1;
  }
  p_autoOrganizationBtn = &this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Equality(autoOrganizationBtn, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_25;
    autoFortificationButton_k__BackingField = (Il2CppObject *)assetManager->fields._autoFortificationButton_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (__int64)UnityEngine_Object__Instantiate_object_(
                           autoFortificationButton_k__BackingField,
                           (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    *p_autoOrganizationBtn = (struct AutoFortificationButtonComponent_o *)Component_object;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.autoOrganizationBtn,
      (int64_t)Component_object,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    transform = (__int64)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_25;
    UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)transform, parent, 0LL);
    transform = (__int64)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    v22 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C1C516 )
    {
      transform = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v12);
      byte_4C1C516 = 1;
    }
    if ( !v22 )
      goto LABEL_25;
    UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (__int64)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    v23 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C1C511 )
    {
      transform = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v12);
      byte_4C1C511 = 1;
    }
    if ( !v23
      || (UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
          (transform = (__int64)*p_autoOrganizationBtn) == 0)
      || (transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0 )
    {
LABEL_25:
      sub_1C3B9C0(transform, v12);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  v24 = this->fields.autoOrganizationBtn;
  eventId = this->fields.eventId;
  v26 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__,
    0LL);
  if ( !v24 )
    goto LABEL_25;
  AutoFortificationButtonComponent__Init(v24, eventId, v26, 0LL);
}


void __fastcall EventFortificationManager__DestroyList(EventFortificationManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  FortificationAssetManager_o *assetManager; // x0
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  __int64 v14; // x1
  UnityEngine_Component_o *v15; // x0
  UnityEngine_Object_o *gameObject; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  UnityEngine_Object_o *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_Object_o *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  UnityEngine_Object_o *v43; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_Object_o *v52; // x21
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x21
  UnityEngine_Object_o *v61; // x21
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x21
  EventFortificationManager___c_c *v69; // x0
  System_Action_object__o *_9__36_0; // x22
  Il2CppObject *v71; // x23
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_List_object__o *v79; // x21
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  PartyOrganizationUtility_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v87; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v89; // x0
  System_Action_object__o *_9__36_1; // x21
  Il2CppObject *v91; // x22
  struct EventFortificationManager___c_StaticFields *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  System_Collections_Generic_List_object__o *v99; // x20
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7

  if ( (byte_4C2602B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v5);
    sub_1C3B764(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&Method_EventFortificationManager___c__DestroyList_b__36_0__, v8);
    sub_1C3B764(&Method_EventFortificationManager___c__DestroyList_b__36_1__, v9);
    sub_1C3B764(&EventFortificationManager___c_TypeInfo, v10);
    byte_4C2602B = 1;
  }
  assetManager = this->fields.assetManager;
  if ( assetManager )
    FortificationAssetManager__Release(assetManager, this->fields.eventId, v2);
  p_fortificationCamera = &this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationCamera, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_64;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
    *p_fortificationCamera = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fortificationCamera, 0LL, v17, v18, v19, v20, v21, v22);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(organizationPanel, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)*p_organizationPanel;
    if ( !*p_organizationPanel )
      goto LABEL_64;
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v25, 0LL);
    *p_organizationPanel = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.organizationPanel, 0LL, v26, v27, v28, v29, v30, v31);
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationConfirmDialog, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_64;
    v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v34, 0LL);
    *p_fortificationConfirmDialog = 0LL;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.fortificationConfirmDialog,
      0LL,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationAutomaticDialog, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)*p_fortificationAutomaticDialog;
    if ( !*p_fortificationAutomaticDialog )
      goto LABEL_64;
    v43 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v43, 0LL);
    *p_fortificationAutomaticDialog = 0LL;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.fortificationAutomaticDialog,
      0LL,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventFortificationListViewManager, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)*p_eventFortificationListViewManager;
    if ( !*p_eventFortificationListViewManager )
      goto LABEL_64;
    v52 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v52, 0LL);
    *p_eventFortificationListViewManager = 0LL;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.eventFortificationListViewManager,
      0LL,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  p_autoOrganizationBtn = &this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(autoOrganizationBtn, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)*p_autoOrganizationBtn;
    if ( *p_autoOrganizationBtn )
    {
      v61 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71122748(v61, 0LL);
      *p_autoOrganizationBtn = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.autoOrganizationBtn, 0LL, v62, v63, v64, v65, v66, v67);
      goto LABEL_47;
    }
LABEL_64:
    sub_1C3B9C0(v15, v14);
  }
LABEL_47:
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( eventFortificationWorkManagers )
  {
    v69 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v69 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_0 = (System_Action_object__o *)v69->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v69->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v69);
        v69 = EventFortificationManager___c_TypeInfo;
      }
      v71 = (Il2CppObject *)v69->static_fields->__9;
      _9__36_0 = (System_Action_object__o *)sub_1C3B9B0(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(_9__36_0, v71, Method_EventFortificationManager___c__DestroyList_b__36_0__, 0LL);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__36_0,
        (int64_t)_9__36_0,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    System_Collections_Generic_List_object___ForEach(
      eventFortificationWorkManagers,
      (System_Action_T__o *)_9__36_0,
      (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v79 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v79,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v79;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.eventFortificationWorkManagers,
      (int64_t)v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (PartyOrganizationUtility_o *)&this->fields.eventFortificationWorkMiniManagers;
  v87 = (System_Collections_Generic_List_object__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers )
  {
    v89 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v89 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_1 = (System_Action_object__o *)v89->static_fields->__9__36_1;
    if ( !_9__36_1 )
    {
      if ( !v89->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v89);
        v89 = EventFortificationManager___c_TypeInfo;
      }
      v91 = (Il2CppObject *)v89->static_fields->__9;
      _9__36_1 = (System_Action_object__o *)sub_1C3B9B0(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(_9__36_1, v91, Method_EventFortificationManager___c__DestroyList_b__36_1__, 0LL);
      v92 = EventFortificationManager___c_TypeInfo->static_fields;
      v92->__9__36_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_1;
      sub_1C3B708((PartyOrganizationUtility_o *)&v92->__9__36_1, (int64_t)_9__36_1, v93, v94, v95, v96, v97, v98);
    }
    System_Collections_Generic_List_object___ForEach(
      v87,
      (System_Action_T__o *)_9__36_1,
      (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v99 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v99,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    p_eventFortificationWorkMiniManagers->klass = (PartyOrganizationUtility_c *)v99;
    sub_1C3B708(p_eventFortificationWorkMiniManagers, (int64_t)v99, v100, v101, v102, v103, v104, v105);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationManager__Init(
        EventFortificationManager_o *this,
        int32_t eventId,
        int32_t slotIndex,
        UnityEngine_Transform_o *uiParent,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x1
  PartyOrganizationUtility_o *p_assetManager; // x19
  FortificationAssetManager_o *klass; // x21
  struct FortificationAssetManager_o *assetManager; // t1
  FortificationAssetManager_o *v40; // x21
  const MethodInfo *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int32_t v48; // w19
  System_Action_o *v49; // x22
  const MethodInfo *v50; // x3

  if ( (byte_4C26024 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&FortificationAssetManager_TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v11);
    sub_1C3B764(&Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__, v12);
    sub_1C3B764(&EventFortificationManager___c__DisplayClass28_0_TypeInfo, v13);
    byte_4C26024 = 1;
  }
  v14 = sub_1C3B9B0(EventFortificationManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_DWORD *)(v14 + 16) = eventId;
  *(_QWORD *)(v14 + 24) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 40) = uiParent;
  *(_DWORD *)(v14 + 32) = slotIndex;
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 40), (int64_t)uiParent, v23, v24, v25, v26, v27, v28);
  this->fields.eventId = *(_DWORD *)(v14 + 16);
  this->fields.slotIndex = *(_DWORD *)(v14 + 32);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v29;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.eventFortificationWorkManagers,
    (int64_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  EventFortificationManager__InitFortificationWorkMini(this, v36);
  assetManager = this->fields.assetManager;
  p_assetManager = (PartyOrganizationUtility_o *)&this->fields.assetManager;
  klass = assetManager;
  if ( !assetManager )
  {
    v40 = (FortificationAssetManager_o *)sub_1C3B9B0(FortificationAssetManager_TypeInfo);
    FortificationAssetManager___ctor(v40, v41);
    p_assetManager->klass = (PartyOrganizationUtility_c *)v40;
    sub_1C3B708(p_assetManager, (int64_t)v40, v42, v43, v44, v45, v46, v47);
    klass = (FortificationAssetManager_o *)p_assetManager->klass;
  }
  v48 = *(_DWORD *)(v14 + 16);
  v49 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v14,
    Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__,
    0LL);
  if ( !klass )
LABEL_8:
    sub_1C3B9C0(v15, v16);
  FortificationAssetManager__GetAssets(klass, v48, v49, v50);
}


void __fastcall EventFortificationManager__InitDialog(EventFortificationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *fortificationConfirmDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v21; // x2
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  struct FortificationAssetManager_o *v24; // x8
  Il2CppObject *fortificationAutomaticDialog_k__BackingField; // x21
  Il2CppObject *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_GameObject_o *v33; // x0
  const MethodInfo *v34; // x2

  if ( (byte_4C26021 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___, v3);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C26021 = 1;
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_24;
    fortificationConfirmDialog_k__BackingField = (Il2CppObject *)assetManager->fields._fortificationConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       fortificationConfirmDialog_k__BackingField,
                                       (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v8,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    *p_fortificationConfirmDialog = (struct FortificationConfirmDialogComponent_o *)Component_object;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.fortificationConfirmDialog,
      (int64_t)Component_object,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v8 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v21);
  }
  v8 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
  if ( !*p_fortificationConfirmDialog )
    goto LABEL_24;
  FortificationConfirmDialogComponent__Init((FortificationConfirmDialogComponent_o *)v8, this->fields.eventId, v10);
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationAutomaticDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v24 = this->fields.assetManager;
    if ( v24 )
    {
      fortificationAutomaticDialog_k__BackingField = (Il2CppObject *)v24->fields._fortificationAutomaticDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         fortificationAutomaticDialog_k__BackingField,
                                         (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        v26 = UnityEngine_GameObject__GetComponent_object_(
                v8,
                (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
        *p_fortificationAutomaticDialog = (struct FortificationAutomaticDialogComponent_o *)v26;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.fortificationAutomaticDialog,
          (int64_t)v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        v8 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
        if ( *p_fortificationAutomaticDialog )
        {
          v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v33, v34);
          goto LABEL_22;
        }
      }
    }
LABEL_24:
    sub_1C3B9C0(v8, v9);
  }
LABEL_22:
  v8 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
  if ( !*p_fortificationAutomaticDialog )
    goto LABEL_24;
  BaseDialog__Init((BaseDialog_o *)v8, 0LL);
}


void __fastcall EventFortificationManager__InitFortificationWorkMini(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  PartyOrganizationUtility_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v10; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v12; // x0
  System_Action_object__o *_9__25_0; // x21
  Il2CppObject *v14; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4C26023 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationWorkManager__get_Count__, v5);
    sub_1C3B764(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v6);
    sub_1C3B764(&Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__, v7);
    sub_1C3B764(&EventFortificationManager___c_TypeInfo, v8);
    byte_4C26023 = 1;
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (PartyOrganizationUtility_o *)&this->fields.eventFortificationWorkMiniManagers;
  v10 = (System_Collections_Generic_List_object__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers && v10->fields._size >= 1 )
  {
    v12 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v12 = EventFortificationManager___c_TypeInfo;
    }
    _9__25_0 = (System_Action_object__o *)v12->static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = EventFortificationManager___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__25_0 = (System_Action_object__o *)sub_1C3B9B0(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(
        _9__25_0,
        v14,
        Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__,
        0LL);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__25_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__25_0,
        (int64_t)_9__25_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    System_Collections_Generic_List_object___ForEach(
      v10,
      (System_Action_T__o *)_9__25_0,
      (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  p_eventFortificationWorkMiniManagers->klass = (PartyOrganizationUtility_c *)v22;
  sub_1C3B708(p_eventFortificationWorkMiniManagers, (int64_t)v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall EventFortificationManager__InitListViewPanel(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_GameObject_o *v7; // x0
  __int64 v8; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *eventFortificationListViewPanel_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v19; // x2

  if ( (byte_4C26022 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___, method);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    byte_4C26022 = 1;
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(eventFortificationListViewManager, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_13;
    eventFortificationListViewPanel_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationListViewPanel_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       eventFortificationListViewPanel_k__BackingField,
                                       (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v7
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v7,
                               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___),
          *p_eventFortificationListViewManager = (struct EventFortificationListViewManager_o *)Component_object,
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&this->fields.eventFortificationListViewManager,
            (int64_t)Component_object,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17),
          (v7 = (UnityEngine_GameObject_o *)*p_eventFortificationListViewManager) == 0LL) )
    {
LABEL_13:
      sub_1C3B9C0(v7, v8);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v19);
  }
}


bool __fastcall EventFortificationManager__IsOrganizationPanelActive(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *organizationPanel; // x0

  organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
  if ( !organizationPanel
    || (organizationPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(organizationPanel, 0LL)) == 0LL )
  {
    sub_1C3B9C0(organizationPanel, method);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)organizationPanel, 0LL);
}


void __fastcall EventFortificationManager__LocateObjectToFotificationPanel(
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
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  this = (EventFortificationManager_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !this )
    goto LABEL_9;
  this = (EventFortificationManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0LL);
  this = (EventFortificationManager_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  v6 = this;
  if ( !byte_4C1C516 )
  {
    this = (EventFortificationManager_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, obj);
    byte_4C1C516 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1C3B9C0(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventFortificationManager__LocateObjectToUIRoot(
        EventFortificationManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  EventFortificationManager_o *v4; // x20
  EventFortificationManager_o *v5; // x20

  if ( !obj )
    goto LABEL_8;
  v4 = this;
  this = (EventFortificationManager_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  if ( !this )
    goto LABEL_8;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.uiRoot, 0LL);
  this = (EventFortificationManager_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  v5 = this;
  if ( !byte_4C1C516 )
  {
    this = (EventFortificationManager_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, obj);
    byte_4C1C516 = 1;
  }
  if ( !v5
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v5,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_8:
    sub_1C3B9C0(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventFortificationManager__OnClickBackBtn(EventFortificationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  void *organizationPanel; // x0
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  System_Action_object__o *v13; // x21
  Il2CppObject *v14; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *v22; // x8
  int32_t size; // w2
  int v24; // w9

  if ( (byte_4C2602A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1C3B764(&Method_EventFortificationManager_OnClickBackBtn__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_1C3B764(&Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, v6);
    sub_1C3B764(&EventFortificationManager___c_TypeInfo, v7);
    byte_4C2602A = 1;
  }
  v8 = Method_EventFortificationManager_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickBackBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C3B77C(Method_EventFortificationManager_OnClickBackBtn__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C3B748(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0LL);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_20;
  FortificationOrganizationPanelComponent__Close((FortificationOrganizationPanelComponent_o *)organizationPanel, v10);
  organizationPanel = this->fields.autoOrganizationBtn;
  if ( !organizationPanel )
    goto LABEL_20;
  organizationPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)organizationPanel, 0LL);
  if ( !organizationPanel )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)organizationPanel, 0, 0LL);
  organizationPanel = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    organizationPanel = EventFortificationManager___c_TypeInfo;
  }
  v13 = *(System_Action_object__o **)(*((_QWORD *)organizationPanel + 23) + 56LL);
  if ( !v13 )
  {
    if ( !*((_DWORD *)organizationPanel + 56) )
    {
      j_il2cpp_runtime_class_init_0(organizationPanel);
      organizationPanel = EventFortificationManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)**((_QWORD **)organizationPanel + 23);
    v13 = (System_Action_object__o *)sub_1C3B9B0(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(v13, v14, Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, 0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Action_EventFortificationWorkManager__o *)v13;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__34_0, (int64_t)v13, v16, v17, v18, v19, v20, v21);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_20;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)v13,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v22 = this->fields.eventFortificationWorkManagers;
  if ( !v22 )
    goto LABEL_20;
  size = v22->fields._size;
  v24 = v22->fields._version + 1;
  v22->fields._size = 0;
  v22->fields._version = v24;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v22->fields._items, 0, size, 0LL);
  organizationPanel = this->fields.eventFortificationListViewManager;
  if ( !organizationPanel )
LABEL_20:
    sub_1C3B9C0(organizationPanel, v10);
  ListViewManager__ClearScrollBarValue((ListViewManager_o *)organizationPanel, 1, 0LL);
}


void __fastcall EventFortificationManager__OnClickOrganizationBtn(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  FortificationAssetManager_o *assetManager; // x0
  const MethodInfo *v8; // x7
  const MethodInfo *v9; // x1

  if ( (byte_4C26029 & 1) == 0 )
  {
    sub_1C3B764(&Method_EventFortificationManager_OnClickOrganizationBtn__, method);
    byte_4C26029 = 1;
  }
  v3 = Method_EventFortificationManager_OnClickOrganizationBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickOrganizationBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_EventFortificationManager_OnClickOrganizationBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  assetManager = this->fields.assetManager;
  if ( !assetManager
    || (assetManager = (FortificationAssetManager_o *)FortificationAssetManager__GetOrganizationBgTex(
                                                        assetManager,
                                                        this->fields.eventId,
                                                        this->fields.slotIndex,
                                                        0,
                                                        v6),
        !this->fields.organizationPanel)
    || (FortificationOrganizationPanelComponent__Open(
          this->fields.organizationPanel,
          v5,
          (UnityEngine_Texture2D_o *)assetManager,
          this->fields.mainPanel,
          this->fields.eventRoot,
          this->fields.fortificationCamera,
          this->fields.mainCamera,
          v8),
        (assetManager = (FortificationAssetManager_o *)this->fields.autoOrganizationBtn) == 0LL)
    || (assetManager = (FortificationAssetManager_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)assetManager,
                                                        0LL)) == 0LL )
  {
    sub_1C3B9C0(assetManager, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assetManager, 1, 0LL);
  EventFortificationManager__SetFortificationWork(this, v9);
}


void __fastcall EventFortificationManager__ResetRewardSceneObj(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainPanel; // x0

  mainPanel = this->fields.mainPanel;
  if ( !mainPanel || (UnityEngine_GameObject__SetActive(mainPanel, 1, 0LL), (mainPanel = this->fields.eventRoot) == 0LL) )
    sub_1C3B9C0(mainPanel, method);
  UnityEngine_GameObject__SetActive(mainPanel, 1, 0LL);
}


void __fastcall EventFortificationManager__SelectFortificationServant(
        EventFortificationManager_o *this,
        EventFortificationWorkItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v26; // x8
  CommonUI_o *v27; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x21

  if ( (byte_4C26027 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, item);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__, v7);
    sub_1C3B764(&EventFortificationManager___c__DisplayClass31_0_TypeInfo, v8);
    byte_4C26027 = 1;
  }
  v9 = sub_1C3B9B0(EventFortificationManager___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = item;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)item, v18, v19, v20, v21, v22, v23);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = AvalonSceneManager_TypeInfo;
  v27 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v26 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
  v29 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v9,
    Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
    0LL);
  if ( !v27 )
LABEL_9:
    sub_1C3B9C0(v10, v11);
  CommonUI__maskFadeout(v27, 1, DEFAULT_FADE_TIME, v29, 0LL);
}


void __fastcall EventFortificationManager__SetFortificationWork(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *object; // x20
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x23
  Il2CppObject *eventFortificationWorkObj_k__BackingField; // x22
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  Il2CppObject *Component_object; // x0
  int32_t eventId; // w24
  EventFortificationWorkManager_o *v28; // x22
  System_Action_object__o *v29; // x25
  __int64 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x6
  __int64 v33; // x1
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Component_o *organizationPanel; // x0
  UnityEngine_GameObject_o *v36; // x0
  __int64 v37; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x0
  __int64 v42; // x1
  UnityEngine_Transform_o *v43; // x24
  UnityEngine_GameObject_o *v44; // x0
  __int64 v45; // x1
  UnityEngine_Transform_o *v46; // x0
  __int64 v47; // x1
  UnityEngine_GameObject_o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x8
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C26025 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_EventFortificationWorkItem__TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventFortificationMaster___, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v6);
    sub_1C3B764(&Method_EventFortificationManager_SelectFortificationServant__, v7);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v10);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v12);
    sub_1C3B764(&Method_UnityEngine_Resources_Load_UIAtlas___, v13);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C3B764(&StringLiteral_13882/*"The specified value is not valid in the '{0}' enumeration."*/, v15);
    byte_4C26025 = 1;
  }
  entities = 0LL;
  memset(&v63, 0, sizeof(v63));
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_13882/*"The specified value is not valid in the '{0}' enumeration."*/,
             (const MethodInfo_308660C *)Method_UnityEngine_Resources_Load_UIAtlas___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_44;
  if ( !EventFortificationMaster__TryGetEntityList(
          (EventFortificationMaster_o *)Instance,
          &entities,
          this->fields.eventId,
          0LL) )
    return;
  Instance = (DataManager_o *)entities;
  if ( !entities )
LABEL_44:
    sub_1C3B9C0(Instance, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v63 = v62;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v19 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1C3B9C0(v19, v20);
    current = (EventFortificationEntity_o *)v63.fields._current;
    eventFortificationWorkObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v24 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkObj_k__BackingField,
            (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v24 )
      sub_1C3B9C0(0LL, v25);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v24,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v28 = (EventFortificationWorkManager_o *)Component_object;
    v29 = (System_Action_object__o *)sub_1C3B9B0(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_object____ctor(
      v29,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0LL);
    if ( !v28 )
      sub_1C3B9C0(v30, v31);
    EventFortificationWorkManager__SetServantFortificationWork(
      v28,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v29,
      this->fields.organizationPanel,
      (UIAtlas_o *)object,
      v32);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0LL);
    organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
    if ( !organizationPanel )
      sub_1C3B9C0(0LL, v33);
    v36 = UnityEngine_Component__get_gameObject(organizationPanel, 0LL);
    if ( !v36 )
      sub_1C3B9C0(0LL, v37);
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v36, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0LL);
    if ( !v39 )
      sub_1C3B9C0(0LL, v40);
    v41 = (__int64)UnityEngine_GameObject__get_transform(v39, 0LL);
    v43 = (UnityEngine_Transform_o *)v41;
    if ( !byte_4C1C516 )
    {
      v41 = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v42);
      byte_4C1C516 = 1;
    }
    if ( !v43 )
      sub_1C3B9C0(v41, v42);
    UnityEngine_Transform__set_localScale(v43, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0LL);
    if ( !v44 )
      sub_1C3B9C0(0LL, v45);
    v46 = UnityEngine_GameObject__get_transform(v44, 0LL);
    if ( !current )
      sub_1C3B9C0(v46, v47);
    if ( !v46 )
      sub_1C3B9C0(0LL, v47);
    v65.fields.y = (float)current->fields.y;
    v65.fields.x = (float)current->fields.x;
    v65.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v46, v65, 0LL);
    v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0LL);
    if ( !v48 )
      sub_1C3B9C0(0LL, v49);
    UnityEngine_GameObject__SetActive(v48, 1, 0LL);
    eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
    if ( !eventFortificationWorkManagers )
      sub_1C3B9C0(0LL, v50);
    items = eventFortificationWorkManagers->fields._items;
    v59 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkManagers->fields._version;
    if ( !items )
      sub_1C3B9C0(eventFortificationWorkManagers, v50);
    size = eventFortificationWorkManagers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkManagers,
        (Il2CppObject *)v28,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &items->obj.klass + size;
      eventFortificationWorkManagers->fields._size = size + 1;
      v61[4] = (Il2CppClass *)v28;
      sub_1C3B708((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v28, v51, v52, v53, v54, v55, v56);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void __fastcall EventFortificationManager__SetFortificationWorkMini(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x21
  Il2CppObject *eventFortificationWorkMiniObj_k__BackingField; // x20
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  Il2CppObject *Component_object; // x20
  int32_t eventId; // w22
  System_Action_object__o *v25; // x23
  __int64 v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x6
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v30; // x2
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v34; // x1
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x8
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C26026 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_EventFortificationWorkItem__TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventFortificationMaster___, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v6);
    sub_1C3B764(&Method_EventFortificationManager_SelectFortificationServant__, v7);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v10);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4C26026 = 1;
  }
  entities = 0LL;
  memset(&v50, 0, sizeof(v50));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_34;
  if ( !EventFortificationMaster__TryGetEntityList(
          (EventFortificationMaster_o *)Instance,
          &entities,
          this->fields.eventId,
          0LL) )
    return;
  Instance = (DataManager_o *)entities;
  if ( !entities )
LABEL_34:
    sub_1C3B9C0(Instance, v15);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v50 = v49;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v16 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1C3B9C0(v16, v17);
    current = (EventFortificationEntity_o *)v50.fields._current;
    eventFortificationWorkMiniObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkMiniObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkMiniObj_k__BackingField,
            (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v21 )
      sub_1C3B9C0(0LL, v22);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v21,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v25 = (System_Action_object__o *)sub_1C3B9B0(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_object____ctor(
      v25,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0LL);
    if ( !Component_object )
      sub_1C3B9C0(v26, v27);
    EventFortificationWorkManager__SetServantFortificationWork(
      (EventFortificationWorkManager_o *)Component_object,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v25,
      0LL,
      0LL,
      v28);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    EventFortificationManager__LocateObjectToFotificationPanel(this, gameObject, v30);
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    if ( !v31 )
      sub_1C3B9C0(0LL, v32);
    transform = UnityEngine_GameObject__get_transform(v31, 0LL);
    if ( !current )
      sub_1C3B9C0(transform, v34);
    if ( !transform )
      sub_1C3B9C0(0LL, v34);
    v52.fields.y = (float)current->fields.rewardSceneY;
    v52.fields.x = (float)current->fields.rewardSceneX;
    v52.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v52, 0LL);
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    if ( !v35 )
      sub_1C3B9C0(0LL, v36);
    UnityEngine_GameObject__SetActive(v35, 1, 0LL);
    eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkMiniManagers;
    if ( !eventFortificationWorkMiniManagers )
      sub_1C3B9C0(0LL, v37);
    items = eventFortificationWorkMiniManagers->fields._items;
    v46 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkMiniManagers->fields._version;
    if ( !items )
      sub_1C3B9C0(eventFortificationWorkMiniManagers, v37);
    size = eventFortificationWorkMiniManagers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkMiniManagers,
        Component_object,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &items->obj.klass + size;
      eventFortificationWorkMiniManagers->fields._size = size + 1;
      v48[4] = (Il2CppClass *)Component_object;
      sub_1C3B708((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)Component_object, v38, v39, v40, v41, v42, v43);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void __fastcall EventFortificationManager__SetFotificationOrganizationPanel(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *fortificationCamera_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x2
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  struct FortificationAssetManager_o *v23; // x8
  Il2CppObject *organizationPanel_k__BackingField; // x21
  Il2CppObject *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_GameObject_o *v32; // x1
  const MethodInfo *v33; // x2

  if ( (byte_4C2601F & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_MapCamera___, v3);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C2601F = 1;
  }
  p_fortificationCamera = &this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationCamera, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_22;
    fortificationCamera_k__BackingField = (Il2CppObject *)assetManager->fields._fortificationCamera_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       fortificationCamera_k__BackingField,
                                       (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_22;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v8,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    *p_fortificationCamera = (struct MapCamera_o *)Component_object;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.fortificationCamera,
      (int64_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v8 = (UnityEngine_GameObject_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v20);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(organizationPanel, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v23 = this->fields.assetManager;
    if ( v23 )
    {
      organizationPanel_k__BackingField = (Il2CppObject *)v23->fields._organizationPanel_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         organizationPanel_k__BackingField,
                                         (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        v25 = UnityEngine_GameObject__GetComponent_object_(
                v8,
                (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
        *p_organizationPanel = (struct FortificationOrganizationPanelComponent_o *)v25;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.organizationPanel,
          (int64_t)v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        v8 = (UnityEngine_GameObject_o *)*p_organizationPanel;
        if ( *p_organizationPanel )
        {
          v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v32, v33);
          return;
        }
      }
    }
LABEL_22:
    sub_1C3B9C0(v8, v9);
  }
}


void __fastcall EventFortificationManager__SetTheDataRegisteredInTheMaster(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFortificationManager__TryGetUserEventFortificationEntity(
        EventFortificationManager_o *this,
        int32_t fortificationIdx,
        int32_t position,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x22
  struct SetSvtInfo_array *setSvtInfos; // x8
  int max_length; // w9
  int v14; // w11
  bool v15; // w10
  SetSvtInfo_o *v16; // x12
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2602C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, *(_QWORD *)&fortificationIdx);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C2602C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_23;
  Instance = (DataManager_o *)UserEventFortificationMaster__TryGetEntity(
                                (UserEventFortificationMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                this->fields.eventId,
                                fortificationIdx,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity || (setSvtInfos = entity->fields.setSvtInfos) == 0LL )
LABEL_23:
    sub_1C3B9C0(Instance, v10);
  max_length = setSvtInfos->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = 0;
  v15 = 0;
  do
  {
    if ( max_length == v14 )
      sub_1C3B9C8(Instance, v10);
    v16 = setSvtInfos->m_Items[v14];
    if ( !v16 )
      goto LABEL_23;
    ++v14;
    if ( v16->fields.position == position )
      v15 = 1;
  }
  while ( max_length != v14 );
  return v15;
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_0(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  FortificationAutomaticDialogComponent_o *fortificationAutomaticDialog; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  FortificationAutomaticDialogComponent_o *v12; // x20
  System_Action_o *v13; // x21
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_4C2602D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, v3);
    sub_1C3B764(&Method_EventFortificationManager__CreateOrganizationUI_b__22_1__, v4);
    sub_1C3B764(&Method_EventFortificationManager__CreateOrganizationUI_b__22_2__, v5);
    byte_4C2602D = 1;
  }
  v6 = Method_EventFortificationManager__CreateOrganizationUI_b__22_0__;
  if ( (*((_BYTE *)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C3B77C(Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  fortificationAutomaticDialog = this->fields.fortificationAutomaticDialog;
  if ( !fortificationAutomaticDialog
    || (FortificationAutomaticDialogComponent__Init(fortificationAutomaticDialog, this->fields.eventId, v10),
        v12 = this->fields.fortificationAutomaticDialog,
        v13 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_1__,
          0LL),
        v14 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_2__,
          0LL),
        !v12) )
  {
LABEL_9:
    sub_1C3B9C0(fortificationAutomaticDialog, v9);
  }
  FortificationAutomaticDialogComponent__Open(v12, v13, v14, v15);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_1(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  EventFortificationManager___c_c *v7; // x0
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  System_Action_object__o *_9__22_3; // x21
  Il2CppObject *v10; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  System_Action_object__o *_9__22_4; // x20
  Il2CppObject *v20; // x21
  struct EventFortificationManager___c_StaticFields *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4C2602E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v3);
    sub_1C3B764(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__, v4);
    sub_1C3B764(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__, v5);
    sub_1C3B764(&EventFortificationManager___c_TypeInfo, v6);
    byte_4C2602E = 1;
  }
  v7 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v7 = EventFortificationManager___c_TypeInfo;
  }
  _9__22_3 = (System_Action_object__o *)v7->static_fields->__9__22_3;
  if ( !_9__22_3 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventFortificationManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__22_3 = (System_Action_object__o *)sub_1C3B9B0(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      _9__22_3,
      v10,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__22_3 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_3;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__22_3,
      (int64_t)_9__22_3,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_18;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)_9__22_3,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v7 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkMiniManagers;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v7 = EventFortificationManager___c_TypeInfo;
  }
  _9__22_4 = (System_Action_object__o *)v7->static_fields->__9__22_4;
  if ( !_9__22_4 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventFortificationManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v7->static_fields->__9;
    _9__22_4 = (System_Action_object__o *)sub_1C3B9B0(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      _9__22_4,
      v20,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__,
      0LL);
    v21 = EventFortificationManager___c_TypeInfo->static_fields;
    v21->__9__22_4 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_4;
    sub_1C3B708((PartyOrganizationUtility_o *)&v21->__9__22_4, (int64_t)_9__22_4, v22, v23, v24, v25, v26, v27);
  }
  if ( !eventFortificationWorkMiniManagers )
LABEL_18:
    sub_1C3B9C0(v7, method);
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__22_4,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_2(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8

  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    sub_1C3B9C0(this, method);
  organizationPanel->fields.isTouchEnabled = 1;
}


void __fastcall EventFortificationManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C2602F & 1) == 0 )
  {
    sub_1C3B764(&EventFortificationManager___c_TypeInfo, v1);
    byte_4C2602F = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventFortificationManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventFortificationManager___c_TypeInfo->static_fields->__9 = (struct EventFortificationManager___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventFortificationManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall EventFortificationManager___c___ctor(EventFortificationManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventFortificationManager___c___CloseServantFortificationList_b__32_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C3B9C0(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CloseServantFortificationList_b__32_2(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C3B9C0(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_3(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C3B9C0(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_4(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C3B9C0(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C26033 & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, data);
    byte_4C26033 = 1;
  }
  if ( !data )
    sub_1C3B9C0(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C26034 & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, data);
    byte_4C26034 = 1;
  }
  if ( !data )
    sub_1C3B9C0(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___InitFortificationWorkMini_b__25_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C26030 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, data);
    byte_4C26030 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v4 )
  {
    if ( !data )
      sub_1C3B9C0(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___OnClickBackBtn_b__34_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C26032 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, data);
    byte_4C26032 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v4 )
  {
    if ( !data )
      sub_1C3B9C0(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___SelectFortificationServant_b__31_1(
        EventFortificationManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x19

  if ( (byte_4C26031 & 1) == 0 )
  {
    sub_1C3B764(&AvalonSceneManager_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4C26031 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    sub_1C3B9C0(Instance, v4);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall EventFortificationManager___c__DisplayClass28_0___ctor(
        EventFortificationManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventFortificationManager___c__DisplayClass28_0___Init_b__0(
        EventFortificationManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v12; // x1
  struct EventFortificationManager_o *v13; // x8
  struct EventFortificationManager_o *v14; // x8
  struct EventFortificationManager_o *v15; // x8
  UnityEngine_GameObject_o *v16; // x0
  struct EventFortificationManager_o *v17; // x8
  int32_t v18; // w20
  UISprite_o *organizationBtnSp; // x21
  struct EventFortificationManager_o *v20; // x8
  const MethodInfo *v21; // x4
  struct EventFortificationManager_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventFortificationManager_o *v24; // x8
  struct EventFortificationManager_o *v25; // x8
  int32_t eventId; // w21
  UISprite_o *maskSp; // x20
  struct EventFortificationManager_o *v28; // x8
  struct EventFortificationManager_o *v29; // x8
  UILabel_o *maskLb; // x20
  struct EventFortificationManager_o *v31; // x8
  struct UITexture_o *fortificationSlotBg; // x20
  const MethodInfo *v33; // x2

  if ( (byte_4C26035 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_17916/*"cookie"*/, v7);
    sub_1C3B764(&StringLiteral_6620/*"FinishedCloseFullScreenPhotoCampaign"*/, v8);
    sub_1C3B764(&StringLiteral_17822/*"command_spell"*/, v9);
    sub_1C3B764(&StringLiteral_19649/*"http"*/, v10);
    byte_4C26035 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  this->fields.eventId,
                                                                  (const MethodInfo_329AE48 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventEntity__IsEventPeriod(
                                                                        (EventEntity_o *)Master_object,
                                                                        0LL,
                                                                        0LL),
        ((unsigned __int8)Master_object & 1) == 0) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)_4__this->fields.organizationBtnSp;
      if ( Master_object )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GameObjectExtensions__GetParent(gameObject, 0LL);
        if ( Master_object )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)Master_object,
                                                                          0LL);
          if ( Master_object )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
            v24 = this->fields.__4__this;
            if ( v24 )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->fields.maskSp;
              if ( Master_object )
              {
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)Master_object,
                                                                                0LL);
                if ( Master_object )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                  v25 = this->fields.__4__this;
                  if ( v25 )
                  {
                    eventId = this->fields.eventId;
                    maskSp = v25->fields.maskSp;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_39282628(
                                                                                    eventId,
                                                                                    maskSp,
                                                                                    (System_String_o *)StringLiteral_19649/*"http"*/,
                                                                                    0LL);
                    v28 = this->fields.__4__this;
                    if ( v28 )
                    {
                      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v28->fields.maskLb;
                      if ( Master_object )
                      {
                        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)Master_object,
                                                                                        0LL);
                        if ( Master_object )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                          v29 = this->fields.__4__this;
                          if ( v29 )
                          {
                            maskLb = v29->fields.maskLb;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                                            (System_String_o *)StringLiteral_6620/*"FinishedCloseFullScreenPhotoCampaign"*/,
                                                                                            0LL);
                            if ( maskLb )
                            {
                              UILabel__set_text(maskLb, (System_String_o *)Master_object, 0LL);
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
    sub_1C3B9C0(Master_object, v12);
  }
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v13->fields.maskSp;
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0LL);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v14->fields.maskLb;
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0LL);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v15->fields.organizationBtnSp;
  if ( !Master_object )
    goto LABEL_50;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GameObjectExtensions__GetParent(v16, 0LL);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0LL);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_50;
  v18 = this->fields.eventId;
  organizationBtnSp = v17->fields.organizationBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_39282628(
                                                                  v18,
                                                                  organizationBtnSp,
                                                                  (System_String_o *)StringLiteral_17822/*"command_spell"*/,
                                                                  0LL);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_39282628(
                                                                  this->fields.eventId,
                                                                  v20->fields.organizationBtnTxtSp,
                                                                  (System_String_o *)StringLiteral_17916/*"cookie"*/,
                                                                  0LL);
LABEL_41:
  v31 = this->fields.__4__this;
  if ( !v31 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v31->fields.assetManager;
  if ( !Master_object )
    goto LABEL_50;
  fortificationSlotBg = v31->fields.fortificationSlotBg;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)FortificationAssetManager__GetOrganizationBgTex(
                                                                  (FortificationAssetManager_o *)Master_object,
                                                                  this->fields.eventId,
                                                                  this->fields.slotIndex,
                                                                  1,
                                                                  v21);
  if ( !fortificationSlotBg )
    goto LABEL_50;
  ((void (__fastcall *)(struct UITexture_o *, DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppMethodPointer))fortificationSlotBg->klass->vtable._27_set_mainTexture.method)(
    fortificationSlotBg,
    Master_object,
    fortificationSlotBg->klass->vtable._28_get_shader.methodPtr);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__SetFotificationOrganizationPanel((EventFortificationManager_o *)Master_object, v12);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__InitDialog((EventFortificationManager_o *)Master_object, v12);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__InitListViewPanel((EventFortificationManager_o *)Master_object, v12);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__SetFortificationWorkMini((EventFortificationManager_o *)Master_object, v12);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__CreateOrganizationUI(
    (EventFortificationManager_o *)Master_object,
    this->fields.uiParent,
    v33);
}


void __fastcall EventFortificationManager___c__DisplayClass31_0___ctor(
        EventFortificationManager___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventFortificationManager___c__DisplayClass31_0___SelectFortificationServant_b__0(
        EventFortificationManager___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  EventFortificationManager___c__DisplayClass31_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct EventFortificationManager_o *_4__this; // x8
  struct EventFortificationManager_o *v8; // x25
  EventFortificationListViewManager_o *eventFortificationListViewManager; // x20
  int32_t eventId; // w21
  FortificationConfirmDialogComponent_o *fortificationConfirmDialog; // x22
  EventFortificationWorkItem_o *item; // x23
  System_Action_bool__object__o *v13; // x24
  const MethodInfo *v14; // x5
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct EventFortificationManager_o *v21; // x8
  struct EventFortificationListViewManager_o *v22; // x19
  struct UICommonButton_o *baseButton; // x20
  Il2CppObject *klass; // x21
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x2

  v2 = this;
  if ( (byte_4C26036 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_bool__UserServantEntity__TypeInfo, method);
    sub_1C3B764(&System_Action_TypeInfo, v3);
    sub_1C3B764(&Method_EventFortificationManager_CloseServantFortificationList__, v4);
    sub_1C3B764(&Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, v5);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_1C3B764(&EventFortificationManager___c_TypeInfo, v6);
    byte_4C26036 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (EventFortificationManager___c__DisplayClass31_0_o *)_4__this->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_17;
  this = (EventFortificationManager___c__DisplayClass31_0_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_17;
  eventFortificationListViewManager = v8->fields.eventFortificationListViewManager;
  eventId = v8->fields.eventId;
  fortificationConfirmDialog = v8->fields.fortificationConfirmDialog;
  item = v2->fields.item;
  v13 = (System_Action_bool__object__o *)sub_1C3B9B0(System_Action_bool__UserServantEntity__TypeInfo);
  System_Action_bool__object____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_EventFortificationManager_CloseServantFortificationList__,
    0LL);
  if ( !eventFortificationListViewManager )
    goto LABEL_17;
  EventFortificationListViewManager__CreateList(
    eventFortificationListViewManager,
    eventId,
    fortificationConfirmDialog,
    item,
    (System_Action_bool__UserServantEntity__o *)v13,
    v14);
  v21 = v2->fields.__4__this;
  if ( !v21 )
    goto LABEL_17;
  v22 = v21->fields.eventFortificationListViewManager;
  this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
  }
  baseButton = this[5].fields.item->fields.baseButton;
  if ( !baseButton )
  {
    if ( !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[5].fields.item->klass;
    baseButton = (struct UICommonButton_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      (System_Action_o *)baseButton,
      klass,
      Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__31_1 = (struct System_Action_o *)baseButton;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__31_1,
      (int64_t)baseButton,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !v22 )
LABEL_17:
    sub_1C3B9C0(this, method);
  v22->fields.CallbackFunc2 = (struct System_Action_o *)baseButton;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v22->fields.CallbackFunc2,
    (int64_t)baseButton,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  EventFortificationListViewManager__SetMode_47333440(v22, 2, v32);
}


void __fastcall EventFortificationManager___c__DisplayClass32_0___ctor(
        EventFortificationManager___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventFortificationManager___c__DisplayClass32_0___CloseServantFortificationList_b__0(
        EventFortificationManager___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventFortificationManager___c__DisplayClass32_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct EventFortificationManager_o *_4__this; // x8
  EventFortificationListViewManager_o *eventFortificationListViewManager; // x20
  const MethodInfo *v16; // x2
  struct EventFortificationManager_o *v17; // x8
  struct EventFortificationManager_o *v18; // x8
  struct EventFortificationManager_o *v19; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  struct UnityEngine_GameObject_o *eventRoot; // x21
  Il2CppObject *klass; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct EventFortificationManager_o *v30; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  struct UnityEngine_GameObject_o *mainPanel; // x20
  Il2CppObject *v33; // x21
  struct EventFortificationManager___c_StaticFields *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  CommonUI_o *v41; // x19

  v3 = this;
  if ( (byte_4C26037 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__, v7);
    sub_1C3B764(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__, v8);
    sub_1C3B764(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v9);
    sub_1C3B764(&EventFortificationManager___c_TypeInfo, v10);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_1C3B764(&StringLiteral_17205/*"btn_txt_battlecharacter_on"*/, v11);
    byte_4C26037 = 1;
  }
  if ( v3->fields.servantData )
  {
    v12 = Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__;
    if ( (*((_BYTE *)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C3B77C(Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C3B748(v12, v12[4]);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                  v13,
                                                                  (System_String_o *)StringLiteral_17205/*"btn_txt_battlecharacter_on"*/,
                                                                  0,
                                                                  0LL);
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  eventFortificationListViewManager = _4__this->fields.eventFortificationListViewManager;
  if ( !eventFortificationListViewManager )
    goto LABEL_34;
  EventFortificationListViewManager__StatusRequest(_4__this->fields.eventFortificationListViewManager, 0LL, v2);
  EventFortificationListViewManager__SetStatusKind(eventFortificationListViewManager, 0, v16);
  v17 = v3->fields.__4__this;
  if ( !v17 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v17->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_34;
  EventFortificationListViewManager__DestroyList((EventFortificationListViewManager_o *)this, method);
  v18 = v3->fields.__4__this;
  if ( !v18 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v18->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
  if ( !this )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v19 = v3->fields.__4__this;
  if ( !v19 )
    goto LABEL_34;
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)v19->fields.eventFortificationWorkManagers;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  }
  eventRoot = this[5].fields.__4__this->fields.eventRoot;
  if ( !eventRoot )
  {
    if ( !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[5].fields.__4__this->klass;
    eventRoot = (struct UnityEngine_GameObject_o *)sub_1C3B9B0(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)eventRoot,
      klass,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__32_1 = (struct System_Action_EventFortificationWorkManager__o *)eventRoot;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__32_1,
      (int64_t)eventRoot,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)eventRoot,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v30 = v3->fields.__4__this;
  if ( !v30 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)v30->fields.eventFortificationWorkMiniManagers;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  }
  mainPanel = this[5].fields.__4__this->fields.mainPanel;
  if ( !mainPanel )
  {
    if ( !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
    }
    v33 = (Il2CppObject *)this[5].fields.__4__this->klass;
    mainPanel = (struct UnityEngine_GameObject_o *)sub_1C3B9B0(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)mainPanel,
      v33,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__,
      0LL);
    v34 = EventFortificationManager___c_TypeInfo->static_fields;
    v34->__9__32_2 = (struct System_Action_EventFortificationWorkManager__o *)mainPanel;
    sub_1C3B708((PartyOrganizationUtility_o *)&v34->__9__32_2, (int64_t)mainPanel, v35, v36, v37, v38, v39, v40);
  }
  if ( !eventFortificationWorkMiniManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)mainPanel,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  this = (EventFortificationManager___c__DisplayClass32_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v41 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v41 )
LABEL_34:
    sub_1C3B9C0(this, method);
  CommonUI__maskFadein(v41, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}