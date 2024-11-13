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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x19
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
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  AvalonSceneManager_c *v34; // x8
  CommonUI_o *v35; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v37; // x21

  if ( (byte_4B1A10A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, requestFinish, servantData);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v10, v11);
    sub_1BCA7E0(&EventFortificationManager___c__DisplayClass32_0_TypeInfo, v12, v13);
    byte_4B1A10A = 1;
  }
  v14 = sub_1BCAA2C(EventFortificationManager___c__DisplayClass32_0_TypeInfo, requestFinish, servantData, method);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  *(_QWORD *)(v14 + 16) = servantData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)servantData, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v23, v24, v25, v26, v27, v28);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = AvalonSceneManager_TypeInfo;
  v35 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v31);
    v34 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
  v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v14,
    (intptr_t)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
    0LL);
  if ( !v35 )
LABEL_9:
    sub_1BCAA3C(v15, v16);
  CommonUI__maskFadeout(v35, 1, DEFAULT_FADE_TIME, v37, 0LL);
}


void __fastcall EventFortificationManager__CreateOrganizationUI(
        EventFortificationManager_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x22
  __int64 transform; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *autoFortificationButton_k__BackingField; // x22
  Il2CppObject *Component_object; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x2
  UnityEngine_Transform_o *v29; // x21
  __int64 v30; // x2
  UnityEngine_Transform_o *v31; // x21
  AutoFortificationButtonComponent_o *v32; // x20
  int32_t eventId; // w21
  System_Action_o *v34; // x22

  if ( (byte_4B1A102 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, parent, method);
    sub_1BCA7E0(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B1A102 = 1;
  }
  p_autoOrganizationBtn = &this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  transform = UnityEngine_Object__op_Equality(autoOrganizationBtn, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_25;
    autoFortificationButton_k__BackingField = (Il2CppObject *)assetManager->fields._autoFortificationButton_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    transform = (__int64)UnityEngine_Object__Instantiate_object_(
                           autoFortificationButton_k__BackingField,
                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    *p_autoOrganizationBtn = (struct AutoFortificationButtonComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.autoOrganizationBtn,
      (int64_t)Component_object,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
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
    v29 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C6 )
    {
      transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v28);
      byte_4B109C6 = 1;
    }
    if ( !v29 )
      goto LABEL_25;
    UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (__int64)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    v31 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C1 )
    {
      transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v30);
      byte_4B109C1 = 1;
    }
    if ( !v31
      || (UnityEngine_Transform__set_localPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
          (transform = (__int64)*p_autoOrganizationBtn) == 0)
      || (transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0 )
    {
LABEL_25:
      sub_1BCAA3C(transform, v16);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  v32 = this->fields.autoOrganizationBtn;
  eventId = this->fields.eventId;
  v34 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
  System_Action___ctor(
    v34,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__,
    0LL);
  if ( !v32 )
    goto LABEL_25;
  AutoFortificationButtonComponent__Init(v32, eventId, v34, 0LL);
}


void __fastcall EventFortificationManager__DestroyList(EventFortificationManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  FortificationAssetManager_o *assetManager; // x0
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  __int64 v21; // x1
  UnityEngine_Component_o *v22; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  __int64 v33; // x1
  UnityEngine_Object_o *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  __int64 v43; // x1
  UnityEngine_Object_o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  __int64 v53; // x1
  UnityEngine_Object_o *v54; // x21
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  __int64 v63; // x1
  UnityEngine_Object_o *v64; // x21
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x21
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x1
  UnityEngine_Object_o *v76; // x21
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x21
  EventFortificationManager___c_c *v84; // x0
  System_Action_object__o *_9__36_0; // x22
  Il2CppObject *v86; // x23
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  System_Collections_Generic_List_object__o *v97; // x21
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  PartyOrganizationUtility_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v105; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v107; // x0
  System_Action_object__o *_9__36_1; // x21
  Il2CppObject *v109; // x22
  struct EventFortificationManager___c_StaticFields *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  System_Collections_Generic_List_object__o *v120; // x20
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7

  if ( (byte_4B1A10D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_EventFortificationWorkManager__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_EventFortificationManager___c__DestroyList_b__36_0__, v12, v13);
    sub_1BCA7E0(&Method_EventFortificationManager___c__DestroyList_b__36_1__, v14, v15);
    sub_1BCA7E0(&EventFortificationManager___c_TypeInfo, v16, v17);
    byte_4B1A10D = 1;
  }
  assetManager = this->fields.assetManager;
  if ( assetManager )
    FortificationAssetManager__Release(assetManager, this->fields.eventId, v2);
  p_fortificationCamera = &this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(fortificationCamera, 0LL, 0LL) )
  {
    v22 = (UnityEngine_Component_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_64;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_fortificationCamera = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fortificationCamera, 0LL, v25, v26, v27, v28, v29, v30);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Inequality(organizationPanel, 0LL, 0LL) )
  {
    v22 = (UnityEngine_Component_o *)*p_organizationPanel;
    if ( !*p_organizationPanel )
      goto LABEL_64;
    v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
    UnityEngine_Object__Destroy_70154244(v34, 0LL);
    *p_organizationPanel = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.organizationPanel, 0LL, v35, v36, v37, v38, v39, v40);
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Inequality(fortificationConfirmDialog, 0LL, 0LL) )
  {
    v22 = (UnityEngine_Component_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_64;
    v44 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
    UnityEngine_Object__Destroy_70154244(v44, 0LL);
    *p_fortificationConfirmDialog = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.fortificationConfirmDialog,
      0LL,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Inequality(fortificationAutomaticDialog, 0LL, 0LL) )
  {
    v22 = (UnityEngine_Component_o *)*p_fortificationAutomaticDialog;
    if ( !*p_fortificationAutomaticDialog )
      goto LABEL_64;
    v54 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
    UnityEngine_Object__Destroy_70154244(v54, 0LL);
    *p_fortificationAutomaticDialog = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.fortificationAutomaticDialog,
      0LL,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Inequality(eventFortificationListViewManager, 0LL, 0LL) )
  {
    v22 = (UnityEngine_Component_o *)*p_eventFortificationListViewManager;
    if ( !*p_eventFortificationListViewManager )
      goto LABEL_64;
    v64 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
    UnityEngine_Object__Destroy_70154244(v64, 0LL);
    *p_eventFortificationListViewManager = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventFortificationListViewManager,
      0LL,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  p_autoOrganizationBtn = &this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Inequality(autoOrganizationBtn, 0LL, 0LL) )
  {
    v22 = (UnityEngine_Component_o *)*p_autoOrganizationBtn;
    if ( *p_autoOrganizationBtn )
    {
      v76 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v75);
      UnityEngine_Object__Destroy_70154244(v76, 0LL);
      *p_autoOrganizationBtn = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.autoOrganizationBtn, 0LL, v77, v78, v79, v80, v81, v82);
      goto LABEL_47;
    }
LABEL_64:
    sub_1BCAA3C(v22, v21);
  }
