void MapZoom___cctor(const MethodInfo *method)
{
  struct MapZoom_StaticFields *static_fields; // x8

  if ( (byte_593500D & 1) == 0 )
  {
    sub_21FFC50(&MapZoom_TypeInfo);
    byte_593500D = 1;
  }
  static_fields = MapZoom_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->ZOOM_DEFAULT = xmmword_E94720;
  static_fields->ZOOM_MARGIN = 0.2;
}


void MapZoom___ctor(MapZoom_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float MapZoom__CalcZoomByPinch(MapZoom_o *this, const MethodInfo *method)
{
  struct MapTouchDetector_o *touchDetector; // x8
  MapZoom_o *v3; // x19
  float TouchInterval; // s0
  struct MapTouchDetector_o *v5; // x8
  float v6; // s8
  __int64 v7; // x1
  __int64 v8; // x2
  float v9; // s9
  float startMTgt; // s10
  MapZoom_c *v11; // x0
  float mZoomMargin; // s1
  float v13; // s2
  float v14; // s0
  float v15; // s1

  touchDetector = this->fields.touchDetector;
  if ( !touchDetector )
    goto LABEL_16;
  v3 = this;
  if ( !touchDetector->fields._PrevTouchInfo_k__BackingField )
    return this->fields.startMTgt;
  this = (MapZoom_o *)touchDetector->fields._StartTouchInfo_k__BackingField;
  if ( !this
    || (TouchInterval = TouchDetectorBase_TouchInfo__get_TouchInterval((TouchDetectorBase_TouchInfo_o *)this, 0),
        (v5 = v3->fields.touchDetector) == 0)
    || (this = (MapZoom_o *)v5->fields._CurrentTouchInfo_k__BackingField) == 0 )
  {
LABEL_16:
    sub_21FFECC(this, method);
  }
  v6 = TouchInterval;
  v9 = TouchDetectorBase_TouchInfo__get_TouchInterval((TouchDetectorBase_TouchInfo_o *)this, 0);
  startMTgt = v3->fields.startMTgt;
  if ( !byte_5935062 )
  {
    sub_21FFC50(&MapZoom_TypeInfo);
    byte_5935062 = 1;
  }
  v11 = MapZoom_TypeInfo;
  if ( !*(&MapZoom_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, v7, v8);
    v11 = MapZoom_TypeInfo;
  }
  mZoomMargin = v3->fields.mZoomMargin;
  v13 = mZoomMargin + v3->fields.mZoomMax;
  v14 = (float)(v6 * startMTgt) / v9;
  v15 = v11->static_fields->ZOOM_MIN - mZoomMargin;
  if ( v14 <= v13 )
    v13 = (float)(v6 * startMTgt) / v9;
  if ( v14 >= v15 )
    return v13;
  else
    return v15;
}


float MapZoom__GetZoomRate(MapZoom_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *mCamera; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  float orthographicSize; // s0
  MapZoom_c *v7; // x0
  float v8; // s8
  float mZoomMax; // s0
  float ZOOM_MIN; // s2

  if ( (byte_593500B & 1) == 0 )
  {
    sub_21FFC50(&MapZoom_TypeInfo);
    byte_593500B = 1;
  }
  mCamera = this->fields.mCamera;
  if ( !mCamera )
    sub_21FFECC(0, method);
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0);
  v7 = MapZoom_TypeInfo;
  v8 = orthographicSize;
  if ( !*(&MapZoom_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, v4, v5);
    v7 = MapZoom_TypeInfo;
  }
  mZoomMax = this->fields.mZoomMax;
  ZOOM_MIN = v7->static_fields->ZOOM_MIN;
  if ( v8 <= mZoomMax )
    mZoomMax = v8;
  if ( v8 < ZOOM_MIN )
    mZoomMax = v7->static_fields->ZOOM_MIN;
  return (float)(mZoomMax - ZOOM_MIN) / this->fields.mZoomRange;
}


float MapZoom__GetZoomSize(MapZoom_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *mCamera; // x0

  mCamera = this->fields.mCamera;
  if ( !mCamera )
    sub_21FFECC(0, method);
  return UnityEngine_Camera__get_orthographicSize(mCamera, 0);
}


