void __fastcall MapCamera___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MapCamera_StaticFields *static_fields; // x8

  if ( (byte_4AFEB7D & 1) == 0 )
  {
    sub_1BC3008(&MapCamera_TypeInfo, v1);
    byte_4AFEB7D = 1;
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
    sub_1BC3264(0LL, method);
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
    sub_1BC3264(0LL, method);
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
UnityEngine_Rect_o __fastcall MapCamera__GetWorldRect_35252176(
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
  __int64 v3; // x1
  __int64 v4; // x1
  MapTouchDetector_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  MapScroll_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  MapScroll_o *mScrl; // x0
  MapZoom_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4AFEB74 & 1) == 0 )
  {
    sub_1BC3008(&MapScroll_TypeInfo, method);
    sub_1BC3008(&MapTouchDetector_TypeInfo, v3);
    sub_1BC3008(&MapZoom_TypeInfo, v4);
    byte_4AFEB74 = 1;
  }
  if ( !this->fields.mIsInitDone )
  {
    this->fields._windowSize_k__BackingField = FSWindowUtil__GetSize(0LL);
    v5 = (MapTouchDetector_o *)sub_1BC3254(MapTouchDetector_TypeInfo);
    MapTouchDetector___ctor(v5, 0LL);
    this->fields.touchDetector = v5;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.touchDetector, (int32_t)v5, v6, v7);
    v8 = (MapScroll_o *)sub_1BC3254(MapScroll_TypeInfo);
    MapScroll___ctor(v8, 0LL);
    this->fields.mScrl = v8;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mScrl, (int32_t)v8, v9, v10);
    mScrl = this->fields.mScrl;
    if ( !mScrl )
      goto LABEL_8;
    MapScroll__Init(mScrl, this, this->fields.touchDetector, 0LL);
    v13 = (MapZoom_o *)sub_1BC3254(MapZoom_TypeInfo);
    MapZoom___ctor(v13, 0LL);
    this->fields.mZoom = v13;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mZoom, (int32_t)v13, v14, v15);
    mScrl = (MapScroll_o *)this->fields.mZoom;
    if ( !mScrl
      || (MapZoom__Init((MapZoom_o *)mScrl, this, this->fields.touchDetector, 0LL),
          mScrl = (MapScroll_o *)this->fields.mCamera,
          *(_WORD *)&this->fields.mIsInitDone = 257,
          !mScrl) )
    {
LABEL_8:
      sub_1BC3264(mScrl, v11);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mScrl, 0, 0LL);
  }
}


bool __fastcall MapCamera__IsAutoWork(MapCamera_o *this, const MethodInfo *method)
{
  struct MapZoom_o *mZoom; // x8

  mZoom = this->fields.mZoom;
  if ( !mZoom )
    goto LABEL_7;
  if ( !mZoom->fields.mIsAutoZoom )
  {
    this = (MapCamera_o *)this->fields.mScrl;
    if ( this )
      return !MapScroll__IsStop((MapScroll_o *)this, 0LL);
LABEL_7:
    sub_1BC3264(this, method);
  }
  return 1;
}


