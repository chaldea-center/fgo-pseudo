void __fastcall MapCamera___cctor(const MethodInfo *method)
{
  struct MapCamera_StaticFields *static_fields; // x8

  if ( (byte_4BD9201 & 1) == 0 )
  {
    sub_1C21E38(&MapCamera_TypeInfo);
    byte_4BD9201 = 1;
  }
  static_fields = MapCamera_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MAP_BASE_W = 0x4D800000780LL;
  static_fields->AUTO_WORK_DURATION_MIN = 0.001;
}


void __fastcall MapCamera___ctor(MapCamera_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapCamera__CalcWorldRect(MapCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mCamera; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  mCamera = (UnityEngine_Component_o *)this->fields.mCamera;
  if ( !mCamera )
    sub_1C22094(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(mCamera, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, v5);
  this->fields.mCameraRect = MapCamera__GetWorldRect(this, LocalPosition, v6);
}


UnityEngine_Camera_o *__fastcall MapCamera__GetCamera(MapCamera_o *this, const MethodInfo *method)
{
  return this->fields.mCamera;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall MapCamera__GetWorldRect(
        MapCamera_o *this,
        UnityEngine_Vector3_o cam_pos,
        const MethodInfo *method)
{
  MapZoom_o *mZoom; // x0
  float y; // s8
  float x; // s9
  float ZoomSize; // s0
  float v8; // s2
  float v9; // s3
  float v10; // s0
  float v11; // s1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mZoom = this->fields.mZoom;
  if ( !mZoom )
    sub_1C22094(0LL, method);
  y = cam_pos.fields.y;
  x = cam_pos.fields.x;
  ZoomSize = MapZoom__GetZoomSize(mZoom, 0LL);
  v8 = ZoomSize * this->fields._windowSize_k__BackingField.fields.x;
  v9 = ZoomSize * this->fields._windowSize_k__BackingField.fields.y;
  v10 = x - (float)(v8 * 0.5);
  v11 = y - (float)(v9 * 0.5);
  result.fields.m_Height = v9;
  result.fields.m_Width = v8;
  result.fields.m_YMin = v11;
  result.fields.m_XMin = v10;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall MapCamera__GetWorldRect_34838168(
        MapCamera_o *this,
        UnityEngine_Vector3_o cam_pos,
        float scale,
        const MethodInfo *method)
{
  float v4; // s2
  float v5; // s3
  float v6; // s0
  float v7; // s1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  cam_pos.fields.z = this->fields._windowSize_k__BackingField.fields.x * scale;
  v5 = this->fields._windowSize_k__BackingField.fields.y * scale;
  cam_pos.fields.x = cam_pos.fields.x - (float)(cam_pos.fields.z * 0.5);
  v7 = cam_pos.fields.y - (float)(v5 * 0.5);
  result.fields.m_Height = v5;
  result.fields.m_Width = v4;
  result.fields.m_YMin = v7;
  result.fields.m_XMin = v6;
  return result;
}


void __fastcall MapCamera__Init(MapCamera_o *this, const MethodInfo *method)
{
  MapTouchDetector_o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  MapScroll_o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  MapScroll_o *mScrl; // x0
  MapZoom_o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BD91FB & 1) == 0 )
  {
    sub_1C21E38(&MapScroll_TypeInfo);
    sub_1C21E38(&MapTouchDetector_TypeInfo);
    sub_1C21E38(&MapZoom_TypeInfo);
    byte_4BD91FB = 1;
  }
  if ( !this->fields.mIsInitDone )
  {
    this->fields._windowSize_k__BackingField = FSWindowUtil__GetSize(0LL);
    v3 = (MapTouchDetector_o *)sub_1C22084(MapTouchDetector_TypeInfo);
    MapTouchDetector___ctor(v3, 0LL);
    this->fields.touchDetector = v3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.touchDetector, (int64_t)v3, v4, v5, v6, v7, v8, v9);
    v10 = (MapScroll_o *)sub_1C22084(MapScroll_TypeInfo);
    MapScroll___ctor(v10, 0LL);
    this->fields.mScrl = v10;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mScrl, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    mScrl = this->fields.mScrl;
    if ( !mScrl )
      goto LABEL_8;
    MapScroll__Init(mScrl, this, this->fields.touchDetector, 0LL);
    v19 = (MapZoom_o *)sub_1C22084(MapZoom_TypeInfo);
    MapZoom___ctor(v19, 0LL);
    this->fields.mZoom = v19;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mZoom, (int64_t)v19, v20, v21, v22, v23, v24, v25);
    mScrl = (MapScroll_o *)this->fields.mZoom;
    if ( !mScrl
      || (MapZoom__Init((MapZoom_o *)mScrl, this, this->fields.touchDetector, 0LL),
          mScrl = (MapScroll_o *)this->fields.mCamera,
          *(_WORD *)&this->fields.mIsInitDone = 257,
          !mScrl) )
    {
LABEL_8:
      sub_1C22094(mScrl, v17);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mScrl, 0, 0LL);
  }
}


