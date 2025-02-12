void __fastcall MapScroll___ctor(MapScroll_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapScroll__AddScrlTgtPos(MapScroll_o *this, UnityEngine_Vector2_o pos, const MethodInfo *method)
{
  float y; // v0.s[1]

  y = pos.fields.y;
  this->fields.mTgt = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)pos, (float32x2_t)this->fields.mTgt).n64_u64[0];
}


bool __fastcall MapScroll__BrakeMv(MapScroll_o *this, float spd_rate, const MethodInfo *method)
{
  MapCamera_o *mMapCamera; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Rect_o CameraRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera )
    sub_1C13F80(0LL, method);
  CameraRect = MapCamera__get_CameraRect(mMapCamera, 0LL);
  return MapScroll__BrakeMv_34795576(this, CameraRect, spd_rate, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapScroll__BrakeMv_34795576(
        MapScroll_o *this,
        UnityEngine_Rect_o cam_rect,
        float spd_rate,
        const MethodInfo *method)
{
  struct MapCamera_o *mMapCamera; // x8
  float m_YMin; // s7
  float m_Width; // s17
  float y; // s5
  float x; // s6
  float m_Height; // s16
  float v10; // s2
  float m_XMin; // s18
  float v12; // s0
  float v13; // s0
  float v14; // s3
  float v15; // s1
  float v16; // s3
  float v17; // s0
  float v18; // s1
  float v19; // s1
  bool v20; // w8

  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera )
    sub_1C13F80(this, method);
  m_YMin = mMapCamera->fields.mMvBrakeRect.fields.m_YMin;
  m_Width = mMapCamera->fields.mMvBrakeRect.fields.m_Width;
  x = this->fields.mTgt.fields.x;
  y = this->fields.mTgt.fields.y;
  m_Height = mMapCamera->fields.mMvBrakeRect.fields.m_Height;
  if ( v10 < m_Width )
  {
    m_XMin = mMapCamera->fields.mMvBrakeRect.fields.m_XMin;
    if ( cam_rect.fields.m_XMin >= m_XMin )
    {
      v13 = cam_rect.fields.m_Width + cam_rect.fields.m_XMin;
      if ( v13 <= (float)(m_XMin + m_Width) )
        goto LABEL_10;
      if ( spd_rate <= 0.0 )
        return 1;
      v12 = (float)(m_XMin + m_Width) - v13;
    }
    else
    {
      if ( spd_rate <= 0.0 )
        return 1;
      v12 = m_XMin - cam_rect.fields.m_XMin;
    }
    x = x + (float)(v12 * spd_rate);
  }
LABEL_10:
  if ( v14 < m_Height )
  {
    if ( (float)(v16 + v15) > (float)(m_YMin + m_Height) )
    {
      if ( spd_rate > 0.0 )
      {
        v17 = (float)(m_YMin + m_Height) - (float)(v16 + v15);
LABEL_17:
        y = y + (float)(v17 * spd_rate);
        goto LABEL_18;
      }
      return 1;
    }
    if ( v18 < m_YMin )
    {
      if ( spd_rate > 0.0 )
      {
        v17 = m_YMin - v19;
        goto LABEL_17;
      }
      return 1;
    }
  }
LABEL_18:
  v20 = 0;
  this->fields.mTgt.fields.x = x;
  this->fields.mTgt.fields.y = y;
  return v20;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall MapScroll__GetScrlPosVec3(MapScroll_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mCamera; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  mCamera = (UnityEngine_Component_o *)this->fields.mCamera;
  if ( !mCamera )
    sub_1C13F80(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(mCamera, 0LL);
  *(UnityEngine_Vector3_o *)&v4 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


UnityEngine_Vector2_o __fastcall MapScroll__GetScrlTgtPos(MapScroll_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.mTgt.fields.x;
  y = this->fields.mTgt.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void __fastcall MapScroll__Init(
        MapScroll_o *this,
        MapCamera_o *mc,
        MapTouchDetector_o *touchDetector,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mMapCamera; // x23
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UnityEngine_Camera_o *mCamera; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4BB1435 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, mc);
    byte_4BB1435 = 1;
  }
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMapCamera, 0LL, 0LL) )
  {
    this->fields.mMapCamera = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, 0LL, v8, v9, v10, v11, v12, v13);
    this->fields.touchDetector = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.touchDetector, 0LL, v14, v15, v16, v17, v18, v19);
  }
  this->fields.mMapCamera = mc;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)mc, v8, v9, v10, v11, v12, v13);
  if ( !mc )
    sub_1C13F80(v20, v21);
  mCamera = mc->fields.mCamera;
  this->fields.mCamera = mCamera;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.mCamera, (int64_t)mCamera, v22, v23, v24, v25, v26, v27);
  this->fields.touchDetector = touchDetector;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.touchDetector,
    (int64_t)touchDetector,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


