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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v27; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x21

  if ( (byte_41890AF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, requestFinish);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v8);
    sub_B2C35C(&EventFortificationManager___c__DisplayClass32_0_TypeInfo, v9);
    byte_41890AF = 1;
  }
  v10 = sub_B2C42C(EventFortificationManager___c__DisplayClass32_0_TypeInfo);
  EventFortificationManager___c__DisplayClass32_0___ctor((EventFortificationManager___c__DisplayClass32_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = servantData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v10 + 16),
    (System_Int32_array **)servantData,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  *(_QWORD *)(v10 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_10;
  organizationPanel->fields.isTouchEnabled = 1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v27 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
  v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v10,
    (intptr_t)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B2C434(v11, v12);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v29, 0LL);
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
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x22
  UnityEngine_GameObject_o *transform; // x0
  __int64 v12; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *autoFortificationButton_k__BackingField; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Transform_o *v22; // x21
  int v23; // s0
  UnityEngine_Transform_o *v26; // x21
  int v27; // s0
  AutoFortificationButtonComponent_o *v30; // x20
  int32_t eventId; // w21
  System_Action_o *v32; // x22

  if ( (byte_41890A7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, parent);
    sub_B2C35C(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_41890A7 = 1;
  }
  p_autoOrganizationBtn = &this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(autoOrganizationBtn, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
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
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              autoFortificationButton_k__BackingField,
                                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_23;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       transform,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    *p_autoOrganizationBtn = (struct AutoFortificationButtonComponent_o *)Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.autoOrganizationBtn,
      Component_srcLineSprite,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_23;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0LL);
    if ( !transform )
      goto LABEL_23;
    UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)transform, parent, 0LL);
    transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_23;
    v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL);
    if ( !v22
      || (UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v23, 0LL),
          (transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn) == 0LL)
      || (v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL),
          *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL),
          !v26)
      || (UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v27, 0LL),
          (transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn) == 0LL)
      || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
    {
LABEL_23:
      sub_B2C434(transform, v12);
    }
    UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  }
  v30 = this->fields.autoOrganizationBtn;
  eventId = this->fields.eventId;
  v32 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, 0LL);
  if ( !v30 )
    goto LABEL_23;
  AutoFortificationButtonComponent__Init(v30, eventId, v32, 0LL);
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
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  __int64 v14; // x1
  UnityEngine_Component_o *v15; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  UnityEngine_Object_o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_Object_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  UnityEngine_Object_o *v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_Object_o *v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x21
  UnityEngine_Object_o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x21
  EventFortificationManager___c_c *v69; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_0; // x22
  Il2CppObject *v72; // x23
  struct EventFortificationManager___c_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v80; // x21
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  BattleServantConfConponent_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v88; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v90; // x0
  struct EventFortificationManager___c_StaticFields *v91; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_1; // x21
  Il2CppObject *v93; // x22
  struct EventFortificationManager___c_StaticFields *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v101; // x20
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7

  if ( (byte_41890B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B2C35C(&System_Action_EventFortificationWorkManager__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_EventFortificationManager___c__DestroyList_b__36_0__, v8);
    sub_B2C35C(&Method_EventFortificationManager___c__DestroyList_b__36_1__, v9);
    sub_B2C35C(&EventFortificationManager___c_TypeInfo, v10);
    byte_41890B2 = 1;
  }
  assetManager = this->fields.assetManager;
  if ( assetManager )
    FortificationAssetManager__Release(assetManager, this->fields.eventId, 0LL);
  p_fortificationCamera = &this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fortificationCamera, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_80;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_fortificationCamera = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.fortificationCamera, 0LL, v17, v18, v19, v20, v21, v22);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(organizationPanel, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)*p_organizationPanel;
    if ( !*p_organizationPanel )
      goto LABEL_80;
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v25, 0LL);
    *p_organizationPanel = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.organizationPanel, 0LL, v26, v27, v28, v29, v30, v31);
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fortificationConfirmDialog, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_80;
    v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v34, 0LL);
    *p_fortificationConfirmDialog = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
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
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fortificationAutomaticDialog, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)*p_fortificationAutomaticDialog;
    if ( !*p_fortificationAutomaticDialog )
      goto LABEL_80;
    v43 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v43, 0LL);
    *p_fortificationAutomaticDialog = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.fortificationAutomaticDialog,
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
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventFortificationListViewManager, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)*p_eventFortificationListViewManager;
    if ( !*p_eventFortificationListViewManager )
      goto LABEL_80;
    v52 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v52, 0LL);
    *p_eventFortificationListViewManager = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.eventFortificationListViewManager,
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
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(autoOrganizationBtn, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)*p_autoOrganizationBtn;
    if ( *p_autoOrganizationBtn )
    {
      v61 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v61, 0LL);
      *p_autoOrganizationBtn = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.autoOrganizationBtn, 0LL, v62, v63, v64, v65, v66, v67);
      goto LABEL_59;
    }
LABEL_80:
    sub_B2C434(v15, v14);
  }
