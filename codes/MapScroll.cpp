void MapScroll___ctor(MapScroll_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void MapScroll__AddScrlTgtPos(MapScroll_o *this, UnityEngine_Vector2_o pos, const MethodInfo *method)
{
  float y; // v0.s[1]

  y = pos.fields.y;
  this->fields.mTgt = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)pos, (float32x2_t)this->fields.mTgt).n64_u64[0];
}


bool MapScroll__BrakeMv(MapScroll_o *this, float spd_rate, const MethodInfo *method)
{
  MapCamera_o *mMapCamera; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Rect_o CameraRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera )
    sub_1C942F0(0, method);
  CameraRect = MapCamera__get_CameraRect(mMapCamera, 0);
  return MapScroll__BrakeMv_36885104(this, CameraRect, spd_rate, v6);
}


bool MapScroll__BrakeMv_36885104(
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
  float m_XMin; // s18
  float v11; // s0
  float v12; // s0
  float v13; // s0
  bool v14; // w8

  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera )
    sub_1C942F0(this, method);
  m_YMin = mMapCamera->fields.mMvBrakeRect.fields.m_YMin;
  m_Width = mMapCamera->fields.mMvBrakeRect.fields.m_Width;
  x = this->fields.mTgt.fields.x;
  y = this->fields.mTgt.fields.y;
  m_Height = mMapCamera->fields.mMvBrakeRect.fields.m_Height;
  if ( cam_rect.fields.m_Width < m_Width )
  {
    m_XMin = mMapCamera->fields.mMvBrakeRect.fields.m_XMin;
    if ( cam_rect.fields.m_XMin >= m_XMin )
    {
      v12 = cam_rect.fields.m_Width + cam_rect.fields.m_XMin;
      if ( v12 <= (float)(m_XMin + m_Width) )
        goto LABEL_10;
      if ( spd_rate <= 0.0 )
        return 1;
      v11 = (float)(m_XMin + m_Width) - v12;
    }
    else
    {
      if ( spd_rate <= 0.0 )
        return 1;
      v11 = m_XMin - cam_rect.fields.m_XMin;
    }
    x = x + (float)(v11 * spd_rate);
  }
LABEL_10:
  if ( cam_rect.fields.m_Height < m_Height )
  {
    if ( (float)(cam_rect.fields.m_Height + cam_rect.fields.m_YMin) > (float)(m_YMin + m_Height) )
    {
      if ( spd_rate > 0.0 )
      {
        v13 = (float)(m_YMin + m_Height) - (float)(cam_rect.fields.m_Height + cam_rect.fields.m_YMin);
LABEL_17:
        y = y + (float)(v13 * spd_rate);
        goto LABEL_18;
      }
      return 1;
    }
    if ( cam_rect.fields.m_YMin < m_YMin )
    {
      if ( spd_rate > 0.0 )
      {
        v13 = m_YMin - cam_rect.fields.m_YMin;
        goto LABEL_17;
      }
      return 1;
    }
  }
LABEL_18:
  v14 = 0;
  this->fields.mTgt.fields.x = x;
  this->fields.mTgt.fields.y = y;
  return v14;
}


UnityEngine_Vector3_o MapScroll__GetScrlPosVec3(MapScroll_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mCamera; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  mCamera = (UnityEngine_Component_o *)this->fields.mCamera;
  if ( !mCamera )
    sub_1C942F0(0, method);
  gameObject = UnityEngine_Component__get_gameObject(mCamera, 0);
  return GameObjectExtensions__GetLocalPosition(gameObject, 0);
}


UnityEngine_Vector2_o MapScroll__GetScrlTgtPos(MapScroll_o *this, const MethodInfo *method)
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


void MapScroll__Init(MapScroll_o *this, MapCamera_o *mc, MapTouchDetector_o *touchDetector, const MethodInfo *method)
{
  UnityEngine_Object_o *mMapCamera; // x23
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct UnityEngine_Camera_o *mCamera; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  if ( (byte_4D292D8 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D292D8 = 1;
  }
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMapCamera, 0, 0) )
  {
    this->fields.mMapCamera = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v8, v9, v10, v11, v12, v13);
    this->fields.touchDetector = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.touchDetector, 0, v14, v15, v16, v17, v18, v19);
  }
  this->fields.mMapCamera = mc;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)mc, v8, v9, v10, v11, v12, v13);
  if ( !mc )
    sub_1C942F0(v20, v21);
  mCamera = mc->fields.mCamera;
  this->fields.mCamera = mCamera;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mCamera, (int32_t)mCamera, v22, v23, v24, v25, v26, v27);
  this->fields.touchDetector = touchDetector;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.touchDetector,
    (int32_t)touchDetector,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


