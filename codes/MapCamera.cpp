void __fastcall MapCamera___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FB596 & 1) == 0 )
  {
    sub_B16FFC(&MapCamera_TypeInfo, v1);
    byte_40FB596 = 1;
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
    sub_B170D4();
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
  struct MapZoom_o *mZoom; // x8
  UnityEngine_Camera_o *mCamera; // x0
  float z; // s8
  float y; // s9
  float x; // s10
  float orthographicSize; // s0
  float v10; // s3
  const MethodInfo *v11; // x1
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s3
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mZoom = this->fields.mZoom;
  if ( !mZoom || (mCamera = mZoom->fields.mCamera) == 0LL )
    sub_B170D4();
  z = cam_pos.fields.z;
  y = cam_pos.fields.y;
  x = cam_pos.fields.x;
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
  v16.fields.y = y;
  v16.fields.z = z;
  v10 = orthographicSize;
  v16.fields.x = x;
  *(UnityEngine_Rect_o *)&v12 = MapCamera__GetWorldRect_27677016(this, v16, v10, v11);
  result.fields.m_Height = v15;
  result.fields.m_Width = v14;
  result.fields.m_YMin = v13;
  result.fields.m_XMin = v12;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall MapCamera__GetWorldRect_27677016(
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  TouchDetectorBase_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x3
  MapScroll_o *mScrl; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x3
  MapZoom_o *mZoom; // x0
  UnityEngine_Behaviour_o *mCamera; // x0

  if ( (byte_40FB590 & 1) == 0 )
  {
    sub_B16FFC(&MapScroll_TypeInfo, method);
    sub_B16FFC(&MapTouchDetector_TypeInfo, v3);
    sub_B16FFC(&MapZoom_TypeInfo, v4);
    byte_40FB590 = 1;
  }
  if ( !this->fields.mIsInitDone )
  {
    this->fields._windowSize_k__BackingField = FSWindowUtil__GetSize(0LL);
    v9 = (TouchDetectorBase_o *)sub_B170CC(MapTouchDetector_TypeInfo, v5, v6, v7, v8);
    TouchDetectorBase___ctor(v9, 0LL);
    this->fields.touchDetector = (struct MapTouchDetector_o *)v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.touchDetector,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v20 = (Il2CppObject *)sub_B170CC(MapScroll_TypeInfo, v16, v17, v18, v19);
    System_Object___ctor(v20, 0LL);
    this->fields.mScrl = (struct MapScroll_o *)v20;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mScrl,
      (System_Int32_array **)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    mScrl = this->fields.mScrl;
    if ( !mScrl )
      goto LABEL_8;
    MapScroll__Init(mScrl, this, this->fields.touchDetector, v27);
    v33 = (Il2CppObject *)sub_B170CC(MapZoom_TypeInfo, v29, v30, v31, v32);
    System_Object___ctor(v33, 0LL);
    this->fields.mZoom = (struct MapZoom_o *)v33;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mZoom,
      (System_Int32_array **)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    mZoom = this->fields.mZoom;
    if ( !mZoom
      || (MapZoom__Init(mZoom, this, this->fields.touchDetector, v40),
          mCamera = (UnityEngine_Behaviour_o *)this->fields.mCamera,
          *(_WORD *)&this->fields.mIsInitDone = 257,
          !mCamera) )
    {
LABEL_8:
      sub_B170D4();
    }
    UnityEngine_Behaviour__set_enabled(mCamera, 0, 0LL);
  }
}


bool __fastcall MapCamera__IsEnable(MapCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *mCamera; // x0

  mCamera = (UnityEngine_Behaviour_o *)this->fields.mCamera;
  if ( !mCamera )
    sub_B170D4();
  return UnityEngine_Behaviour__get_enabled(mCamera, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapCamera__Process(MapCamera_o *this, bool is_tch_enable, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *mCamera; // x0
  TouchDetectorBase_o *touchDetector; // x0
  TouchDetectorBase_o *v7; // x0
  const MethodInfo *v8; // x1
  MapZoom_o *mZoom; // x0
  struct MapZoom_o *v10; // x8
  UnityEngine_Camera_o *v11; // x0
  const MethodInfo *v12; // x1
  float orthographicSize; // s8
  TerminalPramsManager_c *v14; // x0
  MapScroll_o *mScrl; // x0

  if ( (byte_40FB591 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, is_tch_enable);
    byte_40FB591 = 1;
  }
  if ( this->fields.mIsInitDone )
  {
    mCamera = (UnityEngine_Behaviour_o *)this->fields.mCamera;
    if ( !mCamera )
      goto LABEL_22;
    if ( UnityEngine_Behaviour__get_enabled(mCamera, 0LL) )
    {
      touchDetector = (TouchDetectorBase_o *)this->fields.touchDetector;
      if ( touchDetector )
      {
        TouchDetectorBase__set_IsTouchEnable(
          touchDetector,
          this->fields._IsTouchEnable_k__BackingField && is_tch_enable,
          0LL);
        v7 = (TouchDetectorBase_o *)this->fields.touchDetector;
        if ( v7 )
        {
          TouchDetectorBase__DetectTouch(v7, 0LL);
          mZoom = this->fields.mZoom;
          if ( mZoom )
          {
            MapZoom__Process(mZoom, v8);
            v10 = this->fields.mZoom;
            if ( v10 )
            {
              v11 = v10->fields.mCamera;
              if ( v11 )
              {
                orthographicSize = UnityEngine_Camera__get_orthographicSize(v11, 0LL);
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_40F6091 )
                {
                  sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
                  byte_40F6091 = 1;
                }
                v14 = TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v14 = TerminalPramsManager_TypeInfo;
                }
                v14->static_fields->mZoomSize = orthographicSize;
                mScrl = this->fields.mScrl;
                if ( mScrl )
                {
                  MapScroll__Process(mScrl, v12);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_22:
      sub_B170D4();
    }
  }
}


void __fastcall MapCamera__RemoveMapTexture(MapCamera_o *this, const MethodInfo *method)
{
  struct UITexture_o *mMapBg; // x0

  mMapBg = this->fields.mMapBg;
  if ( !mMapBg )
    sub_B170D4();
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
    sub_B170D4();
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
  sub_B16F98(
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
  __int64 v3; // x1
  struct UITexture_o *mMapBg; // x8
  float y; // s2
  const MethodInfo *v6; // x2
  struct UITexture_o *v7; // x8
  MapCamera_c *v8; // x0
  int mWidth; // w20
  int MAP_BASE_W; // s8
  MapZoom_o *mZoom; // x0
  float x; // s2
  float v13; // s0
  bool v14; // w1
  int32_t HEIGHT; // s1
  MapCamera_c *v16; // x0
  int mHeight; // w20
  int MAP_BASE_H; // s8

  if ( (byte_40FB592 & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    sub_B16FFC(&MapCamera_TypeInfo, v3);
    byte_40FB592 = 1;
  }
  mMapBg = this->fields.mMapBg;
  if ( !mMapBg )
    goto LABEL_23;
  y = this->fields._windowSize_k__BackingField.fields.y;
  this->fields._MapBgRateW_k__BackingField = (float)mMapBg->fields.mWidth
                                           / this->fields._windowSize_k__BackingField.fields.x;
  this->fields._MapBgRateH_k__BackingField = (float)mMapBg->fields.mHeight / y;
  MapCamera__SetMoveLimit(this, method);
  v7 = this->fields.mMapBg;
  if ( !v7 )
    goto LABEL_23;
  if ( this->fields._MapBgRateH_k__BackingField <= this->fields._MapBgRateW_k__BackingField )
  {
    v16 = MapCamera_TypeInfo;
    mHeight = v7->fields.mHeight;
    if ( (BYTE3(MapCamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapCamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapCamera_TypeInfo);
      v16 = MapCamera_TypeInfo;
    }
    MAP_BASE_H = v16->static_fields->MAP_BASE_H;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    }
    mZoom = this->fields.mZoom;
    if ( mZoom )
    {
      x = this->fields._windowSize_k__BackingField.fields.y;
      v13 = (float)mHeight / (float)MAP_BASE_H;
      v14 = 0;
      HEIGHT = ManagerConfig_TypeInfo->static_fields->HEIGHT;
      goto LABEL_22;
    }
LABEL_23:
    sub_B170D4();
  }
  v8 = MapCamera_TypeInfo;
  mWidth = v7->fields.mWidth;
  if ( (BYTE3(MapCamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCamera_TypeInfo);
    v8 = MapCamera_TypeInfo;
  }
  MAP_BASE_W = v8->static_fields->MAP_BASE_W;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  mZoom = this->fields.mZoom;
  if ( !mZoom )
    goto LABEL_23;
  x = this->fields._windowSize_k__BackingField.fields.x;
  v13 = (float)mWidth / (float)MAP_BASE_W;
  v14 = 1;
  HEIGHT = ManagerConfig_TypeInfo->static_fields->WIDTH;
LABEL_22:
  MapZoom__SetZoomRate(mZoom, v13 * (float)((float)HEIGHT / x), v14, v6);
}


void __fastcall MapCamera__SetMapTexture(
        MapCamera_o *this,
        UnityEngine_Texture_o *tex,
        int32_t w,
        int32_t h,
        const MethodInfo *method)
{
  struct UITexture_o *mMapBg; // x0
  UIWidget_o *v9; // x0
  UIWidget_o *v10; // x0
  const MethodInfo *v11; // x1

  mMapBg = this->fields.mMapBg;
  if ( !mMapBg
    || (((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture_o *, Il2CppMethodPointer, int32_t, const MethodInfo *))mMapBg->klass->vtable._27_set_mainTexture.method)(
          mMapBg,
          tex,
          mMapBg->klass->vtable._28_get_shader.methodPtr,
          h,
          method),
        (v9 = (UIWidget_o *)this->fields.mMapBg) == 0LL)
    || (UIWidget__set_width(v9, w, 0LL), (v10 = (UIWidget_o *)this->fields.mMapBg) == 0LL) )
  {
    sub_B170D4();
  }
  UIWidget__set_height(v10, h, 0LL);
  MapCamera__SetMapRate(this, v11);
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
    sub_B170D4();
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
  if ( (byte_40FB593 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, *(_QWORD *)&easeType);
    byte_40FB593 = 1;
  }
  *(_QWORD *)&v16.fields.value.fields.x = &v14;
  v17.fields.x = x;
  v17.fields.y = y;
  *(_QWORD *)&v16.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  v17.fields.z = z;
  *(_QWORD *)&v14.fields.value.fields.x = 0LL;
  *(_QWORD *)&v14.fields.value.fields.z = 0LL;
  System_Nullable_Vector3____ctor(v16, v17, (const MethodInfo_29CF778 *)endAct);
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
  const MethodInfo *v15; // x3
  MapCameraViewAdjusterUtil_CameraDestinationInfo_o *SafeCameraDestination; // x22
  MapCamera_c *v17; // x8
  MapZoom_o *mZoom; // x0
  const MethodInfo *v19; // x3
  MapScroll_o *mScrl; // x0
  System_Nullable_float__o v21; // 0:x3.8
  System_Nullable_Vector3__o v22; // 0:x1.16

  v10 = *(_QWORD *)&screenPos.fields.value.fields.z;
  v11 = *(_QWORD *)&screenPos.fields.value.fields.x;
  if ( (byte_40FB595 & 1) == 0 )
  {
    sub_B16FFC(&MapCameraViewAdjusterUtil_TypeInfo, *(_QWORD *)&screenPos.fields.value.fields.x);
    sub_B16FFC(&MapCamera_TypeInfo, v14);
    byte_40FB595 = 1;
  }
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  *(_QWORD *)&v22.fields.value.fields.x = v11;
  *(_QWORD *)&v22.fields.value.fields.z = v10;
  v21 = size;
  SafeCameraDestination = MapCameraViewAdjusterUtil__GetSafeCameraDestination(
                            this,
                            v22,
                            v21,
                            *(const MethodInfo **)&easeType);
  v17 = MapCamera_TypeInfo;
  if ( (BYTE3(MapCamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCamera_TypeInfo);
    v17 = MapCamera_TypeInfo;
  }
  if ( v17->static_fields->AUTO_WORK_DURATION_MIN < sec )
  {
LABEL_15:
    if ( !SafeCameraDestination )
      goto LABEL_19;
    goto LABEL_16;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    sec = v17->static_fields->AUTO_WORK_DURATION_MIN;
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      sec = MapCamera_TypeInfo->static_fields->AUTO_WORK_DURATION_MIN;
    }
    goto LABEL_15;
  }
  sec = v17->static_fields->AUTO_WORK_DURATION_MIN;
  if ( !SafeCameraDestination )
    goto LABEL_19;
LABEL_16:
  mZoom = this->fields.mZoom;
  if ( !mZoom
    || (MapZoom__StartAutoZoom(mZoom, SafeCameraDestination->fields._size_k__BackingField, sec, easeType, 0LL, v15),
        (mScrl = this->fields.mScrl) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  MapScroll__StartAutoMove(mScrl, SafeCameraDestination->fields._position_k__BackingField, sec, easeType, endAct, v19);
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

  if ( (byte_40FB594 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_float___ctor__, *(_QWORD *)&easeType);
    byte_40FB594 = 1;
  }
  p_sizea = (System_Nullable_float__o)&sizea;
  sizea = 0LL;
  System_Nullable_float____ctor(p_sizea, size, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
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
  BattleServantConfConponent_o *p_mScrl; // x20
  struct MapScroll_o *mScrl; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct MapZoom_o *mZoom; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct MapTouchDetector_o **p_touchDetector; // x19

  if ( this->fields.mIsInitDone )
  {
    p_mScrl = (BattleServantConfConponent_o *)&this->fields.mScrl;
    mScrl = this->fields.mScrl;
    if ( mScrl )
    {
      mScrl->fields.mMapCamera = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&mScrl->fields, 0LL, v2, v3, v4, v5, v6, v7);
      mScrl->fields.touchDetector = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&mScrl->fields.touchDetector, 0LL, v11, v12, v13, v14, v15, v16);
      p_mScrl->klass = 0LL;
      sub_B16F98(p_mScrl, 0LL, v17, v18, v19, v20, v21, v22);
    }
    mZoom = this->fields.mZoom;
    if ( mZoom )
    {
      mZoom->fields.mMapCamera = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&mZoom->fields.mMapCamera, 0LL, v2, v3, v4, v5, v6, v7);
      mZoom->fields.touchDetector = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&mZoom->fields.touchDetector, 0LL, v24, v25, v26, v27, v28, v29);
      this->fields.mZoom = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.mZoom, 0LL, v30, v31, v32, v33, v34, v35);
    }
    this->fields.touchDetector = 0LL;
    p_touchDetector = &this->fields.touchDetector;
    sub_B16F98((BattleServantConfConponent_o *)p_touchDetector, 0LL, v2, v3, v4, v5, v6, v7);
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