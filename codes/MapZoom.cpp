void __fastcall MapZoom___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MapZoom_StaticFields *static_fields; // x8

  if ( (byte_4B33F43 & 1) == 0 )
  {
    sub_1BD3458(&MapZoom_TypeInfo, v1);
    byte_4B33F43 = 1;
  }
  static_fields = MapZoom_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->ZOOM_DEFAULT = xmmword_BD86F0;
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
  float v8; // s0
  float startMTgt; // s10
  float v10; // s9
  MapZoom_c *v11; // x0
  float mZoomMargin; // s2
  float v13; // s1
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
    sub_1BD36B4(this, method);
  }
  v6 = TouchInterval;
  v8 = TouchDetectorBase_TouchInfo__get_TouchInterval((TouchDetectorBase_TouchInfo_o *)this, 0LL);
  startMTgt = v3->fields.startMTgt;
  v10 = v8;
  if ( !byte_4B33F97 )
  {
    sub_1BD3458(&MapZoom_TypeInfo, v7);
    byte_4B33F97 = 1;
  }
  v11 = MapZoom_TypeInfo;
  if ( !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
    v11 = MapZoom_TypeInfo;
  }
  mZoomMargin = v3->fields.mZoomMargin;
  v13 = (float)(v6 * startMTgt) / v10;
  result = v11->static_fields->ZOOM_MIN - mZoomMargin;
  if ( v13 >= result )
  {
    result = mZoomMargin + v3->fields.mZoomMax;
    if ( v13 <= result )
      return (float)(v6 * startMTgt) / v10;
  }
  return result;
}


float __fastcall MapZoom__GetZoomRate(MapZoom_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *mCamera; // x0
  float orthographicSize; // s0
  MapZoom_c *v5; // x0
  float v6; // s8
  float mZoomMax; // s0
  float ZOOM_MIN; // s1

  if ( (byte_4B33F41 & 1) == 0 )
  {
    sub_1BD3458(&MapZoom_TypeInfo, method);
    byte_4B33F41 = 1;
  }
  mCamera = this->fields.mCamera;
  if ( !mCamera )
    sub_1BD36B4(0LL, method);
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
  v5 = MapZoom_TypeInfo;
  v6 = orthographicSize;
  if ( !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
    v5 = MapZoom_TypeInfo;
  }
  mZoomMax = this->fields.mZoomMax;
  ZOOM_MIN = v5->static_fields->ZOOM_MIN;
  if ( v6 <= mZoomMax )
    mZoomMax = v6;
  if ( v6 < ZOOM_MIN )
    mZoomMax = v5->static_fields->ZOOM_MIN;
  return (float)(mZoomMax - ZOOM_MIN) / this->fields.mZoomRange;
}


float __fastcall MapZoom__GetZoomSize(MapZoom_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *mCamera; // x0

  mCamera = this->fields.mCamera;
  if ( !mCamera )
    sub_1BD36B4(0LL, method);
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
  UnityEngine_Object_o *mCamera; // x23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct UnityEngine_Camera_o *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct MapTouchDetector_o *v38; // x20
  PartyOrganizationUtility_o *p_OnChangeTouchCount_k__BackingField; // x20
  System_Delegate_o *OnChangeTouchCount_k__BackingField; // t1
  System_Action_int__int__o *v41; // x22
  System_Delegate_o *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Delegate_o *v49; // x21
  int64_t v50; // x1
  const MethodInfo *v51; // x3
  MapZoom_c *v52; // x0

  if ( (byte_4B33F3D & 1) == 0 )
  {
    sub_1BD3458(&System_Action_int__int__TypeInfo, mc);
    sub_1BD3458(&Method_MapZoom__Init_b__44_0__, v7);
    sub_1BD3458(&MapZoom_TypeInfo, v8);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v9);
    byte_4B33F3D = 1;
  }
  mCamera = (UnityEngine_Object_o *)this->fields.mCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mCamera, 0LL, 0LL) )
  {
    this->fields.mMapCamera = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.mMapCamera, 0LL, v11, v12, v13, v14, v15, v16);
    this->fields.touchDetector = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.touchDetector, 0LL, v17, v18, v19, v20, v21, v22);
  }
  this->fields.mMapCamera = mc;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.mMapCamera, (int64_t)mc, v11, v12, v13, v14, v15, v16);
  if ( !mc
    || (v31 = mc->fields.mCamera,
        this->fields.mCamera = v31,
        sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.mCamera, (int64_t)v31, v25, v26, v27, v28, v29, v30),
        this->fields.touchDetector = touchDetector,
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&this->fields.touchDetector,
          (int64_t)touchDetector,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37),
        (v38 = this->fields.touchDetector) == 0LL) )
  {
    sub_1BD36B4(v23, v24);
  }
  OnChangeTouchCount_k__BackingField = (System_Delegate_o *)v38->fields._OnChangeTouchCount_k__BackingField;
  p_OnChangeTouchCount_k__BackingField = (PartyOrganizationUtility_o *)&v38->fields._OnChangeTouchCount_k__BackingField;
  v41 = (System_Action_int__int__o *)sub_1BD36A4(System_Action_int__int__TypeInfo);
  System_Action_int__int____ctor(v41, (Il2CppObject *)this, Method_MapZoom__Init_b__44_0__, 0LL);
  v42 = System_Delegate__Combine(OnChangeTouchCount_k__BackingField, (System_Delegate_o *)v41, 0LL);
  if ( v42 )
  {
    v49 = v42;
    v50 = sub_1BD3594(v42, System_Action_int__int__TypeInfo);
    if ( v50 )
      goto LABEL_13;
    sub_1BD3974(v49);
  }
  v50 = 0LL;