bool __fastcall MapCamera__IsEnable(MapCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *mCamera; // x0

  mCamera = (UnityEngine_Behaviour_o *)this->fields.mCamera;
  if ( !mCamera )
    sub_1BC3264(0LL, method);
  return UnityEngine_Behaviour__get_enabled(mCamera, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapCamera__IsMatchPosAndZoomSize(
        MapCamera_o *this,
        UnityEngine_Vector3_o screenPos,
        float zoomSize,
        const MethodInfo *method)
{
  MapScroll_o *mZoom; // x0
  float y; // s8
  float x; // s9
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4

  mZoom = (MapScroll_o *)this->fields.mZoom;
  if ( !mZoom )
    goto LABEL_8;
  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (float)(MapZoom__GetZoomSize((MapZoom_o *)mZoom, 0LL) - zoomSize) == 0.0 )
  {
    mZoom = this->fields.mScrl;
    if ( !mZoom )
      goto LABEL_8;
    if ( (float)(COERCE_FLOAT(MapScroll__GetScrlPosVec3(mZoom, 0LL)) - x) == 0.0 )
    {
      mZoom = this->fields.mScrl;
      if ( mZoom )
      {
        ScrlPosVec3 = MapScroll__GetScrlPosVec3(mZoom, 0LL);
        return (float)(ScrlPosVec3.fields.y - y) == 0.0;
      }
LABEL_8:
      sub_1BC3264(mZoom, method);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapCamera__Process(MapCamera_o *this, bool is_tch_enable, const MethodInfo *method)
{
  TouchDetectorBase_o *mCamera; // x0
  float ZoomSize; // s8
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4AFEB75 & 1) == 0 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, is_tch_enable);
    byte_4AFEB75 = 1;
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
              if ( !byte_4AFEB91 )
              {
                sub_1BC3008(&TerminalPramsManager_TypeInfo, is_tch_enable);
                byte_4AFEB91 = 1;
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
      sub_1BC3264(mCamera, is_tch_enable);
    }
  }
}


void __fastcall MapCamera__RemoveMapTexture(MapCamera_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CrashReporter_o *mMapBg; // x0
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4AFEB79 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v3);
    sub_1BC3008(&StringLiteral_7406/*"IN_TerminalScene"*/, v4);
    byte_4AFEB79 = 1;
  }
  mMapBg = (CrashReporter_o *)this->fields.mMapBg;
  if ( !mMapBg )
    goto LABEL_11;
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(CrashReporter_o *, void *))mMapBg->klass[1].vtable._3_ToString.method)(
                                 mMapBg,
                                 mMapBg->klass[2]._1.image);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(0LL, v6, 0LL) )
  {
    mMapBg = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !mMapBg )
      goto LABEL_11;
    CrashReporter__SetNowState(mMapBg, (System_String_o *)StringLiteral_7406/*"IN_TerminalScene"*/, 0LL);
  }
  mMapBg = (CrashReporter_o *)this->fields.mMapBg;
  if ( !mMapBg )
LABEL_11:
    sub_1BC3264(mMapBg, method);
  ((void (__fastcall *)(CrashReporter_o *, _QWORD, const char *))mMapBg->klass[2]._1.gc_desc)(
    mMapBg,
    0LL,
    mMapBg->klass[2]._1.name);
}


void __fastcall MapCamera__SetEnable(MapCamera_o *this, bool is_enable, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *mCamera; // x0

  mCamera = (UnityEngine_Behaviour_o *)this->fields.mCamera;
  if ( !mCamera )
    sub_1BC3264(0LL, is_enable);
  UnityEngine_Behaviour__set_enabled(mCamera, is_enable, 0LL);
}


void __fastcall MapCamera__SetMapBg(MapCamera_o *this, UITexture_o *mapBg, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  CrashReporter_o *mMapBg; // x0
  UnityEngine_Object_o *v11; // x19

  if ( (byte_4AFEB76 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, mapBg);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v6);
    sub_1BC3008(&StringLiteral_11908/*"SET_TERMINAL_MAP"*/, v7);
    byte_4AFEB76 = 1;
  }
  this->fields.mMapBg = mapBg;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mMapBg, (int32_t)mapBg, (int32_t)method, v3);
  MapCamera__SetMapRate(this, v8);
  mMapBg = (CrashReporter_o *)this->fields.mMapBg;
  if ( !mMapBg )
    goto LABEL_10;
  v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(CrashReporter_o *, void *))mMapBg->klass[1].vtable._3_ToString.method)(
                                  mMapBg,
                                  mMapBg->klass[2]._1.image);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(0LL, v11, 0LL) )
  {
    mMapBg = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( mMapBg )
    {
      CrashReporter__SetNowState(mMapBg, (System_String_o *)StringLiteral_11908/*"SET_TERMINAL_MAP"*/, 0LL);
      return;
    }
LABEL_10:
    sub_1BC3264(mMapBg, v9);
  }
}


