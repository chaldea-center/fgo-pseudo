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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4A5EF1B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    sub_1B885B0(&EventFortificationManager___c__DisplayClass32_0_TypeInfo);
    byte_4A5EF1B = 1;
  }
  v6 = sub_1B887FC(EventFortificationManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_9;
  *(_QWORD *)(v6 + 16) = servantData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)servantData, v9, v10);
  *(_QWORD *)(v6 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 24), (int32_t)this, v11, v12);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v6,
    (intptr_t)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
    0LL);
  if ( !v16 )
LABEL_9:
    sub_1B8880C(v7, v8);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0LL);
}


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
  Il2CppObject *autoFortificationButton_k__BackingField; // x22
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Transform_o *v14; // x21
  UnityEngine_Transform_o *v15; // x21
  AutoFortificationButtonComponent_o *v16; // x20
  int32_t eventId; // w21
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x3

  if ( (byte_4A5EF13 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF13 = 1;
  }
  p_autoOrganizationBtn = &this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(autoOrganizationBtn, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_25;
    autoFortificationButton_k__BackingField = (Il2CppObject *)assetManager->fields._autoFortificationButton_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              autoFortificationButton_k__BackingField,
                                              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         transform,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    *p_autoOrganizationBtn = (struct AutoFortificationButtonComponent_o *)Component_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.autoOrganizationBtn,
      (int32_t)Component_object,
      v12,
      v13);
    transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0LL);
    if ( !transform )
      goto LABEL_25;
    UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)transform, parent, 0LL);
    transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0LL);
    v14 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A55CE6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v14 )
      goto LABEL_25;
    UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A55CE1 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    if ( !v15
      || (UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
          (transform = (UnityEngine_GameObject_o *)*p_autoOrganizationBtn) == 0LL)
      || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
    {
LABEL_25:
      sub_1B8880C(transform, v8);
    }
    UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  }
  v16 = this->fields.autoOrganizationBtn;
  eventId = this->fields.eventId;
  v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__,
    0LL);
  if ( !v16 )
    goto LABEL_25;
  AutoFortificationButtonComponent__Init(v16, eventId, v18, v19);
}


void __fastcall EventFortificationManager__DestroyList(EventFortificationManager_o *this, const MethodInfo *method)
{
  FortificationAssetManager_o *assetManager; // x0
  struct MapCamera_o **p_fortificationCamera; // x20
  UnityEngine_Object_o *fortificationCamera; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_Object_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  UnityEngine_Object_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_Object_o *v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x21
  UnityEngine_Object_o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x21
  EventFortificationManager___c_c *v37; // x0
  System_Action_object__o *_9__36_0; // x22
  Il2CppObject *v39; // x23
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_Generic_List_object__o *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  ServantStatusBattleListViewItem_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v47; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v49; // x0
  System_Action_object__o *_9__36_1; // x21
  Il2CppObject *v51; // x22
  struct EventFortificationManager___c_StaticFields *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_Collections_Generic_List_object__o *v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3

  if ( (byte_4A5EF1E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_EventFortificationManager___c__DestroyList_b__36_0__);
    sub_1B885B0(&Method_EventFortificationManager___c__DestroyList_b__36_1__);
    sub_1B885B0(&EventFortificationManager___c_TypeInfo);
    byte_4A5EF1E = 1;
  }
  assetManager = this->fields.assetManager;
  if ( assetManager )
    FortificationAssetManager__Release(assetManager, this->fields.eventId, 0LL);
  p_fortificationCamera = &this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationCamera, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_64;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_fortificationCamera = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fortificationCamera, 0, v9, v10);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(organizationPanel, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)*p_organizationPanel;
    if ( !*p_organizationPanel )
      goto LABEL_64;
    v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v13, 0LL);
    *p_organizationPanel = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.organizationPanel, 0, v14, v15);
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationConfirmDialog, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_64;
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v18, 0LL);
    *p_fortificationConfirmDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fortificationConfirmDialog, 0, v19, v20);
  }
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationAutomaticDialog, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)*p_fortificationAutomaticDialog;
    if ( !*p_fortificationAutomaticDialog )
      goto LABEL_64;
    v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v23, 0LL);
    *p_fortificationAutomaticDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fortificationAutomaticDialog, 0, v24, v25);
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventFortificationListViewManager, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)*p_eventFortificationListViewManager;
    if ( !*p_eventFortificationListViewManager )
      goto LABEL_64;
    v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v28, 0LL);
    *p_eventFortificationListViewManager = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationListViewManager, 0, v29, v30);
  }
  p_autoOrganizationBtn = &this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(autoOrganizationBtn, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)*p_autoOrganizationBtn;
    if ( *p_autoOrganizationBtn )
    {
      v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v33, 0LL);
      *p_autoOrganizationBtn = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.autoOrganizationBtn, 0, v34, v35);
      goto LABEL_47;
    }
