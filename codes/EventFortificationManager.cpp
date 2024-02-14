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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v28; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x21

  if ( (byte_421619F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, requestFinish);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v8);
    sub_B0D8A4(&EventFortificationManager___c__DisplayClass32_0_TypeInfo, v9);
    byte_421619F = 1;
  }
  v10 = sub_B0D974(EventFortificationManager___c__DisplayClass32_0_TypeInfo, requestFinish, servantData);
  EventFortificationManager___c__DisplayClass32_0___ctor((EventFortificationManager___c__DisplayClass32_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = servantData;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v10 + 16),
    (System_Int32_array **)servantData,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v10 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_10;
  organizationPanel->fields.isTouchEnabled = 1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v28 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
  v30 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v10,
    (intptr_t)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B0D97C(v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v30, 0LL);
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
  __int64 v13; // x2
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *autoFortificationButton_k__BackingField; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Transform_o *v23; // x21
  int v24; // s0
  UnityEngine_Transform_o *v27; // x21
  int v28; // s0
  AutoFortificationButtonComponent_o *v31; // x20
  int32_t eventId; // w21
  System_Action_o *v33; // x22

  if ( (byte_4216197 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, parent);
    sub_B0D8A4(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___, v6);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4216197 = 1;
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
                                              (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_23;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       transform,
                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    *p_autoOrganizationBtn = (struct AutoFortificationButtonComponent_o *)Component_srcLineSprite;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.autoOrganizationBtn,
      Component_srcLineSprite,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
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
    v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL);
    if ( !v23
      || (UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&v24, 0LL),
          (transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn) == 0LL)
      || (v27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL),
          *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_zero(0LL),
          !v27)
      || (UnityEngine_Transform__set_localPosition(v27, *(UnityEngine_Vector3_o *)&v28, 0LL),
          (transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn) == 0LL)
      || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
    {
LABEL_23:
      sub_B0D97C(transform);
    }
    UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  }
  v31 = this->fields.autoOrganizationBtn;
  eventId = this->fields.eventId;
  v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, 0LL);
  if ( !v31 )
    goto LABEL_23;
  AutoFortificationButtonComponent__Init(v31, eventId, v33, 0LL);
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
  UnityEngine_Component_o *v14; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  UnityEngine_Object_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_Object_o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  UnityEngine_Object_o *v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_Object_o *v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x21
  __int64 v60; // x1
  __int64 v61; // x2
  UnityEngine_Object_o *v62; // x21
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x21
  EventFortificationManager___c_c *v70; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_0; // x22
  Il2CppObject *v73; // x23
  struct EventFortificationManager___c_StaticFields *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x1
  __int64 v82; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v83; // x21
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  BattleServantConfConponent_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v91; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v93; // x0
  struct EventFortificationManager___c_StaticFields *v94; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_1; // x21
  Il2CppObject *v96; // x22
  struct EventFortificationManager___c_StaticFields *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  __int64 v104; // x1
  __int64 v105; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v106; // x20
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7

  if ( (byte_42161A2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B0D8A4(&System_Action_EventFortificationWorkManager__TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_EventFortificationManager___c__DestroyList_b__36_0__, v8);
    sub_B0D8A4(&Method_EventFortificationManager___c__DestroyList_b__36_1__, v9);
    sub_B0D8A4(&EventFortificationManager___c_TypeInfo, v10);
    byte_42161A2 = 1;
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
    v14 = (UnityEngine_Component_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_80;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    *p_fortificationCamera = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.fortificationCamera, 0LL, v16, v17, v18, v19, v20, v21);
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
    v14 = (UnityEngine_Component_o *)*p_organizationPanel;
    if ( !*p_organizationPanel )
      goto LABEL_80;
    v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v24, 0LL);
    *p_organizationPanel = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.organizationPanel, 0LL, v25, v26, v27, v28, v29, v30);
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
    v14 = (UnityEngine_Component_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_80;
    v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v33, 0LL);
    *p_fortificationConfirmDialog = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
      0LL,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
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
    v14 = (UnityEngine_Component_o *)*p_fortificationAutomaticDialog;
    if ( !*p_fortificationAutomaticDialog )
      goto LABEL_80;
    v42 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v42, 0LL);
    *p_fortificationAutomaticDialog = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.fortificationAutomaticDialog,
      0LL,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
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
    v14 = (UnityEngine_Component_o *)*p_eventFortificationListViewManager;
    if ( !*p_eventFortificationListViewManager )
      goto LABEL_80;
    v51 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v51, 0LL);
    *p_eventFortificationListViewManager = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.eventFortificationListViewManager,
      0LL,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
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
    v14 = (UnityEngine_Component_o *)*p_autoOrganizationBtn;
    if ( *p_autoOrganizationBtn )
    {
      v62 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v62, 0LL);
      *p_autoOrganizationBtn = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.autoOrganizationBtn, 0LL, v63, v64, v65, v66, v67, v68);
      goto LABEL_59;
    }