LABEL_59:
  eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
  if ( eventFortificationWorkManagers )
  {
    v69 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v69 = EventFortificationManager___c_TypeInfo;
    }
    static_fields = v69->static_fields;
    _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v69);
        static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v72 = (Il2CppObject *)static_fields->__9;
      _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__36_0,
        v72,
        Method_EventFortificationManager___c__DestroyList_b__36_0__,
        (const MethodInfo_24BBAD8 *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v73 = EventFortificationManager___c_TypeInfo->static_fields;
      v73->__9__36_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v73->__9__36_0,
        (System_Int32_array **)_9__36_0,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
      (System_Action_T__o *)_9__36_0,
      (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v80 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v80,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v80;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkManagers,
      (System_Int32_array **)v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkMiniManagers;
  v88 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers )
  {
    v90 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v90 = EventFortificationManager___c_TypeInfo;
    }
    v91 = v90->static_fields;
    _9__36_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v91->__9__36_1;
    if ( !_9__36_1 )
    {
      if ( (BYTE3(v90->vtable._0_Equals.methodPtr) & 4) != 0 && !v90->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v90);
        v91 = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v93 = (Il2CppObject *)v91->__9;
      _9__36_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__36_1,
        v93,
        Method_EventFortificationManager___c__DestroyList_b__36_1__,
        (const MethodInfo_24BBAD8 *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v94 = EventFortificationManager___c_TypeInfo->static_fields;
      v94->__9__36_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v94->__9__36_1,
        (System_Int32_array **)_9__36_1,
        v95,
        v96,
        v97,
        v98,
        v99,
        v100);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      v88,
      (System_Action_T__o *)_9__36_1,
      (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v101 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v101,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    p_eventFortificationWorkMiniManagers->klass = (BattleServantConfConponent_c *)v101;
    sub_B2C2F8(p_eventFortificationWorkMiniManagers, (System_Int32_array **)v101, v102, v103, v104, v105, v106, v107);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1
  BattleServantConfConponent_o *p_assetManager; // x19
  FortificationAssetManager_o *klass; // x21
  struct FortificationAssetManager_o *assetManager; // t1
  FortificationAssetManager_o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int32_t v47; // w19
  System_Action_o *v48; // x22

  if ( (byte_41890AB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&FortificationAssetManager_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v11);
    sub_B2C35C(&Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__, v12);
    sub_B2C35C(&EventFortificationManager___c__DisplayClass28_0_TypeInfo, v13);
    byte_41890AB = 1;
  }
  v14 = sub_B2C42C(EventFortificationManager___c__DisplayClass28_0_TypeInfo);
  EventFortificationManager___c__DisplayClass28_0___ctor((EventFortificationManager___c__DisplayClass28_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_DWORD *)(v14 + 16) = eventId;
  *(_QWORD *)(v14 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 40) = uiParent;
  *(_DWORD *)(v14 + 32) = slotIndex;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 40), (System_Int32_array **)uiParent, v23, v24, v25, v26, v27, v28);
  this->fields.eventId = *(_DWORD *)(v14 + 16);
  this->fields.slotIndex = *(_DWORD *)(v14 + 32);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v29;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkManagers,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  EventFortificationManager__InitFortificationWorkMini(this, v36);
  assetManager = this->fields.assetManager;
  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  klass = assetManager;
  if ( !assetManager )
  {
    v40 = (FortificationAssetManager_o *)sub_B2C42C(FortificationAssetManager_TypeInfo);
    FortificationAssetManager___ctor(v40, 0LL);
    p_assetManager->klass = (BattleServantConfConponent_c *)v40;
    sub_B2C2F8(p_assetManager, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    klass = (FortificationAssetManager_o *)p_assetManager->klass;
  }
  v47 = *(_DWORD *)(v14 + 16);
  v48 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v14,
    Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__,
    0LL);
  if ( !klass )
LABEL_8:
    sub_B2C434(v15, v16);
  FortificationAssetManager__GetAssets(klass, v47, v48, 0LL);
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
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationConfirmDialog_k__BackingField; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x2
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  struct FortificationAssetManager_o *v23; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationAutomaticDialog_k__BackingField; // x21
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *v32; // x0
  const MethodInfo *v33; // x2

  if ( (byte_41890A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_41890A8 = 1;
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
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
    v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       fortificationConfirmDialog_k__BackingField,
                                       (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_28;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v8,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    *p_fortificationConfirmDialog = (struct FortificationConfirmDialogComponent_o *)Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
      Component_srcLineSprite,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v8 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v20);
  }
  v8 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
  if ( !*p_fortificationConfirmDialog )
    goto LABEL_28;
  FortificationConfirmDialogComponent__Init((FortificationConfirmDialogComponent_o *)v8, this->fields.eventId, 0LL);
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationAutomaticDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v23 = this->fields.assetManager;
    if ( v23 )
    {
      fortificationAutomaticDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v23->fields._fortificationAutomaticDialog_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         fortificationAutomaticDialog_k__BackingField,
                                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        v25 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v8,
                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
        *p_fortificationAutomaticDialog = (struct FortificationAutomaticDialogComponent_o *)v25;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.fortificationAutomaticDialog,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        v8 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
        if ( *p_fortificationAutomaticDialog )
        {
          v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v32, v33);
          goto LABEL_26;
        }
      }
    }
LABEL_28:
    sub_B2C434(v8, v9);
  }
