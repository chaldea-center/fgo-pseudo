void __fastcall FortificationOrganizationPanelComponent___ctor(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  MapZoom_c *v3; // x0

  if ( (byte_48E646E & 1) == 0 )
  {
    sub_1B00CCC(&MapZoom_TypeInfo, method);
    byte_48E646E = 1;
  }
  v3 = MapZoom_TypeInfo;
  if ( !MapZoom_TypeInfo->_2.cctor_finished )
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
  MapZoom_o *mZoom; // x0
  __int64 v4; // x1
  struct MapCamera_o *orgCamera; // x8
  struct MapCamera_o *v6; // x8
  struct MapCamera_o *v7; // x8
  const MethodInfo *v8; // x2

  UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0LL);
  orgCamera = this->fields.orgCamera;
  this->fields.isTouchEnabled = 0;
  if ( !orgCamera
    || (mZoom = orgCamera->fields.mZoom) == 0LL
    || (MapZoom__Stop(mZoom, 1, 0LL), (v6 = this->fields.orgCamera) == 0LL)
    || (mZoom = (MapZoom_o *)v6->fields.mScrl) == 0LL
    || (MapScroll__Stop((MapScroll_o *)mZoom, 1, 0LL), (v7 = this->fields.orgCamera) == 0LL)
    || (mZoom = v7->fields.mZoom) == 0LL )
  {
    sub_1B00F28(mZoom, v4);
  }
  this->fields.zoomSize = MapZoom__GetZoomSize(mZoom, 0LL);
  FortificationOrganizationPanelComponent__SetActiveForOrgObj(this, 0, v8);
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
  int32_t v15; // w2
  int32_t v16; // w3
  struct MapCamera_o **p_orgCamera; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  MapCamera_o *organizationBg; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  CTouch_c *v26; // x0
  struct CTouch_StaticFields *static_fields; // x0

  if ( (byte_48E646D & 1) == 0 )
  {
    sub_1B00CCC(&CTouch_TypeInfo, *(_QWORD *)&eventId);
    sub_1B00CCC(&StringLiteral_2219/*"ActivationTouchFlag"*/, v14);
    byte_48E646D = 1;
  }
  this->fields.mainPanel = mainPanel;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.mainPanel,
    (int32_t)mainPanel,
    (int32_t)orgBgTexture,
    (int32_t)mainPanel);
  this->fields.eventRoot = eventRoot;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.eventRoot, (int32_t)eventRoot, v15, v16);
  this->fields.orgCamera = orgCamera;
  p_orgCamera = &this->fields.orgCamera;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.orgCamera, (int32_t)orgCamera, v18, v19);
  FortificationOrganizationPanelComponent__SetActiveForOrgObj(this, 1, v20);
  organizationBg = (MapCamera_o *)this->fields.organizationBg;
  if ( !organizationBg )
    goto LABEL_16;
  ((void (__fastcall *)(MapCamera_o *, UnityEngine_Texture2D_o *, const char *))organizationBg->klass[2]._1.gc_desc)(
    organizationBg,
    orgBgTexture,
    organizationBg->klass[2]._1.name);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
  if ( !byte_48E07A3 )
  {
    sub_1B00CCC(&CTouch_TypeInfo, v23);
    byte_48E07A3 = 1;
  }
  v26 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v26 = CTouch_TypeInfo;
  }
  static_fields = v26->static_fields;
  static_fields->mScreenCam = mainCamera;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->mScreenCam, (int32_t)mainCamera, v24, v25);
  organizationBg = *p_orgCamera;
  if ( !*p_orgCamera
    || (MapCamera__Init(organizationBg, 0LL), (organizationBg = *p_orgCamera) == 0LL)
    || (MapCamera__SetMapBg(organizationBg, this->fields.organizationBg, 0LL),
        (organizationBg = this->fields.orgCamera) == 0LL)
    || (MapCamera__SetEnable(organizationBg, 1, 0LL), !*p_orgCamera)
    || (organizationBg = (MapCamera_o *)(*p_orgCamera)->fields.mZoom) == 0LL )
  {
LABEL_16:
    sub_1B00F28(organizationBg, v21);
  }
  MapZoom__SetZoomSize((MapZoom_o *)organizationBg, this->fields.zoomSize, 1, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_2219/*"ActivationTouchFlag"*/,
    0.05,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortificationOrganizationPanelComponent__SetActiveForOrgObj(
        FortificationOrganizationPanelComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainPanel; // x0
  bool v5; // w21

  mainPanel = this->fields.mainPanel;
  if ( !mainPanel )
    goto LABEL_7;
  v5 = !isActive;
  UnityEngine_GameObject__SetActive(mainPanel, v5, 0LL);
  mainPanel = this->fields.eventRoot;
  if ( !mainPanel
    || (UnityEngine_GameObject__SetActive(mainPanel, v5, 0LL),
        (mainPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(mainPanel, isActive, 0LL),
        (mainPanel = (UnityEngine_GameObject_o *)this->fields.orgCamera) == 0LL)
    || (mainPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainPanel, 0LL)) == 0LL )
  {
LABEL_7:
    sub_1B00F28(mainPanel, isActive);
  }
  UnityEngine_GameObject__SetActive(mainPanel, isActive, 0LL);
}


void __fastcall FortificationOrganizationPanelComponent__Update(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  _BOOL8 IsEnableOutSideCollider; // x0
  __int64 v4; // x1
  _BOOL4 isTouchEnabled; // w8
  MapCamera_o *orgCamera; // x19

  if ( (byte_48E646C & 1) == 0 )
  {
    sub_1B00CCC(&CTouch_TypeInfo, method);
    byte_48E646C = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  isTouchEnabled = this->fields.isTouchEnabled;
  orgCamera = this->fields.orgCamera;
  if ( isTouchEnabled )
  {
    IsEnableOutSideCollider = MainMenuBar__get_IsEnableOutSideCollider(0LL);
    LOBYTE(isTouchEnabled) = !IsEnableOutSideCollider;
  }
  if ( !orgCamera )
    sub_1B00F28(IsEnableOutSideCollider, v4);
  MapCamera__Process(orgCamera, isTouchEnabled, 0LL);
}