LABEL_80:
    sub_B0D97C(v14);
  }
LABEL_59:
  eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
  if ( eventFortificationWorkManagers )
  {
    v70 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v70 = EventFortificationManager___c_TypeInfo;
    }
    static_fields = v70->static_fields;
    _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v73 = (Il2CppObject *)static_fields->__9;
      _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                        System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                        v60,
                                                                                        v61);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__36_0,
        v73,
        Method_EventFortificationManager___c__DestroyList_b__36_0__,
        (const MethodInfo_246EA3C *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v74 = EventFortificationManager___c_TypeInfo->static_fields;
      v74->__9__36_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v74->__9__36_0,
        (System_Int32_array **)_9__36_0,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
      (System_Action_T__o *)_9__36_0,
      (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v83 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                                                                    v81,
                                                                                                    v82);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v83,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v83;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkManagers,
      (System_Int32_array **)v83,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkMiniManagers;
  v91 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers )
  {
    v93 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v93 = EventFortificationManager___c_TypeInfo;
    }
    v94 = v93->static_fields;
    _9__36_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v94->__9__36_1;
    if ( !_9__36_1 )
    {
      if ( (BYTE3(v93->vtable._0_Equals.methodPtr) & 4) != 0 && !v93->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v93);
        v94 = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v96 = (Il2CppObject *)v94->__9;
      _9__36_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                        System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                        v60,
                                                                                        v61);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__36_1,
        v96,
        Method_EventFortificationManager___c__DestroyList_b__36_1__,
        (const MethodInfo_246EA3C *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v97 = EventFortificationManager___c_TypeInfo->static_fields;
      v97->__9__36_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v97->__9__36_1,
        (System_Int32_array **)_9__36_1,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      v91,
      (System_Action_T__o *)_9__36_1,
      (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v106 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                     System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                                                                     v104,
                                                                                                     v105);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v106,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    p_eventFortificationWorkMiniManagers->klass = (BattleServantConfConponent_c *)v106;
    sub_B0D840(p_eventFortificationWorkMiniManagers, (System_Int32_array **)v106, v107, v108, v109, v110, v111, v112);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x1
  __int64 v38; // x1
  __int64 v39; // x2
  BattleServantConfConponent_o *p_assetManager; // x19
  FortificationAssetManager_o *klass; // x21
  struct FortificationAssetManager_o *assetManager; // t1
  FortificationAssetManager_o *v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int32_t v50; // w19
  System_Action_o *v51; // x22

  if ( (byte_421619B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&FortificationAssetManager_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v11);
    sub_B0D8A4(&Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__, v12);
    sub_B0D8A4(&EventFortificationManager___c__DisplayClass28_0_TypeInfo, v13);
    byte_421619B = 1;
  }
  v14 = sub_B0D974(EventFortificationManager___c__DisplayClass28_0_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&slotIndex);
  EventFortificationManager___c__DisplayClass28_0___ctor((EventFortificationManager___c__DisplayClass28_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_DWORD *)(v14 + 16) = eventId;
  *(_QWORD *)(v14 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v14 + 40) = uiParent;
  *(_DWORD *)(v14 + 32) = slotIndex;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 40), (System_Int32_array **)uiParent, v22, v23, v24, v25, v26, v27);
  this->fields.eventId = *(_DWORD *)(v14 + 16);
  this->fields.slotIndex = *(_DWORD *)(v14 + 32);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v30;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkManagers,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  EventFortificationManager__InitFortificationWorkMini(this, v37);
  assetManager = this->fields.assetManager;
  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  klass = assetManager;
  if ( !assetManager )
  {
    v43 = (FortificationAssetManager_o *)sub_B0D974(FortificationAssetManager_TypeInfo, v38, v39);
    FortificationAssetManager___ctor(v43, 0LL);
    p_assetManager->klass = (BattleServantConfConponent_c *)v43;
    sub_B0D840(p_assetManager, (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
    klass = (FortificationAssetManager_o *)p_assetManager->klass;
  }
  v50 = *(_DWORD *)(v14 + 16);
  v51 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v14,
    Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__,
    0LL);
  if ( !klass )
LABEL_8:
    sub_B0D97C(v15);
  FortificationAssetManager__GetAssets(klass, v50, v51, 0LL);
}