LABEL_26:
  v8 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
  if ( !*p_fortificationAutomaticDialog )
    goto LABEL_28;
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
  __int64 v9; // x1
  BattleServantConfConponent_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v11; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v13; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__25_0; // x21
  Il2CppObject *v16; // x22
  struct EventFortificationManager___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_41890AA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B2C35C(&System_Action_EventFortificationWorkManager__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationWorkManager__get_Count__, v6);
    sub_B2C35C(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v7);
    sub_B2C35C(&Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__, v8);
    sub_B2C35C(&EventFortificationManager___c_TypeInfo, v9);
    byte_41890AA = 1;
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkMiniManagers;
  v11 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers && v11->fields._size >= 1 )
  {
    v13 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v13 = EventFortificationManager___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__25_0,
        v16,
        Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__,
        (const MethodInfo_24BBAD8 *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v17 = EventFortificationManager___c_TypeInfo->static_fields;
      v17->__9__25_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__25_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v17->__9__25_0,
        (System_Int32_array **)_9__25_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      v11,
      (System_Action_T__o *)_9__25_0,
      (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  p_eventFortificationWorkMiniManagers->klass = (BattleServantConfConponent_c *)v24;
  sub_B2C2F8(p_eventFortificationWorkMiniManagers, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
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
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationListViewPanel_k__BackingField; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v19; // x2

  if ( (byte_41890A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_41890A9 = 1;
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(eventFortificationListViewManager, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
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
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       eventFortificationListViewPanel_k__BackingField,
                                       (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v7
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v7,
                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___),
          *p_eventFortificationListViewManager = (struct EventFortificationListViewManager_o *)Component_srcLineSprite,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.eventFortificationListViewManager,
            Component_srcLineSprite,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17),
          (v7 = (UnityEngine_GameObject_o *)*p_eventFortificationListViewManager) == 0LL) )
    {
LABEL_15:
      sub_B2C434(v7, v8);
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
    sub_B2C434(organizationPanel, method);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)organizationPanel, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationManager__LocateObjectToFotificationPanel(
        EventFortificationManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v6; // x20
  int v7; // s0

  if ( !obj )
    goto LABEL_7;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  this = (EventFortificationManager_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !this
    || (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL),
        !transform)
    || (UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0LL),
        v6 = UnityEngine_GameObject__get_transform(obj, 0LL),
        *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_one(0LL),
        !v6)
    || (UnityEngine_Transform__set_localScale(v6, *(UnityEngine_Vector3_o *)&v7, 0LL),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_7:
    sub_B2C434(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationManager__LocateObjectToUIRoot(
        EventFortificationManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  EventFortificationManager_o *v4; // x20
  UnityEngine_Transform_o *transform; // x20
  int v6; // s0

  if ( !obj
    || (v4 = this, (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL)
    || (UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.uiRoot, 0LL),
        transform = UnityEngine_GameObject__get_transform(obj, 0LL),
        *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_one(0LL),
        !transform)
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v6, 0LL),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
    sub_B2C434(this, obj);
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
  __int64 v8; // x1
  __int64 v9; // x1
  void *organizationPanel; // x0
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x20
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__34_0; // x21
  Il2CppObject *v14; // x22
  struct EventFortificationManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_41890B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B2C35C(&System_Action_EventFortificationWorkManager__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, v7);
    sub_B2C35C(&EventFortificationManager___c_TypeInfo, v8);
    byte_41890B1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_21;
  FortificationOrganizationPanelComponent__Close((FortificationOrganizationPanelComponent_o *)organizationPanel, 0LL);
  organizationPanel = this->fields.autoOrganizationBtn;
  if ( !organizationPanel )
    goto LABEL_21;
  organizationPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)organizationPanel, 0LL);
  if ( !organizationPanel )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)organizationPanel, 0, 0LL);
  eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
  organizationPanel = EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    organizationPanel = EventFortificationManager___c_TypeInfo;
  }
  static_fields = (struct EventFortificationManager___c_StaticFields *)*((_QWORD *)organizationPanel + 23);
  _9__34_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( (*((_BYTE *)organizationPanel + 307) & 4) != 0 && !*((_DWORD *)organizationPanel + 56) )
    {
      j_il2cpp_runtime_class_init_0(organizationPanel);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__34_0,
      v14,
      Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v15 = EventFortificationManager___c_TypeInfo->static_fields;
    v15->__9__34_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__34_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v15->__9__34_0,
      (System_Int32_array **)_9__34_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !eventFortificationWorkManagers
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
          (System_Action_T__o *)_9__34_0,
          (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__),
        (organizationPanel = this->fields.eventFortificationWorkManagers) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)organizationPanel,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__),
        (organizationPanel = this->fields.eventFortificationListViewManager) == 0LL) )
  {
LABEL_21:
    sub_B2C434(organizationPanel, v9);
  }
  ListViewManager__ClearScrollBarValue((ListViewManager_o *)organizationPanel, 1, 0LL);
}


