void __fastcall MapZoom___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MapZoom_c *v2; // x8

  if ( (byte_40FB61B & 1) == 0 )
  {
    sub_B16FFC(&MapZoom_TypeInfo, v1);
    byte_40FB61B = 1;
  }
  MapZoom_TypeInfo->static_fields->ZOOM_DEFAULT = 1.0;
  MapZoom_TypeInfo->static_fields->ZOOM_MIN = 0.45;
  v2 = MapZoom_TypeInfo;
  MapZoom_TypeInfo->static_fields->ZOOM_BASE_MAX_X = 1.675;
  v2->static_fields->ZOOM_BASE_MAX_Y = 1.9528;
  v2->static_fields->ZOOM_MARGIN = 0.2;
}


void __fastcall MapZoom___ctor(MapZoom_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


float __fastcall MapZoom__CalcZoomByPinch(MapZoom_o *this, const MethodInfo *method)
{
  struct MapTouchDetector_o *touchDetector; // x8
  TouchDetectorBase_TouchInfo_o *StartTouchInfo_k__BackingField; // x0
  float TouchInterval; // s0
  struct MapTouchDetector_o *v6; // x8
  TouchDetectorBase_TouchInfo_o *CurrentTouchInfo_k__BackingField; // x0
  float v8; // s8
  __int64 v9; // x1
  float v10; // s0
  float startMTgt; // s10
  float v12; // s9
  MapZoom_c *v13; // x0

  touchDetector = this->fields.touchDetector;
  if ( !touchDetector )
    goto LABEL_13;
  if ( !touchDetector->fields._PrevTouchInfo_k__BackingField )
    return this->fields.startMTgt;
  StartTouchInfo_k__BackingField = touchDetector->fields._StartTouchInfo_k__BackingField;
  if ( !StartTouchInfo_k__BackingField
    || (TouchInterval = TouchDetectorBase_TouchInfo__get_TouchInterval(StartTouchInfo_k__BackingField, 0LL),
        (v6 = this->fields.touchDetector) == 0LL)
    || (CurrentTouchInfo_k__BackingField = v6->fields._CurrentTouchInfo_k__BackingField) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  v8 = TouchInterval;
  v10 = TouchDetectorBase_TouchInfo__get_TouchInterval(CurrentTouchInfo_k__BackingField, 0LL);
  startMTgt = this->fields.startMTgt;
  v12 = v10;
  if ( !byte_40F6537 )
  {
    sub_B16FFC(&MapZoom_TypeInfo, v9);
    byte_40F6537 = 1;
  }
  v13 = MapZoom_TypeInfo;
  if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
    v13 = MapZoom_TypeInfo;
  }
  return UnityEngine_Mathf__Clamp(
           (float)(v8 * startMTgt) / v12,
           v13->static_fields->ZOOM_MIN - this->fields.mZoomMargin,
           this->fields.mZoomMargin + this->fields.mZoomMax,
           0LL);
}


float __fastcall MapZoom__GetZoomRate(MapZoom_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *mCamera; // x0
  float orthographicSize; // s8
  MapZoom_c *v5; // x0

  if ( (byte_40FB619 & 1) == 0 )
  {
    sub_B16FFC(&MapZoom_TypeInfo, method);
    byte_40FB619 = 1;
  }
  mCamera = this->fields.mCamera;
  if ( !mCamera )
    sub_B170D4();
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
  v5 = MapZoom_TypeInfo;
  if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
    v5 = MapZoom_TypeInfo;
  }
  return (float)(UnityEngine_Mathf__Clamp(orthographicSize, v5->static_fields->ZOOM_MIN, this->fields.mZoomMax, 0LL)
               - MapZoom_TypeInfo->static_fields->ZOOM_MIN)
       / this->fields.mZoomRange;
}


float __fastcall MapZoom__GetZoomSize(MapZoom_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *mCamera; // x0

  mCamera = this->fields.mCamera;
  if ( !mCamera )
    sub_B170D4();
  return UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
}