void __fastcall EventFortificationManager__InitDialog(EventFortificationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_GameObject_o *v8; // x0
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationConfirmDialog_k__BackingField; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x2
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  struct FortificationAssetManager_o *v22; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationAutomaticDialog_k__BackingField; // x21
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *v31; // x0
  const MethodInfo *v32; // x2

  if ( (byte_4216198 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___, v3);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4216198 = 1;
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
                                       (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_28;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v8,
                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    *p_fortificationConfirmDialog = (struct FortificationConfirmDialogComponent_o *)Component_srcLineSprite;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
      Component_srcLineSprite,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    v8 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v19);
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
    v22 = this->fields.assetManager;
    if ( v22 )
    {
      fortificationAutomaticDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v22->fields._fortificationAutomaticDialog_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         fortificationAutomaticDialog_k__BackingField,
                                         (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        v24 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v8,
                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
        *p_fortificationAutomaticDialog = (struct FortificationAutomaticDialogComponent_o *)v24;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.fortificationAutomaticDialog,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        v8 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
        if ( *p_fortificationAutomaticDialog )
        {
          v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v31, v32);
          goto LABEL_26;
        }
      }
    }
LABEL_28:
    sub_B0D97C(v8);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v12; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v14; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__25_0; // x21
  Il2CppObject *v17; // x22
  struct EventFortificationManager___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_421619A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B0D8A4(&System_Action_EventFortificationWorkManager__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__get_Count__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v8);
    sub_B0D8A4(&Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__, v9);
    sub_B0D8A4(&EventFortificationManager___c_TypeInfo, v10);
    byte_421619A = 1;
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkMiniManagers;
  v12 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers && v12->fields._size >= 1 )
  {
    v14 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v14 = EventFortificationManager___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                        System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                        method,
                                                                                        v2);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__25_0,
        v17,
        Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__,
        (const MethodInfo_246EA3C *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v18 = EventFortificationManager___c_TypeInfo->static_fields;
      v18->__9__25_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__25_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v18->__9__25_0,
        (System_Int32_array **)_9__25_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      v12,
      (System_Action_T__o *)_9__25_0,
      (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  }
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  p_eventFortificationWorkMiniManagers->klass = (BattleServantConfConponent_c *)v25;
  sub_B0D840(p_eventFortificationWorkMiniManagers, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
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
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationListViewPanel_k__BackingField; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v18; // x2

  if ( (byte_4216199 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___, method);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4216199 = 1;
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
                                       (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v7
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v7,
                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___),
          *p_eventFortificationListViewManager = (struct EventFortificationListViewManager_o *)Component_srcLineSprite,
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.eventFortificationListViewManager,
            Component_srcLineSprite,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          (v7 = (UnityEngine_GameObject_o *)*p_eventFortificationListViewManager) == 0LL) )
    {
LABEL_15:
      sub_B0D97C(v7);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v18);
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
    sub_B0D97C(organizationPanel);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  void *organizationPanel; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x20
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__34_0; // x21
  Il2CppObject *v15; // x22
  struct EventFortificationManager___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42161A1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B0D8A4(&System_Action_EventFortificationWorkManager__TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, v7);
    sub_B0D8A4(&EventFortificationManager___c_TypeInfo, v8);
    byte_42161A1 = 1;
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
    v15 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                      v10,
                                                                                      v11);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__34_0,
      v15,
      Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v16 = EventFortificationManager___c_TypeInfo->static_fields;
    v16->__9__34_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__34_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v16->__9__34_0,
      (System_Int32_array **)_9__34_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !eventFortificationWorkManagers
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
          (System_Action_T__o *)_9__34_0,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__),
        (organizationPanel = this->fields.eventFortificationWorkManagers) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)organizationPanel,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__),
        (organizationPanel = this->fields.eventFortificationListViewManager) == 0LL) )
  {
LABEL_21:
    sub_B0D97C(organizationPanel);
  }
  ListViewManager__ClearScrollBarValue((ListViewManager_o *)organizationPanel, 1, 0LL);
}


