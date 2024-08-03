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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  AvalonSceneManager_c *v20; // x8
  CommonUI_o *v21; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21

  if ( (byte_4A0012F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, requestFinish);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v8);
    sub_1B640C8(&EventFortificationManager___c__DisplayClass32_0_TypeInfo, v9);
    byte_4A0012F = 1;
  }
  v10 = sub_1B64314(EventFortificationManager___c__DisplayClass32_0_TypeInfo, requestFinish, servantData);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 16) = servantData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)servantData, v12, v13);
  *(_QWORD *)(v10 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)this, v14, v15);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = AvalonSceneManager_TypeInfo;
  v21 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v20 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v10,
    (intptr_t)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__,
    0LL);
  if ( !v21 )
LABEL_9:
    sub_1B64324(v11);
  CommonUI__maskFadeout(v21, 1, DEFAULT_FADE_TIME, v23, 0LL);
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
  __int64 v13; // x2
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *autoFortificationButton_k__BackingField; // x22
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x21
  __int64 v21; // x1
  UnityEngine_Transform_o *v22; // x21
  AutoFortificationButtonComponent_o *v23; // x20
  int32_t eventId; // w21
  System_Action_o *v25; // x22

  if ( (byte_4A00127 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, parent);
    sub_1B640C8(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_4A00127 = 1;
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
                           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_AutoFortificationButtonComponent___);
    *p_autoOrganizationBtn = (struct AutoFortificationButtonComponent_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.autoOrganizationBtn,
      (int32_t)Component_object,
      v17,
      v18);
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
    v20 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F7116 )
    {
      transform = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v19);
      byte_49F7116 = 1;
    }
    if ( !v20 )
      goto LABEL_25;
    UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (__int64)*p_autoOrganizationBtn;
    if ( !*p_autoOrganizationBtn )
      goto LABEL_25;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    v22 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F7111 )
    {
      transform = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v21);
      byte_49F7111 = 1;
    }
    if ( !v22
      || (UnityEngine_Transform__set_localPosition(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
          (transform = (__int64)*p_autoOrganizationBtn) == 0)
      || (transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0 )
    {
LABEL_25:
      sub_1B64324(transform);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  v23 = this->fields.autoOrganizationBtn;
  eventId = this->fields.eventId;
  v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(
    v25,
    (Il2CppObject *)this,
    (intptr_t)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__,
    0LL);
  if ( !v23 )
    goto LABEL_25;
  AutoFortificationButtonComponent__Init(v23, eventId, v25, 0LL);
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
  UnityEngine_Component_o *v14; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  UnityEngine_Object_o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_Object_o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  UnityEngine_Object_o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  struct EventFortificationListViewManager_o **p_eventFortificationListViewManager; // x20
  UnityEngine_Object_o *eventFortificationListViewManager; // x21
  UnityEngine_Object_o *v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  struct AutoFortificationButtonComponent_o **p_autoOrganizationBtn; // x20
  UnityEngine_Object_o *autoOrganizationBtn; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  UnityEngine_Object_o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x21
  EventFortificationManager___c_c *v46; // x0
  System_Action_object__o *_9__36_0; // x22
  Il2CppObject *v48; // x23
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x1
  __int64 v53; // x2
  System_Collections_Generic_List_object__o *v54; // x21
  int32_t v55; // w2
  int32_t v56; // w3
  ServantStatusBattleListViewItem_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v58; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v60; // x0
  System_Action_object__o *_9__36_1; // x21
  Il2CppObject *v62; // x22
  struct EventFortificationManager___c_StaticFields *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  __int64 v66; // x1
  __int64 v67; // x2
  System_Collections_Generic_List_object__o *v68; // x20
  int32_t v69; // w2
  int32_t v70; // w3

  if ( (byte_4A00132 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_EventFortificationManager___c__DestroyList_b__36_0__, v8);
    sub_1B640C8(&Method_EventFortificationManager___c__DestroyList_b__36_1__, v9);
    sub_1B640C8(&EventFortificationManager___c_TypeInfo, v10);
    byte_4A00132 = 1;
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
    v14 = (UnityEngine_Component_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_64;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    *p_fortificationCamera = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fortificationCamera, 0, v16, v17);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(organizationPanel, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Component_o *)*p_organizationPanel;
    if ( !*p_organizationPanel )
      goto LABEL_64;
    v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v20, 0LL);
    *p_organizationPanel = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.organizationPanel, 0, v21, v22);
  }
  p_fortificationConfirmDialog = &this->fields.fortificationConfirmDialog;
  fortificationConfirmDialog = (UnityEngine_Object_o *)this->fields.fortificationConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationConfirmDialog, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Component_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_64;
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v25, 0LL);
    *p_fortificationConfirmDialog = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fortificationConfirmDialog, 0, v26, v27);
  }
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationAutomaticDialog, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Component_o *)*p_fortificationAutomaticDialog;
    if ( !*p_fortificationAutomaticDialog )
      goto LABEL_64;
    v30 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v30, 0LL);
    *p_fortificationAutomaticDialog = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fortificationAutomaticDialog, 0, v31, v32);
  }
  p_eventFortificationListViewManager = &this->fields.eventFortificationListViewManager;
  eventFortificationListViewManager = (UnityEngine_Object_o *)this->fields.eventFortificationListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventFortificationListViewManager, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Component_o *)*p_eventFortificationListViewManager;
    if ( !*p_eventFortificationListViewManager )
      goto LABEL_64;
    v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v35, 0LL);
    *p_eventFortificationListViewManager = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationListViewManager, 0, v36, v37);
  }
  p_autoOrganizationBtn = &this->fields.autoOrganizationBtn;
  autoOrganizationBtn = (UnityEngine_Object_o *)this->fields.autoOrganizationBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(autoOrganizationBtn, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Component_o *)*p_autoOrganizationBtn;
    if ( *p_autoOrganizationBtn )
    {
      v42 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v42, 0LL);
      *p_autoOrganizationBtn = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.autoOrganizationBtn, 0, v43, v44);
      goto LABEL_47;
    }
