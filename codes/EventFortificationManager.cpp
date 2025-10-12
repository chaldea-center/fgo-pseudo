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
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_4C31D68 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    sub_1C32C20(&EventFortificationManager___c__DisplayClass32_0_TypeInfo);
    byte_4C31D68 = 1;
  }
  v6 = (Il2CppObject *)sub_1C32E6C(EventFortificationManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor(v6, 0);
  if ( !v6 )
    goto LABEL_9;
  v6[1].klass = (Il2CppClass *)servantData;
  sub_1C32BC4(&v6[1], servantData);
  v6[1].monitor = this;
  v7 = sub_1C32BC4(&v6[1].monitor, this);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    v6,
    (intptr_t)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
    0);
  if ( !v11 )
LABEL_9:
    sub_1C32E7C(v7);
  CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, v13, 0);
}


void EventFortificationManager__CreateOrganizationUI(
        EventFortificationManager_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x22
  __int64 transform; // x0
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *autoFortificationButton_k__BackingField; // x22
  Il2CppObject *Component_object; // x0
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_Transform_o *v12; // x21
  AutoFortificationButtonComponent_o *v13; // x20
  int32_t eventId; // w21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x3

  if ( (byte_4C31D60 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31D60 = 1;
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
                           (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    *p_autoOrganizationBtn = (struct AutoFortificationButtonComponent_o *)Component_object;
    sub_1C32BC4(&this->fields.autoOrganizationBtn, Component_object);
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
    v11 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C313D6 )
    {
      transform = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D6 = 1;
    }
    if ( !v11 )
      goto LABEL_25;
    UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (__int64)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    v12 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C313D1 )
    {
      transform = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    if ( !v12
      || (UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
          (transform = (__int64)*p_autoOrganizationBtn) == 0)
      || (transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0)) == 0 )
    {
LABEL_25:
      sub_1C32E7C(transform);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  }
  v13 = this->fields.autoOrganizationBtn;
  eventId = this->fields.eventId;
  v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__,
    0);
  if ( !v13 )
    goto LABEL_25;
  AutoFortificationButtonComponent__Init(v13, eventId, v15, v16);
}


void EventFortificationManager__DestroyList(EventFortificationManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FortificationAssetManager_o *assetManager; // x0
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Object_o *gameObject; // x21
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  UnityEngine_Object_o *v11; // x21
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_Object_o *v14; // x21
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  UnityEngine_Object_o *v17; // x21
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_Object_o *v20; // x21
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x21
  UnityEngine_Object_o *v23; // x21
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x21
  EventFortificationManager___c_c *v25; // x0
  System_Action_object__o *_9__36_0; // x22
  Il2CppObject *v27; // x23
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_object__o *v29; // x21
  struct System_Collections_Generic_List_EventFortificationWorkManager__o **p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v31; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v33; // x0
  System_Action_object__o *_9__36_1; // x21
  Il2CppObject *v35; // x22
  struct EventFortificationManager___c_StaticFields *v36; // x0
  System_Collections_Generic_List_object__o *v37; // x20

  if ( (byte_4C31D6B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_EventFortificationManager___c__DestroyList_b__36_0__);
    sub_1C32C20(&Method_EventFortificationManager___c__DestroyList_b__36_1__);
    sub_1C32C20(&EventFortificationManager___c_TypeInfo);
    byte_4C31D6B = 1;
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
    v7 = (UnityEngine_Component_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_64;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_fortificationCamera = 0;
    sub_1C32BC4(&this->fields.fortificationCamera, 0);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(organizationPanel, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)*p_organizationPanel;
    if ( !*p_organizationPanel )
      goto LABEL_64;
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v11, 0);
    *p_organizationPanel = 0;
    sub_1C32BC4(&this->fields.organizationPanel, 0);
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationConfirmDialog, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_64;
    v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v14, 0);
    *p_fortificationConfirmDialog = 0;
    sub_1C32BC4(&this->fields.fortificationConfirmDialog, 0);
  }
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationAutomaticDialog, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)*p_fortificationAutomaticDialog;
    if ( !*p_fortificationAutomaticDialog )
      goto LABEL_64;
    v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v17, 0);
    *p_fortificationAutomaticDialog = 0;
    sub_1C32BC4(&this->fields.fortificationAutomaticDialog, 0);
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventFortificationListViewManager, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)*p_eventFortificationListViewManager;
    if ( !*p_eventFortificationListViewManager )
      goto LABEL_64;
    v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v20, 0);
    *p_eventFortificationListViewManager = 0;
    sub_1C32BC4(&this->fields.eventFortificationListViewManager, 0);
  }
  p_autoOrganizationBtn = &this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(autoOrganizationBtn, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)*p_autoOrganizationBtn;
    if ( *p_autoOrganizationBtn )
    {
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v23, 0);
      *p_autoOrganizationBtn = 0;
      sub_1C32BC4(&this->fields.autoOrganizationBtn, 0);
      goto LABEL_47;
    }
