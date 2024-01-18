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
    sub_B2C434(0LL, method);
  CameraRect = MapCamera__get_CameraRect(mMapCamera, 0LL);
  return MapScroll__BrakeMv_21014696(this, CameraRect, spd_rate, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapScroll__BrakeMv_21014696(
        MapScroll_o *this,
        UnityEngine_Rect_o cam_rect,
        float spd_rate,
        const MethodInfo *method)
{
  struct MapCamera_o *mMapCamera; // x8
  float y; // s10
  float x; // s11
  float m_XMin; // s9
  float width; // s0
  float v14; // s9
  float xMin; // s0
  float v19; // s9
  float xMax; // s0
  float v21; // s9
  float v22; // s9
  float height; // s0
  float v27; // s9
  float yMax; // s0
  float v32; // s9
  float v33; // s0
  float v34; // s9
  float yMin; // s0
  bool result; // w0
  struct UnityEngine_Rect_o mMvBrakeRect; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Rect_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  methoda.methodPointer = *(Il2CppMethodPointer *)&cam_rect.fields.m_XMin;
  methoda.invoker_method = *(void **)&cam_rect.fields.m_Width;
  mMvBrakeRect = (struct UnityEngine_Rect_o)0LL;
  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera )
    sub_B2C434(this, method);
  x = this->fields.mTgt.fields.x;
  y = this->fields.mTgt.fields.y;
  mMvBrakeRect = mMapCamera->fields.mMvBrakeRect;
  v42.fields.m_XMin = mMvBrakeRect.fields.m_XMin;
  v43.fields.m_XMin = UnityEngine_Rect__get_width(v42, &methoda);
  m_XMin = v43.fields.m_XMin;
  width = UnityEngine_Rect__get_width(v43, (const MethodInfo *)&mMvBrakeRect);
  if ( m_XMin >= width )
    goto LABEL_10;
  v44.fields.m_XMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&width, &methoda);
  v14 = v44.fields.m_XMin;
  xMin = UnityEngine_Rect__get_xMin(v44, (const MethodInfo *)&mMvBrakeRect);
  if ( v14 < xMin )
  {
    if ( spd_rate <= 0.0 )
      return 1;
    v45.fields.m_XMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&xMin, (const MethodInfo *)&mMvBrakeRect);
    v19 = v45.fields.m_XMin;
    xMax = UnityEngine_Rect__get_xMin(v45, &methoda);
    goto LABEL_9;
  }
  v46.fields.m_XMin = UnityEngine_Rect__get_xMax(*(UnityEngine_Rect_o *)&xMin, &methoda);
  v21 = v46.fields.m_XMin;
  width = UnityEngine_Rect__get_xMax(v46, (const MethodInfo *)&mMvBrakeRect);
  if ( v21 > width )
  {
    if ( spd_rate <= 0.0 )
      return 1;
    v47.fields.m_XMin = UnityEngine_Rect__get_xMax(*(UnityEngine_Rect_o *)&width, (const MethodInfo *)&mMvBrakeRect);
    v19 = v47.fields.m_XMin;
    xMax = UnityEngine_Rect__get_xMax(v47, &methoda);
LABEL_9:
    width = (float)(v19 - xMax) * spd_rate;
    x = x + width;
  }
