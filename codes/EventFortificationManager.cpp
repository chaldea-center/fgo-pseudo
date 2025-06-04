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
  Il2CppObject *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4AFC4DF & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, requestFinish);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BC3008(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v8);
    sub_1BC3008(&EventFortificationManager___c__DisplayClass32_0_TypeInfo, v9);
    byte_4AFC4DF = 1;
  }
  v10 = (Il2CppObject *)sub_1BC3254(EventFortificationManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  v10[1].klass = (Il2CppClass *)servantData;
  sub_1BC2FAC(&v10[1]);
  v10[1].monitor = this;
  v11 = sub_1BC2FAC(&v10[1].monitor);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    v10,
    (intptr_t)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
    0LL);
  if ( !v16 )
LABEL_9:
    sub_1BC3264(v11, v12);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0LL);
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
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Transform_o *v16; // x21
  AutoFortificationButtonComponent_o *v17; // x20
  int32_t eventId; // w21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3

  if ( (byte_4AFC4D7 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, parent);
    sub_1BC3008(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___, v6);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4AFC4D7 = 1;
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
                           (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_25;
    *p_autoOrganizationBtn = (struct AutoFortificationButtonComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                            (UnityEngine_GameObject_o *)transform,
                                                                            (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    sub_1BC2FAC(&this->fields.autoOrganizationBtn);
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
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4AFBDB6 )
    {
      transform = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v12);
      byte_4AFBDB6 = 1;
    }
    if ( !v15 )
      goto LABEL_25;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (__int64)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    v16 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4AFBDB1 )
    {
      transform = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v12);
      byte_4AFBDB1 = 1;
    }
    if ( !v16
      || (UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
          (transform = (__int64)*p_autoOrganizationBtn) == 0)
      || (transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0 )
    {
LABEL_25:
      sub_1BC3264(transform, v12);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  v17 = this->fields.autoOrganizationBtn;
  eventId = this->fields.eventId;
  v19 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__,
    0LL);
  if ( !v17 )
    goto LABEL_25;
  AutoFortificationButtonComponent__Init(v17, eventId, v19, v20);
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
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  UnityEngine_Object_o *v19; // x21
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_Object_o *v22; // x21
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  UnityEngine_Object_o *v25; // x21
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_Object_o *v28; // x21
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x21
  UnityEngine_Object_o *v31; // x21
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x21
  EventFortificationManager___c_c *v33; // x0
  System_Action_object__o *_9__36_0; // x22
  Il2CppObject *v35; // x23
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_object__o *v37; // x21
  struct System_Collections_Generic_List_EventFortificationWorkManager__o **p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v39; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v41; // x0
  System_Action_object__o *_9__36_1; // x21
  Il2CppObject *v43; // x22
  struct EventFortificationManager___c_StaticFields *v44; // x0
  System_Collections_Generic_List_object__o *v45; // x20

  if ( (byte_4AFC4E2 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v5);
    sub_1BC3008(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&Method_EventFortificationManager___c__DestroyList_b__36_0__, v8);
    sub_1BC3008(&Method_EventFortificationManager___c__DestroyList_b__36_1__, v9);
    sub_1BC3008(&EventFortificationManager___c_TypeInfo, v10);
    byte_4AFC4E2 = 1;
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
    UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
    *p_fortificationCamera = 0LL;
    sub_1BC2FAC(&this->fields.fortificationCamera);
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
    v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(v19, 0LL);
    *p_organizationPanel = 0LL;
    sub_1BC2FAC(&this->fields.organizationPanel);
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
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(v22, 0LL);
    *p_fortificationConfirmDialog = 0LL;
    sub_1BC2FAC(&this->fields.fortificationConfirmDialog);
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
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(v25, 0LL);
    *p_fortificationAutomaticDialog = 0LL;
    sub_1BC2FAC(&this->fields.fortificationAutomaticDialog);
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
    v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(v28, 0LL);
    *p_eventFortificationListViewManager = 0LL;
    sub_1BC2FAC(&this->fields.eventFortificationListViewManager);
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
      v31 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70034300(v31, 0LL);
      *p_autoOrganizationBtn = 0LL;
      sub_1BC2FAC(&this->fields.autoOrganizationBtn);
      goto LABEL_47;
    }
LABEL_64:
    sub_1BC3264(v15, v14);
  }