bool __fastcall MapScroll__IsStop(MapScroll_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o mSpd; // d8
  float32x2_t v3; // d0

  mSpd = this->fields.mSpd;
  if ( !byte_4BAEC9A )
  {
    sub_1C13D24(&UnityEngine_Vector2_TypeInfo, method);
    byte_4BAEC9A = 1;
  }
  v3.n64_u64[0] = vsub_f32((float32x2_t)mSpd, (float32x2_t)UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).n64_u64[0];
  return vaddv_f32(vmul_f32(v3, v3)) < 1.0e-10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapScroll__LimitMv(MapScroll_o *this, const MethodInfo *method)
{
  struct MapCamera_o *mMapCamera; // x8
  MapScroll_o *v3; // x19
  float ZoomRate; // s10
  const MethodInfo *v5; // x1
  float v6; // s0
  float v7; // s1
  float v8; // s8
  float v9; // s9
  float m_XMin; // s4
  float m_YMin; // s5
  float m_Width; // s6
  float m_Height; // s7
  float v14; // s4
  float v15; // s5
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o CameraRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera
    || (v3 = this, (this = (MapScroll_o *)mMapCamera->fields.mZoom) == 0LL)
    || (ZoomRate = MapZoom__GetZoomRate((MapZoom_o *)this, method),
        *(UnityEngine_Vector3_o *)&v6 = MapScroll__GetScrlPosVec3(v3, v5),
        (this = (MapScroll_o *)v3->fields.mMapCamera) == 0LL) )
  {
    sub_1C13F80(this, method);
  }
  v8 = v6;
  v9 = v7;
  CameraRect = MapCamera__get_CameraRect((MapCamera_o *)this, 0LL);
  m_XMin = CameraRect.fields.m_XMin;
  m_YMin = CameraRect.fields.m_YMin;
  m_Width = CameraRect.fields.m_Width;
  m_Height = CameraRect.fields.m_Height;
  CameraRect.fields.m_XMin = v8;
  CameraRect.fields.m_YMin = v9;
  CameraRect.fields.m_Width = m_XMin;
  CameraRect.fields.m_Height = m_YMin;
  v14 = m_Width;
  v15 = m_Height;
  v18 = MapScroll__LimitMv_34795924(
          v3,
          *(UnityEngine_Vector2_o *)&CameraRect.fields.m_XMin,
          *(UnityEngine_Rect_o *)&CameraRect.fields.m_Width,
          -(float)((float)((float)(1.0 - ZoomRate) * 0.124) + 0.001),
          v16);
  MapScroll__SetScrlPos(v3, v18, v17);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall MapScroll__LimitMv_34795924(
        MapScroll_o *this,
        UnityEngine_Vector2_o pos,
        UnityEngine_Rect_o cam_rect,
        float rebound_rate,
        const MethodInfo *method)
{
  struct MapCamera_o *mMapCamera; // x8
  float m_YMin; // s7
  float m_XMin; // s17
  float m_Height; // s16
  float v9; // s2
  float v10; // s2
  float v11; // s4
  float x; // s4
  float v13; // s3
  float v14; // s5
  float v15; // s2
  float v16; // s3
  float v17; // s3
  float y; // s3
  float v19; // s1
  float v20; // s1
  struct MapZoom_o *mZoom; // x9
  float MapBgRateW_k__BackingField; // s2
  float MapBgRateH_k__BackingField; // s3
  int v24; // s1

  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera )
LABEL_19:
    sub_1C13F80(this, method);
  m_XMin = mMapCamera->fields.mMvLimitRect.fields.m_XMin;
  m_YMin = mMapCamera->fields.mMvLimitRect.fields.m_YMin;
  m_Height = mMapCamera->fields.mMvLimitRect.fields.m_Height;
  if ( cam_rect.fields.m_XMin >= m_XMin )
  {
    v10 = cam_rect.fields.m_Width + cam_rect.fields.m_XMin;
    v11 = m_XMin + mMapCamera->fields.mMvLimitRect.fields.m_Width;
    if ( v10 <= v11 )
      goto LABEL_7;
    v9 = v11 - v10;
  }
  else
  {
    v9 = m_XMin - cam_rect.fields.m_XMin;
  }
  x = this->fields.mInertiaSpd.fields.x;
  pos.fields.x = pos.fields.x + v9;
  this->fields.mTgt.fields.x = pos.fields.x;
  this->fields.mInertiaSpd.fields.x = x * rebound_rate;
LABEL_7:
  if ( (float)(v14 + v13) <= (float)(m_YMin + m_Height) )
  {
    if ( v16 >= m_YMin )
      goto LABEL_12;
    v15 = m_YMin - v17;
  }
  else
  {
    v15 = (float)(m_YMin + m_Height) - (float)(v14 + v13);
  }
  y = this->fields.mInertiaSpd.fields.y;
  v20 = v19 + v15;
  this->fields.mTgt.fields.y = v20;
  this->fields.mInertiaSpd.fields.y = y * rebound_rate;
LABEL_12:
  mZoom = mMapCamera->fields.mZoom;
  if ( !mZoom )
    goto LABEL_19;
  if ( mZoom->fields._IsZoomMaxFitPosFix_k__BackingField )
  {
    MapBgRateW_k__BackingField = mMapCamera->fields._MapBgRateW_k__BackingField;
    MapBgRateH_k__BackingField = mMapCamera->fields._MapBgRateH_k__BackingField;
    if ( MapBgRateW_k__BackingField <= MapBgRateH_k__BackingField )
    {
      pos.fields.x = 0.0;
      this->fields.mTgt.fields.x = 0.0;
    }
    if ( MapBgRateW_k__BackingField >= MapBgRateH_k__BackingField )
    {
      v24 = 0;
      this->fields.mTgt.fields.y = 0.0;
    }
  }
  return pos;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapScroll__Process(MapScroll_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float v4; // s1
  float v5; // s0
  float v6; // s8
  float mAutoMvTime; // s8
  const MethodInfo *v8; // x1
  float deltaTime; // s0
  float mAutoMvDuration; // s2
  float v11; // s5
  float v12; // s6
  const MethodInfo *v13; // x1
  __int64 touchDetector; // x0
  float v15; // s9
  int v16; // w20
  struct MapTouchDetector_o *v17; // x9
  char v18; // w8
  UnityEngine_Vector2_o TouchCenter; // kr00_8
  struct MapTouchDetector_o *v20; // x8
  UnityEngine_Vector2_o v21; // kr08_8
  struct MapCamera_o *v22; // x8
  struct MapZoom_o *v23; // x8
  float orthographicSize; // s0
  const MethodInfo *v25; // x1
  bool v26; // w0
  float32x2_t v27; // d1
  float UserTotalScrollAmount; // s10
  float v29; // s11
  float y; // s10
  float x; // s11
  float v32; // s10
  float v33; // s11
  float v34; // s0
  float v35; // s1
  System_Action_o *mPlaySEAction_Flick; // x0
  bool v37; // nf
  float v38; // s5
  __int64 v39; // x1
  UnityEngine_Vector2_c *v40; // x8
  struct UnityEngine_Vector2_o mInertiaSpd; // d1
  float v42; // s0
  float v43; // s11
  float v44; // s11
  struct MapCamera_o *mMapCamera; // x8
  struct MapZoom_o *mZoom; // x8
  float v47; // s0
  float v48; // s1
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x2
  float v52; // s9
  float v53; // s9
  float32x2_t v54; // [xsp+0h] [xbp-60h]
  unsigned __int32 v55; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector2_o mAutoMvEdPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v57; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BB1436 & 1) == 0 )
  {
    sub_1C13D24(&System_Math_TypeInfo, method);
    byte_4BB1436 = 1;
  }
  *(UnityEngine_Vector3_o *)(&v4 - 1) = MapScroll__GetScrlPosVec3(this, method);
  v6 = v5;
  if ( this->fields.mAutoMvDuration > 0.0 )
  {
    mAutoMvTime = this->fields.mAutoMvTime;
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    mAutoMvDuration = this->fields.mAutoMvDuration;
    v11 = mAutoMvTime + deltaTime;
    this->fields.mAutoMvTime = mAutoMvTime + deltaTime;
    if ( (float)(mAutoMvTime + deltaTime) >= mAutoMvDuration )
    {
      mAutoMvEdPos = this->fields.mAutoMvEdPos;
      this->fields.mAutoMvDuration = 0.0;
      MapScroll__SetScrlPos(this, mAutoMvEdPos, v8);
      ActionExtensions__Call(this->fields.mAutoMvEndAct, 0LL);
    }
    else
    {
      v58.fields.x = this->fields.mAutoMvStPos.fields.x;
      v58.fields.y = this->fields.mAutoMvStPos.fields.y;
      v60.fields.x = this->fields.mAutoMvEdPos.fields.x;
      v60.fields.y = this->fields.mAutoMvEdPos.fields.y;
      v12 = v11 / mAutoMvDuration;
      v58.fields.z = 0.0;
      v60.fields.z = 0.0;
      v59 = Easing__Func(v58, v60, v12, this->fields.mAutoMvEaseType, 0LL);
      MapScroll__SetScrlPos(this, *(UnityEngine_Vector2_o *)&v59.fields.x, v13);
    }
    return;
  }
  touchDetector = (__int64)this->fields.touchDetector;
  if ( !touchDetector )
    goto LABEL_70;
  v15 = v4;
  touchDetector = TouchDetectorBase__get_CurrentTouchCount((TouchDetectorBase_o *)touchDetector, 0LL);
  if ( !(_DWORD)touchDetector )
  {
    this->fields.UserTotalScrollAmount = 0.0;
    if ( !byte_4BAEDA2 )
    {
      sub_1C13D24(&System_Math_TypeInfo, v3);
      byte_4BAEDA2 = 1;
    }
    x = this->fields.mTchDif.fields.x;
    y = this->fields.mTchDif.fields.y;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf((float)(x * x) + (float)(y * y)) > 0.0 )
      goto LABEL_34;
    if ( !byte_4BAEDA2 )
    {
      sub_1C13D24(&System_Math_TypeInfo, v3);
      byte_4BAEDA2 = 1;
    }
    v33 = this->fields.mTchDifOld.fields.x;
    v32 = this->fields.mTchDifOld.fields.y;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf((float)(v33 * v33) + (float)(v32 * v32)) > 0.0 )
    {
LABEL_34:
      v34 = this->fields.mTchDif.fields.x;
      v35 = this->fields.mTchDif.fields.y;
      mPlaySEAction_Flick = this->fields.mPlaySEAction_Flick;
      v37 = (float)((float)(v34 * v34) + (float)(v35 * v35)) < (float)((float)(this->fields.mTchDifOld.fields.x
                                                                             * this->fields.mTchDifOld.fields.x)
                                                                     + (float)(this->fields.mTchDifOld.fields.y
                                                                             * this->fields.mTchDifOld.fields.y));
      v38 = this->fields.mInertiaSpd.fields.y;
      if ( (float)((float)(v34 * v34) + (float)(v35 * v35)) < (float)((float)(this->fields.mTchDifOld.fields.x
                                                                            * this->fields.mTchDifOld.fields.x)
                                                                    + (float)(this->fields.mTchDifOld.fields.y
                                                                            * this->fields.mTchDifOld.fields.y)) )
        v35 = this->fields.mTchDifOld.fields.y;
      if ( v37 )
        v34 = this->fields.mTchDifOld.fields.x;
      this->fields.mInertiaSpd.fields.x = this->fields.mInertiaSpd.fields.x + v34;
      this->fields.mInertiaSpd.fields.y = v38 + v35;
      ActionExtensions__Call(mPlaySEAction_Flick, 0LL);
      if ( !byte_4BAEC9A )
      {
        sub_1C13D24(&UnityEngine_Vector2_TypeInfo, v39);
        byte_4BAEC9A = 1;
      }
      v40 = UnityEngine_Vector2_TypeInfo;
      this->fields.mTchDif = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      this->fields.mTchDifOld = v40->static_fields->zeroVector;
    }
    mInertiaSpd = this->fields.mInertiaSpd;
    this->fields.mTgt = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)this->fields.mTgt, (float32x2_t)mInertiaSpd).n64_u64[0];
    v54.n64_u64[0] = (unsigned __int64)mInertiaSpd;
    v42 = ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
    v43 = vmuls_n_f32(v42, v54.n64_f32[0]);
    this->fields.mInertiaSpd.fields.x = v43;
    this->fields.mInertiaSpd.fields.y = vmuls_lane_f32(v42, v54, 1);
    touchDetector = (__int64)System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( fabsf(v43) < 0.01 )
    {
      touchDetector = (__int64)System_Math_TypeInfo;
      v44 = this->fields.mInertiaSpd.fields.y;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( fabsf(v44) < 0.01 )
      {
        if ( !byte_4BAEC9A )
        {
          touchDetector = sub_1C13D24(&UnityEngine_Vector2_TypeInfo, v3);
          byte_4BAEC9A = 1;
        }
        this->fields.mInertiaSpd = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      }
    }
    mMapCamera = this->fields.mMapCamera;
    if ( mMapCamera )
    {
      mZoom = mMapCamera->fields.mZoom;
      if ( mZoom )
      {
        if ( !mZoom->fields._IsZoomMaxFitPosFix_k__BackingField )
          MapScroll__BrakeMv(this, 0.45, v3);
        v18 = 0;
        goto LABEL_59;
      }
    }
    goto LABEL_70;
  }
  v16 = touchDetector;
  if ( !byte_4BAEC9A )
  {
    touchDetector = sub_1C13D24(&UnityEngine_Vector2_TypeInfo, v3);
    byte_4BAEC9A = 1;
  }
  v17 = this->fields.touchDetector;
  this->fields.mInertiaSpd = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  if ( !v17 )
    goto LABEL_70;
  v18 = 0;
  if ( (unsigned int)(v16 - 1) <= 1 && v17->fields._PrevTouchInfo_k__BackingField )
  {
    this->fields.mTchDifOld = this->fields.mTchDif;
    touchDetector = (__int64)v17->fields._PrevTouchInfo_k__BackingField;
    if ( touchDetector )
    {
      TouchCenter = TouchDetectorBase_TouchInfo__get_TouchCenter((TouchDetectorBase_TouchInfo_o *)touchDetector, 0LL);
      v20 = this->fields.touchDetector;
      if ( v20 )
      {
        touchDetector = (__int64)v20->fields._CurrentTouchInfo_k__BackingField;
        if ( touchDetector )
        {
          v21 = TouchDetectorBase_TouchInfo__get_TouchCenter((TouchDetectorBase_TouchInfo_o *)touchDetector, 0LL);
          v22 = this->fields.mMapCamera;
          this->fields.mTchDif.fields.x = TouchCenter.fields.x - v21.fields.x;
          this->fields.mTchDif.fields.y = TouchCenter.fields.y - v21.fields.y;
          if ( v22 )
          {
            v23 = v22->fields.mZoom;
            if ( v23 )
            {
              touchDetector = (__int64)v23->fields.mCamera;
              if ( touchDetector )
              {
                orthographicSize = UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)touchDetector, 0LL);
                this->fields.mTchDif.fields.x = (float)(TouchCenter.fields.x - v21.fields.x) * orthographicSize;
                this->fields.mTchDif.fields.y = (float)(TouchCenter.fields.y - v21.fields.y) * orthographicSize;
                v26 = MapScroll__BrakeMv(this, 0.0, v25);
                v27.n64_u64[0] = (unsigned __int64)this->fields.mTchDif;
                if ( v26 )
                {
                  v27.n64_u64[0] = vmul_f32(v27, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
                  this->fields.mTchDif = (struct UnityEngine_Vector2_o)v27.n64_u64[0];
                }
                UserTotalScrollAmount = this->fields.UserTotalScrollAmount;
                this->fields.mTgt = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)this->fields.mTgt, v27).n64_u64[0];
                if ( byte_4BAEDA2 )
                {
                  v29 = v27.n64_f32[1];
                }
                else
                {
                  sub_1C13D24(&System_Math_TypeInfo, v3);
                  byte_4BAEDA2 = 1;
                  v27.n64_u32[0] = LODWORD(this->fields.mTchDif.fields.x);
                  v29 = this->fields.mTchDif.fields.y;
                }
                if ( !System_Math_TypeInfo->_2.cctor_finished )
                {
                  v55 = v27.n64_u32[0];
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                  v27.n64_u32[0] = v55;
                }
                v18 = 1;
                this->fields.UserTotalScrollAmount = UserTotalScrollAmount
                                                   + fabsf(sqrtf((float)(v27.n64_f32[0] * v27.n64_f32[0]) + (float)(v29 * v29)));
                goto LABEL_59;
              }
            }
          }
        }
      }
    }
