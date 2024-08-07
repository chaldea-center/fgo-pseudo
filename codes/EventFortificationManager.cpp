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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v19; // x8
  CommonUI_o *v20; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_4A02852 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, requestFinish);
    sub_1B64A00(&AvalonSceneManager_TypeInfo, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B64A00(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v8);
    sub_1B64A00(&EventFortificationManager___c__DisplayClass32_0_TypeInfo, v9);
    byte_4A02852 = 1;
  }
  v10 = sub_1B64C4C(EventFortificationManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 16) = servantData;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)servantData, v13, v14);
  *(_QWORD *)(v10 + 24) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)this, v15, v16);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = AvalonSceneManager_TypeInfo;
  v20 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v19 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
  v22 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v10,
    (intptr_t)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
    0LL);
  if ( !v20 )
LABEL_9:
    sub_1B64C5C(v11, v12);
  CommonUI__maskFadeout(v20, 1, DEFAULT_FADE_TIME, v22, 0LL);
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
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Transform_o *v19; // x21
  AutoFortificationButtonComponent_o *v20; // x20
  int32_t eventId; // w21
  System_Action_o *v22; // x22

  if ( (byte_4A0284A & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, parent);
    sub_1B64A00(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, v5);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___, v6);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v8);
    byte_4A0284A = 1;
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
                           (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    *p_autoOrganizationBtn = (struct AutoFortificationButtonComponent_o *)Component_object;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.autoOrganizationBtn,
      (int32_t)Component_object,
      v16,
      v17);
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
    v18 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F9826 )
    {
      transform = sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v12);
      byte_49F9826 = 1;
    }
    if ( !v18 )
      goto LABEL_25;
    UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (__int64)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    v19 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F9821 )
    {
      transform = sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v12);
      byte_49F9821 = 1;
    }
    if ( !v19
      || (UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
          (transform = (__int64)*p_autoOrganizationBtn) == 0)
      || (transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0 )
    {
LABEL_25:
      sub_1B64C5C(transform, v12);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  v20 = this->fields.autoOrganizationBtn;
  eventId = this->fields.eventId;
  v22 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__,
    0LL);
  if ( !v20 )
    goto LABEL_25;
  AutoFortificationButtonComponent__Init(v20, eventId, v22, 0LL);
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
  int32_t v17; // w2
  int32_t v18; // w3
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  UnityEngine_Object_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_Object_o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  UnityEngine_Object_o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_Object_o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x21
  UnityEngine_Object_o *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x21
  EventFortificationManager___c_c *v45; // x0
  System_Action_object__o *_9__36_0; // x22
  Il2CppObject *v47; // x23
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_Collections_Generic_List_object__o *v51; // x21
  int32_t v52; // w2
  int32_t v53; // w3
  ServantStatusBattleListViewItem_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v55; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v57; // x0
  System_Action_object__o *_9__36_1; // x21
  Il2CppObject *v59; // x22
  struct EventFortificationManager___c_StaticFields *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_Collections_Generic_List_object__o *v63; // x20
  int32_t v64; // w2
  int32_t v65; // w3

  if ( (byte_4A02855 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v5);
    sub_1B64A00(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v6);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64A00(&Method_EventFortificationManager___c__DestroyList_b__36_0__, v8);
    sub_1B64A00(&Method_EventFortificationManager___c__DestroyList_b__36_1__, v9);
    sub_1B64A00(&EventFortificationManager___c_TypeInfo, v10);
    byte_4A02855 = 1;
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
    UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
    *p_fortificationCamera = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.fortificationCamera, 0, v17, v18);
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
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(v21, 0LL);
    *p_organizationPanel = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.organizationPanel, 0, v22, v23);
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
    v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(v26, 0LL);
    *p_fortificationConfirmDialog = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.fortificationConfirmDialog, 0, v27, v28);
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
    v31 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(v31, 0LL);
    *p_fortificationAutomaticDialog = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.fortificationAutomaticDialog, 0, v32, v33);
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
    v36 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(v36, 0LL);
    *p_eventFortificationListViewManager = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationListViewManager, 0, v37, v38);
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
      v41 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69137476(v41, 0LL);
      *p_autoOrganizationBtn = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.autoOrganizationBtn, 0, v42, v43);
      goto LABEL_47;
    }
LABEL_64:
    sub_1B64C5C(v15, v14);
  }
