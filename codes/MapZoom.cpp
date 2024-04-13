void __fastcall MapZoom___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MapZoom_c *v4; // x8

  if ( (byte_42EBB4C & 1) == 0 )
  {
    sub_B5D5C4(&MapZoom_TypeInfo, v1, v2, v3);
    byte_42EBB4C = 1;
  }
  MapZoom_TypeInfo->static_fields->ZOOM_DEFAULT = 1.0;
  MapZoom_TypeInfo->static_fields->ZOOM_MIN = 0.45;
  v4 = MapZoom_TypeInfo;
  MapZoom_TypeInfo->static_fields->ZOOM_BASE_MAX_X = 1.675;
  v4->static_fields->ZOOM_BASE_MAX_Y = 1.9528;
  v4->static_fields->ZOOM_MARGIN = 0.2;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  float v10; // s0
  float startMTgt; // s10
  float v12; // s9
  MapZoom_c *v13; // x0

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
    sub_B5D69C(this, method);
  }
  v6 = TouchInterval;
  v10 = TouchDetectorBase_TouchInfo__get_TouchInterval((TouchDetectorBase_TouchInfo_o *)this, 0LL);
  startMTgt = v3->fields.startMTgt;
  v12 = v10;
  if ( !byte_42E536D )
  {
    sub_B5D5C4(&MapZoom_TypeInfo, v7, v8, v9);
    byte_42E536D = 1;
  }
  v13 = MapZoom_TypeInfo;
  if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
    v13 = MapZoom_TypeInfo;
  }
  return UnityEngine_Mathf__Clamp(
           (float)(v6 * startMTgt) / v12,
           v13->static_fields->ZOOM_MIN - v3->fields.mZoomMargin,
           v3->fields.mZoomMargin + v3->fields.mZoomMax,
           0LL);
}


float __fastcall MapZoom__GetZoomRate(MapZoom_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Camera_o *mCamera; // x0
  float orthographicSize; // s8
  MapZoom_c *v7; // x0

  if ( (byte_42EBB4A & 1) == 0 )
  {
    sub_B5D5C4(&MapZoom_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB4A = 1;
  }
  mCamera = this->fields.mCamera;
  if ( !mCamera )
    sub_B5D69C(0LL, method);
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
  v7 = MapZoom_TypeInfo;
  if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
    v7 = MapZoom_TypeInfo;
  }
  return (float)(UnityEngine_Mathf__Clamp(orthographicSize, v7->static_fields->ZOOM_MIN, this->fields.mZoomMax, 0LL)
               - MapZoom_TypeInfo->static_fields->ZOOM_MIN)
       / this->fields.mZoomRange;
}


float __fastcall MapZoom__GetZoomSize(MapZoom_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *mCamera; // x0

  mCamera = this->fields.mCamera;
  if ( !mCamera )
    sub_B5D69C(0LL, method);
  return UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
}


void __fastcall MapZoom__Init(
        MapZoom_o *this,
        MapCamera_o *mc,
        MapTouchDetector_o *touchDetector,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_Object_o *mCamera; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct UnityEngine_Camera_o *v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct MapTouchDetector_o *v47; // x20
  BattleServantConfConponent_o *p_OnChangeTouchCount_k__BackingField; // x20
  System_Delegate_o *OnChangeTouchCount_k__BackingField; // t1
  System_Action_int__int__o *v50; // x22
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  const MethodInfo *v58; // x3
  MapZoom_c *v59; // x0
  MapZoom_o *v60; // x0
  const MethodInfo *v61; // x1

  if ( (byte_42EBB46 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__int___ctor__, (_DWORD)mc, (_DWORD)touchDetector, method);
    sub_B5D5C4(&System_Action_int__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_MapZoom__Init_b__44_0__, v10, v11, v12);
    sub_B5D5C4(&MapZoom_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    byte_42EBB46 = 1;
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.mMapCamera, 0LL, v20, v21, v22, v23, v24, v25);
    this->fields.touchDetector = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.touchDetector, 0LL, v26, v27, v28, v29, v30, v31);
  }
  this->fields.mMapCamera = mc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mMapCamera,
    (System_Int32_array **)mc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !mc
    || (v40 = mc->fields.mCamera,
        this->fields.mCamera = v40,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.mCamera,
          (System_Int32_array **)v40,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39),
        this->fields.touchDetector = touchDetector,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.touchDetector,
          (System_Int32_array **)touchDetector,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46),
        (v47 = this->fields.touchDetector) == 0LL) )
  {
    sub_B5D69C(v32, v33);
  }
  OnChangeTouchCount_k__BackingField = (System_Delegate_o *)v47->fields._OnChangeTouchCount_k__BackingField;
  p_OnChangeTouchCount_k__BackingField = (BattleServantConfConponent_o *)&v47->fields._OnChangeTouchCount_k__BackingField;
  v50 = (System_Action_int__int__o *)sub_B5D694(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(
    v50,
    (Il2CppObject *)this,
    Method_MapZoom__Init_b__44_0__,
    (const MethodInfo_2597CC8 *)Method_System_Action_int__int___ctor__);
  v51 = (System_Int32_array **)System_Delegate__Combine(
                                 OnChangeTouchCount_k__BackingField,
                                 (System_Delegate_o *)v50,
                                 0LL);
  if ( v51 && *v51 != (System_Int32_array *)System_Action_int__int__TypeInfo )
  {
    sub_B5D990(v51);
    MapZoom__UnInit(v60, v61);
  }
  else
  {
    p_OnChangeTouchCount_k__BackingField->klass = (BattleServantConfConponent_c *)v51;
    sub_B5D560(p_OnChangeTouchCount_k__BackingField, v51, v52, v53, v54, v55, v56, v57);
    v59 = MapZoom_TypeInfo;
    if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v59 = MapZoom_TypeInfo;
    }
    MapZoom__SetZoomSize(this, v59->static_fields->ZOOM_MIN, 1, 0, v58);
  }
}


