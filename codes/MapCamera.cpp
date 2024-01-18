void __fastcall MapCamera___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418633C & 1) == 0 )
  {
    sub_B2C35C(&MapCamera_TypeInfo, v1);
    byte_418633C = 1;
  }
  MapCamera_TypeInfo->static_fields->MAP_BASE_W = 1920;
  MapCamera_TypeInfo->static_fields->MAP_BASE_H = 1240;
  MapCamera_TypeInfo->static_fields->AUTO_WORK_DURATION_MIN = 0.001;
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
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  mCamera = (UnityEngine_Component_o *)this->fields.mCamera;
  if ( !mCamera )
    sub_B2C434(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(mCamera, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  this->fields.mCameraRect = MapCamera__GetWorldRect(this, LocalPosition, v5);
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
  float z; // s8
  float y; // s9
  float x; // s10
  float ZoomSize; // s0
  float v9; // s3
  const MethodInfo *v10; // x1
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s3
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mZoom = this->fields.mZoom;
  if ( !mZoom )
    sub_B2C434(0LL, method);
  z = cam_pos.fields.z;
  y = cam_pos.fields.y;
  x = cam_pos.fields.x;
  ZoomSize = MapZoom__GetZoomSize(mZoom, 0LL);
  v15.fields.y = y;
  v15.fields.z = z;
  v9 = ZoomSize;
  v15.fields.x = x;
  *(UnityEngine_Rect_o *)&v11 = MapCamera__GetWorldRect_22140620(this, v15, v9, v10);
  result.fields.m_Height = v14;
  result.fields.m_Width = v13;
  result.fields.m_YMin = v12;
  result.fields.m_XMin = v11;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall MapCamera__GetWorldRect_22140620(
        MapCamera_o *this,
        UnityEngine_Vector3_o cam_pos,
        float scale,
        const MethodInfo *method)
{
  float v4; // s6
  float v5; // s7
  float v6; // s3
  float v7; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s3
  __int64 v11; // [xsp+0h] [xbp-10h] BYREF
  __int64 v12; // [xsp+8h] [xbp-8h]
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  cam_pos.fields.z = this->fields._windowSize_k__BackingField.fields.x * scale;
  v6 = this->fields._windowSize_k__BackingField.fields.y * scale;
  cam_pos.fields.x = cam_pos.fields.x - (float)(cam_pos.fields.z * 0.5);
  cam_pos.fields.y = cam_pos.fields.y - (float)(v6 * 0.5);
  v11 = 0LL;
  v12 = 0LL;
  UnityEngine_Rect___ctor(
    *(UnityEngine_Rect_o *)&cam_pos.fields.x,
    cam_pos.fields.z * 0.5,
    v6 * 0.5,
    v4,
    v5,
    (const MethodInfo *)&v11);
  v8 = *((float *)&v11 + 1);
  v7 = *(float *)&v11;
  v10 = *((float *)&v12 + 1);
  v9 = *(float *)&v12;
  result.fields.m_Height = v10;
  result.fields.m_Width = v9;
  result.fields.m_YMin = v8;
  result.fields.m_XMin = v7;
  return result;
}


void __fastcall MapCamera__Init(MapCamera_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MapTouchDetector_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  MapScroll_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  MapScroll_o *mScrl; // x0
  MapZoom_o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4186336 & 1) == 0 )
  {
    sub_B2C35C(&MapScroll_TypeInfo, method);
    sub_B2C35C(&MapTouchDetector_TypeInfo, v3);
    sub_B2C35C(&MapZoom_TypeInfo, v4);
    byte_4186336 = 1;
  }
  if ( !this->fields.mIsInitDone )
  {
    this->fields._windowSize_k__BackingField = FSWindowUtil__GetSize(0LL);
    v5 = (MapTouchDetector_o *)sub_B2C42C(MapTouchDetector_TypeInfo);
    MapTouchDetector___ctor(v5, 0LL);
    this->fields.touchDetector = v5;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.touchDetector,
      (System_Int32_array **)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v12 = (MapScroll_o *)sub_B2C42C(MapScroll_TypeInfo);
    MapScroll___ctor(v12, 0LL);
    this->fields.mScrl = v12;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mScrl,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    mScrl = this->fields.mScrl;
    if ( !mScrl )
      goto LABEL_8;
    MapScroll__Init(mScrl, this, this->fields.touchDetector, 0LL);
    v21 = (MapZoom_o *)sub_B2C42C(MapZoom_TypeInfo);
    MapZoom___ctor(v21, 0LL);
    this->fields.mZoom = v21;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mZoom,
      (System_Int32_array **)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    mScrl = (MapScroll_o *)this->fields.mZoom;
    if ( !mScrl
      || (MapZoom__Init((MapZoom_o *)mScrl, this, this->fields.touchDetector, 0LL),
          mScrl = (MapScroll_o *)this->fields.mCamera,
          *(_WORD *)&this->fields.mIsInitDone = 257,
          !mScrl) )
    {
LABEL_8:
      sub_B2C434(mScrl, v19);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mScrl, 0, 0LL);
  }
}