bool __fastcall MapCamera__IsEnable(MapCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *mCamera; // x0

  mCamera = (UnityEngine_Behaviour_o *)this->fields.mCamera;
  if ( !mCamera )
    sub_1C22094(0LL, method);
  return UnityEngine_Behaviour__get_enabled(mCamera, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapCamera__Process(MapCamera_o *this, bool is_tch_enable, const MethodInfo *method)
{
  TouchDetectorBase_o *mCamera; // x0
  float ZoomSize; // s8
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4BD91FC & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD91FC = 1;
  }
  if ( this->fields.mIsInitDone )
  {
    mCamera = (TouchDetectorBase_o *)this->fields.mCamera;
    if ( !mCamera )
      goto LABEL_19;
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)mCamera, 0LL) )
    {
      mCamera = (TouchDetectorBase_o *)this->fields.touchDetector;
      if ( mCamera )
      {
        TouchDetectorBase__set_IsTouchEnable(mCamera, this->fields._IsTouchEnable_k__BackingField && is_tch_enable, 0LL);
        mCamera = (TouchDetectorBase_o *)this->fields.touchDetector;
        if ( mCamera )
        {
          TouchDetectorBase__DetectTouch(mCamera, 0LL);
          mCamera = (TouchDetectorBase_o *)this->fields.mZoom;
          if ( mCamera )
          {
            MapZoom__Process((MapZoom_o *)mCamera, 0LL);
            mCamera = (TouchDetectorBase_o *)this->fields.mZoom;
            if ( mCamera )
            {
              ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)mCamera, 0LL);
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4BD9278 )
              {
                sub_1C21E38(&TerminalPramsManager_TypeInfo);
                byte_4BD9278 = 1;
              }
              v7 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v7 = TerminalPramsManager_TypeInfo;
              }
              v7->static_fields->mZoomSize = ZoomSize;
              mCamera = (TouchDetectorBase_o *)this->fields.mScrl;
              if ( mCamera )
              {
                MapScroll__Process((MapScroll_o *)mCamera, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_19:
      sub_1C22094(mCamera, is_tch_enable);
    }
  }
}


void __fastcall MapCamera__RemoveMapTexture(MapCamera_o *this, const MethodInfo *method)
{
  struct UITexture_o *mMapBg; // x0

  mMapBg = this->fields.mMapBg;
  if ( !mMapBg )
    sub_1C22094(0LL, method);
  ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))mMapBg->klass->vtable._27_set_mainTexture.method)(
    mMapBg,
    0LL,
    mMapBg->klass->vtable._28_get_shader.methodPtr);
}


void __fastcall MapCamera__SetEnable(MapCamera_o *this, bool is_enable, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *mCamera; // x0

  mCamera = (UnityEngine_Behaviour_o *)this->fields.mCamera;
  if ( !mCamera )
    sub_1C22094(0LL, is_enable);
  UnityEngine_Behaviour__set_enabled(mCamera, is_enable, 0LL);
}


void __fastcall MapCamera__SetMapBg(MapCamera_o *this, UITexture_o *mapBg, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.mMapBg = mapBg;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mMapBg, (int64_t)mapBg, (int64_t)method, v3, v4, v5, v6, v7);
  MapCamera__SetMapRate(this, v9);
}