LABEL_47:
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( eventFortificationWorkManagers )
  {
    v84 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, v21);
      v84 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_0 = (System_Action_object__o *)v84->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v84->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v84, v21);
        v84 = EventFortificationManager___c_TypeInfo;
      }
      v86 = (Il2CppObject *)v84->static_fields->__9;
      _9__36_0 = (System_Action_object__o *)sub_1BCAA2C(
                                              System_Action_EventFortificationWorkManager__TypeInfo,
                                              v21,
                                              v73,
                                              v74);
      System_Action_object____ctor(_9__36_0, v86, Method_EventFortificationManager___c__DestroyList_b__36_0__, 0LL);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__36_0,
        (int64_t)_9__36_0,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
    }
    System_Collections_Generic_List_object___ForEach(
      eventFortificationWorkManagers,
      (System_Action_T__o *)_9__36_0,
      (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v97 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                         v94,
                                                         v95,
                                                         v96);
    System_Collections_Generic_List_object____ctor(
      v97,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v97;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventFortificationWorkManagers,
      (int64_t)v97,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (PartyOrganizationUtility_o *)&this->fields.eventFortificationWorkMiniManagers;
  v105 = (System_Collections_Generic_List_object__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers )
  {
    v107 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, v21);
      v107 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_1 = (System_Action_object__o *)v107->static_fields->__9__36_1;
    if ( !_9__36_1 )
    {
      if ( !v107->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v107, v21);
        v107 = EventFortificationManager___c_TypeInfo;
      }
      v109 = (Il2CppObject *)v107->static_fields->__9;
      _9__36_1 = (System_Action_object__o *)sub_1BCAA2C(
                                              System_Action_EventFortificationWorkManager__TypeInfo,
                                              v21,
                                              v73,
                                              v74);
      System_Action_object____ctor(_9__36_1, v109, Method_EventFortificationManager___c__DestroyList_b__36_1__, 0LL);
      v110 = EventFortificationManager___c_TypeInfo->static_fields;
      v110->__9__36_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v110->__9__36_1, (int64_t)_9__36_1, v111, v112, v113, v114, v115, v116);
    }
    System_Collections_Generic_List_object___ForEach(
      v105,
      (System_Action_T__o *)_9__36_1,
      (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v120 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                          v117,
                                                          v118,
                                                          v119);
    System_Collections_Generic_List_object____ctor(
      v120,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    p_eventFortificationWorkMiniManagers->klass = (PartyOrganizationUtility_c *)v120;
    sub_1BCA784(p_eventFortificationWorkMiniManagers, (int64_t)v120, v121, v122, v123, v124, v125, v126);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  const MethodInfo *v44; // x1
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  PartyOrganizationUtility_o *p_assetManager; // x19
  FortificationAssetManager_o *klass; // x21
  struct FortificationAssetManager_o *assetManager; // t1
  FortificationAssetManager_o *v51; // x21
  const MethodInfo *v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int32_t v59; // w19
  System_Action_o *v60; // x22
  const MethodInfo *v61; // x3

  if ( (byte_4B1A106 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&slotIndex);
    sub_1BCA7E0(&FortificationAssetManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__, v15, v16);
    sub_1BCA7E0(&EventFortificationManager___c__DisplayClass28_0_TypeInfo, v17, v18);
    byte_4B1A106 = 1;
  }
  v19 = sub_1BCAA2C(
          EventFortificationManager___c__DisplayClass28_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&slotIndex,
          uiParent);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_8;
  *(_DWORD *)(v19 + 16) = eventId;
  *(_QWORD *)(v19 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 40) = uiParent;
  *(_DWORD *)(v19 + 32) = slotIndex;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 40), (int64_t)uiParent, v28, v29, v30, v31, v32, v33);
  this->fields.eventId = *(_DWORD *)(v19 + 16);
  this->fields.slotIndex = *(_DWORD *)(v19 + 32);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v37;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventFortificationWorkManagers,
    (int64_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  EventFortificationManager__InitFortificationWorkMini(this, v44);
  assetManager = this->fields.assetManager;
  p_assetManager = (PartyOrganizationUtility_o *)&this->fields.assetManager;
  klass = assetManager;
  if ( !assetManager )
  {
    v51 = (FortificationAssetManager_o *)sub_1BCAA2C(FortificationAssetManager_TypeInfo, v45, v46, v47);
    FortificationAssetManager___ctor(v51, v52);
    p_assetManager->klass = (PartyOrganizationUtility_c *)v51;
    sub_1BCA784(p_assetManager, (int64_t)v51, v53, v54, v55, v56, v57, v58);
    klass = (FortificationAssetManager_o *)p_assetManager->klass;
  }
  v59 = *(_DWORD *)(v19 + 16);
  v60 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v45, v46, v47);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v19,
    Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__,
    0LL);
  if ( !klass )
LABEL_8:
    sub_1BCAA3C(v20, v21);
  FortificationAssetManager__GetAssets(klass, v59, v60, v61);
}


