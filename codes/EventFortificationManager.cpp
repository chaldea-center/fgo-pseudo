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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v30; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_40FB673 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, requestFinish);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v9);
    sub_B16FFC(&EventFortificationManager___c__DisplayClass32_0_TypeInfo, v10);
    byte_40FB673 = 1;
  }
  v11 = sub_B170CC(EventFortificationManager___c__DisplayClass32_0_TypeInfo, requestFinish, servantData, method, v4);
  EventFortificationManager___c__DisplayClass32_0___ctor((EventFortificationManager___c__DisplayClass32_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_10;
  *(_QWORD *)(v11 + 16) = servantData;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)servantData,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v11 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_10;
  organizationPanel->fields.isTouchEnabled = 1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v30 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v11,
    (intptr_t)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationManager__CreateOrganizationUI(
        EventFortificationManager_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *autoFortificationButton_k__BackingField; // x22
  UnityEngine_GameObject_o *v17; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v26; // x21
  int v27; // s0
  UnityEngine_Transform_o *v30; // x21
  int v31; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  AutoFortificationButtonComponent_o *v35; // x20
  int32_t eventId; // w21
  System_Action_o *v37; // x22

  if ( (byte_40FB66B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, parent);
    sub_B16FFC(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FB66B = 1;
  }
  p_autoOrganizationBtn = (UnityEngine_Component_o **)&this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(autoOrganizationBtn, 0LL, 0LL) )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_23;
    autoFortificationButton_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._autoFortificationButton_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        autoFortificationButton_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v17 )
      goto LABEL_23;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v17,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    *p_autoOrganizationBtn = (UnityEngine_Component_o *)Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.autoOrganizationBtn,
      Component_srcLineSprite,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    if ( !*p_autoOrganizationBtn )
      goto LABEL_23;
    transform = UnityEngine_Component__get_transform(*p_autoOrganizationBtn, 0LL);
    if ( !transform )
      goto LABEL_23;
    UnityEngine_Transform__SetParent(transform, parent, 0LL);
    if ( !*p_autoOrganizationBtn
      || (v26 = UnityEngine_Component__get_transform(*p_autoOrganizationBtn, 0LL),
          *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL),
          !v26)
      || (UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL), !*p_autoOrganizationBtn)
      || (v30 = UnityEngine_Component__get_transform(*p_autoOrganizationBtn, 0LL),
          *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL),
          !v30)
      || (UnityEngine_Transform__set_localPosition(v30, *(UnityEngine_Vector3_o *)&v31, 0LL), !*p_autoOrganizationBtn)
      || (gameObject = UnityEngine_Component__get_gameObject(*p_autoOrganizationBtn, 0LL)) == 0LL )
    {
LABEL_23:
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  v35 = this->fields.autoOrganizationBtn;
  eventId = this->fields.eventId;
  v37 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, 0LL);
  if ( !v35 )
    goto LABEL_23;
  AutoFortificationButtonComponent__Init(v35, eventId, v37, 0LL);
}


void __fastcall EventFortificationManager__DestroyList(EventFortificationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  FortificationAssetManager_o *assetManager; // x0
  UnityEngine_Component_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Component_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  UnityEngine_Object_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Component_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_Object_o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Component_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  UnityEngine_Object_o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Component_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_Object_o *v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  UnityEngine_Component_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  UnityEngine_Object_o *v63; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x21
  EventFortificationManager___c_c *v71; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_0; // x22
  Il2CppObject *v74; // x23
  struct EventFortificationManager___c_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v86; // x21
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  BattleServantConfConponent_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v94; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v96; // x0
  struct EventFortificationManager___c_StaticFields *v97; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_1; // x21
  Il2CppObject *v99; // x22
  struct EventFortificationManager___c_StaticFields *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v111; // x20
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7

  if ( (byte_40FB676 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B16FFC(&System_Action_EventFortificationWorkManager__TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_EventFortificationManager___c__DestroyList_b__36_0__, v8);
    sub_B16FFC(&Method_EventFortificationManager___c__DestroyList_b__36_1__, v9);
    sub_B16FFC(&EventFortificationManager___c_TypeInfo, v10);
    byte_40FB676 = 1;
  }
  assetManager = this->fields.assetManager;
  if ( assetManager )
    FortificationAssetManager__Release(assetManager, this->fields.eventId, 0LL);
  p_fortificationCamera = (UnityEngine_Component_o **)&this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fortificationCamera, 0LL, 0LL) )
  {
    if ( !*p_fortificationCamera )
      goto LABEL_80;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_fortificationCamera, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_fortificationCamera = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.fortificationCamera, 0LL, v15, v16, v17, v18, v19, v20);
  }
  p_organizationPanel = (UnityEngine_Component_o **)&this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(organizationPanel, 0LL, 0LL) )
  {
    if ( !*p_organizationPanel )
      goto LABEL_80;
    v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_organizationPanel, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v23, 0LL);
    *p_organizationPanel = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.organizationPanel, 0LL, v24, v25, v26, v27, v28, v29);
  }
  p_fortificationConfirmDialog = (UnityEngine_Component_o **)&this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fortificationConfirmDialog, 0LL, 0LL) )
  {
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_80;
    v32 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_fortificationConfirmDialog, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v32, 0LL);
    *p_fortificationConfirmDialog = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
      0LL,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  p_fortificationAutomaticDialog = (UnityEngine_Component_o **)&this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fortificationAutomaticDialog, 0LL, 0LL) )
  {
    if ( !*p_fortificationAutomaticDialog )
      goto LABEL_80;
    v41 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_fortificationAutomaticDialog, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v41, 0LL);
    *p_fortificationAutomaticDialog = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.fortificationAutomaticDialog,
      0LL,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  p_eventFortificationListViewManager = (UnityEngine_Component_o **)&this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventFortificationListViewManager, 0LL, 0LL) )
  {
    if ( !*p_eventFortificationListViewManager )
      goto LABEL_80;
    v50 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_eventFortificationListViewManager, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v50, 0LL);
    *p_eventFortificationListViewManager = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventFortificationListViewManager,
      0LL,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  p_autoOrganizationBtn = (UnityEngine_Component_o **)&this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(autoOrganizationBtn, 0LL, 0LL) )
  {
    if ( *p_autoOrganizationBtn )
    {
      v63 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_autoOrganizationBtn, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v63, 0LL);
      *p_autoOrganizationBtn = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.autoOrganizationBtn, 0LL, v64, v65, v66, v67, v68, v69);
      goto LABEL_59;
    }