LABEL_64:
    sub_1B8880C(v7, v6);
  }
LABEL_47:
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( eventFortificationWorkManagers )
  {
    v37 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v37 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_0 = (System_Action_object__o *)v37->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = EventFortificationManager___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v37->static_fields->__9;
      _9__36_0 = (System_Action_object__o *)sub_1B887FC(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(_9__36_0, v39, Method_EventFortificationManager___c__DestroyList_b__36_0__, 0LL);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v41, v42);
    }
    System_Collections_Generic_List_object___ForEach(
      eventFortificationWorkManagers,
      (System_Action_T__o *)_9__36_0,
      (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v43 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v43,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v43;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationWorkManagers,
      (int32_t)v43,
      v44,
      v45);
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationWorkMiniManagers;
  v47 = (System_Collections_Generic_List_object__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers )
  {
    v49 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v49 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_1 = (System_Action_object__o *)v49->static_fields->__9__36_1;
    if ( !_9__36_1 )
    {
      if ( !v49->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49);
        v49 = EventFortificationManager___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v49->static_fields->__9;
      _9__36_1 = (System_Action_object__o *)sub_1B887FC(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(_9__36_1, v51, Method_EventFortificationManager___c__DestroyList_b__36_1__, 0LL);
      v52 = EventFortificationManager___c_TypeInfo->static_fields;
      v52->__9__36_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v52->__9__36_1, (int32_t)_9__36_1, v53, v54);
    }
    System_Collections_Generic_List_object___ForEach(
      v47,
      (System_Action_T__o *)_9__36_1,
      (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v55 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v55,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    p_eventFortificationWorkMiniManagers->klass = (ServantStatusBattleListViewItem_c *)v55;
    sub_1B88554(p_eventFortificationWorkMiniManagers, (int32_t)v55, v56, v57);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_object__o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  ServantStatusBattleListViewItem_o *p_assetManager; // x19
  FortificationAssetManager_o *klass; // x21
  struct FortificationAssetManager_o *assetManager; // t1
  FortificationAssetManager_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w19
  System_Action_o *v27; // x22

  if ( (byte_4A5EF17 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&FortificationAssetManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_1B885B0(&Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__);
    sub_1B885B0(&EventFortificationManager___c__DisplayClass28_0_TypeInfo);
    byte_4A5EF17 = 1;
  }
  v9 = sub_1B887FC(EventFortificationManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_DWORD *)(v9 + 16) = eventId;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = uiParent;
  *(_DWORD *)(v9 + 32) = slotIndex;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)uiParent, v14, v15);
  this->fields.eventId = *(_DWORD *)(v9 + 16);
  this->fields.slotIndex = *(_DWORD *)(v9 + 32);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationWorkManagers, (int32_t)v16, v17, v18);
  EventFortificationManager__InitFortificationWorkMini(this, v19);
  assetManager = this->fields.assetManager;
  p_assetManager = (ServantStatusBattleListViewItem_o *)&this->fields.assetManager;
  klass = assetManager;
  if ( !assetManager )
  {
    v23 = (FortificationAssetManager_o *)sub_1B887FC(FortificationAssetManager_TypeInfo);
    FortificationAssetManager___ctor(v23, 0LL);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v23;
    sub_1B88554(p_assetManager, (int32_t)v23, v24, v25);
    klass = (FortificationAssetManager_o *)p_assetManager->klass;
  }
  v26 = *(_DWORD *)(v9 + 16);
  v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__,
    0LL);
  if ( !klass )
LABEL_8:
    sub_1B8880C(v10, v11);
  FortificationAssetManager__GetAssets(klass, v26, v27, 0LL);
}