LABEL_47:
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( eventFortificationWorkManagers )
  {
    v45 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v45 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_0 = (System_Action_object__o *)v45->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = EventFortificationManager___c_TypeInfo;
      }
      v47 = (Il2CppObject *)v45->static_fields->__9;
      _9__36_0 = (System_Action_object__o *)sub_1B64C4C(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(_9__36_0, v47, Method_EventFortificationManager___c__DestroyList_b__36_0__, 0LL);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_0;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v49, v50);
    }
    System_Collections_Generic_List_object___ForEach(
      eventFortificationWorkManagers,
      (System_Action_T__o *)_9__36_0,
      (const MethodInfo_34B0AA8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v51 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v51,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v51;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationWorkManagers,
      (int32_t)v51,
      v52,
      v53);
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationWorkMiniManagers;
  v55 = (System_Collections_Generic_List_object__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers )
  {
    v57 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v57 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_1 = (System_Action_object__o *)v57->static_fields->__9__36_1;
    if ( !_9__36_1 )
    {
      if ( !v57->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v57);
        v57 = EventFortificationManager___c_TypeInfo;
      }
      v59 = (Il2CppObject *)v57->static_fields->__9;
      _9__36_1 = (System_Action_object__o *)sub_1B64C4C(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(_9__36_1, v59, Method_EventFortificationManager___c__DestroyList_b__36_1__, 0LL);
      v60 = EventFortificationManager___c_TypeInfo->static_fields;
      v60->__9__36_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_1;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v60->__9__36_1, (int32_t)_9__36_1, v61, v62);
    }
    System_Collections_Generic_List_object___ForEach(
      v55,
      (System_Action_T__o *)_9__36_1,
      (const MethodInfo_34B0AA8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v63 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v63,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    p_eventFortificationWorkMiniManagers->klass = (ServantStatusBattleListViewItem_c *)v63;
    sub_1B649A4(p_eventFortificationWorkMiniManagers, (int32_t)v63, v64, v65);
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_object__o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x1
  ServantStatusBattleListViewItem_o *p_assetManager; // x19
  FortificationAssetManager_o *klass; // x21
  struct FortificationAssetManager_o *assetManager; // t1
  FortificationAssetManager_o *v28; // x21
  const MethodInfo *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w19
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x3

  if ( (byte_4A0284E & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B64A00(&FortificationAssetManager_TypeInfo, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v10);
    sub_1B64A00(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v11);
    sub_1B64A00(&Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__, v12);
    sub_1B64A00(&EventFortificationManager___c__DisplayClass28_0_TypeInfo, v13);
    byte_4A0284E = 1;
  }
  v14 = sub_1B64C4C(EventFortificationManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_DWORD *)(v14 + 16) = eventId;
  *(_QWORD *)(v14 + 24) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 40) = uiParent;
  *(_DWORD *)(v14 + 32) = slotIndex;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v14 + 40), (int32_t)uiParent, v19, v20);
  this->fields.eventId = *(_DWORD *)(v14 + 16);
  this->fields.slotIndex = *(_DWORD *)(v14 + 32);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v21;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationWorkManagers, (int32_t)v21, v22, v23);
  EventFortificationManager__InitFortificationWorkMini(this, v24);
  assetManager = this->fields.assetManager;
  p_assetManager = (ServantStatusBattleListViewItem_o *)&this->fields.assetManager;
  klass = assetManager;
  if ( !assetManager )
  {
    v28 = (FortificationAssetManager_o *)sub_1B64C4C(FortificationAssetManager_TypeInfo);
    FortificationAssetManager___ctor(v28, v29);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v28;
    sub_1B649A4(p_assetManager, (int32_t)v28, v30, v31);
    klass = (FortificationAssetManager_o *)p_assetManager->klass;
  }
  v32 = *(_DWORD *)(v14 + 16);
  v33 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v14,
    Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__,
    0LL);
  if ( !klass )
