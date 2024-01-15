void __fastcall FortificationOrganizationPanelComponent___ctor(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  MapZoom_c *v3; // x0

  if ( (byte_40FA777 & 1) == 0 )
  {
    sub_B16FFC(&MapZoom_TypeInfo, method);
    byte_40FA777 = 1;
  }
  v3 = MapZoom_TypeInfo;
  if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
    v3 = MapZoom_TypeInfo;
  }
  this->fields.zoomSize = v3->static_fields->ZOOM_DEFAULT;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FortificationOrganizationPanelComponent__ActivationTouchFlag(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isTouchEnabled = 1;
}


void __fastcall FortificationOrganizationPanelComponent__Awake(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortificationOrganizationPanelComponent__Close(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  struct MapCamera_o *orgCamera; // x8
  MapZoom_o *mZoom; // x0
  struct MapCamera_o *v5; // x8
  MapScroll_o *mScrl; // x0
  struct MapCamera_o *v7; // x8
  MapZoom_o *v8; // x0
  const MethodInfo *v9; // x2

  UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0LL);
  orgCamera = this->fields.orgCamera;
  this->fields.isTouchEnabled = 0;
  if ( !orgCamera
    || (mZoom = orgCamera->fields.mZoom) == 0LL
    || (MapZoom__Stop(mZoom, 1, 0LL), (v5 = this->fields.orgCamera) == 0LL)
    || (mScrl = v5->fields.mScrl) == 0LL
    || (MapScroll__Stop(mScrl, 1, 0LL), (v7 = this->fields.orgCamera) == 0LL)
    || (v8 = v7->fields.mZoom) == 0LL )
  {
    sub_B170D4();
  }
  this->fields.zoomSize = MapZoom__GetZoomSize(v8, 0LL);
  FortificationOrganizationPanelComponent__SetActiveForOrgObj(this, 0, v9);
}


bool __fastcall FortificationOrganizationPanelComponent__IsMapTouchEnabled(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  bool isTouchEnabled; // w8

  isTouchEnabled = this->fields.isTouchEnabled;
  if ( isTouchEnabled )
    return !MainMenuBar__get_IsEnableOutSideCollider(0LL);
  return isTouchEnabled;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortificationOrganizationPanelComponent__Open(
        FortificationOrganizationPanelComponent_o *this,
        int32_t eventId,
        UnityEngine_Texture2D_o *orgBgTexture,
        UnityEngine_GameObject_o *mainPanel,
        UnityEngine_GameObject_o *eventRoot,
        MapCamera_o *orgCamera,
        UnityEngine_Camera_o *mainCamera,
        const MethodInfo *method)
{
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  MapCamera_o **p_orgCamera; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  struct UITexture_o *organizationBg; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  CTouch_c *v37; // x0
  struct CTouch_StaticFields *static_fields; // x0
  MapCamera_o *v39; // x0
  MapZoom_o *mZoom; // x0

  if ( (byte_40FA776 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&StringLiteral_1820/*"ActivationTouchFlag"*/, v14);
    byte_40FA776 = 1;
  }
  this->fields.mainPanel = mainPanel;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mainPanel,
    (System_Int32_array **)mainPanel,
    (System_String_array **)orgBgTexture,
    (System_String_array **)mainPanel,
    (System_Boolean_array **)eventRoot,
    (System_Int32_array **)orgCamera,
    (System_Int32_array *)mainCamera,
    (System_Int32_array *)method);
  this->fields.eventRoot = eventRoot;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventRoot,
    (System_Int32_array **)eventRoot,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.orgCamera = orgCamera;
  p_orgCamera = &this->fields.orgCamera;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.orgCamera,
    (System_Int32_array **)orgCamera,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  FortificationOrganizationPanelComponent__SetActiveForOrgObj(this, 1, v28);
  organizationBg = this->fields.organizationBg;
  if ( !organizationBg )
    goto LABEL_18;
  ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))organizationBg->klass->vtable._27_set_mainTexture.method)(
    organizationBg,
    orgBgTexture,
    organizationBg->klass->vtable._28_get_shader.methodPtr);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
  if ( !byte_40F6E59 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v30);
    byte_40F6E59 = 1;
  }
  v37 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v37 = CTouch_TypeInfo;
  }
  static_fields = v37->static_fields;
  static_fields->mScreenCam = mainCamera;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->mScreenCam,
    (System_Int32_array **)mainCamera,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( !*p_orgCamera
    || (MapCamera__Init(*p_orgCamera, 0LL), !*p_orgCamera)
    || (MapCamera__SetMapBg(*p_orgCamera, this->fields.organizationBg, 0LL), (v39 = this->fields.orgCamera) == 0LL)
    || (MapCamera__SetEnable(v39, 1, 0LL), !*p_orgCamera)
    || (mZoom = (*p_orgCamera)->fields.mZoom) == 0LL )
  {
LABEL_18:
    sub_B170D4();
  }
  MapZoom__SetZoomSize(mZoom, this->fields.zoomSize, 1, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_1820/*"ActivationTouchFlag"*/,
    0.05,
    0LL);
}


void __fastcall FortificationOrganizationPanelComponent__SetActiveForOrgObj(
        FortificationOrganizationPanelComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainPanel; // x0
  bool v5; // w21
  UnityEngine_GameObject_o *eventRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *orgCamera; // x0
  UnityEngine_GameObject_o *v10; // x0

  mainPanel = this->fields.mainPanel;
  if ( !mainPanel )
    goto LABEL_7;
  v5 = !isActive;
  UnityEngine_GameObject__SetActive(mainPanel, v5, 0LL);
  eventRoot = this->fields.eventRoot;
  if ( !eventRoot
    || (UnityEngine_GameObject__SetActive(eventRoot, v5, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL),
        (orgCamera = (UnityEngine_Component_o *)this->fields.orgCamera) == 0LL)
    || (v10 = UnityEngine_Component__get_gameObject(orgCamera, 0LL)) == 0LL )
  {
LABEL_7:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v10, isActive, 0LL);
}


void __fastcall FortificationOrganizationPanelComponent__Update(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isTouchEnabled; // w8
  MapCamera_o *orgCamera; // x19

  if ( (byte_40FA775 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    byte_40FA775 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  isTouchEnabled = this->fields.isTouchEnabled;
  orgCamera = this->fields.orgCamera;
  if ( isTouchEnabled )
    LOBYTE(isTouchEnabled) = !MainMenuBar__get_IsEnableOutSideCollider(0LL);
  if ( !orgCamera )
    sub_B170D4();
  MapCamera__Process(orgCamera, isTouchEnabled, 0LL);
}