void __fastcall MapZoom__Init(
        MapZoom_o *this,
        MapCamera_o *mc,
        MapTouchDetector_o *touchDetector,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *mCamera; // x23
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UnityEngine_Camera_o *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  struct MapTouchDetector_o *v41; // x20
  BattleServantConfConponent_o *p_OnChangeTouchCount_k__BackingField; // x20
  System_Delegate_o *OnChangeTouchCount_k__BackingField; // t1
  System_Action_int__int__o *v44; // x22
  System_Int32_array **v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x3
  MapZoom_c *v53; // x0
  MapCamera_o *v54; // x0
  bool v55; // w1
  const MethodInfo *v56; // x2

  if ( (byte_40FB615 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__int___ctor__, mc);
    sub_B16FFC(&System_Action_int__int__TypeInfo, v7);
    sub_B16FFC(&Method_MapZoom__Init_b__44_0__, v8);
    sub_B16FFC(&MapZoom_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40FB615 = 1;
  }
  mCamera = (UnityEngine_Object_o *)this->fields.mCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mCamera, 0LL, 0LL) )
  {
    this->fields.mMapCamera = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.mMapCamera, 0LL, v12, v13, v14, v15, v16, v17);
    this->fields.touchDetector = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.touchDetector, 0LL, v18, v19, v20, v21, v22, v23);
  }
  this->fields.mMapCamera = mc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mMapCamera,
    (System_Int32_array **)mc,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !mc
    || (v30 = mc->fields.mCamera,
        this->fields.mCamera = v30,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.mCamera,
          (System_Int32_array **)v30,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29),
        this->fields.touchDetector = touchDetector,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.touchDetector,
          (System_Int32_array **)touchDetector,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36),
        (v41 = this->fields.touchDetector) == 0LL) )
  {
    sub_B170D4();
  }
  OnChangeTouchCount_k__BackingField = (System_Delegate_o *)v41->fields._OnChangeTouchCount_k__BackingField;
  p_OnChangeTouchCount_k__BackingField = (BattleServantConfConponent_o *)&v41->fields._OnChangeTouchCount_k__BackingField;
  v44 = (System_Action_int__int__o *)sub_B170CC(System_Action_int__int__TypeInfo, v37, v38, v39, v40);
  System_Action_int__int____ctor(
    v44,
    (Il2CppObject *)this,
    Method_MapZoom__Init_b__44_0__,
    (const MethodInfo_24C3654 *)Method_System_Action_int__int___ctor__);
  v45 = (System_Int32_array **)System_Delegate__Combine(
                                 OnChangeTouchCount_k__BackingField,
                                 (System_Delegate_o *)v44,
                                 0LL);
  if ( v45 && *v45 != (System_Int32_array *)System_Action_int__int__TypeInfo )
  {
    v54 = (MapCamera_o *)sub_B173C8(v45);
    MapCamera__SetEnable(v54, v55, v56);
  }
  else
  {
    p_OnChangeTouchCount_k__BackingField->klass = (BattleServantConfConponent_c *)v45;
    sub_B16F98(p_OnChangeTouchCount_k__BackingField, v45, v46, v47, v48, v49, v50, v51);
    v53 = MapZoom_TypeInfo;
    if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v53 = MapZoom_TypeInfo;
    }
    MapZoom__SetZoomSize(this, v53->static_fields->ZOOM_MIN, 1, 0, v52);
  }
}


bool __fastcall MapZoom__IsStop(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields.mSpd == 0.0;
}


void __fastcall MapZoom__Limit(MapZoom_o *this, float spd_rate, const MethodInfo *method)
{
  float mTgt; // s9
  MapZoom_c *v6; // x0
  float ZOOM_MIN; // s0
  float v8; // s0
  float mZoomMax; // s1

  if ( (byte_40FB617 & 1) == 0 )
  {
    sub_B16FFC(&MapZoom_TypeInfo, method);
    byte_40FB617 = 1;
  }
  if ( !this->fields._IsZoomMaxFit_k__BackingField )
  {
    mTgt = this->fields.mTgt;
    v6 = MapZoom_TypeInfo;
    if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v6 = MapZoom_TypeInfo;
    }
    ZOOM_MIN = v6->static_fields->ZOOM_MIN;
    if ( mTgt >= ZOOM_MIN )
    {
      mZoomMax = this->fields.mZoomMax;
      v8 = 0.0;
      if ( mTgt > mZoomMax )
        v8 = mZoomMax - mTgt;
    }
    else
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        ZOOM_MIN = MapZoom_TypeInfo->static_fields->ZOOM_MIN;
      }
      v8 = ZOOM_MIN - mTgt;
    }
    this->fields.mTgt = mTgt + (float)(v8 * spd_rate);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapZoom__MouseScrollWheel(MapZoom_o *this, const MethodInfo *method)
{
  float v3; // s0
  float v4; // s1
  float v5; // s9
  float v6; // s8
  int32_t width; // w0
  float Axis; // s0

  if ( (byte_40FB61A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9171/*"Mouse ScrollWheel"*/, method);
    byte_40FB61A = 1;
  }
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Input__get_mousePosition(0LL);
  if ( v3 >= 0.0 )
  {
    v5 = v3;
    v6 = v4;
    width = UnityEngine_Screen__get_width(0LL);
    if ( v6 >= 0.0 && v5 <= (float)width && v6 <= (float)UnityEngine_Screen__get_height(0LL) )
    {
      Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9171/*"Mouse ScrollWheel"*/, 0LL);
      if ( Axis <= 0.0 )
      {
        if ( Axis < 0.0 )
          Axis = 0.25;
      }
      else
      {
        Axis = -0.25;
        this->fields._IsZoomMaxFit_k__BackingField = 0;
      }
      this->fields.mTgt = Axis + this->fields.mTgt;
    }
  }
}