LABEL_80:
    sub_B170D4();
  }
LABEL_59:
  eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
  if ( eventFortificationWorkManagers )
  {
    v71 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v71 = EventFortificationManager___c_TypeInfo;
    }
    static_fields = v71->static_fields;
    _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v71);
        static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v74 = (Il2CppObject *)static_fields->__9;
      _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                        System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                        v59,
                                                                                        v60,
                                                                                        v61,
                                                                                        v62);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__36_0,
        v74,
        Method_EventFortificationManager___c__DestroyList_b__36_0__,
        (const MethodInfo_24B7310 *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v75 = EventFortificationManager___c_TypeInfo->static_fields;
      v75->__9__36_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v75->__9__36_0,
        (System_Int32_array **)_9__36_0,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
      (System_Action_T__o *)_9__36_0,
      (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v86 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                                                                    v82,
                                                                                                    v83,
                                                                                                    v84,
                                                                                                    v85);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v86,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v86;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkManagers,
      (System_Int32_array **)v86,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkMiniManagers;
  v94 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers )
  {
    v96 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v96 = EventFortificationManager___c_TypeInfo;
    }
    v97 = v96->static_fields;
    _9__36_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v97->__9__36_1;
    if ( !_9__36_1 )
    {
      if ( (BYTE3(v96->vtable._0_Equals.methodPtr) & 4) != 0 && !v96->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v96);
        v97 = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v99 = (Il2CppObject *)v97->__9;
      _9__36_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                        System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                        v59,
                                                                                        v60,
                                                                                        v61,
                                                                                        v62);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__36_1,
        v99,
        Method_EventFortificationManager___c__DestroyList_b__36_1__,
        (const MethodInfo_24B7310 *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v100 = EventFortificationManager___c_TypeInfo->static_fields;
      v100->__9__36_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v100->__9__36_1,
        (System_Int32_array **)_9__36_1,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      v94,
      (System_Action_T__o *)_9__36_1,
      (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v111 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                                                                     v107,
                                                                                                     v108,
                                                                                                     v109,
                                                                                                     v110);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v111,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    p_eventFortificationWorkMiniManagers->klass = (BattleServantConfConponent_c *)v111;
    sub_B16F98(p_eventFortificationWorkMiniManagers, (System_Int32_array **)v111, v112, v113, v114, v115, v116, v117);
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x1
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  BattleServantConfConponent_o *p_assetManager; // x19
  FortificationAssetManager_o *klass; // x21
  struct FortificationAssetManager_o *assetManager; // t1
  FortificationAssetManager_o *v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int32_t v53; // w19
  System_Action_o *v54; // x22

  if ( (byte_40FB66F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&FortificationAssetManager_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v11);
    sub_B16FFC(&Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__, v12);
    sub_B16FFC(&EventFortificationManager___c__DisplayClass28_0_TypeInfo, v13);
    byte_40FB66F = 1;
  }
  v14 = sub_B170CC(
          EventFortificationManager___c__DisplayClass28_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&slotIndex,
          uiParent,
          method);
  EventFortificationManager___c__DisplayClass28_0___ctor((EventFortificationManager___c__DisplayClass28_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_DWORD *)(v14 + 16) = eventId;
  *(_QWORD *)(v14 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 40) = uiParent;
  *(_DWORD *)(v14 + 32) = slotIndex;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 40), (System_Int32_array **)uiParent, v21, v22, v23, v24, v25, v26);
  this->fields.eventId = *(_DWORD *)(v14 + 16);
  this->fields.slotIndex = *(_DWORD *)(v14 + 32);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkManagers,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  EventFortificationManager__InitFortificationWorkMini(this, v38);
  assetManager = this->fields.assetManager;
  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  klass = assetManager;
  if ( !assetManager )
  {
    v46 = (FortificationAssetManager_o *)sub_B170CC(FortificationAssetManager_TypeInfo, v39, v40, v41, v42);
    FortificationAssetManager___ctor(v46, 0LL);
    p_assetManager->klass = (BattleServantConfConponent_c *)v46;
    sub_B16F98(p_assetManager, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
    klass = (FortificationAssetManager_o *)p_assetManager->klass;
  }
  v53 = *(_DWORD *)(v14 + 16);
  v54 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v14,
    Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__,
    0LL);
  if ( !klass )
LABEL_8:
    sub_B170D4();
  FortificationAssetManager__GetAssets(klass, v53, v54, 0LL);
}