LABEL_10:
  v48.fields.m_XMin = UnityEngine_Rect__get_height(*(UnityEngine_Rect_o *)&width, &methoda);
  v22 = v48.fields.m_XMin;
  height = UnityEngine_Rect__get_height(v48, (const MethodInfo *)&mMvBrakeRect);
  if ( v22 >= height )
    goto LABEL_18;
  v49.fields.m_XMin = UnityEngine_Rect__get_yMax(*(UnityEngine_Rect_o *)&height, &methoda);
  v27 = v49.fields.m_XMin;
  yMax = UnityEngine_Rect__get_yMax(v49, (const MethodInfo *)&mMvBrakeRect);
  if ( v27 > yMax )
  {
    if ( spd_rate > 0.0 )
    {
      v50.fields.m_XMin = UnityEngine_Rect__get_yMax(*(UnityEngine_Rect_o *)&yMax, (const MethodInfo *)&mMvBrakeRect);
      v32 = v50.fields.m_XMin;
      v33 = UnityEngine_Rect__get_yMax(v50, &methoda);
LABEL_17:
      y = y + (float)((float)(v32 - v33) * spd_rate);
      goto LABEL_18;
    }
    return 1;
  }
  v51.fields.m_XMin = UnityEngine_Rect__get_yMin(*(UnityEngine_Rect_o *)&yMax, &methoda);
  v34 = v51.fields.m_XMin;
  yMin = UnityEngine_Rect__get_yMin(v51, (const MethodInfo *)&mMvBrakeRect);
  if ( v34 >= yMin )
  {
LABEL_18:
    result = 0;
    this->fields.mTgt.fields.x = x;
    this->fields.mTgt.fields.y = y;
    return result;
  }
  if ( spd_rate > 0.0 )
  {
    v52.fields.m_XMin = UnityEngine_Rect__get_yMin(*(UnityEngine_Rect_o *)&yMin, (const MethodInfo *)&mMvBrakeRect);
    v32 = v52.fields.m_XMin;
    v33 = UnityEngine_Rect__get_yMin(v52, &methoda);
    goto LABEL_17;
  }
  return 1;
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
    sub_B2C434(0LL, method);
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
  __int64 v8; // x0
  __int64 v9; // x1
  struct UnityEngine_Camera_o *mCamera; // x1

  if ( (byte_41858D9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, mc);
    byte_41858D9 = 1;
  }
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mMapCamera, 0LL, 0LL) )
  {
    this->fields.mMapCamera = 0LL;
    sub_B2C2F8(&this->fields, 0LL);
    this->fields.touchDetector = 0LL;
    sub_B2C2F8(&this->fields.touchDetector, 0LL);
  }
  this->fields.mMapCamera = mc;
  sub_B2C2F8(&this->fields, mc);
  if ( !mc )
    sub_B2C434(v8, v9);
  mCamera = mc->fields.mCamera;
  this->fields.mCamera = mCamera;
  sub_B2C2F8(&this->fields.mCamera, mCamera);
  this->fields.touchDetector = touchDetector;
  sub_B2C2F8(&this->fields.touchDetector, touchDetector);
}


bool __fastcall MapScroll__IsStop(MapScroll_o *this, const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  UnityEngine_Vector2_o zero; // kr00_8

  x = this->fields.mSpd.fields.x;
  y = this->fields.mSpd.fields.y;
  zero = UnityEngine_Vector2__get_zero(0LL);
  return (float)((float)((float)(x - zero.fields.x) * (float)(x - zero.fields.x))
               + (float)((float)(y - zero.fields.y) * (float)(y - zero.fields.y))) < 1.0e-10;
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
    sub_B2C434(this, method);
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
  v18 = MapScroll__LimitMv_21015372(
          v3,
          *(UnityEngine_Vector2_o *)&CameraRect.fields.m_XMin,
          *(UnityEngine_Rect_o *)&CameraRect.fields.m_Width,
          -(float)((float)((float)(1.0 - ZoomRate) * 0.124) + 0.001),
          v16);
  MapScroll__SetScrlPos(v3, v18, v17);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall MapScroll__LimitMv_21015372(
        MapScroll_o *this,
        UnityEngine_Vector2_o pos,
        UnityEngine_Rect_o cam_rect,
        float rebound_rate,
        const MethodInfo *method)
{
  struct MapCamera_o *mMapCamera; // x8
  float x; // s9
  float y; // s8
  float m_XMin; // s11
  float xMin; // s0
  float v15; // s11
  float v16; // s0
  int v17; // s2
  float v19; // s11
  float xMax; // s0
  float v21; // s1
  float v22; // s11
  float yMax; // s0
  float v27; // s11
  float v28; // s0
  float v29; // s11
  float yMin; // s0
  float v34; // s1
  struct MapCamera_o *v35; // x8
  struct MapZoom_o *mZoom; // x9
  float MapBgRateW_k__BackingField; // s0
  float MapBgRateH_k__BackingField; // s1
  float v39; // s0
  float v40; // s1
  struct UnityEngine_Rect_o mMvLimitRect; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  methoda.methodPointer = *(Il2CppMethodPointer *)&cam_rect.fields.m_XMin;
  methoda.invoker_method = *(void **)&cam_rect.fields.m_Width;
  mMvLimitRect = (struct UnityEngine_Rect_o)0LL;
  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera )
LABEL_20:
    sub_B2C434(this, method);
  x = pos.fields.x;
  y = pos.fields.y;
  mMvLimitRect = mMapCamera->fields.mMvLimitRect;
  pos.fields.x = mMvLimitRect.fields.m_XMin;
  v44.fields.m_XMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&pos.fields.x, &methoda);
  m_XMin = v44.fields.m_XMin;
  xMin = UnityEngine_Rect__get_xMin(v44, (const MethodInfo *)&mMvLimitRect);
  if ( m_XMin >= xMin )
  {
    v46.fields.m_XMin = UnityEngine_Rect__get_xMax(*(UnityEngine_Rect_o *)&xMin, &methoda);
    v19 = v46.fields.m_XMin;
    xMax = UnityEngine_Rect__get_xMax(v46, (const MethodInfo *)&mMvLimitRect);
    if ( v19 <= xMax )
      goto LABEL_7;
    v47.fields.m_XMin = UnityEngine_Rect__get_xMax(*(UnityEngine_Rect_o *)(&v17 - 2), (const MethodInfo *)&mMvLimitRect);
    v15 = v47.fields.m_XMin;
    v16 = UnityEngine_Rect__get_xMax(v47, &methoda);
  }
  else
  {
    v45.fields.m_XMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&xMin, (const MethodInfo *)&mMvLimitRect);
    v15 = v45.fields.m_XMin;
    v16 = UnityEngine_Rect__get_xMin(v45, &methoda);
  }
  v21 = this->fields.mInertiaSpd.fields.x;
  x = x + (float)(v15 - v16);
  this->fields.mTgt.fields.x = x;
  xMax = v21 * rebound_rate;
  this->fields.mInertiaSpd.fields.x = v21 * rebound_rate;
