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
    sub_2213CDC(0, method);
  CameraRect = MapCamera__get_CameraRect(mMapCamera, 0);
  return MapScroll__BrakeMv_42982384(this, CameraRect, spd_rate, v6);
}


bool MapScroll__BrakeMv_42982384(
        MapScroll_o *this,
        UnityEngine_Rect_o cam_rect,
        float spd_rate,
        const MethodInfo *method)
{
  struct MapCamera_o *mMapCamera; // x8
  float m_YMin; // s7
  float m_Width; // s17
  float m_Height; // s16
  float y; // s5
  float x; // s6
  float m_XMin; // s18
  float v11; // s0
  float v12; // s0
  float v13; // s0
  bool v14; // w8

  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera )
    sub_2213CDC(this, method);
  m_YMin = mMapCamera->fields.mMvBrakeRect.fields.m_YMin;
  m_Width = mMapCamera->fields.mMvBrakeRect.fields.m_Width;
  m_Height = mMapCamera->fields.mMvBrakeRect.fields.m_Height;
  x = this->fields.mTgt.fields.x;
  y = this->fields.mTgt.fields.y;
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
    sub_2213CDC(0, method);
  gameObject = UnityEngine_Component__get_gameObject(mCamera, 0);
  return GameObjectExtensions__GetLocalPosition(gameObject, 0);
}


UnityEngine_Vector2_o MapScroll__GetScrlTgtPos(MapScroll_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  result.fields.x = this->fields.mTgt.fields.x;
  result.fields.y = this->fields.mTgt.fields.y;
  return result;
}


void MapScroll__Init(MapScroll_o *this, MapCamera_o *mc, MapTouchDetector_o *touchDetector, const MethodInfo *method)
{
  UnityEngine_Object_o *mMapCamera; // x23
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
  struct UnityEngine_Camera_o *mCamera; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_596D130 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D130 = 1;
  }
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mc, touchDetector);
  if ( UnityEngine_Object__op_Inequality(mMapCamera, 0, 0) )
  {
    this->fields.mMapCamera = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v8, v9, v10, v11, v12, v13);
    this->fields.touchDetector = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.touchDetector, 0, v14, v15, v16, v17, v18, v19);
  }
  this->fields.mMapCamera = mc;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)mc, v8, v9, v10, v11, v12, v13);
  if ( !mc )
    sub_2213CDC(v20, v21);
  mCamera = mc->fields.mCamera;
  this->fields.mCamera = mCamera;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mCamera, (int32_t)mCamera, v22, v23, v24, v25, v26, v27);
  this->fields.touchDetector = touchDetector;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.touchDetector,
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
  if ( !byte_59699C0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  v3.n64_u64[0] = vsub_f32((float32x2_t)mSpd, (float32x2_t)UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).n64_u64[0];
  return vaddv_f32(vmul_f32(v3, v3)) < 1.0e-10;
}


void MapScroll__LimitMv(MapScroll_o *this, const MethodInfo *method)
{
  struct MapCamera_o *mMapCamera; // x8
  MapScroll_o *v3; // x19
  float ZoomRate; // s10
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  unsigned __int64 ScrlPosVec3; // kr00_8
  UnityEngine_Rect_o CameraRect; // 0:kr10_16.16
  UnityEngine_Vector2_o v10; // 0:s0.4,4:s1.4

  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera
    || (v3 = this, (this = (MapScroll_o *)mMapCamera->fields.mZoom) == 0)
    || (ZoomRate = MapZoom__GetZoomRate((MapZoom_o *)this, method),
        ScrlPosVec3 = (unsigned __int64)MapScroll__GetScrlPosVec3(v3, v5),
        (this = (MapScroll_o *)v3->fields.mMapCamera) == 0) )
  {
    sub_2213CDC(this, method);
  }
  CameraRect = MapCamera__get_CameraRect((MapCamera_o *)this, 0);
  v10 = MapScroll__LimitMv_42982728(
          v3,
          (UnityEngine_Vector2_o)ScrlPosVec3,
          CameraRect,
          -(float)((float)((float)(1.0 - ZoomRate) * 0.124) + 0.001),
          v6);
  MapScroll__SetScrlPos(v3, v10, v7);
}