LABEL_8:
    sub_1B64C5C(v15, v16);
  FortificationAssetManager__GetAssets(klass, v32, v33, v34);
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
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v17; // x2
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  struct FortificationAssetManager_o *v20; // x8
  Il2CppObject *fortificationAutomaticDialog_k__BackingField; // x21
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_GameObject_o *v25; // x0
  const MethodInfo *v26; // x2

  if ( (byte_4A0284B & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___, method);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___, v3);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    byte_4A0284B = 1;
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
                                       (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v8,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    *p_fortificationConfirmDialog = (struct FortificationConfirmDialogComponent_o *)Component_object;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.fortificationConfirmDialog,
      (int32_t)Component_object,
      v14,
      v15);
    v8 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v17);
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
    v20 = this->fields.assetManager;
    if ( v20 )
    {
      fortificationAutomaticDialog_k__BackingField = (Il2CppObject *)v20->fields._fortificationAutomaticDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         fortificationAutomaticDialog_k__BackingField,
                                         (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        v22 = UnityEngine_GameObject__GetComponent_object_(
                v8,
                (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
        *p_fortificationAutomaticDialog = (struct FortificationAutomaticDialogComponent_o *)v22;
        sub_1B649A4(
          (ServantStatusBattleListViewItem_o *)&this->fields.fortificationAutomaticDialog,
          (int32_t)v22,
          v23,
          v24);
        v8 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
        if ( *p_fortificationAutomaticDialog )
        {
          v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v25, v26);
          goto LABEL_22;
        }
      }
    }
LABEL_24:
    sub_1B64C5C(v8, v9);
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
  ServantStatusBattleListViewItem_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v10; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v12; // x0
  System_Action_object__o *_9__25_0; // x21
  Il2CppObject *v14; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A0284D & 1) == 0 )
  {
    sub_1B64A00(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationWorkManager__get_Count__, v5);
    sub_1B64A00(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v6);
    sub_1B64A00(&Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__, v7);
    sub_1B64A00(&EventFortificationManager___c_TypeInfo, v8);
    byte_4A0284D = 1;
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationWorkMiniManagers;
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
      _9__25_0 = (System_Action_object__o *)sub_1B64C4C(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(
        _9__25_0,
        v14,
        Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__,
        0LL);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__25_0;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v16, v17);
    }
    System_Collections_Generic_List_object___ForEach(
      v10,
      (System_Action_T__o *)_9__25_0,
      (const MethodInfo_34B0AA8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  p_eventFortificationWorkMiniManagers->klass = (ServantStatusBattleListViewItem_c *)v18;
  sub_1B649A4(p_eventFortificationWorkMiniManagers, (int32_t)v18, v19, v20);
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
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4A0284C & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___, method);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v4);
    byte_4A0284C = 1;
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
                                       (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v7
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v7,
                               (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___),
          *p_eventFortificationListViewManager = (struct EventFortificationListViewManager_o *)Component_object,
          sub_1B649A4(
            (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationListViewManager,
            (int32_t)Component_object,
            v12,
            v13),
          (v7 = (UnityEngine_GameObject_o *)*p_eventFortificationListViewManager) == 0LL) )
    {
LABEL_13:
      sub_1B64C5C(v7, v8);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v15);
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
    sub_1B64C5C(organizationPanel, method);
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
  if ( !byte_49F9826 )
  {
    this = (EventFortificationManager_o *)sub_1B64A00(&UnityEngine_Vector3_TypeInfo, obj);
    byte_49F9826 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B64C5C(this, obj);
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
  if ( !byte_49F9826 )
  {
    this = (EventFortificationManager_o *)sub_1B64A00(&UnityEngine_Vector3_TypeInfo, obj);
    byte_49F9826 = 1;
  }
  if ( !v5
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v5,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_8:
    sub_1B64C5C(this, obj);
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
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *v18; // x8
  int32_t size; // w2
  int v20; // w9

  if ( (byte_4A02854 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1B64A00(&Method_EventFortificationManager_OnClickBackBtn__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_1B64A00(&Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, v6);
    sub_1B64A00(&EventFortificationManager___c_TypeInfo, v7);
    byte_4A02854 = 1;
  }
  v8 = Method_EventFortificationManager_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickBackBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B64A18(Method_EventFortificationManager_OnClickBackBtn__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B649E4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
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
    v13 = (System_Action_object__o *)sub_1B64C4C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(v13, v14, Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, 0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Action_EventFortificationWorkManager__o *)v13;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)v13, v16, v17);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_20;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)v13,
    (const MethodInfo_34B0AA8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v18 = this->fields.eventFortificationWorkManagers;
  if ( !v18 )
    goto LABEL_20;
  size = v18->fields._size;
  v20 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0LL);
  organizationPanel = this->fields.eventFortificationListViewManager;
  if ( !organizationPanel )
LABEL_20:
    sub_1B64C5C(organizationPanel, v10);
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

  if ( (byte_4A02853 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventFortificationManager_OnClickOrganizationBtn__, method);
    byte_4A02853 = 1;
  }
  v3 = Method_EventFortificationManager_OnClickOrganizationBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickOrganizationBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B64A18(Method_EventFortificationManager_OnClickOrganizationBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
    sub_1B64C5C(assetManager, v5);
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
    sub_1B64C5C(mainPanel, method);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_4A02851 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, item);
    sub_1B64A00(&AvalonSceneManager_TypeInfo, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64A00(&Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__, v7);
    sub_1B64A00(&EventFortificationManager___c__DisplayClass31_0_TypeInfo, v8);
    byte_4A02851 = 1;
  }
  v9 = sub_1B64C4C(EventFortificationManager___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = item;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)item, v14, v15);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
    0LL);
  if ( !v19 )