void __fastcall EventFortificationManager__InitDialog(EventFortificationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *fortificationConfirmDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x2
  __int64 v26; // x1
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  struct FortificationAssetManager_o *v29; // x8
  Il2CppObject *fortificationAutomaticDialog_k__BackingField; // x21
  Il2CppObject *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  UnityEngine_GameObject_o *v38; // x0
  const MethodInfo *v39; // x2

  if ( (byte_4B1A103 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B1A103 = 1;
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_24;
    fortificationConfirmDialog_k__BackingField = (Il2CppObject *)assetManager->fields._fortificationConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        fortificationConfirmDialog_k__BackingField,
                                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v12 )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v12,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    *p_fortificationConfirmDialog = (struct FortificationConfirmDialogComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.fortificationConfirmDialog,
      (int64_t)Component_object,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v12 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v25);
  }
  v12 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
  if ( !*p_fortificationConfirmDialog )
    goto LABEL_24;
  FortificationConfirmDialogComponent__Init((FortificationConfirmDialogComponent_o *)v12, this->fields.eventId, v14);
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationAutomaticDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    v29 = this->fields.assetManager;
    if ( v29 )
    {
      fortificationAutomaticDialog_k__BackingField = (Il2CppObject *)v29->fields._fortificationAutomaticDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                          fortificationAutomaticDialog_k__BackingField,
                                          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v12 )
      {
        v31 = UnityEngine_GameObject__GetComponent_object_(
                v12,
                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
        *p_fortificationAutomaticDialog = (struct FortificationAutomaticDialogComponent_o *)v31;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.fortificationAutomaticDialog,
          (int64_t)v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        v12 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
        if ( *p_fortificationAutomaticDialog )
        {
          v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v38, v39);
          goto LABEL_22;
        }
      }
    }
LABEL_24:
    sub_1BCAA3C(v12, v13);
  }
LABEL_22:
  v12 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
  if ( !*p_fortificationAutomaticDialog )
    goto LABEL_24;
  BaseDialog__Init((BaseDialog_o *)v12, 0LL);
}


void __fastcall EventFortificationManager__InitFortificationWorkMini(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  PartyOrganizationUtility_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v18; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v20; // x0
  System_Action_object__o *_9__25_0; // x21
  Il2CppObject *v22; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_List_object__o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4B1A105 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_EventFortificationWorkManager__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__get_Count__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__, v13, v14);
    sub_1BCA7E0(&EventFortificationManager___c_TypeInfo, v15, v16);
    byte_4B1A105 = 1;
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (PartyOrganizationUtility_o *)&this->fields.eventFortificationWorkMiniManagers;
  v18 = (System_Collections_Generic_List_object__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers && v18->fields._size >= 1 )
  {
    v20 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, method);
      v20 = EventFortificationManager___c_TypeInfo;
    }
    _9__25_0 = (System_Action_object__o *)v20->static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20, method);
        v20 = EventFortificationManager___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__25_0 = (System_Action_object__o *)sub_1BCAA2C(
                                              System_Action_EventFortificationWorkManager__TypeInfo,
                                              method,
                                              v2,
                                              v3);
      System_Action_object____ctor(
        _9__25_0,
        v22,
        Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__,
        0LL);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__25_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__25_0,
        (int64_t)_9__25_0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    System_Collections_Generic_List_object___ForEach(
      v18,
      (System_Action_T__o *)_9__25_0,
      (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  p_eventFortificationWorkMiniManagers->klass = (PartyOrganizationUtility_c *)v30;
  sub_1BCA784(p_eventFortificationWorkMiniManagers, (int64_t)v30, v31, v32, v33, v34, v35, v36);
}


void __fastcall EventFortificationManager__InitListViewPanel(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *eventFortificationListViewPanel_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v22; // x2

  if ( (byte_4B1A104 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1A104 = 1;
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(eventFortificationListViewManager, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_13;
    eventFortificationListViewPanel_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationListViewPanel_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        eventFortificationListViewPanel_k__BackingField,
                                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v10,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___),
          *p_eventFortificationListViewManager = (struct EventFortificationListViewManager_o *)Component_object,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.eventFortificationListViewManager,
            (int64_t)Component_object,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20),
          (v10 = (UnityEngine_GameObject_o *)*p_eventFortificationListViewManager) == 0LL) )
    {
LABEL_13:
      sub_1BCAA3C(v10, v11);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v22);
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
    sub_1BCAA3C(organizationPanel, method);
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
  __int64 v6; // x2
  EventFortificationManager_o *v7; // x20

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
  v7 = this;
  if ( !byte_4B109C6 )
  {
    this = (EventFortificationManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, obj, v6);
    byte_4B109C6 = 1;
  }
  if ( !v7
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v7,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventFortificationManager__LocateObjectToUIRoot(
        EventFortificationManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  EventFortificationManager_o *v4; // x20
  __int64 v5; // x2
  EventFortificationManager_o *v6; // x20

  if ( !obj )
    goto LABEL_8;
  v4 = this;
  this = (EventFortificationManager_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  if ( !this )
    goto LABEL_8;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.uiRoot, 0LL);
  this = (EventFortificationManager_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  v6 = this;
  if ( !byte_4B109C6 )
  {
    this = (EventFortificationManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, obj, v5);
    byte_4B109C6 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_8:
    sub_1BCAA3C(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventFortificationManager__OnClickBackBtn(EventFortificationManager_o *this, const MethodInfo *method)
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
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x1
  void *organizationPanel; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  System_Action_object__o *v21; // x21
  Il2CppObject *v22; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *v30; // x8
  int32_t size; // w2
  int v32; // w9

  if ( (byte_4B1A10C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_EventFortificationWorkManager__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventFortificationManager_OnClickBackBtn__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v8, v9);
    sub_1BCA7E0(&Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, v10, v11);
    sub_1BCA7E0(&EventFortificationManager___c_TypeInfo, v12, v13);
    byte_4B1A10C = 1;
  }
  v14 = Method_EventFortificationManager_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickBackBtn__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationManager_OnClickBackBtn__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 1, 0LL);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_20;
  FortificationOrganizationPanelComponent__Close((FortificationOrganizationPanelComponent_o *)organizationPanel, v16);
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
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, v16);
    organizationPanel = EventFortificationManager___c_TypeInfo;
  }
  v21 = *(System_Action_object__o **)(*((_QWORD *)organizationPanel + 23) + 56LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)organizationPanel + 56) )
    {
      j_il2cpp_runtime_class_init_0(organizationPanel, v16);
      organizationPanel = EventFortificationManager___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)organizationPanel + 23);
    v21 = (System_Action_object__o *)sub_1BCAA2C(System_Action_EventFortificationWorkManager__TypeInfo, v16, v18, v19);
    System_Action_object____ctor(v21, v22, Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, 0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Action_EventFortificationWorkManager__o *)v21;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__34_0, (int64_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_20;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)v21,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v30 = this->fields.eventFortificationWorkManagers;
  if ( !v30 )
    goto LABEL_20;
  size = v30->fields._size;
  v32 = v30->fields._version + 1;
  v30->fields._size = 0;
  v30->fields._version = v32;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v30->fields._items, 0, size, 0LL);
  organizationPanel = this->fields.eventFortificationListViewManager;
  if ( !organizationPanel )