LABEL_7:
  v48.fields.m_XMin = UnityEngine_Rect__get_yMax(*(UnityEngine_Rect_o *)(&v17 - 2), &methoda);
  v22 = v48.fields.m_XMin;
  yMax = UnityEngine_Rect__get_yMax(v48, (const MethodInfo *)&mMvLimitRect);
  if ( v22 > yMax )
  {
    v49.fields.m_XMin = UnityEngine_Rect__get_yMax(*(UnityEngine_Rect_o *)&yMax, (const MethodInfo *)&mMvLimitRect);
    v27 = v49.fields.m_XMin;
    v28 = UnityEngine_Rect__get_yMax(v49, &methoda);
LABEL_11:
    v34 = this->fields.mInertiaSpd.fields.y;
    y = y + (float)(v27 - v28);
    this->fields.mTgt.fields.y = y;
    this->fields.mInertiaSpd.fields.y = v34 * rebound_rate;
    goto LABEL_12;
  }
  v50.fields.m_XMin = UnityEngine_Rect__get_yMin(*(UnityEngine_Rect_o *)&yMax, &methoda);
  v29 = v50.fields.m_XMin;
  yMin = UnityEngine_Rect__get_yMin(v50, (const MethodInfo *)&mMvLimitRect);
  if ( v29 < yMin )
  {
    v51.fields.m_XMin = UnityEngine_Rect__get_yMin(*(UnityEngine_Rect_o *)&yMin, (const MethodInfo *)&mMvLimitRect);
    v27 = v51.fields.m_XMin;
    v28 = UnityEngine_Rect__get_yMin(v51, &methoda);
    goto LABEL_11;
  }