void __fastcall EventFortificationManager__InitDialog(EventFortificationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationConfirmDialog_k__BackingField; // x21
  UnityEngine_GameObject_o *v10; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Component_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  struct FortificationAssetManager_o *v22; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationAutomaticDialog_k__BackingField; // x21
  UnityEngine_GameObject_o *v24; // x0
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *v32; // x0
  const MethodInfo *v33; // x2

  if ( (byte_40FB66C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FB66C = 1;
  }
  p_fortificationConfirmDialog = (UnityEngine_Component_o **)&this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(fortificationConfirmDialog, 0LL, 0LL) )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_28;
    fortificationConfirmDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._fortificationConfirmDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        fortificationConfirmDialog_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10 )
      goto LABEL_28;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v10,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    *p_fortificationConfirmDialog = (UnityEngine_Component_o *)Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
      Component_srcLineSprite,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject(*p_fortificationConfirmDialog, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v19);
  }
  if ( !*p_fortificationConfirmDialog )
    goto LABEL_28;
  FortificationConfirmDialogComponent__Init(
    (FortificationConfirmDialogComponent_o *)*p_fortificationConfirmDialog,
    this->fields.eventId,
    0LL);
  p_fortificationAutomaticDialog = (UnityEngine_Component_o **)&this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(fortificationAutomaticDialog, 0LL, 0LL) )
  {
    v22 = this->fields.assetManager;
    if ( v22 )
    {
      fortificationAutomaticDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v22->fields._fortificationAutomaticDialog_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v24 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          fortificationAutomaticDialog_k__BackingField,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v24 )
      {
        v25 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v24,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
        *p_fortificationAutomaticDialog = (UnityEngine_Component_o *)v25;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.fortificationAutomaticDialog,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        if ( *p_fortificationAutomaticDialog )
        {
          v32 = UnityEngine_Component__get_gameObject(*p_fortificationAutomaticDialog, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v32, v33);
          goto LABEL_26;
        }
      }
    }
LABEL_28:
    sub_B170D4();
  }
LABEL_26:
  if ( !*p_fortificationAutomaticDialog )
    goto LABEL_28;
  BaseDialog__Init((BaseDialog_o *)*p_fortificationAutomaticDialog, 0LL);
}


void __fastcall EventFortificationManager__InitFortificationWorkMini(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleServantConfConponent_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v14; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v16; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__25_0; // x21
  Il2CppObject *v19; // x22
  struct EventFortificationManager___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_40FB66E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B16FFC(&System_Action_EventFortificationWorkManager__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkManager__get_Count__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v10);
    sub_B16FFC(&Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__, v11);
    sub_B16FFC(&EventFortificationManager___c_TypeInfo, v12);
    byte_40FB66E = 1;
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkMiniManagers;
  v14 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers && v14->fields._size >= 1 )
  {
    v16 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v16 = EventFortificationManager___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                        System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                        method,
                                                                                        v2,
                                                                                        v3,
                                                                                        v4);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__25_0,
        v19,
        Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__,
        (const MethodInfo_24B7310 *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v20 = EventFortificationManager___c_TypeInfo->static_fields;
      v20->__9__25_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__25_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v20->__9__25_0,
        (System_Int32_array **)_9__25_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      v14,
      (System_Action_T__o *)_9__25_0,
      (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  p_eventFortificationWorkMiniManagers->klass = (BattleServantConfConponent_c *)v27;
  sub_B16F98(p_eventFortificationWorkMiniManagers, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
}


void __fastcall EventFortificationManager__InitListViewPanel(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationListViewPanel_k__BackingField; // x21
  UnityEngine_GameObject_o *v9; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v18; // x2

  if ( (byte_40FB66D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FB66D = 1;
  }
  p_eventFortificationListViewManager = (UnityEngine_Component_o **)&this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(eventFortificationListViewManager, 0LL, 0LL) )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_15;
    eventFortificationListViewPanel_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._eventFortificationListViewPanel_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       eventFortificationListViewPanel_k__BackingField,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v9,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___),
          *p_eventFortificationListViewManager = (UnityEngine_Component_o *)Component_srcLineSprite,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.eventFortificationListViewManager,
            Component_srcLineSprite,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          !*p_eventFortificationListViewManager) )
    {
LABEL_15:
      sub_B170D4();
    }
    gameObject = UnityEngine_Component__get_gameObject(*p_eventFortificationListViewManager, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v18);
  }
}