LABEL_64:
    sub_1B64324(v14);
  }
LABEL_47:
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( eventFortificationWorkManagers )
  {
    v46 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v46 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_0 = (System_Action_object__o *)v46->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        v46 = EventFortificationManager___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v46->static_fields->__9;
      _9__36_0 = (System_Action_object__o *)sub_1B64314(System_Action_EventFortificationWorkManager__TypeInfo, v40, v41);
      System_Action_object____ctor(_9__36_0, v48, Method_EventFortificationManager___c__DestroyList_b__36_0__, 0LL);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v50, v51);
    }
    System_Collections_Generic_List_object___ForEach(
      eventFortificationWorkManagers,
      (System_Action_T__o *)_9__36_0,
      (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v54 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                         v52,
                                                         v53);
    System_Collections_Generic_List_object____ctor(
      v54,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v54;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationWorkManagers,
      (int32_t)v54,
      v55,
      v56);
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationWorkMiniManagers;
  v58 = (System_Collections_Generic_List_object__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers )
  {
    v60 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v60 = EventFortificationManager___c_TypeInfo;
    }
    _9__36_1 = (System_Action_object__o *)v60->static_fields->__9__36_1;
    if ( !_9__36_1 )
    {
      if ( !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60);
        v60 = EventFortificationManager___c_TypeInfo;
      }
      v62 = (Il2CppObject *)v60->static_fields->__9;
      _9__36_1 = (System_Action_object__o *)sub_1B64314(System_Action_EventFortificationWorkManager__TypeInfo, v40, v41);
      System_Action_object____ctor(_9__36_1, v62, Method_EventFortificationManager___c__DestroyList_b__36_1__, 0LL);
      v63 = EventFortificationManager___c_TypeInfo->static_fields;
      v63->__9__36_1 = (struct System_Action_EventFortificationWorkManager__o *)_9__36_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v63->__9__36_1, (int32_t)_9__36_1, v64, v65);
    }
    System_Collections_Generic_List_object___ForEach(
      v58,
      (System_Action_T__o *)_9__36_1,
      (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
    v68 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                         v66,
                                                         v67);
    System_Collections_Generic_List_object____ctor(
      v68,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
    p_eventFortificationWorkMiniManagers->klass = (ServantStatusBattleListViewItem_c *)v68;
    sub_1B6406C(p_eventFortificationWorkMiniManagers, (int32_t)v68, v69, v70);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1
  __int64 v26; // x1
  __int64 v27; // x2
  ServantStatusBattleListViewItem_o *p_assetManager; // x19
  FortificationAssetManager_o *klass; // x21
  struct FortificationAssetManager_o *assetManager; // t1
  FortificationAssetManager_o *v31; // x21
  const MethodInfo *v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w19
  System_Action_o *v36; // x22
  const MethodInfo *v37; // x3

  if ( (byte_4A0012B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&FortificationAssetManager_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v11);
    sub_1B640C8(&Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__, v12);
    sub_1B640C8(&EventFortificationManager___c__DisplayClass28_0_TypeInfo, v13);
    byte_4A0012B = 1;
  }
  v14 = sub_1B64314(
          EventFortificationManager___c__DisplayClass28_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&slotIndex);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_DWORD *)(v14 + 16) = eventId;
  *(_QWORD *)(v14 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)this, v16, v17);
  *(_QWORD *)(v14 + 40) = uiParent;
  *(_DWORD *)(v14 + 32) = slotIndex;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 40), (int32_t)uiParent, v18, v19);
  this->fields.eventId = *(_DWORD *)(v14 + 16);
  this->fields.slotIndex = *(_DWORD *)(v14 + 32);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  this->fields.eventFortificationWorkManagers = (struct System_Collections_Generic_List_EventFortificationWorkManager__o *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationWorkManagers, (int32_t)v22, v23, v24);
  EventFortificationManager__InitFortificationWorkMini(this, v25);
  assetManager = this->fields.assetManager;
  p_assetManager = (ServantStatusBattleListViewItem_o *)&this->fields.assetManager;
  klass = assetManager;
  if ( !assetManager )
  {
    v31 = (FortificationAssetManager_o *)sub_1B64314(FortificationAssetManager_TypeInfo, v26, v27);
    FortificationAssetManager___ctor(v31, v32);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v31;
    sub_1B6406C(p_assetManager, (int32_t)v31, v33, v34);
    klass = (FortificationAssetManager_o *)p_assetManager->klass;
  }
  v35 = *(_DWORD *)(v14 + 16);
  v36 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v14,
    Method_EventFortificationManager___c__DisplayClass28_0__Init_b__0__,
    0LL);
  if ( !klass )
LABEL_8:
    sub_1B64324(v15);
  FortificationAssetManager__GetAssets(klass, v35, v36, v37);
}