bool __fastcall MapCamera__IsEnable(MapCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *mCamera; // x0

  mCamera = (UnityEngine_Behaviour_o *)this->fields.mCamera;
  if ( !mCamera )
    sub_B2C434(0LL, method);
  return UnityEngine_Behaviour__get_enabled(mCamera, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapCamera__Process(MapCamera_o *this, bool is_tch_enable, const MethodInfo *method)
{
  TouchDetectorBase_o *mCamera; // x0
  float ZoomSize; // s8
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4186337 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, is_tch_enable);
    byte_4186337 = 1;
  }
  if ( this->fields.mIsInitDone )
  {
    mCamera = (TouchDetectorBase_o *)this->fields.mCamera;
    if ( !mCamera )
      goto LABEL_21;
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
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_4183CB4 )
              {
                sub_B2C35C(&TerminalPramsManager_TypeInfo, is_tch_enable);
                byte_4183CB4 = 1;
              }
              v7 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
LABEL_21:
      sub_B2C434(mCamera, is_tch_enable);
    }
  }
}


void __fastcall MapCamera__RemoveMapTexture(MapCamera_o *this, const MethodInfo *method)
{
  struct UITexture_o *mMapBg; // x0

  mMapBg = this->fields.mMapBg;
  if ( !mMapBg )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, is_enable);
  UnityEngine_Behaviour__set_enabled(mCamera, is_enable, 0LL);
}


void __fastcall MapCamera__SetMapBg(MapCamera_o *this, UITexture_o *mapBg, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.mMapBg = mapBg;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mMapBg,
    (System_Int32_array **)mapBg,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  MapCamera__SetMapRate(this, v9);
}


void __fastcall MapCamera__SetMapRate(MapCamera_o *this, const MethodInfo *method)
{
  MapCamera_o *v2; // x19
  __int64 v3; // x1
  struct UITexture_o *mMapBg; // x8
  float y; // s2
  struct UITexture_o *v6; // x8
  MapCamera_c *v7; // x0
  int mWidth; // w20
  int MAP_BASE_W; // s8
  float x; // s2
  float v11; // s0
  bool v12; // w1
  int32_t HEIGHT; // s1
  MapCamera_c *v14; // x0
  int mHeight; // w20
  int MAP_BASE_H; // s8

  v2 = this;
  if ( (byte_4186338 & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, method);
    this = (MapCamera_o *)sub_B2C35C(&MapCamera_TypeInfo, v3);
    byte_4186338 = 1;
  }
  mMapBg = v2->fields.mMapBg;
  if ( !mMapBg )
    goto LABEL_23;
  y = v2->fields._windowSize_k__BackingField.fields.y;
  v2->fields._MapBgRateW_k__BackingField = (float)mMapBg->fields.mWidth
                                         / v2->fields._windowSize_k__BackingField.fields.x;
  v2->fields._MapBgRateH_k__BackingField = (float)mMapBg->fields.mHeight / y;
  MapCamera__SetMoveLimit(v2, method);
  v6 = v2->fields.mMapBg;
  if ( !v6 )
    goto LABEL_23;
  if ( v2->fields._MapBgRateH_k__BackingField <= v2->fields._MapBgRateW_k__BackingField )
  {
    v14 = MapCamera_TypeInfo;
    mHeight = v6->fields.mHeight;
    if ( (BYTE3(MapCamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapCamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapCamera_TypeInfo);
      v14 = MapCamera_TypeInfo;
    }
    MAP_BASE_H = v14->static_fields->MAP_BASE_H;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    }
    this = (MapCamera_o *)v2->fields.mZoom;
    if ( this )
    {
      x = v2->fields._windowSize_k__BackingField.fields.y;
      v11 = (float)mHeight / (float)MAP_BASE_H;
      v12 = 0;
      HEIGHT = ManagerConfig_TypeInfo->static_fields->HEIGHT;
      goto LABEL_22;
    }
LABEL_23:
    sub_B2C434(this, method);
  }
  v7 = MapCamera_TypeInfo;
  mWidth = v6->fields.mWidth;
  if ( (BYTE3(MapCamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCamera_TypeInfo);
    v7 = MapCamera_TypeInfo;
  }
  MAP_BASE_W = v7->static_fields->MAP_BASE_W;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  this = (MapCamera_o *)v2->fields.mZoom;
  if ( !this )
    goto LABEL_23;
  x = v2->fields._windowSize_k__BackingField.fields.x;
  v11 = (float)mWidth / (float)MAP_BASE_W;
  v12 = 1;
  HEIGHT = ManagerConfig_TypeInfo->static_fields->WIDTH;
LABEL_22:
  MapZoom__SetZoomRate((MapZoom_o *)this, v11 * (float)((float)HEIGHT / x), v12, 0LL);
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
    sub_B2C434(mMapBg, tex);
  }
  UIWidget__set_height(mMapBg, h, 0LL);
  MapCamera__SetMapRate(this, v9);
}