void __fastcall MapCamera__SetMapRate(MapCamera_o *this, const MethodInfo *method)
{
  MapCamera_o *v2; // x19
  int32x2_t *mMapBg; // x8
  struct UITexture_o *v4; // x8
  MapCamera_c *v5; // x0
  int mWidth; // w20
  int MAP_BASE_W; // s8
  float y; // s2
  float v9; // s0
  bool v10; // w1
  int32_t HEIGHT; // s1
  MapCamera_c *v12; // x0
  int mHeight; // w20
  int MAP_BASE_H; // s8

  v2 = this;
  if ( (byte_4BD91FD & 1) == 0 )
  {
    sub_1C21E38(&ManagerConfig_TypeInfo);
    this = (MapCamera_o *)sub_1C21E38(&MapCamera_TypeInfo);
    byte_4BD91FD = 1;
  }
  mMapBg = (int32x2_t *)v2->fields.mMapBg;
  if ( !mMapBg )
    goto LABEL_19;
  *(float32x2_t *)&v2->fields._MapBgRateW_k__BackingField = vdiv_f32(
                                                              vcvt_f32_s32(mMapBg[21]),
                                                              (float32x2_t)v2->fields._windowSize_k__BackingField);
  MapCamera__SetMoveLimit(v2, method);
  v4 = v2->fields.mMapBg;
  if ( !v4 )
    goto LABEL_19;
  if ( v2->fields._MapBgRateH_k__BackingField <= v2->fields._MapBgRateW_k__BackingField )
  {
    v12 = MapCamera_TypeInfo;
    mHeight = v4->fields.mHeight;
    if ( !MapCamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapCamera_TypeInfo);
      v12 = MapCamera_TypeInfo;
    }
    MAP_BASE_H = v12->static_fields->MAP_BASE_H;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    this = (MapCamera_o *)v2->fields.mZoom;
    if ( this )
    {
      y = v2->fields._windowSize_k__BackingField.fields.y;
      v9 = (float)mHeight / (float)MAP_BASE_H;
      v10 = 0;
      HEIGHT = ManagerConfig_TypeInfo->static_fields->HEIGHT;
      goto LABEL_18;
    }
LABEL_19:
    sub_1C22094(this, method);
  }
  v5 = MapCamera_TypeInfo;
  mWidth = v4->fields.mWidth;
  if ( !MapCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCamera_TypeInfo);
    v5 = MapCamera_TypeInfo;
  }
  MAP_BASE_W = v5->static_fields->MAP_BASE_W;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  this = (MapCamera_o *)v2->fields.mZoom;
  if ( !this )
    goto LABEL_19;
  y = v2->fields._windowSize_k__BackingField.fields.x;
  v9 = (float)mWidth / (float)MAP_BASE_W;
  v10 = 1;
  HEIGHT = ManagerConfig_TypeInfo->static_fields->WIDTH;
LABEL_18:
  MapZoom__SetZoomRate((MapZoom_o *)this, v9 * (float)((float)HEIGHT / y), v10, 0LL);
}


void __fastcall MapCamera__SetMapTexture(
        MapCamera_o *this,
        UnityEngine_Texture_o *tex,
        int32_t w,
        int32_t h,
        const MethodInfo *method)
{
  UIWidget_o *mMapBg; // x0
  const MethodInfo *v9; // x1

  mMapBg = (UIWidget_o *)this->fields.mMapBg;
  if ( !mMapBg
    || (((void (__fastcall *)(UIWidget_o *, UnityEngine_Texture_o *, Il2CppMethodPointer, int32_t, const MethodInfo *))mMapBg->klass->vtable._27_set_mainTexture.method)(
          mMapBg,
          tex,
          mMapBg->klass->vtable._28_get_shader.methodPtr,
          h,
          method),
        (mMapBg = (UIWidget_o *)this->fields.mMapBg) == 0LL)
    || (UIWidget__set_width(mMapBg, w, 0LL), (mMapBg = (UIWidget_o *)this->fields.mMapBg) == 0LL) )
  {
    sub_1C22094(mMapBg, tex);
  }
  UIWidget__set_height(mMapBg, h, 0LL);
  MapCamera__SetMapRate(this, v9);
}


