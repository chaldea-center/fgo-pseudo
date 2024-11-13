void __fastcall MapZoom___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct MapZoom_StaticFields *static_fields; // x8

  if ( (byte_4B12FB9 & 1) == 0 )
  {
    sub_1BCA7E0(&MapZoom_TypeInfo, v1, v2);
    byte_4B12FB9 = 1;
  }
  static_fields = MapZoom_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->ZOOM_DEFAULT = xmmword_BD32C0;
  static_fields->ZOOM_MARGIN = 0.2;
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
  __int64 v8; // x2
  float v9; // s0
  float startMTgt; // s10
  float v11; // s9
  MapZoom_c *v12; // x0
  float mZoomMargin; // s2
  float v14; // s1
  float result; // s0

  touchDetector = this->fields.touchDetector;
  if ( !touchDetector )
    goto LABEL_16;
  v3 = this;
  if ( !touchDetector->fields._PrevTouchInfo_k__BackingField )
    return this->fields.startMTgt;
  this = (MapZoom_o *)touchDetector->fields._StartTouchInfo_k__BackingField;
  if ( !this
    || (TouchInterval = TouchDetectorBase_TouchInfo__get_TouchInterval((TouchDetectorBase_TouchInfo_o *)this, 0LL),
        (v5 = v3->fields.touchDetector) == 0LL)
    || (this = (MapZoom_o *)v5->fields._CurrentTouchInfo_k__BackingField) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(this, method);
  }
  v6 = TouchInterval;
  v9 = TouchDetectorBase_TouchInfo__get_TouchInterval((TouchDetectorBase_TouchInfo_o *)this, 0LL);
  startMTgt = v3->fields.startMTgt;
  v11 = v9;
  if ( !byte_4B13012 )
  {
    sub_1BCA7E0(&MapZoom_TypeInfo, v7, v8);
    byte_4B13012 = 1;
  }
  v12 = MapZoom_TypeInfo;
  if ( !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, v7);
    v12 = MapZoom_TypeInfo;
  }
  mZoomMargin = v3->fields.mZoomMargin;
  v14 = (float)(v6 * startMTgt) / v11;
  result = v12->static_fields->ZOOM_MIN - mZoomMargin;
  if ( v14 >= result )
  {
    result = mZoomMargin + v3->fields.mZoomMax;
    if ( v14 <= result )
      return (float)(v6 * startMTgt) / v11;
  }
  return result;
}


