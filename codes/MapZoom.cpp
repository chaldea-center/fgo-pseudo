void __fastcall MapZoom___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MapZoom_c *v2; // x8

  if ( (byte_41858EA & 1) == 0 )
  {
    sub_B2C35C(&MapZoom_TypeInfo, v1);
    byte_41858EA = 1;
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
  MapZoom_o *v3; // x19
  float TouchInterval; // s0
  struct MapTouchDetector_o *v5; // x8
  float v6; // s8
  __int64 v7; // x1
  float v8; // s0
  float startMTgt; // s10
  float v10; // s9
  MapZoom_c *v11; // x0

  touchDetector = this->fields.touchDetector;
  if ( !touchDetector )
    goto LABEL_13;
  v3 = this;
  if ( !touchDetector->fields._PrevTouchInfo_k__BackingField )
    return this->fields.startMTgt;
  this = (MapZoom_o *)touchDetector->fields._StartTouchInfo_k__BackingField;
  if ( !this
    || (TouchInterval = TouchDetectorBase_TouchInfo__get_TouchInterval((TouchDetectorBase_TouchInfo_o *)this, 0LL),
        (v5 = v3->fields.touchDetector) == 0LL)
    || (this = (MapZoom_o *)v5->fields._CurrentTouchInfo_k__BackingField) == 0LL )
  {
LABEL_13:
    sub_B2C434(this, method);
  }
  v6 = TouchInterval;
  v8 = TouchDetectorBase_TouchInfo__get_TouchInterval((TouchDetectorBase_TouchInfo_o *)this, 0LL);
  startMTgt = v3->fields.startMTgt;
  v10 = v8;
  if ( !byte_418418A )
  {
    sub_B2C35C(&MapZoom_TypeInfo, v7);
    byte_418418A = 1;
  }
  v11 = MapZoom_TypeInfo;
  if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
    v11 = MapZoom_TypeInfo;
  }
  return UnityEngine_Mathf__Clamp(
           (float)(v6 * startMTgt) / v10,
           v11->static_fields->ZOOM_MIN - v3->fields.mZoomMargin,
           v3->fields.mZoomMargin + v3->fields.mZoomMax,
           0LL);
}


