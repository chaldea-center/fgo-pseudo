void FortificationOrganizationPanelComponent___ctor(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MapZoom_c *v4; // x0

  if ( (byte_59325B8 & 1) == 0 )
  {
    sub_21FFC50(&MapZoom_TypeInfo);
    byte_59325B8 = 1;
  }
  v4 = MapZoom_TypeInfo;
  if ( !*(&MapZoom_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, method, v2);
    v4 = MapZoom_TypeInfo;
  }
  this->fields.zoomSize = v4->static_fields->ZOOM_DEFAULT;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FortificationOrganizationPanelComponent__ActivationTouchFlag(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isTouchEnabled = 1;
}


void FortificationOrganizationPanelComponent__Awake(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void FortificationOrganizationPanelComponent__Close(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  MapZoom_o *mZoom; // x0
  __int64 v4; // x1
  struct MapCamera_o *orgCamera; // x8
  struct MapCamera_o *v6; // x8
  struct MapCamera_o *v7; // x8
  const MethodInfo *v8; // x2

  UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0);
  orgCamera = this->fields.orgCamera;
  this->fields.isTouchEnabled = 0;
  if ( !orgCamera
    || (mZoom = orgCamera->fields.mZoom) == 0
    || (MapZoom__Stop(mZoom, 1, 0), (v6 = this->fields.orgCamera) == 0)
    || (mZoom = (MapZoom_o *)v6->fields.mScrl) == 0
    || (MapScroll__Stop((MapScroll_o *)mZoom, 1, 0), (v7 = this->fields.orgCamera) == 0)
    || (mZoom = v7->fields.mZoom) == 0 )
  {
    sub_21FFECC(mZoom, v4);
  }
  this->fields.zoomSize = MapZoom__GetZoomSize(mZoom, 0);
  FortificationOrganizationPanelComponent__SetActiveForOrgObj(this, 0, v8);
}


bool FortificationOrganizationPanelComponent__IsMapTouchEnabled(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  bool isTouchEnabled; // w8

  isTouchEnabled = this->fields.isTouchEnabled;
  if ( isTouchEnabled )
    return !MainMenuBar__get_IsEnableOutSideCollider(0);
  return isTouchEnabled;
}


void FortificationOrganizationPanelComponent__Open(
        FortificationOrganizationPanelComponent_o *this,
        int32_t eventId,
        UnityEngine_Texture2D_o *orgBgTexture,
        UnityEngine_GameObject_o *mainPanel,
        UnityEngine_GameObject_o *eventRoot,
        MapCamera_o *orgCamera,
        UnityEngine_Camera_o *mainCamera,
        const MethodInfo *method)
{
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct MapCamera_o **p_orgCamera; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  const MethodInfo *v27; // x2
  __int64 v28; // x1
  MapCamera_o *organizationBg; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  CTouch_c *v39; // x0
  struct CTouch_StaticFields *static_fields; // x0

  if ( (byte_59325B7 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&StringLiteral_2227/*"ActivationTouchFlag"*/);
    byte_59325B7 = 1;
  }
  this->fields.mainPanel = mainPanel;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainPanel,
    (int32_t)mainPanel,
    (System_String_o *)orgBgTexture,
    (System_String_o *)mainPanel,
    (int32_t)eventRoot,
    (int32_t)orgCamera,
    (bool)mainCamera,
    (bool)method);
  this->fields.eventRoot = eventRoot;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventRoot,
    (int32_t)eventRoot,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.orgCamera = orgCamera;
  p_orgCamera = &this->fields.orgCamera;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.orgCamera,
    (int32_t)orgCamera,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  FortificationOrganizationPanelComponent__SetActiveForOrgObj(this, 1, v27);
  organizationBg = (MapCamera_o *)this->fields.organizationBg;
  if ( !organizationBg )
    goto LABEL_16;
  ((void (__fastcall *)(MapCamera_o *, UnityEngine_Texture2D_o *, void *))organizationBg->klass[1].vtable._3_ToString.method)(
    organizationBg,
    orgBgTexture,
    organizationBg->klass[2]._1.image);
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v30, v31);
  CTouch__init(0);
  if ( !byte_5932645 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_5932645 = 1;
  }
  v39 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v32, v33);
    v39 = CTouch_TypeInfo;
  }
  static_fields = v39->static_fields;
  static_fields->mScreenCam = mainCamera;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->mScreenCam,
    (int32_t)mainCamera,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  organizationBg = *p_orgCamera;
  if ( !*p_orgCamera
    || (MapCamera__Init(organizationBg, 0), (organizationBg = *p_orgCamera) == 0)
    || (MapCamera__SetMapBg(organizationBg, this->fields.organizationBg, 0),
        (organizationBg = this->fields.orgCamera) == 0)
    || (MapCamera__SetEnable(organizationBg, 1, 0), !*p_orgCamera)
    || (organizationBg = (MapCamera_o *)(*p_orgCamera)->fields.mZoom) == 0 )
  {
LABEL_16:
    sub_21FFECC(organizationBg, v28);
  }
  MapZoom__SetZoomSize((MapZoom_o *)organizationBg, this->fields.zoomSize, 1, 0, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_2227/*"ActivationTouchFlag"*/, 0.05, 0);
}


// local variable allocation has failed, the output may be wrong!
void FortificationOrganizationPanelComponent__SetActiveForOrgObj(
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
  UnityEngine_GameObject__SetActive(mainPanel, !isActive, 0);
  mainPanel = this->fields.eventRoot;
  if ( !mainPanel
    || (UnityEngine_GameObject__SetActive(mainPanel, v5, 0),
        (mainPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (UnityEngine_GameObject__SetActive(mainPanel, isActive, 0),
        (mainPanel = (UnityEngine_GameObject_o *)this->fields.orgCamera) == 0)
    || (mainPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainPanel, 0)) == 0 )
  {
LABEL_7:
    sub_21FFECC(mainPanel, isActive);
  }
  UnityEngine_GameObject__SetActive(mainPanel, isActive, 0);
}


void FortificationOrganizationPanelComponent__Update(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL8 IsEnableOutSideCollider; // x0
  __int64 v5; // x1
  _BOOL4 isTouchEnabled; // w8
  MapCamera_o *orgCamera; // x19

  if ( (byte_59325B6 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_59325B6 = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
  CTouch__process(0);
  isTouchEnabled = this->fields.isTouchEnabled;
  orgCamera = this->fields.orgCamera;
  if ( isTouchEnabled )
  {
    IsEnableOutSideCollider = MainMenuBar__get_IsEnableOutSideCollider(0);
    LOBYTE(isTouchEnabled) = !IsEnableOutSideCollider;
  }
  if ( !orgCamera )
    sub_21FFECC(IsEnableOutSideCollider, v5);
  MapCamera__Process(orgCamera, isTouchEnabled, 0);
}