LABEL_12:
  v35 = this->fields.mMapCamera;
  if ( !v35 )
    goto LABEL_20;
  mZoom = v35->fields.mZoom;
  if ( !mZoom )
    goto LABEL_20;
  if ( mZoom->fields._IsZoomMaxFitPosFix_k__BackingField )
  {
    MapBgRateW_k__BackingField = v35->fields._MapBgRateW_k__BackingField;
    MapBgRateH_k__BackingField = v35->fields._MapBgRateH_k__BackingField;
    if ( MapBgRateW_k__BackingField <= MapBgRateH_k__BackingField )
    {
      x = 0.0;
      this->fields.mTgt.fields.x = 0.0;
    }
    if ( MapBgRateW_k__BackingField >= MapBgRateH_k__BackingField )
    {
      y = 0.0;
      this->fields.mTgt.fields.y = 0.0;
    }
  }
  v39 = x;
  v40 = y;
  result.fields.y = v40;
  result.fields.x = v39;
  return result;
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
  TouchDetectorBase_o *touchDetector; // x0
  float v15; // s9
  int32_t CurrentTouchCount; // w0
  int v17; // s0
  int32_t v19; // w20
  struct UnityEngine_Vector2_o zero; // kr00_8
  struct MapTouchDetector_o *v21; // x8
  UnityEngine_Vector2_o TouchCenter; // kr08_8
  struct MapTouchDetector_o *v23; // x8
  UnityEngine_Vector2_o v24; // kr10_8
  struct MapCamera_o *mMapCamera; // x8
  struct MapZoom_o *mZoom; // x8
  float orthographicSize; // s0
  const MethodInfo *v28; // x1
  bool v29; // w0
  float32x2_t v30; // d0
  struct UnityEngine_Vector2_o mTgt; // d1 OVERLAPPED
  float UserTotalScrollAmount; // s10
  struct UnityEngine_Vector2_o v33; // d0
  float magnitude; // s0
  char v35; // w8
  float v36; // s0
  struct UnityEngine_Vector2_o mTchDifOld; // d0
  System_Action_o *mPlaySEAction_Flick; // x0
  float32x2_t v40; // d1
  float v41; // s0
  float v42; // s10
  float v43; // s10
  struct MapCamera_o *v44; // x8
  struct MapZoom_o *v45; // x8
  float v46; // s0
  float v47; // s1
  float x; // s8
  float v49; // s9
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x2
  UnityEngine_Vector2_o v52; // kr30_8
  float v53; // s9
  float v54; // s9
  float v55; // [xsp+0h] [xbp-60h]
  float y; // [xsp+10h] [xbp-50h]
  struct UnityEngine_Vector2_o mTchDif; // [xsp+28h] [xbp-38h] BYREF
  UnityEngine_Vector2_o mAutoMvEdPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v59; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v60; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_41858DA & 1) == 0 )
  {
    sub_B2C35C(&System_Math_TypeInfo, method);
    byte_41858DA = 1;
  }
  mTchDif = 0LL;
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
      v61.fields.x = this->fields.mAutoMvStPos.fields.x;
      v61.fields.y = this->fields.mAutoMvStPos.fields.y;
      v63.fields.x = this->fields.mAutoMvEdPos.fields.x;
      v63.fields.y = this->fields.mAutoMvEdPos.fields.y;
      v12 = v11 / mAutoMvDuration;
      v61.fields.z = 0.0;
      v63.fields.z = 0.0;
      v62 = Easing__Func(v61, v63, v12, this->fields.mAutoMvEaseType, 0LL);
      MapScroll__SetScrlPos(this, *(UnityEngine_Vector2_o *)&v62.fields.x, v13);
    }
    return;
  }
  touchDetector = (TouchDetectorBase_o *)this->fields.touchDetector;
  if ( !touchDetector )
    goto LABEL_54;
  v15 = v4;
  CurrentTouchCount = TouchDetectorBase__get_CurrentTouchCount(touchDetector, 0LL);
  if ( CurrentTouchCount )
  {
    v19 = CurrentTouchCount;
    zero = UnityEngine_Vector2__get_zero(0LL);
    v21 = this->fields.touchDetector;
    this->fields.mInertiaSpd = zero;
    if ( !v21 )
      goto LABEL_54;
    if ( (unsigned int)(v19 - 1) <= 1 && v21->fields._PrevTouchInfo_k__BackingField )
    {
      this->fields.mTchDifOld = this->fields.mTchDif;
      touchDetector = (TouchDetectorBase_o *)v21->fields._PrevTouchInfo_k__BackingField;
      if ( touchDetector )
      {
        TouchCenter = TouchDetectorBase_TouchInfo__get_TouchCenter((TouchDetectorBase_TouchInfo_o *)touchDetector, 0LL);
        v23 = this->fields.touchDetector;
        if ( v23 )
        {
          touchDetector = (TouchDetectorBase_o *)v23->fields._CurrentTouchInfo_k__BackingField;
          if ( touchDetector )
          {
            v24 = TouchDetectorBase_TouchInfo__get_TouchCenter((TouchDetectorBase_TouchInfo_o *)touchDetector, 0LL);
            mMapCamera = this->fields.mMapCamera;
            this->fields.mTchDif.fields.x = TouchCenter.fields.x - v24.fields.x;
            this->fields.mTchDif.fields.y = TouchCenter.fields.y - v24.fields.y;
            if ( mMapCamera )
            {
              mZoom = mMapCamera->fields.mZoom;
              if ( mZoom )
              {
                touchDetector = (TouchDetectorBase_o *)mZoom->fields.mCamera;
                if ( touchDetector )
                {
                  orthographicSize = UnityEngine_Camera__get_orthographicSize(
                                       (UnityEngine_Camera_o *)touchDetector,
                                       0LL);
                  this->fields.mTchDif.fields.x = (float)(TouchCenter.fields.x - v24.fields.x) * orthographicSize;
                  this->fields.mTchDif.fields.y = (float)(TouchCenter.fields.y - v24.fields.y) * orthographicSize;
                  v29 = MapScroll__BrakeMv(this, 0.0, v28);
                  v30.n64_u64[0] = (unsigned __int64)this->fields.mTchDif;
                  if ( v29 )
                  {
                    v30.n64_u64[0] = vmul_f32(v30, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
                    this->fields.mTchDif = (struct UnityEngine_Vector2_o)v30.n64_u64[0];
                  }
                  mTgt = this->fields.mTgt;
                  UserTotalScrollAmount = this->fields.UserTotalScrollAmount;
                  v33 = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)mTgt, v30).n64_u64[0];
                  this->fields.mTgt = v33;
                  magnitude = UnityEngine_Vector2__get_magnitude(
                                *(struct UnityEngine_Vector2_o *)((char *)&mTgt - 4),
                                (const MethodInfo *)&this->fields.mTchDif);
                  v35 = 1;
                  this->fields.UserTotalScrollAmount = UserTotalScrollAmount + fabsf(magnitude);
                  goto LABEL_41;
                }
              }
            }
          }
        }
      }
LABEL_54:
      sub_B2C434(touchDetector, v3);
    }
  }
  else
  {
    this->fields.UserTotalScrollAmount = 0.0;
    v36 = UnityEngine_Vector2__get_magnitude(*(UnityEngine_Vector2_o *)&v17, (const MethodInfo *)&this->fields.mTchDif);
    if ( v36 > 0.0
      || (v36 = UnityEngine_Vector2__get_magnitude(
                  *(UnityEngine_Vector2_o *)&v36,
                  (const MethodInfo *)&this->fields.mTchDifOld),
          v36 > 0.0) )
    {
      mTchDif = this->fields.mTchDif;
      v59.fields.x = UnityEngine_Vector2__get_sqrMagnitude(*(UnityEngine_Vector2_o *)&v36, (const MethodInfo *)&mTchDif);
      if ( v59.fields.x >= UnityEngine_Vector2__get_sqrMagnitude(v59, (const MethodInfo *)&this->fields.mTchDifOld) )
      {
        mTchDifOld = mTchDif;
      }
      else
      {
        mTchDifOld = this->fields.mTchDifOld;
        mTchDif = mTchDifOld;
      }
      mPlaySEAction_Flick = this->fields.mPlaySEAction_Flick;
      this->fields.mInertiaSpd = (struct UnityEngine_Vector2_o)vadd_f32(
                                                                 (float32x2_t)this->fields.mInertiaSpd,
                                                                 (float32x2_t)mTchDifOld).n64_u64[0];
      ActionExtensions__Call(mPlaySEAction_Flick, 0LL);
      this->fields.mTchDif = UnityEngine_Vector2__get_zero(0LL);
      this->fields.mTchDifOld = UnityEngine_Vector2__get_zero(0LL);
    }
    v40.n64_u32[0] = LODWORD(this->fields.mInertiaSpd.fields.x);
    v55 = v40.n64_f32[0];
    y = this->fields.mInertiaSpd.fields.y;
    v40.n64_f32[1] = y;
    this->fields.mTgt = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)this->fields.mTgt, v40).n64_u64[0];
    v41 = ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
    v42 = v55 * v41;
    this->fields.mInertiaSpd.fields.x = v55 * v41;
    this->fields.mInertiaSpd.fields.y = y * v41;
    touchDetector = (TouchDetectorBase_o *)System_Math_TypeInfo;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( fabsf(v42) < 0.01 )
    {
      touchDetector = (TouchDetectorBase_o *)System_Math_TypeInfo;
      v43 = this->fields.mInertiaSpd.fields.y;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      if ( fabsf(v43) < 0.01 )
        this->fields.mInertiaSpd = UnityEngine_Vector2__get_zero(0LL);
    }
    v44 = this->fields.mMapCamera;
    if ( !v44 )
      goto LABEL_54;
    v45 = v44->fields.mZoom;
    if ( !v45 )
      goto LABEL_54;
    if ( !v45->fields._IsZoomMaxFitPosFix_k__BackingField )
      MapScroll__BrakeMv(this, 0.45, v3);
  }
  v35 = 0;