bool MapScroll__IsStop(MapScroll_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o mSpd; // d8
  float32x2_t v3; // d0

  mSpd = this->fields.mSpd;
  if ( !byte_4D25DF9 )
  {
    sub_1C94098(&UnityEngine_Vector2_TypeInfo);
    byte_4D25DF9 = 1;
  }
  v3.n64_u64[0] = vsub_f32((float32x2_t)mSpd, (float32x2_t)UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).n64_u64[0];
  return vaddv_f32(vmul_f32(v3, v3)) < 1.0e-10;
}


// local variable allocation has failed, the output may be wrong!
void MapScroll__LimitMv(MapScroll_o *this, const MethodInfo *method)
{
  struct MapCamera_o *mMapCamera; // x8
  MapScroll_o *v3; // x19
  float ZoomRate; // s10
  const MethodInfo *v5; // x1
  float x; // s8
  float y; // s9
  float m_XMin; // s4
  float m_YMin; // s5
  float m_Width; // s6
  float m_Height; // s7
  float v12; // s4
  float v13; // s5
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UnityEngine_Vector2_o v16; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o CameraRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera
    || (v3 = this, (this = (MapScroll_o *)mMapCamera->fields.mZoom) == 0)
    || (ZoomRate = MapZoom__GetZoomRate((MapZoom_o *)this, method),
        ScrlPosVec3 = MapScroll__GetScrlPosVec3(v3, v5),
        (this = (MapScroll_o *)v3->fields.mMapCamera) == 0) )
  {
    sub_1C942F0(this, method);
  }
  x = ScrlPosVec3.fields.x;
  y = ScrlPosVec3.fields.y;
  CameraRect = MapCamera__get_CameraRect((MapCamera_o *)this, 0);
  m_XMin = CameraRect.fields.m_XMin;
  m_YMin = CameraRect.fields.m_YMin;
  m_Width = CameraRect.fields.m_Width;
  m_Height = CameraRect.fields.m_Height;
  CameraRect.fields.m_XMin = x;
  CameraRect.fields.m_YMin = y;
  CameraRect.fields.m_Width = m_XMin;
  CameraRect.fields.m_Height = m_YMin;
  v12 = m_Width;
  v13 = m_Height;
  v16 = MapScroll__LimitMv_36885452(
          v3,
          *(UnityEngine_Vector2_o *)&CameraRect.fields.m_XMin,
          *(UnityEngine_Rect_o *)&CameraRect.fields.m_Width,
          -(float)((float)((float)(1.0 - ZoomRate) * 0.124) + 0.001),
          v14);
  MapScroll__SetScrlPos(v3, v16, v15);
}


UnityEngine_Vector2_o MapScroll__LimitMv_36885452(
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
  float v13; // s2
  float y; // s3
  struct MapZoom_o *mZoom; // x9
  float MapBgRateW_k__BackingField; // s2
  float MapBgRateH_k__BackingField; // s3

  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera )
LABEL_19:
    sub_1C942F0(this, method);
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
  if ( (float)(cam_rect.fields.m_Height + cam_rect.fields.m_YMin) <= (float)(m_YMin + m_Height) )
  {
    if ( cam_rect.fields.m_YMin >= m_YMin )
      goto LABEL_12;
    v13 = m_YMin - cam_rect.fields.m_YMin;
  }
  else
  {
    v13 = (float)(m_YMin + m_Height) - (float)(cam_rect.fields.m_Height + cam_rect.fields.m_YMin);
  }
  y = this->fields.mInertiaSpd.fields.y;
  pos.fields.y = pos.fields.y + v13;
  this->fields.mTgt.fields.y = pos.fields.y;
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
      pos.fields.y = 0.0;
      this->fields.mTgt.fields.y = 0.0;
    }
  }
  return pos;
}