float __fastcall MapZoom__GetZoomRate(MapZoom_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Camera_o *mCamera; // x0
  __int64 v5; // x1
  float orthographicSize; // s0
  MapZoom_c *v7; // x0
  float v8; // s8
  float mZoomMax; // s0
  float ZOOM_MIN; // s1

  if ( (byte_4B12FB7 & 1) == 0 )
  {
    sub_1BCA7E0(&MapZoom_TypeInfo, method, v2);
    byte_4B12FB7 = 1;
  }
  mCamera = this->fields.mCamera;
  if ( !mCamera )
    sub_1BCAA3C(0LL, method);
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
  v7 = MapZoom_TypeInfo;
  v8 = orthographicSize;
  if ( !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, v5);
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


float __fastcall MapZoom__GetZoomSize(MapZoom_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *mCamera; // x0

  mCamera = this->fields.mCamera;
  if ( !mCamera )
    sub_1BCAA3C(0LL, method);
  return UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
}


void __fastcall MapZoom__Init(
        MapZoom_o *this,
        MapCamera_o *mc,
        MapTouchDetector_o *touchDetector,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *mCamera; // x23
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct UnityEngine_Camera_o *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x2
  __int64 v42; // x3
  struct MapTouchDetector_o *v43; // x20
  PartyOrganizationUtility_o *p_OnChangeTouchCount_k__BackingField; // x20
  System_Delegate_o *OnChangeTouchCount_k__BackingField; // t1
  System_Action_int__int__o *v46; // x22
  System_Delegate_o *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Delegate_o *v54; // x21
  int64_t v55; // x1
  __int64 v56; // x1
  const MethodInfo *v57; // x3
  MapZoom_c *v58; // x0

  if ( (byte_4B12FB3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__int__TypeInfo, mc, touchDetector);
    sub_1BCA7E0(&Method_MapZoom__Init_b__44_0__, v7, v8);
    sub_1BCA7E0(&MapZoom_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B12FB3 = 1;
  }
  mCamera = (UnityEngine_Object_o *)this->fields.mCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mc);
  if ( UnityEngine_Object__op_Inequality(mCamera, 0LL, 0LL) )
  {
    this->fields.mMapCamera = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mMapCamera, 0LL, v14, v15, v16, v17, v18, v19);
    this->fields.touchDetector = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.touchDetector, 0LL, v20, v21, v22, v23, v24, v25);
  }
  this->fields.mMapCamera = mc;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mMapCamera, (int64_t)mc, v14, v15, v16, v17, v18, v19);
  if ( !mc
    || (v34 = mc->fields.mCamera,
        this->fields.mCamera = v34,
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mCamera, (int64_t)v34, v28, v29, v30, v31, v32, v33),
        this->fields.touchDetector = touchDetector,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.touchDetector,
          (int64_t)touchDetector,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40),
        (v43 = this->fields.touchDetector) == 0LL) )
  {
    sub_1BCAA3C(v26, v27);
  }
  OnChangeTouchCount_k__BackingField = (System_Delegate_o *)v43->fields._OnChangeTouchCount_k__BackingField;
  p_OnChangeTouchCount_k__BackingField = (PartyOrganizationUtility_o *)&v43->fields._OnChangeTouchCount_k__BackingField;
  v46 = (System_Action_int__int__o *)sub_1BCAA2C(System_Action_int__int__TypeInfo, v27, v41, v42);
  System_Action_int__int____ctor(v46, (Il2CppObject *)this, Method_MapZoom__Init_b__44_0__, 0LL);
  v47 = System_Delegate__Combine(OnChangeTouchCount_k__BackingField, (System_Delegate_o *)v46, 0LL);
  if ( v47 )
  {
    v54 = v47;
    v55 = sub_1BCA91C(v47, System_Action_int__int__TypeInfo);
    if ( v55 )
      goto LABEL_13;
    sub_1BCACFC(v54);
  }
  v55 = 0LL;
LABEL_13:
  p_OnChangeTouchCount_k__BackingField->klass = (PartyOrganizationUtility_c *)v55;
  sub_1BCA784(p_OnChangeTouchCount_k__BackingField, v55, v48, v49, v50, v51, v52, v53);
  v58 = MapZoom_TypeInfo;
  if ( !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, v56);
    v58 = MapZoom_TypeInfo;
  }
  MapZoom__SetZoomSize(this, v58->static_fields->ZOOM_MIN, 1, 0, v57);
}


bool __fastcall MapZoom__IsStop(MapZoom_o *this, const MethodInfo *method)
{
  return this->fields.mSpd == 0.0;
}


void __fastcall MapZoom__Limit(MapZoom_o *this, float spd_rate, const MethodInfo *method)
{
  __int64 v3; // x2
  float mTgt; // s9
  MapZoom_c *v7; // x0
  float ZOOM_MIN; // s0
  float v9; // s0
  float mZoomMax; // s1

  if ( (byte_4B12FB5 & 1) == 0 )
  {
    sub_1BCA7E0(&MapZoom_TypeInfo, method, v3);
    byte_4B12FB5 = 1;
  }
  if ( !this->fields._IsZoomMaxFit_k__BackingField )
  {
    mTgt = this->fields.mTgt;
    v7 = MapZoom_TypeInfo;
    if ( !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, method);
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
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7, method);
        ZOOM_MIN = MapZoom_TypeInfo->static_fields->ZOOM_MIN;
      }
      v9 = ZOOM_MIN - mTgt;
    }
    this->fields.mTgt = mTgt + (float)(v9 * spd_rate);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapZoom__MouseScrollWheel(MapZoom_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float v4; // s0
  float v5; // s1
  float v6; // s9
  float v7; // s8
  int32_t width; // w0
  float Axis; // s0
  float v10; // s1

  if ( (byte_4B12FB8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9269/*"Mouse ScrollWheel"*/, method, v2);
    byte_4B12FB8 = 1;
  }
  *(UnityEngine_Vector3_o *)&v4 = UnityEngine_Input__get_mousePosition(0LL);
  if ( v4 >= 0.0 )
  {
    v6 = v4;
    v7 = v5;
    width = UnityEngine_Screen__get_width(0LL);
    if ( v7 >= 0.0 && v6 <= (float)width && v7 <= (float)UnityEngine_Screen__get_height(0LL) )
    {
      Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9269/*"Mouse ScrollWheel"*/, 0LL);
      if ( Axis <= 0.0 )
      {
        v10 = 0.25;
        if ( Axis >= 0.0 )
          v10 = Axis;
      }
      else
      {
        v10 = -0.25;
        this->fields._IsZoomMaxFit_k__BackingField = 0;
      }
      this->fields.mTgt = v10 + this->fields.mTgt;
    }
  }
}


