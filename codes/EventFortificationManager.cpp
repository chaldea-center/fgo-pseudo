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
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v23; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_42B1DBC & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    sub_B52984(&EventFortificationManager___c__DisplayClass32_0_TypeInfo);
    byte_42B1DBC = 1;
  }
  v6 = sub_B52A54(EventFortificationManager___c__DisplayClass32_0_TypeInfo);
  EventFortificationManager___c__DisplayClass32_0___ctor((EventFortificationManager___c__DisplayClass32_0_o *)v6, 0LL);
  if ( !v6 )
    goto LABEL_10;
  *(_QWORD *)(v6 + 16) = servantData;
  sub_B52920((BattleServantConfConponent_o *)(v6 + 16), (System_Int32_array **)servantData, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v6 + 24), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_10;
  organizationPanel->fields.isTouchEnabled = 1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v23 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
  v25 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v6,
    (intptr_t)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B52A5C(v7, v8);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationManager__CreateOrganizationUI(
        EventFortificationManager_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x22
  UnityEngine_GameObject_o *transform; // x0
  __int64 v8; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *autoFortificationButton_k__BackingField; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Transform_o *v18; // x21
  int v19; // s0
  UnityEngine_Transform_o *v22; // x21
  int v23; // s0
  AutoFortificationButtonComponent_o *v26; // x20
  int32_t eventId; // w21
  System_Action_o *v28; // x22

  if ( (byte_42B1DB4 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1DB4 = 1;
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
                                              (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_23;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       transform,
                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    *p_autoOrganizationBtn = (struct AutoFortificationButtonComponent_o *)Component_srcLineSprite;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.autoOrganizationBtn,
      Component_srcLineSprite,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
    v18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL);
    if ( !v18
      || (UnityEngine_Transform__set_localScale(v18, *(UnityEngine_Vector3_o *)&v19, 0LL),
          (transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn) == 0LL)
      || (v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL),
          *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL),
          !v22)
      || (UnityEngine_Transform__set_localPosition(v22, *(UnityEngine_Vector3_o *)&v23, 0LL),
          (transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn) == 0LL)
      || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
    {
LABEL_23:
      sub_B52A5C(transform, v8);
    }
    UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  }
  v26 = this->fields.autoOrganizationBtn;
  eventId = this->fields.eventId;
  v28 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, 0LL);
  if ( !v26 )
    goto LABEL_23;
  AutoFortificationButtonComponent__Init(v26, eventId, v28, 0LL);
}


void __fastcall EventFortificationManager__DestroyList(EventFortificationManager_o *this, const MethodInfo *method)
{
  FortificationAssetManager_o *assetManager; // x0
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  UnityEngine_Object_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_Object_o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  UnityEngine_Object_o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_Object_o *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x21
  UnityEngine_Object_o *v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x21
  EventFortificationManager___c_c *v61; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_0; // x22
  Il2CppObject *v64; // x23
  struct EventFortificationManager___c_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  BattleServantConfConponent_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v80; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v82; // x0
  struct EventFortificationManager___c_StaticFields *v83; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_1; // x21
  Il2CppObject *v85; // x22
  struct EventFortificationManager___c_StaticFields *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v93; // x20
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7

  if ( (byte_42B1DBF & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_EventFortificationWorkManager___ctor__);
    sub_B52984(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_EventFortificationManager___c__DestroyList_b__36_0__);
    sub_B52984(&Method_EventFortificationManager___c__DestroyList_b__36_1__);
    sub_B52984(&EventFortificationManager___c_TypeInfo);
    byte_42B1DBF = 1;
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
    v7 = (UnityEngine_Component_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_80;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    *p_fortificationCamera = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.fortificationCamera, 0LL, v9, v10, v11, v12, v13, v14);
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
    v7 = (UnityEngine_Component_o *)*p_organizationPanel;
    if ( !*p_organizationPanel )
      goto LABEL_80;
    v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v17, 0LL);
    *p_organizationPanel = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.organizationPanel, 0LL, v18, v19, v20, v21, v22, v23);
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
    v7 = (UnityEngine_Component_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_80;
    v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v26, 0LL);
    *p_fortificationConfirmDialog = 0LL;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
      0LL,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
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
    v7 = (UnityEngine_Component_o *)*p_fortificationAutomaticDialog;
    if ( !*p_fortificationAutomaticDialog )
      goto LABEL_80;
    v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v35, 0LL);
    *p_fortificationAutomaticDialog = 0LL;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.fortificationAutomaticDialog,
      0LL,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
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
    v7 = (UnityEngine_Component_o *)*p_eventFortificationListViewManager;
    if ( !*p_eventFortificationListViewManager )
      goto LABEL_80;
    v44 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v44, 0LL);
    *p_eventFortificationListViewManager = 0LL;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.eventFortificationListViewManager,
      0LL,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
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
    v7 = (UnityEngine_Component_o *)*p_autoOrganizationBtn;
    if ( *p_autoOrganizationBtn )
    {
      v53 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(v53, 0LL);
      *p_autoOrganizationBtn = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.autoOrganizationBtn, 0LL, v54, v55, v56, v57, v58, v59);
      goto LABEL_59;
    }