bool __fastcall MapZoom__IsStop(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields.mSpd == 0.0;
}


void __fastcall MapZoom__Limit(MapZoom_o *this, float spd_rate, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  float mTgt; // s9
  MapZoom_c *v8; // x0
  float ZOOM_MIN; // s0
  float v10; // s0
  float mZoomMax; // s1

  if ( (byte_42EBB48 & 1) == 0 )
  {
    sub_B5D5C4(&MapZoom_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EBB48 = 1;
  }
  if ( !this->fields._IsZoomMaxFit_k__BackingField )
  {
    mTgt = this->fields.mTgt;
    v8 = MapZoom_TypeInfo;
    if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v8 = MapZoom_TypeInfo;
    }
    ZOOM_MIN = v8->static_fields->ZOOM_MIN;
    if ( mTgt >= ZOOM_MIN )
    {
      mZoomMax = this->fields.mZoomMax;
      v10 = 0.0;
      if ( mTgt > mZoomMax )
        v10 = mZoomMax - mTgt;
    }
    else
    {
      if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        ZOOM_MIN = MapZoom_TypeInfo->static_fields->ZOOM_MIN;
      }
      v10 = ZOOM_MIN - mTgt;
    }
    this->fields.mTgt = mTgt + (float)(v10 * spd_rate);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapZoom__MouseScrollWheel(MapZoom_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float v5; // s0
  float v6; // s1
  float v7; // s9
  float v8; // s8
  int32_t width; // w0
  float Axis; // s0

  if ( (byte_42EBB4B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9295/*"Mouse ScrollWheel"*/, (_DWORD)method, v2, v3);
    byte_42EBB4B = 1;
  }
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Input__get_mousePosition(0LL);
  if ( v5 >= 0.0 )
  {
    v7 = v5;
    v8 = v6;
    width = UnityEngine_Screen__get_width(0LL);
    if ( v8 >= 0.0 && v7 <= (float)width && v8 <= (float)UnityEngine_Screen__get_height(0LL) )
    {
      Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9295/*"Mouse ScrollWheel"*/, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Camera_o *mCamera; // x0
  float orthographicSize; // s8
  float mAutoZmDuration; // s0
  float mAutoZmTime; // s8
  float deltaTime; // s0
  float v10; // s2
  const MethodInfo *v11; // x3
  float mAutoZmEdVal; // s8
  int32_t CurrentTouchCount; // w0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  float v16; // s0
  float mTgt; // s10
  struct MapCamera_o *mMapCamera; // x8
  float v19; // s9
  struct MapTouchDetector_o *touchDetector; // x9
  float32x2_t *mScrl; // x20
  float32x2_t v22; // d0
  UnityEngine_Vector2_o TouchCenter; // kr00_8
  System_Action_o *mAutoZmEndAct; // x0
  float v25; // s0
  const MethodInfo *v26; // x3
  float mSpd; // s8
  float v28; // s0

  if ( (byte_42EBB47 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB47 = 1;
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
    v10 = this->fields.mAutoZmDuration;
    this->fields.mAutoZmTime = mAutoZmTime + deltaTime;
    if ( (float)(mAutoZmTime + deltaTime) >= v10 )
    {
      mAutoZmEndAct = this->fields.mAutoZmEndAct;
      mAutoZmEdVal = this->fields.mAutoZmEdVal;
      this->fields.mAutoZmDuration = 0.0;
      ActionExtensions__Call(mAutoZmEndAct, 0LL);
    }
    else
    {
      mAutoZmEdVal = Easing__Func_33951568(
                       this->fields.mAutoZmStVal,
                       this->fields.mAutoZmEdVal,
                       (float)(mAutoZmTime + deltaTime) / v10,
                       this->fields.mAutoZmEaseType,
                       0LL);
    }
    MapZoom__SetZoomSize(this, mAutoZmEdVal, 0, 0, v11);
    this->fields.mIsAutoZoom = 1;
    return;
  }
  mCamera = (UnityEngine_Camera_o *)this->fields.touchDetector;
  if ( !mCamera )
    goto LABEL_30;
  CurrentTouchCount = TouchDetectorBase__get_CurrentTouchCount((TouchDetectorBase_o *)mCamera, 0LL);
  if ( CurrentTouchCount <= 1 )
  {
    MapZoom__Limit(this, 0.45, v14);
    if ( this->fields._IsZoomMaxFitPosFix_k__BackingField && !this->fields._IsZoomMaxFit_k__BackingField )
      this->fields._IsZoomMaxFitPosFix_k__BackingField = 0;
    this->fields._UserTotalZoomAmount_k__BackingField = 0.0;
  }
  else if ( CurrentTouchCount == 2 )
  {
    v16 = MapZoom__CalcZoomByPinch(this, v14);
    mTgt = this->fields.mTgt;
    mMapCamera = this->fields.mMapCamera;
    v19 = v16;
    this->fields._UserTotalZoomAmount_k__BackingField = this->fields._UserTotalZoomAmount_k__BackingField
                                                      + vabds_f32(v16, mTgt);
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
    v22.n64_u32[0] = LODWORD(TouchCenter.fields.x);
    if ( !mScrl )
      goto LABEL_30;
    v22.n64_u32[1] = LODWORD(TouchCenter.fields.y);
    mScrl[3].n64_u64[0] = vsub_f32(mScrl[3], vmul_n_f32(v22, v19 - mTgt)).n64_u64[0];
    if ( (float)(v19 - mTgt) < 0.0 )
      *(_WORD *)&this->fields._IsZoomMaxFit_k__BackingField = 0;
    this->fields.mTgt = v19;
  }
  v25 = (float)(this->fields.mTgt - orthographicSize) * 0.75;
  this->fields.mSpd = v25;
  MapZoom__SetZoomSize(this, orthographicSize + v25, 0, 0, v15);
  mSpd = this->fields.mSpd;
  if ( mSpd != 0.0 )
  {
    mCamera = (UnityEngine_Camera_o *)System_Math_TypeInfo;
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
    sub_B5D69C(mCamera, method);
}


void __fastcall MapZoom__ResetZoomMaxFlag(MapZoom_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields._IsZoomMaxFit_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapZoom__SetZoomRate(MapZoom_o *this, float rate, bool xBaseUse, const MethodInfo *method)
{
  __int64 v4; // x3
  MapZoom_c *v8; // x0
  float *p_ZOOM_BASE_MAX_X; // x8
  float mZoomMax; // s0
  float ZOOM_MIN; // s1

  if ( (byte_42EBB45 & 1) == 0 )
  {
    sub_B5D5C4(&MapZoom_TypeInfo, xBaseUse, (_DWORD)method, v4);
    byte_42EBB45 = 1;
  }
  v8 = MapZoom_TypeInfo;
  if ( xBaseUse )
  {
    if ( (WORD1(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v8 = MapZoom_TypeInfo;
    }
    p_ZOOM_BASE_MAX_X = &v8->static_fields->ZOOM_BASE_MAX_X;
    if ( !this )
      goto LABEL_17;
  }
  else
  {
    if ( (WORD1(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v8 = MapZoom_TypeInfo;
    }
    p_ZOOM_BASE_MAX_X = &v8->static_fields->ZOOM_BASE_MAX_Y;
    if ( !this )
LABEL_17:
      sub_B5D69C(v8, xBaseUse);
  }
  mZoomMax = *p_ZOOM_BASE_MAX_X * rate;
  this->fields.mZoomMax = mZoomMax;
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = MapZoom_TypeInfo;
    mZoomMax = this->fields.mZoomMax;
  }
  this->fields.mZoomMargin = v8->static_fields->ZOOM_MARGIN * rate;
  ZOOM_MIN = v8->static_fields->ZOOM_MIN;
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

  if ( (byte_42EBB49 & 1) == 0 )
  {
    sub_B5D5C4(&MapZoom_TypeInfo, is_tgt_update, ignoreMaxFlag, method);
    byte_42EBB49 = 1;
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
    sub_B5D69C(mCamera, is_tgt_update);
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
    sub_B5D69C(0LL, easeType);
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
  this->fields.mAutoZmEndAct = endAct;
  p_mAutoZmEndAct = &this->fields.mAutoZmEndAct;
  *((float *)p_mAutoZmEndAct - 6) = orthographicSize;
  *((float *)p_mAutoZmEndAct - 5) = zoom;
  *((_DWORD *)p_mAutoZmEndAct - 2) = easeType;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mMapCamera, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.touchDetector = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.touchDetector, 0LL, v9, v10, v11, v12, v13, v14);
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
  int v2; // w2
  __int64 v3; // x3
  MapZoom_c *v4; // x0

  if ( (byte_42EBB44 & 1) == 0 )
  {
    sub_B5D5C4(&MapZoom_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB44 = 1;
  }
  v4 = MapZoom_TypeInfo;
  if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
    v4 = MapZoom_TypeInfo;
  }
  return v4->static_fields->ZOOM_MIN;
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