void __fastcall MapZoom__Process(MapZoom_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Camera_o *mCamera; // x0
  float orthographicSize; // s8
  float mAutoZmDuration; // s0
  float mAutoZmTime; // s8
  float deltaTime; // s0
  float v9; // s2
  const MethodInfo *v10; // x3
  float mAutoZmEdVal; // s8
  int32_t CurrentTouchCount; // w0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  float v15; // s0
  float mTgt; // s10
  struct MapCamera_o *mMapCamera; // x8
  float v18; // s9
  struct MapTouchDetector_o *touchDetector; // x9
  float32x2_t *mScrl; // x20
  float32x2_t v21; // d0
  UnityEngine_Vector2_o TouchCenter; // kr00_8
  System_Action_o *mAutoZmEndAct; // x0
  float v24; // s0
  const MethodInfo *v25; // x3
  float mSpd; // s8
  float v27; // s0

  if ( (byte_4B12FB4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    byte_4B12FB4 = 1;
  }
  mCamera = this->fields.mCamera;
  if ( !mCamera )
    goto LABEL_29;
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
  mAutoZmDuration = this->fields.mAutoZmDuration;
  this->fields.mIsAutoZoom = 0;
  if ( mAutoZmDuration > 0.0 )
  {
    mAutoZmTime = this->fields.mAutoZmTime;
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    v9 = this->fields.mAutoZmDuration;
    this->fields.mAutoZmTime = mAutoZmTime + deltaTime;
    if ( (float)(mAutoZmTime + deltaTime) >= v9 )
    {
      mAutoZmEndAct = this->fields.mAutoZmEndAct;
      mAutoZmEdVal = this->fields.mAutoZmEdVal;
      this->fields.mAutoZmDuration = 0.0;
      ActionExtensions__Call(mAutoZmEndAct, 0LL);
    }
    else
    {
      mAutoZmEdVal = Easing__Func_47131320(
                       this->fields.mAutoZmStVal,
                       this->fields.mAutoZmEdVal,
                       (float)(mAutoZmTime + deltaTime) / v9,
                       this->fields.mAutoZmEaseType,
                       0LL);
    }
    MapZoom__SetZoomSize(this, mAutoZmEdVal, 0, 0, v10);
    this->fields.mIsAutoZoom = 1;
    return;
  }
  mCamera = (UnityEngine_Camera_o *)this->fields.touchDetector;
  if ( !mCamera )
    goto LABEL_29;
  CurrentTouchCount = TouchDetectorBase__get_CurrentTouchCount((TouchDetectorBase_o *)mCamera, 0LL);
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
      goto LABEL_29;
    touchDetector = this->fields.touchDetector;
    if ( !touchDetector )
      goto LABEL_29;
    mCamera = (UnityEngine_Camera_o *)touchDetector->fields._CurrentTouchInfo_k__BackingField;
    if ( !mCamera )
      goto LABEL_29;
    mScrl = (float32x2_t *)mMapCamera->fields.mScrl;
    TouchCenter = TouchDetectorBase_TouchInfo__get_TouchCenter((TouchDetectorBase_TouchInfo_o *)mCamera, 0LL);
    v21.n64_u32[0] = LODWORD(TouchCenter.fields.x);
    if ( !mScrl )
      goto LABEL_29;
    v21.n64_u32[1] = LODWORD(TouchCenter.fields.y);
    mScrl[3].n64_u64[0] = vsub_f32(mScrl[3], vmul_n_f32(v21, v18 - mTgt)).n64_u64[0];
    if ( (float)(v18 - mTgt) < 0.0 )
      *(_WORD *)&this->fields._IsZoomMaxFit_k__BackingField = 0;
    this->fields.mTgt = v18;
  }
  v24 = (float)(this->fields.mTgt - orthographicSize) * 0.75;
  this->fields.mSpd = v24;
  MapZoom__SetZoomSize(this, orthographicSize + v24, 0, 0, v14);
  mSpd = this->fields.mSpd;
  if ( mSpd != 0.0 )
  {
    mCamera = (UnityEngine_Camera_o *)System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
    if ( fabsf(mSpd) < 0.01 )
    {
      v27 = this->fields.mTgt;
      this->fields.mSpd = 0.0;
      MapZoom__SetZoomSize(this, v27, 0, 0, v25);
    }
  }
  if ( !this->fields.touchDetector )
LABEL_29:
    sub_1BCAA3C(mCamera, method);
}