void __fastcall EventFortificationManager__InitDialog(EventFortificationManager_o *this, const MethodInfo *method)
{
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *fortificationConfirmDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x2
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  struct FortificationAssetManager_o *v16; // x8
  Il2CppObject *fortificationAutomaticDialog_k__BackingField; // x21
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_GameObject_o *v21; // x0
  const MethodInfo *v22; // x2

  if ( (byte_4A5EF14 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF14 = 1;
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationConfirmDialog, 0LL, 0LL);
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
                                       (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    *p_fortificationConfirmDialog = (struct FortificationConfirmDialogComponent_o *)Component_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.fortificationConfirmDialog,
      (int32_t)Component_object,
      v10,
      v11);
    v5 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v13);
  }
  v5 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
  if ( !*p_fortificationConfirmDialog )
    goto LABEL_24;
  FortificationConfirmDialogComponent__Init((FortificationConfirmDialogComponent_o *)v5, this->fields.eventId, 0LL);
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationAutomaticDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v16 = this->fields.assetManager;
    if ( v16 )
    {
      fortificationAutomaticDialog_k__BackingField = (Il2CppObject *)v16->fields._fortificationAutomaticDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         fortificationAutomaticDialog_k__BackingField,
                                         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v18 = UnityEngine_GameObject__GetComponent_object_(
                v5,
                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
        *p_fortificationAutomaticDialog = (struct FortificationAutomaticDialogComponent_o *)v18;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.fortificationAutomaticDialog,
          (int32_t)v18,
          v19,
          v20);
        v5 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
        if ( *p_fortificationAutomaticDialog )
        {
          v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v21, v22);
          goto LABEL_22;
        }
      }
    }
LABEL_24:
    sub_1B8880C(v5, v6);
  }
LABEL_22:
  v5 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
  if ( !*p_fortificationAutomaticDialog )
    goto LABEL_24;
  BaseDialog__Init((BaseDialog_o *)v5, 0LL);
}


