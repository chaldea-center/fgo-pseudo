void __fastcall FortificationOrganizationPanelComponent___ctor(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MapZoom_c *v5; // x0

  if ( (byte_42EBDB5 & 1) == 0 )
  {
    sub_B5D5C4(&MapZoom_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDB5 = 1;
  }
  v5 = MapZoom_TypeInfo;
  if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
    v5 = MapZoom_TypeInfo;
  }
  this->fields.zoomSize = v5->static_fields->ZOOM_DEFAULT;
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
    sub_B5D69C(mZoom, v4);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct MapCamera_o **p_orgCamera; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x2
  __int64 v31; // x1
  MapCamera_o *organizationBg; // x0
  int v33; // w1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  CTouch_c *v40; // x0
  struct CTouch_StaticFields *static_fields; // x0

  if ( (byte_42EBDB4 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, eventId, (_DWORD)orgBgTexture, mainPanel);
    sub_B5D5C4(&StringLiteral_1852/*"ActivationTouchFlag"*/, v14, v15, v16);
    byte_42EBDB4 = 1;
  }
  this->fields.mainPanel = mainPanel;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainPanel,
    (System_Int32_array **)mainPanel,
    (System_String_array **)orgBgTexture,
    (System_String_array **)mainPanel,
    (System_Boolean_array **)eventRoot,
    (System_Int32_array **)orgCamera,
    (System_Int32_array *)mainCamera,
    (System_Int32_array *)method);
  this->fields.eventRoot = eventRoot;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventRoot,
    (System_Int32_array **)eventRoot,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.orgCamera = orgCamera;
  p_orgCamera = &this->fields.orgCamera;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.orgCamera,
    (System_Int32_array **)orgCamera,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  FortificationOrganizationPanelComponent__SetActiveForOrgObj(this, 1, v30);
  organizationBg = (MapCamera_o *)this->fields.organizationBg;
  if ( !organizationBg )
    goto LABEL_18;
  ((void (__fastcall *)(MapCamera_o *, UnityEngine_Texture2D_o *, const char *))organizationBg->klass[2]._1.gc_desc)(
    organizationBg,
    orgBgTexture,
    organizationBg->klass[2]._1.name);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
  if ( !byte_42E5011 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v33, (_DWORD)v34, v35);
    byte_42E5011 = 1;
  }
  v40 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v40 = CTouch_TypeInfo;
  }
  static_fields = v40->static_fields;
  static_fields->mScreenCam = mainCamera;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->mScreenCam,
    (System_Int32_array **)mainCamera,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  organizationBg = *p_orgCamera;
  if ( !*p_orgCamera
    || (MapCamera__Init(organizationBg, 0LL), (organizationBg = *p_orgCamera) == 0LL)
    || (MapCamera__SetMapBg(organizationBg, this->fields.organizationBg, 0LL),
        (organizationBg = this->fields.orgCamera) == 0LL)
    || (MapCamera__SetEnable(organizationBg, 1, 0LL), !*p_orgCamera)
    || (organizationBg = (MapCamera_o *)(*p_orgCamera)->fields.mZoom) == 0LL )
  {
LABEL_18:
    sub_B5D69C(organizationBg, v31);
  }
  MapZoom__SetZoomSize((MapZoom_o *)organizationBg, this->fields.zoomSize, 1, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_1852/*"ActivationTouchFlag"*/,
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
    sub_B5D69C(mainPanel, isActive);
  }
  UnityEngine_GameObject__SetActive(mainPanel, isActive, 0LL);
}


void __fastcall FortificationOrganizationPanelComponent__Update(
        FortificationOrganizationPanelComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL8 IsEnableOutSideCollider; // x0
  __int64 v6; // x1
  _BOOL4 isTouchEnabled; // w8
  MapCamera_o *orgCamera; // x19

  if ( (byte_42EBDB3 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDB3 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
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
    sub_B5D69C(IsEnableOutSideCollider, v6);
  MapCamera__Process(orgCamera, isTouchEnabled, 0LL);
}