void __fastcall EventFortificationManager__OnClickOrganizationBtn(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FortificationAssetManager_o *assetManager; // x0
  const MethodInfo *v5; // x1

  if ( (byte_41890B0 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41890B0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  assetManager = this->fields.assetManager;
  if ( !assetManager
    || (assetManager = (FortificationAssetManager_o *)FortificationAssetManager__GetOrganizationBgTex(
                                                        assetManager,
                                                        this->fields.eventId,
                                                        this->fields.slotIndex,
                                                        0,
                                                        0LL),
        !this->fields.organizationPanel)
    || (FortificationOrganizationPanelComponent__Open(
          this->fields.organizationPanel,
          this->fields.eventId,
          (UnityEngine_Texture2D_o *)assetManager,
          this->fields.mainPanel,
          this->fields.eventRoot,
          this->fields.fortificationCamera,
          this->fields.mainCamera,
          0LL),
        (assetManager = (FortificationAssetManager_o *)this->fields.autoOrganizationBtn) == 0LL)
    || (assetManager = (FortificationAssetManager_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)assetManager,
                                                        0LL)) == 0LL )
  {
    sub_B2C434(assetManager, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assetManager, 1, 0LL);
  EventFortificationManager__SetFortificationWork(this, v5);
}


void __fastcall EventFortificationManager__ResetRewardSceneObj(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainPanel; // x0

  mainPanel = this->fields.mainPanel;
  if ( !mainPanel || (UnityEngine_GameObject__SetActive(mainPanel, 1, 0LL), (mainPanel = this->fields.eventRoot) == 0LL) )
    sub_B2C434(mainPanel, method);
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v26; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21

  if ( (byte_41890AE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, item);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__, v7);
    sub_B2C35C(&EventFortificationManager___c__DisplayClass31_0_TypeInfo, v8);
    byte_41890AE = 1;
  }
  v9 = sub_B2C42C(EventFortificationManager___c__DisplayClass31_0_TypeInfo);
  EventFortificationManager___c__DisplayClass31_0___ctor((EventFortificationManager___c__DisplayClass31_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = item;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)item, v18, v19, v20, v21, v22, v23);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_10;
  organizationPanel->fields.isTouchEnabled = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v26 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
  v28 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B2C434(v10, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v28, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationWorkObj_k__BackingField; // x21
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  int32_t eventId; // w23
  EventFortificationWorkManager_o *v30; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v31; // x24
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x6
  __int64 v35; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_Component_o *organizationPanel; // x0
  UnityEngine_GameObject_o *v38; // x0
  __int64 v39; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v41; // x0
  __int64 v42; // x1
  UnityEngine_Transform_o *v43; // x23
  __int64 v44; // x0
  __int64 v45; // x1
  int v46; // s0
  UnityEngine_GameObject_o *v49; // x0
  __int64 v50; // x1
  UnityEngine_Transform_o *v51; // x0
  __int64 v52; // x1
  UnityEngine_GameObject_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x1
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x0
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41890AC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventFortificationWorkItem___ctor__, method);
    sub_B2C35C(&System_Action_EventFortificationWorkItem__TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFortificationMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v7);
    sub_B2C35C(&Method_EventFortificationManager_SelectFortificationServant__, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v11);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_UIAtlas___, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&StringLiteral_13600/*"Terminal/Atlas/TerminalAtlas"*/, v16);
    byte_41890AC = 1;
  }
  entities = 0LL;
  memset(&v58, 0, sizeof(v58));
  UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
              (System_String_o *)StringLiteral_13600/*"Terminal/Atlas/TerminalAtlas"*/,
              (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_UIAtlas___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !EventFortificationMaster__TryGetEntityList(
          (EventFortificationMaster_o *)Instance,
          &entities,
          this->fields.eventId,
          v20) )
    return;
  Instance = (DataManager_o *)entities;
  if ( !entities )
LABEL_39:
    sub_B2C434(Instance, v19);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v57,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v58 = v57;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v58,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v21 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_B2C434(v21, v22);
    current = (EventFortificationEntity_o *)v58.fields.current;
    eventFortificationWorkObj_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._eventFortificationWorkObj_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v26 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        eventFortificationWorkObj_k__BackingField,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v26 )
      sub_B2C434(0LL, v27);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v26,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v30 = (EventFortificationWorkManager_o *)Component_srcLineSprite;
    v31 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v31,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_EventFortificationWorkItem___ctor__);
    if ( !v30 )
      sub_B2C434(v32, v33);
    EventFortificationWorkManager__SetServantFortificationWork(
      v30,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v31,
      this->fields.organizationPanel,
      UIAtlas,
      v34);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
    organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
    if ( !organizationPanel )
      sub_B2C434(0LL, v35);
    v38 = UnityEngine_Component__get_gameObject(organizationPanel, 0LL);
    if ( !v38 )
      sub_B2C434(0LL, v39);
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v38, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
    if ( !v41 )
      sub_B2C434(0LL, v42);
    v43 = UnityEngine_GameObject__get_transform(v41, 0LL);
    *(UnityEngine_Vector3_o *)&v46 = UnityEngine_Vector3__get_one(0LL);
    if ( !v43 )
      sub_B2C434(v44, v45);
    UnityEngine_Transform__set_localScale(v43, *(UnityEngine_Vector3_o *)&v46, 0LL);
    v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
    if ( !v49 )
      sub_B2C434(0LL, v50);
    v51 = UnityEngine_GameObject__get_transform(v49, 0LL);
    if ( !current )
      sub_B2C434(v51, v52);
    if ( !v51 )
      sub_B2C434(0LL, v52);
    v60.fields.y = (float)current->fields.y;
    v60.fields.x = (float)current->fields.x;
    v60.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v51, v60, 0LL);
    v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
    if ( !v53 )
      sub_B2C434(0LL, v54);
    UnityEngine_GameObject__SetActive(v53, 1, 0LL);
    eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
    if ( !eventFortificationWorkManagers )
      sub_B2C434(0LL, v55);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventFortificationWorkManagers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v58,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  _BOOL8 v18; // x0
  __int64 v19; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationWorkMiniObj_k__BackingField; // x20
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  EventFortificationWorkManager_o *Component_srcLineSprite; // x20
  int32_t eventId; // w22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v27; // x23
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x6
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v32; // x2
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v36; // x1
  UnityEngine_GameObject_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x1
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // x0
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41890AD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventFortificationWorkItem___ctor__, method);
    sub_B2C35C(&System_Action_EventFortificationWorkItem__TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFortificationMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v7);
    sub_B2C35C(&Method_EventFortificationManager_SelectFortificationServant__, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v11);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_41890AD = 1;
  }
  entities = 0LL;
  memset(&v42, 0, sizeof(v42));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_31;
  if ( !EventFortificationMaster__TryGetEntityList(
          (EventFortificationMaster_o *)Instance,
          &entities,
          this->fields.eventId,
          v17) )
    return;
  Instance = (DataManager_o *)entities;
  if ( !entities )