void __fastcall EventFortificationManager__InitDialog(EventFortificationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct FortificationConfirmDialogComponent_o **p_fortificationConfirmDialog; // x20
  UnityEngine_Object_o *fortificationConfirmDialog; // x21
  UnityEngine_GameObject_o *v8; // x0
  const MethodInfo *v9; // x2
  struct FortificationAssetManager_o *assetManager; // x8
  Il2CppObject *fortificationConfirmDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x2
  struct FortificationAutomaticDialogComponent_o **p_fortificationAutomaticDialog; // x20
  UnityEngine_Object_o *fortificationAutomaticDialog; // x21
  struct FortificationAssetManager_o *v19; // x8
  Il2CppObject *fortificationAutomaticDialog_k__BackingField; // x21
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_GameObject_o *v24; // x0
  const MethodInfo *v25; // x2

  if ( (byte_4A00128 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A00128 = 1;
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
                                       (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v8,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FortificationConfirmDialogComponent___);
    *p_fortificationConfirmDialog = (struct FortificationConfirmDialogComponent_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.fortificationConfirmDialog,
      (int32_t)Component_object,
      v13,
      v14);
    v8 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
    if ( !*p_fortificationConfirmDialog )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v16);
  }
  v8 = (UnityEngine_GameObject_o *)*p_fortificationConfirmDialog;
  if ( !*p_fortificationConfirmDialog )
    goto LABEL_24;
  FortificationConfirmDialogComponent__Init((FortificationConfirmDialogComponent_o *)v8, this->fields.eventId, v9);
  p_fortificationAutomaticDialog = &this->fields.fortificationAutomaticDialog;
  fortificationAutomaticDialog = (UnityEngine_Object_o *)this->fields.fortificationAutomaticDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(fortificationAutomaticDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v19 = this->fields.assetManager;
    if ( v19 )
    {
      fortificationAutomaticDialog_k__BackingField = (Il2CppObject *)v19->fields._fortificationAutomaticDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         fortificationAutomaticDialog_k__BackingField,
                                         (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        v21 = UnityEngine_GameObject__GetComponent_object_(
                v8,
                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FortificationAutomaticDialogComponent___);
        *p_fortificationAutomaticDialog = (struct FortificationAutomaticDialogComponent_o *)v21;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.fortificationAutomaticDialog,
          (int32_t)v21,
          v22,
          v23);
        v8 = (UnityEngine_GameObject_o *)*p_fortificationAutomaticDialog;
        if ( *p_fortificationAutomaticDialog )
        {
          v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v24, v25);
          goto LABEL_22;
        }
      }
    }
LABEL_24:
    sub_1B64324(v8);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ServantStatusBattleListViewItem_o *p_eventFortificationWorkMiniManagers; // x19
  System_Collections_Generic_List_object__o *v11; // x20
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *eventFortificationWorkMiniManagers; // t1
  EventFortificationManager___c_c *v13; // x0
  System_Action_object__o *_9__25_0; // x21
  Il2CppObject *v15; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A0012A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__get_Count__, v6);
    sub_1B640C8(&System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo, v7);
    sub_1B640C8(&Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__, v8);
    sub_1B640C8(&EventFortificationManager___c_TypeInfo, v9);
    byte_4A0012A = 1;
  }
  eventFortificationWorkMiniManagers = this->fields.eventFortificationWorkMiniManagers;
  p_eventFortificationWorkMiniManagers = (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationWorkMiniManagers;
  v11 = (System_Collections_Generic_List_object__o *)eventFortificationWorkMiniManagers;
  if ( eventFortificationWorkMiniManagers && v11->fields._size >= 1 )
  {
    v13 = EventFortificationManager___c_TypeInfo;
    if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
      v13 = EventFortificationManager___c_TypeInfo;
    }
    _9__25_0 = (System_Action_object__o *)v13->static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = EventFortificationManager___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__25_0 = (System_Action_object__o *)sub_1B64314(
                                              System_Action_EventFortificationWorkManager__TypeInfo,
                                              method,
                                              v2);
      System_Action_object____ctor(
        _9__25_0,
        v15,
        Method_EventFortificationManager___c__InitFortificationWorkMini_b__25_0__,
        0LL);
      static_fields = EventFortificationManager___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Action_EventFortificationWorkManager__o *)_9__25_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v17, v18);
    }
    System_Collections_Generic_List_object___ForEach(
      v11,
      (System_Action_T__o *)_9__25_0,
      (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventFortificationWorkManager__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventFortificationWorkManager___ctor__);
  p_eventFortificationWorkMiniManagers->klass = (ServantStatusBattleListViewItem_c *)v19;
  sub_1B6406C(p_eventFortificationWorkMiniManagers, (int32_t)v19, v20, v21);
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
  Il2CppObject *eventFortificationListViewPanel_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4A00129 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___, method);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_4A00129 = 1;
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
                                       (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v7
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v7,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewManager___),
          *p_eventFortificationListViewManager = (struct EventFortificationListViewManager_o *)Component_object,
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationListViewManager,
            (int32_t)Component_object,
            v11,
            v12),
          (v7 = (UnityEngine_GameObject_o *)*p_eventFortificationListViewManager) == 0LL) )
    {
LABEL_13:
      sub_1B64324(v7);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v14);
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
    sub_1B64324(organizationPanel);
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
  __int64 v6; // x1
  EventFortificationManager_o *v7; // x20

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
  v7 = this;
  if ( !byte_49F7116 )
  {
    this = (EventFortificationManager_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v6);
    byte_49F7116 = 1;
  }
  if ( !v7
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v7,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventFortificationManager__LocateObjectToUIRoot(
        EventFortificationManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  EventFortificationManager_o *v4; // x20
  __int64 v5; // x1
  EventFortificationManager_o *v6; // x20

  if ( !obj )
    goto LABEL_8;
  v4 = this;
  this = (EventFortificationManager_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  if ( !this )
    goto LABEL_8;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.uiRoot, 0LL);
  this = (EventFortificationManager_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  v6 = this;
  if ( !byte_49F7116 )
  {
    this = (EventFortificationManager_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v5);
    byte_49F7116 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventFortificationManager_o *)UnityEngine_GameObject__get_gameObject(obj, 0LL)) == 0LL) )
  {
LABEL_8:
    sub_1B64324(this);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  System_Action_object__o *v15; // x21
  Il2CppObject *v16; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Collections_Generic_List_EventFortificationWorkManager__o *v20; // x8
  int32_t size; // w2
  int v22; // w9

  if ( (byte_4A00131 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1B640C8(&Method_EventFortificationManager_OnClickBackBtn__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Clear__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_1B640C8(&Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, v6);
    sub_1B640C8(&EventFortificationManager___c_TypeInfo, v7);
    byte_4A00131 = 1;
  }
  v8 = Method_EventFortificationManager_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickBackBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B640E0(Method_EventFortificationManager_OnClickBackBtn__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
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
  v15 = *(System_Action_object__o **)(*((_QWORD *)organizationPanel + 23) + 56LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)organizationPanel + 56) )
    {
      j_il2cpp_runtime_class_init_0(organizationPanel);
      organizationPanel = EventFortificationManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)organizationPanel + 23);
    v15 = (System_Action_object__o *)sub_1B64314(System_Action_EventFortificationWorkManager__TypeInfo, v12, v13);
    System_Action_object____ctor(v15, v16, Method_EventFortificationManager___c__OnClickBackBtn_b__34_0__, 0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Action_EventFortificationWorkManager__o *)v15;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)v15, v18, v19);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_20;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)v15,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v20 = this->fields.eventFortificationWorkManagers;
  if ( !v20 )
    goto LABEL_20;
  size = v20->fields._size;
  v22 = v20->fields._version + 1;
  v20->fields._size = 0;
  v20->fields._version = v22;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v20->fields._items, 0, size, 0LL);
  organizationPanel = this->fields.eventFortificationListViewManager;
  if ( !organizationPanel )