LABEL_20:
    sub_1BCAA3C(organizationPanel, v16);
  ListViewManager__ClearScrollBarValue((ListViewManager_o *)organizationPanel, 1, 0LL);
}


void __fastcall EventFortificationManager__OnClickOrganizationBtn(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  FortificationAssetManager_o *assetManager; // x0
  const MethodInfo *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_4B1A10B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventFortificationManager_OnClickOrganizationBtn__, method, v2);
    byte_4B1A10B = 1;
  }
  v4 = Method_EventFortificationManager_OnClickOrganizationBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickOrganizationBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationManager_OnClickOrganizationBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  assetManager = this->fields.assetManager;
  if ( !assetManager
    || (assetManager = (FortificationAssetManager_o *)FortificationAssetManager__GetOrganizationBgTex(
                                                        assetManager,
                                                        this->fields.eventId,
                                                        this->fields.slotIndex,
                                                        0,
                                                        v7),
        !this->fields.organizationPanel)
    || (FortificationOrganizationPanelComponent__Open(
          this->fields.organizationPanel,
          v6,
          (UnityEngine_Texture2D_o *)assetManager,
          this->fields.mainPanel,
          this->fields.eventRoot,
          this->fields.fortificationCamera,
          this->fields.mainCamera,
          v9),
        (assetManager = (FortificationAssetManager_o *)this->fields.autoOrganizationBtn) == 0LL)
    || (assetManager = (FortificationAssetManager_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)assetManager,
                                                        0LL)) == 0LL )
  {
    sub_1BCAA3C(assetManager, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assetManager, 1, 0LL);
  EventFortificationManager__SetFortificationWork(this, v10);
}


void __fastcall EventFortificationManager__ResetRewardSceneObj(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainPanel; // x0

  mainPanel = this->fields.mainPanel;
  if ( !mainPanel || (UnityEngine_GameObject__SetActive(mainPanel, 1, 0LL), (mainPanel = this->fields.eventRoot) == 0LL) )
    sub_1BCAA3C(mainPanel, method);
  UnityEngine_GameObject__SetActive(mainPanel, 1, 0LL);
}


void __fastcall EventFortificationManager__SelectFortificationServant(
        EventFortificationManager_o *this,
        EventFortificationWorkItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x19
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
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  AvalonSceneManager_c *v34; // x8
  CommonUI_o *v35; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v37; // x21

  if ( (byte_4B1A109 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__, v10, v11);
    sub_1BCA7E0(&EventFortificationManager___c__DisplayClass31_0_TypeInfo, v12, v13);
    byte_4B1A109 = 1;
  }
  v14 = sub_1BCAA2C(EventFortificationManager___c__DisplayClass31_0_TypeInfo, item, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)item, v23, v24, v25, v26, v27, v28);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = AvalonSceneManager_TypeInfo;
  v35 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v31);
    v34 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
  v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v14,
    Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
    0LL);
  if ( !v35 )
LABEL_9:
    sub_1BCAA3C(v15, v16);
  CommonUI__maskFadeout(v35, 1, DEFAULT_FADE_TIME, v37, 0LL);
}