void __fastcall EventFortificationManager__OnClickOrganizationBtn(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  FortificationAssetManager_o *assetManager; // x0
  const MethodInfo *v4; // x1

  if ( (byte_42161A0 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42161A0 = 1;
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
    sub_B0D97C(assetManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assetManager, 1, 0LL);
  EventFortificationManager__SetFortificationWork(this, v4);
}


void __fastcall EventFortificationManager__ResetRewardSceneObj(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainPanel; // x0

  mainPanel = this->fields.mainPanel;
  if ( !mainPanel || (UnityEngine_GameObject__SetActive(mainPanel, 1, 0LL), (mainPanel = this->fields.eventRoot) == 0LL) )
    sub_B0D97C(mainPanel);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v27; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x21

  if ( (byte_421619E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, item);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__, v7);
    sub_B0D8A4(&EventFortificationManager___c__DisplayClass31_0_TypeInfo, v8);
    byte_421619E = 1;
  }
  v9 = sub_B0D974(EventFortificationManager___c__DisplayClass31_0_TypeInfo, item, method);
  EventFortificationManager___c__DisplayClass31_0___ctor((EventFortificationManager___c__DisplayClass31_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 24) = item;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)item, v17, v18, v19, v20, v21, v22);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_10;
  organizationPanel->fields.isTouchEnabled = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v27 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
  v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v9,
    Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B0D97C(v10);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v29, 0LL);
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
  const MethodInfo *v19; // x3
  _BOOL8 v20; // x0
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationWorkObj_k__BackingField; // x21
  UnityEngine_GameObject_o *v24; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  int32_t eventId; // w23
  EventFortificationWorkManager_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v30; // x24
  __int64 v31; // x0
  const MethodInfo *v32; // x6
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_Component_o *organizationPanel; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Transform_o *v38; // x23
  __int64 v39; // x0
  int v40; // s0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Transform_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x0
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421619C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventFortificationWorkItem___ctor__, method);
    sub_B0D8A4(&System_Action_EventFortificationWorkItem__TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventFortificationMaster___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v7);
    sub_B0D8A4(&Method_EventFortificationManager_SelectFortificationServant__, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v11);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_UIAtlas___, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&StringLiteral_13644/*"Terminal/Atlas/TerminalAtlas"*/, v16);
    byte_421619C = 1;
  }
  entities = 0LL;
  memset(&v48, 0, sizeof(v48));
  UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
              (System_String_o *)StringLiteral_13644/*"Terminal/Atlas/TerminalAtlas"*/,
              (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_UIAtlas___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !EventFortificationMaster__TryGetEntityList(
          (EventFortificationMaster_o *)Instance,
          &entities,
          this->fields.eventId,
          v19) )
    return;
  Instance = (DataManager_o *)entities;
  if ( !entities )
LABEL_39:
    sub_B0D97C(Instance);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v20 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_B0D97C(v20);
    current = (EventFortificationEntity_o *)v48.fields.current;
    eventFortificationWorkObj_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._eventFortificationWorkObj_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v24 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        eventFortificationWorkObj_k__BackingField,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v24 )
      sub_B0D97C(0LL);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v24,
                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v27 = (EventFortificationWorkManager_o *)Component_srcLineSprite;
    v30 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_EventFortificationWorkItem__TypeInfo,
                                                                                 v28,
                                                                                 v29);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v30,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      (const MethodInfo_246EA3C *)Method_System_Action_EventFortificationWorkItem___ctor__);
    if ( !v27 )
      sub_B0D97C(v31);
    EventFortificationWorkManager__SetServantFortificationWork(
      v27,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v30,
      this->fields.organizationPanel,
      UIAtlas,
      v32);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
    organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
    if ( !organizationPanel )
      sub_B0D97C(0LL);
    v35 = UnityEngine_Component__get_gameObject(organizationPanel, 0LL);
    if ( !v35 )
      sub_B0D97C(0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v35, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
    if ( !v37 )
      sub_B0D97C(0LL);
    v38 = UnityEngine_GameObject__get_transform(v37, 0LL);
    *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_one(0LL);
    if ( !v38 )
      sub_B0D97C(v39);
    UnityEngine_Transform__set_localScale(v38, *(UnityEngine_Vector3_o *)&v40, 0LL);
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
    if ( !v43 )
      sub_B0D97C(0LL);
    v44 = UnityEngine_GameObject__get_transform(v43, 0LL);
    if ( !current )
      sub_B0D97C(v44);
    if ( !v44 )
      sub_B0D97C(0LL);
    v50.fields.y = (float)current->fields.y;
    v50.fields.x = (float)current->fields.x;
    v50.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v44, v50, 0LL);
    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
    if ( !v45 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v45, 1, 0LL);
    eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
    if ( !eventFortificationWorkManagers )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventFortificationWorkManagers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  const MethodInfo *v16; // x3
  _BOOL8 v17; // x0
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationWorkMiniObj_k__BackingField; // x20
  UnityEngine_GameObject_o *v21; // x0
  EventFortificationWorkManager_o *Component_srcLineSprite; // x20
  int32_t eventId; // w22
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v26; // x23
  __int64 v27; // x0
  const MethodInfo *v28; // x6
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v30; // x2
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v33; // x0
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // x0
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421619D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventFortificationWorkItem___ctor__, method);
    sub_B0D8A4(&System_Action_EventFortificationWorkItem__TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventFortificationMaster___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v7);
    sub_B0D8A4(&Method_EventFortificationManager_SelectFortificationServant__, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v11);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_421619D = 1;
  }
  entities = 0LL;
  memset(&v36, 0, sizeof(v36));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_31;
  if ( !EventFortificationMaster__TryGetEntityList(
          (EventFortificationMaster_o *)Instance,
          &entities,
          this->fields.eventId,
          v16) )
    return;
  Instance = (DataManager_o *)entities;
  if ( !entities )