float __fastcall MapZoom__GetZoomRate(MapZoom_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *mCamera; // x0
  float orthographicSize; // s8
  MapZoom_c *v5; // x0

  if ( (byte_41858E8 & 1) == 0 )
  {
    sub_B2C35C(&MapZoom_TypeInfo, method);
    byte_41858E8 = 1;
  }
  mCamera = this->fields.mCamera;
  if ( !mCamera )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
  __int64 v12; // x0
  __int64 v13; // x1
  struct UnityEngine_Camera_o *v14; // x1
  struct MapTouchDetector_o *v15; // x20
  _QWORD *p_OnChangeTouchCount_k__BackingField; // x20
  System_Delegate_o *OnChangeTouchCount_k__BackingField; // t1
  System_Action_int__int__o *v18; // x22
  System_Delegate_o *v19; // x0
  const MethodInfo *v20; // x3
  MapZoom_c *v21; // x0
  MapZoom_o *v22; // x0
  const MethodInfo *v23; // x1

  if ( (byte_41858E4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int__int___ctor__, mc);
    sub_B2C35C(&System_Action_int__int__TypeInfo, v7);
    sub_B2C35C(&Method_MapZoom__Init_b__44_0__, v8);
    sub_B2C35C(&MapZoom_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_41858E4 = 1;
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
    sub_B2C2F8(&this->fields.mMapCamera, 0LL);
    this->fields.touchDetector = 0LL;
    sub_B2C2F8(&this->fields.touchDetector, 0LL);
  }
  this->fields.mMapCamera = mc;
  sub_B2C2F8(&this->fields.mMapCamera, mc);
  if ( !mc
    || (v14 = mc->fields.mCamera,
        this->fields.mCamera = v14,
        sub_B2C2F8(&this->fields.mCamera, v14),
        this->fields.touchDetector = touchDetector,
        sub_B2C2F8(&this->fields.touchDetector, touchDetector),
        (v15 = this->fields.touchDetector) == 0LL) )
  {
    sub_B2C434(v12, v13);
  }
  OnChangeTouchCount_k__BackingField = (System_Delegate_o *)v15->fields._OnChangeTouchCount_k__BackingField;
  p_OnChangeTouchCount_k__BackingField = &v15->fields._OnChangeTouchCount_k__BackingField;
  v18 = (System_Action_int__int__o *)sub_B2C42C(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(
    v18,
    (Il2CppObject *)this,
    Method_MapZoom__Init_b__44_0__,
    (const MethodInfo_24C8480 *)Method_System_Action_int__int___ctor__);
  v19 = System_Delegate__Combine(OnChangeTouchCount_k__BackingField, (System_Delegate_o *)v18, 0LL);
  if ( v19 && (System_Action_int__int__c *)v19->klass != System_Action_int__int__TypeInfo )
  {
    v22 = (MapZoom_o *)sub_B2C728(v19);
    MapZoom__UnInit(v22, v23);
  }
  else
  {
    *p_OnChangeTouchCount_k__BackingField = v19;
    sub_B2C2F8(p_OnChangeTouchCount_k__BackingField, v19);
    v21 = MapZoom_TypeInfo;
    if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v21 = MapZoom_TypeInfo;
    }
    MapZoom__SetZoomSize(this, v21->static_fields->ZOOM_MIN, 1, 0, v20);
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

  if ( (byte_41858E6 & 1) == 0 )
  {
    sub_B2C35C(&MapZoom_TypeInfo, method);
    byte_41858E6 = 1;
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

  if ( (byte_41858E9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9201/*"Mouse ScrollWheel"*/, method);
    byte_41858E9 = 1;
  }
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Input__get_mousePosition(0LL);
  if ( v3 >= 0.0 )
  {
    v5 = v3;
    v6 = v4;
    width = UnityEngine_Screen__get_width(0LL);
    if ( v6 >= 0.0 && v5 <= (float)width && v6 <= (float)UnityEngine_Screen__get_height(0LL) )
    {
      Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9201/*"Mouse ScrollWheel"*/, 0LL);
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
  int32_t CurrentTouchCount; // w0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  float v14; // s0
  float mTgt; // s10
  struct MapCamera_o *mMapCamera; // x8
  float v17; // s9
  struct MapTouchDetector_o *touchDetector; // x9
  float32x2_t *mScrl; // x20
  float32x2_t v20; // d0
  UnityEngine_Vector2_o TouchCenter; // kr00_8
  System_Action_o *mAutoZmEndAct; // x0
  float v23; // s0
  const MethodInfo *v24; // x3
  float mSpd; // s8
  float v26; // s0

  if ( (byte_41858E5 & 1) == 0 )
  {
    sub_B2C35C(&System_Math_TypeInfo, method);
    byte_41858E5 = 1;
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
      mAutoZmEdVal = Easing__Func_33139736(
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
  mCamera = (UnityEngine_Camera_o *)this->fields.touchDetector;
  if ( !mCamera )
    goto LABEL_30;
  CurrentTouchCount = TouchDetectorBase__get_CurrentTouchCount((TouchDetectorBase_o *)mCamera, 0LL);
  if ( CurrentTouchCount <= 1 )
  {
    MapZoom__Limit(this, 0.45, v12);
    if ( this->fields._IsZoomMaxFitPosFix_k__BackingField && !this->fields._IsZoomMaxFit_k__BackingField )
      this->fields._IsZoomMaxFitPosFix_k__BackingField = 0;
    this->fields._UserTotalZoomAmount_k__BackingField = 0.0;
  }
  else if ( CurrentTouchCount == 2 )
  {
    v14 = MapZoom__CalcZoomByPinch(this, v12);
    mTgt = this->fields.mTgt;
    mMapCamera = this->fields.mMapCamera;
    v17 = v14;
    this->fields._UserTotalZoomAmount_k__BackingField = this->fields._UserTotalZoomAmount_k__BackingField
                                                      + vabds_f32(v14, mTgt);
    if ( !mMapCamera )
      goto LABEL_30;
    touchDetector = this->fields.touchDetector;
    if ( !touchDetector )
      goto LABEL_30;
    mCamera = (UnityEngine_Camera_o *)touchDetector->fields._CurrentTouchInfo_k__BackingField;
    if ( !mCamera )
      goto LABEL_30;
    mScrl = (float32x2_t *)mMapCamera->fields.mScrl;
    TouchCenter = TouchDetectorBase_TouchInfo__get_TouchCenter((TouchDetectorBase_TouchInfo_o *)mCamera, 0LL);
    v20.n64_u32[0] = LODWORD(TouchCenter.fields.x);
    if ( !mScrl )
      goto LABEL_30;
    v20.n64_u32[1] = LODWORD(TouchCenter.fields.y);
    mScrl[3].n64_u64[0] = vsub_f32(mScrl[3], vmul_n_f32(v20, v17 - mTgt)).n64_u64[0];
    if ( (float)(v17 - mTgt) < 0.0 )
      *(_WORD *)&this->fields._IsZoomMaxFit_k__BackingField = 0;
    this->fields.mTgt = v17;
  }
  v23 = (float)(this->fields.mTgt - orthographicSize) * 0.75;
  this->fields.mSpd = v23;
  MapZoom__SetZoomSize(this, orthographicSize + v23, 0, 0, v13);
  mSpd = this->fields.mSpd;
  if ( mSpd != 0.0 )
  {
    mCamera = (UnityEngine_Camera_o *)System_Math_TypeInfo;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( fabsf(mSpd) < 0.01 )
    {
      v26 = this->fields.mTgt;
      this->fields.mSpd = 0.0;
      MapZoom__SetZoomSize(this, v26, 0, 0, v24);
    }
  }
  if ( !this->fields.touchDetector )
LABEL_30:
    sub_B2C434(mCamera, method);
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

  if ( (byte_41858E3 & 1) == 0 )
  {
    sub_B2C35C(&MapZoom_TypeInfo, xBaseUse);
    byte_41858E3 = 1;
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
      sub_B2C434(v7, xBaseUse);
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

  if ( (byte_41858E7 & 1) == 0 )
  {
    sub_B2C35C(&MapZoom_TypeInfo, is_tgt_update);
    byte_41858E7 = 1;
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
  mCamera = this->fields.mCamera;
  if ( !mCamera )
LABEL_16:
    sub_B2C434(mCamera, is_tgt_update);
  this->fields.mTgt = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
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

  mCamera = this->fields.mCamera;
  this->fields.mTgt = zoom;
  this->fields.mSpd = 0.0;
  this->fields.mAutoZmTime = 0.0;
  this->fields.mAutoZmDuration = sec;
  if ( !mCamera )
    sub_B2C434(0LL, easeType);
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
  this->fields.mAutoZmEndAct = endAct;
  p_mAutoZmEndAct = &this->fields.mAutoZmEndAct;
  *((float *)p_mAutoZmEndAct - 6) = orthographicSize;
  *((float *)p_mAutoZmEndAct - 5) = zoom;
  *((_DWORD *)p_mAutoZmEndAct - 2) = easeType;
  sub_B2C2F8(p_mAutoZmEndAct, endAct);
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
  this->fields.mMapCamera = 0LL;
  sub_B2C2F8(&this->fields.mMapCamera, 0LL);
  this->fields.touchDetector = 0LL;
  sub_B2C2F8(&this->fields.touchDetector, 0LL);
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

  if ( (byte_41858E2 & 1) == 0 )
  {
    sub_B2C35C(&MapZoom_TypeInfo, method);
    byte_41858E2 = 1;
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