bool __fastcall EventFortificationManager__IsOrganizationPanelActive(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *organizationPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
  if ( !organizationPanel || (gameObject = UnityEngine_Component__get_gameObject(organizationPanel, 0LL)) == 0LL )
    sub_B170D4();
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationManager__LocateObjectToFotificationPanel(
        EventFortificationManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Transform_o *v8; // x20
  int v9; // s0
  UnityEngine_GameObject_o *v12; // x0

  if ( !obj )
    goto LABEL_7;
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (v7 = UnityEngine_GameObject__get_transform(gameObject, 0LL), !transform)
    || (UnityEngine_Transform__SetParent(transform, v7, 0LL),
        v8 = UnityEngine_GameObject__get_transform(obj, 0LL),
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_one(0LL),
        !v8)
    || (UnityEngine_Transform__set_localScale(v8, *(UnityEngine_Vector3_o *)&v9, 0LL),
        (v12 = UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v12, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationManager__LocateObjectToUIRoot(
        EventFortificationManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v6; // x20
  int v7; // s0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !obj
    || (transform = UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL
    || (UnityEngine_Transform__SetParent(transform, this->fields.uiRoot, 0LL),
        v6 = UnityEngine_GameObject__get_transform(obj, 0LL),
        *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_one(0LL),
        !v6)
    || (UnityEngine_Transform__set_localScale(v6, *(UnityEngine_Vector3_o *)&v7, 0LL),
        (gameObject = UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall EventFortificationManager__OnClickBackBtn(EventFortificationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  FortificationOrganizationPanelComponent_o *organizationPanel; // x0
  UnityEngine_Component_o *autoOrganizationBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x20
  EventFortificationManager___c_c *v17; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__34_0; // x21
  Il2CppObject *v20; // x22
  struct EventFortificationManager___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *v28; // x0
  ListViewManager_o *eventFortificationListViewManager; // x0

  if ( (byte_40FB675 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B16FFC(&System_Action_EventFortificationWorkManager__TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, v7);
    sub_B16FFC(&EventFortificationManager___c_TypeInfo, v8);
    byte_40FB675 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_21;
  FortificationOrganizationPanelComponent__Close(organizationPanel, 0LL);
  autoOrganizationBtn = (UnityEngine_Component_o *)this->fields.autoOrganizationBtn;
  if ( !autoOrganizationBtn )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject(autoOrganizationBtn, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
  v17 = EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v17 = EventFortificationManager___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__34_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                      v12,
                                                                                      v13,
                                                                                      v14,
                                                                                      v15);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__34_0,
      v20,
      Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v21 = EventFortificationManager___c_TypeInfo->static_fields;
    v21->__9__34_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__34_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v21->__9__34_0,
      (System_Int32_array **)_9__34_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !eventFortificationWorkManagers
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
          (System_Action_T__o *)_9__34_0,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__),
        (v28 = this->fields.eventFortificationWorkManagers) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v28,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__),
        (eventFortificationListViewManager = (ListViewManager_o *)this->fields.eventFortificationListViewManager) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  ListViewManager__ClearScrollBarValue(eventFortificationListViewManager, 1, 0LL);
}


void __fastcall EventFortificationManager__OnClickOrganizationBtn(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  FortificationAssetManager_o *assetManager; // x0
  UnityEngine_Texture2D_o *OrganizationBgTex; // x0
  UnityEngine_Component_o *autoOrganizationBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1

  if ( (byte_40FB674 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB674 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  assetManager = this->fields.assetManager;
  if ( !assetManager
    || (OrganizationBgTex = FortificationAssetManager__GetOrganizationBgTex(
                              assetManager,
                              this->fields.eventId,
                              this->fields.slotIndex,
                              0,
                              0LL),
        !this->fields.organizationPanel)
    || (FortificationOrganizationPanelComponent__Open(
          this->fields.organizationPanel,
          this->fields.eventId,
          OrganizationBgTex,
          this->fields.mainPanel,
          this->fields.eventRoot,
          this->fields.fortificationCamera,
          this->fields.mainCamera,
          0LL),
        (autoOrganizationBtn = (UnityEngine_Component_o *)this->fields.autoOrganizationBtn) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(autoOrganizationBtn, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  EventFortificationManager__SetFortificationWork(this, v7);
}


void __fastcall EventFortificationManager__ResetRewardSceneObj(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainPanel; // x0
  UnityEngine_GameObject_o *eventRoot; // x0

  mainPanel = this->fields.mainPanel;
  if ( !mainPanel || (UnityEngine_GameObject__SetActive(mainPanel, 1, 0LL), (eventRoot = this->fields.eventRoot) == 0LL) )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(eventRoot, 1, 0LL);
}


void __fastcall EventFortificationManager__SelectFortificationServant(
        EventFortificationManager_o *this,
        EventFortificationWorkItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v30; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_40FB672 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, item);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__, v9);
    sub_B16FFC(&EventFortificationManager___c__DisplayClass31_0_TypeInfo, v10);
    byte_40FB672 = 1;
  }
  v11 = sub_B170CC(EventFortificationManager___c__DisplayClass31_0_TypeInfo, item, method, v3, v4);
  EventFortificationManager___c__DisplayClass31_0___ctor((EventFortificationManager___c__DisplayClass31_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_10;
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 24) = item;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)item, v18, v19, v20, v21, v22, v23);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_10;
  organizationPanel->fields.isTouchEnabled = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v30 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v11,
    Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v16; // x1
  UIAtlas_o *UIAtlas; // x20
  WebViewManager_o *Instance; // x0
  EventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v20; // x3
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationWorkObj_k__BackingField; // x21
  UnityEngine_GameObject_o *v24; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  int32_t eventId; // w23
  EventFortificationWorkManager_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v32; // x24
  const MethodInfo *v33; // x6
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_Component_o *organizationPanel; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Transform_o *v39; // x23
  int v40; // s0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Transform_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x0
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB670 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventFortificationWorkItem___ctor__, method);
    sub_B16FFC(&System_Action_EventFortificationWorkItem__TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFortificationMaster___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v7);
    sub_B16FFC(&Method_EventFortificationManager_SelectFortificationServant__, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v11);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_UIAtlas___, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_13544, v16);
    byte_40FB670 = 1;
  }
  entities = 0LL;
  memset(&v48, 0, sizeof(v48));
  UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
              (System_String_o *)StringLiteral_13544,
              (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_UIAtlas___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_39;
  if ( !EventFortificationMaster__TryGetEntityList(
          MasterData_WarQuestSelectionMaster,
          &entities,
          this->fields.eventId,
          v20) )
    return;
  if ( !entities )
LABEL_39:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v48 = v47;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__) )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_B170D4();
    current = (EventFortificationEntity_o *)v48.fields.current;
    eventFortificationWorkObj_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._eventFortificationWorkObj_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v24 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        eventFortificationWorkObj_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v24 )
      sub_B170D4();
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v24,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v27 = (EventFortificationWorkManager_o *)Component_srcLineSprite;
    v32 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_EventFortificationWorkItem__TypeInfo,
                                                                                 v28,
                                                                                 v29,
                                                                                 v30,
                                                                                 v31);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v32,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      (const MethodInfo_24B7310 *)Method_System_Action_EventFortificationWorkItem___ctor__);
    if ( !v27 )
      sub_B170D4();
    EventFortificationWorkManager__SetServantFortificationWork(
      v27,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v32,
      this->fields.organizationPanel,
      UIAtlas,
      v33);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
    organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
    if ( !organizationPanel )
      sub_B170D4();
    v36 = UnityEngine_Component__get_gameObject(organizationPanel, 0LL);
    if ( !v36 )
      sub_B170D4();
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v36, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
    if ( !v38 )
      sub_B170D4();
    v39 = UnityEngine_GameObject__get_transform(v38, 0LL);
    *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_one(0LL);
    if ( !v39 )
      sub_B170D4();
    UnityEngine_Transform__set_localScale(v39, *(UnityEngine_Vector3_o *)&v40, 0LL);
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
    if ( !v43 )
      sub_B170D4();
    v44 = UnityEngine_GameObject__get_transform(v43, 0LL);
    if ( !current )
      sub_B170D4();
    if ( !v44 )
      sub_B170D4();
    v50.fields.y = (float)current->fields.y;
    v50.fields.x = (float)current->fields.x;
    v50.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v44, v50, 0LL);
    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
    if ( !v45 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v45, 1, 0LL);
    eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
    if ( !eventFortificationWorkManagers )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventFortificationWorkManagers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  __int64 v14; // x1
  WebViewManager_o *Instance; // x0
  EventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v17; // x3
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationWorkMiniObj_k__BackingField; // x20
  UnityEngine_GameObject_o *v21; // x0
  EventFortificationWorkManager_o *Component_srcLineSprite; // x20
  int32_t eventId; // w22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v28; // x23
  const MethodInfo *v29; // x6
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v31; // x2
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v34; // x0
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // x0
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB671 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventFortificationWorkItem___ctor__, method);
    sub_B16FFC(&System_Action_EventFortificationWorkItem__TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFortificationMaster___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v7);
    sub_B16FFC(&Method_EventFortificationManager_SelectFortificationServant__, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v11);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FB671 = 1;
  }
  entities = 0LL;
  memset(&v37, 0, sizeof(v37));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  if ( !EventFortificationMaster__TryGetEntityList(
          MasterData_WarQuestSelectionMaster,
          &entities,
          this->fields.eventId,
          v17) )
    return;
  if ( !entities )
