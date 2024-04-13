void __fastcall EventFortificationManager___ctor(EventFortificationManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventFortificationManager__AssertionCheck(EventFortificationManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventFortificationManager__CloseServantFortificationList(
        EventFortificationManager_o *this,
        bool requestFinish,
        UserServantEntity_o *servantData,
        const MethodInfo *method)
{
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v35; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v37; // x21

  if ( (byte_42E9F48 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, requestFinish, (_DWORD)servantData, method);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(
      &Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&EventFortificationManager___c__DisplayClass32_0_TypeInfo, v15, v16, v17);
    byte_42E9F48 = 1;
  }
  v18 = sub_B5D694(EventFortificationManager___c__DisplayClass32_0_TypeInfo);
  EventFortificationManager___c__DisplayClass32_0___ctor((EventFortificationManager___c__DisplayClass32_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_10;
  *(_QWORD *)(v18 + 16) = servantData;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)servantData,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  *(_QWORD *)(v18 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_10;
  organizationPanel->fields.isTouchEnabled = 1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v35 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v35->static_fields->DEFAULT_FADE_TIME;
  v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v18,
    (intptr_t)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B5D69C(v19, v20);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v37, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationManager__CreateOrganizationUI(
        EventFortificationManager_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x22
  UnityEngine_GameObject_o *transform; // x0
  __int64 v21; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *autoFortificationButton_k__BackingField; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Transform_o *v31; // x21
  int v32; // s0
  UnityEngine_Transform_o *v35; // x21
  int v36; // s0
  AutoFortificationButtonComponent_o *v39; // x20
  int32_t eventId; // w21
  System_Action_o *v41; // x22

  if ( (byte_42E9F40 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)parent, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E9F40 = 1;
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
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_23;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       transform,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    *p_autoOrganizationBtn = (struct AutoFortificationButtonComponent_o *)Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.autoOrganizationBtn,
      Component_srcLineSprite,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
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
    v31 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_one(0LL);
    if ( !v31
      || (UnityEngine_Transform__set_localScale(v31, *(UnityEngine_Vector3_o *)&v32, 0LL),
          (transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn) == 0LL)
      || (v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL),
          *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_zero(0LL),
          !v35)
      || (UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)&v36, 0LL),
          (transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn) == 0LL)
      || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
    {
LABEL_23:
      sub_B5D69C(transform, v21);
    }
    UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  }
  v39 = this->fields.autoOrganizationBtn;
  eventId = this->fields.eventId;
  v41 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, 0LL);
  if ( !v39 )
    goto LABEL_23;
  AutoFortificationButtonComponent__Init(v39, eventId, v41, 0LL);
}


void __fastcall EventFortificationManager__DestroyList(EventFortificationManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  FortificationAssetManager_o *assetManager; // x0
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  __int64 v32; // x1
  UnityEngine_Component_o *v33; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  UnityEngine_Object_o *v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_Object_o *v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  UnityEngine_Object_o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_Object_o *v70; // x21
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x21
  UnityEngine_Object_o *v79; // x21
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x21
  EventFortificationManager___c_c *v87; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_0; // x22
  Il2CppObject *v90; // x23
  struct EventFortificationManager___c_StaticFields *v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v98; // x21
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  BattleServantConfConponent_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v106; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v108; // x0
  struct EventFortificationManager___c_StaticFields *v109; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_1; // x21
  Il2CppObject *v111; // x22
  struct EventFortificationManager___c_StaticFields *v112; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v119; // x20
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7

  if ( (byte_42E9F4B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_EventFortificationWorkManager___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_EventFortificationWorkManager__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_EventFortificationManager___c__DestroyList_b__36_0__, v20, v21, v22);
    sub_B5D5C4(&Method_EventFortificationManager___c__DestroyList_b__36_1__, v23, v24, v25);
    sub_B5D5C4(&EventFortificationManager___c_TypeInfo, v26, v27, v28);
    byte_42E9F4B = 1;
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
    v33 = (UnityEngine_Component_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_80;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v33, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_fortificationCamera = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.fortificationCamera, 0LL, v35, v36, v37, v38, v39, v40);
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
    v33 = (UnityEngine_Component_o *)*p_organizationPanel;
    if ( !*p_organizationPanel )
      goto LABEL_80;
    v43 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v33, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v43, 0LL);
    *p_organizationPanel = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.organizationPanel, 0LL, v44, v45, v46, v47, v48, v49);
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
    v33 = (UnityEngine_Component_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_80;
    v52 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v33, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v52, 0LL);
    *p_fortificationConfirmDialog = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
      0LL,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
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
    v33 = (UnityEngine_Component_o *)*p_fortificationAutomaticDialog;
    if ( !*p_fortificationAutomaticDialog )
      goto LABEL_80;
    v61 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v33, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v61, 0LL);
    *p_fortificationAutomaticDialog = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.fortificationAutomaticDialog,
      0LL,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
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
    v33 = (UnityEngine_Component_o *)*p_eventFortificationListViewManager;
    if ( !*p_eventFortificationListViewManager )
      goto LABEL_80;
    v70 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v33, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v70, 0LL);
    *p_eventFortificationListViewManager = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventFortificationListViewManager,
      0LL,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
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
    v33 = (UnityEngine_Component_o *)*p_autoOrganizationBtn;
    if ( *p_autoOrganizationBtn )
    {
      v79 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v33, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v79, 0LL);
      *p_autoOrganizationBtn = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.autoOrganizationBtn, 0LL, v80, v81, v82, v83, v84, v85);
      goto LABEL_59;
    }
