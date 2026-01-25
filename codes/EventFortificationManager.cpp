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
  Il2CppObject *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_4CE88D2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    sub_1C7BAE8(&EventFortificationManager___c__DisplayClass32_0_TypeInfo);
    byte_4CE88D2 = 1;
  }
  v6 = (Il2CppObject *)sub_1C7BD34(EventFortificationManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor(v6, 0);
  if ( !v6 )
    goto LABEL_9;
  v6[1].klass = (Il2CppClass *)servantData;
  sub_1C7BA8C(&v6[1], servantData);
  v6[1].monitor = this;
  v7 = sub_1C7BA8C(&v6[1].monitor, this);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  v12 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    v6,
    (intptr_t)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
    0);
  if ( !v12 )
LABEL_9:
    sub_1C7BD40(v7, v8);
  CommonUI__maskFadeout(v12, 1, DEFAULT_FADE_TIME, v14, 0);
}


void EventFortificationManager__CreateOrganizationUI(
        EventFortificationManager_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x22
  __int64 transform; // x0
  __int64 v8; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *autoFortificationButton_k__BackingField; // x22
  Il2CppObject *Component_object; // x0
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x21
  AutoFortificationButtonComponent_o *v14; // x20
  int32_t eventId; // w21
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x3

  if ( (byte_4CE88CA & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE88CA = 1;
  }
  p_autoOrganizationBtn = &this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Equality(autoOrganizationBtn, 0, 0);
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
                           (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    *p_autoOrganizationBtn = (struct AutoFortificationButtonComponent_o *)Component_object;
    sub_1C7BA8C(&this->fields.autoOrganizationBtn, Component_object);
    transform = (__int64)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_25;
    UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)transform, parent, 0);
    transform = (__int64)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    v12 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4CE7E5E )
    {
      transform = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E5E = 1;
    }
    if ( !v12 )
      goto LABEL_25;
    UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (__int64)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    v13 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4CE7E59 )
    {
      transform = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E59 = 1;
    }
    if ( !v13
      || (UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
          (transform = (__int64)*p_autoOrganizationBtn) == 0)
      || (transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0)) == 0 )
    {
LABEL_25:
      sub_1C7BD40(transform, v8);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  }
  v14 = this->fields.autoOrganizationBtn;
  eventId = this->fields.eventId;
  v16 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__,
    0);
  if ( !v14 )
    goto LABEL_25;
  AutoFortificationButtonComponent__Init(v14, eventId, v16, v17);
}


void EventFortificationManager__DestroyList(EventFortificationManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FortificationAssetManager_o *assetManager; // x0
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x0
  UnityEngine_Object_o *gameObject; // x21
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  UnityEngine_Object_o *v12; // x21
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_Object_o *v15; // x21
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  UnityEngine_Object_o *v18; // x21
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_Object_o *v21; // x21
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x21
  UnityEngine_Object_o *v24; // x21
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x21
  EventFortificationManager___c_c *v26; // x0
  System_Action_object__o *_9__36_0; // x22
  Il2CppObject *v28; // x23
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_object__o *v30; // x21
  struct System_Collections_Generic_List_EventFortificationWorkManager__o **p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v32; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v34; // x0
  System_Action_object__o *_9__36_1; // x21
  Il2CppObject *v36; // x22
  struct EventFortificationManager___c_StaticFields *v37; // x0
  System_Collections_Generic_List_object__o *v38; // x20

  if ( (byte_4CE88D5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_EventFortificationManager___c__DestroyList_b__36_0__);
    sub_1C7BAE8(&Method_EventFortificationManager___c__DestroyList_b__36_1__);
    sub_1C7BAE8(&EventFortificationManager___c_TypeInfo);
    byte_4CE88D5 = 1;
  }
  assetManager = this->fields.assetManager;
  if ( assetManager )
    FortificationAssetManager__Release(assetManager, this->fields.eventId, v2);
  p_fortificationCamera = &this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationCamera, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_64;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(gameObject, 0);
    *p_fortificationCamera = 0;
    sub_1C7BA8C(&this->fields.fortificationCamera, 0);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(organizationPanel, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)*p_organizationPanel;
    if ( !*p_organizationPanel )
      goto LABEL_64;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(v12, 0);
    *p_organizationPanel = 0;
    sub_1C7BA8C(&this->fields.organizationPanel, 0);
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationConfirmDialog, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_64;
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(v15, 0);
    *p_fortificationConfirmDialog = 0;
    sub_1C7BA8C(&this->fields.fortificationConfirmDialog, 0);
  }
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationAutomaticDialog, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)*p_fortificationAutomaticDialog;
    if ( !*p_fortificationAutomaticDialog )
      goto LABEL_64;
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(v18, 0);
    *p_fortificationAutomaticDialog = 0;
    sub_1C7BA8C(&this->fields.fortificationAutomaticDialog, 0);
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventFortificationListViewManager, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)*p_eventFortificationListViewManager;
    if ( !*p_eventFortificationListViewManager )
      goto LABEL_64;
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(v21, 0);
    *p_eventFortificationListViewManager = 0;
    sub_1C7BA8C(&this->fields.eventFortificationListViewManager, 0);
  }
  p_autoOrganizationBtn = &this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(autoOrganizationBtn, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)*p_autoOrganizationBtn;
    if ( *p_autoOrganizationBtn )
    {
      v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71870148(v24, 0);
      *p_autoOrganizationBtn = 0;
      sub_1C7BA8C(&this->fields.autoOrganizationBtn, 0);
      goto LABEL_47;
    }