LABEL_31:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v37 = v36;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__) )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_B170D4();
    current = (EventFortificationEntity_o *)v37.fields.current;
    eventFortificationWorkMiniObj_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._eventFortificationWorkMiniObj_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        eventFortificationWorkMiniObj_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v21 )
      sub_B170D4();
    Component_srcLineSprite = (EventFortificationWorkManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v21,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v28 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_EventFortificationWorkItem__TypeInfo,
                                                                                 v24,
                                                                                 v25,
                                                                                 v26,
                                                                                 v27);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v28,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      (const MethodInfo_24B7310 *)Method_System_Action_EventFortificationWorkItem___ctor__);
    if ( !Component_srcLineSprite )
      sub_B170D4();
    EventFortificationWorkManager__SetServantFortificationWork(
      Component_srcLineSprite,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v28,
      0LL,
      0LL,
      v29);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    EventFortificationManager__LocateObjectToFotificationPanel(this, gameObject, v31);
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    if ( !v32 )
      sub_B170D4();
    transform = UnityEngine_GameObject__get_transform(v32, 0LL);
    if ( !current )
      sub_B170D4();
    if ( !transform )
      sub_B170D4();
    v39.fields.y = (float)current->fields.rewardSceneY;
    v39.fields.x = (float)current->fields.rewardSceneX;
    v39.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v39, 0LL);
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    if ( !v34 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v34, 1, 0LL);
    eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
    if ( !eventFortificationWorkMiniManagers )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventFortificationWorkMiniManagers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void __fastcall EventFortificationManager__SetFotificationOrganizationPanel(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationCamera_k__BackingField; // x21
  UnityEngine_GameObject_o *v10; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Component_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  struct FortificationAssetManager_o *v22; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *organizationPanel_k__BackingField; // x21
  UnityEngine_GameObject_o *v24; // x0
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *v32; // x1
  const MethodInfo *v33; // x2

  if ( (byte_40FB66A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MapCamera___, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FB66A = 1;
  }
  p_fortificationCamera = (UnityEngine_Component_o **)&this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(fortificationCamera, 0LL, 0LL) )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_26;
    fortificationCamera_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._fortificationCamera_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        fortificationCamera_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10 )
      goto LABEL_26;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v10,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    *p_fortificationCamera = (UnityEngine_Component_o *)Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.fortificationCamera,
      Component_srcLineSprite,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    if ( !*p_fortificationCamera )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject(*p_fortificationCamera, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v19);
  }
  p_organizationPanel = (UnityEngine_Component_o **)&this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(organizationPanel, 0LL, 0LL) )
  {
    v22 = this->fields.assetManager;
    if ( v22 )
    {
      organizationPanel_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v22->fields._organizationPanel_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v24 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          organizationPanel_k__BackingField,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v24 )
      {
        v25 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v24,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
        *p_organizationPanel = (UnityEngine_Component_o *)v25;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.organizationPanel, v25, v26, v27, v28, v29, v30, v31);
        if ( *p_organizationPanel )
        {
          v32 = UnityEngine_Component__get_gameObject(*p_organizationPanel, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v32, v33);
          return;
        }
      }
    }
LABEL_26:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct SetSvtInfo_array *setSvtInfos; // x8
  int max_length; // w9
  int v17; // w11
  bool v18; // w10
  SetSvtInfo_o *v19; // x12
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FB677 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, *(_QWORD *)&fortificationIdx);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FB677 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_20;
  v12 = UserEventFortificationMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          UserId,
          this->fields.eventId,
          fortificationIdx,
          0LL);
  if ( !v12 )
    return 0;
  if ( !entity || (setSvtInfos = entity->fields.setSvtInfos) == 0LL )