void __fastcall MapCamera__SetMapRate(MapCamera_o *this, const MethodInfo *method)
{
  MapCamera_o *v2; // x19
  __int64 v3; // x1
  int32x2_t *mMapBg; // x8
  struct UITexture_o *v5; // x8
  MapCamera_c *v6; // x0
  int mWidth; // w20
  int MAP_BASE_W; // s8
  float y; // s2
  float v10; // s0
  bool v11; // w1
  int32_t HEIGHT; // s1
  MapCamera_c *v13; // x0
  int mHeight; // w20
  int MAP_BASE_H; // s8

  v2 = this;
  if ( (byte_4AFEB78 & 1) == 0 )
  {
    sub_1BC3008(&ManagerConfig_TypeInfo, method);
    this = (MapCamera_o *)sub_1BC3008(&MapCamera_TypeInfo, v3);
    byte_4AFEB78 = 1;
  }
  mMapBg = (int32x2_t *)v2->fields.mMapBg;
  if ( !mMapBg )
    goto LABEL_19;
  *(float32x2_t *)&v2->fields._MapBgRateW_k__BackingField = vdiv_f32(
                                                              vcvt_f32_s32(mMapBg[21]),
                                                              (float32x2_t)v2->fields._windowSize_k__BackingField);
  MapCamera__SetMoveLimit(v2, method);
  v5 = v2->fields.mMapBg;
  if ( !v5 )
    goto LABEL_19;
  if ( v2->fields._MapBgRateH_k__BackingField <= v2->fields._MapBgRateW_k__BackingField )
  {
    v13 = MapCamera_TypeInfo;
    mHeight = v5->fields.mHeight;
    if ( !MapCamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapCamera_TypeInfo);
      v13 = MapCamera_TypeInfo;
    }
    MAP_BASE_H = v13->static_fields->MAP_BASE_H;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    this = (MapCamera_o *)v2->fields.mZoom;
    if ( this )
    {
      y = v2->fields._windowSize_k__BackingField.fields.y;
      v10 = (float)mHeight / (float)MAP_BASE_H;
      v11 = 0;
      HEIGHT = ManagerConfig_TypeInfo->static_fields->HEIGHT;
      goto LABEL_18;
    }
LABEL_19:
    sub_1BC3264(this, method);
  }
  v6 = MapCamera_TypeInfo;
  mWidth = v5->fields.mWidth;
  if ( !MapCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCamera_TypeInfo);
    v6 = MapCamera_TypeInfo;
  }
  MAP_BASE_W = v6->static_fields->MAP_BASE_W;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  this = (MapCamera_o *)v2->fields.mZoom;
  if ( !this )
    goto LABEL_19;
  y = v2->fields._windowSize_k__BackingField.fields.x;
  v10 = (float)mWidth / (float)MAP_BASE_W;
  v11 = 1;
  HEIGHT = ManagerConfig_TypeInfo->static_fields->WIDTH;