LABEL_80:
    sub_B5D69C(v33, v32);
  }
LABEL_59:
  eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
  if ( eventFortificationWorkManagers )
  {
    v87 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v87 = EventFortificationManager___c_TypeInfo;
    }
    static_fields = v87->static_fields;
    _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( (BYTE3(v87->vtable._0_Equals.methodPtr) & 4) != 0 && !v87->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v87);
        static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v90 = (Il2CppObject *)static_fields->__9;
      _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__36_0,
        v90,
        Method_EventFortificationManager___c__DestroyList_b__36_0__,
        (const MethodInfo_258B320 *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v91 = EventFortificationManager___c_TypeInfo->static_fields;
      v91->__9__36_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v91->__9__36_0,
        (System_Int32_array **)_9__36_0,
        v92,
        v93,
        v94,
        v95,
        v96,
        v97);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
      (System_Action_T__o *)_9__36_0,
      (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v98 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v98,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v98;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkManagers,
      (System_Int32_array **)v98,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkMiniManagers;
  v106 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers )
  {
    v108 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v108 = EventFortificationManager___c_TypeInfo;
    }
    v109 = v108->static_fields;
    _9__36_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v109->__9__36_1;
    if ( !_9__36_1 )
    {
      if ( (BYTE3(v108->vtable._0_Equals.methodPtr) & 4) != 0 && !v108->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v108);
        v109 = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v111 = (Il2CppObject *)v109->__9;
      _9__36_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__36_1,
        v111,
        Method_EventFortificationManager___c__DestroyList_b__36_1__,
        (const MethodInfo_258B320 *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v112 = EventFortificationManager___c_TypeInfo->static_fields;
      v112->__9__36_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v112->__9__36_1,
        (System_Int32_array **)_9__36_1,
        v113,
        v114,
        v115,
        v116,
        v117,
        v118);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      v106,
      (System_Action_T__o *)_9__36_1,
      (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v119 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v119,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    p_eventFortificationWorkMiniManagers->klass = (BattleServantConfConponent_c *)v119;
    sub_B5D560(p_eventFortificationWorkMiniManagers, (System_Int32_array **)v119, v120, v121, v122, v123, v124, v125);
  }
}


void __fastcall EventFortificationManager__Init(
        EventFortificationManager_o *this,
        int32_t eventId,
        int32_t slotIndex,
        UnityEngine_Transform_o *uiParent,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x1
  BattleServantConfConponent_o *p_assetManager; // x19
  FortificationAssetManager_o *klass; // x21
  struct FortificationAssetManager_o *assetManager; // t1
  FortificationAssetManager_o *v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int32_t v57; // w19
  System_Action_o *v58; // x22

  if ( (byte_42E9F44 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, slotIndex, uiParent);
    sub_B5D5C4(&FortificationAssetManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__, v18, v19, v20);
    sub_B5D5C4(&EventFortificationManager___c__DisplayClass28_0_TypeInfo, v21, v22, v23);
    byte_42E9F44 = 1;
  }
  v24 = sub_B5D694(EventFortificationManager___c__DisplayClass28_0_TypeInfo);
  EventFortificationManager___c__DisplayClass28_0___ctor((EventFortificationManager___c__DisplayClass28_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_8;
  *(_DWORD *)(v24 + 16) = eventId;
  *(_QWORD *)(v24 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 40) = uiParent;
  *(_DWORD *)(v24 + 32) = slotIndex;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 40), (System_Int32_array **)uiParent, v33, v34, v35, v36, v37, v38);
  this->fields.eventId = *(_DWORD *)(v24 + 16);
  this->fields.slotIndex = *(_DWORD *)(v24 + 32);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkManagers,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  EventFortificationManager__InitFortificationWorkMini(this, v46);
  assetManager = this->fields.assetManager;
  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  klass = assetManager;
  if ( !assetManager )
  {
    v50 = (FortificationAssetManager_o *)sub_B5D694(FortificationAssetManager_TypeInfo);
    FortificationAssetManager___ctor(v50, 0LL);
    p_assetManager->klass = (BattleServantConfConponent_c *)v50;
    sub_B5D560(p_assetManager, (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
    klass = (FortificationAssetManager_o *)p_assetManager->klass;
  }
  v57 = *(_DWORD *)(v24 + 16);
  v58 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v24,
    Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__,
    0LL);
  if ( !klass )
LABEL_8:
    sub_B5D69C(v25, v26);
  FortificationAssetManager__GetAssets(klass, v57, v58, 0LL);
}


void __fastcall EventFortificationManager__InitDialog(EventFortificationManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationConfirmDialog_k__BackingField; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v28; // x2
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  struct FortificationAssetManager_o *v31; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationAutomaticDialog_k__BackingField; // x21
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_GameObject_o *v40; // x0
  const MethodInfo *v41; // x2

  if ( (byte_42E9F41 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42E9F41 = 1;
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v16 & 1) != 0 )
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
    v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        fortificationConfirmDialog_k__BackingField,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v16 )
      goto LABEL_28;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v16,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    *p_fortificationConfirmDialog = (struct FortificationConfirmDialogComponent_o *)Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
      Component_srcLineSprite,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v16 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v28);
  }
  v16 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
  if ( !*p_fortificationConfirmDialog )
    goto LABEL_28;
  FortificationConfirmDialogComponent__Init((FortificationConfirmDialogComponent_o *)v16, this->fields.eventId, 0LL);
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationAutomaticDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v16 & 1) != 0 )
  {
    v31 = this->fields.assetManager;
    if ( v31 )
    {
      fortificationAutomaticDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v31->fields._fortificationAutomaticDialog_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          fortificationAutomaticDialog_k__BackingField,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v16 )
      {
        v33 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v16,
                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
        *p_fortificationAutomaticDialog = (struct FortificationAutomaticDialogComponent_o *)v33;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.fortificationAutomaticDialog,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
        v16 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
        if ( *p_fortificationAutomaticDialog )
        {
          v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v40, v41);
          goto LABEL_26;
        }
      }
    }