LABEL_31:
    sub_B0D97C(Instance);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v17 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_B0D97C(v17);
    current = (EventFortificationEntity_o *)v36.fields.current;
    eventFortificationWorkMiniObj_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._eventFortificationWorkMiniObj_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        eventFortificationWorkMiniObj_k__BackingField,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v21 )
      sub_B0D97C(0LL);
    Component_srcLineSprite = (EventFortificationWorkManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v21,
                                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v26 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_EventFortificationWorkItem__TypeInfo,
                                                                                 v24,
                                                                                 v25);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v26,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      (const MethodInfo_246EA3C *)Method_System_Action_EventFortificationWorkItem___ctor__);
    if ( !Component_srcLineSprite )
      sub_B0D97C(v27);
    EventFortificationWorkManager__SetServantFortificationWork(
      Component_srcLineSprite,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v26,
      0LL,
      0LL,
      v28);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    EventFortificationManager__LocateObjectToFotificationPanel(this, gameObject, v30);
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    if ( !v31 )
      sub_B0D97C(0LL);
    transform = UnityEngine_GameObject__get_transform(v31, 0LL);
    if ( !current )
      sub_B0D97C(transform);
    if ( !transform )
      sub_B0D97C(0LL);
    v38.fields.y = (float)current->fields.rewardSceneY;
    v38.fields.x = (float)current->fields.rewardSceneX;
    v38.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v38, 0LL);
    v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    if ( !v33 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v33, 1, 0LL);
    eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
    if ( !eventFortificationWorkMiniManagers )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventFortificationWorkMiniManagers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationCamera_k__BackingField; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x2
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  struct FortificationAssetManager_o *v22; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *organizationPanel_k__BackingField; // x21
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *v31; // x1
  const MethodInfo *v32; // x2

  if ( (byte_4216196 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MapCamera___, v3);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4216196 = 1;
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
                                       (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_26;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v8,
                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    *p_fortificationCamera = (struct MapCamera_o *)Component_srcLineSprite;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.fortificationCamera,
      Component_srcLineSprite,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    v8 = (UnityEngine_GameObject_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v19);
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
    v22 = this->fields.assetManager;
    if ( v22 )
    {
      organizationPanel_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v22->fields._organizationPanel_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         organizationPanel_k__BackingField,
                                         (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        v24 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v8,
                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
        *p_organizationPanel = (struct FortificationOrganizationPanelComponent_o *)v24;
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.organizationPanel, v24, v25, v26, v27, v28, v29, v30);
        v8 = (UnityEngine_GameObject_o *)*p_organizationPanel;
        if ( *p_organizationPanel )
        {
          v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v31, v32);
          return;
        }
      }
    }