void MapScroll__Process(MapScroll_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float x; // s8
  float mAutoMvTime; // s8
  const MethodInfo *v6; // x1
  float deltaTime; // s0
  float mAutoMvDuration; // s2
  float v9; // s5
  float v10; // s6
  const MethodInfo *v11; // x1
  TouchDetectorBase_o *touchDetector; // x0
  float y; // s9
  int v14; // w20
  struct MapTouchDetector_o *v15; // x9
  char v16; // w8
  UnityEngine_Vector2_o TouchCenter; // kr00_8
  struct MapTouchDetector_o *v18; // x8
  UnityEngine_Vector2_o v19; // kr08_8
  struct MapCamera_o *v20; // x8
  struct MapZoom_o *v21; // x8
  float orthographicSize; // s0
  const MethodInfo *v23; // x1
  bool v24; // w0
  float32x2_t v25; // d1
  float UserTotalScrollAmount; // s10
  float v27; // s11
  float v28; // s10
  float v29; // s11
  float v30; // s10
  float v31; // s11
  float v32; // s0
  float v33; // s1
  System_Action_o *mPlaySEAction_Flick; // x0
  float v35; // s5
  UnityEngine_Vector2_c *v36; // x8
  struct UnityEngine_Vector2_o mInertiaSpd; // d1
  float v38; // s0
  float v39; // s11
  float v40; // s11
  struct MapCamera_o *mMapCamera; // x8
  struct MapZoom_o *mZoom; // x8
  float v43; // s0
  float v44; // s1
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x2
  float v48; // s9
  float v49; // s9
  float32x2_t v50; // [xsp+0h] [xbp-60h]
  unsigned __int32 v51; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector2_o mAutoMvEdPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v53; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4D292D9 & 1) == 0 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D292D9 = 1;
  }
  ScrlPosVec3 = MapScroll__GetScrlPosVec3(this, method);
  x = ScrlPosVec3.fields.x;
  if ( this->fields.mAutoMvDuration > 0.0 )
  {
    mAutoMvTime = this->fields.mAutoMvTime;
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    mAutoMvDuration = this->fields.mAutoMvDuration;
    v9 = mAutoMvTime + deltaTime;
    this->fields.mAutoMvTime = mAutoMvTime + deltaTime;
    if ( (float)(mAutoMvTime + deltaTime) >= mAutoMvDuration )
    {
      mAutoMvEdPos = this->fields.mAutoMvEdPos;
      this->fields.mAutoMvDuration = 0.0;
      MapScroll__SetScrlPos(this, mAutoMvEdPos, v6);
      ActionExtensions__Call(this->fields.mAutoMvEndAct, 0);
    }
    else
    {
      v55.fields.x = this->fields.mAutoMvStPos.fields.x;
      v55.fields.y = this->fields.mAutoMvStPos.fields.y;
      v57.fields.x = this->fields.mAutoMvEdPos.fields.x;
      v57.fields.y = this->fields.mAutoMvEdPos.fields.y;
      v10 = v9 / mAutoMvDuration;
      v55.fields.z = 0.0;
      v57.fields.z = 0.0;
      v56 = Easing__Func(v55, v57, v10, this->fields.mAutoMvEaseType, 0);
      MapScroll__SetScrlPos(this, *(UnityEngine_Vector2_o *)&v56.fields.x, v11);
    }
    return;
  }
  touchDetector = (TouchDetectorBase_o *)this->fields.touchDetector;
  if ( !touchDetector )
    goto LABEL_68;
  y = ScrlPosVec3.fields.y;
  touchDetector = (TouchDetectorBase_o *)TouchDetectorBase__get_CurrentTouchCount(touchDetector, 0);
  if ( !(_DWORD)touchDetector )
  {
    this->fields.UserTotalScrollAmount = 0.0;
    if ( !byte_4D25F1A )
    {
      sub_1C94098(&System_Math_TypeInfo);
      byte_4D25F1A = 1;
    }
    v29 = this->fields.mTchDif.fields.x;
    v28 = this->fields.mTchDif.fields.y;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf((float)(v29 * v29) + (float)(v28 * v28)) > 0.0 )
      goto LABEL_34;
    if ( !byte_4D25F1A )
    {
      sub_1C94098(&System_Math_TypeInfo);
      byte_4D25F1A = 1;
    }
    v31 = this->fields.mTchDifOld.fields.x;
    v30 = this->fields.mTchDifOld.fields.y;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf((float)(v31 * v31) + (float)(v30 * v30)) > 0.0 )
    {
LABEL_34:
      v32 = this->fields.mTchDif.fields.x;
      v33 = this->fields.mTchDif.fields.y;
      mPlaySEAction_Flick = this->fields.mPlaySEAction_Flick;
      v35 = this->fields.mInertiaSpd.fields.y;
      if ( (float)((float)(v32 * v32) + (float)(v33 * v33)) < (float)((float)(this->fields.mTchDifOld.fields.x
                                                                            * this->fields.mTchDifOld.fields.x)
                                                                    + (float)(this->fields.mTchDifOld.fields.y
                                                                            * this->fields.mTchDifOld.fields.y)) )
      {
        v33 = this->fields.mTchDifOld.fields.y;
        v32 = this->fields.mTchDifOld.fields.x;
      }
      this->fields.mInertiaSpd.fields.x = this->fields.mInertiaSpd.fields.x + v32;
      this->fields.mInertiaSpd.fields.y = v35 + v33;
      ActionExtensions__Call(mPlaySEAction_Flick, 0);
      if ( !byte_4D25DF9 )
      {
        sub_1C94098(&UnityEngine_Vector2_TypeInfo);
        byte_4D25DF9 = 1;
      }
      v36 = UnityEngine_Vector2_TypeInfo;
      this->fields.mTchDif = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      this->fields.mTchDifOld = v36->static_fields->zeroVector;
    }
    mInertiaSpd = this->fields.mInertiaSpd;
    this->fields.mTgt = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)this->fields.mTgt, (float32x2_t)mInertiaSpd).n64_u64[0];
    v50.n64_u64[0] = (unsigned __int64)mInertiaSpd;
    v38 = ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0);
    v39 = vmuls_n_f32(v38, v50.n64_f32[0]);
    this->fields.mInertiaSpd.fields.x = v39;
    this->fields.mInertiaSpd.fields.y = vmuls_lane_f32(v38, v50, 1);
    touchDetector = (TouchDetectorBase_o *)System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( fabsf(v39) < 0.01 )
    {
      touchDetector = (TouchDetectorBase_o *)System_Math_TypeInfo;
      v40 = this->fields.mInertiaSpd.fields.y;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( fabsf(v40) < 0.01 )
      {
        if ( !byte_4D25DF9 )
        {
          touchDetector = (TouchDetectorBase_o *)sub_1C94098(&UnityEngine_Vector2_TypeInfo);
          byte_4D25DF9 = 1;
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
        v16 = 0;
        goto LABEL_57;
      }
    }
    goto LABEL_68;
  }
  v14 = (int)touchDetector;
  if ( !byte_4D25DF9 )
  {
    touchDetector = (TouchDetectorBase_o *)sub_1C94098(&UnityEngine_Vector2_TypeInfo);
    byte_4D25DF9 = 1;
  }
  v15 = this->fields.touchDetector;
  this->fields.mInertiaSpd = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  if ( !v15 )
    goto LABEL_68;
  v16 = 0;
  if ( (unsigned int)(v14 - 1) <= 1 && v15->fields._PrevTouchInfo_k__BackingField )
  {
    this->fields.mTchDifOld = this->fields.mTchDif;
    touchDetector = (TouchDetectorBase_o *)v15->fields._PrevTouchInfo_k__BackingField;
    if ( touchDetector )
    {
      TouchCenter = TouchDetectorBase_TouchInfo__get_TouchCenter((TouchDetectorBase_TouchInfo_o *)touchDetector, 0);
      v18 = this->fields.touchDetector;
      if ( v18 )
      {
        touchDetector = (TouchDetectorBase_o *)v18->fields._CurrentTouchInfo_k__BackingField;
        if ( touchDetector )
        {
          v19 = TouchDetectorBase_TouchInfo__get_TouchCenter((TouchDetectorBase_TouchInfo_o *)touchDetector, 0);
          v20 = this->fields.mMapCamera;
          this->fields.mTchDif.fields.x = TouchCenter.fields.x - v19.fields.x;
          this->fields.mTchDif.fields.y = TouchCenter.fields.y - v19.fields.y;
          if ( v20 )
          {
            v21 = v20->fields.mZoom;
            if ( v21 )
            {
              touchDetector = (TouchDetectorBase_o *)v21->fields.mCamera;
              if ( touchDetector )
              {
                orthographicSize = UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)touchDetector, 0);
                this->fields.mTchDif.fields.x = (float)(TouchCenter.fields.x - v19.fields.x) * orthographicSize;
                this->fields.mTchDif.fields.y = (float)(TouchCenter.fields.y - v19.fields.y) * orthographicSize;
                v24 = MapScroll__BrakeMv(this, 0.0, v23);
                v25.n64_u64[0] = (unsigned __int64)this->fields.mTchDif;
                if ( v24 )
                {
                  v25.n64_u64[0] = vmul_f32(v25, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
                  this->fields.mTchDif = (struct UnityEngine_Vector2_o)v25.n64_u64[0];
                }
                UserTotalScrollAmount = this->fields.UserTotalScrollAmount;
                this->fields.mTgt = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)this->fields.mTgt, v25).n64_u64[0];
                if ( byte_4D25F1A )
                {
                  v27 = v25.n64_f32[1];
                }
                else
                {
                  sub_1C94098(&System_Math_TypeInfo);
                  byte_4D25F1A = 1;
                  v25.n64_u32[0] = LODWORD(this->fields.mTchDif.fields.x);
                  v27 = this->fields.mTchDif.fields.y;
                }
                if ( !System_Math_TypeInfo->_2.cctor_finished )
                {
                  v51 = v25.n64_u32[0];
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                  v25.n64_u32[0] = v51;
                }
                v16 = 1;
                this->fields.UserTotalScrollAmount = UserTotalScrollAmount
                                                   + fabsf(sqrtf((float)(v25.n64_f32[0] * v25.n64_f32[0]) + (float)(v27 * v27)));
                goto LABEL_57;
              }
            }
          }
        }
      }
    }