LABEL_80:
    sub_B52A5C(v7, v6);
  }
LABEL_59:
  eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
  if ( eventFortificationWorkManagers )
  {
    v61 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v61 = EventFortificationManager___c_TypeInfo;
    }
    static_fields = v61->static_fields;
    _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v61);
        static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v64 = (Il2CppObject *)static_fields->__9;
      _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__36_0,
        v64,
        Method_EventFortificationManager___c__DestroyList_b__36_0__,
        (const MethodInfo_2627780 *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v65 = EventFortificationManager___c_TypeInfo->static_fields;
      v65->__9__36_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v65->__9__36_0,
        (System_Int32_array **)_9__36_0,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
      (System_Action_T__o *)_9__36_0,
      (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v72,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v72;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkManagers,
      (System_Int32_array **)v72,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkMiniManagers;
  v80 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers )
  {
    v82 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v82 = EventFortificationManager___c_TypeInfo;
    }
    v83 = v82->static_fields;
    _9__36_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v83->__9__36_1;
    if ( !_9__36_1 )
    {
      if ( (BYTE3(v82->vtable._0_Equals.methodPtr) & 4) != 0 && !v82->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v82);
        v83 = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v85 = (Il2CppObject *)v83->__9;
      _9__36_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__36_1,
        v85,
        Method_EventFortificationManager___c__DestroyList_b__36_1__,
        (const MethodInfo_2627780 *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v86 = EventFortificationManager___c_TypeInfo->static_fields;
      v86->__9__36_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_1;
      sub_B52920(
        (BattleServantConfConponent_o *)&v86->__9__36_1,
        (System_Int32_array **)_9__36_1,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      v80,
      (System_Action_T__o *)_9__36_1,
      (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v93 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v93,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    p_eventFortificationWorkMiniManagers->klass = (BattleServantConfConponent_c *)v93;
    sub_B52920(p_eventFortificationWorkMiniManagers, (System_Int32_array **)v93, v94, v95, v96, v97, v98, v99);
  }
}


void __fastcall EventFortificationManager__Init(
        EventFortificationManager_o *this,
        int32_t eventId,
        int32_t slotIndex,
        UnityEngine_Transform_o *uiParent,
        const MethodInfo *method)
{
  __int64 v9; // x20
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1
  BattleServantConfConponent_o *p_assetManager; // x19
  FortificationAssetManager_o *klass; // x21
  struct FortificationAssetManager_o *assetManager; // t1
  FortificationAssetManager_o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int32_t v42; // w19
  System_Action_o *v43; // x22

  if ( (byte_42B1DB8 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&FortificationAssetManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_B52984(&Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__);
    sub_B52984(&EventFortificationManager___c__DisplayClass28_0_TypeInfo);
    byte_42B1DB8 = 1;
  }
  v9 = sub_B52A54(EventFortificationManager___c__DisplayClass28_0_TypeInfo);
  EventFortificationManager___c__DisplayClass28_0___ctor((EventFortificationManager___c__DisplayClass28_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_DWORD *)(v9 + 16) = eventId;
  *(_QWORD *)(v9 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = uiParent;
  *(_DWORD *)(v9 + 32) = slotIndex;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)uiParent, v18, v19, v20, v21, v22, v23);
  this->fields.eventId = *(_DWORD *)(v9 + 16);
  this->fields.slotIndex = *(_DWORD *)(v9 + 32);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v24;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkManagers,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  EventFortificationManager__InitFortificationWorkMini(this, v31);
  assetManager = this->fields.assetManager;
  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  klass = assetManager;
  if ( !assetManager )
  {
    v35 = (FortificationAssetManager_o *)sub_B52A54(FortificationAssetManager_TypeInfo);
    FortificationAssetManager___ctor(v35, 0LL);
    p_assetManager->klass = (BattleServantConfConponent_c *)v35;
    sub_B52920(p_assetManager, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    klass = (FortificationAssetManager_o *)p_assetManager->klass;
  }
  v42 = *(_DWORD *)(v9 + 16);
  v43 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v9,
    Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__,
    0LL);
  if ( !klass )
LABEL_8:
    sub_B52A5C(v10, v11);
  FortificationAssetManager__GetAssets(klass, v42, v43, 0LL);
}


void __fastcall EventFortificationManager__InitDialog(EventFortificationManager_o *this, const MethodInfo *method)
{
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationConfirmDialog_k__BackingField; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v17; // x2
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  struct FortificationAssetManager_o *v20; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationAutomaticDialog_k__BackingField; // x21
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_GameObject_o *v29; // x0
  const MethodInfo *v30; // x2

  if ( (byte_42B1DB5 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1DB5 = 1;
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
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
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       fortificationConfirmDialog_k__BackingField,
                                       (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_28;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v5,
                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    *p_fortificationConfirmDialog = (struct FortificationConfirmDialogComponent_o *)Component_srcLineSprite;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.fortificationConfirmDialog,
      Component_srcLineSprite,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v5 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v17);
  }
  v5 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
  if ( !*p_fortificationConfirmDialog )
    goto LABEL_28;
  FortificationConfirmDialogComponent__Init((FortificationConfirmDialogComponent_o *)v5, this->fields.eventId, 0LL);
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationAutomaticDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v20 = this->fields.assetManager;
    if ( v20 )
    {
      fortificationAutomaticDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v20->fields._fortificationAutomaticDialog_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         fortificationAutomaticDialog_k__BackingField,
                                         (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v22 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v5,
                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
        *p_fortificationAutomaticDialog = (struct FortificationAutomaticDialogComponent_o *)v22;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.fortificationAutomaticDialog,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        v5 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
        if ( *p_fortificationAutomaticDialog )
        {
          v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v29, v30);
          goto LABEL_26;
        }
      }
    }
LABEL_28:
    sub_B52A5C(v5, v6);
  }
LABEL_26:
  v5 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
  if ( !*p_fortificationAutomaticDialog )
    goto LABEL_28;
  BaseDialog__Init((BaseDialog_o *)v5, 0LL);
}


void __fastcall EventFortificationManager__InitFortificationWorkMini(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v4; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v6; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__25_0; // x21
  Il2CppObject *v9; // x22
  struct EventFortificationManager___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42B1DB7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_EventFortificationWorkManager___ctor__);
    sub_B52984(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkManager__get_Count__);
    sub_B52984(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_B52984(&Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__);
    sub_B52984(&EventFortificationManager___c_TypeInfo);
    byte_42B1DB7 = 1;
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (BattleServantConfConponent_o *)&this->fields.eventFortificationWorkMiniManagers;
  v4 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers && v4->fields._size >= 1 )
  {
    v6 = EventFortificationManager___c_TypeInfo;
    if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v6 = EventFortificationManager___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__25_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__25_0,
        v9,
        Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__,
        (const MethodInfo_2627780 *)Method_System_Action_EventFortificationWorkManager___ctor__);
      v10 = EventFortificationManager___c_TypeInfo->static_fields;
      v10->__9__25_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__25_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v10->__9__25_0,
        (System_Int32_array **)_9__25_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      v4,
      (System_Action_T__o *)_9__25_0,
      (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  p_eventFortificationWorkMiniManagers->klass = (BattleServantConfConponent_c *)v17;
  sub_B52920(p_eventFortificationWorkMiniManagers, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall EventFortificationManager__InitListViewPanel(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationListViewPanel_k__BackingField; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v17; // x2

  if ( (byte_42B1DB6 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1DB6 = 1;
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(eventFortificationListViewManager, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
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
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       eventFortificationListViewPanel_k__BackingField,
                                       (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v5,
                                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___),
          *p_eventFortificationListViewManager = (struct EventFortificationListViewManager_o *)Component_srcLineSprite,
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.eventFortificationListViewManager,
            Component_srcLineSprite,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15),
          (v5 = (UnityEngine_GameObject_o *)*p_eventFortificationListViewManager) == 0LL) )
    {
LABEL_15:
      sub_B52A5C(v5, v6);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v17);
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
    sub_B52A5C(organizationPanel, method);
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
    sub_B52A5C(this, obj);
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
    sub_B52A5C(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventFortificationManager__OnClickBackBtn(EventFortificationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *organizationPanel; // x0
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x20
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__34_0; // x21
  Il2CppObject *v8; // x22
  struct EventFortificationManager___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42B1DBE & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_EventFortificationWorkManager___ctor__);
    sub_B52984(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__);
    sub_B52984(&EventFortificationManager___c_TypeInfo);
    byte_42B1DBE = 1;
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
    v8 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__34_0,
      v8,
      Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__,
      (const MethodInfo_2627780 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v9 = EventFortificationManager___c_TypeInfo->static_fields;
    v9->__9__34_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__34_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v9->__9__34_0,
      (System_Int32_array **)_9__34_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !eventFortificationWorkManagers
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
          (System_Action_T__o *)_9__34_0,
          (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__),
        (organizationPanel = this->fields.eventFortificationWorkManagers) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)organizationPanel,
          (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__),
        (organizationPanel = this->fields.eventFortificationListViewManager) == 0LL) )
  {
LABEL_21:
    sub_B52A5C(organizationPanel, v3);
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

  if ( (byte_42B1DBD & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1DBD = 1;
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
    sub_B52A5C(assetManager, v3);
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
    sub_B52A5C(mainPanel, method);
  UnityEngine_GameObject__SetActive(mainPanel, 1, 0LL);
}


void __fastcall EventFortificationManager__SelectFortificationServant(
        EventFortificationManager_o *this,
        EventFortificationWorkItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v22; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21

  if ( (byte_42B1DBB & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__);
    sub_B52984(&EventFortificationManager___c__DisplayClass31_0_TypeInfo);
    byte_42B1DBB = 1;
  }
  v5 = sub_B52A54(EventFortificationManager___c__DisplayClass31_0_TypeInfo);
  EventFortificationManager___c__DisplayClass31_0___ctor((EventFortificationManager___c__DisplayClass31_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = item;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)item, v14, v15, v16, v17, v18, v19);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_10;
  organizationPanel->fields.isTouchEnabled = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v22 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
  v24 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B52A5C(v6, v7);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v24, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationManager__SetFortificationWork(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  UIAtlas_o *UIAtlas; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  _BOOL8 v7; // x0
  __int64 v8; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationWorkObj_k__BackingField; // x21
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  int32_t eventId; // w23
  EventFortificationWorkManager_o *v16; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v17; // x24
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x6
  __int64 v21; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_Component_o *organizationPanel; // x0
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_Transform_o *v29; // x23
  __int64 v30; // x0
  __int64 v31; // x1
  int v32; // s0
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x1
  UnityEngine_Transform_o *v37; // x0
  __int64 v38; // x1
  UnityEngine_GameObject_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x1
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x0
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B1DB9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_EventFortificationWorkItem___ctor__);
    sub_B52984(&System_Action_EventFortificationWorkItem__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_B52984(&Method_EventFortificationManager_SelectFortificationServant__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_UnityEngine_Resources_Load_UIAtlas___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_13697/*"Terminal/Atlas/TerminalAtlas"*/);
    byte_42B1DB9 = 1;
  }
  entities = 0LL;
  memset(&v44, 0, sizeof(v44));
  UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
              (System_String_o *)StringLiteral_13697/*"Terminal/Atlas/TerminalAtlas"*/,
              (const MethodInfo_1F7452C *)Method_UnityEngine_Resources_Load_UIAtlas___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !EventFortificationMaster__TryGetEntityList(
          (EventFortificationMaster_o *)Instance,
          &entities,
          this->fields.eventId,
          v6) )
    return;
  Instance = (DataManager_o *)entities;
  if ( !entities )
LABEL_39:
    sub_B52A5C(Instance, v5);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v44 = v43;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v44,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v7 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_B52A5C(v7, v8);
    current = (EventFortificationEntity_o *)v44.fields.current;
    eventFortificationWorkObj_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._eventFortificationWorkObj_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        eventFortificationWorkObj_k__BackingField,
                                        (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v12 )
      sub_B52A5C(0LL, v13);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v12,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v16 = (EventFortificationWorkManager_o *)Component_srcLineSprite;
    v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v17,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      (const MethodInfo_2627780 *)Method_System_Action_EventFortificationWorkItem___ctor__);
    if ( !v16 )
      sub_B52A5C(v18, v19);
    EventFortificationWorkManager__SetServantFortificationWork(
      v16,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v17,
      this->fields.organizationPanel,
      UIAtlas,
      v20);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
    organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
    if ( !organizationPanel )
      sub_B52A5C(0LL, v21);
    v24 = UnityEngine_Component__get_gameObject(organizationPanel, 0LL);
    if ( !v24 )
      sub_B52A5C(0LL, v25);
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v24, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
    if ( !v27 )
      sub_B52A5C(0LL, v28);
    v29 = UnityEngine_GameObject__get_transform(v27, 0LL);
    *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_one(0LL);
    if ( !v29 )
      sub_B52A5C(v30, v31);
    UnityEngine_Transform__set_localScale(v29, *(UnityEngine_Vector3_o *)&v32, 0LL);
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
    if ( !v35 )
      sub_B52A5C(0LL, v36);
    v37 = UnityEngine_GameObject__get_transform(v35, 0LL);
    if ( !current )
      sub_B52A5C(v37, v38);
    if ( !v37 )
      sub_B52A5C(0LL, v38);
    v46.fields.y = (float)current->fields.y;
    v46.fields.x = (float)current->fields.x;
    v46.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v37, v46, 0LL);
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
    if ( !v39 )
      sub_B52A5C(0LL, v40);
    UnityEngine_GameObject__SetActive(v39, 1, 0LL);
    eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
    if ( !eventFortificationWorkManagers )
      sub_B52A5C(0LL, v41);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventFortificationWorkManagers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void __fastcall EventFortificationManager__SetFortificationWorkMini(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationWorkMiniObj_k__BackingField; // x20
  UnityEngine_GameObject_o *v11; // x0
  __int64 v12; // x1
  EventFortificationWorkManager_o *Component_srcLineSprite; // x20
  int32_t eventId; // w22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x6
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // x0
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B1DBA & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_EventFortificationWorkItem___ctor__);
    sub_B52984(&System_Action_EventFortificationWorkItem__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_B52984(&Method_EventFortificationManager_SelectFortificationServant__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1DBA = 1;
  }
  entities = 0LL;
  memset(&v30, 0, sizeof(v30));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_31;
  if ( !EventFortificationMaster__TryGetEntityList(
          (EventFortificationMaster_o *)Instance,
          &entities,
          this->fields.eventId,
          v5) )
    return;
  Instance = (DataManager_o *)entities;
  if ( !entities )
LABEL_31:
    sub_B52A5C(Instance, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v30,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v6 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_B52A5C(v6, v7);
    current = (EventFortificationEntity_o *)v30.fields.current;
    eventFortificationWorkMiniObj_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._eventFortificationWorkMiniObj_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        eventFortificationWorkMiniObj_k__BackingField,
                                        (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      sub_B52A5C(0LL, v12);
    Component_srcLineSprite = (EventFortificationWorkManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v11,
                                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v15,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      (const MethodInfo_2627780 *)Method_System_Action_EventFortificationWorkItem___ctor__);
    if ( !Component_srcLineSprite )
      sub_B52A5C(v16, v17);
    EventFortificationWorkManager__SetServantFortificationWork(
      Component_srcLineSprite,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v15,
      0LL,
      0LL,
      v18);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    EventFortificationManager__LocateObjectToFotificationPanel(this, gameObject, v20);
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    if ( !v21 )
      sub_B52A5C(0LL, v22);
    transform = UnityEngine_GameObject__get_transform(v21, 0LL);
    if ( !current )
      sub_B52A5C(transform, v24);
    if ( !transform )
      sub_B52A5C(0LL, v24);
    v32.fields.y = (float)current->fields.rewardSceneY;
    v32.fields.x = (float)current->fields.rewardSceneX;
    v32.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v32, 0LL);
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    if ( !v25 )
      sub_B52A5C(0LL, v26);
    UnityEngine_GameObject__SetActive(v25, 1, 0LL);
    eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
    if ( !eventFortificationWorkMiniManagers )
      sub_B52A5C(0LL, v27);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventFortificationWorkMiniManagers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void __fastcall EventFortificationManager__SetFotificationOrganizationPanel(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *fortificationCamera_k__BackingField; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v17; // x2
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  struct FortificationAssetManager_o *v20; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *organizationPanel_k__BackingField; // x21
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_GameObject_o *v29; // x1
  const MethodInfo *v30; // x2

  if ( (byte_42B1DB3 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1DB3 = 1;
  }
  p_fortificationCamera = &this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationCamera, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
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
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       fortificationCamera_k__BackingField,
                                       (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_26;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v5,
                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    *p_fortificationCamera = (struct MapCamera_o *)Component_srcLineSprite;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.fortificationCamera,
      Component_srcLineSprite,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v5 = (UnityEngine_GameObject_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v17);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(organizationPanel, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v20 = this->fields.assetManager;
    if ( v20 )
    {
      organizationPanel_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v20->fields._organizationPanel_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         organizationPanel_k__BackingField,
                                         (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v22 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v5,
                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
        *p_organizationPanel = (struct FortificationOrganizationPanelComponent_o *)v22;
        sub_B52920((BattleServantConfConponent_o *)&this->fields.organizationPanel, v22, v23, v24, v25, v26, v27, v28);
        v5 = (UnityEngine_GameObject_o *)*p_organizationPanel;
        if ( *p_organizationPanel )
        {
          v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v29, v30);
          return;
        }
      }
    }
LABEL_26:
    sub_B52A5C(v5, v6);
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
  int64_t Instance; // x0
  __int64 v8; // x1
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x22
  struct SetSvtInfo_array *setSvtInfos; // x8
  int max_length; // w9
  int v12; // w11
  bool v13; // w10
  SetSvtInfo_o *v14; // x12
  __int64 v16; // x0
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B1DC0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1DC0 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
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
    sub_B52A5C(Instance, v8);
  max_length = setSvtInfos->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = 0;
  v13 = 0;
  do
  {
    if ( v12 >= (unsigned int)max_length )
    {
      v16 = sub_B52A88(Instance);
      sub_B52A28(v16, 0LL);
    }
    v14 = setSvtInfos->m_Items[v12];
    if ( !v14 )
      goto LABEL_20;
    ++v12;
    if ( v14->fields.position == position )
      v13 = 1;
  }
  while ( v12 < max_length );
  return v13;
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_0(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  FortificationAutomaticDialogComponent_o *fortificationAutomaticDialog; // x0
  __int64 v4; // x1
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  FortificationAutomaticDialogComponent_o *v6; // x20
  System_Action_o *v7; // x21
  System_Action_o *v8; // x22

  if ( (byte_42B1DC1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventFortificationManager__CreateOrganizationUI_b__22_1__);
    sub_B52984(&Method_EventFortificationManager__CreateOrganizationUI_b__22_2__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1DC1 = 1;
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
        v6 = this->fields.fortificationAutomaticDialog,
        v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v7,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_1__,
          0LL),
        v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_2__,
          0LL),
        !v6) )
  {
LABEL_10:
    sub_B52A5C(fortificationAutomaticDialog, v4);
  }
  FortificationAutomaticDialogComponent__Open(v6, v7, v8, 0LL);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_1(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkManagers; // x20
  EventFortificationManager___c_c *v4; // x0
  struct EventFortificationManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__22_3; // x21
  Il2CppObject *v7; // x22
  struct EventFortificationManager___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // x19
  struct EventFortificationManager___c_StaticFields *v16; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__22_4; // x20
  Il2CppObject *v18; // x21
  struct EventFortificationManager___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42B1DC2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_EventFortificationWorkManager___ctor__);
    sub_B52984(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_B52984(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__);
    sub_B52984(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__);
    sub_B52984(&EventFortificationManager___c_TypeInfo);
    byte_42B1DC2 = 1;
  }
  eventFortificationWorkManagers = this->fields.eventFortificationWorkManagers;
  v4 = EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v4 = EventFortificationManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__22_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__22_3;
  if ( !_9__22_3 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__22_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__22_3,
      v7,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__,
      (const MethodInfo_2627780 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v8 = EventFortificationManager___c_TypeInfo->static_fields;
    v8->__9__22_3 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_3;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__22_3,
      (System_Int32_array **)_9__22_3,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_22;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkManagers,
    (System_Action_T__o *)_9__22_3,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v4 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v4 = EventFortificationManager___c_TypeInfo;
  }
  v16 = v4->static_fields;
  _9__22_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v16->__9__22_4;
  if ( !_9__22_4 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v16 = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)v16->__9;
    _9__22_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__22_4,
      v18,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__,
      (const MethodInfo_2627780 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v19 = EventFortificationManager___c_TypeInfo->static_fields;
    v19->__9__22_4 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_4;
    sub_B52920(
      (BattleServantConfConponent_o *)&v19->__9__22_4,
      (System_Int32_array **)_9__22_4,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !eventFortificationWorkMiniManagers )
LABEL_22:
    sub_B52A5C(v4, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__22_4,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_2(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8

  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    sub_B52A5C(this, method);
  organizationPanel->fields.isTouchEnabled = 1;
}


void __fastcall EventFortificationManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventFortificationManager___c_StaticFields *static_fields; // x0

  if ( (byte_42AD8D0 & 1) == 0 )
  {
    sub_B52984(&EventFortificationManager___c_TypeInfo);
    byte_42AD8D0 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventFortificationManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventFortificationManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventFortificationManager___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CloseServantFortificationList_b__32_2(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B52A5C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_3(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B52A5C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_4(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B52A5C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42AD8D4 & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD8D4 = 1;
  }
  if ( !data )
    sub_B52A5C(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42AD8D5 & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD8D5 = 1;
  }
  if ( !data )
    sub_B52A5C(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___InitFortificationWorkMini_b__25_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42AD8D1 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD8D1 = 1;
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
      sub_B52A5C(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
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

  if ( (byte_42AD8D3 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD8D3 = 1;
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
      sub_B52A5C(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___SelectFortificationServant_b__31_1(
        EventFortificationManager___c_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_42AD8D2 & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD8D2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v4 )
    sub_B52A5C(Instance, v3);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  struct EventFortificationManager_o *v5; // x8
  struct EventFortificationManager_o **p__4__this; // x22
  UnityEngine_GameObject_o *v7; // x0
  struct EventFortificationManager_o *v8; // x8
  int32_t v9; // w20
  UISprite_o *organizationBtnSp; // x21
  struct EventFortificationManager_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventFortificationManager_o *v13; // x8
  int32_t eventId; // w20
  UISprite_o *maskSp; // x21
  UILabel_o *maskLb; // x20
  struct EventFortificationManager_o *v17; // x8
  struct UITexture_o *fortificationSlotBg; // x20

  if ( (byte_42AD8D6 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_EventMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_17172/*"btn_txt_event_organization"*/);
    sub_B52984(&StringLiteral_6469/*"FORTIFICATION_EVENT_END_MSG"*/);
    sub_B52984(&StringLiteral_17088/*"btn_bg_event_organization"*/);
    sub_B52984(&StringLiteral_18738/*"event_tab_bg_mask"*/);
    byte_42AD8D6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    this->fields.eventId,
                                                                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
                  v13 = this->fields.__4__this;
                  if ( v13 )
                  {
                    eventId = this->fields.eventId;
                    maskSp = v13->fields.maskSp;
                    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AtlasManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    }
                    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)AtlasManager__SetEventUI_28377220(eventId, maskSp, (System_String_o *)StringLiteral_18738/*"event_tab_bg_mask"*/, 0LL);
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
                            Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get((System_String_o *)StringLiteral_6469/*"FORTIFICATION_EVENT_END_MSG"*/, 0LL);
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
    sub_B52A5C(Master_WarQuestSelectionMaster, v4);
  }
  p__4__this = &this->fields.__4__this;
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v5->fields.maskSp;
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
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)GameObjectExtensions__GetParent(
                                                                                    v7,
                                                                                    0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                    0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_54;
  v9 = this->fields.eventId;
  organizationBtnSp = v8->fields.organizationBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)AtlasManager__SetEventUI_28377220(
                                                                                    v9,
                                                                                    organizationBtnSp,
                                                                                    (System_String_o *)StringLiteral_17088/*"btn_bg_event_organization"*/,
                                                                                    0LL);
  if ( !*p__4__this )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)AtlasManager__SetEventUI_28377220(
                                                                                    this->fields.eventId,
                                                                                    (*p__4__this)->fields.organizationBtnTxtSp,
                                                                                    (System_String_o *)StringLiteral_17172/*"btn_txt_event_organization"*/,
                                                                                    0LL);
LABEL_45:
  v17 = *p__4__this;
  if ( !*p__4__this )
    goto LABEL_54;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v17->fields.assetManager;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  fortificationSlotBg = v17->fields.fortificationSlotBg;
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
  struct EventFortificationManager_o *_4__this; // x8
  struct EventFortificationManager_o *v4; // x24
  EventFortificationListViewManager_o *eventFortificationListViewManager; // x20
  int32_t eventId; // w21
  FortificationConfirmDialogComponent_o *fortificationConfirmDialog; // x22
  EventFortificationWorkItem_o *item; // x23
  System_Action_bool__UserServantEntity__o *v9; // x25
  struct EventFortificationManager_o *v10; // x8
  EventFortificationListViewManager_o *v11; // x19
  void *static_fields; // x8
  System_Action_o *v13; // x20
  Il2CppObject *v14; // x21
  struct EventFortificationManager___c_StaticFields *v15; // x0

  v2 = this;
  if ( (byte_42AD8D7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_bool__UserServantEntity___ctor__);
    sub_B52984(&System_Action_bool__UserServantEntity__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventFortificationManager_CloseServantFortificationList__);
    sub_B52984(&Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_B52984(&EventFortificationManager___c_TypeInfo);
    byte_42AD8D7 = 1;
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
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_19;
  eventFortificationListViewManager = v4->fields.eventFortificationListViewManager;
  eventId = v4->fields.eventId;
  fortificationConfirmDialog = v4->fields.fortificationConfirmDialog;
  item = v2->fields.item;
  v9 = (System_Action_bool__UserServantEntity__o *)sub_B52A54(System_Action_bool__UserServantEntity__TypeInfo);
  System_Action_bool__UserServantEntity____ctor(
    v9,
    (Il2CppObject *)v4,
    Method_EventFortificationManager_CloseServantFortificationList__,
    (const MethodInfo_2633B18 *)Method_System_Action_bool__UserServantEntity___ctor__);
  if ( !eventFortificationListViewManager )
    goto LABEL_19;
  EventFortificationListViewManager__CreateList(
    eventFortificationListViewManager,
    eventId,
    fortificationConfirmDialog,
    item,
    v9,
    0LL);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_19;
  v11 = v10->fields.eventFortificationListViewManager;
  this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)EventFortificationManager___c_TypeInfo;
  }
  static_fields = this[5].fields.item;
  v13 = (System_Action_o *)*((_QWORD *)static_fields + 4);
  if ( !v13 )
  {
    if ( (BYTE3(this[9].fields.__4__this) & 4) != 0 && !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v14 = *(Il2CppObject **)static_fields;
    v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v13, v14, Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, 0LL);
    v15 = EventFortificationManager___c_TypeInfo->static_fields;
    v15->__9__31_1 = v13;
    sub_B52920(&v15->__9__31_1);
  }
  if ( !v11 )
LABEL_19:
    sub_B52A5C(this, method);
  EventFortificationListViewManager__SetMode_28458044(v11, 2, v13, 0LL);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct EventFortificationManager_o *_4__this; // x8
  struct EventFortificationManager_o *v6; // x8
  struct EventFortificationManager_o *v7; // x8
  struct EventFortificationManager_o *v8; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *eventFortificationWorkManagers; // x20
  void *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x21
  Il2CppObject *v12; // x22
  struct EventFortificationManager___c_StaticFields *v13; // x0
  struct EventFortificationManager_o *v14; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *eventFortificationWorkMiniManagers; // x19
  void *v16; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v17; // x20
  Il2CppObject *v18; // x21
  struct EventFortificationManager___c_StaticFields *v19; // x0
  CommonUI_o *v20; // x19

  v2 = this;
  if ( (byte_42AD8D8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_EventFortificationWorkManager___ctor__);
    sub_B52984(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__);
    sub_B52984(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__);
    sub_B52984(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    sub_B52984(&EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_B52984(&StringLiteral_16551/*"ar200"*/);
    byte_42AD8D8 = 1;
  }
  if ( v2->fields.servantData )
  {
    v3 = Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__;
    if ( (*((_BYTE *)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                  v4,
                                                                  (System_String_o *)StringLiteral_16551/*"ar200"*/,
                                                                  0LL);
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)_4__this->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_39;
  EventFortificationListViewManager__InitBackListView((EventFortificationListViewManager_o *)this, 0LL);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v6->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_39;
  EventFortificationListViewManager__DestroyList((EventFortificationListViewManager_o *)this, 0LL);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v7->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
  if ( !this )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_39;
  eventFortificationWorkManagers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v8->fields.eventFortificationWorkManagers;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  }
  static_fields = this[5].fields.__4__this;
  v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)static_fields + 5);
  if ( !v11 )
  {
    if ( (BYTE3(this[9].fields.servantData) & 4) != 0 && !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v12 = *(Il2CppObject **)static_fields;
    v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v11,
      v12,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__,
      (const MethodInfo_2627780 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v13 = EventFortificationManager___c_TypeInfo->static_fields;
    v13->__9__32_1 = (struct System_Action_EventFortificationWorkManager__o *)v11;
    sub_B52920(&v13->__9__32_1);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_39;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)v11,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_39;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v14->fields.eventFortificationWorkMiniManagers;
  if ( (BYTE3(EventFortificationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  }
  v16 = this[5].fields.__4__this;
  v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)v16 + 6);
  if ( !v17 )
  {
    if ( (BYTE3(this[9].fields.servantData) & 4) != 0 && !LODWORD(this[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      v16 = EventFortificationManager___c_TypeInfo->static_fields;
    }
    v18 = *(Il2CppObject **)v16;
    v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v17,
      v18,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__,
      (const MethodInfo_2627780 *)Method_System_Action_EventFortificationWorkManager___ctor__);
    v19 = EventFortificationManager___c_TypeInfo->static_fields;
    v19->__9__32_2 = (struct System_Action_EventFortificationWorkManager__o *)v17;
    sub_B52920(&v19->__9__32_2);
  }
  if ( !eventFortificationWorkMiniManagers )
    goto LABEL_39;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)v17,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  this = (EventFortificationManager___c__DisplayClass32_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (CommonUI_o *)this;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v20 )
LABEL_39:
    sub_B52A5C(this, method);
  CommonUI__maskFadein(v20, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}