LABEL_20:
    sub_1B64324(organizationPanel);
  ListViewManager__ClearScrollBarValue((ListViewManager_o *)organizationPanel, 1, 0LL);
}


void __fastcall EventFortificationManager__OnClickOrganizationBtn(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x4
  FortificationAssetManager_o *assetManager; // x0
  int32_t v7; // w1
  const MethodInfo *v8; // x7
  const MethodInfo *v9; // x1

  if ( (byte_4A00130 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventFortificationManager_OnClickOrganizationBtn__, method);
    byte_4A00130 = 1;
  }
  v3 = Method_EventFortificationManager_OnClickOrganizationBtn__;
  if ( (*((_BYTE *)Method_EventFortificationManager_OnClickOrganizationBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_EventFortificationManager_OnClickOrganizationBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
          v7,
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
    sub_1B64324(assetManager);
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
    sub_1B64324(mainPanel);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  AvalonSceneManager_c *v19; // x8
  CommonUI_o *v20; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_4A0012E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, item);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__, v7);
    sub_1B640C8(&EventFortificationManager___c__DisplayClass31_0_TypeInfo, v8);
    byte_4A0012E = 1;
  }
  v9 = sub_1B64314(EventFortificationManager___c__DisplayClass31_0_TypeInfo, item, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)item, v13, v14);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = AvalonSceneManager_TypeInfo;
  v20 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v19 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
  v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_EventFortificationManager___c__DisplayClass31_0__SelectFortificationServant_b__0__,
    0LL);
  if ( !v20 )