LABEL_68:
    sub_1C942F0(touchDetector, v3);
  }
LABEL_57:
  v43 = this->fields.mTgt.fields.x - x;
  v44 = this->fields.mTgt.fields.y - y;
  this->fields.mSpd.fields.x = v43;
  this->fields.mSpd.fields.y = v44;
  if ( (v16 & 1) == 0 )
  {
    v43 = v43 * 0.75;
    v44 = v44 * 0.75;
    this->fields.mSpd.fields.x = v43;
    this->fields.mSpd.fields.y = v44;
  }
  v53.fields.x = x + v43;
  v53.fields.y = y + v44;
  MapScroll__SetScrlPos(this, v53, v3);
  if ( !MapScroll__IsStop(this, v45) )
  {
    v48 = this->fields.mSpd.fields.x;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( fabsf(v48) < 0.01 )
    {
      v49 = this->fields.mSpd.fields.y;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( fabsf(v49) < 0.01 )
        MapScroll__Stop(this, 1, v47);
    }
  }
  MapScroll__LimitMv(this, v46);
}


void MapScroll__SetScrlPos(MapScroll_o *this, UnityEngine_Vector2_o pos, const MethodInfo *method)
{
  UnityEngine_Component_o *mCamera; // x0
  float y; // s8
  float x; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector2_o v7; // 0:s0.4,4:s1.4

  mCamera = (UnityEngine_Component_o *)this->fields.mCamera;
  if ( !mCamera )
    sub_1C942F0(0, method);
  y = pos.fields.y;
  x = pos.fields.x;
  gameObject = UnityEngine_Component__get_gameObject(mCamera, 0);
  v7.fields.x = x;
  v7.fields.y = y;
  GameObjectExtensions__SetLocalPosition_36798708(gameObject, v7, 0);
}