LABEL_26:
    sub_B0D97C(v8);
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
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x22
  struct SetSvtInfo_array *setSvtInfos; // x8
  int max_length; // w9
  int v13; // w11
  bool v14; // w10
  SetSvtInfo_o *v15; // x12
  __int64 v17; // x0
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42161A3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, *(_QWORD *)&fortificationIdx);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_42161A3 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
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
    sub_B0D97C(Instance);
  max_length = setSvtInfos->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = 0;
  v14 = 0;
  do
  {
    if ( v13 >= (unsigned int)max_length )
    {
      v17 = sub_B0D9A8(Instance);
      sub_B0D948(v17, 0LL);
    }
    v15 = setSvtInfos->m_Items[v13];
    if ( !v15 )
      goto LABEL_20;
    ++v13;
    if ( v15->fields.position == position )
      v14 = 1;
  }
  while ( v13 < max_length );
  return v14;
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_0(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  FortificationAutomaticDialogComponent_o *fortificationAutomaticDialog; // x0
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  FortificationAutomaticDialogComponent_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x22

  if ( (byte_42161A4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EventFortificationManager__CreateOrganizationUI_b__22_1__, v3);
    sub_B0D8A4(&Method_EventFortificationManager__CreateOrganizationUI_b__22_2__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_42161A4 = 1;
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
        v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10),
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_1__,
          0LL),
        v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13),
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_2__,
          0LL),
        !v8) )
  {
LABEL_10:
    sub_B0D97C(fortificationAutomaticDialog);
  }
  FortificationAutomaticDialogComponent__Open(v8, v11, v14, 0LL);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_1(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x20
  EventFortificationManager___c_c *v10; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__22_3; // x21
  Il2CppObject *v13; // x22
  struct EventFortificationManager___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // x19
  struct EventFortificationManager___c_StaticFields *v24; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__22_4; // x20
  Il2CppObject *v26; // x21
  struct EventFortificationManager___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42161A5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B0D8A4(&System_Action_EventFortificationWorkManager__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_B0D8A4(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__, v6);
    sub_B0D8A4(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__, v7);
    sub_B0D8A4(&EventFortificationManager___c_TypeInfo, v8);
    byte_42161A5 = 1;
  }
  eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
  v10 = EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v10 = EventFortificationManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__22_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__22_3;
  if ( !_9__22_3 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__22_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                      method,
                                                                                      v2);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__22_3,
      v13,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__,
      (const MethodInfo_246EA3C *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v14 = EventFortificationManager___c_TypeInfo->static_fields;
    v14->__9__22_3 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_3;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__22_3,
      (System_Int32_array **)_9__22_3,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_22;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
    (System_Action_T__o *)_9__22_3,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v10 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v10 = EventFortificationManager___c_TypeInfo;
  }
  v24 = v10->static_fields;
  _9__22_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v24->__9__22_4;
  if ( !_9__22_4 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v24 = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)v24->__9;
    _9__22_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                      v21,
                                                                                      v22);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__22_4,
      v26,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__,
      (const MethodInfo_246EA3C *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v27 = EventFortificationManager___c_TypeInfo->static_fields;
    v27->__9__22_4 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_4;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v27->__9__22_4,
      (System_Int32_array **)_9__22_4,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !eventFortificationWorkMiniManagers )
LABEL_22:
    sub_B0D97C(v10);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__22_4,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_2(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8

  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    sub_B0D97C(this);
  organizationPanel->fields.isTouchEnabled = 1;
}