UnityEngine_Vector2_o MapScroll__LimitMv_42982728(
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
  float v12; // s2
  float v13; // s2
  float v14; // s2
  struct MapZoom_o *mZoom; // x9
  float MapBgRateW_k__BackingField; // s2
  float MapBgRateH_k__BackingField; // s3

  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera )
LABEL_19:
    sub_2213CDC(this, method);
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
  pos.fields.x = pos.fields.x + v9;
  v12 = this->fields.mInertiaSpd.fields.x * rebound_rate;
  this->fields.mTgt.fields.x = pos.fields.x;
  this->fields.mInertiaSpd.fields.x = v12;
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
  pos.fields.y = pos.fields.y + v13;
  v14 = this->fields.mInertiaSpd.fields.y * rebound_rate;
  this->fields.mTgt.fields.y = pos.fields.y;
  this->fields.mInertiaSpd.fields.y = v14;
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
  float mAutoMvTime; // s8
  const MethodInfo *v4; // x1
  float v5; // s0
  float mAutoMvDuration; // s1
  float v7; // s6
  const MethodInfo *v8; // x1
  __int64 touchDetector; // x0
  __int64 v10; // x2
  int v11; // w20
  struct MapTouchDetector_o *v12; // x8
  UnityEngine_Vector2_o TouchCenter; // kr20_8
  struct MapTouchDetector_o *v14; // x8
  UnityEngine_Vector2_o v15; // kr28_8
  struct MapCamera_o *mMapCamera; // x8
  struct MapZoom_o *mZoom; // x8
  float orthographicSize; // s0
  const MethodInfo *v19; // x1
  bool v20; // w0
  __int64 v21; // x2
  float y; // s2
  float x; // s3
  int v24; // w8
  float UserTotalScrollAmount; // s10
  float v26; // s0
  struct UnityEngine_Vector2_o *p_mSpd; // x21
  struct UnityEngine_Vector2_o *v28; // x20
  float v29; // s1
  struct UnityEngine_Vector2_o mTchDif; // d10
  struct UnityEngine_Vector2_o mTchDifOld; // d10
  struct UnityEngine_Vector2_o v32; // d0
  struct UnityEngine_Vector2_o v33; // d1
  System_Action_o *mPlaySEAction_Flick; // x0
  int32x2_t v35; // d2
  int32x2_t v36; // d3
  int32x2_t v37; // d2
  UnityEngine_Vector2_c *v38; // x8
  struct UnityEngine_Vector2_o mInertiaSpd; // d10
  __int64 v40; // x2
  float v41; // s0
  struct UnityEngine_Vector2_o v42; // d0
  float v43; // s11
  struct MapCamera_o *v44; // x8
  struct MapZoom_o *v45; // x8
  float *p_y; // x20
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x2
  float v50; // s8
  float v51; // s9
  const MethodInfo *v52; // x1
  unsigned __int64 ScrlPosVec3; // kr00_8
  float v54; // [xsp+0h] [xbp-70h]
  float v55; // [xsp+10h] [xbp-60h]
  float v56; // [xsp+10h] [xbp-60h]
  UnityEngine_Vector2_o mAutoMvEdPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v58; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v59; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_596D131 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596D131 = 1;
  }
  ScrlPosVec3 = (unsigned __int64)MapScroll__GetScrlPosVec3(this, method);
  if ( this->fields.mAutoMvDuration > 0.0 )
  {
    mAutoMvTime = this->fields.mAutoMvTime;
    v5 = mAutoMvTime + UnityEngine_Time__get_deltaTime(0);
    mAutoMvDuration = this->fields.mAutoMvDuration;
    this->fields.mAutoMvTime = v5;
    if ( v5 >= mAutoMvDuration )
    {
      mAutoMvEdPos = this->fields.mAutoMvEdPos;
      this->fields.mAutoMvDuration = 0.0;
      MapScroll__SetScrlPos(this, mAutoMvEdPos, v4);
      ActionExtensions__Call(this->fields.mAutoMvEndAct, 0);
    }
    else
    {
      v7 = v5 / mAutoMvDuration;
      v60.fields.z = 0.0;
      v61.fields.z = 0.0;
      v60.fields.x = this->fields.mAutoMvStPos.fields.x;
      v60.fields.y = this->fields.mAutoMvStPos.fields.y;
      v61.fields.x = this->fields.mAutoMvEdPos.fields.x;
      v61.fields.y = this->fields.mAutoMvEdPos.fields.y;
      v59 = (UnityEngine_Vector2_o)Easing__Func(v60, v61, v7, this->fields.mAutoMvEaseType, 0);
      MapScroll__SetScrlPos(this, v59, v8);
    }
    return;
  }
  touchDetector = (__int64)this->fields.touchDetector;
  if ( !touchDetector )
    goto LABEL_63;
  touchDetector = TouchDetectorBase__get_CurrentTouchCount((TouchDetectorBase_o *)touchDetector, 0);
  if ( (_DWORD)touchDetector )
  {
    v11 = touchDetector;
    if ( !byte_59699C0 )
    {
      touchDetector = sub_2213A60(&UnityEngine_Vector2_TypeInfo);
      byte_59699C0 = 1;
    }
    v12 = this->fields.touchDetector;
    this->fields.mInertiaSpd = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
    if ( !v12 )
      goto LABEL_63;
    if ( (unsigned int)(v11 - 3) >= 0xFFFFFFFE && v12->fields._PrevTouchInfo_k__BackingField )
    {
      this->fields.mTchDifOld = this->fields.mTchDif;
      touchDetector = (__int64)v12->fields._PrevTouchInfo_k__BackingField;
      if ( touchDetector )
      {
        TouchCenter = TouchDetectorBase_TouchInfo__get_TouchCenter((TouchDetectorBase_TouchInfo_o *)touchDetector, 0);
        v14 = this->fields.touchDetector;
        if ( v14 )
        {
          touchDetector = (__int64)v14->fields._CurrentTouchInfo_k__BackingField;
          if ( touchDetector )
          {
            v15 = TouchDetectorBase_TouchInfo__get_TouchCenter((TouchDetectorBase_TouchInfo_o *)touchDetector, 0);
            mMapCamera = this->fields.mMapCamera;
            this->fields.mTchDif.fields.x = TouchCenter.fields.x - v15.fields.x;
            this->fields.mTchDif.fields.y = TouchCenter.fields.y - v15.fields.y;
            if ( mMapCamera )
            {
              mZoom = mMapCamera->fields.mZoom;
              if ( mZoom )
              {
                touchDetector = (__int64)mZoom->fields.mCamera;
                if ( touchDetector )
                {
                  orthographicSize = UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)touchDetector, 0);
                  this->fields.mTchDif.fields.x = (float)(TouchCenter.fields.x - v15.fields.x) * orthographicSize;
                  this->fields.mTchDif.fields.y = (float)(TouchCenter.fields.y - v15.fields.y) * orthographicSize;
                  v20 = MapScroll__BrakeMv(this, 0.0, v19);
                  y = this->fields.mTchDif.fields.y;
                  if ( v20 )
                  {
                    y = y * 0.5;
                    this->fields.mTchDif.fields.x = this->fields.mTchDif.fields.x * 0.5;
                    this->fields.mTchDif.fields.y = y;
                  }
                  x = this->fields.mTchDif.fields.x;
                  v24 = (unsigned __int8)byte_5969AE1;
                  UserTotalScrollAmount = this->fields.UserTotalScrollAmount;
                  this->fields.mTgt = (struct UnityEngine_Vector2_o)vadd_f32(
                                                                      (float32x2_t)this->fields.mTgt,
                                                                      (float32x2_t)__PAIR64__(LODWORD(y), LODWORD(x))).n64_u64[0];
                  if ( !v24 )
                  {
                    sub_2213A60(&System_Math_TypeInfo);
                    x = this->fields.mTchDif.fields.x;
                    y = this->fields.mTchDif.fields.y;
                    byte_5969AE1 = 1;
                  }
                  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                  {
                    v54 = x;
                    v55 = y;
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v52, v21);
                    x = v54;
                    y = v55;
                  }
                  v26 = this->fields.mTgt.fields.x - *(float *)&ScrlPosVec3;
                  this->fields.mSpd.fields.x = v26;
                  p_mSpd = &this->fields.mSpd;
                  v28 = &this->fields.mSpd;
                  v29 = this->fields.mTgt.fields.y - *((float *)&ScrlPosVec3 + 1);
                  this->fields.UserTotalScrollAmount = UserTotalScrollAmount
                                                     + fabsf(sqrtf((float)(x * x) + (float)(y * y)));
                  goto LABEL_54;
                }
              }
            }
          }
        }
      }