LABEL_64:
    sub_1C32E7C(v7);
  }
LABEL_47:
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( eventFortificationWorkManagers )
  {
    v25 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v25 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_0 = (System_Action_object__o *)v25->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = EventFortificationManager___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v25->static_fields->__9;
      _9__36_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(_9__36_0, v27, Method_EventFortificationManager___c__DestroyList_b__36_0__, 0);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_0;
      sub_1C32BC4(&static_fields->__9__36_0, _9__36_0);
    }
    System_Collections_Generic_List_object___ForEach(
      eventFortificationWorkManagers,
      (System_Action_T__o *)_9__36_0,
      (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v29 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v29,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v29;
    sub_1C32BC4(&this->fields.eventFortificationWorkManagers, v29);
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = &this->fields.eventFortificationWorkMiniManagers;
  v31 = (System_Collections_Generic_List_object__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers )
  {
    v33 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v33 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_1 = (System_Action_object__o *)v33->static_fields->__9__36_1;
    if ( !_9__36_1 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = EventFortificationManager___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v33->static_fields->__9;
      _9__36_1 = (System_Action_object__o *)sub_1C32E6C(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(_9__36_1, v35, Method_EventFortificationManager___c__DestroyList_b__36_1__, 0);
      v36 = EventFortificationManager___c_TypeInfo->static_fields;
      v36->__9__36_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_1;
      sub_1C32BC4(&v36->__9__36_1, _9__36_1);
    }
    System_Collections_Generic_List_object___ForEach(
      v31,
      (System_Action_T__o *)_9__36_1,
      (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v37 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v37,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    *p_eventFortificationWorkMiniManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v37;
    sub_1C32BC4(p_eventFortificationWorkMiniManagers, v37);
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
  System_Collections_Generic_List_object__o *v11; // x21
  const MethodInfo *v12; // x1
  struct FortificationAssetManager_o **p_assetManager; // x19
  FortificationAssetManager_o *v14; // x21
  struct FortificationAssetManager_o *assetManager; // t1
  FortificationAssetManager_o *v16; // x21
  const MethodInfo *v17; // x1
  int32_t v18; // w19
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3

  if ( (byte_4C31D64 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&FortificationAssetManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_1C32C20(&Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__);
    sub_1C32C20(&EventFortificationManager___c__DisplayClass28_0_TypeInfo);
    byte_4C31D64 = 1;
  }
  v9 = sub_1C32E6C(EventFortificationManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_8;
  *(_DWORD *)(v9 + 16) = eventId;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C32BC4(v9 + 24, this);
  *(_QWORD *)(v9 + 40) = uiParent;
  *(_DWORD *)(v9 + 32) = slotIndex;
  sub_1C32BC4(v9 + 40, uiParent);
  this->fields.eventId = *(_DWORD *)(v9 + 16);
  this->fields.slotIndex = *(_DWORD *)(v9 + 32);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v11;
  sub_1C32BC4(&this->fields.eventFortificationWorkManagers, v11);
  EventFortificationManager__InitFortificationWorkMini(this, v12);
  assetManager = this->fields.assetManager;
  p_assetManager = &this->fields.assetManager;
  v14 = assetManager;
  if ( !assetManager )
  {
    v16 = (FortificationAssetManager_o *)sub_1C32E6C(FortificationAssetManager_TypeInfo);
    FortificationAssetManager___ctor(v16, v17);
    *p_assetManager = v16;
    sub_1C32BC4(p_assetManager, v16);
    v14 = *p_assetManager;
  }
  v18 = *(_DWORD *)(v9 + 16);
  v19 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)v9, Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__, 0);
  if ( !v14 )
LABEL_8:
    sub_1C32E7C(v10);
  FortificationAssetManager__GetAssets(v14, v18, v19, v20);
}


void EventFortificationManager__InitDialog(EventFortificationManager_o *this, const MethodInfo *method)
{
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_GameObject_o *v5; // x0
  const MethodInfo *v6; // x2
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *fortificationConfirmDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x2
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  struct FortificationAssetManager_o *v14; // x8
  Il2CppObject *fortificationAutomaticDialog_k__BackingField; // x21
  Il2CppObject *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  const MethodInfo *v18; // x2

  if ( (byte_4C31D61 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31D61 = 1;
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
                                       (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    *p_fortificationConfirmDialog = (struct FortificationConfirmDialogComponent_o *)Component_object;
    sub_1C32BC4(&this->fields.fortificationConfirmDialog, Component_object);
    v5 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v11);
  }
  v5 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
  if ( !*p_fortificationConfirmDialog )
    goto LABEL_24;
  FortificationConfirmDialogComponent__Init((FortificationConfirmDialogComponent_o *)v5, this->fields.eventId, v6);
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationAutomaticDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v14 = this->fields.assetManager;
    if ( v14 )
    {
      fortificationAutomaticDialog_k__BackingField = (Il2CppObject *)v14->fields._fortificationAutomaticDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         fortificationAutomaticDialog_k__BackingField,
                                         (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v16 = UnityEngine_GameObject__GetComponent_object_(
                v5,
                (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
        *p_fortificationAutomaticDialog = (struct FortificationAutomaticDialogComponent_o *)v16;
        sub_1C32BC4(&this->fields.fortificationAutomaticDialog, v16);
        v5 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
        if ( *p_fortificationAutomaticDialog )
        {
          v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
          EventFortificationManager__LocateObjectToUIRoot(this, v17, v18);
          goto LABEL_22;
        }
      }
    }
LABEL_24:
    sub_1C32E7C(v5);
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

  if ( (byte_4C31D63 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationWorkManager__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_1C32C20(&Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__);
    sub_1C32C20(&EventFortificationManager___c_TypeInfo);
    byte_4C31D63 = 1;
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
      _9__25_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(
        _9__25_0,
        v8,
        Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__,
        0);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__25_0;
      sub_1C32BC4(&static_fields->__9__25_0, _9__25_0);
    }
    System_Collections_Generic_List_object___ForEach(
      v4,
      (System_Action_T__o *)_9__25_0,
      (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  *p_eventFortificationWorkMiniManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v10;
  sub_1C32BC4(p_eventFortificationWorkMiniManagers, v10);
}


void EventFortificationManager__InitListViewPanel(EventFortificationManager_o *this, const MethodInfo *method)
{
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_GameObject_o *v5; // x0
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *eventFortificationListViewPanel_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4C31D62 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31D62 = 1;
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
                                       (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v5,
                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___),
          *p_eventFortificationListViewManager = (struct EventFortificationListViewManager_o *)Component_object,
          sub_1C32BC4(&this->fields.eventFortificationListViewManager, Component_object),
          (v5 = (UnityEngine_GameObject_o *)*p_eventFortificationListViewManager) == 0) )
    {
LABEL_13:
      sub_1C32E7C(v5);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v10);
  }
}


bool EventFortificationManager__IsOrganizationPanelActive(EventFortificationManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *organizationPanel; // x0

  organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
  if ( !organizationPanel
    || (organizationPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(organizationPanel, 0)) == 0 )
  {
    sub_1C32E7C(organizationPanel);
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
  if ( !byte_4C313D6 )
  {
    this = (EventFortificationManager_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0)) == 0) )
  {
LABEL_9:
    sub_1C32E7C(this);
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
  if ( !byte_4C313D6 )
  {
    this = (EventFortificationManager_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v5
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v5,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0)) == 0) )
  {
LABEL_8:
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventFortificationManager__OnClickBackBtn(EventFortificationManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  void *organizationPanel; // x0
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  System_Action_object__o *v7; // x21
  Il2CppObject *v8; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *v10; // x8
  int32_t size; // w2
  int v12; // w9

  if ( (byte_4C31D6A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1C32C20(&Method_EventFortificationManager_OnClickBackBtn__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1C32C20(&Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__);
    sub_1C32C20(&EventFortificationManager___c_TypeInfo);
    byte_4C31D6A = 1;
  }
  v3 = Method_EventFortificationManager_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickBackBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_EventFortificationManager_OnClickBackBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
  v7 = *(System_Action_object__o **)(*((_QWORD *)organizationPanel + 23) + 56LL);
  if ( !v7 )
  {
    if ( !*((_DWORD *)organizationPanel + 56) )
    {
      j_il2cpp_runtime_class_init_0(organizationPanel);
      organizationPanel = EventFortificationManager___c_TypeInfo;
    }
    v8 = (Il2CppObject *)**((_QWORD **)organizationPanel + 23);
    v7 = (System_Action_object__o *)sub_1C32E6C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(v7, v8, Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, 0);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Action_EventFortificationWorkManager__o *)v7;
    organizationPanel = (void *)sub_1C32BC4(&static_fields->__9__34_0, v7);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_20;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)v7,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v10 = this->fields.eventFortificationWorkManagers;
  if ( !v10 )
    goto LABEL_20;
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0);
  organizationPanel = this->fields.eventFortificationListViewManager;
  if ( !organizationPanel )
LABEL_20:
    sub_1C32E7C(organizationPanel);
  ListViewManager__ClearScrollBarValue((ListViewManager_o *)organizationPanel, 1, 0);
}


void EventFortificationManager__OnClickOrganizationBtn(EventFortificationManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x4
  FortificationAssetManager_o *assetManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C31D69 & 1) == 0 )
  {
    sub_1C32C20(&Method_EventFortificationManager_OnClickOrganizationBtn__);
    byte_4C31D69 = 1;
  }
  v3 = Method_EventFortificationManager_OnClickOrganizationBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickOrganizationBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_EventFortificationManager_OnClickOrganizationBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  assetManager = this->fields.assetManager;
  if ( !assetManager
    || (assetManager = (FortificationAssetManager_o *)FortificationAssetManager__GetOrganizationBgTex(
                                                        assetManager,
                                                        this->fields.eventId,
                                                        this->fields.slotIndex,
                                                        0,
                                                        v5),
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
    sub_1C32E7C(assetManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assetManager, 1, 0);
  EventFortificationManager__SetFortificationWork(this, v7);
}


void EventFortificationManager__ResetRewardSceneObj(EventFortificationManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainPanel; // x0

  mainPanel = this->fields.mainPanel;
  if ( !mainPanel || (UnityEngine_GameObject__SetActive(mainPanel, 1, 0), (mainPanel = this->fields.eventRoot) == 0) )
    sub_1C32E7C(mainPanel);
  UnityEngine_GameObject__SetActive(mainPanel, 1, 0);
}


void EventFortificationManager__SelectFortificationServant(
        EventFortificationManager_o *this,
        EventFortificationWorkItem_o *item,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19
  __int64 v6; // x0
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21

  if ( (byte_4C31D67 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__);
    sub_1C32C20(&EventFortificationManager___c__DisplayClass31_0_TypeInfo);
    byte_4C31D67 = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(EventFortificationManager___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_9;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C32BC4(&v5[1], this);
  v5[1].monitor = item;
  v6 = sub_1C32BC4(&v5[1].monitor, item);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    v5,
    Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
    0);
  if ( !v10 )
LABEL_9:
    sub_1C32E7C(v6);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, v12, 0);
}


void EventFortificationManager__SetFortificationWork(EventFortificationManager_o *this, const MethodInfo *method)
{
  Il2CppObject *object; // x20
  DataManager_o *Instance; // x0
  _BOOL8 v5; // x0
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x23
  Il2CppObject *eventFortificationWorkObj_k__BackingField; // x22
  Il2CppObject *v9; // x0
  Il2CppObject *Component_object; // x0
  int32_t eventId; // w24
  EventFortificationWorkManager_o *v12; // x22
  System_Action_object__o *v13; // x25
  __int64 v14; // x0
  const MethodInfo *v15; // x6
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Component_o *organizationPanel; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x0
  UnityEngine_Transform_o *v22; // x24
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Transform_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C31D65 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_EventFortificationWorkItem__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_1C32C20(&Method_EventFortificationManager_SelectFortificationServant__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Resources_Load_UIAtlas___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_13681/*"Terminal/Atlas/TerminalAtlas"*/);
    byte_4C31D65 = 1;
  }
  entities = 0;
  memset(&v32, 0, sizeof(v32));
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_13681/*"Terminal/Atlas/TerminalAtlas"*/,
             (const MethodInfo_31799A8 *)Method_UnityEngine_Resources_Load_UIAtlas___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
    sub_1C32E7C(Instance);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v32,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v5 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1C32E7C(v5);
    current = (EventFortificationEntity_o *)v32.fields._current;
    eventFortificationWorkObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           eventFortificationWorkObj_k__BackingField,
           (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      sub_1C32E7C(0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v12 = (EventFortificationWorkManager_o *)Component_object;
    v13 = (System_Action_object__o *)sub_1C32E6C(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_object____ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0);
    if ( !v12 )
      sub_1C32E7C(v14);
    EventFortificationWorkManager__SetServantFortificationWork(
      v12,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v13,
      this->fields.organizationPanel,
      (UIAtlas_o *)object,
      v15);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
    if ( !organizationPanel )
      sub_1C32E7C(0);
    v18 = UnityEngine_Component__get_gameObject(organizationPanel, 0);
    if ( !v18 )
      sub_1C32E7C(0);
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v18, 0);
    GameObjectExtensions__SetParent(gameObject, transform, 0);
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    if ( !v20 )
      sub_1C32E7C(0);
    v21 = (__int64)UnityEngine_GameObject__get_transform(v20, 0);
    v22 = (UnityEngine_Transform_o *)v21;
    if ( !byte_4C313D6 )
    {
      v21 = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D6 = 1;
    }
    if ( !v22 )
      sub_1C32E7C(v21);
    UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    if ( !v23 )
      sub_1C32E7C(0);
    v24 = UnityEngine_GameObject__get_transform(v23, 0);
    if ( !current )
      sub_1C32E7C(v24);
    if ( !v24 )
      sub_1C32E7C(0);
    v34.fields.y = (float)current->fields.y;
    v34.fields.x = (float)current->fields.x;
    v34.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v24, v34, 0);
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    if ( !v25 )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(v25, 1, 0);
    eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
    if ( !eventFortificationWorkManagers )
      sub_1C32E7C(0);
    items = eventFortificationWorkManagers->fields._items;
    v28 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkManagers->fields._version;
    if ( !items )
      sub_1C32E7C(eventFortificationWorkManagers);
    size = eventFortificationWorkManagers->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkManagers,
        (Il2CppObject *)v12,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      eventFortificationWorkManagers->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v12;
      sub_1C32BC4(v30 + 4, v12);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void EventFortificationManager__SetFortificationWorkMini(EventFortificationManager_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  _BOOL8 v4; // x0
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x21
  Il2CppObject *eventFortificationWorkMiniObj_k__BackingField; // x20
  Il2CppObject *v8; // x0
  Il2CppObject *Component_object; // x20
  int32_t eventId; // w22
  System_Action_object__o *v11; // x23
  __int64 v12; // x0
  const MethodInfo *v13; // x6
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x2
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v18; // x0
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C31D66 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_EventFortificationWorkItem__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_1C32C20(&Method_EventFortificationManager_SelectFortificationServant__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31D66 = 1;
  }
  entities = 0;
  memset(&v25, 0, sizeof(v25));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
    sub_1C32E7C(Instance);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v4 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1C32E7C(v4);
    current = (EventFortificationEntity_o *)v25.fields._current;
    eventFortificationWorkMiniObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkMiniObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__Instantiate_object_(
           eventFortificationWorkMiniObj_k__BackingField,
           (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      sub_1C32E7C(0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v8,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v11 = (System_Action_object__o *)sub_1C32E6C(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_object____ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0);
    if ( !Component_object )
      sub_1C32E7C(v12);
    EventFortificationWorkManager__SetServantFortificationWork(
      (EventFortificationWorkManager_o *)Component_object,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v11,
      0,
      0,
      v13);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
    EventFortificationManager__LocateObjectToFotificationPanel(this, gameObject, v15);
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
    if ( !v16 )
      sub_1C32E7C(0);
    transform = UnityEngine_GameObject__get_transform(v16, 0);
    if ( !current )
      sub_1C32E7C(transform);
    if ( !transform )
      sub_1C32E7C(0);
    v27.fields.y = (float)current->fields.rewardSceneY;
    v27.fields.x = (float)current->fields.rewardSceneX;
    v27.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v27, 0);
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
    if ( !v18 )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(v18, 1, 0);
    eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkMiniManagers;
    if ( !eventFortificationWorkMiniManagers )
      sub_1C32E7C(0);
    items = eventFortificationWorkMiniManagers->fields._items;
    v21 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkMiniManagers->fields._version;
    if ( !items )
      sub_1C32E7C(eventFortificationWorkMiniManagers);
    size = eventFortificationWorkMiniManagers->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkMiniManagers,
        Component_object,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      eventFortificationWorkMiniManagers->fields._size = size + 1;
      v23[4] = (Il2CppClass *)Component_object;
      sub_1C32BC4(v23 + 4, Component_object);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void EventFortificationManager__SetFotificationOrganizationPanel(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  UnityEngine_GameObject_o *v5; // x0
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *fortificationCamera_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x2
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  struct FortificationAssetManager_o *v13; // x8
  Il2CppObject *organizationPanel_k__BackingField; // x21
  Il2CppObject *v15; // x0
  UnityEngine_GameObject_o *v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4C31D5F & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31D5F = 1;
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
                                       (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_22;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    *p_fortificationCamera = (struct MapCamera_o *)Component_object;
    sub_1C32BC4(&this->fields.fortificationCamera, Component_object);
    v5 = (UnityEngine_GameObject_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v10);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(organizationPanel, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v13 = this->fields.assetManager;
    if ( v13 )
    {
      organizationPanel_k__BackingField = (Il2CppObject *)v13->fields._organizationPanel_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         organizationPanel_k__BackingField,
                                         (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v15 = UnityEngine_GameObject__GetComponent_object_(
                v5,
                (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
        *p_organizationPanel = (struct FortificationOrganizationPanelComponent_o *)v15;
        sub_1C32BC4(&this->fields.organizationPanel, v15);
        v5 = (UnityEngine_GameObject_o *)*p_organizationPanel;
        if ( *p_organizationPanel )
        {
          v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
          EventFortificationManager__LocateObjectToUIRoot(this, v16, v17);
          return;
        }
      }
    }
LABEL_22:
    sub_1C32E7C(v5);
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
  Il2CppObject *MasterData_object; // x22
  struct SetSvtInfo_array *setSvtInfos; // x8
  int max_length; // w9
  int v11; // w11
  bool v12; // w10
  SetSvtInfo_o *v13; // x12
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C31D6C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31D6C = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(Instance);
  max_length = setSvtInfos->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = 0;
  v12 = 0;
  do
  {
    if ( max_length == v11 )
      sub_1C32E84(Instance);
    v13 = setSvtInfos->m_Items[v11];
    if ( !v13 )
      goto LABEL_23;
    ++v11;
    if ( v13->fields.position == position )
      v12 = 1;
  }
  while ( max_length != v11 );
  return v12;
}


void EventFortificationManager___CreateOrganizationUI_b__22_0(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  FortificationAutomaticDialogComponent_o *fortificationAutomaticDialog; // x0
  const MethodInfo *v6; // x2
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  FortificationAutomaticDialogComponent_o *v8; // x20
  System_Action_o *v9; // x21
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x3

  if ( (byte_4C31D6D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
    sub_1C32C20(&Method_EventFortificationManager__CreateOrganizationUI_b__22_1__);
    sub_1C32C20(&Method_EventFortificationManager__CreateOrganizationUI_b__22_2__);
    byte_4C31D6D = 1;
  }
  v3 = Method_EventFortificationManager__CreateOrganizationUI_b__22_0__;
  if ( (*((_BYTE *)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  fortificationAutomaticDialog = this->fields.fortificationAutomaticDialog;
  if ( !fortificationAutomaticDialog
    || (FortificationAutomaticDialogComponent__Init(fortificationAutomaticDialog, this->fields.eventId, v6),
        v8 = this->fields.fortificationAutomaticDialog,
        v9 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_1__,
          0),
        v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_2__,
          0),
        !v8) )
  {
LABEL_9:
    sub_1C32E7C(fortificationAutomaticDialog);
  }
  FortificationAutomaticDialogComponent__Open(v8, v9, v10, v11);
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

  if ( (byte_4C31D6E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1C32C20(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__);
    sub_1C32C20(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__);
    sub_1C32C20(&EventFortificationManager___c_TypeInfo);
    byte_4C31D6E = 1;
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
    _9__22_3 = (System_Action_object__o *)sub_1C32E6C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(_9__22_3, v6, Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__, 0);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__22_3 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_3;
    v3 = (EventFortificationManager___c_c *)sub_1C32BC4(&static_fields->__9__22_3, _9__22_3);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_18;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)_9__22_3,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
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
    _9__22_4 = (System_Action_object__o *)sub_1C32E6C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(_9__22_4, v10, Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__, 0);
    v11 = EventFortificationManager___c_TypeInfo->static_fields;
    v11->__9__22_4 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_4;
    v3 = (EventFortificationManager___c_c *)sub_1C32BC4(&v11->__9__22_4, _9__22_4);
  }
  if ( !eventFortificationWorkMiniManagers )
LABEL_18:
    sub_1C32E7C(v3);
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__22_4,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
}


void EventFortificationManager___CreateOrganizationUI_b__22_2(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8

  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    sub_1C32E7C(this);
  organizationPanel->fields.isTouchEnabled = 1;
}


void EventFortificationManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C31D6F & 1) == 0 )
  {
    sub_1C32C20(&EventFortificationManager___c_TypeInfo);
    byte_4C31D6F = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventFortificationManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventFortificationManager___c_TypeInfo->static_fields->__9 = (struct EventFortificationManager___c_o *)v1;
  sub_1C32BC4(EventFortificationManager___c_TypeInfo->static_fields, v1);
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
    sub_1C32E7C(this);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void EventFortificationManager___c___CloseServantFortificationList_b__32_2(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C32E7C(this);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void EventFortificationManager___c___CreateOrganizationUI_b__22_3(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C32E7C(this);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void EventFortificationManager___c___CreateOrganizationUI_b__22_4(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C32E7C(this);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void EventFortificationManager___c___DestroyList_b__36_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C31D73 & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31D73 = 1;
  }
  if ( !data )
    sub_1C32E7C(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(gameObject, 0);
}


void EventFortificationManager___c___DestroyList_b__36_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C31D74 & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31D74 = 1;
  }
  if ( !data )
    sub_1C32E7C(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(gameObject, 0);
}


void EventFortificationManager___c___InitFortificationWorkMini_b__25_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C31D70 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31D70 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0, 0);
  if ( v4 )
  {
    if ( !data )
      sub_1C32E7C(v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
  }
}


void EventFortificationManager___c___OnClickBackBtn_b__34_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C31D72 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31D72 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0, 0);
  if ( v4 )
  {
    if ( !data )
      sub_1C32E7C(v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
  }
}


void EventFortificationManager___c___SelectFortificationServant_b__31_1(
        EventFortificationManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v3; // x19

  if ( (byte_4C31D71 & 1) == 0 )
  {
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C31D71 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v3 )
    sub_1C32E7C(Instance);
  CommonUI__maskFadein(v3, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
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
  struct EventFortificationManager_o *v4; // x8
  struct EventFortificationManager_o *v5; // x8
  struct EventFortificationManager_o *v6; // x8
  UnityEngine_GameObject_o *v7; // x0
  struct EventFortificationManager_o *v8; // x8
  int32_t v9; // w20
  UISprite_o *organizationBtnSp; // x21
  struct EventFortificationManager_o *v11; // x8
  const MethodInfo *v12; // x4
  struct EventFortificationManager_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventFortificationManager_o *v15; // x8
  struct EventFortificationManager_o *v16; // x8
  int32_t eventId; // w21
  UISprite_o *maskSp; // x20
  struct EventFortificationManager_o *v19; // x8
  struct EventFortificationManager_o *v20; // x8
  UILabel_o *maskLb; // x20
  struct EventFortificationManager_o *v22; // x8
  struct UITexture_o *fortificationSlotBg; // x20
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2

  if ( (byte_4C31D75 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_17563/*"btn_txt_event_organization"*/);
    sub_1C32C20(&StringLiteral_6490/*"FORTIFICATION_EVENT_END_MSG"*/);
    sub_1C32C20(&StringLiteral_17455/*"btn_bg_event_organization"*/);
    sub_1C32C20(&StringLiteral_19288/*"event_tab_bg_mask"*/);
    byte_4C31D75 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  this->fields.eventId,
                                                                  (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
            v15 = this->fields.__4__this;
            if ( v15 )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v15->fields.maskSp;
              if ( Master_object )
              {
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)Master_object,
                                                                                0);
                if ( Master_object )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                  v16 = this->fields.__4__this;
                  if ( v16 )
                  {
                    eventId = this->fields.eventId;
                    maskSp = v16->fields.maskSp;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_40507600(
                                                                                    eventId,
                                                                                    maskSp,
                                                                                    (System_String_o *)StringLiteral_19288/*"event_tab_bg_mask"*/,
                                                                                    0);
                    v19 = this->fields.__4__this;
                    if ( v19 )
                    {
                      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v19->fields.maskLb;
                      if ( Master_object )
                      {
                        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)Master_object,
                                                                                        0);
                        if ( Master_object )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                          v20 = this->fields.__4__this;
                          if ( v20 )
                          {
                            maskLb = v20->fields.maskLb;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                                            (System_String_o *)StringLiteral_6490/*"FORTIFICATION_EVENT_END_MSG"*/,
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
    sub_1C32E7C(Master_object);
  }
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.maskSp;
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v5->fields.maskLb;
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v6->fields.organizationBtnSp;
  if ( !Master_object )
    goto LABEL_50;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GameObjectExtensions__GetParent(v7, 0);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_50;
  v9 = this->fields.eventId;
  organizationBtnSp = v8->fields.organizationBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_40507600(
                                                                  v9,
                                                                  organizationBtnSp,
                                                                  (System_String_o *)StringLiteral_17455/*"btn_bg_event_organization"*/,
                                                                  0);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_40507600(
                                                                  this->fields.eventId,
                                                                  v11->fields.organizationBtnTxtSp,
                                                                  (System_String_o *)StringLiteral_17563/*"btn_txt_event_organization"*/,
                                                                  0);
LABEL_41:
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v22->fields.assetManager;
  if ( !Master_object )
    goto LABEL_50;
  fortificationSlotBg = v22->fields.fortificationSlotBg;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)FortificationAssetManager__GetOrganizationBgTex(
                                                                  (FortificationAssetManager_o *)Master_object,
                                                                  this->fields.eventId,
                                                                  this->fields.slotIndex,
                                                                  1,
                                                                  v12);
  if ( !fortificationSlotBg )
    goto LABEL_50;
  ((void (__fastcall *)(struct UITexture_o *, DataMasterBase_TMaster__TEntity__PKType__o *, const MethodInfo *))fortificationSlotBg->klass->vtable._27_set_mainTexture.methodPtr)(
    fortificationSlotBg,
    Master_object,
    fortificationSlotBg->klass->vtable._27_set_mainTexture.method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__SetFotificationOrganizationPanel((EventFortificationManager_o *)Master_object, v24);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__InitDialog((EventFortificationManager_o *)Master_object, v25);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__InitListViewPanel((EventFortificationManager_o *)Master_object, v26);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__SetFortificationWorkMini((EventFortificationManager_o *)Master_object, v27);
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
  if ( (byte_4C31D76 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_bool__UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventFortificationManager_CloseServantFortificationList__);
    sub_1C32C20(&Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_1C32C20(&EventFortificationManager___c_TypeInfo);
    byte_4C31D76 = 1;
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
  v9 = (System_Action_bool__object__o *)sub_1C32E6C(System_Action_bool__UserServantEntity__TypeInfo);
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
    baseButton = (struct UICommonButton_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      (System_Action_o *)baseButton,
      klass,
      Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__,
      0);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__31_1 = (struct System_Action_o *)baseButton;
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_1C32BC4(&static_fields->__9__31_1, baseButton);
  }
  if ( !v12 )
LABEL_17:
    sub_1C32E7C(this);
  v12->fields.CallbackFunc2 = (struct System_Action_o *)baseButton;
  sub_1C32BC4(&v12->fields.CallbackFunc2, baseButton);
  EventFortificationListViewManager__SetMode_31698664(v12, 2, v16);
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
  const MethodInfo *v9; // x1
  struct EventFortificationManager_o *v10; // x8
  struct EventFortificationManager_o *v11; // x8
  struct EventFortificationManager_o *v12; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  struct UnityEngine_GameObject_o *eventRoot; // x21
  Il2CppObject *klass; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  struct EventFortificationManager_o *v17; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  struct UnityEngine_GameObject_o *mainPanel; // x20
  Il2CppObject *v20; // x21
  struct EventFortificationManager___c_StaticFields *v21; // x0
  CommonUI_o *v22; // x19

  v3 = this;
  if ( (byte_4C31D77 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__);
    sub_1C32C20(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__);
    sub_1C32C20(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    sub_1C32C20(&EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_1C32C20(&StringLiteral_16854/*"ar200"*/);
    byte_4C31D77 = 1;
  }
  if ( v3->fields.servantData )
  {
    v4 = Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__;
    if ( (*((_BYTE *)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__ + 83)
        & 2) != 0 )
      v4 = (_QWORD *)sub_1C32C38(Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                  v5,
                                                                  (System_String_o *)StringLiteral_16854/*"ar200"*/,
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
  v10 = v3->fields.__4__this;
  if ( !v10 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v10->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_34;
  EventFortificationListViewManager__DestroyList((EventFortificationListViewManager_o *)this, v9);
  v11 = v3->fields.__4__this;
  if ( !v11 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v11->fields.eventFortificationListViewManager;
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
    eventRoot = (struct UnityEngine_GameObject_o *)sub_1C32E6C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)eventRoot,
      klass,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__,
      0);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__32_1 = (struct System_Action_EventFortificationWorkManager__o *)eventRoot;
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_1C32BC4(&static_fields->__9__32_1, eventRoot);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)eventRoot,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v17 = v3->fields.__4__this;
  if ( !v17 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)v17->fields.eventFortificationWorkMiniManagers;
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
    v20 = (Il2CppObject *)this[5].fields.__4__this->klass;
    mainPanel = (struct UnityEngine_GameObject_o *)sub_1C32E6C(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)mainPanel,
      v20,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__,
      0);
    v21 = EventFortificationManager___c_TypeInfo->static_fields;
    v21->__9__32_2 = (struct System_Action_EventFortificationWorkManager__o *)mainPanel;
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_1C32BC4(&v21->__9__32_2, mainPanel);
  }
  if ( !eventFortificationWorkMiniManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)mainPanel,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  this = (EventFortificationManager___c__DisplayClass32_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v22 )
LABEL_34:
    sub_1C32E7C(this);
  CommonUI__maskFadein(v22, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}