LABEL_9:
    sub_1B64324(v10);
  CommonUI__maskFadeout(v20, 1, DEFAULT_FADE_TIME, v22, 0LL);
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
  _BOOL8 v18; // x0
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x23
  Il2CppObject *eventFortificationWorkObj_k__BackingField; // x22
  Il2CppObject *v22; // x0
  Il2CppObject *Component_object; // x0
  int32_t eventId; // w24
  EventFortificationWorkManager_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_object__o *v28; // x25
  __int64 v29; // x0
  const MethodInfo *v30; // x6
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Component_o *organizationPanel; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  UnityEngine_Transform_o *v38; // x24
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Transform_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x8
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0012C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_EventFortificationWorkItem__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFortificationMaster___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v6);
    sub_1B640C8(&Method_EventFortificationManager_SelectFortificationServant__, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v10);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_UIAtlas___, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&StringLiteral_13518/*"Terminal/Atlas/TerminalAtlas"*/, v15);
    byte_4A0012C = 1;
  }
  entities = 0LL;
  memset(&v50, 0, sizeof(v50));
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_13518/*"Terminal/Atlas/TerminalAtlas"*/,
             (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_UIAtlas___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v50 = v49;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v18 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1B64324(v18);
    current = (EventFortificationEntity_o *)v50.fields._current;
    eventFortificationWorkObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkObj_k__BackingField,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v22 )
      sub_1B64324(0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v22,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v25 = (EventFortificationWorkManager_o *)Component_object;
    v28 = (System_Action_object__o *)sub_1B64314(System_Action_EventFortificationWorkItem__TypeInfo, v26, v27);
    System_Action_object____ctor(
      v28,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0LL);
    if ( !v25 )
      sub_1B64324(v29);
    EventFortificationWorkManager__SetServantFortificationWork(
      v25,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v28,
      this->fields.organizationPanel,
      (UIAtlas_o *)object,
      v30);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0LL);
    organizationPanel = (UnityEngine_Component_o *)this->fields.organizationPanel;
    if ( !organizationPanel )
      sub_1B64324(0LL);
    v33 = UnityEngine_Component__get_gameObject(organizationPanel, 0LL);
    if ( !v33 )
      sub_1B64324(0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v33, 0LL);
    GameObjectExtensions__SetParent(gameObject, transform, 0LL);
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0LL);
    if ( !v35 )
      sub_1B64324(0LL);
    v36 = (__int64)UnityEngine_GameObject__get_transform(v35, 0LL);
    v38 = (UnityEngine_Transform_o *)v36;
    if ( !byte_49F7116 )
    {
      v36 = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v37);
      byte_49F7116 = 1;
    }
    if ( !v38 )
      sub_1B64324(v36);
    UnityEngine_Transform__set_localScale(v38, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0LL);
    if ( !v39 )
      sub_1B64324(0LL);
    v40 = UnityEngine_GameObject__get_transform(v39, 0LL);
    if ( !current )
      sub_1B64324(v40);
    if ( !v40 )
      sub_1B64324(0LL);
    v52.fields.y = (float)current->fields.y;
    v52.fields.x = (float)current->fields.x;
    v52.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v40, v52, 0LL);
    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0LL);
    if ( !v41 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v41, 1, 0LL);
    eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
    if ( !eventFortificationWorkManagers )
      sub_1B64324(0LL);
    items = eventFortificationWorkManagers->fields._items;
    v46 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkManagers->fields._version;
    if ( !items )
      sub_1B64324(eventFortificationWorkManagers);
    size = eventFortificationWorkManagers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkManagers,
        (Il2CppObject *)v25,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &items->obj.klass + size;
      eventFortificationWorkManagers->fields._size = size + 1;
      v48[4] = (Il2CppClass *)v25;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v25, v42, v43);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  _BOOL8 v15; // x0
  struct FortificationAssetManager_o *assetManager; // x8
  EventFortificationEntity_o *current; // x21
  Il2CppObject *eventFortificationWorkMiniObj_k__BackingField; // x20
  Il2CppObject *v19; // x0
  Il2CppObject *Component_object; // x20
  int32_t eventId; // w22
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_object__o *v24; // x23
  __int64 v25; // x0
  const MethodInfo *v26; // x6
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v28; // x2
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0012D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_EventFortificationWorkItem__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFortificationMaster___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v6);
    sub_1B640C8(&Method_EventFortificationManager_SelectFortificationServant__, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v10);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A0012D = 1;
  }
  entities = 0LL;
  memset(&v40, 0, sizeof(v40));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)entities,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v15 )
      break;
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      sub_1B64324(v15);
    current = (EventFortificationEntity_o *)v40.fields._current;
    eventFortificationWorkMiniObj_k__BackingField = (Il2CppObject *)assetManager->fields._eventFortificationWorkMiniObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__Instantiate_object_(
            eventFortificationWorkMiniObj_k__BackingField,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v19 )
      sub_1B64324(0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v19,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkManager___);
    eventId = this->fields.eventId;
    v24 = (System_Action_object__o *)sub_1B64314(System_Action_EventFortificationWorkItem__TypeInfo, v22, v23);
    System_Action_object____ctor(
      v24,
      (Il2CppObject *)this,
      Method_EventFortificationManager_SelectFortificationServant__,
      0LL);
    if ( !Component_object )
      sub_1B64324(v25);
    EventFortificationWorkManager__SetServantFortificationWork(
      (EventFortificationWorkManager_o *)Component_object,
      current,
      eventId,
      (System_Action_EventFortificationWorkItem__o *)v24,
      0LL,
      0LL,
      v26);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    EventFortificationManager__LocateObjectToFotificationPanel(this, gameObject, v28);
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    if ( !v29 )
      sub_1B64324(0LL);
    transform = UnityEngine_GameObject__get_transform(v29, 0LL);
    if ( !current )
      sub_1B64324(transform);
    if ( !transform )
      sub_1B64324(0LL);
    v42.fields.y = (float)current->fields.rewardSceneY;
    v42.fields.x = (float)current->fields.rewardSceneX;
    v42.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(transform, v42, 0LL);
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    if ( !v31 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v31, 1, 0LL);
    eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkMiniManagers;
    if ( !eventFortificationWorkMiniManagers )
      sub_1B64324(0LL);
    items = eventFortificationWorkMiniManagers->fields._items;
    v36 = Method_System_Collections_Generic_List_EventFortificationWorkManager__Add__;
    ++eventFortificationWorkMiniManagers->fields._version;
    if ( !items )
      sub_1B64324(eventFortificationWorkMiniManagers);
    size = eventFortificationWorkMiniManagers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        eventFortificationWorkMiniManagers,
        Component_object,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &items->obj.klass + size;
      eventFortificationWorkMiniManagers->fields._size = size + 1;
      v38[4] = (Il2CppClass *)Component_object;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)Component_object, v32, v33);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  Il2CppObject *fortificationCamera_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x2
  struct FortificationOrganizationPanelComponent_o **p_organizationPanel; // x20
  UnityEngine_Object_o *organizationPanel; // x21
  struct FortificationAssetManager_o *v18; // x8
  Il2CppObject *organizationPanel_k__BackingField; // x21
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_GameObject_o *v23; // x1
  const MethodInfo *v24; // x2

  if ( (byte_4A00126 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MapCamera___, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A00126 = 1;
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
                                       (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_22;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v8,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MapCamera___);
    *p_fortificationCamera = (struct MapCamera_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.fortificationCamera,
      (int32_t)Component_object,
      v12,
      v13);
    v8 = (UnityEngine_GameObject_o *)*p_fortificationCamera;
    if ( !*p_fortificationCamera )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    EventFortificationManager__LocateObjectToUIRoot(this, gameObject, v15);
  }
  p_organizationPanel = &this->fields.organizationPanel;
  organizationPanel = (UnityEngine_Object_o *)this->fields.organizationPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(organizationPanel, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v18 = this->fields.assetManager;
    if ( v18 )
    {
      organizationPanel_k__BackingField = (Il2CppObject *)v18->fields._organizationPanel_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         organizationPanel_k__BackingField,
                                         (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        v20 = UnityEngine_GameObject__GetComponent_object_(
                v8,
                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FortificationOrganizationPanelComponent___);
        *p_organizationPanel = (struct FortificationOrganizationPanelComponent_o *)v20;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.organizationPanel, (int32_t)v20, v21, v22);
        v8 = (UnityEngine_GameObject_o *)*p_organizationPanel;
        if ( *p_organizationPanel )
        {
          v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
          EventFortificationManager__LocateObjectToUIRoot(this, v23, v24);
          return;
        }
      }
    }
LABEL_22:
    sub_1B64324(v8);
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
  Il2CppObject *MasterData_object; // x22
  __int64 v11; // x1
  struct SetSvtInfo_array *setSvtInfos; // x8
  int max_length; // w9
  int v14; // w11
  bool v15; // w10
  SetSvtInfo_o *v16; // x12
  UserEventFortificationEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A00133 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, *(_QWORD *)&fortificationIdx);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A00133 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
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
    sub_1B64324(Instance);
  max_length = setSvtInfos->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = 0;
  v15 = 0;
  do
  {
    if ( max_length == v14 )
      sub_1B6432C(Instance, v11);
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
  const MethodInfo *v9; // x2
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8
  FortificationAutomaticDialogComponent_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_4A00134 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventFortificationManager__CreateOrganizationUI_b__22_0__, v3);
    sub_1B640C8(&Method_EventFortificationManager__CreateOrganizationUI_b__22_1__, v4);
    sub_1B640C8(&Method_EventFortificationManager__CreateOrganizationUI_b__22_2__, v5);
    byte_4A00134 = 1;
  }
  v6 = Method_EventFortificationManager__CreateOrganizationUI_b__22_0__;
  if ( (*((_BYTE *)Method_EventFortificationManager__CreateOrganizationUI_b__22_0__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_EventFortificationManager__CreateOrganizationUI_b__22_0__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    goto LABEL_9;
  organizationPanel->fields.isTouchEnabled = 0;
  fortificationAutomaticDialog = this->fields.fortificationAutomaticDialog;
  if ( !fortificationAutomaticDialog
    || (FortificationAutomaticDialogComponent__Init(fortificationAutomaticDialog, this->fields.eventId, v9),
        v11 = this->fields.fortificationAutomaticDialog,
        v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13),
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_1__,
          0LL),
        v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16),
        System_Action___ctor(
          v17,
          (Il2CppObject *)this,
          Method_EventFortificationManager__CreateOrganizationUI_b__22_2__,
          0LL),
        !v11) )
  {
LABEL_9:
    sub_1B64324(fortificationAutomaticDialog);
  }
  FortificationAutomaticDialogComponent__Open(v11, v14, v17, v18);
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
  EventFortificationManager___c_c *v8; // x0
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  System_Action_object__o *_9__22_3; // x21
  Il2CppObject *v11; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  System_Action_object__o *_9__22_4; // x20
  Il2CppObject *v19; // x21
  struct EventFortificationManager___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A00135 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v4);
    sub_1B640C8(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__, v5);
    sub_1B640C8(&Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__, v6);
    sub_1B640C8(&EventFortificationManager___c_TypeInfo, v7);
    byte_4A00135 = 1;
  }
  v8 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkManagers;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v8 = EventFortificationManager___c_TypeInfo;
  }
  _9__22_3 = (System_Action_object__o *)v8->static_fields->__9__22_3;
  if ( !_9__22_3 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventFortificationManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__22_3 = (System_Action_object__o *)sub_1B64314(System_Action_EventFortificationWorkManager__TypeInfo, method, v2);
    System_Action_object____ctor(
      _9__22_3,
      v11,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_3__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__22_3 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_3, (int32_t)_9__22_3, v13, v14);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_18;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)_9__22_3,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v8 = EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)this->fields.eventFortificationWorkMiniManagers;
  if ( !EventFortificationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventFortificationManager___c_TypeInfo);
    v8 = EventFortificationManager___c_TypeInfo;
  }
  _9__22_4 = (System_Action_object__o *)v8->static_fields->__9__22_4;
  if ( !_9__22_4 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventFortificationManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v8->static_fields->__9;
    _9__22_4 = (System_Action_object__o *)sub_1B64314(System_Action_EventFortificationWorkManager__TypeInfo, v15, v16);
    System_Action_object____ctor(
      _9__22_4,
      v19,
      Method_EventFortificationManager___c__CreateOrganizationUI_b__22_4__,
      0LL);
    v20 = EventFortificationManager___c_TypeInfo->static_fields;
    v20->__9__22_4 = (struct System_Action_EventFortificationWorkManager__o *)_9__22_4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->__9__22_4, (int32_t)_9__22_4, v21, v22);
  }
  if ( !eventFortificationWorkMiniManagers )