void __fastcall MapZoom__Process(MapZoom_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *mCamera; // x0
  float orthographicSize; // s8
  float mAutoZmDuration; // s0
  float mAutoZmTime; // s8
  float deltaTime; // s0
  float v8; // s2
  const MethodInfo *v9; // x3
  float mAutoZmEdVal; // s8
  TouchDetectorBase_o *touchDetector; // x0
  int32_t CurrentTouchCount; // w0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  float v15; // s0
  float mTgt; // s10
  struct MapCamera_o *mMapCamera; // x8
  float v18; // s9
  struct MapTouchDetector_o *v19; // x9
  TouchDetectorBase_TouchInfo_o *CurrentTouchInfo_k__BackingField; // x0
  float32x2_t *mScrl; // x20
  float32x2_t v22; // d0
  UnityEngine_Vector2_o TouchCenter; // kr00_8
  System_Action_o *mAutoZmEndAct; // x0
  float v25; // s0
  const MethodInfo *v26; // x3
  float mSpd; // s8
  float v28; // s0

  if ( (byte_40FB616 & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, method);
    byte_40FB616 = 1;
  }
  mCamera = this->fields.mCamera;
  if ( !mCamera )
    goto LABEL_30;
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
  mAutoZmDuration = this->fields.mAutoZmDuration;
  this->fields.mIsAutoZoom = 0;
  if ( mAutoZmDuration > 0.0 )
  {
    mAutoZmTime = this->fields.mAutoZmTime;
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    v8 = this->fields.mAutoZmDuration;
    this->fields.mAutoZmTime = mAutoZmTime + deltaTime;
    if ( (float)(mAutoZmTime + deltaTime) >= v8 )
    {
      mAutoZmEndAct = this->fields.mAutoZmEndAct;
      mAutoZmEdVal = this->fields.mAutoZmEdVal;
      this->fields.mAutoZmDuration = 0.0;
      ActionExtensions__Call(mAutoZmEndAct, 0LL);
    }
    else
    {
      mAutoZmEdVal = Easing__Func_33157772(
                       this->fields.mAutoZmStVal,
                       this->fields.mAutoZmEdVal,
                       (float)(mAutoZmTime + deltaTime) / v8,
                       this->fields.mAutoZmEaseType,
                       0LL);
    }
    MapZoom__SetZoomSize(this, mAutoZmEdVal, 0, 0, v9);
    this->fields.mIsAutoZoom = 1;
    return;
  }
  touchDetector = (TouchDetectorBase_o *)this->fields.touchDetector;
  if ( !touchDetector )
    goto LABEL_30;
  CurrentTouchCount = TouchDetectorBase__get_CurrentTouchCount(touchDetector, 0LL);
  if ( CurrentTouchCount <= 1 )
  {
    MapZoom__Limit(this, 0.45, v13);
    if ( this->fields._IsZoomMaxFitPosFix_k__BackingField && !this->fields._IsZoomMaxFit_k__BackingField )
      this->fields._IsZoomMaxFitPosFix_k__BackingField = 0;
    this->fields._UserTotalZoomAmount_k__BackingField = 0.0;
  }
  else if ( CurrentTouchCount == 2 )
  {
    v15 = MapZoom__CalcZoomByPinch(this, v13);
    mTgt = this->fields.mTgt;
    mMapCamera = this->fields.mMapCamera;
    v18 = v15;
    this->fields._UserTotalZoomAmount_k__BackingField = this->fields._UserTotalZoomAmount_k__BackingField
                                                      + vabds_f32(v15, mTgt);
    if ( !mMapCamera )
      goto LABEL_30;
    v19 = this->fields.touchDetector;
    if ( !v19 )
      goto LABEL_30;
    CurrentTouchInfo_k__BackingField = v19->fields._CurrentTouchInfo_k__BackingField;
    if ( !CurrentTouchInfo_k__BackingField )
      goto LABEL_30;
    mScrl = (float32x2_t *)mMapCamera->fields.mScrl;
    TouchCenter = TouchDetectorBase_TouchInfo__get_TouchCenter(CurrentTouchInfo_k__BackingField, 0LL);
    v22.n64_u32[0] = LODWORD(TouchCenter.fields.x);
    if ( !mScrl )
      goto LABEL_30;
    v22.n64_u32[1] = LODWORD(TouchCenter.fields.y);
    mScrl[3].n64_u64[0] = vsub_f32(mScrl[3], vmul_n_f32(v22, v18 - mTgt)).n64_u64[0];
    if ( (float)(v18 - mTgt) < 0.0 )
      *(_WORD *)&this->fields._IsZoomMaxFit_k__BackingField = 0;
    this->fields.mTgt = v18;
  }
  v25 = (float)(this->fields.mTgt - orthographicSize) * 0.75;
  this->fields.mSpd = v25;
  MapZoom__SetZoomSize(this, orthographicSize + v25, 0, 0, v14);
  mSpd = this->fields.mSpd;
  if ( mSpd != 0.0 )
  {
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( fabsf(mSpd) < 0.01 )
    {
      v28 = this->fields.mTgt;
      this->fields.mSpd = 0.0;
      MapZoom__SetZoomSize(this, v28, 0, 0, v26);
    }
  }
  if ( !this->fields.touchDetector )
LABEL_30:
    sub_B170D4();
}