LABEL_20:
    sub_B170D4();
  max_length = setSvtInfos->max_length;
  if ( max_length < 1 )
    return 0;
  v17 = 0;
  v18 = 0;
  do
  {
    if ( v17 >= (unsigned int)max_length )
    {
      sub_B17100(v12, v13, v14);
      sub_B170A0();
    }
    v19 = setSvtInfos->m_Items[v17];
    if ( !v19 )
      goto LABEL_20;
    ++v17;
    if ( v19->fields.position == position )
      v18 = 1;
  }
  while ( v17 < max_length );
  return v18;
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_0(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  FortificationAutomaticDialogComponent_o *fortificationAutomaticDialog; // x0
  FortificationAutomaticDialogComponent_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x22

  if ( (byte_40FB678 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventFortificationManager__CreateOrganizationUI_b__22_1__, v3);
    sub_B16FFC(&Method_EventFortificationManager__CreateOrganizationUI_b__22_2__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FB678 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_10;
  organizationPanel->fields.isTouchEnabled = 0;
  fortificationAutomaticDialog = this->fields.fortificationAutomaticDialog;
  if ( !fortificationAutomaticDialog
    || (FortificationAutomaticDialogComponent__Init(fortificationAutomaticDialog, this->fields.eventId, 0LL),
        v8 = this->fields.fortificationAutomaticDialog,
        v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12),
        System_Action___ctor(
          v13,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_1__,
          0LL),
        v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_2__,
          0LL),
        !v8) )
  {
LABEL_10:
    sub_B170D4();
  }
  FortificationAutomaticDialogComponent__Open(v8, v13, v18, 0LL);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_1(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x20
  EventFortificationManager___c_c *v12; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__22_3; // x21
  Il2CppObject *v15; // x22
  struct EventFortificationManager___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  EventFortificationManager___c_c *v27; // x0
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // x19
  struct EventFortificationManager___c_StaticFields *v29; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__22_4; // x20
  Il2CppObject *v31; // x21
  struct EventFortificationManager___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40FB679 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B16FFC(&System_Action_EventFortificationWorkManager__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v7);
    sub_B16FFC(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__, v8);
    sub_B16FFC(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__, v9);
    sub_B16FFC(&EventFortificationManager___c_TypeInfo, v10);
    byte_40FB679 = 1;
  }
  eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
  v12 = EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v12 = EventFortificationManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__22_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__22_3;
  if ( !_9__22_3 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__22_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__22_3,
      v15,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__,
      (const MethodInfo_24B7310 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v16 = EventFortificationManager___c_TypeInfo->static_fields;
    v16->__9__22_3 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__22_3,
      (System_Int32_array **)_9__22_3,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_22;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
    (System_Action_T__o *)_9__22_3,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v27 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v27 = EventFortificationManager___c_TypeInfo;
  }
  v29 = v27->static_fields;
  _9__22_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v29->__9__22_4;
  if ( !_9__22_4 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v29 = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)v29->__9;
    _9__22_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                      v23,
                                                                                      v24,
                                                                                      v25,
                                                                                      v26);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__22_4,
      v31,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__,
      (const MethodInfo_24B7310 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v32 = EventFortificationManager___c_TypeInfo->static_fields;
    v32->__9__22_4 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v32->__9__22_4,
      (System_Int32_array **)_9__22_4,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( !eventFortificationWorkMiniManagers )
LABEL_22:
    sub_B170D4();
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__22_4,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_2(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8

  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    sub_B170D4();
  organizationPanel->fields.isTouchEnabled = 1;
}


void __fastcall EventFortificationManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FA8 & 1) == 0 )
  {
    sub_B16FFC(&EventFortificationManager___c_TypeInfo, v1);
    byte_40F6FA8 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventFortificationManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventFortificationManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CloseServantFortificationList_b__32_2(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B170D4();
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_3(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B170D4();
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_4(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B170D4();
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F6FAC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, data);
    byte_40F6FAC = 1;
  }
  if ( !data )
    sub_B170D4();
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F6FAD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, data);
    byte_40F6FAD = 1;
  }
  if ( !data )
    sub_B170D4();
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___InitFortificationWorkMini_b__25_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F6FA9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, data);
    byte_40F6FA9 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL) )
  {
    if ( !data )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___OnClickBackBtn_b__34_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F6FAB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, data);
    byte_40F6FAB = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL) )
  {
    if ( !data )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___SelectFortificationServant_b__31_1(
        EventFortificationManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  CommonUI_o *Instance; // x19

  if ( (byte_40F6FAA & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_40F6FAA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  EventEntity_o *Entity; // x0
  struct EventFortificationManager_o *v13; // x8
  EventFortificationManager_o **p__4__this; // x22
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  struct EventFortificationManager_o *v23; // x8
  int32_t v24; // w20
  UISprite_o *v25; // x21
  struct EventFortificationManager_o *_4__this; // x8
  UnityEngine_Component_o *organizationBtnSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Component_o *maskSp; // x0
  UnityEngine_GameObject_o *v32; // x0
  struct EventFortificationManager_o *v33; // x8
  int32_t eventId; // w20
  UISprite_o *v35; // x21
  UnityEngine_Component_o *maskLb; // x0
  UnityEngine_GameObject_o *v37; // x0
  UILabel_o *v38; // x20
  System_String_o *v39; // x0
  EventFortificationManager_o *v40; // x8
  FortificationAssetManager_o *assetManager; // x0
  struct UITexture_o *fortificationSlotBg; // x20
  UnityEngine_Texture2D_o *OrganizationBgTex; // x0

  if ( (byte_40F6FAE & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_16988, v7);
    sub_B16FFC(&StringLiteral_6408, v8);
    sub_B16FFC(&StringLiteral_16904, v9);
    sub_B16FFC(&StringLiteral_18532, v10);
    byte_40F6FAE = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              Master_WarQuestSelectionMaster,
                              this->fields.eventId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity || !EventEntity__IsEventPeriod(Entity, 0LL, 0LL) )
  {
    p__4__this = &this->fields.__4__this;
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      organizationBtnSp = (UnityEngine_Component_o *)_4__this->fields.organizationBtnSp;
      if ( organizationBtnSp )
      {
        gameObject = UnityEngine_Component__get_gameObject(organizationBtnSp, 0LL);
        Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
        if ( Parent )
        {
          v30 = UnityEngine_Component__get_gameObject(Parent, 0LL);
          if ( v30 )
          {
            UnityEngine_GameObject__SetActive(v30, 0, 0LL);
            if ( *p__4__this )
            {
              maskSp = (UnityEngine_Component_o *)(*p__4__this)->fields.maskSp;
              if ( maskSp )
              {
                v32 = UnityEngine_Component__get_gameObject(maskSp, 0LL);
                if ( v32 )
                {
                  UnityEngine_GameObject__SetActive(v32, 1, 0LL);
                  v33 = this->fields.__4__this;
                  if ( v33 )
                  {
                    eventId = this->fields.eventId;
                    v35 = v33->fields.maskSp;
                    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    AtlasManager__SetEventUI_28584872(eventId, v35, (System_String_o *)StringLiteral_18532, 0LL);
                    if ( *p__4__this )
                    {
                      maskLb = (UnityEngine_Component_o *)(*p__4__this)->fields.maskLb;
                      if ( maskLb )
                      {
                        v37 = UnityEngine_Component__get_gameObject(maskLb, 0LL);
                        if ( v37 )
                        {
                          UnityEngine_GameObject__SetActive(v37, 1, 0LL);
                          if ( *p__4__this )
                          {
                            v38 = (*p__4__this)->fields.maskLb;
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v39 = LocalizationManager__Get((System_String_o *)StringLiteral_6408, 0LL);
                            if ( v38 )
                            {
                              UILabel__set_text(v38, v39, 0LL);
                              goto LABEL_45;
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
LABEL_54:
    sub_B170D4();
  }
  p__4__this = &this->fields.__4__this;
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_54;
  v15 = (UnityEngine_Component_o *)v13->fields.maskSp;
  if ( !v15 )
    goto LABEL_54;
  v16 = UnityEngine_Component__get_gameObject(v15, 0LL);
  if ( !v16 )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(v16, 0, 0LL);
  if ( !*p__4__this )
    goto LABEL_54;
  v17 = (UnityEngine_Component_o *)(*p__4__this)->fields.maskLb;
  if ( !v17 )
    goto LABEL_54;
  v18 = UnityEngine_Component__get_gameObject(v17, 0LL);
  if ( !v18 )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(v18, 0, 0LL);
  if ( !*p__4__this )
    goto LABEL_54;
  v19 = (UnityEngine_Component_o *)(*p__4__this)->fields.organizationBtnSp;
  if ( !v19 )
    goto LABEL_54;
  v20 = UnityEngine_Component__get_gameObject(v19, 0LL);
  v21 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v20, 0LL);
  if ( !v21 )
    goto LABEL_54;
  v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
  if ( !v22 )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(v22, 1, 0LL);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_54;
  v24 = this->fields.eventId;
  v25 = v23->fields.organizationBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(v24, v25, (System_String_o *)StringLiteral_16904, 0LL);
  if ( !*p__4__this )
    goto LABEL_54;
  AtlasManager__SetEventUI_28584872(
    this->fields.eventId,
    (*p__4__this)->fields.organizationBtnTxtSp,
    (System_String_o *)StringLiteral_16988,
    0LL);
LABEL_45:
  v40 = *p__4__this;
  if ( !*p__4__this )
    goto LABEL_54;
  assetManager = v40->fields.assetManager;
  if ( !assetManager )
    goto LABEL_54;
  fortificationSlotBg = v40->fields.fortificationSlotBg;
  OrganizationBgTex = FortificationAssetManager__GetOrganizationBgTex(
                        assetManager,
                        this->fields.eventId,
                        this->fields.slotIndex,
                        1,
                        0LL);
  if ( !fortificationSlotBg )
    goto LABEL_54;
  ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))fortificationSlotBg->klass->vtable._27_set_mainTexture.method)(
    fortificationSlotBg,
    OrganizationBgTex,
    fortificationSlotBg->klass->vtable._28_get_shader.methodPtr);
  if ( !*p__4__this )
    goto LABEL_54;
  EventFortificationManager__SetFotificationOrganizationPanel(*p__4__this, 0LL);
  if ( !*p__4__this )
    goto LABEL_54;
  EventFortificationManager__InitDialog(*p__4__this, 0LL);
  if ( !*p__4__this )
    goto LABEL_54;
  EventFortificationManager__InitListViewPanel(*p__4__this, 0LL);
  if ( !*p__4__this )
    goto LABEL_54;
  EventFortificationManager__SetFortificationWorkMini(*p__4__this, 0LL);
  if ( !*p__4__this )
    goto LABEL_54;
  EventFortificationManager__CreateOrganizationUI(*p__4__this, this->fields.uiParent, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct EventFortificationManager_o *_4__this; // x8
  UnityEngine_Component_o *eventFortificationListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct EventFortificationManager_o *v15; // x24
  EventFortificationListViewManager_o *v16; // x20
  int32_t eventId; // w21
  FortificationConfirmDialogComponent_o *fortificationConfirmDialog; // x22
  EventFortificationWorkItem_o *item; // x23
  System_Action_bool__UserServantEntity__o *v20; // x25
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct EventFortificationManager_o *v25; // x8
  EventFortificationListViewManager_o *v26; // x19
  EventFortificationManager___c_c *v27; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__31_1; // x20
  Il2CppObject *v30; // x21
  struct EventFortificationManager___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_40F6FAF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__UserServantEntity___ctor__, method);
    sub_B16FFC(&System_Action_bool__UserServantEntity__TypeInfo, v3);
    sub_B16FFC(&System_Action_TypeInfo, v4);
    sub_B16FFC(&Method_EventFortificationManager_CloseServantFortificationList__, v5);
    sub_B16FFC(&Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, v6);
    sub_B16FFC(&EventFortificationManager___c_TypeInfo, v7);
    byte_40F6FAF = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  eventFortificationListViewManager = (UnityEngine_Component_o *)_4__this->fields.eventFortificationListViewManager;
  if ( !eventFortificationListViewManager )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(eventFortificationListViewManager, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_19;
  v16 = v15->fields.eventFortificationListViewManager;
  eventId = v15->fields.eventId;
  fortificationConfirmDialog = v15->fields.fortificationConfirmDialog;
  item = this->fields.item;
  v20 = (System_Action_bool__UserServantEntity__o *)sub_B170CC(
                                                      System_Action_bool__UserServantEntity__TypeInfo,
                                                      v11,
                                                      v12,
                                                      v13,
                                                      v14);
  System_Action_bool__UserServantEntity____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_EventFortificationManager_CloseServantFortificationList__,
    (const MethodInfo_24C3044 *)Method_System_Action_bool__UserServantEntity___ctor__);
  if ( !v16 )
    goto LABEL_19;
  EventFortificationListViewManager__CreateList(v16, eventId, fortificationConfirmDialog, item, v20, 0LL);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_19;
  v26 = v25->fields.eventFortificationListViewManager;
  v27 = EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v27 = EventFortificationManager___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__31_1 = static_fields->__9__31_1;
  if ( !_9__31_1 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__31_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
    System_Action___ctor(_9__31_1, v30, Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, 0LL);
    v31 = EventFortificationManager___c_TypeInfo->static_fields;
    v31->__9__31_1 = _9__31_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v31->__9__31_1,
      (System_Int32_array **)_9__31_1,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !v26 )
LABEL_19:
    sub_B170D4();
  EventFortificationListViewManager__SetMode_27743704(v26, 2, _9__31_1, 0LL);
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
  __int64 v3; // x1
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
  EventFortificationListViewManager_o *eventFortificationListViewManager; // x0
  struct EventFortificationManager_o *v16; // x8
  EventFortificationListViewManager_o *v17; // x0
  struct EventFortificationManager_o *v18; // x8
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct EventFortificationManager_o *v25; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *eventFortificationWorkManagers; // x20
  EventFortificationManager___c_c *v27; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__32_1; // x21
  Il2CppObject *v30; // x22
  struct EventFortificationManager___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct EventFortificationManager_o *v42; // x8
  EventFortificationManager___c_c *v43; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *eventFortificationWorkMiniManagers; // x19
  struct EventFortificationManager___c_StaticFields *v45; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__32_2; // x20
  Il2CppObject *v47; // x21
  struct EventFortificationManager___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  CommonUI_o *Instance; // x19

  if ( (byte_40F6FB0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B16FFC(&System_Action_EventFortificationWorkManager__TypeInfo, v3);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__, v7);
    sub_B16FFC(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__, v8);
    sub_B16FFC(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v9);
    sub_B16FFC(&EventFortificationManager___c_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_16375, v11);
    byte_40F6FB0 = 1;
  }
  if ( this->fields.servantData )
  {
    v12 = Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__;
    if ( (*((_BYTE *)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__ + 75) & 2) != 0 )
      v12 = (_QWORD *)sub_B17004(Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    v13 = (System_Reflection_MethodBase_o *)sub_B16FE0(v12, v12[3]);
    OverwriteAssetSoundName__PlaySe(v13, (System_String_o *)StringLiteral_16375, 0LL);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_39;
  eventFortificationListViewManager = _4__this->fields.eventFortificationListViewManager;
  if ( !eventFortificationListViewManager )
    goto LABEL_39;
  EventFortificationListViewManager__InitBackListView(eventFortificationListViewManager, 0LL);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_39;
  v17 = v16->fields.eventFortificationListViewManager;
  if ( !v17 )
    goto LABEL_39;
  EventFortificationListViewManager__DestroyList(v17, 0LL);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_39;
  v19 = (UnityEngine_Component_o *)v18->fields.eventFortificationListViewManager;
  if ( !v19 )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_39;
  eventFortificationWorkManagers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v25->fields.eventFortificationWorkManagers;
  v27 = EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v27 = EventFortificationManager___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__32_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__32_1;
  if ( !_9__32_1 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__32_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                      v21,
                                                                                      v22,
                                                                                      v23,
                                                                                      v24);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__32_1,
      v30,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__,
      (const MethodInfo_24B7310 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v31 = EventFortificationManager___c_TypeInfo->static_fields;
    v31->__9__32_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__32_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v31->__9__32_1,
      (System_Int32_array **)_9__32_1,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_39;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)_9__32_1,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v42 = this->fields.__4__this;
  if ( !v42 )
    goto LABEL_39;
  v43 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v42->fields.eventFortificationWorkMiniManagers;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v43 = EventFortificationManager___c_TypeInfo;
  }
  v45 = v43->static_fields;
  _9__32_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v45->__9__32_2;
  if ( !_9__32_2 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v45 = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v45->__9;
    _9__32_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                      v38,
                                                                                      v39,
                                                                                      v40,
                                                                                      v41);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__32_2,
      v47,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__,
      (const MethodInfo_24B7310 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v48 = EventFortificationManager___c_TypeInfo->static_fields;
    v48->__9__32_2 = (struct System_Action_EventFortificationWorkManager__o *)_9__32_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v48->__9__32_2,
      (System_Int32_array **)_9__32_2,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !eventFortificationWorkMiniManagers )
    goto LABEL_39;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__32_2,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance )
LABEL_39:
    sub_B170D4();
  CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}