LABEL_63:
      sub_2213CDC(touchDetector, v52);
    }
  }
  else
  {
    this->fields.UserTotalScrollAmount = 0.0;
    if ( !byte_5969AE1 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969AE1 = 1;
    }
    mTchDif = this->fields.mTchDif;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v52, v10);
    if ( sqrtf(vaddv_f32(vmul_f32((float32x2_t)mTchDif, (float32x2_t)mTchDif))) > 0.0 )
      goto LABEL_37;
    if ( !byte_5969AE1 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969AE1 = 1;
    }
    mTchDifOld = this->fields.mTchDifOld;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v52, v10);
    if ( sqrtf(vaddv_f32(vmul_f32((float32x2_t)mTchDifOld, (float32x2_t)mTchDifOld))) > 0.0 )
    {
LABEL_37:
      v32 = this->fields.mTchDif;
      v33 = this->fields.mTchDifOld;
      mPlaySEAction_Flick = this->fields.mPlaySEAction_Flick;
      v35.n64_u64[0] = vmul_f32((float32x2_t)v32, (float32x2_t)v32).n64_u64[0];
      v36.n64_u64[0] = vmul_f32((float32x2_t)v33, (float32x2_t)v33).n64_u64[0];
      v37.n64_u64[0] = vadd_f32(vzip1_s32(v35, v36), vzip2_s32(v35, v36)).n64_u64[0];
      this->fields.mInertiaSpd = (struct UnityEngine_Vector2_o)vadd_f32(
                                                                 vbsl_s8(
                                                                   vdup_lane_s32(
                                                                     vcgt_f32(vdup_lane_s32(v37, 1), v37),
                                                                     0),
                                                                   (int8x8_t)v33,
                                                                   (int8x8_t)v32),
                                                                 (float32x2_t)this->fields.mInertiaSpd).n64_u64[0];
      ActionExtensions__Call(mPlaySEAction_Flick, 0);
      if ( !byte_59699C0 )
      {
        sub_2213A60(&UnityEngine_Vector2_TypeInfo);
        byte_59699C0 = 1;
      }
      v38 = UnityEngine_Vector2_TypeInfo;
      this->fields.mTchDif = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      this->fields.mTchDifOld = v38->static_fields->zeroVector;
    }
    mInertiaSpd = this->fields.mInertiaSpd;
    this->fields.mTgt = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)this->fields.mTgt, (float32x2_t)mInertiaSpd).n64_u64[0];
    v41 = ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0);
    touchDetector = (__int64)System_Math_TypeInfo;
    v42 = (struct UnityEngine_Vector2_o)vmul_n_f32((float32x2_t)mInertiaSpd, v41).n64_u64[0];
    this->fields.mInertiaSpd = v42;
    if ( !*(_DWORD *)(touchDetector + 228) )
    {
      v56 = v42.fields.x;
      j_il2cpp_runtime_class_init_0(touchDetector, v52, v40);
      v42.fields.x = v56;
    }
    if ( fabsf(v42.fields.x) < 0.01 )
    {
      touchDetector = (__int64)System_Math_TypeInfo;
      v43 = this->fields.mInertiaSpd.fields.y;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v52, v40);
      if ( fabsf(v43) < 0.01 )
      {
        if ( !byte_59699C0 )
        {
          touchDetector = sub_2213A60(&UnityEngine_Vector2_TypeInfo);
          byte_59699C0 = 1;
        }
        this->fields.mInertiaSpd = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      }
    }
    v44 = this->fields.mMapCamera;
    if ( !v44 )
      goto LABEL_63;
    v45 = v44->fields.mZoom;
    if ( !v45 )
      goto LABEL_63;
    if ( !v45->fields._IsZoomMaxFitPosFix_k__BackingField )
      MapScroll__BrakeMv(this, 0.45, v52);
  }
  v26 = (float)(this->fields.mTgt.fields.x - *(float *)&ScrlPosVec3) * 0.75;
  this->fields.mSpd.fields.x = v26;
  p_mSpd = &this->fields.mSpd;
  v28 = &this->fields.mSpd;
  v29 = (float)(this->fields.mTgt.fields.y - *((float *)&ScrlPosVec3 + 1)) * 0.75;