LABEL_31:
    sub_B2C434(Instance, v16);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v18 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_B2C434(v18, v19);
    current = (EventFortificationEntity_o *)v42.fields.current;
    eventFortificationWorkMiniObj_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._eventFortificationWorkMiniObj_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        eventFortificationWorkMiniObj_k__BackingField,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v23 )
      sub_B2C434(0LL, v24);
    Component_srcLineSprite = (EventFortificationWorkManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v23,
                                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v27 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v27,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_EventFortificationWorkItem___ctor__);
    if ( !Component_srcLineSprite )
      sub_B2C434(v28, v29);
    EventFortificationWorkManager__SetServantFortificationWork(
      Component_srcLineSprite,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v27,
      0LL,
      0LL,
      v30);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    EventFortificationManager__LocateObjectToFotificationPanel(this, gameObject, v32);
    v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    if ( !v33 )
      sub_B2C434(0LL, v34);
    transform = UnityEngine_GameObject__get_transform(v33, 0LL);
    if ( !current )
      sub_B2C434(transform, v36);
    if ( !transform )
      sub_B2C434(0LL, v36);
    v44.fields.y = (float)current->fields.rewardSceneY;
    v44.fields.x = (float)current->fields.rewardSceneX;
    v44.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v44, 0LL);
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    if ( !v37 )
      sub_B2C434(0LL, v38);
    UnityEngine_GameObject__SetActive(v37, 1, 0LL);
    eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
    if ( !eventFortificationWorkMiniManagers )
      sub_B2C434(0LL, v39);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventFortificationWorkMiniManagers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationCamera_k__BackingField; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x2
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  struct FortificationAssetManager_o *v23; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *organizationPanel_k__BackingField; // x21
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *v32; // x1
  const MethodInfo *v33; // x2

  if ( (byte_41890A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MapCamera___, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_41890A6 = 1;
  }
  p_fortificationCamera = &this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationCamera, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
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
    v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       fortificationCamera_k__BackingField,
                                       (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_26;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v8,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    *p_fortificationCamera = (struct MapCamera_o *)Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.fortificationCamera,
      Component_srcLineSprite,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v8 = (UnityEngine_GameObject_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v20);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(organizationPanel, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v23 = this->fields.assetManager;
    if ( v23 )
    {
      organizationPanel_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v23->fields._organizationPanel_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         organizationPanel_k__BackingField,
                                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        v25 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v8,
                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
        *p_organizationPanel = (struct FortificationOrganizationPanelComponent_o *)v25;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.organizationPanel, v25, v26, v27, v28, v29, v30, v31);
        v8 = (UnityEngine_GameObject_o *)*p_organizationPanel;
        if ( *p_organizationPanel )
        {
          v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v32, v33);
          return;
        }
      }
    }
LABEL_26:
    sub_B2C434(v8, v9);
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
  int64_t Instance; // x0
  __int64 v10; // x1
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x22
  struct SetSvtInfo_array *setSvtInfos; // x8
  int max_length; // w9
  int v14; // w11
  bool v15; // w10
  SetSvtInfo_o *v16; // x12
  __int64 v18; // x0
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41890B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, *(_QWORD *)&fortificationIdx);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_41890B3 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_20;
  Instance = UserEventFortificationMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               this->fields.eventId,
               fortificationIdx,
               0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !entity || (setSvtInfos = entity->fields.setSvtInfos) == 0LL )