void __fastcall MapZoom__ResetZoomMaxFlag(MapZoom_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields._IsZoomMaxFit_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapZoom__SetZoomRate(MapZoom_o *this, float rate, bool xBaseUse, const MethodInfo *method)
{
  MapZoom_c *v7; // x0
  float *p_ZOOM_BASE_MAX_X; // x8
  float mZoomMax; // s0
  float ZOOM_MIN; // s1

  if ( (byte_40FB614 & 1) == 0 )
  {
    sub_B16FFC(&MapZoom_TypeInfo, xBaseUse);
    byte_40FB614 = 1;
  }
  v7 = MapZoom_TypeInfo;
  if ( xBaseUse )
  {
    if ( (WORD1(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v7 = MapZoom_TypeInfo;
    }
    p_ZOOM_BASE_MAX_X = &v7->static_fields->ZOOM_BASE_MAX_X;
    if ( !this )
      goto LABEL_17;
  }
  else
  {
    if ( (WORD1(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v7 = MapZoom_TypeInfo;
    }
    p_ZOOM_BASE_MAX_X = &v7->static_fields->ZOOM_BASE_MAX_Y;
    if ( !this )
LABEL_17:
      sub_B170D4();
  }
  mZoomMax = *p_ZOOM_BASE_MAX_X * rate;
  this->fields.mZoomMax = mZoomMax;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = MapZoom_TypeInfo;
    mZoomMax = this->fields.mZoomMax;
  }
  this->fields.mZoomMargin = v7->static_fields->ZOOM_MARGIN * rate;
  ZOOM_MIN = v7->static_fields->ZOOM_MIN;
  this->fields._IsZoomMaxFit_k__BackingField = 0;
  this->fields.mZoomRange = mZoomMax - ZOOM_MIN;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapZoom__SetZoomSize(
        MapZoom_o *this,
        float size,
        bool is_tgt_update,
        bool ignoreMaxFlag,
        const MethodInfo *method)
{
  MapZoom_c *v9; // x0
  float mZoomMargin; // s1
  float v11; // s0
  float v12; // s1
  UnityEngine_Camera_o *mCamera; // x0
  UnityEngine_Camera_o *v14; // x0

  if ( (byte_40FB618 & 1) == 0 )
  {
    sub_B16FFC(&MapZoom_TypeInfo, is_tgt_update);
    byte_40FB618 = 1;
  }
  v9 = MapZoom_TypeInfo;
  if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
    v9 = MapZoom_TypeInfo;
  }
  mZoomMargin = this->fields.mZoomMargin;
  v11 = v9->static_fields->ZOOM_MIN - mZoomMargin;
  if ( v11 <= size )
  {
    v12 = mZoomMargin + this->fields.mZoomMax;
    v11 = size;
    if ( v12 <= size )
    {
      this->fields.mTgt = v12;
      if ( !ignoreMaxFlag )
        *(_WORD *)&this->fields._IsZoomMaxFit_k__BackingField = 257;
      v11 = v12;
    }
  }
  mCamera = this->fields.mCamera;
  if ( !mCamera )
    goto LABEL_16;
  UnityEngine_Camera__set_orthographicSize(mCamera, v11, 0LL);
  if ( !is_tgt_update )
    return;
  v14 = this->fields.mCamera;
  if ( !v14 )
LABEL_16:
    sub_B170D4();
  this->fields.mTgt = UnityEngine_Camera__get_orthographicSize(v14, 0LL);
}


void __fastcall MapZoom__StartAutoZoom(
        MapZoom_o *this,
        float zoom,
        float sec,
        int32_t easeType,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *mCamera; // x0
  float orthographicSize; // s0
  struct System_Action_o **p_mAutoZmEndAct; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  mCamera = this->fields.mCamera;
  this->fields.mTgt = zoom;
  this->fields.mSpd = 0.0;
  this->fields.mAutoZmTime = 0.0;
  this->fields.mAutoZmDuration = sec;
  if ( !mCamera )
    sub_B170D4();
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
  this->fields.mAutoZmEndAct = endAct;
  p_mAutoZmEndAct = &this->fields.mAutoZmEndAct;
  *((float *)p_mAutoZmEndAct - 6) = orthographicSize;
  *((float *)p_mAutoZmEndAct - 5) = zoom;
  *((_DWORD *)p_mAutoZmEndAct - 2) = easeType;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_mAutoZmEndAct,
    (System_Int32_array **)endAct,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  *((_BYTE *)p_mAutoZmEndAct + 8) = 1;
  *((_BYTE *)p_mAutoZmEndAct - 28) = 0;
}


void __fastcall MapZoom__Stop(MapZoom_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mSpd = 0.0;
  if ( is_force )
    MapZoom__SetZoomSize(this, this->fields.mTgt, 0, 0, v3);
}


void __fastcall MapZoom__UnInit(MapZoom_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  this->fields.mMapCamera = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mMapCamera, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.touchDetector = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.touchDetector, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall MapZoom___Init_b__44_0(
        MapZoom_o *this,
        int32_t oldTouchCount,
        int32_t newTouchCount,
        const MethodInfo *method)
{
  this->fields.startMTgt = this->fields.mTgt;
}


bool __fastcall MapZoom__get_IsAutoZoom(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields.mIsAutoZoom;
}


bool __fastcall MapZoom__get_IsZoomMaxFit(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields._IsZoomMaxFit_k__BackingField;
}


bool __fastcall MapZoom__get_IsZoomMaxFitPosFix(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields._IsZoomMaxFitPosFix_k__BackingField;
}


float __fastcall MapZoom__get_UserTotalZoomAmount(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields._UserTotalZoomAmount_k__BackingField;
}


float __fastcall MapZoom__get_ZoomMargin(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields.mZoomMargin;
}


float __fastcall MapZoom__get_ZoomMax(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields.mZoomMax;
}


float __fastcall MapZoom__get_ZoomMin(MapZoom_o *this, const MethodInfo *method)
{
  MapZoom_c *v2; // x0

  if ( (byte_40FB613 & 1) == 0 )
  {
    sub_B16FFC(&MapZoom_TypeInfo, method);
    byte_40FB613 = 1;
  }
  v2 = MapZoom_TypeInfo;
  if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
    v2 = MapZoom_TypeInfo;
  }
  return v2->static_fields->ZOOM_MIN;
}


void __fastcall MapZoom__set_IsZoomMaxFit(MapZoom_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsZoomMaxFit_k__BackingField = value;
}


void __fastcall MapZoom__set_IsZoomMaxFitPosFix(MapZoom_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsZoomMaxFitPosFix_k__BackingField = value;
}


void __fastcall MapZoom__set_UserTotalZoomAmount(MapZoom_o *this, float value, const MethodInfo *method)
{
  this->fields._UserTotalZoomAmount_k__BackingField = value;
}