LABEL_54:
  v28->fields.y = v29;
  p_y = &v28->fields.y;
  v58.fields.x = *(float *)&ScrlPosVec3 + v26;
  v58.fields.y = *((float *)&ScrlPosVec3 + 1) + v29;
  MapScroll__SetScrlPos(this, v58, v52);
  if ( !MapScroll__IsStop(this, v47) )
  {
    v50 = p_mSpd->fields.x;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v48, v49);
    if ( fabsf(v50) < 0.01 )
    {
      v51 = *p_y;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v48, v49);
      if ( fabsf(v51) < 0.01 )
        MapScroll__Stop(this, 1, v49);
    }
  }
  MapScroll__LimitMv(this, v48);
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
    sub_2213CDC(0, method);
  y = pos.fields.y;
  x = pos.fields.x;
  gameObject = UnityEngine_Component__get_gameObject(mCamera, 0);
  v7.fields.x = x;
  v7.fields.y = y;
  GameObjectExtensions__SetLocalPosition_42891412(gameObject, v7, 0);
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
  int v8; // w8
  UnityEngine_Vector2_c *v11; // x8
  struct UnityEngine_Vector2_o zeroVector; // d0
  struct System_Action_o **p_mAutoMvEndAct; // x20
  struct System_Action_o *v14; // x8
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  unsigned __int64 ScrlPosVec3; // kr00_8

  v8 = (unsigned __int8)byte_59699C0;
  this->fields.mTgt.fields.x = screenPos.fields.x;
  this->fields.mTgt.fields.y = screenPos.fields.y;
  if ( !v8 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  v11 = UnityEngine_Vector2_TypeInfo;
  this->fields.mTchDif = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.mTchDifOld = v11->static_fields->zeroVector;
  zeroVector = v11->static_fields->zeroVector;
  this->fields.mAutoMvTime = 0.0;
  this->fields.mAutoMvDuration = sec;
  this->fields.mInertiaSpd = zeroVector;
  ScrlPosVec3 = (unsigned __int64)MapScroll__GetScrlPosVec3(this, *(const MethodInfo **)&easeType);
  this->fields.mAutoMvEndAct = endAct;
  p_mAutoMvEndAct = &this->fields.mAutoMvEndAct;
  v14 = *(p_mAutoMvEndAct - 12);
  *(p_mAutoMvEndAct - 4) = (struct System_Action_o *)ScrlPosVec3;
  *(p_mAutoMvEndAct - 3) = v14;
  *((_DWORD *)p_mAutoMvEndAct - 2) = easeType;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mAutoMvEndAct, (int32_t)endAct, v15, v16, v17, v18, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
void MapScroll__Stop(MapScroll_o *this, bool is_force, const MethodInfo *method)
{
  if ( is_force )
  {
    MapScroll__SetScrlPos(this, this->fields.mTgt, (const MethodInfo *)is_force);
    if ( !byte_59699C0 )
    {
      sub_2213A60(&UnityEngine_Vector2_TypeInfo);
      byte_59699C0 = 1;
    }
    this->fields.mSpd = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  }
  else if ( !byte_59699C0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  this->fields.mInertiaSpd = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
}


void MapScroll__UnInit(MapScroll_o *this, const MethodInfo *method)
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v2, v3, v4, v5, v6, v7);
  this->fields.touchDetector = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.touchDetector, 0, v9, v10, v11, v12, v13, v14);
}