void MapZoom__Init(MapZoom_o *this, MapCamera_o *mc, MapTouchDetector_o *touchDetector, const MethodInfo *method)
{
  UnityEngine_Object_o *mCamera; // x23
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct UnityEngine_Camera_o *v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct MapTouchDetector_o *v35; // x20
  MissionNaviTransitionBoardItem_o *p_OnChangeTouchCount_k__BackingField; // x20
  System_Delegate_o *OnChangeTouchCount_k__BackingField; // t1
  System_Action_int__int__o *v38; // x22
  System_Delegate_o *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Action_int__int__c *v46; // x22
  System_Delegate_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x2
  const MethodInfo *v51; // x3
  MapZoom_c *v52; // x0

  if ( (byte_5935007 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__int__TypeInfo);
    sub_21FFC50(&Method_MapZoom__Init_b__44_0__);
    sub_21FFC50(&MapZoom_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935007 = 1;
  }
  mCamera = (UnityEngine_Object_o *)this->fields.mCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mc, touchDetector);
  if ( UnityEngine_Object__op_Inequality(mCamera, 0, 0) )
  {
    this->fields.mMapCamera = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mMapCamera, 0, v8, v9, v10, v11, v12, v13);
    this->fields.touchDetector = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.touchDetector, 0, v14, v15, v16, v17, v18, v19);
  }
  this->fields.mMapCamera = mc;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mMapCamera, (int32_t)mc, v8, v9, v10, v11, v12, v13);
  if ( !mc
    || (v28 = mc->fields.mCamera,
        this->fields.mCamera = v28,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mCamera,
          (int32_t)v28,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27),
        this->fields.touchDetector = touchDetector,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.touchDetector,
          (int32_t)touchDetector,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34),
        (v35 = this->fields.touchDetector) == 0) )
  {
    sub_21FFECC(v20, v21);
  }
  OnChangeTouchCount_k__BackingField = (System_Delegate_o *)v35->fields._OnChangeTouchCount_k__BackingField;
  p_OnChangeTouchCount_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v35->fields._OnChangeTouchCount_k__BackingField;
  v38 = (System_Action_int__int__o *)sub_21FFEBC(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(v38, (Il2CppObject *)this, Method_MapZoom__Init_b__44_0__, 0);
  v39 = System_Delegate__Combine(OnChangeTouchCount_k__BackingField, (System_Delegate_o *)v38, 0);
  if ( v39 )
  {
    v46 = System_Action_int__int__TypeInfo;
    v47 = v39;
    v48 = sub_21FFDA4(v39, System_Action_int__int__TypeInfo);
    if ( v48 )
      goto LABEL_13;
    sub_220024C(v47, v46, v40, v41);
  }
  v48 = 0;
LABEL_13:
  p_OnChangeTouchCount_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v48;
  sub_21FFBF4(p_OnChangeTouchCount_k__BackingField, v48, v40, v41, v42, v43, v44, v45);
  v52 = MapZoom_TypeInfo;
  if ( !*(&MapZoom_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, v49, v50);
    v52 = MapZoom_TypeInfo;
  }
  MapZoom__SetZoomSize(this, v52->static_fields->ZOOM_MIN, 1, 0, v51);
}


bool MapZoom__IsStop(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields.mSpd == 0.0;
}


void MapZoom__Limit(MapZoom_o *this, float spd_rate, const MethodInfo *method)
{
  __int64 v3; // x2
  float mTgt; // s9
  MapZoom_c *v7; // x0
  float ZOOM_MIN; // s0
  float v9; // s0
  float mZoomMax; // s1

  if ( (byte_5935009 & 1) == 0 )
  {
    sub_21FFC50(&MapZoom_TypeInfo);
    byte_5935009 = 1;
  }
  if ( !this->fields._IsZoomMaxFit_k__BackingField )
  {
    mTgt = this->fields.mTgt;
    v7 = MapZoom_TypeInfo;
    if ( !*(&MapZoom_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, method, v3);
      v7 = MapZoom_TypeInfo;
    }
    ZOOM_MIN = v7->static_fields->ZOOM_MIN;
    if ( mTgt >= ZOOM_MIN )
    {
      mZoomMax = this->fields.mZoomMax;
      v9 = 0.0;
      if ( mTgt > mZoomMax )
        v9 = mZoomMax - mTgt;
    }
    else
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, method, v3);
        ZOOM_MIN = MapZoom_TypeInfo->static_fields->ZOOM_MIN;
      }
      v9 = ZOOM_MIN - mTgt;
    }
    this->fields.mTgt = mTgt + (float)(v9 * spd_rate);
  }
}