LABEL_28:
    sub_B5D69C(v16, v17);
  }
LABEL_26:
  v16 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
  if ( !*p_fortificationAutomaticDialog )
    goto LABEL_28;
  BaseDialog__Init((BaseDialog_o *)v16, 0LL);
}


void __fastcall EventFortificationManager__InitFortificationWorkMini(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  BattleServantConfConponent_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v27; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v29; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__25_0; // x21
  Il2CppObject *v32; // x22
  struct EventFortificationManager___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_42E9F43 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_EventFortificationWorkManager___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_EventFortificationWorkManager__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__get_Count__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__, v20, v21, v22);
    sub_B5D5C4(&EventFortificationManager___c_TypeInfo, v23, v24, v25);
    byte_42E9F43 = 1;
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkMiniManagers;
  v27 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers && v27->fields._size >= 1 )
  {
    v29 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v29 = EventFortificationManager___c_TypeInfo;
    }
    static_fields = v29->static_fields;
    _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v32 = (Il2CppObject *)static_fields->__9;
      _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__25_0,
        v32,
        Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__,
        (const MethodInfo_258B320 *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v33 = EventFortificationManager___c_TypeInfo->static_fields;
      v33->__9__25_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__25_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v33->__9__25_0,
        (System_Int32_array **)_9__25_0,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      v27,
      (System_Action_T__o *)_9__25_0,
      (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  }
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  p_eventFortificationWorkMiniManagers->klass = (BattleServantConfConponent_c *)v40;
  sub_B5D560(p_eventFortificationWorkMiniManagers, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
}


void __fastcall EventFortificationManager__InitListViewPanel(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_GameObject_o *v13; // x0
  __int64 v14; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationListViewPanel_k__BackingField; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v25; // x2

  if ( (byte_42E9F42 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E9F42 = 1;
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(eventFortificationListViewManager, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) != 0 )
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
    v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        eventFortificationListViewPanel_k__BackingField,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v13
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v13,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___),
          *p_eventFortificationListViewManager = (struct EventFortificationListViewManager_o *)Component_srcLineSprite,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.eventFortificationListViewManager,
            Component_srcLineSprite,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23),
          (v13 = (UnityEngine_GameObject_o *)*p_eventFortificationListViewManager) == 0LL) )
    {
LABEL_15:
      sub_B5D69C(v13, v14);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v25);
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
    sub_B5D69C(organizationPanel, method);
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
    sub_B5D69C(this, obj);
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
    sub_B5D69C(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventFortificationManager__OnClickBackBtn(EventFortificationManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 v23; // x1
  void *organizationPanel; // x0
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x20
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__34_0; // x21
  Il2CppObject *v28; // x22
  struct EventFortificationManager___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42E9F4A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_EventFortificationWorkManager___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_EventFortificationWorkManager__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, v17, v18, v19);
    sub_B5D5C4(&EventFortificationManager___c_TypeInfo, v20, v21, v22);
    byte_42E9F4A = 1;
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
    v28 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__34_0,
      v28,
      Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__,
      (const MethodInfo_258B320 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v29 = EventFortificationManager___c_TypeInfo->static_fields;
    v29->__9__34_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__34_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v29->__9__34_0,
      (System_Int32_array **)_9__34_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !eventFortificationWorkManagers
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
          (System_Action_T__o *)_9__34_0,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__),
        (organizationPanel = this->fields.eventFortificationWorkManagers) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)organizationPanel,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__),
        (organizationPanel = this->fields.eventFortificationListViewManager) == 0LL) )
  {
LABEL_21:
    sub_B5D69C(organizationPanel, v23);
  }
  ListViewManager__ClearScrollBarValue((ListViewManager_o *)organizationPanel, 1, 0LL);
}