LABEL_18:
    sub_1B64324(v8);
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)_9__22_4,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
}


void __fastcall EventFortificationManager___CreateOrganizationUI_b__22_2(
        EventFortificationManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *organizationPanel; // x8

  organizationPanel = this->fields.organizationPanel;
  if ( !organizationPanel )
    sub_1B64324(this);
  organizationPanel->fields.isTouchEnabled = 1;
}


void __fastcall EventFortificationManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A00136 & 1) == 0 )
  {
    sub_1B640C8(&EventFortificationManager___c_TypeInfo, v1);
    byte_4A00136 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventFortificationManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventFortificationManager___c_TypeInfo->static_fields->__9 = (struct EventFortificationManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventFortificationManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CloseServantFortificationList_b__32_2(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64324(this);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_3(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64324(this);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___CreateOrganizationUI_b__22_4(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64324(this);
  EventFortificationWorkManager__ModifyItems(data, (const MethodInfo *)data);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A0013A & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, data);
    byte_4A0013A = 1;
  }
  if ( !data )
    sub_1B64324(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___DestroyList_b__36_1(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A0013B & 1) == 0 )
  {
    this = (EventFortificationManager___c_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, data);
    byte_4A0013B = 1;
  }
  if ( !data )
    sub_1B64324(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
}


void __fastcall EventFortificationManager___c___InitFortificationWorkMini_b__25_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A00137 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, data);
    byte_4A00137 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v4 )
  {
    if ( !data )
      sub_1B64324(v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___OnClickBackBtn_b__34_0(
        EventFortificationManager___c_o *this,
        EventFortificationWorkManager_o *data,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A00139 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, data);
    byte_4A00139 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL);
  if ( v4 )
  {
    if ( !data )
      sub_1B64324(v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
}


void __fastcall EventFortificationManager___c___SelectFortificationServant_b__31_1(
        EventFortificationManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  CommonUI_o *v4; // x19

  if ( (byte_4A00138 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4A00138 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1B64324(Instance);
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  struct EventFortificationManager_o *v12; // x8
  struct EventFortificationManager_o *v13; // x8
  struct EventFortificationManager_o *v14; // x8
  UnityEngine_GameObject_o *v15; // x0
  struct EventFortificationManager_o *v16; // x8
  int32_t v17; // w20
  UISprite_o *organizationBtnSp; // x21
  struct EventFortificationManager_o *v19; // x8
  const MethodInfo *v20; // x4
  struct EventFortificationManager_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventFortificationManager_o *v23; // x8
  struct EventFortificationManager_o *v24; // x8
  int32_t eventId; // w21
  UISprite_o *maskSp; // x20
  struct EventFortificationManager_o *v27; // x8
  struct EventFortificationManager_o *v28; // x8
  UILabel_o *maskLb; // x20
  struct EventFortificationManager_o *v30; // x8
  struct UITexture_o *fortificationSlotBg; // x20
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2

  if ( (byte_4A0013C & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_17507/*"btn_txt_event_organization"*/, v7);
    sub_1B640C8(&StringLiteral_6431/*"FORTIFICATION_EVENT_END_MSG"*/, v8);
    sub_1B640C8(&StringLiteral_17418/*"btn_bg_event_organization"*/, v9);
    sub_1B640C8(&StringLiteral_19193/*"event_tab_bg_mask"*/, v10);
    byte_4A0013C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  this->fields.eventId,
                                                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
            v23 = this->fields.__4__this;
            if ( v23 )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v23->fields.maskSp;
              if ( Master_object )
              {
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)Master_object,
                                                                                0LL);
                if ( Master_object )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                  v24 = this->fields.__4__this;
                  if ( v24 )
                  {
                    eventId = this->fields.eventId;
                    maskSp = v24->fields.maskSp;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_37544692(
                                                                                    eventId,
                                                                                    maskSp,
                                                                                    (System_String_o *)StringLiteral_19193/*"event_tab_bg_mask"*/,
                                                                                    0LL);
                    v27 = this->fields.__4__this;
                    if ( v27 )
                    {
                      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v27->fields.maskLb;
                      if ( Master_object )
                      {
                        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)Master_object,
                                                                                        0LL);
                        if ( Master_object )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                          v28 = this->fields.__4__this;
                          if ( v28 )
                          {
                            maskLb = v28->fields.maskLb;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                                            (System_String_o *)StringLiteral_6431/*"FORTIFICATION_EVENT_END_MSG"*/,
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
    sub_1B64324(Master_object);
  }
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v12->fields.maskSp;
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0LL);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v13->fields.maskLb;
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v14->fields.organizationBtnSp;
  if ( !Master_object )
    goto LABEL_50;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GameObjectExtensions__GetParent(v15, 0LL);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0LL);
  if ( !Master_object )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_50;
  v17 = this->fields.eventId;
  organizationBtnSp = v16->fields.organizationBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_37544692(
                                                                  v17,
                                                                  organizationBtnSp,
                                                                  (System_String_o *)StringLiteral_17418/*"btn_bg_event_organization"*/,
                                                                  0LL);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AtlasManager__SetEventUI_37544692(
                                                                  this->fields.eventId,
                                                                  v19->fields.organizationBtnTxtSp,
                                                                  (System_String_o *)StringLiteral_17507/*"btn_txt_event_organization"*/,
                                                                  0LL);
LABEL_41:
  v30 = this->fields.__4__this;
  if ( !v30 )
    goto LABEL_50;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v30->fields.assetManager;
  if ( !Master_object )
    goto LABEL_50;
  fortificationSlotBg = v30->fields.fortificationSlotBg;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)FortificationAssetManager__GetOrganizationBgTex(
                                                                  (FortificationAssetManager_o *)Master_object,
                                                                  this->fields.eventId,
                                                                  this->fields.slotIndex,
                                                                  1,
                                                                  v20);
  if ( !fortificationSlotBg )
    goto LABEL_50;
  ((void (__fastcall *)(struct UITexture_o *, DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppMethodPointer))fortificationSlotBg->klass->vtable._27_set_mainTexture.method)(
    fortificationSlotBg,
    Master_object,
    fortificationSlotBg->klass->vtable._28_get_shader.methodPtr);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__SetFotificationOrganizationPanel((EventFortificationManager_o *)Master_object, v32);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__InitDialog((EventFortificationManager_o *)Master_object, v33);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__InitListViewPanel((EventFortificationManager_o *)Master_object, v34);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__SetFortificationWorkMini((EventFortificationManager_o *)Master_object, v35);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_50;
  EventFortificationManager__CreateOrganizationUI(
    (EventFortificationManager_o *)Master_object,
    this->fields.uiParent,
    v36);
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
  __int64 v8; // x1
  __int64 v9; // x2
  struct EventFortificationManager_o *v10; // x25
  EventFortificationListViewManager_o *eventFortificationListViewManager; // x20
  int32_t eventId; // w21
  FortificationConfirmDialogComponent_o *fortificationConfirmDialog; // x22
  EventFortificationWorkItem_o *item; // x23
  System_Action_bool__object__o *v15; // x24
  const MethodInfo *v16; // x5
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t v19; // w3
  struct EventFortificationManager_o *v20; // x8
  struct EventFortificationListViewManager_o *v21; // x19
  struct UICommonButton_o *baseButton; // x20
  Il2CppObject *klass; // x21
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x2

  v2 = this;
  if ( (byte_4A0013D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__UserServantEntity__TypeInfo, method);
    sub_1B640C8(&System_Action_TypeInfo, v3);
    sub_1B640C8(&Method_EventFortificationManager_CloseServantFortificationList__, v4);
    sub_1B640C8(&Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__, v5);
    this = (EventFortificationManager___c__DisplayClass31_0_o *)sub_1B640C8(&EventFortificationManager___c_TypeInfo, v6);
    byte_4A0013D = 1;
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
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_17;
  eventFortificationListViewManager = v10->fields.eventFortificationListViewManager;
  eventId = v10->fields.eventId;
  fortificationConfirmDialog = v10->fields.fortificationConfirmDialog;
  item = v2->fields.item;
  v15 = (System_Action_bool__object__o *)sub_1B64314(System_Action_bool__UserServantEntity__TypeInfo, v8, v9);
  System_Action_bool__object____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_EventFortificationManager_CloseServantFortificationList__,
    0LL);
  if ( !eventFortificationListViewManager )
    goto LABEL_17;
  EventFortificationListViewManager__CreateList(
    eventFortificationListViewManager,
    eventId,
    fortificationConfirmDialog,
    item,
    (System_Action_bool__UserServantEntity__o *)v15,
    v16);
  v20 = v2->fields.__4__this;
  if ( !v20 )
    goto LABEL_17;
  v21 = v20->fields.eventFortificationListViewManager;
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
    baseButton = (struct UICommonButton_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
    System_Action___ctor(
      (System_Action_o *)baseButton,
      klass,
      Method_EventFortificationManager___c__SelectFortificationServant_b__31_1__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__31_1 = (struct System_Action_o *)baseButton;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__31_1, (int32_t)baseButton, v25, v26);
  }
  if ( !v21 )
LABEL_17:
    sub_1B64324(this);
  v21->fields.CallbackFunc2 = (struct System_Action_o *)baseButton;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->fields.CallbackFunc2, (int32_t)baseButton, v18, v19);
  EventFortificationListViewManager__SetMode_45222620(v21, 2, v27);
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
  const MethodInfo *v17; // x1
  struct EventFortificationManager_o *v18; // x8
  struct EventFortificationManager_o *v19; // x8
  __int64 v20; // x1
  __int64 v21; // x2
  struct EventFortificationManager_o *v22; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkManagers; // x20
  struct UnityEngine_GameObject_o *eventRoot; // x21
  Il2CppObject *klass; // x22
  struct EventFortificationManager___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  __int64 v30; // x2
  struct EventFortificationManager_o *v31; // x8
  System_Collections_Generic_List_object__o *eventFortificationWorkMiniManagers; // x19
  struct UnityEngine_GameObject_o *mainPanel; // x20
  Il2CppObject *v34; // x21
  struct EventFortificationManager___c_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  CommonUI_o *v38; // x19

  v3 = this;
  if ( (byte_4A0013E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_EventFortificationWorkManager__TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__, v7);
    sub_1B640C8(&Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__, v8);
    sub_1B640C8(&Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__, v9);
    sub_1B640C8(&EventFortificationManager___c_TypeInfo, v10);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)sub_1B640C8(&StringLiteral_16807/*"ar200"*/, v11);
    byte_4A0013E = 1;
  }
  if ( v3->fields.servantData )
  {
    v12 = Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__;
    if ( (*((_BYTE *)Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1B640E0(Method_EventFortificationManager___c__DisplayClass32_0__CloseServantFortificationList_b__0__);
    v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
    this = (EventFortificationManager___c__DisplayClass32_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                  v13,
                                                                  (System_String_o *)StringLiteral_16807/*"ar200"*/,
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
  v18 = v3->fields.__4__this;
  if ( !v18 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v18->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_34;
  EventFortificationListViewManager__DestroyList((EventFortificationListViewManager_o *)this, v17);
  v19 = v3->fields.__4__this;
  if ( !v19 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)v19->fields.eventFortificationListViewManager;
  if ( !this )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
  if ( !this )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v22 = v3->fields.__4__this;
  if ( !v22 )
    goto LABEL_34;
  eventFortificationWorkManagers = (System_Collections_Generic_List_object__o *)v22->fields.eventFortificationWorkManagers;
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
    eventRoot = (struct UnityEngine_GameObject_o *)sub_1B64314(
                                                     System_Action_EventFortificationWorkManager__TypeInfo,
                                                     v20,
                                                     v21);
    System_Action_object____ctor(
      (System_Action_object__o *)eventRoot,
      klass,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_1__,
      0LL);
    static_fields = EventFortificationManager___c_TypeInfo->static_fields;
    static_fields->__9__32_1 = (struct System_Action_EventFortificationWorkManager__o *)eventRoot;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__32_1, (int32_t)eventRoot, v27, v28);
  }
  if ( !eventFortificationWorkManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkManagers,
    (System_Action_T__o *)eventRoot,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  v31 = v3->fields.__4__this;
  if ( !v31 )
    goto LABEL_34;
  this = (EventFortificationManager___c__DisplayClass32_0_o *)EventFortificationManager___c_TypeInfo;
  eventFortificationWorkMiniManagers = (System_Collections_Generic_List_object__o *)v31->fields.eventFortificationWorkMiniManagers;
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
    v34 = (Il2CppObject *)this[5].fields.__4__this->klass;
    mainPanel = (struct UnityEngine_GameObject_o *)sub_1B64314(
                                                     System_Action_EventFortificationWorkManager__TypeInfo,
                                                     v29,
                                                     v30);
    System_Action_object____ctor(
      (System_Action_object__o *)mainPanel,
      v34,
      Method_EventFortificationManager___c__CloseServantFortificationList_b__32_2__,
      0LL);
    v35 = EventFortificationManager___c_TypeInfo->static_fields;
    v35->__9__32_2 = (struct System_Action_EventFortificationWorkManager__o *)mainPanel;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v35->__9__32_2, (int32_t)mainPanel, v36, v37);
  }
  if ( !eventFortificationWorkMiniManagers )
    goto LABEL_34;
  System_Collections_Generic_List_object___ForEach(
    eventFortificationWorkMiniManagers,
    (System_Action_T__o *)mainPanel,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_EventFortificationWorkManager__ForEach__);
  this = (EventFortificationManager___c__DisplayClass32_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v38 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v38 )
LABEL_34:
    sub_1B64324(this);
  CommonUI__maskFadein(v38, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}