void MapZoom__MouseScrollWheel(MapZoom_o *this, const MethodInfo *method)
{
  float y; // s8
  float Axis; // s0
  float v5; // s1
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593500C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9535/*"Mouse ScrollWheel"*/);
    byte_593500C = 1;
  }
  mousePosition = UnityEngine_Input__get_mousePosition(0);
  if ( mousePosition.fields.x >= 0.0 )
  {
    y = mousePosition.fields.y;
    if ( mousePosition.fields.x <= (float)UnityEngine_Screen__get_width(0)
      && y >= 0.0
      && y <= (float)UnityEngine_Screen__get_height(0) )
    {
      Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9535/*"Mouse ScrollWheel"*/, 0);
      if ( Axis <= 0.0 )
      {
        v5 = 0.25;
        if ( Axis >= 0.0 )
          v5 = Axis;
      }
      else
      {
        v5 = -0.25;
        this->fields._IsZoomMaxFit_k__BackingField = 0;
      }
      this->fields.mTgt = v5 + this->fields.mTgt;
    }
  }
}


void MapZoom__Process(MapZoom_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *mCamera; // x0
  float orthographicSize; // s8
  float mAutoZmDuration; // s0
  float mAutoZmTime; // s8
  float v7; // s0
  float v8; // s1
  const MethodInfo *v9; // x3
  float mAutoZmEdVal; // s8
  int32_t CurrentTouchCount; // w0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  float v14; // s0
  float mTgt; // s10
  float v16; // s9
  struct MapCamera_o *mMapCamera; // x8
  struct MapTouchDetector_o *touchDetector; // x9
  float32x2_t *mScrl; // x20
  float32x2_t v20; // d0
  UnityEngine_Vector2_o TouchCenter; // kr00_8
  System_Action_o *mAutoZmEndAct; // x0
  float v23; // s1
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  float mSpd; // s8
  float v27; // s0

  if ( (byte_5935008 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5935008 = 1;
  }
  mCamera = this->fields.mCamera;
  if ( !mCamera )
    goto LABEL_29;
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0);
  mAutoZmDuration = this->fields.mAutoZmDuration;
  this->fields.mIsAutoZoom = 0;
  if ( mAutoZmDuration > 0.0 )
  {
    mAutoZmTime = this->fields.mAutoZmTime;
    v7 = mAutoZmTime + UnityEngine_Time__get_deltaTime(0);
    v8 = this->fields.mAutoZmDuration;
    this->fields.mAutoZmTime = v7;
    if ( v7 >= v8 )
    {
      mAutoZmEndAct = this->fields.mAutoZmEndAct;
      mAutoZmEdVal = this->fields.mAutoZmEdVal;
      this->fields.mAutoZmDuration = 0.0;
      ActionExtensions__Call(mAutoZmEndAct, 0);
    }
    else
    {
      mAutoZmEdVal = Easing__Func_55915380(
                       this->fields.mAutoZmStVal,
                       this->fields.mAutoZmEdVal,
                       v7 / v8,
                       this->fields.mAutoZmEaseType,
                       0);
    }
    MapZoom__SetZoomSize(this, mAutoZmEdVal, 0, 0, v9);
    this->fields.mIsAutoZoom = 1;
    return;
  }
  mCamera = (UnityEngine_Camera_o *)this->fields.touchDetector;
  if ( !mCamera )
    goto LABEL_29;
  CurrentTouchCount = TouchDetectorBase__get_CurrentTouchCount((TouchDetectorBase_o *)mCamera, 0);
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
    v16 = v14;
    mMapCamera = this->fields.mMapCamera;
    this->fields._UserTotalZoomAmount_k__BackingField = this->fields._UserTotalZoomAmount_k__BackingField
                                                      + vabds_f32(v14, mTgt);
    if ( !mMapCamera )
      goto LABEL_29;
    touchDetector = this->fields.touchDetector;
    if ( !touchDetector )
      goto LABEL_29;
    mCamera = (UnityEngine_Camera_o *)touchDetector->fields._CurrentTouchInfo_k__BackingField;
    if ( !mCamera )
      goto LABEL_29;
    mScrl = (float32x2_t *)mMapCamera->fields.mScrl;
    TouchCenter = TouchDetectorBase_TouchInfo__get_TouchCenter((TouchDetectorBase_TouchInfo_o *)mCamera, 0);
    v20.n64_u32[0] = LODWORD(TouchCenter.fields.x);
    if ( !mScrl )
      goto LABEL_29;
    v20.n64_u32[1] = LODWORD(TouchCenter.fields.y);
    mScrl[3].n64_u64[0] = vsub_f32(mScrl[3], vmul_n_f32(v20, v16 - mTgt)).n64_u64[0];
    if ( (float)(v16 - mTgt) < 0.0 )
      *(_WORD *)&this->fields._IsZoomMaxFit_k__BackingField = 0;
    this->fields.mTgt = v16;
  }
  v23 = (float)(this->fields.mTgt - orthographicSize) * 0.75;
  this->fields.mSpd = v23;
  MapZoom__SetZoomSize(this, orthographicSize + v23, 0, 0, v13);
  mSpd = this->fields.mSpd;
  if ( mSpd != 0.0 )
  {
    mCamera = (UnityEngine_Camera_o *)System_Math_TypeInfo;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v24);
    if ( fabsf(mSpd) < 0.01 )
    {
      v27 = this->fields.mTgt;
      this->fields.mSpd = 0.0;
      MapZoom__SetZoomSize(this, v27, 0, 0, v25);
    }
  }
  if ( !this->fields.touchDetector )