void __fastcall EventFortificationManager__InitFortificationWorkMini(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v6; // x0
  System_Action_object__o *_9__25_0; // x21
  Il2CppObject *v8; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5EF16 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
    sub_1B885B0(&Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__);
    sub_1B885B0(&EventFortificationManager___c_TypeInfo);
    byte_4A5EF16 = 1;
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationWorkMiniManagers;
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
      _9__25_0 = (System_Action_object__o *)sub_1B887FC(System_Action_EventFortificationWorkManager__TypeInfo);
      System_Action_object____ctor(
        _9__25_0,
        v8,
        Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__,
        0LL);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__25_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v10, v11);
    }
    System_Collections_Generic_List_object___ForEach(
      v4,
      (System_Action_T__o *)_9__25_0,
      (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  p_eventFortificationWorkMiniManagers->klass = (ServantStatusBattleListViewItem_c *)v12;
  sub_1B88554(p_eventFortificationWorkMiniManagers, (int32_t)v12, v13, v14);
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
  Il2CppObject *eventFortificationListViewPanel_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A5EF15 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF15 = 1;
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(eventFortificationListViewManager, 0LL, 0LL);
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
                                       (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v5,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___),
          *p_eventFortificationListViewManager = (struct EventFortificationListViewManager_o *)Component_object,
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationListViewManager,
            (int32_t)Component_object,
            v10,
            v11),
          (v5 = (UnityEngine_GameObject_o *)*p_eventFortificationListViewManager) == 0LL) )
    {
LABEL_13:
      sub_1B8880C(v5, v6);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v13);
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
    sub_1B8880C(organizationPanel, method);
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
  if ( !byte_4A55CE6 )
  {
    this = (EventFortificationManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(this, obj);
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
  if ( !byte_4A55CE6 )
  {
    this = (EventFortificationManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v5
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v5,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_8:
    sub_1B8880C(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventFortificationManager__OnClickBackBtn(EventFortificationManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  void *organizationPanel; // x0
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  System_Action_object__o *v8; // x21
  Il2CppObject *v9; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *v13; // x8
  int32_t size; // w2
  int v15; // w9

  if ( (byte_4A5EF1D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1B885B0(&Method_EventFortificationManager_OnClickBackBtn__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1B885B0(&Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__);
    sub_1B885B0(&EventFortificationManager___c_TypeInfo);
    byte_4A5EF1D = 1;
  }
  v3 = Method_EventFortificationManager_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickBackBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationManager_OnClickBackBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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
  v8 = *(System_Action_object__o **)(*((_QWORD *)organizationPanel + 23) + 56LL);
  if ( !v8 )
  {
    if ( !*((_DWORD *)organizationPanel + 56) )
    {
      j_il2cpp_runtime_class_init_0(organizationPanel);
      organizationPanel = EventFortificationManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)**((_QWORD **)organizationPanel + 23);
    v8 = (System_Action_object__o *)sub_1B887FC(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(v8, v9, Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, 0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Action_EventFortificationWorkManager__o *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)v8, v11, v12);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_20;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)v8,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v13 = this->fields.eventFortificationWorkManagers;
  if ( !v13 )
    goto LABEL_20;
  size = v13->fields._size;
  v15 = v13->fields._version + 1;
  v13->fields._size = 0;
  v13->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v13->fields._items, 0, size, 0LL);
  organizationPanel = this->fields.eventFortificationListViewManager;
  if ( !organizationPanel )
LABEL_20:
    sub_1B8880C(organizationPanel, v5);
  ListViewManager__ClearScrollBarValue((ListViewManager_o *)organizationPanel, 1, 0LL);
}


void __fastcall EventFortificationManager__OnClickOrganizationBtn(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  FortificationAssetManager_o *assetManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A5EF1C & 1) == 0 )
  {
    sub_1B885B0(&Method_EventFortificationManager_OnClickOrganizationBtn__);
    byte_4A5EF1C = 1;
  }
  v3 = Method_EventFortificationManager_OnClickOrganizationBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickOrganizationBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationManager_OnClickOrganizationBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
    sub_1B8880C(assetManager, v5);
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
    sub_1B8880C(mainPanel, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21

  if ( (byte_4A5EF1A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__);
    sub_1B885B0(&EventFortificationManager___c__DisplayClass31_0_TypeInfo);
    byte_4A5EF1A = 1;
  }
  v5 = sub_1B887FC(EventFortificationManager___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)item, v10, v11);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
    0LL);
  if ( !v15 )
LABEL_9:
    sub_1B8880C(v6, v7);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall EventFortificationManager__SetFortificationWork(
        EventFortificationManager_o *this,
        const MethodInfo *method)
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
  UnityEngine_Transform_o *v28; // x0
  __int64 v29; // x1
  UnityEngine_Transform_o *v30; // x24
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  UnityEngine_Transform_o *v33; // x0
  __int64 v34; // x1
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EF18 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_EventFortificationWorkItem__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_1B885B0(&Method_EventFortificationManager_SelectFortificationServant__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_UIAtlas___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_13588/*"Terminal/Atlas/TerminalAtlas"*/);
    byte_4A5EF18 = 1;
  }
  entities = 0LL;
  memset(&v46, 0, sizeof(v46));
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_13588/*"Terminal/Atlas/TerminalAtlas"*/,
             (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_UIAtlas___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
    sub_1B8880C(Instance, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v46,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v6 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1B8880C(v6, v7);
    current = (EventFortificationEntity_o *)v46.fields._current;
    eventFortificationWorkObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkObj_k__BackingField,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      sub_1B8880C(0LL, v12);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v11,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v15 = (EventFortificationWorkManager_o *)Component_object;
    v16 = (System_Action_object__o *)sub_1B887FC(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_object____ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0LL);
    if ( !v15 )
      sub_1B8880C(v17, v18);
    EventFortificationWorkManager__SetServantFortificationWork(
      v15,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v16,
      this->fields.organizationPanel,
      (UIAtlas_o *)object,
      v19);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
    organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
    if ( !organizationPanel )
      sub_1B8880C(0LL, v20);
    v23 = UnityEngine_Component__get_gameObject(organizationPanel, 0LL);
    if ( !v23 )
      sub_1B8880C(0LL, v24);
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
    if ( !v26 )
      sub_1B8880C(0LL, v27);
    v28 = UnityEngine_GameObject__get_transform(v26, 0LL);
    v30 = v28;
    if ( !byte_4A55CE6 )
    {
      v28 = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v30 )
      sub_1B8880C(v28, v29);
    UnityEngine_Transform__set_localScale(v30, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
    if ( !v31 )
      sub_1B8880C(0LL, v32);
    v33 = UnityEngine_GameObject__get_transform(v31, 0LL);
    if ( !current )
      sub_1B8880C(v33, v34);
    if ( !v33 )
      sub_1B8880C(0LL, v34);
    v48.fields.y = (float)current->fields.y;
    v48.fields.x = (float)current->fields.x;
    v48.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v33, v48, 0LL);
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
    if ( !v35 )
      sub_1B8880C(0LL, v36);
    UnityEngine_GameObject__SetActive(v35, 1, 0LL);
    eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
    if ( !eventFortificationWorkManagers )
      sub_1B8880C(0LL, v37);
    items = eventFortificationWorkManagers->fields._items;
    v42 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkManagers->fields._version;
    if ( !items )
      sub_1B8880C(eventFortificationWorkManagers, v37);
    size = eventFortificationWorkManagers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkManagers,
        (Il2CppObject *)v15,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &items->obj.klass + size;
      eventFortificationWorkManagers->fields._size = size + 1;
      v44[4] = (Il2CppClass *)v15;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v15, v38, v39);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
}


void __fastcall EventFortificationManager__SetFortificationWorkMini(
        EventFortificationManager_o *this,
        const MethodInfo *method)
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
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EF19 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_EventFortificationWorkItem__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_1B885B0(&Method_EventFortificationManager_SelectFortificationServant__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EF19 = 1;
  }
  entities = 0LL;
  memset(&v35, 0, sizeof(v35));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
    sub_1B8880C(Instance, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v35,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v5 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1B8880C(v5, v6);
    current = (EventFortificationEntity_o *)v35.fields._current;
    eventFortificationWorkMiniObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkMiniObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkMiniObj_k__BackingField,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10 )
      sub_1B8880C(0LL, v11);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v10,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v14 = (System_Action_object__o *)sub_1B887FC(System_Action_EventFortificationWorkItem__TypeInfo);
    System_Action_object____ctor(
      v14,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0LL);
    if ( !Component_object )
      sub_1B8880C(v15, v16);
    EventFortificationWorkManager__SetServantFortificationWork(
      (EventFortificationWorkManager_o *)Component_object,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v14,
      0LL,
      0LL,
      v17);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    EventFortificationManager__LocateObjectToFotificationPanel(this, gameObject, v19);
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    if ( !v20 )
      sub_1B8880C(0LL, v21);
    transform = UnityEngine_GameObject__get_transform(v20, 0LL);
    if ( !current )
      sub_1B8880C(transform, v23);
    if ( !transform )
      sub_1B8880C(0LL, v23);
    v37.fields.y = (float)current->fields.rewardSceneY;
    v37.fields.x = (float)current->fields.rewardSceneX;
    v37.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v37, 0LL);
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    if ( !v24 )
      sub_1B8880C(0LL, v25);
    UnityEngine_GameObject__SetActive(v24, 1, 0LL);
    eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkMiniManagers;
    if ( !eventFortificationWorkMiniManagers )
      sub_1B8880C(0LL, v26);
    items = eventFortificationWorkMiniManagers->fields._items;
    v31 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkMiniManagers->fields._version;
    if ( !items )
      sub_1B8880C(eventFortificationWorkMiniManagers, v26);
    size = eventFortificationWorkMiniManagers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkMiniManagers,
        Component_object,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      eventFortificationWorkMiniManagers->fields._size = size + 1;
      v33[4] = (Il2CppClass *)Component_object;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)Component_object, v27, v28);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  Il2CppObject *fortificationCamera_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x2
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  struct FortificationAssetManager_o *v16; // x8
  Il2CppObject *organizationPanel_k__BackingField; // x21
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_GameObject_o *v21; // x1
  const MethodInfo *v22; // x2

  if ( (byte_4A5EF12 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF12 = 1;
  }
  p_fortificationCamera = &this->fields.fortificationCamera;
  fortificationCamera = (UnityEngine_Object_o *)this->fields.fortificationCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationCamera, 0LL, 0LL);
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
                                       (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_22;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    *p_fortificationCamera = (struct MapCamera_o *)Component_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.fortificationCamera,
      (int32_t)Component_object,
      v10,
      v11);
    v5 = (UnityEngine_GameObject_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v13);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(organizationPanel, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v16 = this->fields.assetManager;
    if ( v16 )
    {
      organizationPanel_k__BackingField = (Il2CppObject *)v16->fields._organizationPanel_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         organizationPanel_k__BackingField,
                                         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v18 = UnityEngine_GameObject__GetComponent_object_(
                v5,
                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
        *p_organizationPanel = (struct FortificationOrganizationPanelComponent_o *)v18;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.organizationPanel, (int32_t)v18, v19, v20);
        v5 = (UnityEngine_GameObject_o *)*p_organizationPanel;
        if ( *p_organizationPanel )
        {
          v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v21, v22);
          return;
        }
      }
    }