void __fastcall MapZoom__ResetZoomMaxFlag(MapZoom_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields._IsZoomMaxFit_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapZoom__SetZoomRate(MapZoom_o *this, float rate, bool xBaseUse, const MethodInfo *method)
{
  MapZoom_c *v7; // x0
  struct MapZoom_StaticFields *static_fields; // x8
  __int64 v9; // x9
  float mZoomMax; // s0
  float ZOOM_MIN; // s1

  if ( (byte_4B12FB2 & 1) == 0 )
  {
    sub_1BCA7E0(&MapZoom_TypeInfo, xBaseUse, method);
    byte_4B12FB2 = 1;
  }
  v7 = MapZoom_TypeInfo;
  if ( !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, xBaseUse);
    v7 = MapZoom_TypeInfo;
  }
  if ( !this )
    sub_1BCAA3C(v7, xBaseUse);
  static_fields = v7->static_fields;
  v9 = 12LL;
  if ( xBaseUse )
    v9 = 8LL;
  mZoomMax = *(float *)((char *)&static_fields->ZOOM_DEFAULT + v9) * rate;
  this->fields.mZoomMax = mZoomMax;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, xBaseUse);
    mZoomMax = this->fields.mZoomMax;
    static_fields = MapZoom_TypeInfo->static_fields;
  }
  this->fields.mZoomMargin = static_fields->ZOOM_MARGIN * rate;
  ZOOM_MIN = static_fields->ZOOM_MIN;
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

  if ( (byte_4B12FB6 & 1) == 0 )
  {
    sub_1BCA7E0(&MapZoom_TypeInfo, is_tgt_update, ignoreMaxFlag);
    byte_4B12FB6 = 1;
  }
  v9 = MapZoom_TypeInfo;
  if ( !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, is_tgt_update);
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
  UnityEngine_Camera__set_orthographicSize(mCamera, v11, 0LL);
  if ( !is_tgt_update )
    return;
  mCamera = this->fields.mCamera;
  if ( !mCamera )
LABEL_15:
    sub_1BCAA3C(mCamera, is_tgt_update);
  this->fields.mTgt = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  mCamera = this->fields.mCamera;
  this->fields.mTgt = zoom;
  this->fields.mSpd = 0.0;
  this->fields.mAutoZmTime = 0.0;
  this->fields.mAutoZmDuration = sec;
  if ( !mCamera )
    sub_1BCAA3C(0LL, *(_QWORD *)&easeType);
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
  this->fields.mAutoZmEndAct = endAct;
  p_mAutoZmEndAct = &this->fields.mAutoZmEndAct;
  *((float *)p_mAutoZmEndAct - 6) = orthographicSize;
  *((float *)p_mAutoZmEndAct - 5) = zoom;
  *((_DWORD *)p_mAutoZmEndAct - 2) = easeType;
  sub_1BCA784((PartyOrganizationUtility_o *)p_mAutoZmEndAct, (int64_t)endAct, v13, v14, v15, v16, v17, v18);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  this->fields.mMapCamera = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mMapCamera, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.touchDetector = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.touchDetector, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v2; // x2
  MapZoom_c *v3; // x0

  if ( (byte_4B12FB1 & 1) == 0 )
  {
    sub_1BCA7E0(&MapZoom_TypeInfo, method, v2);
    byte_4B12FB1 = 1;
  }
  v3 = MapZoom_TypeInfo;
  if ( !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, method);
    v3 = MapZoom_TypeInfo;
  }
  return v3->static_fields->ZOOM_MIN;
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