LABEL_18:
  MapZoom__SetZoomRate((MapZoom_o *)this, v10 * (float)((float)HEIGHT / y), v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapCamera__SetMapTexture(
        MapCamera_o *this,
        UnityEngine_Texture_o *tex,
        int32_t w,
        int32_t h,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UIWidget_o *mMapBg; // x0
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *v13; // x19

  if ( (byte_4AFEB77 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, tex);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v9);
    sub_1BC3008(&StringLiteral_11908/*"SET_TERMINAL_MAP"*/, v10);
    byte_4AFEB77 = 1;
  }
  mMapBg = (UIWidget_o *)this->fields.mMapBg;
  if ( !mMapBg )
    goto LABEL_13;
  ((void (__fastcall *)(UIWidget_o *, UnityEngine_Texture_o *, Il2CppMethodPointer, _QWORD, const MethodInfo *))mMapBg->klass->vtable._27_set_mainTexture.method)(
    mMapBg,
    tex,
    mMapBg->klass->vtable._28_get_shader.methodPtr,
    *(_QWORD *)&h,
    method);
  mMapBg = (UIWidget_o *)this->fields.mMapBg;
  if ( !mMapBg )
    goto LABEL_13;
  UIWidget__set_width(mMapBg, w, 0LL);
  mMapBg = (UIWidget_o *)this->fields.mMapBg;
  if ( !mMapBg )
    goto LABEL_13;
  UIWidget__set_height(mMapBg, h, 0LL);
  MapCamera__SetMapRate(this, v12);
  mMapBg = (UIWidget_o *)this->fields.mMapBg;
  if ( !mMapBg )
    goto LABEL_13;
  v13 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))mMapBg->klass->vtable._26_get_mainTexture.method)(
                                  mMapBg,
                                  mMapBg->klass->vtable._27_set_mainTexture.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(0LL, v13, 0LL) )
  {
    mMapBg = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( mMapBg )
    {
      CrashReporter__SetNowState((CrashReporter_o *)mMapBg, (System_String_o *)StringLiteral_11908/*"SET_TERMINAL_MAP"*/, 0LL);
      return;
    }
LABEL_13:
    sub_1BC3264(mMapBg, tex);
  }
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
    sub_1BC3264(this, method);
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
  if ( (byte_4AFEB7A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Nullable_Vector3___ctor__, *(_QWORD *)&easeType);
    byte_4AFEB7A = 1;
  }
  *(_QWORD *)&v16.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v16.fields.hasValue = &v14;
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  *(_QWORD *)&v14.fields.hasValue = 0LL;
  *(_QWORD *)&v14.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v16, v17, (const MethodInfo_37C4780 *)endAct);
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
  __int64 v14; // x1
  MapZoom_o *SafeCameraDestination; // x0
  __int64 v16; // x1
  MapCamera_c *v17; // x8
  MapZoom_o *v18; // x22
  System_Nullable_float__o v19; // 0:x3.8
  System_Nullable_Vector3__o v20; // 0:x1.16

  v10 = *(_QWORD *)&screenPos.fields.value.fields.y;
  v11 = *(_QWORD *)&screenPos.fields.hasValue;
  if ( (byte_4AFEB7C & 1) == 0 )
  {
    sub_1BC3008(&MapCameraViewAdjusterUtil_TypeInfo, *(_QWORD *)&screenPos.fields.hasValue);
    sub_1BC3008(&MapCamera_TypeInfo, v14);
    byte_4AFEB7C = 1;
  }
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  *(_QWORD *)&v20.fields.hasValue = v11;
  *(_QWORD *)&v20.fields.value.fields.y = v10;
  v19 = size;
  SafeCameraDestination = (MapZoom_o *)MapCameraViewAdjusterUtil__GetSafeCameraDestination(this, v20, v19, 0LL);
  v17 = MapCamera_TypeInfo;
  v18 = SafeCameraDestination;
  if ( !MapCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCamera_TypeInfo);
    v17 = MapCamera_TypeInfo;
  }
  if ( v17->static_fields->AUTO_WORK_DURATION_MIN >= sec )
  {
    sec = v17->static_fields->AUTO_WORK_DURATION_MIN;
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      sec = MapCamera_TypeInfo->static_fields->AUTO_WORK_DURATION_MIN;
    }
  }
  if ( !v18
    || (SafeCameraDestination = this->fields.mZoom) == 0LL
    || (MapZoom__StartAutoZoom(SafeCameraDestination, *(&v18->fields.mZoomMargin + 1), sec, easeType, 0LL, 0LL),
        (SafeCameraDestination = (MapZoom_o *)this->fields.mScrl) == 0LL) )
  {
    sub_1BC3264(SafeCameraDestination, v16);
  }
  MapScroll__StartAutoMove(
    (MapScroll_o *)SafeCameraDestination,
    *(UnityEngine_Vector3_o *)&v18->fields.mZoomMax,
    sec,
    easeType,
    endAct,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4AFEB7B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Nullable_float___ctor__, *(_QWORD *)&easeType);
    byte_4AFEB7B = 1;
  }
  p_sizea = (System_Nullable_float__o)&sizea;
  sizea = 0LL;
  System_Nullable_float____ctor(p_sizea, size, (const MethodInfo_37C22BC *)Method_System_Nullable_float___ctor__);
  v14 = sizea;
  *(_QWORD *)&v15.fields.hasValue = 0LL;
  *(_QWORD *)&v15.fields.value.fields.y = 0LL;
  MapCamera__StartAutoWork(this, sec, v15, v14, easeType, endAct, v11);
}


void __fastcall MapCamera__UnInit(MapCamera_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MapScroll_o *mScrl; // x0
  CGThumbnailListItem_o *p_mScrl; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  MapZoom_o *mZoom; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct MapTouchDetector_o **p_touchDetector; // x19

  if ( this->fields.mIsInitDone )
  {
    p_mScrl = (CGThumbnailListItem_o *)&this->fields.mScrl;
    mScrl = this->fields.mScrl;
    if ( mScrl )
    {
      MapScroll__UnInit(mScrl, 0LL);
      p_mScrl->klass = 0LL;
      sub_1BC2FAC(p_mScrl, 0, v7, v8);
    }
    mZoom = this->fields.mZoom;
    if ( mZoom )
    {
      MapZoom__UnInit(mZoom, 0LL);
      this->fields.mZoom = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mZoom, 0, v10, v11);
    }
    this->fields.touchDetector = 0LL;
    p_touchDetector = &this->fields.touchDetector;
    sub_1BC2FAC((CGThumbnailListItem_o *)p_touchDetector, 0, v2, v3);
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