LABEL_20:
    sub_B2C434(Instance, v10);
  max_length = setSvtInfos->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = 0;
  v15 = 0;
  do
  {
    if ( v14 >= (unsigned int)max_length )
    {
      v18 = sub_B2C460(Instance);
      sub_B2C400(v18, 0LL);
    }
    v16 = setSvtInfos->m_Items[v14];
    if ( !v16 )
      goto LABEL_20;
    ++v14;
    if ( v16->fields.position == position )
      v15 = 1;
  }
  while ( v14 < max_length );
  return v15;
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_0(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  FortificationAutomaticDialogComponent_o *fortificationAutomaticDialog; // x0
  __int64 v7; // x1
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  FortificationAutomaticDialogComponent_o *v9; // x20
  System_Action_o *v10; // x21
  System_Action_o *v11; // x22

  if ( (byte_41890B4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventFortificationManager__CreateOrganizationUI_b__22_1__, v3);
    sub_B2C35C(&Method_EventFortificationManager__CreateOrganizationUI_b__22_2__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_41890B4 = 1;
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
        v9 = this->fields.fortificationAutomaticDialog,
        v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_1__,
          0LL),
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_2__,
          0LL),
        !v9) )
  {
LABEL_10:
    sub_B2C434(fortificationAutomaticDialog, v7);
  }
  FortificationAutomaticDialogComponent__Open(v9, v10, v11, 0LL);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_1(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x20
  EventFortificationManager___c_c *v9; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__22_3; // x21
  Il2CppObject *v12; // x22
  struct EventFortificationManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // x19
  struct EventFortificationManager___c_StaticFields *v21; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__22_4; // x20
  Il2CppObject *v23; // x21
  struct EventFortificationManager___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_41890B5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B2C35C(&System_Action_EventFortificationWorkManager__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v4);
    sub_B2C35C(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__, v5);
    sub_B2C35C(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__, v6);
    sub_B2C35C(&EventFortificationManager___c_TypeInfo, v7);
    byte_41890B5 = 1;
  }
  eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
  v9 = EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v9 = EventFortificationManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__22_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__22_3;
  if ( !_9__22_3 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__22_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__22_3,
      v12,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v13 = EventFortificationManager___c_TypeInfo->static_fields;
    v13->__9__22_3 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_3;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__22_3,
      (System_Int32_array **)_9__22_3,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_22;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
    (System_Action_T__o *)_9__22_3,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v9 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v9 = EventFortificationManager___c_TypeInfo;
  }
  v21 = v9->static_fields;
  _9__22_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v21->__9__22_4;
  if ( !_9__22_4 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v21 = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__22_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__22_4,
      v23,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v24 = EventFortificationManager___c_TypeInfo->static_fields;
    v24->__9__22_4 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_4;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v24->__9__22_4,
      (System_Int32_array **)_9__22_4,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !eventFortificationWorkMiniManagers )