LABEL_22:
    sub_1B8880C(v5, v6);
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
  Il2CppObject *MasterData_object; // x22
  struct SetSvtInfo_array *setSvtInfos; // x8
  int max_length; // w9
  int v12; // w11
  bool v13; // w10
  SetSvtInfo_o *v14; // x12
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5EF1F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EF1F = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
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
    sub_1B8880C(Instance, v8);
  max_length = setSvtInfos->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = 0;
  v13 = 0;
  do
  {
    if ( max_length == v12 )
      sub_1B88814(Instance, v8);
    v14 = setSvtInfos->m_Items[v12];
    if ( !v14 )
      goto LABEL_19;
    ++v12;
    if ( v14->fields.position == position )
      v13 = 1;
  }
  while ( max_length != v12 );
  return v13;
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_0(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  FortificationAutomaticDialogComponent_o *fortificationAutomaticDialog; // x0
  __int64 v6; // x1
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  FortificationAutomaticDialogComponent_o *v8; // x20
  System_Action_o *v9; // x21
  System_Action_o *v10; // x22

  if ( (byte_4A5EF20 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
    sub_1B885B0(&Method_EventFortificationManager__CreateOrganizationUI_b__22_1__);
    sub_1B885B0(&Method_EventFortificationManager__CreateOrganizationUI_b__22_2__);
    byte_4A5EF20 = 1;
  }
  v3 = Method_EventFortificationManager__CreateOrganizationUI_b__22_0__;
  if ( (*((_BYTE *)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  fortificationAutomaticDialog = this->fields.fortificationAutomaticDialog;
  if ( !fortificationAutomaticDialog
    || (FortificationAutomaticDialogComponent__Init(fortificationAutomaticDialog, this->fields.eventId, 0LL),
        v8 = this->fields.fortificationAutomaticDialog,
        v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_1__,
          0LL),
        v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_2__,
          0LL),
        !v8) )
  {
LABEL_9:
    sub_1B8880C(fortificationAutomaticDialog, v6);
  }
  FortificationAutomaticDialogComponent__Open(v8, v9, v10, 0LL);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_1(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  EventFortificationManager___c_c *v3; // x0
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  System_Action_object__o *_9__22_3; // x21
  Il2CppObject *v6; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  System_Action_object__o *_9__22_4; // x20
  Il2CppObject *v12; // x21
  struct EventFortificationManager___c_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5EF21 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1B885B0(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__);
    sub_1B885B0(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__);
    sub_1B885B0(&EventFortificationManager___c_TypeInfo);
    byte_4A5EF21 = 1;
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
    _9__22_3 = (System_Action_object__o *)sub_1B887FC(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      _9__22_3,
      v6,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__22_3 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_3, (int32_t)_9__22_3, v8, v9);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_18;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)_9__22_3,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
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
    v12 = (Il2CppObject *)v3->static_fields->__9;
    _9__22_4 = (System_Action_object__o *)sub_1B887FC(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      _9__22_4,
      v12,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__,
      0LL);
    v13 = EventFortificationManager___c_TypeInfo->static_fields;
    v13->__9__22_4 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v13->__9__22_4, (int32_t)_9__22_4, v14, v15);
  }
  if ( !eventFortificationWorkMiniManagers )
LABEL_18:
    sub_1B8880C(v3, method);
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__22_4,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_2(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8

  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    sub_1B8880C(this, method);
  organizationPanel->fields.isTouchEnabled = 1;
}


void __fastcall EventFortificationManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5EF22 & 1) == 0 )
  {
    sub_1B885B0(&EventFortificationManager___c_TypeInfo);
    byte_4A5EF22 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventFortificationManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventFortificationManager___c_TypeInfo->static_fields->__9 = (struct EventFortificationManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventFortificationManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CloseServantFortificationList_b__32_2(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B8880C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_3(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B8880C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_4(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B8880C(this, 0LL);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5EF26 & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF26 = 1;
  }
  if ( !data )
    sub_1B8880C(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5EF27 & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF27 = 1;
  }
  if ( !data )
    sub_1B8880C(this, data);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___InitFortificationWorkMini_b__25_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5EF23 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF23 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v4 )
  {
    if ( !data )
      sub_1B8880C(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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

  if ( (byte_4A5EF25 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF25 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v4 )
  {
    if ( !data )
      sub_1B8880C(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___SelectFortificationServant_b__31_1(
        EventFortificationManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_4A5EF24 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EF24 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1B8880C(Instance, v3);
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
  const MethodInfo *v24; // x2

  if ( (byte_4A5EF28 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17577/*"btn_txt_event_organization"*/);
    sub_1B885B0(&StringLiteral_6459/*"FORTIFICATION_EVENT_END_MSG"*/);
    sub_1B885B0(&StringLiteral_17488/*"btn_bg_event_organization"*/);
    sub_1B885B0(&StringLiteral_19270/*"event_tab_bg_mask"*/);
    byte_4A5EF28 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  this->fields.eventId,
                                                                  (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
            v15 = this->fields.__4__this;
            if ( v15 )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v15->fields.maskSp;
              if ( Master_object )
              {
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)Master_object,
                                                                                0LL);
                if ( Master_object )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                  v16 = this->fields.__4__this;
                  if ( v16 )
                  {
                    eventId = this->fields.eventId;
                    maskSp = v16->fields.maskSp;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_37859364(
                                                                                    eventId,
                                                                                    maskSp,
                                                                                    (System_String_o *)StringLiteral_19270/*"event_tab_bg_mask"*/,
                                                                                    0LL);
                    v19 = this->fields.__4__this;
                    if ( v19 )
                    {
                      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v19->fields.maskLb;
                      if ( Master_object )
                      {
                        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)Master_object,
                                                                                        0LL);
                        if ( Master_object )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                          v20 = this->fields.__4__this;
                          if ( v20 )
                          {
                            maskLb = v20->fields.maskLb;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                                            (System_String_o *)StringLiteral_6459/*"FORTIFICATION_EVENT_END_MSG"*/,
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
    sub_1B8880C(Master_object, v4);
  }
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v5->fields.maskSp;
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0LL);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v6->fields.maskLb;
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0LL);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v7->fields.organizationBtnSp;
  if ( !Master_object )
    goto LABEL_50;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GameObjectExtensions__GetParent(v8, 0LL);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0LL);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_50;
  v10 = this->fields.eventId;
  organizationBtnSp = v9->fields.organizationBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_37859364(
                                                                  v10,
                                                                  organizationBtnSp,
                                                                  (System_String_o *)StringLiteral_17488/*"btn_bg_event_organization"*/,
                                                                  0LL);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_37859364(
                                                                  this->fields.eventId,
                                                                  v12->fields.organizationBtnTxtSp,
                                                                  (System_String_o *)StringLiteral_17577/*"btn_txt_event_organization"*/,
                                                                  0LL);
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
                                                                  0LL);
  if ( !fortificationSlotBg )
    goto LABEL_50;
  ((void (__fastcall *)(struct UITexture_o *, DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppMethodPointer))fortificationSlotBg->klass->vtable._27_set_mainTexture.method)(
    fortificationSlotBg,
    Master_object,
    fortificationSlotBg->klass->vtable._28_get_shader.methodPtr);
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
    v24);
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
  struct EventFortificationManager_o *v4; // x25
  EventFortificationListViewManager_o *eventFortificationListViewManager; // x20
  int32_t eventId; // w21
  FortificationConfirmDialogComponent_o *fortificationConfirmDialog; // x22
  EventFortificationWorkItem_o *item; // x23
  System_Action_bool__object__o *v9; // x24
  const MethodInfo *v10; // x5
  int32_t v11; // w2
  int32_t v12; // w3
  struct EventFortificationManager_o *v13; // x8
  struct EventFortificationListViewManager_o *v14; // x19
  struct UICommonButton_o *baseButton; // x20
  Il2CppObject *klass; // x21
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x2

  v2 = this;
  if ( (byte_4A5EF29 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__UserServantEntity__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventFortificationManager_CloseServantFortificationList__);
    sub_1B885B0(&Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_1B885B0(&EventFortificationManager___c_TypeInfo);
    byte_4A5EF29 = 1;
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
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_17;
  eventFortificationListViewManager = v4->fields.eventFortificationListViewManager;
  eventId = v4->fields.eventId;
  fortificationConfirmDialog = v4->fields.fortificationConfirmDialog;
  item = v2->fields.item;
  v9 = (System_Action_bool__object__o *)sub_1B887FC(System_Action_bool__UserServantEntity__TypeInfo);
  System_Action_bool__object____ctor(
    v9,
    (Il2CppObject *)v4,
    Method_EventFortificationManager_CloseServantFortificationList__,
    0LL);
  if ( !eventFortificationListViewManager )
    goto LABEL_17;
  EventFortificationListViewManager__CreateList(
    eventFortificationListViewManager,
    eventId,
    fortificationConfirmDialog,
    item,
    (System_Action_bool__UserServantEntity__o *)v9,
    v10);
  v13 = v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_17;
  v14 = v13->fields.eventFortificationListViewManager;
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
    baseButton = (struct UICommonButton_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      (System_Action_o *)baseButton,
      klass,
      Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__31_1 = (struct System_Action_o *)baseButton;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__31_1, (int32_t)baseButton, v18, v19);
  }
  if ( !v14 )
LABEL_17:
    sub_1B8880C(this, method);
  v14->fields.CallbackFunc2 = (struct System_Action_o *)baseButton;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields.CallbackFunc2, (int32_t)baseButton, v11, v12);
  EventFortificationListViewManager__SetMode_45598000(v14, 2, v20);
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
  int32_t v16; // w2
  int32_t v17; // w3
  struct EventFortificationManager_o *v18; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  struct UnityEngine_GameObject_o *mainPanel; // x20
  Il2CppObject *v21; // x21
  struct EventFortificationManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  CommonUI_o *v25; // x19

  v3 = this;
  if ( (byte_4A5EF2A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_EventFortificationWorkManager__TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__);
    sub_1B885B0(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__);
    sub_1B885B0(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    sub_1B885B0(&EventFortificationManager___c_TypeInfo);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_1B885B0(&StringLiteral_16876/*"ar200"*/);
    byte_4A5EF2A = 1;
  }
  if ( v3->fields.servantData )
  {
    v4 = Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__;
    if ( (*((_BYTE *)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                  v5,
                                                                  (System_String_o *)StringLiteral_16876/*"ar200"*/,
                                                                  0LL);
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  eventFortificationListViewManager = _4__this->fields.eventFortificationListViewManager;
  if ( !eventFortificationListViewManager )
    goto LABEL_34;
  EventFortificationListViewManager__StatusRequest(_4__this->fields.eventFortificationListViewManager, 0LL, v2);
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
                                                                0LL);
  if ( !this )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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
    eventRoot = (struct UnityEngine_GameObject_o *)sub_1B887FC(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)eventRoot,
      klass,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__32_1 = (struct System_Action_EventFortificationWorkManager__o *)eventRoot;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__32_1, (int32_t)eventRoot, v16, v17);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)eventRoot,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v18 = v3->fields.__4__this;
  if ( !v18 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)v18->fields.eventFortificationWorkMiniManagers;
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
    v21 = (Il2CppObject *)this[5].fields.__4__this->klass;
    mainPanel = (struct UnityEngine_GameObject_o *)sub_1B887FC(System_Action_EventFortificationWorkManager__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)mainPanel,
      v21,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__,
      0LL);
    v22 = EventFortificationManager___c_TypeInfo->static_fields;
    v22->__9__32_2 = (struct System_Action_EventFortificationWorkManager__o *)mainPanel;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->__9__32_2, (int32_t)mainPanel, v23, v24);
  }
  if ( !eventFortificationWorkMiniManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)mainPanel,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  this = (EventFortificationManager___c__DisplayClass32_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v25 )
LABEL_34:
    sub_1B8880C(this, method);
  CommonUI__maskFadein(v25, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}