void __fastcall MapCamera__SetMoveLimit(MapCamera_o *this, const MethodInfo *method)
{
  struct UITexture_o *mMapBg; // x8
  float32x4_t v8; // q2
  float32x4_t v9; // q0
  int8x16_t v10; // q1
  int8x16_t v11; // q0
  int8x16_t v12; // q1

  mMapBg = this->fields.mMapBg;
  if ( !mMapBg )
    sub_1C22094(this, method);
  __asm { FMOV            V1.2S, #-4.0 }
  v8.n128_u64[0] = 0xBF000000BF000000LL;
  v8.n128_u64[1] = 0xBF000000BF000000LL;
  v9.n128_u64[0] = vadd_f32(vcvt_f32_s32(*(int32x2_t *)&mMapBg->fields.mWidth), _D1).n64_u64[0];
  *(_QWORD *)&this->fields.mMvLimitRect.fields.m_Width = v9.n128_u64[0];
  v9.n128_u64[1] = v9.n128_u64[0];
  v10 = vaddq_f32(v9, vdupq_n_s32(0xC2F00000));
  v11 = vmulq_f32(v9, v8);
  v12 = vextq_s8(v11, v10, 8uLL);
  *(float32x2_t *)&this->fields.mMvBrakeRect.fields.m_XMin = vadd_f32(
                                                               (float32x2_t)vextq_s8(v11, v11, 8uLL).n128_u64[0],
                                                               vdup_n_s32(0x42700000u));
  *(int8x16_t *)&this->fields.mMvBrakeRect.fields.m_Width = vextq_s8(v12, v12, 8uLL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapCamera__StartAutoMove(
        MapCamera_o *this,
        UnityEngine_Vector3_o screenPos,
        float sec,
        int32_t easeType,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  float z; // s9
  float y; // s10
  float x; // s11
  const MethodInfo *v13; // x6
  System_Nullable_Vector3__o v14; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v15; // 0:x3.8
  System_Nullable_Vector3__o v16; // 0:x0.16
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  z = screenPos.fields.z;
  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (byte_4BD91FE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Nullable_Vector3___ctor__);
    byte_4BD91FE = 1;
  }
  *(_QWORD *)&v16.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v16.fields.hasValue = &v14;
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  *(_QWORD *)&v14.fields.hasValue = 0LL;
  *(_QWORD *)&v14.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v16, v17, (const MethodInfo_376FA28 *)endAct);
  v15 = 0LL;
  MapCamera__StartAutoWork(this, sec, v14, v15, easeType, endAct, v13);
}


void __fastcall MapCamera__StartAutoWork(
        MapCamera_o *this,
        float sec,
        System_Nullable_Vector3__o screenPos,
        System_Nullable_float__o size,
        int32_t easeType,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v10; // x23
  __int64 v11; // x24
  MapZoom_o *SafeCameraDestination; // x0
  __int64 v15; // x1
  MapCamera_c *v16; // x8
  MapZoom_o *v17; // x22
  System_Nullable_float__o v18; // 0:x3.8
  System_Nullable_Vector3__o v19; // 0:x1.16

  v10 = *(_QWORD *)&screenPos.fields.value.fields.y;
  v11 = *(_QWORD *)&screenPos.fields.hasValue;
  if ( (byte_4BD9200 & 1) == 0 )
  {
    sub_1C21E38(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_1C21E38(&MapCamera_TypeInfo);
    byte_4BD9200 = 1;
  }
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  *(_QWORD *)&v19.fields.hasValue = v11;
  *(_QWORD *)&v19.fields.value.fields.y = v10;
  v18 = size;
  SafeCameraDestination = (MapZoom_o *)MapCameraViewAdjusterUtil__GetSafeCameraDestination(this, v19, v18, 0LL);
  v16 = MapCamera_TypeInfo;
  v17 = SafeCameraDestination;
  if ( !MapCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCamera_TypeInfo);
    v16 = MapCamera_TypeInfo;
  }
  if ( v16->static_fields->AUTO_WORK_DURATION_MIN >= sec )
  {
    sec = v16->static_fields->AUTO_WORK_DURATION_MIN;
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      sec = MapCamera_TypeInfo->static_fields->AUTO_WORK_DURATION_MIN;
    }
  }
  if ( !v17
    || (SafeCameraDestination = this->fields.mZoom) == 0LL
    || (MapZoom__StartAutoZoom(SafeCameraDestination, *(&v17->fields.mZoomMargin + 1), sec, easeType, 0LL, 0LL),
        (SafeCameraDestination = (MapZoom_o *)this->fields.mScrl) == 0LL) )
  {
    sub_1C22094(SafeCameraDestination, v15);
  }
  MapScroll__StartAutoMove(
    (MapScroll_o *)SafeCameraDestination,
    *(UnityEngine_Vector3_o *)&v17->fields.mZoomMax,
    sec,
    easeType,
    endAct,
    0LL);
}