void __fastcall EventFortificationManager__SetFortificationWork(
        EventFortificationManager_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *object; // x20
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x23
  Il2CppObject *eventFortificationWorkObj_k__BackingField; // x22
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  Il2CppObject *Component_object; // x0
  int32_t eventId; // w24
  EventFortificationWorkManager_o *v42; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_object__o *v46; // x25
  __int64 v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x6
  __int64 v50; // x1
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Component_o *organizationPanel; // x0
  UnityEngine_GameObject_o *v53; // x0
  __int64 v54; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  UnityEngine_Transform_o *v61; // x24
  UnityEngine_GameObject_o *v62; // x0
  __int64 v63; // x1
  UnityEngine_Transform_o *v64; // x0
  __int64 v65; // x1
  UnityEngine_GameObject_o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x8
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1A107 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_EventFortificationWorkItem__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFortificationMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_EventFortificationManager_SelectFortificationServant__, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_UIAtlas___, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&StringLiteral_13751/*"Terminal/Atlas/TerminalAtlas"*/, v28, v29);
    byte_4B1A107 = 1;
  }
  entities = 0LL;
  memset(&v81, 0, sizeof(v81));
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_13751/*"Terminal/Atlas/TerminalAtlas"*/,
             (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_UIAtlas___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
    sub_1BCAA3C(Instance, v32);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v80,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v81 = v80;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v81,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v33 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1BCAA3C(v33, v34);
    current = (EventFortificationEntity_o *)v81.fields._current;
    eventFortificationWorkObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
    v38 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkObj_k__BackingField,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v38 )
      sub_1BCAA3C(0LL, v39);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v38,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v42 = (EventFortificationWorkManager_o *)Component_object;
    v46 = (System_Action_object__o *)sub_1BCAA2C(System_Action_EventFortificationWorkItem__TypeInfo, v43, v44, v45);
    System_Action_object____ctor(
      v46,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0LL);
    if ( !v42 )
      sub_1BCAA3C(v47, v48);
    EventFortificationWorkManager__SetServantFortificationWork(
      v42,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v46,
      this->fields.organizationPanel,
      (UIAtlas_o *)object,
      v49);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v42, 0LL);
    organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
    if ( !organizationPanel )
      sub_1BCAA3C(0LL, v50);
    v53 = UnityEngine_Component__get_gameObject(organizationPanel, 0LL);
    if ( !v53 )
      sub_1BCAA3C(0LL, v54);
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v53, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v42, 0LL);
    if ( !v56 )
      sub_1BCAA3C(0LL, v57);
    v58 = (__int64)UnityEngine_GameObject__get_transform(v56, 0LL);
    v61 = (UnityEngine_Transform_o *)v58;
    if ( !byte_4B109C6 )
    {
      v58 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v59, v60);
      byte_4B109C6 = 1;
    }
    if ( !v61 )
      sub_1BCAA3C(v58, v59);
    UnityEngine_Transform__set_localScale(v61, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v42, 0LL);
    if ( !v62 )
      sub_1BCAA3C(0LL, v63);
    v64 = UnityEngine_GameObject__get_transform(v62, 0LL);
    if ( !current )
      sub_1BCAA3C(v64, v65);
    if ( !v64 )
      sub_1BCAA3C(0LL, v65);
    v83.fields.y = (float)current->fields.y;
    v83.fields.x = (float)current->fields.x;
    v83.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v64, v83, 0LL);
    v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v42, 0LL);
    if ( !v66 )
      sub_1BCAA3C(0LL, v67);
    UnityEngine_GameObject__SetActive(v66, 1, 0LL);
    eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
    if ( !eventFortificationWorkManagers )
      sub_1BCAA3C(0LL, v68);
    items = eventFortificationWorkManagers->fields._items;
    v77 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkManagers->fields._version;
    if ( !items )
      sub_1BCAA3C(eventFortificationWorkManagers, v68);
    size = eventFortificationWorkManagers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkManagers,
        (Il2CppObject *)v42,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    }
    else
    {
      v79 = &items->obj.klass + size;
      eventFortificationWorkManagers->fields._size = size + 1;
      v79[4] = (Il2CppClass *)v42;
      sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 4), (int64_t)v42, v69, v70, v71, v72, v73, v74);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v81,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void __fastcall EventFortificationManager__SetFortificationWorkMini(
        EventFortificationManager_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x21
  Il2CppObject *eventFortificationWorkMiniObj_k__BackingField; // x20
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  Il2CppObject *Component_object; // x20
  int32_t eventId; // w22
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_object__o *v40; // x23
  __int64 v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x6
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v45; // x2
  UnityEngine_GameObject_o *v46; // x0
  __int64 v47; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v49; // x1
  UnityEngine_GameObject_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x8
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1A108 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_EventFortificationWorkItem__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFortificationMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_EventFortificationManager_SelectFortificationServant__, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    byte_4B1A108 = 1;
  }
  entities = 0LL;
  memset(&v65, 0, sizeof(v65));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
    sub_1BCAA3C(Instance, v27);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v64,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v65 = v64;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v65,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v28 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1BCAA3C(v28, v29);
    current = (EventFortificationEntity_o *)v65.fields._current;
    eventFortificationWorkMiniObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkMiniObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    v33 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkMiniObj_k__BackingField,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v33 )
      sub_1BCAA3C(0LL, v34);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v33,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v40 = (System_Action_object__o *)sub_1BCAA2C(System_Action_EventFortificationWorkItem__TypeInfo, v37, v38, v39);
    System_Action_object____ctor(
      v40,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0LL);
    if ( !Component_object )
      sub_1BCAA3C(v41, v42);
    EventFortificationWorkManager__SetServantFortificationWork(
      (EventFortificationWorkManager_o *)Component_object,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v40,
      0LL,
      0LL,
      v43);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    EventFortificationManager__LocateObjectToFotificationPanel(this, gameObject, v45);
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    if ( !v46 )
      sub_1BCAA3C(0LL, v47);
    transform = UnityEngine_GameObject__get_transform(v46, 0LL);
    if ( !current )
      sub_1BCAA3C(transform, v49);
    if ( !transform )
      sub_1BCAA3C(0LL, v49);
    v67.fields.y = (float)current->fields.rewardSceneY;
    v67.fields.x = (float)current->fields.rewardSceneX;
    v67.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v67, 0LL);
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    if ( !v50 )
      sub_1BCAA3C(0LL, v51);
    UnityEngine_GameObject__SetActive(v50, 1, 0LL);
    eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkMiniManagers;
    if ( !eventFortificationWorkMiniManagers )
      sub_1BCAA3C(0LL, v52);
    items = eventFortificationWorkMiniManagers->fields._items;
    v61 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkMiniManagers->fields._version;
    if ( !items )
      sub_1BCAA3C(eventFortificationWorkMiniManagers, v52);
    size = eventFortificationWorkMiniManagers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkMiniManagers,
        Component_object,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = &items->obj.klass + size;
      eventFortificationWorkMiniManagers->fields._size = size + 1;
      v63[4] = (Il2CppClass *)Component_object;
      sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 4), (int64_t)Component_object, v53, v54, v55, v56, v57, v58);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v65,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void __fastcall EventFortificationManager__SetFotificationOrganizationPanel(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *fortificationCamera_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v24; // x2
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  struct FortificationAssetManager_o *v27; // x8
  Il2CppObject *organizationPanel_k__BackingField; // x21
  Il2CppObject *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UnityEngine_GameObject_o *v36; // x1
  const MethodInfo *v37; // x2

  if ( (byte_4B1A101 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MapCamera___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B1A101 = 1;
  }
  p_fortificationCamera = &this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationCamera, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_22;
    fortificationCamera_k__BackingField = (Il2CppObject *)assetManager->fields._fortificationCamera_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        fortificationCamera_k__BackingField,
                                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v12 )
      goto LABEL_22;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v12,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    *p_fortificationCamera = (struct MapCamera_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.fortificationCamera,
      (int64_t)Component_object,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v12 = (UnityEngine_GameObject_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v24);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(organizationPanel, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    v27 = this->fields.assetManager;
    if ( v27 )
    {
      organizationPanel_k__BackingField = (Il2CppObject *)v27->fields._organizationPanel_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                          organizationPanel_k__BackingField,
                                          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v12 )
      {
        v29 = UnityEngine_GameObject__GetComponent_object_(
                v12,
                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
        *p_organizationPanel = (struct FortificationOrganizationPanelComponent_o *)v29;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.organizationPanel,
          (int64_t)v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        v12 = (UnityEngine_GameObject_o *)*p_organizationPanel;
        if ( *p_organizationPanel )
        {
          v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v36, v37);
          return;
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(v12, v13);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x22
  struct SetSvtInfo_array *setSvtInfos; // x8
  int max_length; // w9
  int v17; // w11
  bool v18; // w10
  SetSvtInfo_o *v19; // x12
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1A10E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_UserEventFortificationMaster___,
      *(_QWORD *)&fortificationIdx,
      *(_QWORD *)&position);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1A10E = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_19;
  Instance = UserEventFortificationMaster__TryGetEntity(
               (UserEventFortificationMaster_o *)MasterData_object,
               &entity,
               Instance,
               this->fields.eventId,
               fortificationIdx,
               0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !entity || (setSvtInfos = entity->fields.setSvtInfos) == 0LL )
LABEL_19:
    sub_1BCAA3C(Instance, v12);
  max_length = setSvtInfos->max_length;
  if ( max_length < 1 )
    return 0;
  v17 = 0;
  v18 = 0;
  do
  {
    if ( max_length == v17 )
      sub_1BCAA44(Instance, v12);
    v19 = setSvtInfos->m_Items[v17];
    if ( !v19 )
      goto LABEL_19;
    ++v17;
    if ( v19->fields.position == position )
      v18 = 1;
  }
  while ( max_length != v17 );
  return v18;
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_0(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  FortificationAutomaticDialogComponent_o *fortificationAutomaticDialog; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  FortificationAutomaticDialogComponent_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x3

  if ( (byte_4B1A10F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, v4, v5);
    sub_1BCA7E0(&Method_EventFortificationManager__CreateOrganizationUI_b__22_1__, v6, v7);
    sub_1BCA7E0(&Method_EventFortificationManager__CreateOrganizationUI_b__22_2__, v8, v9);
    byte_4B1A10F = 1;
  }
  v10 = Method_EventFortificationManager__CreateOrganizationUI_b__22_0__;
  if ( (*((_BYTE *)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  fortificationAutomaticDialog = this->fields.fortificationAutomaticDialog;
  if ( !fortificationAutomaticDialog
    || (FortificationAutomaticDialogComponent__Init(fortificationAutomaticDialog, this->fields.eventId, v14),
        v16 = this->fields.fortificationAutomaticDialog,
        v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19),
        System_Action___ctor(
          v20,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_1__,
          0LL),
        v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23),
        System_Action___ctor(
          v24,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_2__,
          0LL),
        !v16) )
  {
LABEL_9:
    sub_1BCAA3C(fortificationAutomaticDialog, v13);
  }
  FortificationAutomaticDialogComponent__Open(v16, v20, v24, v25);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_1(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  EventFortificationManager___c_c *v13; // x0
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  System_Action_object__o *_9__22_3; // x21
  Il2CppObject *v16; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  System_Action_object__o *_9__22_4; // x20
  Il2CppObject *v28; // x21
  struct EventFortificationManager___c_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4B1A110 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_EventFortificationWorkManager__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5, v6);
    sub_1BCA7E0(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__, v7, v8);
    sub_1BCA7E0(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__, v9, v10);
    sub_1BCA7E0(&EventFortificationManager___c_TypeInfo, v11, v12);
    byte_4B1A110 = 1;
  }
  v13 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, method);
    v13 = EventFortificationManager___c_TypeInfo;
  }
  _9__22_3 = (System_Action_object__o *)v13->static_fields->__9__22_3;
  if ( !_9__22_3 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = EventFortificationManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__22_3 = (System_Action_object__o *)sub_1BCAA2C(
                                            System_Action_EventFortificationWorkManager__TypeInfo,
                                            method,
                                            v2,
                                            v3);
    System_Action_object____ctor(
      _9__22_3,
      v16,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__22_3 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_3;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__22_3,
      (int64_t)_9__22_3,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_18;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)_9__22_3,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v13 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkMiniManagers;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, method);
    v13 = EventFortificationManager___c_TypeInfo;
  }
  _9__22_4 = (System_Action_object__o *)v13->static_fields->__9__22_4;
  if ( !_9__22_4 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = EventFortificationManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v13->static_fields->__9;
    _9__22_4 = (System_Action_object__o *)sub_1BCAA2C(
                                            System_Action_EventFortificationWorkManager__TypeInfo,
                                            method,
                                            v24,
                                            v25);
    System_Action_object____ctor(
      _9__22_4,
      v28,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__,
      0LL);
    v29 = EventFortificationManager___c_TypeInfo->static_fields;
    v29->__9__22_4 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v29->__9__22_4, (int64_t)_9__22_4, v30, v31, v32, v33, v34, v35);
  }
  if ( !eventFortificationWorkMiniManagers )
LABEL_18:
    sub_1BCAA3C(v13, method);
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__22_4,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_2(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8

  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    sub_1BCAA3C(this, method);
  organizationPanel->fields.isTouchEnabled = 1;
}


void __fastcall EventFortificationManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A111 & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationManager___c_TypeInfo, v1, v2);
    byte_4B1A111 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventFortificationManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventFortificationManager___c_TypeInfo->static_fields->__9 = (struct EventFortificationManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventFortificationManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CloseServantFortificationList_b__32_2(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCAA3C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_3(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCAA3C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_4(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCAA3C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B1A115 & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, data, method);
    byte_4B1A115 = 1;
  }
  if ( !data )
    sub_1BCAA3C(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B1A116 & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, data, method);
    byte_4B1A116 = 1;
  }
  if ( !data )
    sub_1BCAA3C(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___InitFortificationWorkMini_b__25_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B1A112 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, data, method);
    byte_4B1A112 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, data);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v4 )
  {
    if ( !data )
      sub_1BCAA3C(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___OnClickBackBtn_b__34_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B1A114 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, data, method);
    byte_4B1A114 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, data);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v4 )
  {
    if ( !data )
      sub_1BCAA3C(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___SelectFortificationServant_b__31_1(
        EventFortificationManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x19

  if ( (byte_4B1A113 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B1A113 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6);
  if ( !v7 )
    sub_1BCAA3C(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v21; // x1
  struct EventFortificationManager_o *v22; // x8
  struct EventFortificationManager_o *v23; // x8
  struct EventFortificationManager_o *v24; // x8
  UnityEngine_GameObject_o *v25; // x0
  struct EventFortificationManager_o *v26; // x8
  int32_t v27; // w20
  UISprite_o *organizationBtnSp; // x21
  struct EventFortificationManager_o *v29; // x8
  const MethodInfo *v30; // x4
  struct EventFortificationManager_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventFortificationManager_o *v33; // x8
  struct EventFortificationManager_o *v34; // x8
  int32_t eventId; // w21
  UISprite_o *maskSp; // x20
  struct EventFortificationManager_o *v37; // x8
  struct EventFortificationManager_o *v38; // x8
  UILabel_o *maskLb; // x20
  struct EventFortificationManager_o *v40; // x8
  struct UITexture_o *fortificationSlotBg; // x20
  const MethodInfo *v42; // x2

  if ( (byte_4B1A117 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_17754/*"btn_txt_event_organization"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_6578/*"FORTIFICATION_EVENT_END_MSG"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_17661/*"btn_bg_event_organization"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_19471/*"event_tab_bg_mask"*/, v18, v19);
    byte_4B1A117 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  this->fields.eventId,
                                                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
            v33 = this->fields.__4__this;
            if ( v33 )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v33->fields.maskSp;
              if ( Master_object )
              {
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)Master_object,
                                                                                0LL);
                if ( Master_object )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                  v34 = this->fields.__4__this;
                  if ( v34 )
                  {
                    eventId = this->fields.eventId;
                    maskSp = v34->fields.maskSp;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21);
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_38574572(
                                                                                    eventId,
                                                                                    maskSp,
                                                                                    (System_String_o *)StringLiteral_19471/*"event_tab_bg_mask"*/,
                                                                                    0LL);
                    v37 = this->fields.__4__this;
                    if ( v37 )
                    {
                      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v37->fields.maskLb;
                      if ( Master_object )
                      {
                        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)Master_object,
                                                                                        0LL);
                        if ( Master_object )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                          v38 = this->fields.__4__this;
                          if ( v38 )
                          {
                            maskLb = v38->fields.maskLb;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
                            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                                            (System_String_o *)StringLiteral_6578/*"FORTIFICATION_EVENT_END_MSG"*/,
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
    sub_1BCAA3C(Master_object, v21);
  }
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v22->fields.maskSp;
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0LL);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v23->fields.maskLb;
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0LL);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->fields.organizationBtnSp;
  if ( !Master_object )
    goto LABEL_50;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GameObjectExtensions__GetParent(v25, 0LL);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0LL);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_50;
  v27 = this->fields.eventId;
  organizationBtnSp = v26->fields.organizationBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_38574572(
                                                                  v27,
                                                                  organizationBtnSp,
                                                                  (System_String_o *)StringLiteral_17661/*"btn_bg_event_organization"*/,
                                                                  0LL);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_38574572(
                                                                  this->fields.eventId,
                                                                  v29->fields.organizationBtnTxtSp,
                                                                  (System_String_o *)StringLiteral_17754/*"btn_txt_event_organization"*/,
                                                                  0LL);
LABEL_41:
  v40 = this->fields.__4__this;
  if ( !v40 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v40->fields.assetManager;
  if ( !Master_object )
    goto LABEL_50;
  fortificationSlotBg = v40->fields.fortificationSlotBg;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)FortificationAssetManager__GetOrganizationBgTex(
                                                                  (FortificationAssetManager_o *)Master_object,
                                                                  this->fields.eventId,
                                                                  this->fields.slotIndex,
                                                                  1,
                                                                  v30);
  if ( !fortificationSlotBg )
    goto LABEL_50;
  ((void (__fastcall *)(struct UITexture_o *, DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppMethodPointer))fortificationSlotBg->klass->vtable._27_set_mainTexture.method)(
    fortificationSlotBg,
    Master_object,
    fortificationSlotBg->klass->vtable._28_get_shader.methodPtr);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__SetFotificationOrganizationPanel((EventFortificationManager_o *)Master_object, v21);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__InitDialog((EventFortificationManager_o *)Master_object, v21);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__InitListViewPanel((EventFortificationManager_o *)Master_object, v21);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__SetFortificationWorkMini((EventFortificationManager_o *)Master_object, v21);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__CreateOrganizationUI(
    (EventFortificationManager_o *)Master_object,
    this->fields.uiParent,
    v42);
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
  __int64 v2; // x2
  EventFortificationManager___c__DisplayClass31_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct EventFortificationManager_o *_4__this; // x8
  __int64 v13; // x2
  __int64 v14; // x3
  struct EventFortificationManager_o *v15; // x25
  EventFortificationListViewManager_o *eventFortificationListViewManager; // x20
  int32_t eventId; // w21
  FortificationConfirmDialogComponent_o *fortificationConfirmDialog; // x22
  EventFortificationWorkItem_o *item; // x23
  System_Action_bool__object__o *v20; // x24
  const MethodInfo *v21; // x5
  int64_t v22; // x2
  __int64 v23; // x3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct EventFortificationManager_o *v28; // x8
  struct EventFortificationListViewManager_o *v29; // x19
  struct UICommonButton_o *baseButton; // x20
  Il2CppObject *klass; // x21
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  const MethodInfo *v39; // x2

  v3 = this;
  if ( (byte_4B1A118 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__UserServantEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_EventFortificationManager_CloseServantFortificationList__, v6, v7);
    sub_1BCA7E0(&Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, v8, v9);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_1BCA7E0(
                                                                  &EventFortificationManager___c_TypeInfo,
                                                                  v10,
                                                                  v11);
    byte_4B1A118 = 1;
  }
  _4__this = v3->fields.__4__this;
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
  v15 = v3->fields.__4__this;
  if ( !v15 )
    goto LABEL_17;
  eventFortificationListViewManager = v15->fields.eventFortificationListViewManager;
  eventId = v15->fields.eventId;
  fortificationConfirmDialog = v15->fields.fortificationConfirmDialog;
  item = v3->fields.item;
  v20 = (System_Action_bool__object__o *)sub_1BCAA2C(System_Action_bool__UserServantEntity__TypeInfo, method, v13, v14);
  System_Action_bool__object____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_EventFortificationManager_CloseServantFortificationList__,
    0LL);
  if ( !eventFortificationListViewManager )
    goto LABEL_17;
  EventFortificationListViewManager__CreateList(
    eventFortificationListViewManager,
    eventId,
    fortificationConfirmDialog,
    item,
    (System_Action_bool__UserServantEntity__o *)v20,
    v21);
  v28 = v3->fields.__4__this;
  if ( !v28 )
    goto LABEL_17;
  v29 = v28->fields.eventFortificationListViewManager;
  this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, method);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
  }
  baseButton = this[5].fields.item->fields.baseButton;
  if ( !baseButton )
  {
    if ( !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[5].fields.item->klass;
    baseButton = (struct UICommonButton_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v22, v23);
    System_Action___ctor(
      (System_Action_o *)baseButton,
      klass,
      Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__31_1 = (struct System_Action_o *)baseButton;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__31_1,
      (int64_t)baseButton,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( !v29 )
LABEL_17:
    sub_1BCAA3C(this, method);
  v29->fields.CallbackFunc2 = (struct System_Action_o *)baseButton;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v29->fields.CallbackFunc2,
    (int64_t)baseButton,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  EventFortificationListViewManager__SetMode_46467428(v29, 2, v39);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  struct EventFortificationManager_o *_4__this; // x8
  EventFortificationListViewManager_o *eventFortificationListViewManager; // x20
  const MethodInfo *v24; // x2
  struct EventFortificationManager_o *v25; // x8
  struct EventFortificationManager_o *v26; // x8
  __int64 v27; // x2
  __int64 v28; // x3
  struct EventFortificationManager_o *v29; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  struct UnityEngine_GameObject_o *eventRoot; // x21
  Il2CppObject *klass; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x2
  __int64 v41; // x3
  struct EventFortificationManager_o *v42; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  struct UnityEngine_GameObject_o *mainPanel; // x20
  Il2CppObject *v45; // x21
  struct EventFortificationManager___c_StaticFields *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  CommonUI_o *v53; // x19

  v3 = this;
  if ( (byte_4B1A119 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_EventFortificationWorkManager__TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__, v10, v11);
    sub_1BCA7E0(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__, v12, v13);
    sub_1BCA7E0(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v14, v15);
    sub_1BCA7E0(&EventFortificationManager___c_TypeInfo, v16, v17);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_1BCA7E0(&StringLiteral_17047/*"ar200"*/, v18, v19);
    byte_4B1A119 = 1;
  }
  if ( v3->fields.servantData )
  {
    v20 = Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__;
    if ( (*((_BYTE *)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    v21 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                  v21,
                                                                  (System_String_o *)StringLiteral_17047/*"ar200"*/,
                                                                  0LL);
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  eventFortificationListViewManager = _4__this->fields.eventFortificationListViewManager;
  if ( !eventFortificationListViewManager )
    goto LABEL_34;
  EventFortificationListViewManager__StatusRequest(_4__this->fields.eventFortificationListViewManager, 0LL, v2);
  EventFortificationListViewManager__SetStatusKind(eventFortificationListViewManager, 0, v24);
  v25 = v3->fields.__4__this;
  if ( !v25 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v25->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_34;
  EventFortificationListViewManager__DestroyList((EventFortificationListViewManager_o *)this, method);
  v26 = v3->fields.__4__this;
  if ( !v26 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v26->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
  if ( !this )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v29 = v3->fields.__4__this;
  if ( !v29 )
    goto LABEL_34;
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)v29->fields.eventFortificationWorkManagers;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, method);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  }
  eventRoot = this[5].fields.__4__this->fields.eventRoot;
  if ( !eventRoot )
  {
    if ( !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[5].fields.__4__this->klass;
    eventRoot = (struct UnityEngine_GameObject_o *)sub_1BCAA2C(
                                                     System_Action_EventFortificationWorkManager__TypeInfo,
                                                     method,
                                                     v27,
                                                     v28);
    System_Action_object____ctor(
      (System_Action_object__o *)eventRoot,
      klass,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__32_1 = (struct System_Action_EventFortificationWorkManager__o *)eventRoot;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__32_1,
      (int64_t)eventRoot,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)eventRoot,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v42 = v3->fields.__4__this;
  if ( !v42 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)v42->fields.eventFortificationWorkMiniManagers;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo, method);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  }
  mainPanel = this[5].fields.__4__this->fields.mainPanel;
  if ( !mainPanel )
  {
    if ( !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
    }
    v45 = (Il2CppObject *)this[5].fields.__4__this->klass;
    mainPanel = (struct UnityEngine_GameObject_o *)sub_1BCAA2C(
                                                     System_Action_EventFortificationWorkManager__TypeInfo,
                                                     method,
                                                     v40,
                                                     v41);
    System_Action_object____ctor(
      (System_Action_object__o *)mainPanel,
      v45,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__,
      0LL);
    v46 = EventFortificationManager___c_TypeInfo->static_fields;
    v46->__9__32_2 = (struct System_Action_EventFortificationWorkManager__o *)mainPanel;
    sub_1BCA784((PartyOrganizationUtility_o *)&v46->__9__32_2, (int64_t)mainPanel, v47, v48, v49, v50, v51, v52);
  }
  if ( !eventFortificationWorkMiniManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)mainPanel,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  this = (EventFortificationManager___c__DisplayClass32_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v53 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
  if ( !v53 )
LABEL_34:
    sub_1BCAA3C(this, method);
  CommonUI__maskFadein(v53, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}