LABEL_22:
    sub_B2C434(v9, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__22_4,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_2(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8

  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    sub_B2C434(this, method);
  organizationPanel->fields.isTouchEnabled = 1;
}


void __fastcall EventFortificationManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventFortificationManager___c_StaticFields *static_fields; // x0

  if ( (byte_4184ADB & 1) == 0 )
  {
    sub_B2C35C(&EventFortificationManager___c_TypeInfo, v1);
    byte_4184ADB = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventFortificationManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventFortificationManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventFortificationManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CloseServantFortificationList_b__32_2(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B2C434(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_3(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B2C434(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_4(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B2C434(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4184ADF & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, data);
    byte_4184ADF = 1;
  }
  if ( !data )
    sub_B2C434(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4184AE0 & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, data);
    byte_4184AE0 = 1;
  }
  if ( !data )
    sub_B2C434(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___InitFortificationWorkMini_b__25_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4184ADC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, data);
    byte_4184ADC = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v4 )
  {
    if ( !data )
      sub_B2C434(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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

  if ( (byte_4184ADE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, data);
    byte_4184ADE = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v4 )
  {
    if ( !data )
      sub_B2C434(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___SelectFortificationServant_b__31_1(
        EventFortificationManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x19

  if ( (byte_4184ADD & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4184ADD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v5 )
    sub_B2C434(Instance, v4);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  struct EventFortificationManager_o *v13; // x8
  struct EventFortificationManager_o **p__4__this; // x22
  UnityEngine_GameObject_o *v15; // x0
  struct EventFortificationManager_o *v16; // x8
  int32_t v17; // w20
  UISprite_o *organizationBtnSp; // x21
  struct EventFortificationManager_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventFortificationManager_o *v21; // x8
  int32_t eventId; // w20
  UISprite_o *maskSp; // x21
  UILabel_o *maskLb; // x20
  struct EventFortificationManager_o *v25; // x8
  struct UITexture_o *fortificationSlotBg; // x20

  if ( (byte_4184AE1 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_17054/*"btn_txt_event_organization"*/, v7);
    sub_B2C35C(&StringLiteral_6426/*"FORTIFICATION_EVENT_END_MSG"*/, v8);
    sub_B2C35C(&StringLiteral_16970/*"btn_bg_event_organization"*/, v9);
    sub_B2C35C(&StringLiteral_18602/*"event_tab_bg_mask"*/, v10);
    byte_4184AE1 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    this->fields.eventId,
                                                                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)EventEntity__IsEventPeriod(
                                                                                          (EventEntity_o *)Master_WarQuestSelectionMaster,
                                                                                          0LL,
                                                                                          0LL),
        ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0) )
  {
    p__4__this = &this->fields.__4__this;
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)_4__this->fields.organizationBtnSp;
      if ( Master_WarQuestSelectionMaster )
      {
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                       0LL);
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)GameObjectExtensions__GetParent(
                                                                                          gameObject,
                                                                                          0LL);
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                            0LL);
          if ( Master_WarQuestSelectionMaster )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
            if ( *p__4__this )
            {
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*p__4__this)->fields.maskSp;
              if ( Master_WarQuestSelectionMaster )
              {
                Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                                  (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                                  0LL);
                if ( Master_WarQuestSelectionMaster )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
                  v21 = this->fields.__4__this;
                  if ( v21 )
                  {
                    eventId = this->fields.eventId;
                    maskSp = v21->fields.maskSp;
                    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)AtlasManager__SetEventUI_28451336(eventId, maskSp, (System_String_o *)StringLiteral_18602/*"event_tab_bg_mask"*/, 0LL);
                    if ( *p__4__this )
                    {
                      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*p__4__this)->fields.maskLb;
                      if ( Master_WarQuestSelectionMaster )
                      {
                        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
                        if ( Master_WarQuestSelectionMaster )
                        {
                          UnityEngine_GameObject__SetActive(
                            (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                            1,
                            0LL);
                          if ( *p__4__this )
                          {
                            maskLb = (*p__4__this)->fields.maskLb;
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get((System_String_o *)StringLiteral_6426/*"FORTIFICATION_EVENT_END_MSG"*/, 0LL);
                            if ( maskLb )
                            {
                              UILabel__set_text(maskLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
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
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  }
  p__4__this = &this->fields.__4__this;
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v13->fields.maskSp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                    0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  if ( !*p__4__this )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*p__4__this)->fields.maskLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                    0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  if ( !*p__4__this )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*p__4__this)->fields.organizationBtnSp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)GameObjectExtensions__GetParent(
                                                                                    v15,
                                                                                    0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                    0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_54;
  v17 = this->fields.eventId;
  organizationBtnSp = v16->fields.organizationBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)AtlasManager__SetEventUI_28451336(
                                                                                    v17,
                                                                                    organizationBtnSp,
                                                                                    (System_String_o *)StringLiteral_16970/*"btn_bg_event_organization"*/,
                                                                                    0LL);
  if ( !*p__4__this )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)AtlasManager__SetEventUI_28451336(
                                                                                    this->fields.eventId,
                                                                                    (*p__4__this)->fields.organizationBtnTxtSp,
                                                                                    (System_String_o *)StringLiteral_17054/*"btn_txt_event_organization"*/,
                                                                                    0LL);
LABEL_45:
  v25 = *p__4__this;
  if ( !*p__4__this )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v25->fields.assetManager;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  fortificationSlotBg = v25->fields.fortificationSlotBg;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)FortificationAssetManager__GetOrganizationBgTex(
                                                                                    (FortificationAssetManager_o *)Master_WarQuestSelectionMaster,
                                                                                    this->fields.eventId,
                                                                                    this->fields.slotIndex,
                                                                                    1,
                                                                                    0LL);
  if ( !fortificationSlotBg )
    goto LABEL_54;
  ((void (__fastcall *)(struct UITexture_o *, DataMasterBase_WarMaster__WarEntity__int__o *, Il2CppMethodPointer))fortificationSlotBg->klass->vtable._27_set_mainTexture.method)(
    fortificationSlotBg,
    Master_WarQuestSelectionMaster,
    fortificationSlotBg->klass->vtable._28_get_shader.methodPtr);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)*p__4__this;
  if ( !*p__4__this )
    goto LABEL_54;
  EventFortificationManager__SetFotificationOrganizationPanel(
    (EventFortificationManager_o *)Master_WarQuestSelectionMaster,
    0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)*p__4__this;
  if ( !*p__4__this )
    goto LABEL_54;
  EventFortificationManager__InitDialog((EventFortificationManager_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)*p__4__this;
  if ( !*p__4__this )
    goto LABEL_54;
  EventFortificationManager__InitListViewPanel((EventFortificationManager_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)*p__4__this;
  if ( !*p__4__this )
    goto LABEL_54;
  EventFortificationManager__SetFortificationWorkMini(
    (EventFortificationManager_o *)Master_WarQuestSelectionMaster,
    0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)*p__4__this;
  if ( !*p__4__this )
    goto LABEL_54;
  EventFortificationManager__CreateOrganizationUI(
    (EventFortificationManager_o *)Master_WarQuestSelectionMaster,
    this->fields.uiParent,
    0LL);
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
  __int64 v7; // x1
  struct EventFortificationManager_o *_4__this; // x8
  struct EventFortificationManager_o *v9; // x24
  EventFortificationListViewManager_o *eventFortificationListViewManager; // x20
  int32_t eventId; // w21
  FortificationConfirmDialogComponent_o *fortificationConfirmDialog; // x22
  EventFortificationWorkItem_o *item; // x23
  System_Action_bool__UserServantEntity__o *v14; // x25
  struct EventFortificationManager_o *v15; // x8
  EventFortificationListViewManager_o *v16; // x19
  void *static_fields; // x8
  System_Action_o *v18; // x20
  Il2CppObject *v19; // x21
  struct EventFortificationManager___c_StaticFields *v20; // x0

  v2 = this;
  if ( (byte_4184AE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__UserServantEntity___ctor__, method);
    sub_B2C35C(&System_Action_bool__UserServantEntity__TypeInfo, v3);
    sub_B2C35C(&System_Action_TypeInfo, v4);
    sub_B2C35C(&Method_EventFortificationManager_CloseServantFortificationList__, v5);
    sub_B2C35C(&Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, v6);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_B2C35C(&EventFortificationManager___c_TypeInfo, v7);
    byte_4184AE2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  this = (EventFortificationManager___c__DisplayClass31_0_o *)_4__this->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_19;
  this = (EventFortificationManager___c__DisplayClass31_0_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_19;
  eventFortificationListViewManager = v9->fields.eventFortificationListViewManager;
  eventId = v9->fields.eventId;
  fortificationConfirmDialog = v9->fields.fortificationConfirmDialog;
  item = v2->fields.item;
  v14 = (System_Action_bool__UserServantEntity__o *)sub_B2C42C(System_Action_bool__UserServantEntity__TypeInfo);
  System_Action_bool__UserServantEntity____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_EventFortificationManager_CloseServantFortificationList__,
    (const MethodInfo_24C7E70 *)Method_System_Action_bool__UserServantEntity___ctor__);
  if ( !eventFortificationListViewManager )
    goto LABEL_19;
  EventFortificationListViewManager__CreateList(
    eventFortificationListViewManager,
    eventId,
    fortificationConfirmDialog,
    item,
    v14,
    0LL);
  v15 = v2->fields.__4__this;
  if ( !v15 )
    goto LABEL_19;
  v16 = v15->fields.eventFortificationListViewManager;
  this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
  }
  static_fields = this[5].fields.item;
  v18 = (System_Action_o *)*((_QWORD *)static_fields + 4);
  if ( !v18 )
  {
    if ( (BYTE3(this[9].fields.__4__this) & 4) != 0 && !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v19 = *(Il2CppObject **)static_fields;
    v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v18, v19, Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, 0LL);
    v20 = EventFortificationManager___c_TypeInfo->static_fields;
    v20->__9__31_1 = v18;
    sub_B2C2F8(&v20->__9__31_1, v18);
  }
  if ( !v16 )
LABEL_19:
    sub_B2C434(this, method);
  EventFortificationListViewManager__SetMode_27547056(v16, 2, v18, 0LL);
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
  EventFortificationManager___c__DisplayClass32_0_o *v2; // x19
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
  struct EventFortificationManager_o *v15; // x8
  struct EventFortificationManager_o *v16; // x8
  struct EventFortificationManager_o *v17; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *eventFortificationWorkManagers; // x20
  void *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v20; // x21
  Il2CppObject *v21; // x22
  struct EventFortificationManager___c_StaticFields *v22; // x0
  struct EventFortificationManager_o *v23; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *eventFortificationWorkMiniManagers; // x19
  void *v25; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v26; // x20
  Il2CppObject *v27; // x21
  struct EventFortificationManager___c_StaticFields *v28; // x0
  CommonUI_o *v29; // x19

  v2 = this;
  if ( (byte_4184AE3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B2C35C(&System_Action_EventFortificationWorkManager__TypeInfo, v3);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__, v7);
    sub_B2C35C(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__, v8);
    sub_B2C35C(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v9);
    sub_B2C35C(&EventFortificationManager___c_TypeInfo, v10);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_B2C35C(&StringLiteral_16439/*"ar200"*/, v11);
    byte_4184AE3 = 1;
  }
  if ( v2->fields.servantData )
  {
    v12 = Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__;
    if ( (*((_BYTE *)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__ + 75) & 2) != 0 )
      v12 = (_QWORD *)sub_B2C364(Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    v13 = (System_Reflection_MethodBase_o *)sub_B2C340(v12, v12[3]);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                  v13,
                                                                  (System_String_o *)StringLiteral_16439/*"ar200"*/,
                                                                  0LL);
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)_4__this->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_39;
  EventFortificationListViewManager__InitBackListView((EventFortificationListViewManager_o *)this, 0LL);
  v15 = v2->fields.__4__this;
  if ( !v15 )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v15->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_39;
  EventFortificationListViewManager__DestroyList((EventFortificationListViewManager_o *)this, 0LL);
  v16 = v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v16->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
  if ( !this )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_39;
  eventFortificationWorkManagers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v17->fields.eventFortificationWorkManagers;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  }
  static_fields = this[5].fields.__4__this;
  v20 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)static_fields + 5);
  if ( !v20 )
  {
    if ( (BYTE3(this[9].fields.servantData) & 4) != 0 && !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v21 = *(Il2CppObject **)static_fields;
    v20 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v20,
      v21,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v22 = EventFortificationManager___c_TypeInfo->static_fields;
    v22->__9__32_1 = (struct System_Action_EventFortificationWorkManager__o *)v20;
    sub_B2C2F8(&v22->__9__32_1, v20);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_39;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)v20,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v23 = v2->fields.__4__this;
  if ( !v23 )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v23->fields.eventFortificationWorkMiniManagers;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  }
  v25 = this[5].fields.__4__this;
  v26 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)v25 + 6);
  if ( !v26 )
  {
    if ( (BYTE3(this[9].fields.servantData) & 4) != 0 && !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      v25 = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v27 = *(Il2CppObject **)v25;
    v26 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v26,
      v27,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v28 = EventFortificationManager___c_TypeInfo->static_fields;
    v28->__9__32_2 = (struct System_Action_EventFortificationWorkManager__o *)v26;
    sub_B2C2F8(&v28->__9__32_2, v26);
  }
  if ( !eventFortificationWorkMiniManagers )
    goto LABEL_39;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)v26,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  this = (EventFortificationManager___c__DisplayClass32_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = (CommonUI_o *)this;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v29 )
LABEL_39:
    sub_B2C434(this, method);
  CommonUI__maskFadein(v29, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}