void __fastcall MapCamera__StartAutoZoom(
        MapCamera_o *this,
        float size,
        float sec,
        int32_t easeType,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x6
  System_Nullable_float__o sizea; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_float__o p_sizea; // 0:x0.8
  System_Nullable_float__o v14; // 0:x3.8
  System_Nullable_Vector3__o v15; // 0:x1.16

  if ( (byte_4BD91FF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Nullable_float___ctor__);
    byte_4BD91FF = 1;
  }
  p_sizea = (System_Nullable_float__o)&sizea;
  sizea = 0LL;
  System_Nullable_float____ctor(p_sizea, size, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
  v14 = sizea;
  *(_QWORD *)&v15.fields.hasValue = 0LL;
  *(_QWORD *)&v15.fields.value.fields.y = 0LL;
  MapCamera__StartAutoWork(this, sec, v15, v14, easeType, endAct, v11);
}


void __fastcall MapCamera__UnInit(MapCamera_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  MapScroll_o *mScrl; // x0
  PartyOrganizationUtility_o *p_mScrl; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  MapZoom_o *mZoom; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct MapTouchDetector_o **p_touchDetector; // x19

  if ( this->fields.mIsInitDone )
  {
    p_mScrl = (PartyOrganizationUtility_o *)&this->fields.mScrl;
    mScrl = this->fields.mScrl;
    if ( mScrl )
    {
      MapScroll__UnInit(mScrl, 0LL);
      p_mScrl->klass = 0LL;
      sub_1C21DDC(p_mScrl, 0LL, v11, v12, v13, v14, v15, v16);
    }
    mZoom = this->fields.mZoom;
    if ( mZoom )
    {
      MapZoom__UnInit(mZoom, 0LL);
      this->fields.mZoom = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mZoom, 0LL, v18, v19, v20, v21, v22, v23);
    }
    this->fields.touchDetector = 0LL;
    p_touchDetector = &this->fields.touchDetector;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_touchDetector, 0LL, v2, v3, v4, v5, v6, v7);
    *((_BYTE *)p_touchDetector + 8) = 0;
  }
}


UnityEngine_Rect_o __fastcall MapCamera__get_CameraRect(MapCamera_o *this, const MethodInfo *method)
{
  float m_XMin; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  MapCamera__CalcWorldRect(this, method);
  m_XMin = this->fields.mCameraRect.fields.m_XMin;
  m_YMin = this->fields.mCameraRect.fields.m_YMin;
  m_Width = this->fields.mCameraRect.fields.m_Width;
  m_Height = this->fields.mCameraRect.fields.m_Height;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = m_XMin;
  return result;
}


bool __fastcall MapCamera__get_IsTouchEnable(MapCamera_o *this, const MethodInfo *method)
{
  return this->fields._IsTouchEnable_k__BackingField;
}


UITexture_o *__fastcall MapCamera__get_MapBg(MapCamera_o *this, const MethodInfo *method)
{
  return this->fields.mMapBg;
}


float __fastcall MapCamera__get_MapBgRateH(MapCamera_o *this, const MethodInfo *method)
{
  return this->fields._MapBgRateH_k__BackingField;
}


float __fastcall MapCamera__get_MapBgRateW(MapCamera_o *this, const MethodInfo *method)
{
  return this->fields._MapBgRateW_k__BackingField;
}


UnityEngine_Rect_o __fastcall MapCamera__get_MvBrakeRect(MapCamera_o *this, const MethodInfo *method)
{
  float m_XMin; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.mMvBrakeRect.fields.m_XMin;
  m_YMin = this->fields.mMvBrakeRect.fields.m_YMin;
  m_Width = this->fields.mMvBrakeRect.fields.m_Width;
  m_Height = this->fields.mMvBrakeRect.fields.m_Height;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = m_XMin;
  return result;
}


UnityEngine_Rect_o __fastcall MapCamera__get_MvLimitRect(MapCamera_o *this, const MethodInfo *method)
{
  float m_XMin; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.mMvLimitRect.fields.m_XMin;
  m_YMin = this->fields.mMvLimitRect.fields.m_YMin;
  m_Width = this->fields.mMvLimitRect.fields.m_Width;
  m_Height = this->fields.mMvLimitRect.fields.m_Height;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = m_XMin;
  return result;
}


MapScroll_o *__fastcall MapCamera__get_Scrl(MapCamera_o *this, const MethodInfo *method)
{
  return this->fields.mScrl;
}


MapZoom_o *__fastcall MapCamera__get_Zoom(MapCamera_o *this, const MethodInfo *method)
{
  return this->fields.mZoom;
}


UnityEngine_Vector2_o __fastcall MapCamera__get_windowSize(MapCamera_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields._windowSize_k__BackingField.fields.x;
  y = this->fields._windowSize_k__BackingField.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void __fastcall MapCamera__set_IsTouchEnable(MapCamera_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsTouchEnable_k__BackingField = value;
}


void __fastcall MapCamera__set_MapBgRateH(MapCamera_o *this, float value, const MethodInfo *method)
{
  this->fields._MapBgRateH_k__BackingField = value;
}


void __fastcall MapCamera__set_MapBgRateW(MapCamera_o *this, float value, const MethodInfo *method)
{
  this->fields._MapBgRateW_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapCamera__set_windowSize(MapCamera_o *this, UnityEngine_Vector2_o value, const MethodInfo *method)
{
  this->fields._windowSize_k__BackingField = value;
}