LABEL_9:
    sub_1B64C5C(v10, v11);
  CommonUI__maskFadeout(v19, 1, DEFAULT_FADE_TIME, v21, 0LL);
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
  int32_t v51; // w2
  int32_t v52; // w3
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x8
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0284F & 1) == 0 )
  {
    sub_1B64A00(&System_Action_EventFortificationWorkItem__TypeInfo, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventFortificationMaster___, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v6);
    sub_1B64A00(&Method_EventFortificationManager_SelectFortificationServant__, v7);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v10);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v12);
    sub_1B64A00(&Method_UnityEngine_Resources_Load_UIAtlas___, v13);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B64A00(&StringLiteral_13523/*"Terminal/Atlas/TerminalAtlas"*/, v15);
    byte_4A0284F = 1;
  }
  entities = 0LL;
  memset(&v59, 0, sizeof(v59));
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_13523/*"Terminal/Atlas/TerminalAtlas"*/,
             (const MethodInfo_2ECE99C *)Method_UnityEngine_Resources_Load_UIAtlas___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
    sub_1B64C5C(Instance, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v19 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1B64C5C(v19, v20);
    current = (EventFortificationEntity_o *)v59.fields._current;
    eventFortificationWorkObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v24 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkObj_k__BackingField,
            (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v24 )
      sub_1B64C5C(0LL, v25);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v24,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v28 = (EventFortificationWorkManager_o *)Component_object;
    v29 = (System_Action_object__o *)sub_1B64C4C(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_object____ctor(
      v29,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0LL);
    if ( !v28 )
      sub_1B64C5C(v30, v31);
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
      sub_1B64C5C(0LL, v33);
    v36 = UnityEngine_Component__get_gameObject(organizationPanel, 0LL);
    if ( !v36 )
      sub_1B64C5C(0LL, v37);
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v36, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0LL);
    if ( !v39 )
      sub_1B64C5C(0LL, v40);
    v41 = (__int64)UnityEngine_GameObject__get_transform(v39, 0LL);
    v43 = (UnityEngine_Transform_o *)v41;
    if ( !byte_49F9826 )
    {
      v41 = sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v42);
      byte_49F9826 = 1;
    }
    if ( !v43 )
      sub_1B64C5C(v41, v42);
    UnityEngine_Transform__set_localScale(v43, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0LL);
    if ( !v44 )
      sub_1B64C5C(0LL, v45);
    v46 = UnityEngine_GameObject__get_transform(v44, 0LL);
    if ( !current )
      sub_1B64C5C(v46, v47);
    if ( !v46 )
      sub_1B64C5C(0LL, v47);
    v61.fields.y = (float)current->fields.y;
    v61.fields.x = (float)current->fields.x;
    v61.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v46, v61, 0LL);
    v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0LL);
    if ( !v48 )
      sub_1B64C5C(0LL, v49);
    UnityEngine_GameObject__SetActive(v48, 1, 0LL);
    eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
    if ( !eventFortificationWorkManagers )
      sub_1B64C5C(0LL, v50);
    items = eventFortificationWorkManagers->fields._items;
    v55 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkManagers->fields._version;
    if ( !items )
      sub_1B64C5C(eventFortificationWorkManagers, v50);
    size = eventFortificationWorkManagers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkManagers,
        (Il2CppObject *)v28,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &items->obj.klass + size;
      eventFortificationWorkManagers->fields._size = size + 1;
      v57[4] = (Il2CppClass *)v28;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v28, v51, v52);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A02850 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_EventFortificationWorkItem__TypeInfo, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventFortificationMaster___, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v6);
    sub_1B64A00(&Method_EventFortificationManager_SelectFortificationServant__, v7);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v10);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v12);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A02850 = 1;
  }
  entities = 0LL;
  memset(&v46, 0, sizeof(v46));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
    sub_1B64C5C(Instance, v15);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v16 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1B64C5C(v16, v17);
    current = (EventFortificationEntity_o *)v46.fields._current;
    eventFortificationWorkMiniObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkMiniObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkMiniObj_k__BackingField,
            (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v21 )
      sub_1B64C5C(0LL, v22);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v21,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v25 = (System_Action_object__o *)sub_1B64C4C(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_object____ctor(
      v25,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0LL);
    if ( !Component_object )
      sub_1B64C5C(v26, v27);
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
      sub_1B64C5C(0LL, v32);
    transform = UnityEngine_GameObject__get_transform(v31, 0LL);
    if ( !current )
      sub_1B64C5C(transform, v34);
    if ( !transform )
      sub_1B64C5C(0LL, v34);
    v48.fields.y = (float)current->fields.rewardSceneY;
    v48.fields.x = (float)current->fields.rewardSceneX;
    v48.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v48, 0LL);
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    if ( !v35 )
      sub_1B64C5C(0LL, v36);
    UnityEngine_GameObject__SetActive(v35, 1, 0LL);
    eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkMiniManagers;
    if ( !eventFortificationWorkMiniManagers )
      sub_1B64C5C(0LL, v37);
    items = eventFortificationWorkMiniManagers->fields._items;
    v42 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkMiniManagers->fields._version;
    if ( !items )
      sub_1B64C5C(eventFortificationWorkMiniManagers, v37);
    size = eventFortificationWorkMiniManagers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkMiniManagers,
        Component_object,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &items->obj.klass + size;
      eventFortificationWorkMiniManagers->fields._size = size + 1;
      v44[4] = (Il2CppClass *)Component_object;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)Component_object, v38, v39);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x2
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  struct FortificationAssetManager_o *v19; // x8
  Il2CppObject *organizationPanel_k__BackingField; // x21
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_GameObject_o *v24; // x1
  const MethodInfo *v25; // x2

  if ( (byte_4A02849 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___, method);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_MapCamera___, v3);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    byte_4A02849 = 1;
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
                                       (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_22;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v8,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    *p_fortificationCamera = (struct MapCamera_o *)Component_object;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.fortificationCamera,
      (int32_t)Component_object,
      v13,
      v14);
    v8 = (UnityEngine_GameObject_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v16);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(organizationPanel, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v19 = this->fields.assetManager;
    if ( v19 )
    {
      organizationPanel_k__BackingField = (Il2CppObject *)v19->fields._organizationPanel_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         organizationPanel_k__BackingField,
                                         (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        v21 = UnityEngine_GameObject__GetComponent_object_(
                v8,
                (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
        *p_organizationPanel = (struct FortificationOrganizationPanelComponent_o *)v21;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.organizationPanel, (int32_t)v21, v22, v23);
        v8 = (UnityEngine_GameObject_o *)*p_organizationPanel;
        if ( *p_organizationPanel )
        {
          v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v24, v25);
          return;
        }
      }
    }
LABEL_22:
    sub_1B64C5C(v8, v9);
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
  Il2CppObject *MasterData_object; // x22
  struct SetSvtInfo_array *setSvtInfos; // x8
  int max_length; // w9
  int v14; // w11
  bool v15; // w10
  SetSvtInfo_o *v16; // x12
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A02856 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, *(_QWORD *)&fortificationIdx);
    sub_1B64A00(&NetworkManager_TypeInfo, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A02856 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1B64C5C(Instance, v10);
  max_length = setSvtInfos->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = 0;
  v15 = 0;
  do
  {
    if ( max_length == v14 )
      sub_1B64C64(Instance, v10);
    v16 = setSvtInfos->m_Items[v14];
    if ( !v16 )
      goto LABEL_19;
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

  if ( (byte_4A02857 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, v3);
    sub_1B64A00(&Method_EventFortificationManager__CreateOrganizationUI_b__22_1__, v4);
    sub_1B64A00(&Method_EventFortificationManager__CreateOrganizationUI_b__22_2__, v5);
    byte_4A02857 = 1;
  }
  v6 = Method_EventFortificationManager__CreateOrganizationUI_b__22_0__;
  if ( (*((_BYTE *)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B64A18(Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B649E4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  fortificationAutomaticDialog = this->fields.fortificationAutomaticDialog;
  if ( !fortificationAutomaticDialog
    || (FortificationAutomaticDialogComponent__Init(fortificationAutomaticDialog, this->fields.eventId, v10),
        v12 = this->fields.fortificationAutomaticDialog,
        v13 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_1__,
          0LL),
        v14 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_2__,
          0LL),
        !v12) )
  {
LABEL_9:
    sub_1B64C5C(fortificationAutomaticDialog, v9);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  System_Action_object__o *_9__22_4; // x20
  Il2CppObject *v16; // x21
  struct EventFortificationManager___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A02858 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v3);
    sub_1B64A00(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__, v4);
    sub_1B64A00(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__, v5);
    sub_1B64A00(&EventFortificationManager___c_TypeInfo, v6);
    byte_4A02858 = 1;
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
    _9__22_3 = (System_Action_object__o *)sub_1B64C4C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      _9__22_3,
      v10,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__22_3 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_3;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_3, (int32_t)_9__22_3, v12, v13);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_18;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)_9__22_3,
    (const MethodInfo_34B0AA8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
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
    v16 = (Il2CppObject *)v7->static_fields->__9;
    _9__22_4 = (System_Action_object__o *)sub_1B64C4C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      _9__22_4,
      v16,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__,
      0LL);
    v17 = EventFortificationManager___c_TypeInfo->static_fields;
    v17->__9__22_4 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_4;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v17->__9__22_4, (int32_t)_9__22_4, v18, v19);
  }
  if ( !eventFortificationWorkMiniManagers )