LABEL_29:
    sub_21FFECC(mCamera, method);
}


void MapZoom__ResetZoomMaxFlag(MapZoom_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields._IsZoomMaxFit_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void MapZoom__SetZoomRate(MapZoom_o *this, float rate, bool xBaseUse, const MethodInfo *method)
{
  MapZoom_c *v7; // x0
  int v8; // w8
  float *p_ZOOM_BASE_MAX_X; // x8
  float v10; // s0
  int v11; // w8
  float mZoomMax; // s0
  struct MapZoom_StaticFields *static_fields; // x8
  float v14; // s1

  if ( (byte_5935006 & 1) == 0 )
  {
    sub_21FFC50(&MapZoom_TypeInfo);
    byte_5935006 = 1;
  }
  v7 = MapZoom_TypeInfo;
  v8 = *(&MapZoom_TypeInfo->_2.cctor_finished + 1);
  if ( xBaseUse )
  {
    if ( !v8 )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, xBaseUse, method);
      v7 = MapZoom_TypeInfo;
    }
    p_ZOOM_BASE_MAX_X = &v7->static_fields->ZOOM_BASE_MAX_X;
  }
  else
  {
    if ( !v8 )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, xBaseUse, method);
      v7 = MapZoom_TypeInfo;
    }
    p_ZOOM_BASE_MAX_X = &v7->static_fields->ZOOM_BASE_MAX_Y;
  }
  if ( !this )
    sub_21FFECC(v7, xBaseUse);
  v10 = *p_ZOOM_BASE_MAX_X;
  v11 = *(&v7->_2.cctor_finished + 1);
  mZoomMax = v10 * rate;
  this->fields.mZoomMax = mZoomMax;
  if ( !v11 )
  {
    j_il2cpp_runtime_class_init_0(v7, xBaseUse, method);
    v7 = MapZoom_TypeInfo;
    mZoomMax = this->fields.mZoomMax;
  }
  static_fields = v7->static_fields;
  this->fields._IsZoomMaxFit_k__BackingField = 0;
  v14 = static_fields->ZOOM_MARGIN * rate;
  this->fields.mZoomRange = mZoomMax - static_fields->ZOOM_MIN;
  this->fields.mZoomMargin = v14;
}