void __fastcall EventFortificationManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventFortificationManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211B3A & 1) == 0 )
  {
    sub_B0D8A4(&EventFortificationManager___c_TypeInfo, v1);
    byte_4211B3A = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventFortificationManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventFortificationManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventFortificationManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CloseServantFortificationList_b__32_2(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B0D97C(this);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_3(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B0D97C(this);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_4(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B0D97C(this);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4211B3E & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, data);
    byte_4211B3E = 1;
  }
  if ( !data )
    sub_B0D97C(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4211B3F & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, data);
    byte_4211B3F = 1;
  }
  if ( !data )
    sub_B0D97C(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___InitFortificationWorkMini_b__25_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4211B3B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, data);
    byte_4211B3B = 1;
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
      sub_B0D97C(v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___OnClickBackBtn_b__34_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4211B3D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, data);
    byte_4211B3D = 1;
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
      sub_B0D97C(v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___SelectFortificationServant_b__31_1(
        EventFortificationManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  CommonUI_o *v4; // x19

  if ( (byte_4211B3C & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4211B3C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v4 )
    sub_B0D97C(Instance);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  struct EventFortificationManager_o *v12; // x8
  struct EventFortificationManager_o **p__4__this; // x22
  UnityEngine_GameObject_o *v14; // x0
  struct EventFortificationManager_o *v15; // x8
  int32_t v16; // w20
  UISprite_o *organizationBtnSp; // x21
  struct EventFortificationManager_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventFortificationManager_o *v20; // x8
  int32_t eventId; // w20
  UISprite_o *maskSp; // x21
  UILabel_o *maskLb; // x20
  struct EventFortificationManager_o *v24; // x8
  struct UITexture_o *fortificationSlotBg; // x20

  if ( (byte_4211B40 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_17105/*"btn_txt_event_organization"*/, v7);
    sub_B0D8A4(&StringLiteral_6443/*"FORTIFICATION_EVENT_END_MSG"*/, v8);
    sub_B0D8A4(&StringLiteral_17021/*"btn_bg_event_organization"*/, v9);
    sub_B0D8A4(&StringLiteral_18660/*"event_tab_bg_mask"*/, v10);
    byte_4211B40 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    this->fields.eventId,
                                                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
                  v20 = this->fields.__4__this;
                  if ( v20 )
                  {
                    eventId = this->fields.eventId;
                    maskSp = v20->fields.maskSp;
                    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)AtlasManager__SetEventUI_27921852(eventId, maskSp, (System_String_o *)StringLiteral_18660/*"event_tab_bg_mask"*/, 0LL);
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
                            Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get((System_String_o *)StringLiteral_6443/*"FORTIFICATION_EVENT_END_MSG"*/, 0LL);
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
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  p__4__this = &this->fields.__4__this;
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v12->fields.maskSp;
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
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)GameObjectExtensions__GetParent(
                                                                                    v14,
                                                                                    0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                    0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_54;
  v16 = this->fields.eventId;
  organizationBtnSp = v15->fields.organizationBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)AtlasManager__SetEventUI_27921852(
                                                                                    v16,
                                                                                    organizationBtnSp,
                                                                                    (System_String_o *)StringLiteral_17021/*"btn_bg_event_organization"*/,
                                                                                    0LL);
  if ( !*p__4__this )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)AtlasManager__SetEventUI_27921852(
                                                                                    this->fields.eventId,
                                                                                    (*p__4__this)->fields.organizationBtnTxtSp,
                                                                                    (System_String_o *)StringLiteral_17105/*"btn_txt_event_organization"*/,
                                                                                    0LL);
LABEL_45:
  v24 = *p__4__this;
  if ( !*p__4__this )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v24->fields.assetManager;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  fortificationSlotBg = v24->fields.fortificationSlotBg;
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
  __int64 v9; // x1
  __int64 v10; // x2
  struct EventFortificationManager_o *v11; // x24
  EventFortificationListViewManager_o *eventFortificationListViewManager; // x20
  int32_t eventId; // w21
  FortificationConfirmDialogComponent_o *fortificationConfirmDialog; // x22
  EventFortificationWorkItem_o *item; // x23
  System_Action_bool__UserServantEntity__o *v16; // x25
  __int64 v17; // x1
  __int64 v18; // x2
  struct EventFortificationManager_o *v19; // x8
  EventFortificationListViewManager_o *v20; // x19
  void *static_fields; // x8
  System_Action_o *v22; // x20
  Il2CppObject *v23; // x21
  struct EventFortificationManager___c_StaticFields *v24; // x0

  v2 = this;
  if ( (byte_4211B41 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool__UserServantEntity___ctor__, method);
    sub_B0D8A4(&System_Action_bool__UserServantEntity__TypeInfo, v3);
    sub_B0D8A4(&System_Action_TypeInfo, v4);
    sub_B0D8A4(&Method_EventFortificationManager_CloseServantFortificationList__, v5);
    sub_B0D8A4(&Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, v6);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_B0D8A4(&EventFortificationManager___c_TypeInfo, v7);
    byte_4211B41 = 1;
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
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_19;
  eventFortificationListViewManager = v11->fields.eventFortificationListViewManager;
  eventId = v11->fields.eventId;
  fortificationConfirmDialog = v11->fields.fortificationConfirmDialog;
  item = v2->fields.item;
  v16 = (System_Action_bool__UserServantEntity__o *)sub_B0D974(System_Action_bool__UserServantEntity__TypeInfo, v9, v10);
  System_Action_bool__UserServantEntity____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_EventFortificationManager_CloseServantFortificationList__,
    (const MethodInfo_247ADD4 *)Method_System_Action_bool__UserServantEntity___ctor__);
  if ( !eventFortificationListViewManager )
    goto LABEL_19;
  EventFortificationListViewManager__CreateList(
    eventFortificationListViewManager,
    eventId,
    fortificationConfirmDialog,
    item,
    v16,
    0LL);
  v19 = v2->fields.__4__this;
  if ( !v19 )
    goto LABEL_19;
  v20 = v19->fields.eventFortificationListViewManager;
  this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
  }
  static_fields = this[5].fields.item;
  v22 = (System_Action_o *)*((_QWORD *)static_fields + 4);
  if ( !v22 )
  {
    if ( (BYTE3(this[9].fields.__4__this) & 4) != 0 && !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v23 = *(Il2CppObject **)static_fields;
    v22 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
    System_Action___ctor(v22, v23, Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, 0LL);
    v24 = EventFortificationManager___c_TypeInfo->static_fields;
    v24->__9__31_1 = v22;
    sub_B0D840(&v24->__9__31_1, v22);
  }
  if ( !v20 )
LABEL_19:
    sub_B0D97C(this);
  EventFortificationListViewManager__SetMode_27410720(v20, 2, v22, 0LL);
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
  __int64 v17; // x1
  __int64 v18; // x2
  struct EventFortificationManager_o *v19; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *eventFortificationWorkManagers; // x20
  void *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v22; // x21
  Il2CppObject *v23; // x22
  struct EventFortificationManager___c_StaticFields *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  struct EventFortificationManager_o *v27; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *eventFortificationWorkMiniManagers; // x19
  void *v29; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v30; // x20
  Il2CppObject *v31; // x21
  struct EventFortificationManager___c_StaticFields *v32; // x0
  CommonUI_o *v33; // x19

  v2 = this;
  if ( (byte_4211B42 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventFortificationWorkManager___ctor__, method);
    sub_B0D8A4(&System_Action_EventFortificationWorkManager__TypeInfo, v3);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__, v7);
    sub_B0D8A4(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__, v8);
    sub_B0D8A4(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v9);
    sub_B0D8A4(&EventFortificationManager___c_TypeInfo, v10);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_B0D8A4(&StringLiteral_16488/*"ar200"*/, v11);
    byte_4211B42 = 1;
  }
  if ( v2->fields.servantData )
  {
    v12 = Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__;
    if ( (*((_BYTE *)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__ + 75) & 2) != 0 )
      v12 = (_QWORD *)sub_B0D8AC(Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    v13 = (System_Reflection_MethodBase_o *)sub_B0D888(v12, v12[3]);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                  v13,
                                                                  (System_String_o *)StringLiteral_16488/*"ar200"*/,
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
  v19 = v2->fields.__4__this;
  if ( !v19 )
    goto LABEL_39;
  eventFortificationWorkManagers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v19->fields.eventFortificationWorkManagers;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  }
  static_fields = this[5].fields.__4__this;
  v22 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)static_fields + 5);
  if ( !v22 )
  {
    if ( (BYTE3(this[9].fields.servantData) & 4) != 0 && !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v23 = *(Il2CppObject **)static_fields;
    v22 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                 v17,
                                                                                 v18);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v22,
      v23,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__,
      (const MethodInfo_246EA3C *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v24 = EventFortificationManager___c_TypeInfo->static_fields;
    v24->__9__32_1 = (struct System_Action_EventFortificationWorkManager__o *)v22;
    sub_B0D840(&v24->__9__32_1, v22);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_39;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)v22,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v27 = v2->fields.__4__this;
  if ( !v27 )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v27->fields.eventFortificationWorkMiniManagers;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  }
  v29 = this[5].fields.__4__this;
  v30 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)v29 + 6);
  if ( !v30 )
  {
    if ( (BYTE3(this[9].fields.servantData) & 4) != 0 && !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      v29 = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v31 = *(Il2CppObject **)v29;
    v30 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_EventFortificationWorkManager__TypeInfo,
                                                                                 v25,
                                                                                 v26);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v30,
      v31,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__,
      (const MethodInfo_246EA3C *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v32 = EventFortificationManager___c_TypeInfo->static_fields;
    v32->__9__32_2 = (struct System_Action_EventFortificationWorkManager__o *)v30;
    sub_B0D840(&v32->__9__32_2, v30);
  }
  if ( !eventFortificationWorkMiniManagers )
    goto LABEL_39;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)v30,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  this = (EventFortificationManager___c__DisplayClass32_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = (CommonUI_o *)this;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v33 )
LABEL_39:
    sub_B0D97C(this);
  CommonUI__maskFadein(v33, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}