void __fastcall MapCamera__SetMoveLimit(MapCamera_o *this, const MethodInfo *method)
{
  float v2; // s5
  float v3; // s6
  float v4; // s7
  struct UITexture_o *mMapBg; // x8
  MapCamera_o *v6; // x19
  float v7; // s8
  float v8; // s9
  float v9; // s10
  float v10; // s4
  float v11; // s5
  float v12; // s6
  float v13; // s7
  __int128 v14; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Rect_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mMapBg = this->fields.mMapBg;
  if ( !mMapBg )
    sub_B2C434(this, method);
  v6 = this;
  v16.fields.m_Width = (float)mMapBg->fields.mWidth + -4.0;
  v16.fields.m_Height = (float)mMapBg->fields.mHeight + -4.0;
  v16.fields.m_XMin = v16.fields.m_Width * -0.5;
  v16.fields.m_YMin = v16.fields.m_Height * -0.5;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v16, -0.5, v2, v3, v4, &methoda);
  v17.fields.m_XMin = *(float *)&methoda.methodPointer;
  v6->fields.mMvLimitRect = *(struct UnityEngine_Rect_o *)&methoda.methodPointer;
  v6 = (MapCamera_o *)((char *)v6 + 108);
  v18.fields.m_XMin = UnityEngine_Rect__get_xMin(v17, (const MethodInfo *)v6);
  v7 = v18.fields.m_XMin + 60.0;
  v19.fields.m_XMin = UnityEngine_Rect__get_yMin(v18, (const MethodInfo *)v6);
  v8 = v19.fields.m_XMin + 60.0;
  v20.fields.m_XMin = UnityEngine_Rect__get_width(v19, (const MethodInfo *)v6);
  v9 = v20.fields.m_XMin + -120.0;
  v21.fields.m_Height = UnityEngine_Rect__get_height(v20, (const MethodInfo *)v6) + -120.0;
  v21.fields.m_XMin = v7;
  v21.fields.m_YMin = v8;
  v21.fields.m_Width = v9;
  v14 = 0uLL;
  UnityEngine_Rect___ctor(v21, v10, v11, v12, v13, (const MethodInfo *)&v14);
  *(_OWORD *)&v6[-1].fields.mMvLimitRect.fields.m_Height = v14;
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
  System_Nullable_Vector3__o v14; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v15; // 0:x3.8
  System_Nullable_Vector3__o v16; // 0:x0.16
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  z = screenPos.fields.z;
  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (byte_4186339 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, *(_QWORD *)&easeType);
    byte_4186339 = 1;
  }
  *(_QWORD *)&v16.fields.value.fields.x = &v14;
  v17.fields.x = x;
  v17.fields.y = y;
  *(_QWORD *)&v16.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  v17.fields.z = z;
  *(_QWORD *)&v14.fields.value.fields.x = 0LL;
  *(_QWORD *)&v14.fields.value.fields.z = 0LL;
  System_Nullable_Vector3____ctor(v16, v17, (const MethodInfo_2155668 *)endAct);
  v15 = 0LL;
  MapCamera__StartAutoWork(this, sec, v14, v15, easeType, endAct, v13);
}