void __fastcall EventFortificationManager__OnClickOrganizationBtn(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  FortificationAssetManager_o *assetManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E9F49 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9F49 = 1;
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
    sub_B5D69C(assetManager, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assetManager, 1, 0LL);
  EventFortificationManager__SetFortificationWork(this, v7);
}


void __fastcall EventFortificationManager__ResetRewardSceneObj(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainPanel; // x0

  mainPanel = this->fields.mainPanel;
  if ( !mainPanel || (UnityEngine_GameObject__SetActive(mainPanel, 1, 0LL), (mainPanel = this->fields.eventRoot) == 0LL) )
    sub_B5D69C(mainPanel, method);
  UnityEngine_GameObject__SetActive(mainPanel, 1, 0LL);
}


void __fastcall EventFortificationManager__SelectFortificationServant(
        EventFortificationManager_o *this,
        EventFortificationWorkItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v35; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v37; // x21

  if ( (byte_42E9F47 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(
      &Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&EventFortificationManager___c__DisplayClass31_0_TypeInfo, v15, v16, v17);
    byte_42E9F47 = 1;
  }
  v18 = sub_B5D694(EventFortificationManager___c__DisplayClass31_0_TypeInfo);
  EventFortificationManager___c__DisplayClass31_0___ctor((EventFortificationManager___c__DisplayClass31_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_10;
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = item;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)item, v27, v28, v29, v30, v31, v32);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_10;
  organizationPanel->fields.isTouchEnabled = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v35 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v35->static_fields->DEFAULT_FADE_TIME;
  v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v18,
    Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B5D69C(v19, v20);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v37, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationManager__SetFortificationWork(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  UIAtlas_o *UIAtlas; // x20
  DataManager_o *Instance; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x3
  _BOOL8 v51; // x0
  __int64 v52; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationWorkObj_k__BackingField; // x21
  UnityEngine_GameObject_o *v56; // x0
  __int64 v57; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  int32_t eventId; // w23
  EventFortificationWorkManager_o *v60; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v61; // x24
  __int64 v62; // x0
  __int64 v63; // x1
  const MethodInfo *v64; // x6
  __int64 v65; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_Component_o *organizationPanel; // x0
  UnityEngine_GameObject_o *v68; // x0
  __int64 v69; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v71; // x0
  __int64 v72; // x1
  UnityEngine_Transform_o *v73; // x23
  __int64 v74; // x0
  __int64 v75; // x1
  int v76; // s0
  UnityEngine_GameObject_o *v79; // x0
  __int64 v80; // x1
  UnityEngine_Transform_o *v81; // x0
  __int64 v82; // x1
  UnityEngine_GameObject_o *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x1
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x0
  System_Collections_Generic_List_Enumerator_T__o v87; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v88; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9F45 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_EventFortificationWorkItem___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_EventFortificationWorkItem__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFortificationMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_EventFortificationManager_SelectFortificationServant__, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v29, v30, v31);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v32, v33, v34);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_UIAtlas___, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_13756/*"Terminal/Atlas/TerminalAtlas"*/, v44, v45, v46);
    byte_42E9F45 = 1;
  }
  entities = 0LL;
  memset(&v88, 0, sizeof(v88));
  UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
              (System_String_o *)StringLiteral_13756/*"Terminal/Atlas/TerminalAtlas"*/,
              (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_UIAtlas___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !EventFortificationMaster__TryGetEntityList(
          (EventFortificationMaster_o *)Instance,
          &entities,
          this->fields.eventId,
          v50) )
    return;
  Instance = (DataManager_o *)entities;
  if ( !entities )