LABEL_64:
    sub_1C7BD40(v8, v7);
  }
LABEL_47:
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( eventFortificationWorkManagers )
  {
    v26 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v26 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_0 = (System_Action_object__o *)v26->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = EventFortificationManager___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__36_0 = (System_Action_object__o *)sub_1C7BD34(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(_9__36_0, v28, Method_EventFortificationManager___c__DestroyList_b__36_0__, 0);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_0;
      sub_1C7BA8C(&static_fields->__9__36_0, _9__36_0);
    }
    System_Collections_Generic_List_object___ForEach(
      eventFortificationWorkManagers,
      (System_Action_T__o *)_9__36_0,
      (const MethodInfo_383F83C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v30 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v30,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v30;
    sub_1C7BA8C(&this->fields.eventFortificationWorkManagers, v30);
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = &this->fields.eventFortificationWorkMiniManagers;
  v32 = (System_Collections_Generic_List_object__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers )
  {
    v34 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v34 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_1 = (System_Action_object__o *)v34->static_fields->__9__36_1;
    if ( !_9__36_1 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = EventFortificationManager___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v34->static_fields->__9;
      _9__36_1 = (System_Action_object__o *)sub_1C7BD34(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(_9__36_1, v36, Method_EventFortificationManager___c__DestroyList_b__36_1__, 0);
      v37 = EventFortificationManager___c_TypeInfo->static_fields;
      v37->__9__36_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_1;
      sub_1C7BA8C(&v37->__9__36_1, _9__36_1);
    }
    System_Collections_Generic_List_object___ForEach(
      v32,
      (System_Action_T__o *)_9__36_1,
      (const MethodInfo_383F83C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v38 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v38,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    *p_eventFortificationWorkMiniManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v38;
    sub_1C7BA8C(p_eventFortificationWorkMiniManagers, v38);
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
  System_Collections_Generic_List_object__o *v12; // x21
  const MethodInfo *v13; // x1
  struct FortificationAssetManager_o **p_assetManager; // x19
  FortificationAssetManager_o *v15; // x21
  struct FortificationAssetManager_o *assetManager; // t1
  FortificationAssetManager_o *v17; // x21
  const MethodInfo *v18; // x1
  int32_t v19; // w19
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x3

  if ( (byte_4CE88CE & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&FortificationAssetManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_1C7BAE8(&Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__);
    sub_1C7BAE8(&EventFortificationManager___c__DisplayClass28_0_TypeInfo);
    byte_4CE88CE = 1;
  }
  v9 = sub_1C7BD34(EventFortificationManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_8;
  *(_DWORD *)(v9 + 16) = eventId;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C7BA8C(v9 + 24, this);
  *(_QWORD *)(v9 + 40) = uiParent;
  *(_DWORD *)(v9 + 32) = slotIndex;
  sub_1C7BA8C(v9 + 40, uiParent);
  this->fields.eventId = *(_DWORD *)(v9 + 16);
  this->fields.slotIndex = *(_DWORD *)(v9 + 32);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v12;
  sub_1C7BA8C(&this->fields.eventFortificationWorkManagers, v12);
  EventFortificationManager__InitFortificationWorkMini(this, v13);
  assetManager = this->fields.assetManager;
  p_assetManager = &this->fields.assetManager;
  v15 = assetManager;
  if ( !assetManager )
  {
    v17 = (FortificationAssetManager_o *)sub_1C7BD34(FortificationAssetManager_TypeInfo);
    FortificationAssetManager___ctor(v17, v18);
    *p_assetManager = v17;
    sub_1C7BA8C(p_assetManager, v17);
    v15 = *p_assetManager;
  }
  v19 = *(_DWORD *)(v9 + 16);
  v20 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v9, Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__, 0);
  if ( !v15 )
LABEL_8:
    sub_1C7BD40(v10, v11);
  FortificationAssetManager__GetAssets(v15, v19, v20, v21);
}


void EventFortificationManager__InitDialog(EventFortificationManager_o *this, const MethodInfo *method)
{
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *fortificationConfirmDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x2
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  struct FortificationAssetManager_o *v15; // x8
  Il2CppObject *fortificationAutomaticDialog_k__BackingField; // x21
  Il2CppObject *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  const MethodInfo *v19; // x2

  if ( (byte_4CE88CB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE88CB = 1;
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationConfirmDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_24;
    fortificationConfirmDialog_k__BackingField = (Il2CppObject *)assetManager->fields._fortificationConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       fortificationConfirmDialog_k__BackingField,
                                       (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    *p_fortificationConfirmDialog = (struct FortificationConfirmDialogComponent_o *)Component_object;
    sub_1C7BA8C(&this->fields.fortificationConfirmDialog, Component_object);
    v5 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v12);
  }
  v5 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
  if ( !*p_fortificationConfirmDialog )
    goto LABEL_24;
  FortificationConfirmDialogComponent__Init((FortificationConfirmDialogComponent_o *)v5, this->fields.eventId, v7);
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationAutomaticDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v15 = this->fields.assetManager;
    if ( v15 )
    {
      fortificationAutomaticDialog_k__BackingField = (Il2CppObject *)v15->fields._fortificationAutomaticDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         fortificationAutomaticDialog_k__BackingField,
                                         (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v17 = UnityEngine_GameObject__GetComponent_object_(
                v5,
                (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
        *p_fortificationAutomaticDialog = (struct FortificationAutomaticDialogComponent_o *)v17;
        sub_1C7BA8C(&this->fields.fortificationAutomaticDialog, v17);
        v5 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
        if ( *p_fortificationAutomaticDialog )
        {
          v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
          EventFortificationManager__LocateObjectToUIRoot(this, v18, v19);
          goto LABEL_22;
        }
      }
    }
LABEL_24:
    sub_1C7BD40(v5, v6);
  }
LABEL_22:
  v5 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
  if ( !*p_fortificationAutomaticDialog )
    goto LABEL_24;
  BaseDialog__Init((BaseDialog_o *)v5, 0);
}


void EventFortificationManager__InitFortificationWorkMini(EventFortificationManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventFortificationWorkManager__o **p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v6; // x0
  System_Action_object__o *_9__25_0; // x21
  Il2CppObject *v8; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_object__o *v10; // x20

  if ( (byte_4CE88CD & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_1C7BAE8(&Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__);
    sub_1C7BAE8(&EventFortificationManager___c_TypeInfo);
    byte_4CE88CD = 1;
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = &this->fields.eventFortificationWorkMiniManagers;
  v4 = (System_Collections_Generic_List_object__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers && v4->fields._size >= 1 )
  {
    v6 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v6 = EventFortificationManager___c_TypeInfo;
    }
    _9__25_0 = (System_Action_object__o *)v6->static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = EventFortificationManager___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__25_0 = (System_Action_object__o *)sub_1C7BD34(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(
        _9__25_0,
        v8,
        Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__,
        0);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__25_0;
      sub_1C7BA8C(&static_fields->__9__25_0, _9__25_0);
    }
    System_Collections_Generic_List_object___ForEach(
      v4,
      (System_Action_T__o *)_9__25_0,
      (const MethodInfo_383F83C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  *p_eventFortificationWorkMiniManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v10;
  sub_1C7BA8C(p_eventFortificationWorkMiniManagers, v10);
}


void EventFortificationManager__InitListViewPanel(EventFortificationManager_o *this, const MethodInfo *method)
{
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *eventFortificationListViewPanel_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4CE88CC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE88CC = 1;
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(eventFortificationListViewManager, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_13;
    eventFortificationListViewPanel_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationListViewPanel_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       eventFortificationListViewPanel_k__BackingField,
                                       (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v5,
                               (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___),
          *p_eventFortificationListViewManager = (struct EventFortificationListViewManager_o *)Component_object,
          sub_1C7BA8C(&this->fields.eventFortificationListViewManager, Component_object),
          (v5 = (UnityEngine_GameObject_o *)*p_eventFortificationListViewManager) == 0) )
    {
LABEL_13:
      sub_1C7BD40(v5, v6);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v11);
  }
}


bool EventFortificationManager__IsOrganizationPanelActive(EventFortificationManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *organizationPanel; // x0

  organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
  if ( !organizationPanel
    || (organizationPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(organizationPanel, 0)) == 0 )
  {
    sub_1C7BD40(organizationPanel, method);
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
  if ( !byte_4CE7E5E )
  {
    this = (EventFortificationManager_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0)) == 0) )
  {
LABEL_9:
    sub_1C7BD40(this, obj);
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
  if ( !byte_4CE7E5E )
  {
    this = (EventFortificationManager_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v5
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v5,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0)) == 0) )
  {
LABEL_8:
    sub_1C7BD40(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventFortificationManager__OnClickBackBtn(EventFortificationManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  void *organizationPanel; // x0
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  System_Action_object__o *v8; // x21
  Il2CppObject *v9; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *v11; // x8
  int32_t size; // w2
  int v13; // w9

  if ( (byte_4CE88D4 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1C7BAE8(&Method_EventFortificationManager_OnClickBackBtn__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1C7BAE8(&Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__);
    sub_1C7BAE8(&EventFortificationManager___c_TypeInfo);
    byte_4CE88D4 = 1;
  }
  v3 = Method_EventFortificationManager_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickBackBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_EventFortificationManager_OnClickBackBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    organizationPanel = EventFortificationManager___c_TypeInfo;
  }
  v8 = *(System_Action_object__o **)(*((_QWORD *)organizationPanel + 23) + 56LL);
  if ( !v8 )
  {
    if ( !*((_DWORD *)organizationPanel + 56) )
    {
      j_il2cpp_runtime_class_init_0(organizationPanel);
      organizationPanel = EventFortificationManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)**((_QWORD **)organizationPanel + 23);
    v8 = (System_Action_object__o *)sub_1C7BD34(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(v8, v9, Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, 0);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Action_EventFortificationWorkManager__o *)v8;
    organizationPanel = (void *)sub_1C7BA8C(&static_fields->__9__34_0, v8);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_20;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)v8,
    (const MethodInfo_383F83C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v11 = this->fields.eventFortificationWorkManagers;
  if ( !v11 )
    goto LABEL_20;
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0);
  organizationPanel = this->fields.eventFortificationListViewManager;
  if ( !organizationPanel )
LABEL_20:
    sub_1C7BD40(organizationPanel, v5);
  ListViewManager__ClearScrollBarValue((ListViewManager_o *)organizationPanel, 1, 0);
}


void EventFortificationManager__OnClickOrganizationBtn(EventFortificationManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  FortificationAssetManager_o *assetManager; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4CE88D3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_EventFortificationManager_OnClickOrganizationBtn__);
    byte_4CE88D3 = 1;
  }
  v3 = Method_EventFortificationManager_OnClickOrganizationBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickOrganizationBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_EventFortificationManager_OnClickOrganizationBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
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
    sub_1C7BD40(assetManager, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assetManager, 1, 0);
  EventFortificationManager__SetFortificationWork(this, v8);
}


void EventFortificationManager__ResetRewardSceneObj(EventFortificationManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainPanel; // x0

  mainPanel = this->fields.mainPanel;
  if ( !mainPanel || (UnityEngine_GameObject__SetActive(mainPanel, 1, 0), (mainPanel = this->fields.eventRoot) == 0) )
    sub_1C7BD40(mainPanel, method);
  UnityEngine_GameObject__SetActive(mainPanel, 1, 0);
}


void EventFortificationManager__SelectFortificationServant(
        EventFortificationManager_o *this,
        EventFortificationWorkItem_o *item,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_4CE88D1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__);
    sub_1C7BAE8(&EventFortificationManager___c__DisplayClass31_0_TypeInfo);
    byte_4CE88D1 = 1;
  }
  v5 = (Il2CppObject *)sub_1C7BD34(EventFortificationManager___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_9;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C7BA8C(&v5[1], this);
  v5[1].monitor = item;
  v6 = sub_1C7BA8C(&v5[1].monitor, item);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    v5,
    Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
    0);
  if ( !v11 )
LABEL_9:
    sub_1C7BD40(v6, v7);
  CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, v13, 0);
}


void EventFortificationManager__SetFortificationWork(EventFortificationManager_o *this, const MethodInfo *method)
{
  Il2CppObject *object; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x23
  Il2CppObject *eventFortificationWorkObj_k__BackingField; // x22
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x0
  int32_t eventId; // w24
  EventFortificationWorkManager_o *v15; // x22
  System_Action_object__o *v16; // x25
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x6
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Component_o *organizationPanel; // x0
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x1
  UnityEngine_Transform_o *v30; // x24
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  UnityEngine_Transform_o *v33; // x0
  __int64 v34; // x1
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x8
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE88CF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_EventFortificationWorkItem__TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_1C7BAE8(&Method_EventFortificationManager_SelectFortificationServant__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Resources_Load_UIAtlas___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_13740/*"Terminal/Atlas/TerminalAtlas"*/);
    byte_4CE88CF = 1;
  }
  entities = 0;
  memset(&v44, 0, sizeof(v44));
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_13740/*"Terminal/Atlas/TerminalAtlas"*/,
             (const MethodInfo_320C160 *)Method_UnityEngine_Resources_Load_UIAtlas___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_44;
  if ( !EventFortificationMaster__TryGetEntityList(
          (EventFortificationMaster_o *)Instance,
          &entities,
          this->fields.eventId,
          0) )
    return;
  Instance = (DataManager_o *)entities;
  if ( !entities )
LABEL_44:
    sub_1C7BD40(Instance, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v44 = v43;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v44,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v6 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1C7BD40(v6, v7);
    current = (EventFortificationEntity_o *)v44.fields._current;
    eventFortificationWorkObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkObj_k__BackingField,
            (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      sub_1C7BD40(0, v12);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v11,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v15 = (EventFortificationWorkManager_o *)Component_object;
    v16 = (System_Action_object__o *)sub_1C7BD34(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_object____ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0);
    if ( !v15 )
      sub_1C7BD40(v17, v18);
    EventFortificationWorkManager__SetServantFortificationWork(
      v15,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v16,
      this->fields.organizationPanel,
      (UIAtlas_o *)object,
      v19);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
    organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
    if ( !organizationPanel )
      sub_1C7BD40(0, v20);
    v23 = UnityEngine_Component__get_gameObject(organizationPanel, 0);
    if ( !v23 )
      sub_1C7BD40(0, v24);
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v23, 0);
    GameObjectExtensions__SetParent(gameObject, transform, 0);
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
    if ( !v26 )
      sub_1C7BD40(0, v27);
    v28 = (__int64)UnityEngine_GameObject__get_transform(v26, 0);
    v30 = (UnityEngine_Transform_o *)v28;
    if ( !byte_4CE7E5E )
    {
      v28 = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E5E = 1;
    }
    if ( !v30 )
      sub_1C7BD40(v28, v29);
    UnityEngine_Transform__set_localScale(v30, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
    if ( !v31 )
      sub_1C7BD40(0, v32);
    v33 = UnityEngine_GameObject__get_transform(v31, 0);
    if ( !current )
      sub_1C7BD40(v33, v34);
    if ( !v33 )
      sub_1C7BD40(0, v34);
    v46.fields.y = (float)current->fields.y;
    v46.fields.x = (float)current->fields.x;
    v46.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v33, v46, 0);
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
    if ( !v35 )
      sub_1C7BD40(0, v36);
    UnityEngine_GameObject__SetActive(v35, 1, 0);
    eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
    if ( !eventFortificationWorkManagers )
      sub_1C7BD40(0, v37);
    items = eventFortificationWorkManagers->fields._items;
    v40 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkManagers->fields._version;
    if ( !items )
      sub_1C7BD40(eventFortificationWorkManagers, v37);
    size = eventFortificationWorkManagers->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkManagers,
        (Il2CppObject *)v15,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &items->obj.klass + size;
      eventFortificationWorkManagers->fields._size = size + 1;
      v42[4] = (Il2CppClass *)v15;
      sub_1C7BA8C(v42 + 4, v15);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void EventFortificationManager__SetFortificationWorkMini(EventFortificationManager_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x21
  Il2CppObject *eventFortificationWorkMiniObj_k__BackingField; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20
  int32_t eventId; // w22
  System_Action_object__o *v14; // x23
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x6
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE88D0 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_EventFortificationWorkItem__TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_1C7BAE8(&Method_EventFortificationManager_SelectFortificationServant__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE88D0 = 1;
  }
  entities = 0;
  memset(&v33, 0, sizeof(v33));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( !Instance )
    goto LABEL_34;
  if ( !EventFortificationMaster__TryGetEntityList(
          (EventFortificationMaster_o *)Instance,
          &entities,
          this->fields.eventId,
          0) )
    return;
  Instance = (DataManager_o *)entities;
  if ( !entities )
LABEL_34:
    sub_1C7BD40(Instance, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v33,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v5 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1C7BD40(v5, v6);
    current = (EventFortificationEntity_o *)v33.fields._current;
    eventFortificationWorkMiniObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkMiniObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkMiniObj_k__BackingField,
            (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10 )
      sub_1C7BD40(0, v11);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v10,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v14 = (System_Action_object__o *)sub_1C7BD34(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_object____ctor(
      v14,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0);
    if ( !Component_object )
      sub_1C7BD40(v15, v16);
    EventFortificationWorkManager__SetServantFortificationWork(
      (EventFortificationWorkManager_o *)Component_object,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v14,
      0,
      0,
      v17);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
    EventFortificationManager__LocateObjectToFotificationPanel(this, gameObject, v19);
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
    if ( !v20 )
      sub_1C7BD40(0, v21);
    transform = UnityEngine_GameObject__get_transform(v20, 0);
    if ( !current )
      sub_1C7BD40(transform, v23);
    if ( !transform )
      sub_1C7BD40(0, v23);
    v35.fields.y = (float)current->fields.rewardSceneY;
    v35.fields.x = (float)current->fields.rewardSceneX;
    v35.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v35, 0);
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
    if ( !v24 )
      sub_1C7BD40(0, v25);
    UnityEngine_GameObject__SetActive(v24, 1, 0);
    eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkMiniManagers;
    if ( !eventFortificationWorkMiniManagers )
      sub_1C7BD40(0, v26);
    items = eventFortificationWorkMiniManagers->fields._items;
    v29 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkMiniManagers->fields._version;
    if ( !items )
      sub_1C7BD40(eventFortificationWorkMiniManagers, v26);
    size = eventFortificationWorkMiniManagers->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkMiniManagers,
        Component_object,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &items->obj.klass + size;
      eventFortificationWorkMiniManagers->fields._size = size + 1;
      v31[4] = (Il2CppClass *)Component_object;
      sub_1C7BA8C(v31 + 4, Component_object);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void EventFortificationManager__SetFotificationOrganizationPanel(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *fortificationCamera_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x2
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  struct FortificationAssetManager_o *v14; // x8
  Il2CppObject *organizationPanel_k__BackingField; // x21
  Il2CppObject *v16; // x0
  UnityEngine_GameObject_o *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_4CE88C9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE88C9 = 1;
  }
  p_fortificationCamera = &this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationCamera, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_22;
    fortificationCamera_k__BackingField = (Il2CppObject *)assetManager->fields._fortificationCamera_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       fortificationCamera_k__BackingField,
                                       (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_22;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    *p_fortificationCamera = (struct MapCamera_o *)Component_object;
    sub_1C7BA8C(&this->fields.fortificationCamera, Component_object);
    v5 = (UnityEngine_GameObject_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v11);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(organizationPanel, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v14 = this->fields.assetManager;
    if ( v14 )
    {
      organizationPanel_k__BackingField = (Il2CppObject *)v14->fields._organizationPanel_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         organizationPanel_k__BackingField,
                                         (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v16 = UnityEngine_GameObject__GetComponent_object_(
                v5,
                (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
        *p_organizationPanel = (struct FortificationOrganizationPanelComponent_o *)v16;
        sub_1C7BA8C(&this->fields.organizationPanel, v16);
        v5 = (UnityEngine_GameObject_o *)*p_organizationPanel;
        if ( *p_organizationPanel )
        {
          v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
          EventFortificationManager__LocateObjectToUIRoot(this, v17, v18);
          return;
        }
      }
    }
LABEL_22:
    sub_1C7BD40(v5, v6);
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
  Il2CppObject *MasterData_object; // x22
  struct SetSvtInfo_array *setSvtInfos; // x8
  int max_length; // w9
  int v12; // w11
  bool v13; // w10
  SetSvtInfo_o *v14; // x12
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CE88D6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE88D6 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity || (setSvtInfos = entity->fields.setSvtInfos) == 0 )
LABEL_23:
    sub_1C7BD40(Instance, v8);
  max_length = setSvtInfos->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = 0;
  v13 = 0;
  do
  {
    if ( max_length == v12 )
      sub_1C7BD48(Instance);
    v14 = setSvtInfos->m_Items[v12];
    if ( !v14 )
      goto LABEL_23;
    ++v12;
    if ( v14->fields.position == position )
      v13 = 1;
  }
  while ( max_length != v12 );
  return v13;
}


void EventFortificationManager___CreateOrganizationUI_b__22_0(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  FortificationAutomaticDialogComponent_o *fortificationAutomaticDialog; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  FortificationAutomaticDialogComponent_o *v9; // x20
  System_Action_o *v10; // x21
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x3

  if ( (byte_4CE88D7 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
    sub_1C7BAE8(&Method_EventFortificationManager__CreateOrganizationUI_b__22_1__);
    sub_1C7BAE8(&Method_EventFortificationManager__CreateOrganizationUI_b__22_2__);
    byte_4CE88D7 = 1;
  }
  v3 = Method_EventFortificationManager__CreateOrganizationUI_b__22_0__;
  if ( (*((_BYTE *)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  fortificationAutomaticDialog = this->fields.fortificationAutomaticDialog;
  if ( !fortificationAutomaticDialog
    || (FortificationAutomaticDialogComponent__Init(fortificationAutomaticDialog, this->fields.eventId, v7),
        v9 = this->fields.fortificationAutomaticDialog,
        v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_1__,
          0),
        v11 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_2__,
          0),
        !v9) )
  {
LABEL_9:
    sub_1C7BD40(fortificationAutomaticDialog, v6);
  }
  FortificationAutomaticDialogComponent__Open(v9, v10, v11, v12);
}


void EventFortificationManager___CreateOrganizationUI_b__22_1(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  EventFortificationManager___c_c *v3; // x0
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  System_Action_object__o *_9__22_3; // x21
  Il2CppObject *v6; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  System_Action_object__o *_9__22_4; // x20
  Il2CppObject *v10; // x21
  struct EventFortificationManager___c_StaticFields *v11; // x0

  if ( (byte_4CE88D8 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1C7BAE8(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__);
    sub_1C7BAE8(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__);
    sub_1C7BAE8(&EventFortificationManager___c_TypeInfo);
    byte_4CE88D8 = 1;
  }
  v3 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v3 = EventFortificationManager___c_TypeInfo;
  }
  _9__22_3 = (System_Action_object__o *)v3->static_fields->__9__22_3;
  if ( !_9__22_3 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventFortificationManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__22_3 = (System_Action_object__o *)sub_1C7BD34(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(_9__22_3, v6, Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__, 0);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__22_3 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_3;
    v3 = (EventFortificationManager___c_c *)sub_1C7BA8C(&static_fields->__9__22_3, _9__22_3);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_18;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)_9__22_3,
    (const MethodInfo_383F83C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v3 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkMiniManagers;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v3 = EventFortificationManager___c_TypeInfo;
  }
  _9__22_4 = (System_Action_object__o *)v3->static_fields->__9__22_4;
  if ( !_9__22_4 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventFortificationManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v3->static_fields->__9;
    _9__22_4 = (System_Action_object__o *)sub_1C7BD34(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(_9__22_4, v10, Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__, 0);
    v11 = EventFortificationManager___c_TypeInfo->static_fields;
    v11->__9__22_4 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_4;
    v3 = (EventFortificationManager___c_c *)sub_1C7BA8C(&v11->__9__22_4, _9__22_4);
  }
  if ( !eventFortificationWorkMiniManagers )
LABEL_18:
    sub_1C7BD40(v3, method);
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__22_4,
    (const MethodInfo_383F83C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
}


void EventFortificationManager___CreateOrganizationUI_b__22_2(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8

  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    sub_1C7BD40(this, method);
  organizationPanel->fields.isTouchEnabled = 1;
}


void EventFortificationManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CE88D9 & 1) == 0 )
  {
    sub_1C7BAE8(&EventFortificationManager___c_TypeInfo);
    byte_4CE88D9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(EventFortificationManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventFortificationManager___c_TypeInfo->static_fields->__9 = (struct EventFortificationManager___c_o *)v1;
  sub_1C7BA8C(EventFortificationManager___c_TypeInfo->static_fields, v1);
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
    sub_1C7BD40(this, 0);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void EventFortificationManager___c___CloseServantFortificationList_b__32_2(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C7BD40(this, 0);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void EventFortificationManager___c___CreateOrganizationUI_b__22_3(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C7BD40(this, 0);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void EventFortificationManager___c___CreateOrganizationUI_b__22_4(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C7BD40(this, 0);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void EventFortificationManager___c___DestroyList_b__36_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CE88DD & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE88DD = 1;
  }
  if ( !data )
    sub_1C7BD40(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(gameObject, 0);
}


void EventFortificationManager___c___DestroyList_b__36_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CE88DE & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE88DE = 1;
  }
  if ( !data )
    sub_1C7BD40(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(gameObject, 0);
}


void EventFortificationManager___c___InitFortificationWorkMini_b__25_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CE88DA & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE88DA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0, 0);
  if ( v4 )
  {
    if ( !data )
      sub_1C7BD40(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(gameObject, 0);
  }
}


void EventFortificationManager___c___OnClickBackBtn_b__34_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CE88DC & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE88DC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0, 0);
  if ( v4 )
  {
    if ( !data )
      sub_1C7BD40(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(gameObject, 0);
  }
}


void EventFortificationManager___c___SelectFortificationServant_b__31_1(
        EventFortificationManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_4CE88DB & 1) == 0 )
  {
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CE88DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1C7BD40(Instance, v3);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v4; // x1
  struct EventFortificationManager_o *v5; // x8
  struct EventFortificationManager_o *v6; // x8
  struct EventFortificationManager_o *v7; // x8
  UnityEngine_GameObject_o *v8; // x0
  struct EventFortificationManager_o *v9; // x8
  int32_t v10; // w20
  UISprite_o *organizationBtnSp; // x21
  struct EventFortificationManager_o *v12; // x8
  const MethodInfo *v13; // x4
  struct EventFortificationManager_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventFortificationManager_o *v16; // x8
  struct EventFortificationManager_o *v17; // x8
  int32_t eventId; // w21
  UISprite_o *maskSp; // x20
  struct EventFortificationManager_o *v20; // x8
  struct EventFortificationManager_o *v21; // x8
  UILabel_o *maskLb; // x20
  struct EventFortificationManager_o *v23; // x8
  struct UITexture_o *fortificationSlotBg; // x20
  const MethodInfo *v25; // x2

  if ( (byte_4CE88DF & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17655/*"btn_txt_event_organization"*/);
    sub_1C7BAE8(&StringLiteral_6499/*"FORTIFICATION_EVENT_END_MSG"*/);
    sub_1C7BAE8(&StringLiteral_17545/*"btn_bg_event_organization"*/);
    sub_1C7BAE8(&StringLiteral_19432/*"event_tab_bg_mask"*/);
    byte_4CE88DF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  this->fields.eventId,
                                                                  (const MethodInfo_342E2FC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
            v16 = this->fields.__4__this;
            if ( v16 )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v16->fields.maskSp;
              if ( Master_object )
              {
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)Master_object,
                                                                                0);
                if ( Master_object )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                  v17 = this->fields.__4__this;
                  if ( v17 )
                  {
                    eventId = this->fields.eventId;
                    maskSp = v17->fields.maskSp;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_41168628(
                                                                                    eventId,
                                                                                    maskSp,
                                                                                    (System_String_o *)StringLiteral_19432/*"event_tab_bg_mask"*/,
                                                                                    0);
                    v20 = this->fields.__4__this;
                    if ( v20 )
                    {
                      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v20->fields.maskLb;
                      if ( Master_object )
                      {
                        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)Master_object,
                                                                                        0);
                        if ( Master_object )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                          v21 = this->fields.__4__this;
                          if ( v21 )
                          {
                            maskLb = v21->fields.maskLb;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                                            (System_String_o *)StringLiteral_6499/*"FORTIFICATION_EVENT_END_MSG"*/,
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
    sub_1C7BD40(Master_object, v4);
  }
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v5->fields.maskSp;
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v6->fields.maskLb;
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v7->fields.organizationBtnSp;
  if ( !Master_object )
    goto LABEL_50;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GameObjectExtensions__GetParent(v8, 0);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_50;
  v10 = this->fields.eventId;
  organizationBtnSp = v9->fields.organizationBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_41168628(
                                                                  v10,
                                                                  organizationBtnSp,
                                                                  (System_String_o *)StringLiteral_17545/*"btn_bg_event_organization"*/,
                                                                  0);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_41168628(
                                                                  this->fields.eventId,
                                                                  v12->fields.organizationBtnTxtSp,
                                                                  (System_String_o *)StringLiteral_17655/*"btn_txt_event_organization"*/,
                                                                  0);
LABEL_41:
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v23->fields.assetManager;
  if ( !Master_object )
    goto LABEL_50;
  fortificationSlotBg = v23->fields.fortificationSlotBg;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)FortificationAssetManager__GetOrganizationBgTex(
                                                                  (FortificationAssetManager_o *)Master_object,
                                                                  this->fields.eventId,
                                                                  this->fields.slotIndex,
                                                                  1,
                                                                  v13);
  if ( !fortificationSlotBg )
    goto LABEL_50;
  ((void (__fastcall *)(struct UITexture_o *, DataMasterBase_TMaster__TEntity__PKType__o *, const MethodInfo *))fortificationSlotBg->klass->vtable._27_set_mainTexture.methodPtr)(
    fortificationSlotBg,
    Master_object,
    fortificationSlotBg->klass->vtable._27_set_mainTexture.method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__SetFotificationOrganizationPanel((EventFortificationManager_o *)Master_object, v4);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__InitDialog((EventFortificationManager_o *)Master_object, v4);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__InitListViewPanel((EventFortificationManager_o *)Master_object, v4);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__SetFortificationWorkMini((EventFortificationManager_o *)Master_object, v4);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__CreateOrganizationUI(
    (EventFortificationManager_o *)Master_object,
    this->fields.uiParent,
    v25);
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
  struct EventFortificationManager_o *v4; // x25
  EventFortificationListViewManager_o *eventFortificationListViewManager; // x20
  int32_t eventId; // w21
  FortificationConfirmDialogComponent_o *fortificationConfirmDialog; // x22
  EventFortificationWorkItem_o *item; // x23
  System_Action_bool__object__o *v9; // x24
  const MethodInfo *v10; // x5
  struct EventFortificationManager_o *v11; // x8
  EventFortificationListViewManager_o *v12; // x19
  struct UICommonButton_o *baseButton; // x20
  Il2CppObject *klass; // x21
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  const MethodInfo *v16; // x2

  v2 = this;
  if ( (byte_4CE88E0 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_bool__UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventFortificationManager_CloseServantFortificationList__);
    sub_1C7BAE8(&Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_1C7BAE8(&EventFortificationManager___c_TypeInfo);
    byte_4CE88E0 = 1;
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
  v9 = (System_Action_bool__object__o *)sub_1C7BD34(System_Action_bool__UserServantEntity__TypeInfo);
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
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_17;
  v12 = v11->fields.eventFortificationListViewManager;
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
    baseButton = (struct UICommonButton_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      (System_Action_o *)baseButton,
      klass,
      Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__,
      0);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__31_1 = (struct System_Action_o *)baseButton;
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_1C7BA8C(&static_fields->__9__31_1, baseButton);
  }
  if ( !v12 )
LABEL_17:
    sub_1C7BD40(this, method);
  v12->fields.CallbackFunc2 = (struct System_Action_o *)baseButton;
  sub_1C7BA8C(&v12->fields.CallbackFunc2, baseButton);
  EventFortificationListViewManager__SetMode_32189200(v12, 2, v16);
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
  struct EventFortificationManager_o *v11; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  struct UnityEngine_GameObject_o *eventRoot; // x21
  Il2CppObject *klass; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  struct EventFortificationManager_o *v16; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  struct UnityEngine_GameObject_o *mainPanel; // x20
  Il2CppObject *v19; // x21
  struct EventFortificationManager___c_StaticFields *v20; // x0
  CommonUI_o *v21; // x19

  v3 = this;
  if ( (byte_4CE88E1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__);
    sub_1C7BAE8(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__);
    sub_1C7BAE8(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    sub_1C7BAE8(&EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_1C7BAE8(&StringLiteral_16935/*"ar200"*/);
    byte_4CE88E1 = 1;
  }
  if ( v3->fields.servantData )
  {
    v4 = Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__;
    if ( (*((_BYTE *)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__ + 83)
        & 2) != 0 )
      v4 = (_QWORD *)sub_1C7BB00(Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v4, v4[4]);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                  v5,
                                                                  (System_String_o *)StringLiteral_16935/*"ar200"*/,
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
  v11 = v3->fields.__4__this;
  if ( !v11 )
    goto LABEL_34;
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)v11->fields.eventFortificationWorkManagers;
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
    eventRoot = (struct UnityEngine_GameObject_o *)sub_1C7BD34(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)eventRoot,
      klass,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__,
      0);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__32_1 = (struct System_Action_EventFortificationWorkManager__o *)eventRoot;
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_1C7BA8C(&static_fields->__9__32_1, eventRoot);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)eventRoot,
    (const MethodInfo_383F83C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v16 = v3->fields.__4__this;
  if ( !v16 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)v16->fields.eventFortificationWorkMiniManagers;
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
    v19 = (Il2CppObject *)this[5].fields.__4__this->klass;
    mainPanel = (struct UnityEngine_GameObject_o *)sub_1C7BD34(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)mainPanel,
      v19,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__,
      0);
    v20 = EventFortificationManager___c_TypeInfo->static_fields;
    v20->__9__32_2 = (struct System_Action_EventFortificationWorkManager__o *)mainPanel;
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_1C7BA8C(&v20->__9__32_2, mainPanel);
  }
  if ( !eventFortificationWorkMiniManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)mainPanel,
    (const MethodInfo_383F83C *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  this = (EventFortificationManager___c__DisplayClass32_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v21 )
LABEL_34:
    sub_1C7BD40(this, method);
  CommonUI__maskFadein(v21, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}