LABEL_18:
    sub_1B64C5C(v7, method);
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__22_4,
    (const MethodInfo_34B0AA8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_2(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8

  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    sub_1B64C5C(this, method);
  organizationPanel->fields.isTouchEnabled = 1;
}


void __fastcall EventFortificationManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A02859 & 1) == 0 )
  {
    sub_1B64A00(&EventFortificationManager___c_TypeInfo, v1);
    byte_4A02859 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(EventFortificationManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventFortificationManager___c_TypeInfo->static_fields->__9 = (struct EventFortificationManager___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)EventFortificationManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B64C5C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CloseServantFortificationList_b__32_2(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64C5C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_3(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64C5C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_4(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64C5C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A0285D & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, data);
    byte_4A0285D = 1;
  }
  if ( !data )
    sub_1B64C5C(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A0285E & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, data);
    byte_4A0285E = 1;
  }
  if ( !data )
    sub_1B64C5C(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___InitFortificationWorkMini_b__25_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A0285A & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, data);
    byte_4A0285A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v4 )
  {
    if ( !data )
      sub_1B64C5C(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
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

  if ( (byte_4A0285C & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, data);
    byte_4A0285C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v4 )
  {
    if ( !data )
      sub_1B64C5C(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
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

  if ( (byte_4A0285B & 1) == 0 )
  {
    sub_1B64A00(&AvalonSceneManager_TypeInfo, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4A0285B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    sub_1B64C5C(Instance, v4);
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

  if ( (byte_4A0285F & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, method);
    sub_1B64A00(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1B64A00(&DataManager_TypeInfo, v4);
    sub_1B64A00(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1B64A00(&LocalizationManager_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_17510/*"btn_txt_event_organization"*/, v7);
    sub_1B64A00(&StringLiteral_6432/*"FORTIFICATION_EVENT_END_MSG"*/, v8);
    sub_1B64A00(&StringLiteral_17421/*"btn_bg_event_organization"*/, v9);
    sub_1B64A00(&StringLiteral_19196/*"event_tab_bg_mask"*/, v10);
    byte_4A0285F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  this->fields.eventId,
                                                                  (const MethodInfo_30D6798 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_37549424(
                                                                                    eventId,
                                                                                    maskSp,
                                                                                    (System_String_o *)StringLiteral_19196/*"event_tab_bg_mask"*/,
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
                                                                                            (System_String_o *)StringLiteral_6432/*"FORTIFICATION_EVENT_END_MSG"*/,
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
    sub_1B64C5C(Master_object, v12);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_37549424(
                                                                  v18,
                                                                  organizationBtnSp,
                                                                  (System_String_o *)StringLiteral_17421/*"btn_bg_event_organization"*/,
                                                                  0LL);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_37549424(
                                                                  this->fields.eventId,
                                                                  v20->fields.organizationBtnTxtSp,
                                                                  (System_String_o *)StringLiteral_17510/*"btn_txt_event_organization"*/,
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
  int32_t v15; // w2
  int32_t v16; // w3
  struct EventFortificationManager_o *v17; // x8
  struct EventFortificationListViewManager_o *v18; // x19
  struct UICommonButton_o *baseButton; // x20
  Il2CppObject *klass; // x21
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x2

  v2 = this;
  if ( (byte_4A02860 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_bool__UserServantEntity__TypeInfo, method);
    sub_1B64A00(&System_Action_TypeInfo, v3);
    sub_1B64A00(&Method_EventFortificationManager_CloseServantFortificationList__, v4);
    sub_1B64A00(&Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, v5);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_1B64A00(&EventFortificationManager___c_TypeInfo, v6);
    byte_4A02860 = 1;
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
  v13 = (System_Action_bool__object__o *)sub_1B64C4C(System_Action_bool__UserServantEntity__TypeInfo);
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
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_17;
  v18 = v17->fields.eventFortificationListViewManager;
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
    baseButton = (struct UICommonButton_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      (System_Action_o *)baseButton,
      klass,
      Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__31_1 = (struct System_Action_o *)baseButton;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__31_1, (int32_t)baseButton, v22, v23);
  }
  if ( !v18 )
LABEL_17:
    sub_1B64C5C(this, method);
  v18->fields.CallbackFunc2 = (struct System_Action_o *)baseButton;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v18->fields.CallbackFunc2, (int32_t)baseButton, v15, v16);
  EventFortificationListViewManager__SetMode_45233104(v18, 2, v24);
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
  int32_t v24; // w2
  int32_t v25; // w3
  struct EventFortificationManager_o *v26; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  struct UnityEngine_GameObject_o *mainPanel; // x20
  Il2CppObject *v29; // x21
  struct EventFortificationManager___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  CommonUI_o *v33; // x19

  v3 = this;
  if ( (byte_4A02861 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1B64A00(&AvalonSceneManager_TypeInfo, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64A00(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__, v7);
    sub_1B64A00(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__, v8);
    sub_1B64A00(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v9);
    sub_1B64A00(&EventFortificationManager___c_TypeInfo, v10);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_1B64A00(&StringLiteral_16810/*"ar200"*/, v11);
    byte_4A02861 = 1;
  }
  if ( v3->fields.servantData )
  {
    v12 = Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__;
    if ( (*((_BYTE *)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1B64A18(Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    v13 = (System_Reflection_MethodBase_o *)sub_1B649E4(v12, v12[4]);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                  v13,
                                                                  (System_String_o *)StringLiteral_16810/*"ar200"*/,
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
    eventRoot = (struct UnityEngine_GameObject_o *)sub_1B64C4C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)eventRoot,
      klass,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__32_1 = (struct System_Action_EventFortificationWorkManager__o *)eventRoot;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__32_1, (int32_t)eventRoot, v24, v25);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)eventRoot,
    (const MethodInfo_34B0AA8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v26 = v3->fields.__4__this;
  if ( !v26 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)v26->fields.eventFortificationWorkMiniManagers;
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
    v29 = (Il2CppObject *)this[5].fields.__4__this->klass;
    mainPanel = (struct UnityEngine_GameObject_o *)sub_1B64C4C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)mainPanel,
      v29,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__,
      0LL);
    v30 = EventFortificationManager___c_TypeInfo->static_fields;
    v30->__9__32_2 = (struct System_Action_EventFortificationWorkManager__o *)mainPanel;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v30->__9__32_2, (int32_t)mainPanel, v31, v32);
  }
  if ( !eventFortificationWorkMiniManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)mainPanel,
    (const MethodInfo_34B0AA8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  this = (EventFortificationManager___c__DisplayClass32_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v33 )
LABEL_34:
    sub_1B64C5C(this, method);
  CommonUI__maskFadein(v33, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}