LABEL_47:
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( eventFortificationWorkManagers )
  {
    v33 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v33 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_0 = (System_Action_object__o *)v33->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = EventFortificationManager___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v33->static_fields->__9;
      _9__36_0 = (System_Action_object__o *)sub_1BC3254(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(_9__36_0, v35, Method_EventFortificationManager___c__DestroyList_b__36_0__, 0LL);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_0;
      sub_1BC2FAC(&static_fields->__9__36_0);
    }
    System_Collections_Generic_List_object___ForEach(
      eventFortificationWorkManagers,
      (System_Action_T__o *)_9__36_0,
      (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v37 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v37,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v37;
    sub_1BC2FAC(&this->fields.eventFortificationWorkManagers);
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = &this->fields.eventFortificationWorkMiniManagers;
  v39 = (System_Collections_Generic_List_object__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers )
  {
    v41 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v41 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_1 = (System_Action_object__o *)v41->static_fields->__9__36_1;
    if ( !_9__36_1 )
    {
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v41 = EventFortificationManager___c_TypeInfo;
      }
      v43 = (Il2CppObject *)v41->static_fields->__9;
      _9__36_1 = (System_Action_object__o *)sub_1BC3254(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(_9__36_1, v43, Method_EventFortificationManager___c__DestroyList_b__36_1__, 0LL);
      v44 = EventFortificationManager___c_TypeInfo->static_fields;
      v44->__9__36_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_1;
      sub_1BC2FAC(&v44->__9__36_1);
    }
    System_Collections_Generic_List_object___ForEach(
      v39,
      (System_Action_T__o *)_9__36_1,
      (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v45 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v45,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    *p_eventFortificationWorkMiniManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v45;
    sub_1BC2FAC(p_eventFortificationWorkMiniManagers);
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
  System_Collections_Generic_List_object__o *v17; // x21
  const MethodInfo *v18; // x1
  struct FortificationAssetManager_o **p_assetManager; // x19
  FortificationAssetManager_o *v20; // x21
  struct FortificationAssetManager_o *assetManager; // t1
  FortificationAssetManager_o *v22; // x21
  const MethodInfo *v23; // x1
  int32_t v24; // w19
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x3

  if ( (byte_4AFC4DB & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&FortificationAssetManager_TypeInfo, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v11);
    sub_1BC3008(&Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__, v12);
    sub_1BC3008(&EventFortificationManager___c__DisplayClass28_0_TypeInfo, v13);
    byte_4AFC4DB = 1;
  }
  v14 = sub_1BC3254(EventFortificationManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_DWORD *)(v14 + 16) = eventId;
  *(_QWORD *)(v14 + 24) = this;
  sub_1BC2FAC(v14 + 24);
  *(_QWORD *)(v14 + 40) = uiParent;
  *(_DWORD *)(v14 + 32) = slotIndex;
  sub_1BC2FAC(v14 + 40);
  this->fields.eventId = *(_DWORD *)(v14 + 16);
  this->fields.slotIndex = *(_DWORD *)(v14 + 32);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v17;
  sub_1BC2FAC(&this->fields.eventFortificationWorkManagers);
  EventFortificationManager__InitFortificationWorkMini(this, v18);
  assetManager = this->fields.assetManager;
  p_assetManager = &this->fields.assetManager;
  v20 = assetManager;
  if ( !assetManager )
  {
    v22 = (FortificationAssetManager_o *)sub_1BC3254(FortificationAssetManager_TypeInfo);
    FortificationAssetManager___ctor(v22, v23);
    *p_assetManager = v22;
    sub_1BC2FAC(p_assetManager);
    v20 = *p_assetManager;
  }
  v24 = *(_DWORD *)(v14 + 16);
  v25 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v14,
    Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__,
    0LL);
  if ( !v20 )
LABEL_8:
    sub_1BC3264(v15, v16);
  FortificationAssetManager__GetAssets(v20, v24, v25, v26);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v14; // x2
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  struct FortificationAssetManager_o *v17; // x8
  Il2CppObject *fortificationAutomaticDialog_k__BackingField; // x21
  UnityEngine_GameObject_o *v19; // x0
  const MethodInfo *v20; // x2

  if ( (byte_4AFC4D8 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___, method);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___, v3);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4AFC4D8 = 1;
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
                                       (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_24;
    *p_fortificationConfirmDialog = (struct FortificationConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                      v8,
                                                                                      (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    sub_1BC2FAC(&this->fields.fortificationConfirmDialog);
    v8 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v14);
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
    v17 = this->fields.assetManager;
    if ( v17 )
    {
      fortificationAutomaticDialog_k__BackingField = (Il2CppObject *)v17->fields._fortificationAutomaticDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         fortificationAutomaticDialog_k__BackingField,
                                         (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        *p_fortificationAutomaticDialog = (struct FortificationAutomaticDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                              v8,
                                                                                              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
        sub_1BC2FAC(&this->fields.fortificationAutomaticDialog);
        v8 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
        if ( *p_fortificationAutomaticDialog )
        {
          v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v19, v20);
          goto LABEL_22;
        }
      }
    }
LABEL_24:
    sub_1BC3264(v8, v9);
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
  struct System_Collections_Generic_List_EventFortificationWorkManager__o **p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v10; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v12; // x0
  System_Action_object__o *_9__25_0; // x21
  Il2CppObject *v14; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_object__o *v16; // x20

  if ( (byte_4AFC4DA & 1) == 0 )
  {
    sub_1BC3008(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationWorkManager__get_Count__, v5);
    sub_1BC3008(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v6);
    sub_1BC3008(&Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__, v7);
    sub_1BC3008(&EventFortificationManager___c_TypeInfo, v8);
    byte_4AFC4DA = 1;
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = &this->fields.eventFortificationWorkMiniManagers;
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
      _9__25_0 = (System_Action_object__o *)sub_1BC3254(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(
        _9__25_0,
        v14,
        Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__,
        0LL);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__25_0;
      sub_1BC2FAC(&static_fields->__9__25_0);
    }
    System_Collections_Generic_List_object___ForEach(
      v10,
      (System_Action_T__o *)_9__25_0,
      (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  *p_eventFortificationWorkMiniManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v16;
  sub_1BC2FAC(p_eventFortificationWorkMiniManagers);
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
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4AFC4D9 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___, method);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    byte_4AFC4D9 = 1;
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
                                       (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v7
      || (*p_eventFortificationListViewManager = (struct EventFortificationListViewManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                                 v7,
                                                                                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___),
          sub_1BC2FAC(&this->fields.eventFortificationListViewManager),
          (v7 = (UnityEngine_GameObject_o *)*p_eventFortificationListViewManager) == 0LL) )
    {
LABEL_13:
      sub_1BC3264(v7, v8);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v12);
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
    sub_1BC3264(organizationPanel, method);
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
  if ( !byte_4AFBDB6 )
  {
    this = (EventFortificationManager_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, obj);
    byte_4AFBDB6 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1BC3264(this, obj);
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
  if ( !byte_4AFBDB6 )
  {
    this = (EventFortificationManager_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, obj);
    byte_4AFBDB6 = 1;
  }
  if ( !v5
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v5,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_8:
    sub_1BC3264(this, obj);
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
  __int64 v10; // x1
  void *organizationPanel; // x0
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  System_Action_object__o *v13; // x21
  Il2CppObject *v14; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *v16; // x8
  int32_t size; // w2
  int v18; // w9

  if ( (byte_4AFC4E1 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1BC3008(&Method_EventFortificationManager_OnClickBackBtn__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_1BC3008(&Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, v6);
    sub_1BC3008(&EventFortificationManager___c_TypeInfo, v7);
    byte_4AFC4E1 = 1;
  }
  v8 = Method_EventFortificationManager_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickBackBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BC3020(Method_EventFortificationManager_OnClickBackBtn__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0LL);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_20;
  FortificationOrganizationPanelComponent__Close((FortificationOrganizationPanelComponent_o *)organizationPanel, 0LL);
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
    v13 = (System_Action_object__o *)sub_1BC3254(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(v13, v14, Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, 0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Action_EventFortificationWorkManager__o *)v13;
    organizationPanel = (void *)sub_1BC2FAC(&static_fields->__9__34_0);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_20;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)v13,
    (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v16 = this->fields.eventFortificationWorkManagers;
  if ( !v16 )
    goto LABEL_20;
  size = v16->fields._size;
  v18 = v16->fields._version + 1;
  v16->fields._size = 0;
  v16->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0LL);
  organizationPanel = this->fields.eventFortificationListViewManager;
  if ( !organizationPanel )
LABEL_20:
    sub_1BC3264(organizationPanel, v10);
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
  const MethodInfo *v8; // x1

  if ( (byte_4AFC4E0 & 1) == 0 )
  {
    sub_1BC3008(&Method_EventFortificationManager_OnClickOrganizationBtn__, method);
    byte_4AFC4E0 = 1;
  }
  v3 = Method_EventFortificationManager_OnClickOrganizationBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickOrganizationBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_EventFortificationManager_OnClickOrganizationBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
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
    sub_1BC3264(assetManager, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assetManager, 1, 0LL);
  EventFortificationManager__SetFortificationWork(this, v8);
}


void __fastcall EventFortificationManager__ResetRewardSceneObj(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainPanel; // x0

  mainPanel = this->fields.mainPanel;
  if ( !mainPanel || (UnityEngine_GameObject__SetActive(mainPanel, 1, 0LL), (mainPanel = this->fields.eventRoot) == 0LL) )
    sub_1BC3264(mainPanel, method);
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
  Il2CppObject *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21

  if ( (byte_4AFC4DE & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, item);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__, v7);
    sub_1BC3008(&EventFortificationManager___c__DisplayClass31_0_TypeInfo, v8);
    byte_4AFC4DE = 1;
  }
  v9 = (Il2CppObject *)sub_1BC3254(EventFortificationManager___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  v9[1].klass = (Il2CppClass *)this;
  sub_1BC2FAC(&v9[1]);
  v9[1].monitor = item;
  v10 = sub_1BC2FAC(&v9[1].monitor);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    v9,
    Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
    0LL);
  if ( !v15 )
LABEL_9:
    sub_1BC3264(v10, v11);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
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
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x8
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFC4DC & 1) == 0 )
  {
    sub_1BC3008(&System_Action_EventFortificationWorkItem__TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventFortificationMaster___, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v6);
    sub_1BC3008(&Method_EventFortificationManager_SelectFortificationServant__, v7);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v10);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    sub_1BC3008(&Method_UnityEngine_Resources_Load_UIAtlas___, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BC3008(&StringLiteral_13552/*"Terminal/Atlas/TerminalAtlas"*/, v15);
    byte_4AFC4DC = 1;
  }
  entities = 0LL;
  memset(&v57, 0, sizeof(v57));
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_13552/*"Terminal/Atlas/TerminalAtlas"*/,
             (const MethodInfo_309AA50 *)Method_UnityEngine_Resources_Load_UIAtlas___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
    sub_1BC3264(Instance, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v57 = v56;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v19 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1BC3264(v19, v20);
    current = (EventFortificationEntity_o *)v57.fields._current;
    eventFortificationWorkObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v24 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkObj_k__BackingField,
            (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v24 )
      sub_1BC3264(0LL, v25);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v24,
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v28 = (EventFortificationWorkManager_o *)Component_object;
    v29 = (System_Action_object__o *)sub_1BC3254(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_object____ctor(
      v29,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0LL);
    if ( !v28 )
      sub_1BC3264(v30, v31);
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
      sub_1BC3264(0LL, v33);
    v36 = UnityEngine_Component__get_gameObject(organizationPanel, 0LL);
    if ( !v36 )
      sub_1BC3264(0LL, v37);
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v36, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0LL);
    if ( !v39 )
      sub_1BC3264(0LL, v40);
    v41 = (__int64)UnityEngine_GameObject__get_transform(v39, 0LL);
    v43 = (UnityEngine_Transform_o *)v41;
    if ( !byte_4AFBDB6 )
    {
      v41 = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v42);
      byte_4AFBDB6 = 1;
    }
    if ( !v43 )
      sub_1BC3264(v41, v42);
    UnityEngine_Transform__set_localScale(v43, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0LL);
    if ( !v44 )
      sub_1BC3264(0LL, v45);
    v46 = UnityEngine_GameObject__get_transform(v44, 0LL);
    if ( !current )
      sub_1BC3264(v46, v47);
    if ( !v46 )
      sub_1BC3264(0LL, v47);
    v59.fields.y = (float)current->fields.y;
    v59.fields.x = (float)current->fields.x;
    v59.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v46, v59, 0LL);
    v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0LL);
    if ( !v48 )
      sub_1BC3264(0LL, v49);
    UnityEngine_GameObject__SetActive(v48, 1, 0LL);
    eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
    if ( !eventFortificationWorkManagers )
      sub_1BC3264(0LL, v50);
    items = eventFortificationWorkManagers->fields._items;
    v53 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkManagers->fields._version;
    if ( !items )
      sub_1BC3264(eventFortificationWorkManagers, v50);
    size = eventFortificationWorkManagers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkManagers,
        (Il2CppObject *)v28,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &items->obj.klass + size;
      eventFortificationWorkManagers->fields._size = size + 1;
      v55[4] = (Il2CppClass *)v28;
      sub_1BC2FAC(v55 + 4);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x8
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFC4DD & 1) == 0 )
  {
    sub_1BC3008(&System_Action_EventFortificationWorkItem__TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventFortificationMaster___, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v6);
    sub_1BC3008(&Method_EventFortificationManager_SelectFortificationServant__, v7);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v10);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4AFC4DD = 1;
  }
  entities = 0LL;
  memset(&v44, 0, sizeof(v44));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
    sub_1BC3264(Instance, v15);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v44 = v43;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v16 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1BC3264(v16, v17);
    current = (EventFortificationEntity_o *)v44.fields._current;
    eventFortificationWorkMiniObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkMiniObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkMiniObj_k__BackingField,
            (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v21 )
      sub_1BC3264(0LL, v22);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v21,
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v25 = (System_Action_object__o *)sub_1BC3254(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_object____ctor(
      v25,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0LL);
    if ( !Component_object )
      sub_1BC3264(v26, v27);
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
      sub_1BC3264(0LL, v32);
    transform = UnityEngine_GameObject__get_transform(v31, 0LL);
    if ( !current )
      sub_1BC3264(transform, v34);
    if ( !transform )
      sub_1BC3264(0LL, v34);
    v46.fields.y = (float)current->fields.rewardSceneY;
    v46.fields.x = (float)current->fields.rewardSceneX;
    v46.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v46, 0LL);
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    if ( !v35 )
      sub_1BC3264(0LL, v36);
    UnityEngine_GameObject__SetActive(v35, 1, 0LL);
    eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkMiniManagers;
    if ( !eventFortificationWorkMiniManagers )
      sub_1BC3264(0LL, v37);
    items = eventFortificationWorkMiniManagers->fields._items;
    v40 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkMiniManagers->fields._version;
    if ( !items )
      sub_1BC3264(eventFortificationWorkMiniManagers, v37);
    size = eventFortificationWorkMiniManagers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkMiniManagers,
        Component_object,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &items->obj.klass + size;
      eventFortificationWorkMiniManagers->fields._size = size + 1;
      v42[4] = (Il2CppClass *)Component_object;
      sub_1BC2FAC(v42 + 4);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x2
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  struct FortificationAssetManager_o *v16; // x8
  Il2CppObject *organizationPanel_k__BackingField; // x21
  UnityEngine_GameObject_o *v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_4AFC4D6 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___, method);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_MapCamera___, v3);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4AFC4D6 = 1;
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
                                       (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_22;
    *p_fortificationCamera = (struct MapCamera_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v8,
                                                     (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    sub_1BC2FAC(&this->fields.fortificationCamera);
    v8 = (UnityEngine_GameObject_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v13);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(organizationPanel, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v16 = this->fields.assetManager;
    if ( v16 )
    {
      organizationPanel_k__BackingField = (Il2CppObject *)v16->fields._organizationPanel_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         organizationPanel_k__BackingField,
                                         (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        *p_organizationPanel = (struct FortificationOrganizationPanelComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                     v8,
                                                                                     (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
        sub_1BC2FAC(&this->fields.organizationPanel);
        v8 = (UnityEngine_GameObject_o *)*p_organizationPanel;
        if ( *p_organizationPanel )
        {
          v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v18, v19);
          return;
        }
      }
    }
LABEL_22:
    sub_1BC3264(v8, v9);
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
  __int64 v12; // x2
  __int64 v13; // x3
  struct SetSvtInfo_array *setSvtInfos; // x8
  int max_length; // w9
  int v16; // w11
  bool v17; // w10
  SetSvtInfo_o *v18; // x12
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AFC4E3 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, *(_QWORD *)&fortificationIdx);
    sub_1BC3008(&NetworkManager_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4AFC4E3 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v10);
    byte_4AFC1F1 = 1;
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
    sub_1BC3264(Instance, v10);
  max_length = setSvtInfos->max_length;
  if ( max_length < 1 )
    return 0;
  v16 = 0;
  v17 = 0;
  do
  {
    if ( max_length == v16 )
      sub_1BC326C(Instance, v10, v12, v13);
    v18 = setSvtInfos->m_Items[v16];
    if ( !v18 )
      goto LABEL_23;
    ++v16;
    if ( v18->fields.position == position )
      v17 = 1;
  }
  while ( max_length != v16 );
  return v17;
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

  if ( (byte_4AFC4E4 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, v3);
    sub_1BC3008(&Method_EventFortificationManager__CreateOrganizationUI_b__22_1__, v4);
    sub_1BC3008(&Method_EventFortificationManager__CreateOrganizationUI_b__22_2__, v5);
    byte_4AFC4E4 = 1;
  }
  v6 = Method_EventFortificationManager__CreateOrganizationUI_b__22_0__;
  if ( (*((_BYTE *)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BC3020(Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  fortificationAutomaticDialog = this->fields.fortificationAutomaticDialog;
  if ( !fortificationAutomaticDialog
    || (FortificationAutomaticDialogComponent__Init(fortificationAutomaticDialog, this->fields.eventId, v10),
        v12 = this->fields.fortificationAutomaticDialog,
        v13 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_1__,
          0LL),
        v14 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_2__,
          0LL),
        !v12) )
  {
LABEL_9:
    sub_1BC3264(fortificationAutomaticDialog, v9);
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
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  System_Action_object__o *_9__22_4; // x20
  Il2CppObject *v14; // x21
  struct EventFortificationManager___c_StaticFields *v15; // x0

  if ( (byte_4AFC4E5 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v3);
    sub_1BC3008(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__, v4);
    sub_1BC3008(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__, v5);
    sub_1BC3008(&EventFortificationManager___c_TypeInfo, v6);
    byte_4AFC4E5 = 1;
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
    _9__22_3 = (System_Action_object__o *)sub_1BC3254(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      _9__22_3,
      v10,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__22_3 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_3;
    v7 = (EventFortificationManager___c_c *)sub_1BC2FAC(&static_fields->__9__22_3);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_18;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)_9__22_3,
    (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
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
    v14 = (Il2CppObject *)v7->static_fields->__9;
    _9__22_4 = (System_Action_object__o *)sub_1BC3254(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      _9__22_4,
      v14,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__,
      0LL);
    v15 = EventFortificationManager___c_TypeInfo->static_fields;
    v15->__9__22_4 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_4;
    v7 = (EventFortificationManager___c_c *)sub_1BC2FAC(&v15->__9__22_4);
  }
  if ( !eventFortificationWorkMiniManagers )
LABEL_18:
    sub_1BC3264(v7, method);
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__22_4,
    (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_2(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8

  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    sub_1BC3264(this, method);
  organizationPanel->fields.isTouchEnabled = 1;
}


void __fastcall EventFortificationManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4AFC4E6 & 1) == 0 )
  {
    sub_1BC3008(&EventFortificationManager___c_TypeInfo, v1);
    byte_4AFC4E6 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(EventFortificationManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventFortificationManager___c_TypeInfo->static_fields->__9 = (struct EventFortificationManager___c_o *)v2;
  sub_1BC2FAC(EventFortificationManager___c_TypeInfo->static_fields);
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
    sub_1BC3264(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CloseServantFortificationList_b__32_2(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BC3264(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_3(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BC3264(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_4(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BC3264(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4AFC4EA & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, data);
    byte_4AFC4EA = 1;
  }
  if ( !data )
    sub_1BC3264(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4AFC4EB & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, data);
    byte_4AFC4EB = 1;
  }
  if ( !data )
    sub_1BC3264(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___InitFortificationWorkMini_b__25_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4AFC4E7 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, data);
    byte_4AFC4E7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v4 )
  {
    if ( !data )
      sub_1BC3264(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
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

  if ( (byte_4AFC4E9 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, data);
    byte_4AFC4E9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v4 )
  {
    if ( !data )
      sub_1BC3264(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
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

  if ( (byte_4AFC4E8 & 1) == 0 )
  {
    sub_1BC3008(&AvalonSceneManager_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4AFC4E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    sub_1BC3264(Instance, v4);
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

  if ( (byte_4AFC4EC & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    sub_1BC3008(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1BC3008(&LocalizationManager_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_17409/*"btn_txt_event_organization"*/, v7);
    sub_1BC3008(&StringLiteral_6437/*"FORTIFICATION_EVENT_END_MSG"*/, v8);
    sub_1BC3008(&StringLiteral_17305/*"btn_bg_event_organization"*/, v9);
    sub_1BC3008(&StringLiteral_19105/*"event_tab_bg_mask"*/, v10);
    byte_4AFC4EC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  this->fields.eventId,
                                                                  (const MethodInfo_32AF070 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_39643540(
                                                                                    eventId,
                                                                                    maskSp,
                                                                                    (System_String_o *)StringLiteral_19105/*"event_tab_bg_mask"*/,
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
                                                                                            (System_String_o *)StringLiteral_6437/*"FORTIFICATION_EVENT_END_MSG"*/,
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
    sub_1BC3264(Master_object, v12);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_39643540(
                                                                  v18,
                                                                  organizationBtnSp,
                                                                  (System_String_o *)StringLiteral_17305/*"btn_bg_event_organization"*/,
                                                                  0LL);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_39643540(
                                                                  this->fields.eventId,
                                                                  v20->fields.organizationBtnTxtSp,
                                                                  (System_String_o *)StringLiteral_17409/*"btn_txt_event_organization"*/,
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
  struct EventFortificationManager_o *v15; // x8
  EventFortificationListViewManager_o *v16; // x19
  struct UICommonButton_o *baseButton; // x20
  Il2CppObject *klass; // x21
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  const MethodInfo *v20; // x2

  v2 = this;
  if ( (byte_4AFC4ED & 1) == 0 )
  {
    sub_1BC3008(&System_Action_bool__UserServantEntity__TypeInfo, method);
    sub_1BC3008(&System_Action_TypeInfo, v3);
    sub_1BC3008(&Method_EventFortificationManager_CloseServantFortificationList__, v4);
    sub_1BC3008(&Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, v5);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_1BC3008(&EventFortificationManager___c_TypeInfo, v6);
    byte_4AFC4ED = 1;
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
  v13 = (System_Action_bool__object__o *)sub_1BC3254(System_Action_bool__UserServantEntity__TypeInfo);
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
  v15 = v2->fields.__4__this;
  if ( !v15 )
    goto LABEL_17;
  v16 = v15->fields.eventFortificationListViewManager;
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
    baseButton = (struct UICommonButton_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      (System_Action_o *)baseButton,
      klass,
      Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__31_1 = (struct System_Action_o *)baseButton;
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_1BC2FAC(&static_fields->__9__31_1);
  }
  if ( !v16 )
LABEL_17:
    sub_1BC3264(this, method);
  v16->fields.CallbackFunc2 = (struct System_Action_o *)baseButton;
  sub_1BC2FAC(&v16->fields.CallbackFunc2);
  EventFortificationListViewManager__SetMode_30964952(v16, 2, v20);
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
  struct EventFortificationManager_o *v24; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  struct UnityEngine_GameObject_o *mainPanel; // x20
  Il2CppObject *v27; // x21
  struct EventFortificationManager___c_StaticFields *v28; // x0
  CommonUI_o *v29; // x19

  v3 = this;
  if ( (byte_4AFC4EE & 1) == 0 )
  {
    sub_1BC3008(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__, v7);
    sub_1BC3008(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__, v8);
    sub_1BC3008(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v9);
    sub_1BC3008(&EventFortificationManager___c_TypeInfo, v10);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_1BC3008(&StringLiteral_16706/*"ar200"*/, v11);
    byte_4AFC4EE = 1;
  }
  if ( v3->fields.servantData )
  {
    v12 = Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__;
    if ( (*((_BYTE *)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BC3020(Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v12, v12[4]);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                  v13,
                                                                  (System_String_o *)StringLiteral_16706/*"ar200"*/,
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
    eventRoot = (struct UnityEngine_GameObject_o *)sub_1BC3254(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)eventRoot,
      klass,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__32_1 = (struct System_Action_EventFortificationWorkManager__o *)eventRoot;
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_1BC2FAC(&static_fields->__9__32_1);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)eventRoot,
    (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v24 = v3->fields.__4__this;
  if ( !v24 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)v24->fields.eventFortificationWorkMiniManagers;
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
    v27 = (Il2CppObject *)this[5].fields.__4__this->klass;
    mainPanel = (struct UnityEngine_GameObject_o *)sub_1BC3254(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)mainPanel,
      v27,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__,
      0LL);
    v28 = EventFortificationManager___c_TypeInfo->static_fields;
    v28->__9__32_2 = (struct System_Action_EventFortificationWorkManager__o *)mainPanel;
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_1BC2FAC(&v28->__9__32_2);
  }
  if ( !eventFortificationWorkMiniManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)mainPanel,
    (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  this = (EventFortificationManager___c__DisplayClass32_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v29 )
LABEL_34:
    sub_1BC3264(this, method);
  CommonUI__maskFadein(v29, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}