LABEL_13:
  p_OnChangeTouchCount_k__BackingField->klass = (PartyOrganizationUtility_c *)v50;
  sub_1BD33FC(p_OnChangeTouchCount_k__BackingField, v50, v43, v44, v45, v46, v47, v48);
  v52 = MapZoom_TypeInfo;
  if ( !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
    v52 = MapZoom_TypeInfo;
  }
  MapZoom__SetZoomSize(this, v52->static_fields->ZOOM_MIN, 1, 0, v51);
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

  if ( (byte_4B33F3F & 1) == 0 )
  {
    sub_1BD3458(&MapZoom_TypeInfo, method);
    byte_4B33F3F = 1;
  }
  if ( !this->fields._IsZoomMaxFit_k__BackingField )
  {
    mTgt = this->fields.mTgt;
    v6 = MapZoom_TypeInfo;
    if ( !MapZoom_TypeInfo->_2.cctor_finished )
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
      if ( !v6->_2.cctor_finished )
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
  float v9; // s1

  if ( (byte_4B33F42 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_9283/*"Mouse ScrollWheel"*/, method);
    byte_4B33F42 = 1;
  }
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Input__get_mousePosition(0LL);
  if ( v3 >= 0.0 )
  {
    v5 = v3;
    v6 = v4;
    width = UnityEngine_Screen__get_width(0LL);
    if ( v6 >= 0.0 && v5 <= (float)width && v6 <= (float)UnityEngine_Screen__get_height(0LL) )
    {
      Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9283/*"Mouse ScrollWheel"*/, 0LL);
      if ( Axis <= 0.0 )
      {
        v9 = 0.25;
        if ( Axis >= 0.0 )
          v9 = Axis;
      }
      else
      {
        v9 = -0.25;
        this->fields._IsZoomMaxFit_k__BackingField = 0;
      }
      this->fields.mTgt = v9 + this->fields.mTgt;
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

  if ( (byte_4B33F3E & 1) == 0 )
  {
    sub_1BD3458(&System_Math_TypeInfo, method);
    byte_4B33F3E = 1;
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
      mAutoZmEdVal = Easing__Func_47256512(
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
    goto LABEL_29;
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
      goto LABEL_29;
    touchDetector = this->fields.touchDetector;
    if ( !touchDetector )
      goto LABEL_29;
    mCamera = (UnityEngine_Camera_o *)touchDetector->fields._CurrentTouchInfo_k__BackingField;
    if ( !mCamera )
      goto LABEL_29;
    mScrl = (float32x2_t *)mMapCamera->fields.mScrl;
    TouchCenter = TouchDetectorBase_TouchInfo__get_TouchCenter((TouchDetectorBase_TouchInfo_o *)mCamera, 0LL);
    v20.n64_u32[0] = LODWORD(TouchCenter.fields.x);
    if ( !mScrl )
      goto LABEL_29;
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
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( fabsf(mSpd) < 0.01 )
    {
      v26 = this->fields.mTgt;
      this->fields.mSpd = 0.0;
      MapZoom__SetZoomSize(this, v26, 0, 0, v24);
    }
  }
  if ( !this->fields.touchDetector )
LABEL_29:
    sub_1BD36B4(mCamera, method);
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

  if ( (byte_4B33F3C & 1) == 0 )
  {
    sub_1BD3458(&MapZoom_TypeInfo, xBaseUse);
    byte_4B33F3C = 1;
  }
  v7 = MapZoom_TypeInfo;
  if ( !MapZoom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
    v7 = MapZoom_TypeInfo;
  }
  if ( !this )
    sub_1BD36B4(v7, xBaseUse);
  static_fields = v7->static_fields;
  v9 = 12LL;
  if ( xBaseUse )
    v9 = 8LL;
  mZoomMax = *(float *)((char *)&static_fields->ZOOM_DEFAULT + v9) * rate;
  this->fields.mZoomMax = mZoomMax;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
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

  if ( (byte_4B33F40 & 1) == 0 )
  {
    sub_1BD3458(&MapZoom_TypeInfo, is_tgt_update);
    byte_4B33F40 = 1;
  }
  v9 = MapZoom_TypeInfo;
  if ( !MapZoom_TypeInfo->_2.cctor_finished )
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
    goto LABEL_15;
  UnityEngine_Camera__set_orthographicSize(mCamera, v11, 0LL);
  if ( !is_tgt_update )
    return;
  mCamera = this->fields.mCamera;
  if ( !mCamera )
LABEL_15:
    sub_1BD36B4(mCamera, is_tgt_update);
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
    sub_1BD36B4(0LL, easeType);
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
  this->fields.mAutoZmEndAct = endAct;
  p_mAutoZmEndAct = &this->fields.mAutoZmEndAct;
  *((float *)p_mAutoZmEndAct - 6) = orthographicSize;
  *((float *)p_mAutoZmEndAct - 5) = zoom;
  *((_DWORD *)p_mAutoZmEndAct - 2) = easeType;
  sub_1BD33FC((PartyOrganizationUtility_o *)p_mAutoZmEndAct, (int64_t)endAct, v13, v14, v15, v16, v17, v18);
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.mMapCamera, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.touchDetector = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.touchDetector, 0LL, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4B33F3B & 1) == 0 )
  {
    sub_1BD3458(&MapZoom_TypeInfo, method);
    byte_4B33F3B = 1;
  }
  v2 = MapZoom_TypeInfo;
  if ( !MapZoom_TypeInfo->_2.cctor_finished )
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