// local variable allocation has failed, the output may be wrong!
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
  MapZoom_o *v17; // x22
  MapCamera_c *v18; // x8
  System_Nullable_float__o v19; // 0:x3.8
  System_Nullable_Vector3__o v20; // 0:x1.16

  v10 = *(_QWORD *)&screenPos.fields.value.fields.z;
  v11 = *(_QWORD *)&screenPos.fields.value.fields.x;
  if ( (byte_418633B & 1) == 0 )
  {
    sub_B2C35C(&MapCameraViewAdjusterUtil_TypeInfo, *(_QWORD *)&screenPos.fields.value.fields.x);
    sub_B2C35C(&MapCamera_TypeInfo, v14);
    byte_418633B = 1;
  }
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  *(_QWORD *)&v20.fields.value.fields.x = v11;
  *(_QWORD *)&v20.fields.value.fields.z = v10;
  v19 = size;
  SafeCameraDestination = (MapZoom_o *)MapCameraViewAdjusterUtil__GetSafeCameraDestination(
                                         this,
                                         v20,
                                         v19,
                                         *(const MethodInfo **)&easeType);
  v17 = SafeCameraDestination;
  v18 = MapCamera_TypeInfo;
  if ( (BYTE3(MapCamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCamera_TypeInfo);
    v18 = MapCamera_TypeInfo;
  }
  if ( v18->static_fields->AUTO_WORK_DURATION_MIN < sec )
  {
LABEL_15:
    if ( !v17 )
      goto LABEL_19;
    goto LABEL_16;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    sec = v18->static_fields->AUTO_WORK_DURATION_MIN;
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      sec = MapCamera_TypeInfo->static_fields->AUTO_WORK_DURATION_MIN;
    }
    goto LABEL_15;
  }
  sec = v18->static_fields->AUTO_WORK_DURATION_MIN;
  if ( !v17 )
    goto LABEL_19;
LABEL_16:
  SafeCameraDestination = this->fields.mZoom;
  if ( !SafeCameraDestination
    || (MapZoom__StartAutoZoom(SafeCameraDestination, *(&v17->fields.mZoomMargin + 1), sec, easeType, 0LL, 0LL),
        (SafeCameraDestination = (MapZoom_o *)this->fields.mScrl) == 0LL) )
  {
LABEL_19:
    sub_B2C434(SafeCameraDestination, v16);
  }
  MapScroll__StartAutoMove(
    (MapScroll_o *)SafeCameraDestination,
    *(UnityEngine_Vector3_o *)&v17->fields.mZoomMax,
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
  System_Nullable_float__o sizea; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_sizea; // 0:x0.8
  System_Nullable_float__o v14; // 0:x3.8
  System_Nullable_Vector3__o v15; // 0:x1.16

  if ( (byte_418633A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_float___ctor__, *(_QWORD *)&easeType);
    byte_418633A = 1;
  }
  p_sizea = (System_Nullable_float__o)&sizea;
  sizea = 0LL;
  System_Nullable_float____ctor(p_sizea, size, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
  v14 = sizea;
  *(_QWORD *)&v15.fields.value.fields.x = 0LL;
  *(_QWORD *)&v15.fields.value.fields.z = 0LL;
  MapCamera__StartAutoWork(this, sec, v15, v14, easeType, endAct, v11);
}


void __fastcall MapCamera__UnInit(MapCamera_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MapScroll_o *mScrl; // x0
  BattleServantConfConponent_o *p_mScrl; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  MapZoom_o *mZoom; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct MapTouchDetector_o **p_touchDetector; // x19

  if ( this->fields.mIsInitDone )
  {
    p_mScrl = (BattleServantConfConponent_o *)&this->fields.mScrl;
    mScrl = this->fields.mScrl;
    if ( mScrl )
    {
      MapScroll__UnInit(mScrl, 0LL);
      p_mScrl->klass = 0LL;
      sub_B2C2F8(p_mScrl, 0LL, v11, v12, v13, v14, v15, v16);
    }
    mZoom = this->fields.mZoom;
    if ( mZoom )
    {
      MapZoom__UnInit(mZoom, 0LL);
      this->fields.mZoom = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mZoom, 0LL, v18, v19, v20, v21, v22, v23);
    }
    this->fields.touchDetector = 0LL;
    p_touchDetector = &this->fields.touchDetector;
    sub_B2C2F8((BattleServantConfConponent_o *)p_touchDetector, 0LL, v2, v3, v4, v5, v6, v7);
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