void MapScroll__SetScrlTgtPos(MapScroll_o *this, UnityEngine_Vector2_o pos, const MethodInfo *method)
{
  this->fields.mTgt = pos;
}


// local variable allocation has failed, the output may be wrong!
void MapScroll__StartAutoMove(
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.mTgt.fields.x = screenPos.fields.x;
  this->fields.mTgt.fields.y = screenPos.fields.y;
  if ( !byte_4D25DF9 )
  {
    sub_1C94098(&UnityEngine_Vector2_TypeInfo);
    byte_4D25DF9 = 1;
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_mAutoMvEndAct, (int32_t)endAct, v14, v15, v16, v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
void MapScroll__Stop(MapScroll_o *this, bool is_force, const MethodInfo *method)
{
  if ( is_force )
  {
    MapScroll__SetScrlPos(this, this->fields.mTgt, (const MethodInfo *)is_force);
    if ( !byte_4D25DF9 )
    {
      sub_1C94098(&UnityEngine_Vector2_TypeInfo);
      byte_4D25DF9 = 1;
    }
    this->fields.mSpd = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  }
  else if ( !byte_4D25DF9 )
  {
    sub_1C94098(&UnityEngine_Vector2_TypeInfo);
    byte_4D25DF9 = 1;
  }
  this->fields.mInertiaSpd = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
}


void MapScroll__UnInit(MapScroll_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  this->fields.mMapCamera = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v2, v3, v4, v5, v6, v7);
  this->fields.touchDetector = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.touchDetector, 0, v9, v10, v11, v12, v13, v14);
}