LABEL_70:
    sub_1C13F80(touchDetector, v3);
  }
LABEL_59:
  v47 = this->fields.mTgt.fields.x - v6;
  v48 = this->fields.mTgt.fields.y - v15;
  this->fields.mSpd.fields.x = v47;
  this->fields.mSpd.fields.y = v48;
  if ( (v18 & 1) == 0 )
  {
    v47 = v47 * 0.75;
    v48 = v48 * 0.75;
    this->fields.mSpd.fields.x = v47;
    this->fields.mSpd.fields.y = v48;
  }
  v57.fields.x = v6 + v47;
  v57.fields.y = v15 + v48;
  MapScroll__SetScrlPos(this, v57, v3);
  if ( !MapScroll__IsStop(this, v49) )
  {
    v52 = this->fields.mSpd.fields.x;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( fabsf(v52) < 0.01 )
    {
      v53 = this->fields.mSpd.fields.y;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( fabsf(v53) < 0.01 )
        MapScroll__Stop(this, 1, v51);
    }
  }
  MapScroll__LimitMv(this, v50);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapScroll__SetScrlPos(MapScroll_o *this, UnityEngine_Vector2_o pos, const MethodInfo *method)
{
  UnityEngine_Component_o *mCamera; // x0
  float y; // s8
  float x; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector2_o v7; // 0:s0.4,4:s1.4

  mCamera = (UnityEngine_Component_o *)this->fields.mCamera;
  if ( !mCamera )
    sub_1C13F80(0LL, method);
  y = pos.fields.y;
  x = pos.fields.x;
  gameObject = UnityEngine_Component__get_gameObject(mCamera, 0LL);
  v7.fields.x = x;
  v7.fields.y = y;
  GameObjectExtensions__SetLocalPosition_34711680(gameObject, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapScroll__SetScrlTgtPos(MapScroll_o *this, UnityEngine_Vector2_o pos, const MethodInfo *method)
{
  this->fields.mTgt = pos;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapScroll__StartAutoMove(
        MapScroll_o *this,
        UnityEngine_Vector3_o screenPos,
        float sec,
        int32_t easeType,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Vector2_c *v10; // x8
  struct UnityEngine_Vector2_o zeroVector; // d0
  struct System_Action_o **p_mAutoMvEndAct; // x21
  struct System_Action_o *v13; // x8
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.mTgt.fields.x = screenPos.fields.x;
  this->fields.mTgt.fields.y = screenPos.fields.y;
  if ( !byte_4BAEC9A )
  {
    sub_1C13D24(&UnityEngine_Vector2_TypeInfo, *(_QWORD *)&easeType);
    byte_4BAEC9A = 1;
  }
  v10 = UnityEngine_Vector2_TypeInfo;
  this->fields.mTchDif = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.mTchDifOld = v10->static_fields->zeroVector;
  zeroVector = v10->static_fields->zeroVector;
  this->fields.mAutoMvTime = 0.0;
  this->fields.mAutoMvDuration = sec;
  this->fields.mInertiaSpd = zeroVector;
  ScrlPosVec3 = MapScroll__GetScrlPosVec3(this, *(const MethodInfo **)&easeType);
  this->fields.mAutoMvEndAct = endAct;
  p_mAutoMvEndAct = &this->fields.mAutoMvEndAct;
  v13 = *(p_mAutoMvEndAct - 12);
  *((_DWORD *)p_mAutoMvEndAct - 8) = LODWORD(ScrlPosVec3.fields.x);
  *((_DWORD *)p_mAutoMvEndAct - 7) = LODWORD(ScrlPosVec3.fields.y);
  *((_DWORD *)p_mAutoMvEndAct - 2) = easeType;
  *(p_mAutoMvEndAct - 3) = v13;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_mAutoMvEndAct, (int64_t)endAct, v14, v15, v16, v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapScroll__Stop(MapScroll_o *this, bool is_force, const MethodInfo *method)
{
  __int64 v4; // x1

  if ( is_force )
  {
    MapScroll__SetScrlPos(this, this->fields.mTgt, (const MethodInfo *)is_force);
    if ( !byte_4BAEC9A )
    {
      sub_1C13D24(&UnityEngine_Vector2_TypeInfo, v4);
      byte_4BAEC9A = 1;
    }
    this->fields.mSpd = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  }
  else if ( !byte_4BAEC9A )
  {
    sub_1C13D24(&UnityEngine_Vector2_TypeInfo, is_force);
    byte_4BAEC9A = 1;
  }
  this->fields.mInertiaSpd = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
}


void __fastcall MapScroll__UnInit(MapScroll_o *this, const MethodInfo *method)
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.touchDetector = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.touchDetector, 0LL, v9, v10, v11, v12, v13, v14);
}