LABEL_39:
    sub_B5D69C(Instance, v49);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v87,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v88 = v87;
  while ( 1 )
  {
    v51 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v88,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v51 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_B5D69C(v51, v52);
    current = (EventFortificationEntity_o *)v88.fields.current;
    eventFortificationWorkObj_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._eventFortificationWorkObj_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v56 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        eventFortificationWorkObj_k__BackingField,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v56 )
      sub_B5D69C(0LL, v57);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v56,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v60 = (EventFortificationWorkManager_o *)Component_srcLineSprite;
    v61 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v61,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      (const MethodInfo_258B320 *)Method_System_Action_EventFortificationWorkItem___ctor__);
    if ( !v60 )
      sub_B5D69C(v62, v63);
    EventFortificationWorkManager__SetServantFortificationWork(
      v60,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v61,
      this->fields.organizationPanel,
      UIAtlas,
      v64);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v60, 0LL);
    organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
    if ( !organizationPanel )
      sub_B5D69C(0LL, v65);
    v68 = UnityEngine_Component__get_gameObject(organizationPanel, 0LL);
    if ( !v68 )
      sub_B5D69C(0LL, v69);
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v68, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v60, 0LL);
    if ( !v71 )
      sub_B5D69C(0LL, v72);
    v73 = UnityEngine_GameObject__get_transform(v71, 0LL);
    *(UnityEngine_Vector3_o *)&v76 = UnityEngine_Vector3__get_one(0LL);
    if ( !v73 )
      sub_B5D69C(v74, v75);
    UnityEngine_Transform__set_localScale(v73, *(UnityEngine_Vector3_o *)&v76, 0LL);
    v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v60, 0LL);
    if ( !v79 )
      sub_B5D69C(0LL, v80);
    v81 = UnityEngine_GameObject__get_transform(v79, 0LL);
    if ( !current )
      sub_B5D69C(v81, v82);
    if ( !v81 )
      sub_B5D69C(0LL, v82);
    v90.fields.y = (float)current->fields.y;
    v90.fields.x = (float)current->fields.x;
    v90.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v81, v90, 0LL);
    v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v60, 0LL);
    if ( !v83 )
      sub_B5D69C(0LL, v84);
    UnityEngine_GameObject__SetActive(v83, 1, 0LL);
    eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
    if ( !eventFortificationWorkManagers )
      sub_B5D69C(0LL, v85);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventFortificationWorkManagers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v88,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void __fastcall EventFortificationManager__SetFortificationWorkMini(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  DataManager_o *Instance; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x3
  _BOOL8 v44; // x0
  __int64 v45; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationWorkMiniObj_k__BackingField; // x20
  UnityEngine_GameObject_o *v49; // x0
  __int64 v50; // x1
  EventFortificationWorkManager_o *Component_srcLineSprite; // x20
  int32_t eventId; // w22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v53; // x23
  __int64 v54; // x0
  __int64 v55; // x1
  const MethodInfo *v56; // x6
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v58; // x2
  UnityEngine_GameObject_o *v59; // x0
  __int64 v60; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v62; // x1
  UnityEngine_GameObject_o *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x1
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // x0
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9F46 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_EventFortificationWorkItem___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_EventFortificationWorkItem__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFortificationMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_EventFortificationManager_SelectFortificationServant__, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v29, v30, v31);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v32, v33, v34);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    byte_42E9F46 = 1;
  }
  entities = 0LL;
  memset(&v68, 0, sizeof(v68));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_31;
  if ( !EventFortificationMaster__TryGetEntityList(
          (EventFortificationMaster_o *)Instance,
          &entities,
          this->fields.eventId,
          v43) )
    return;
  Instance = (DataManager_o *)entities;
  if ( !entities )
LABEL_31:
    sub_B5D69C(Instance, v42);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v67,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v68 = v67;
  while ( 1 )
  {
    v44 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v44 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_B5D69C(v44, v45);
    current = (EventFortificationEntity_o *)v68.fields.current;
    eventFortificationWorkMiniObj_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._eventFortificationWorkMiniObj_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v49 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        eventFortificationWorkMiniObj_k__BackingField,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v49 )
      sub_B5D69C(0LL, v50);
    Component_srcLineSprite = (EventFortificationWorkManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v49,
                                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v53 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v53,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      (const MethodInfo_258B320 *)Method_System_Action_EventFortificationWorkItem___ctor__);
    if ( !Component_srcLineSprite )
      sub_B5D69C(v54, v55);
    EventFortificationWorkManager__SetServantFortificationWork(
      Component_srcLineSprite,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v53,
      0LL,
      0LL,
      v56);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    EventFortificationManager__LocateObjectToFotificationPanel(this, gameObject, v58);
    v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    if ( !v59 )
      sub_B5D69C(0LL, v60);
    transform = UnityEngine_GameObject__get_transform(v59, 0LL);
    if ( !current )
      sub_B5D69C(transform, v62);
    if ( !transform )
      sub_B5D69C(0LL, v62);
    v70.fields.y = (float)current->fields.rewardSceneY;
    v70.fields.x = (float)current->fields.rewardSceneX;
    v70.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v70, 0LL);
    v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    if ( !v63 )
      sub_B5D69C(0LL, v64);
    UnityEngine_GameObject__SetActive(v63, 1, 0LL);
    eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
    if ( !eventFortificationWorkMiniManagers )
      sub_B5D69C(0LL, v65);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventFortificationWorkMiniManagers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v68,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void __fastcall EventFortificationManager__SetFotificationOrganizationPanel(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationCamera_k__BackingField; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v28; // x2
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  struct FortificationAssetManager_o *v31; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *organizationPanel_k__BackingField; // x21
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_GameObject_o *v40; // x1
  const MethodInfo *v41; // x2

  if ( (byte_42E9F3F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MapCamera___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42E9F3F = 1;
  }
  p_fortificationCamera = &this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationCamera, 0LL, 0LL);
  if ( ((unsigned __int8)v16 & 1) != 0 )
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
    v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        fortificationCamera_k__BackingField,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v16 )
      goto LABEL_26;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v16,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    *p_fortificationCamera = (struct MapCamera_o *)Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.fortificationCamera,
      Component_srcLineSprite,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v16 = (UnityEngine_GameObject_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v28);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(organizationPanel, 0LL, 0LL);
  if ( ((unsigned __int8)v16 & 1) != 0 )
  {
    v31 = this->fields.assetManager;
    if ( v31 )
    {
      organizationPanel_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v31->fields._organizationPanel_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          organizationPanel_k__BackingField,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v16 )
      {
        v33 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v16,
                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
        *p_organizationPanel = (struct FortificationOrganizationPanelComponent_o *)v33;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.organizationPanel, v33, v34, v35, v36, v37, v38, v39);
        v16 = (UnityEngine_GameObject_o *)*p_organizationPanel;
        if ( *p_organizationPanel )
        {
          v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v40, v41);
          return;
        }
      }
    }