// local variable allocation has failed, the output may be wrong!
void MapZoom__SetZoomSize(
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

  if ( (byte_593500A & 1) == 0 )
  {
    sub_21FFC50(&MapZoom_TypeInfo);
    byte_593500A = 1;
  }
  v9 = MapZoom_TypeInfo;
  if ( !*(&MapZoom_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, is_tgt_update, ignoreMaxFlag);
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
    goto LABEL_15;
  UnityEngine_Camera__set_orthographicSize(mCamera, v11, 0);
  if ( !is_tgt_update )
    return;
  mCamera = this->fields.mCamera;
  if ( !mCamera )
LABEL_15:
    sub_21FFECC(mCamera, is_tgt_update);
  this->fields.mTgt = UnityEngine_Camera__get_orthographicSize(mCamera, 0);
}


// local variable allocation has failed, the output may be wrong!
void MapZoom__StartAutoZoom(
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  this->fields.mTgt = zoom;
  this->fields.mSpd = 0.0;
  mCamera = this->fields.mCamera;
  this->fields.mAutoZmTime = 0.0;
  this->fields.mAutoZmDuration = sec;
  if ( !mCamera )
    sub_21FFECC(0, *(_QWORD *)&easeType);
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0);
  this->fields.mAutoZmEndAct = endAct;
  p_mAutoZmEndAct = &this->fields.mAutoZmEndAct;
  *((float *)p_mAutoZmEndAct - 6) = orthographicSize;
  *((float *)p_mAutoZmEndAct - 5) = zoom;
  *((_DWORD *)p_mAutoZmEndAct - 2) = easeType;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_mAutoZmEndAct, (int32_t)endAct, v13, v14, v15, v16, v17, v18);
  *((_BYTE *)p_mAutoZmEndAct - 28) = 0;
  *((_BYTE *)p_mAutoZmEndAct + 8) = 1;
}


void MapZoom__Stop(MapZoom_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mSpd = 0.0;
  if ( is_force )
    MapZoom__SetZoomSize(this, this->fields.mTgt, 0, 0, v3);
}


void MapZoom__UnInit(MapZoom_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  this->fields.mMapCamera = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mMapCamera, 0, v2, v3, v4, v5, v6, v7);
  this->fields.touchDetector = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.touchDetector, 0, v9, v10, v11, v12, v13, v14);
}


void MapZoom___Init_b__44_0(MapZoom_o *this, int32_t oldTouchCount, int32_t newTouchCount, const MethodInfo *method)
{
  this->fields.startMTgt = this->fields.mTgt;
}


bool MapZoom__get_IsAutoZoom(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields.mIsAutoZoom;
}


bool MapZoom__get_IsZoomMaxFit(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields._IsZoomMaxFit_k__BackingField;
}


bool MapZoom__get_IsZoomMaxFitPosFix(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields._IsZoomMaxFitPosFix_k__BackingField;
}


float MapZoom__get_UserTotalZoomAmount(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields._UserTotalZoomAmount_k__BackingField;
}


float MapZoom__get_ZoomMargin(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields.mZoomMargin;
}


float MapZoom__get_ZoomMax(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields.mZoomMax;
}


float MapZoom__get_ZoomMin(MapZoom_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MapZoom_c *v3; // x0

  if ( (byte_5935005 & 1) == 0 )
  {
    sub_21FFC50(&MapZoom_TypeInfo);
    byte_5935005 = 1;
  }
  v3 = MapZoom_TypeInfo;
  if ( !*(&MapZoom_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, method, v2);
    v3 = MapZoom_TypeInfo;
  }
  return v3->static_fields->ZOOM_MIN;
}


void MapZoom__set_IsZoomMaxFit(MapZoom_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsZoomMaxFit_k__BackingField = value;
}


void MapZoom__set_IsZoomMaxFitPosFix(MapZoom_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsZoomMaxFitPosFix_k__BackingField = value;
}


void MapZoom__set_UserTotalZoomAmount(MapZoom_o *this, float value, const MethodInfo *method)
{
  this->fields._UserTotalZoomAmount_k__BackingField = value;
}