LABEL_41:
  v46 = this->fields.mTgt.fields.x - v6;
  v47 = this->fields.mTgt.fields.y - v15;
  this->fields.mSpd.fields.x = v46;
  this->fields.mSpd.fields.y = v47;
  if ( (v35 & 1) == 0 )
  {
    v46 = v46 * 0.75;
    v47 = v47 * 0.75;
    this->fields.mSpd.fields.x = v46;
    this->fields.mSpd.fields.y = v47;
  }
  v60.fields.x = v6 + v46;
  v60.fields.y = v15 + v47;
  MapScroll__SetScrlPos(this, v60, v3);
  x = this->fields.mSpd.fields.x;
  v49 = this->fields.mSpd.fields.y;
  v52 = UnityEngine_Vector2__get_zero(0LL);
  if ( (float)((float)((float)(x - v52.fields.x) * (float)(x - v52.fields.x))
             + (float)((float)(v49 - v52.fields.y) * (float)(v49 - v52.fields.y))) >= 1.0e-10 )
  {
    v53 = this->fields.mSpd.fields.x;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( fabsf(v53) < 0.01 )
    {
      v54 = this->fields.mSpd.fields.y;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      if ( fabsf(v54) < 0.01 )
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
    sub_B2C434(0LL, method);
  y = pos.fields.y;
  x = pos.fields.x;
  gameObject = UnityEngine_Component__get_gameObject(mCamera, 0LL);
  v7.fields.x = x;
  v7.fields.y = y;
  GameObjectExtensions__SetLocalPosition_31325816(gameObject, v7, 0LL);
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
  const MethodInfo *v10; // x1
  struct UnityEngine_Vector2_o mTgt; // x8
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.mTgt.fields.x = screenPos.fields.x;
  this->fields.mTgt.fields.y = screenPos.fields.y;
  this->fields.mTchDif = UnityEngine_Vector2__get_zero(0LL);
  this->fields.mTchDifOld = UnityEngine_Vector2__get_zero(0LL);
  this->fields.mInertiaSpd = UnityEngine_Vector2__get_zero(0LL);
  this->fields.mAutoMvTime = 0.0;
  this->fields.mAutoMvDuration = sec;
  ScrlPosVec3 = MapScroll__GetScrlPosVec3(this, v10);
  this->fields.mAutoMvEndAct = endAct;
  this->fields.mAutoMvStPos.fields.x = ScrlPosVec3.fields.x;
  this->fields.mAutoMvStPos.fields.y = ScrlPosVec3.fields.y;
  mTgt = this->fields.mTgt;
  this->fields.mAutoMvEaseType = easeType;
  this->fields.mAutoMvEdPos = mTgt;
  sub_B2C2F8(&this->fields.mAutoMvEndAct, endAct);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapScroll__Stop(MapScroll_o *this, bool is_force, const MethodInfo *method)
{
  if ( is_force )
  {
    MapScroll__SetScrlPos(this, this->fields.mTgt, (const MethodInfo *)is_force);
    this->fields.mSpd = UnityEngine_Vector2__get_zero(0LL);
  }
  this->fields.mInertiaSpd = UnityEngine_Vector2__get_zero(0LL);
}


void __fastcall MapScroll__UnInit(MapScroll_o *this, const MethodInfo *method)
{
  this->fields.mMapCamera = 0LL;
  sub_B2C2F8(&this->fields, 0LL);
  this->fields.touchDetector = 0LL;
  sub_B2C2F8(&this->fields.touchDetector, 0LL);
}