LABEL_26:
    sub_B5D69C(v16, v17);
  }
}


void __fastcall EventFortificationManager__SetTheDataRegisteredInTheMaster(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall EventFortificationManager__TryGetUserEventFortificationEntity(
        EventFortificationManager_o *this,
        int32_t fortificationIdx,
        int32_t position,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int64_t Instance; // x0
  __int64 v14; // x1
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x22
  struct SetSvtInfo_array *setSvtInfos; // x8
  int max_length; // w9
  int v18; // w11
  bool v19; // w10
  SetSvtInfo_o *v20; // x12
  __int64 v22; // x0
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9F4C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, fortificationIdx, position, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E9F4C = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
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
    sub_B5D69C(Instance, v14);
  max_length = setSvtInfos->max_length;
  if ( max_length < 1 )
    return 0;
  v18 = 0;
  v19 = 0;
  do
  {
    if ( v18 >= (unsigned int)max_length )
    {
      v22 = sub_B5D6C8(Instance);
      sub_B5D668(v22, 0LL);
    }
    v20 = setSvtInfos->m_Items[v18];
    if ( !v20 )
      goto LABEL_20;
    ++v18;
    if ( v20->fields.position == position )
      v19 = 1;
  }
  while ( v18 < max_length );
  return v19;
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_0(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  FortificationAutomaticDialogComponent_o *fortificationAutomaticDialog; // x0
  __int64 v15; // x1
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  FortificationAutomaticDialogComponent_o *v17; // x20
  System_Action_o *v18; // x21
  System_Action_o *v19; // x22

  if ( (byte_42E9F4D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventFortificationManager__CreateOrganizationUI_b__22_1__, v5, v6, v7);
    sub_B5D5C4(&Method_EventFortificationManager__CreateOrganizationUI_b__22_2__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E9F4D = 1;
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
        v17 = this->fields.fortificationAutomaticDialog,
        v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_1__,
          0LL),
        v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_2__,
          0LL),
        !v17) )
  {
LABEL_10:
    sub_B5D69C(fortificationAutomaticDialog, v15);
  }
  FortificationAutomaticDialogComponent__Open(v17, v18, v19, 0LL);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_1(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x20
  EventFortificationManager___c_c *v21; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__22_3; // x21
  Il2CppObject *v24; // x22
  struct EventFortificationManager___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // x19
  struct EventFortificationManager___c_StaticFields *v33; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__22_4; // x20
  Il2CppObject *v35; // x21
  struct EventFortificationManager___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_42E9F4E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_EventFortificationWorkManager___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_EventFortificationWorkManager__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__, v11, v12, v13);
    sub_B5D5C4(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__, v14, v15, v16);
    sub_B5D5C4(&EventFortificationManager___c_TypeInfo, v17, v18, v19);
    byte_42E9F4E = 1;
  }
  eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
  v21 = EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v21 = EventFortificationManager___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__22_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__22_3;
  if ( !_9__22_3 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__22_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__22_3,
      v24,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__,
      (const MethodInfo_258B320 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v25 = EventFortificationManager___c_TypeInfo->static_fields;
    v25->__9__22_3 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_3;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__22_3,
      (System_Int32_array **)_9__22_3,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_22;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
    (System_Action_T__o *)_9__22_3,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v21 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v21 = EventFortificationManager___c_TypeInfo;
  }
  v33 = v21->static_fields;
  _9__22_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v33->__9__22_4;
  if ( !_9__22_4 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v33 = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)v33->__9;
    _9__22_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__22_4,
      v35,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__,
      (const MethodInfo_258B320 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v36 = EventFortificationManager___c_TypeInfo->static_fields;
    v36->__9__22_4 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_4;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v36->__9__22_4,
      (System_Int32_array **)_9__22_4,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  if ( !eventFortificationWorkMiniManagers )
LABEL_22:
    sub_B5D69C(v21, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__22_4,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_2(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8

  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    sub_B5D69C(this, method);
  organizationPanel->fields.isTouchEnabled = 1;
}


void __fastcall EventFortificationManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventFortificationManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E650E & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationManager___c_TypeInfo, v1, v2, v3);
    byte_42E650E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventFortificationManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventFortificationManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventFortificationManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CloseServantFortificationList_b__32_2(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B5D69C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_3(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B5D69C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_4(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B5D69C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E6512 & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E6512 = 1;
  }
  if ( !data )
    sub_B5D69C(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E6513 & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E6513 = 1;
  }
  if ( !data )
    sub_B5D69C(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___InitFortificationWorkMini_b__25_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E650F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E650F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v5 )
  {
    if ( !data )
      sub_B5D69C(v5, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___OnClickBackBtn_b__34_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E6511 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E6511 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v5 )
  {
    if ( !data )
      sub_B5D69C(v5, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___SelectFortificationServant_b__31_1(
        EventFortificationManager___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x19

  if ( (byte_42E6510 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42E6510 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v9 )
    sub_B5D69C(Instance, v8);
  CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v30; // x1
  struct EventFortificationManager_o *v31; // x8
  struct EventFortificationManager_o **p__4__this; // x22
  UnityEngine_GameObject_o *v33; // x0
  struct EventFortificationManager_o *v34; // x8
  int32_t v35; // w20
  UISprite_o *organizationBtnSp; // x21
  struct EventFortificationManager_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventFortificationManager_o *v39; // x8
  int32_t eventId; // w20
  UISprite_o *maskSp; // x21
  UILabel_o *maskLb; // x20
  struct EventFortificationManager_o *v43; // x8
  struct UITexture_o *fortificationSlotBg; // x20

  if ( (byte_42E6514 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17263/*"btn_txt_event_organization"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6505/*"FORTIFICATION_EVENT_END_MSG"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_17179/*"btn_bg_event_organization"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_18833/*"event_tab_bg_mask"*/, v26, v27, v28);
    byte_42E6514 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    this->fields.eventId,
                                                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
                  v39 = this->fields.__4__this;
                  if ( v39 )
                  {
                    eventId = this->fields.eventId;
                    maskSp = v39->fields.maskSp;
                    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)AtlasManager__SetEventUI_31190412(eventId, maskSp, (System_String_o *)StringLiteral_18833/*"event_tab_bg_mask"*/, 0LL);
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
                            Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get((System_String_o *)StringLiteral_6505/*"FORTIFICATION_EVENT_END_MSG"*/, 0LL);
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v30);
  }
  p__4__this = &this->fields.__4__this;
  v31 = this->fields.__4__this;
  if ( !v31 )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v31->fields.maskSp;
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
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)GameObjectExtensions__GetParent(
                                                                                    v33,
                                                                                    0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                    0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  v34 = this->fields.__4__this;
  if ( !v34 )
    goto LABEL_54;
  v35 = this->fields.eventId;
  organizationBtnSp = v34->fields.organizationBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)AtlasManager__SetEventUI_31190412(
                                                                                    v35,
                                                                                    organizationBtnSp,
                                                                                    (System_String_o *)StringLiteral_17179/*"btn_bg_event_organization"*/,
                                                                                    0LL);
  if ( !*p__4__this )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)AtlasManager__SetEventUI_31190412(
                                                                                    this->fields.eventId,
                                                                                    (*p__4__this)->fields.organizationBtnTxtSp,
                                                                                    (System_String_o *)StringLiteral_17263/*"btn_txt_event_organization"*/,
                                                                                    0LL);
LABEL_45:
  v43 = *p__4__this;
  if ( !*p__4__this )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v43->fields.assetManager;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  fortificationSlotBg = v43->fields.fortificationSlotBg;
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
  int v2; // w2
  __int64 v3; // x3
  EventFortificationManager___c__DisplayClass31_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct EventFortificationManager_o *_4__this; // x8
  struct EventFortificationManager_o *v21; // x24
  EventFortificationListViewManager_o *eventFortificationListViewManager; // x20
  int32_t eventId; // w21
  FortificationConfirmDialogComponent_o *fortificationConfirmDialog; // x22
  EventFortificationWorkItem_o *item; // x23
  System_Action_bool__UserServantEntity__o *v26; // x25
  struct EventFortificationManager_o *v27; // x8
  EventFortificationListViewManager_o *v28; // x19
  void *static_fields; // x8
  System_Action_o *v30; // x20
  Il2CppObject *v31; // x21
  struct EventFortificationManager___c_StaticFields *v32; // x0

  v4 = this;
  if ( (byte_42E6515 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__UserServantEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__UserServantEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Action_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_EventFortificationManager_CloseServantFortificationList__, v11, v12, v13);
    sub_B5D5C4(&Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, v14, v15, v16);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_B5D5C4(
                                                                  &EventFortificationManager___c_TypeInfo,
                                                                  v17,
                                                                  v18,
                                                                  v19);
    byte_42E6515 = 1;
  }
  _4__this = v4->fields.__4__this;
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
  v21 = v4->fields.__4__this;
  if ( !v21 )
    goto LABEL_19;
  eventFortificationListViewManager = v21->fields.eventFortificationListViewManager;
  eventId = v21->fields.eventId;
  fortificationConfirmDialog = v21->fields.fortificationConfirmDialog;
  item = v4->fields.item;
  v26 = (System_Action_bool__UserServantEntity__o *)sub_B5D694(System_Action_bool__UserServantEntity__TypeInfo);
  System_Action_bool__UserServantEntity____ctor(
    v26,
    (Il2CppObject *)v21,
    Method_EventFortificationManager_CloseServantFortificationList__,
    (const MethodInfo_25976B8 *)Method_System_Action_bool__UserServantEntity___ctor__);
  if ( !eventFortificationListViewManager )
    goto LABEL_19;
  EventFortificationListViewManager__CreateList(
    eventFortificationListViewManager,
    eventId,
    fortificationConfirmDialog,
    item,
    v26,
    0LL);
  v27 = v4->fields.__4__this;
  if ( !v27 )
    goto LABEL_19;
  v28 = v27->fields.eventFortificationListViewManager;
  this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
  }
  static_fields = this[5].fields.item;
  v30 = (System_Action_o *)*((_QWORD *)static_fields + 4);
  if ( !v30 )
  {
    if ( (BYTE3(this[9].fields.__4__this) & 4) != 0 && !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v31 = *(Il2CppObject **)static_fields;
    v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v30, v31, Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, 0LL);
    v32 = EventFortificationManager___c_TypeInfo->static_fields;
    v32->__9__31_1 = v30;
    sub_B5D560(&v32->__9__31_1);
  }
  if ( !v28 )
LABEL_19:
    sub_B5D69C(this, method);
  EventFortificationListViewManager__SetMode_27777064(v28, 2, v30, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  EventFortificationManager___c__DisplayClass32_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  struct EventFortificationManager_o *_4__this; // x8
  struct EventFortificationManager_o *v35; // x8
  struct EventFortificationManager_o *v36; // x8
  struct EventFortificationManager_o *v37; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *eventFortificationWorkManagers; // x20
  void *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v40; // x21
  Il2CppObject *v41; // x22
  struct EventFortificationManager___c_StaticFields *v42; // x0
  struct EventFortificationManager_o *v43; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *eventFortificationWorkMiniManagers; // x19
  void *v45; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v46; // x20
  Il2CppObject *v47; // x21
  struct EventFortificationManager___c_StaticFields *v48; // x0
  CommonUI_o *v49; // x19

  v4 = this;
  if ( (byte_42E6516 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_EventFortificationWorkManager___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_EventFortificationWorkManager__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__, v17, v18, v19);
    sub_B5D5C4(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__, v20, v21, v22);
    sub_B5D5C4(
      &Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&EventFortificationManager___c_TypeInfo, v26, v27, v28);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_B5D5C4(&StringLiteral_16637/*"ar200"*/, v29, v30, v31);
    byte_42E6516 = 1;
  }
  if ( v4->fields.servantData )
  {
    v32 = Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__;
    if ( (*((_BYTE *)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__ + 75) & 2) != 0 )
      v32 = (_QWORD *)sub_B5D5CC(Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    v33 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v32, v32[3]);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                  v33,
                                                                  (System_String_o *)StringLiteral_16637/*"ar200"*/,
                                                                  0LL);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)_4__this->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_39;
  EventFortificationListViewManager__InitBackListView((EventFortificationListViewManager_o *)this, 0LL);
  v35 = v4->fields.__4__this;
  if ( !v35 )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v35->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_39;
  EventFortificationListViewManager__DestroyList((EventFortificationListViewManager_o *)this, 0LL);
  v36 = v4->fields.__4__this;
  if ( !v36 )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v36->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
  if ( !this )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v37 = v4->fields.__4__this;
  if ( !v37 )
    goto LABEL_39;
  eventFortificationWorkManagers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v37->fields.eventFortificationWorkManagers;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  }
  static_fields = this[5].fields.__4__this;
  v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)static_fields + 5);
  if ( !v40 )
  {
    if ( (BYTE3(this[9].fields.servantData) & 4) != 0 && !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v41 = *(Il2CppObject **)static_fields;
    v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v40,
      v41,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__,
      (const MethodInfo_258B320 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v42 = EventFortificationManager___c_TypeInfo->static_fields;
    v42->__9__32_1 = (struct System_Action_EventFortificationWorkManager__o *)v40;
    sub_B5D560(&v42->__9__32_1);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_39;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)v40,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v43 = v4->fields.__4__this;
  if ( !v43 )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v43->fields.eventFortificationWorkMiniManagers;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  }
  v45 = this[5].fields.__4__this;
  v46 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)v45 + 6);
  if ( !v46 )
  {
    if ( (BYTE3(this[9].fields.servantData) & 4) != 0 && !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      v45 = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v47 = *(Il2CppObject **)v45;
    v46 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v46,
      v47,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__,
      (const MethodInfo_258B320 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v48 = EventFortificationManager___c_TypeInfo->static_fields;
    v48->__9__32_2 = (struct System_Action_EventFortificationWorkManager__o *)v46;
    sub_B5D560(&v48->__9__32_2);
  }
  if ( !eventFortificationWorkMiniManagers )
    goto LABEL_39;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)v46,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  this = (EventFortificationManager___c__DisplayClass32_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v49 = (CommonUI_o *)this;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v49 )
LABEL_39:
    sub_B5D69C(this, method);
  CommonUI__maskFadein(v49, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}