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
  struct MapCamera_o *mMapCamera; // x20
  const MethodInfo *v6; // x1

  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera )
    sub_B170D4();
  MapCamera__CalcWorldRect(this->fields.mMapCamera, method);
  return MapScroll__BrakeMv_27716056(this, mMapCamera->fields.mCameraRect, spd_rate, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapScroll__BrakeMv_27716056(
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
    sub_B170D4();
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
    sub_B170D4();
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UnityEngine_Camera_o *mCamera; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40FB60A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, mc);
    byte_40FB60A = 1;
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v8, v9, v10, v11, v12, v13);
    this->fields.touchDetector = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.touchDetector, 0LL, v14, v15, v16, v17, v18, v19);
  }
  this->fields.mMapCamera = mc;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)mc, v8, v9, v10, v11, v12, v13);
  if ( !mc )
    sub_B170D4();
  mCamera = mc->fields.mCamera;
  this->fields.mCamera = mCamera;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mCamera,
    (System_Int32_array **)mCamera,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.touchDetector = touchDetector;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.touchDetector,
    (System_Int32_array **)touchDetector,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
  MapZoom_o *mZoom; // x0
  float ZoomRate; // s10
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  float v8; // s0
  float v9; // s1
  struct MapCamera_o *v10; // x20
  float v11; // s8
  float v12; // s9
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v16; // 0:s0.4,4:s1.4

  mMapCamera = this->fields.mMapCamera;
  if ( !mMapCamera
    || (mZoom = mMapCamera->fields.mZoom) == 0LL
    || (ZoomRate = MapZoom__GetZoomRate(mZoom, method),
        *(UnityEngine_Vector3_o *)&v8 = MapScroll__GetScrlPosVec3(this, v6),
        (v10 = this->fields.mMapCamera) == 0LL) )
  {
    sub_B170D4();
  }
  v11 = v8;
  v12 = v9;
  MapCamera__CalcWorldRect(this->fields.mMapCamera, v7);
  v15.fields.x = v11;
  v15.fields.y = v12;
  v16 = MapScroll__LimitMv_27716732(
          this,
          v15,
          v10->fields.mCameraRect,
          -(float)((float)((float)(1.0 - ZoomRate) * 0.124) + 0.001),
          v13);
  MapScroll__SetScrlPos(this, v16, v14);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall MapScroll__LimitMv_27716732(
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
    sub_B170D4();
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
  float v3; // s1
  float v4; // s0
  float v5; // s8
  float mAutoMvTime; // s8
  const MethodInfo *v7; // x1
  float deltaTime; // s0
  float mAutoMvDuration; // s2
  float v10; // s5
  float v11; // s6
  const MethodInfo *v12; // x1
  TouchDetectorBase_o *touchDetector; // x0
  float v14; // s9
  int32_t CurrentTouchCount; // w0
  int v16; // s0
  int32_t v18; // w20
  const MethodInfo *v19; // x1
  struct UnityEngine_Vector2_o zero; // kr00_8
  struct MapTouchDetector_o *v21; // x8
  TouchDetectorBase_TouchInfo_o *PrevTouchInfo_k__BackingField; // x0
  UnityEngine_Vector2_o TouchCenter; // kr08_8
  struct MapTouchDetector_o *v24; // x8
  TouchDetectorBase_TouchInfo_o *CurrentTouchInfo_k__BackingField; // x0
  UnityEngine_Vector2_o v26; // kr10_8
  struct MapCamera_o *mMapCamera; // x8
  struct MapZoom_o *mZoom; // x8
  UnityEngine_Camera_o *mCamera; // x0
  float orthographicSize; // s0
  const MethodInfo *v31; // x1
  bool v32; // w0
  float32x2_t v33; // d0
  struct UnityEngine_Vector2_o mTgt; // d1 OVERLAPPED
  float UserTotalScrollAmount; // s10
  struct UnityEngine_Vector2_o v36; // d0
  float magnitude; // s0
  char v38; // w8
  float v39; // s0
  struct UnityEngine_Vector2_o mTchDifOld; // d0
  System_Action_o *mPlaySEAction_Flick; // x0
  float32x2_t v43; // d1
  float v44; // s0
  float v45; // s10
  float v46; // s10
  struct MapCamera_o *v47; // x8
  struct MapZoom_o *v48; // x8
  float v49; // s0
  float v50; // s1
  float x; // s8
  float v52; // s9
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x2
  UnityEngine_Vector2_o v55; // kr30_8
  float v56; // s9
  float v57; // s9
  float v58; // [xsp+0h] [xbp-60h]
  float y; // [xsp+10h] [xbp-50h]
  struct UnityEngine_Vector2_o mTchDif; // [xsp+28h] [xbp-38h] BYREF
  UnityEngine_Vector2_o mAutoMvEdPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v62; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v63; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FB60B & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, method);
    byte_40FB60B = 1;
  }
  mTchDif = 0LL;
  *(UnityEngine_Vector3_o *)(&v3 - 1) = MapScroll__GetScrlPosVec3(this, method);
  v5 = v4;
  if ( this->fields.mAutoMvDuration > 0.0 )
  {
    mAutoMvTime = this->fields.mAutoMvTime;
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    mAutoMvDuration = this->fields.mAutoMvDuration;
    v10 = mAutoMvTime + deltaTime;
    this->fields.mAutoMvTime = mAutoMvTime + deltaTime;
    if ( (float)(mAutoMvTime + deltaTime) >= mAutoMvDuration )
    {
      mAutoMvEdPos = this->fields.mAutoMvEdPos;
      this->fields.mAutoMvDuration = 0.0;
      MapScroll__SetScrlPos(this, mAutoMvEdPos, v7);
      ActionExtensions__Call(this->fields.mAutoMvEndAct, 0LL);
    }
    else
    {
      v64.fields.x = this->fields.mAutoMvStPos.fields.x;
      v64.fields.y = this->fields.mAutoMvStPos.fields.y;
      v66.fields.x = this->fields.mAutoMvEdPos.fields.x;
      v66.fields.y = this->fields.mAutoMvEdPos.fields.y;
      v11 = v10 / mAutoMvDuration;
      v64.fields.z = 0.0;
      v66.fields.z = 0.0;
      v65 = Easing__Func(v64, v66, v11, this->fields.mAutoMvEaseType, 0LL);
      MapScroll__SetScrlPos(this, *(UnityEngine_Vector2_o *)&v65.fields.x, v12);
    }
    return;
  }
  touchDetector = (TouchDetectorBase_o *)this->fields.touchDetector;
  if ( !touchDetector )
    goto LABEL_54;
  v14 = v3;
  CurrentTouchCount = TouchDetectorBase__get_CurrentTouchCount(touchDetector, 0LL);
  if ( CurrentTouchCount )
  {
    v18 = CurrentTouchCount;
    zero = UnityEngine_Vector2__get_zero(0LL);
    v21 = this->fields.touchDetector;
    this->fields.mInertiaSpd = zero;
    if ( !v21 )
      goto LABEL_54;
    if ( (unsigned int)(v18 - 1) <= 1 && v21->fields._PrevTouchInfo_k__BackingField )
    {
      this->fields.mTchDifOld = this->fields.mTchDif;
      PrevTouchInfo_k__BackingField = v21->fields._PrevTouchInfo_k__BackingField;
      if ( PrevTouchInfo_k__BackingField )
      {
        TouchCenter = TouchDetectorBase_TouchInfo__get_TouchCenter(PrevTouchInfo_k__BackingField, 0LL);
        v24 = this->fields.touchDetector;
        if ( v24 )
        {
          CurrentTouchInfo_k__BackingField = v24->fields._CurrentTouchInfo_k__BackingField;
          if ( CurrentTouchInfo_k__BackingField )
          {
            v26 = TouchDetectorBase_TouchInfo__get_TouchCenter(CurrentTouchInfo_k__BackingField, 0LL);
            mMapCamera = this->fields.mMapCamera;
            this->fields.mTchDif.fields.x = TouchCenter.fields.x - v26.fields.x;
            this->fields.mTchDif.fields.y = TouchCenter.fields.y - v26.fields.y;
            if ( mMapCamera )
            {
              mZoom = mMapCamera->fields.mZoom;
              if ( mZoom )
              {
                mCamera = mZoom->fields.mCamera;
                if ( mCamera )
                {
                  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCamera, 0LL);
                  this->fields.mTchDif.fields.x = (float)(TouchCenter.fields.x - v26.fields.x) * orthographicSize;
                  this->fields.mTchDif.fields.y = (float)(TouchCenter.fields.y - v26.fields.y) * orthographicSize;
                  v32 = MapScroll__BrakeMv(this, 0.0, v31);
                  v33.n64_u64[0] = (unsigned __int64)this->fields.mTchDif;
                  if ( v32 )
                  {
                    v33.n64_u64[0] = vmul_f32(v33, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
                    this->fields.mTchDif = (struct UnityEngine_Vector2_o)v33.n64_u64[0];
                  }
                  mTgt = this->fields.mTgt;
                  UserTotalScrollAmount = this->fields.UserTotalScrollAmount;
                  v36 = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)mTgt, v33).n64_u64[0];
                  this->fields.mTgt = v36;
                  magnitude = UnityEngine_Vector2__get_magnitude(
                                *(struct UnityEngine_Vector2_o *)((char *)&mTgt - 4),
                                (const MethodInfo *)&this->fields.mTchDif);
                  v38 = 1;
                  this->fields.UserTotalScrollAmount = UserTotalScrollAmount + fabsf(magnitude);
                  goto LABEL_41;
                }
              }
            }
          }
        }
      }
LABEL_54:
      sub_B170D4();
    }
  }
  else
  {
    this->fields.UserTotalScrollAmount = 0.0;
    v39 = UnityEngine_Vector2__get_magnitude(*(UnityEngine_Vector2_o *)&v16, (const MethodInfo *)&this->fields.mTchDif);
    if ( v39 > 0.0
      || (v39 = UnityEngine_Vector2__get_magnitude(
                  *(UnityEngine_Vector2_o *)&v39,
                  (const MethodInfo *)&this->fields.mTchDifOld),
          v39 > 0.0) )
    {
      mTchDif = this->fields.mTchDif;
      v62.fields.x = UnityEngine_Vector2__get_sqrMagnitude(*(UnityEngine_Vector2_o *)&v39, (const MethodInfo *)&mTchDif);
      if ( v62.fields.x >= UnityEngine_Vector2__get_sqrMagnitude(v62, (const MethodInfo *)&this->fields.mTchDifOld) )
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
    v43.n64_u32[0] = LODWORD(this->fields.mInertiaSpd.fields.x);
    v58 = v43.n64_f32[0];
    y = this->fields.mInertiaSpd.fields.y;
    v43.n64_f32[1] = y;
    this->fields.mTgt = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)this->fields.mTgt, v43).n64_u64[0];
    v44 = ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
    v45 = v58 * v44;
    this->fields.mInertiaSpd.fields.x = v58 * v44;
    this->fields.mInertiaSpd.fields.y = y * v44;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( fabsf(v45) < 0.01 )
    {
      v46 = this->fields.mInertiaSpd.fields.y;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      if ( fabsf(v46) < 0.01 )
        this->fields.mInertiaSpd = UnityEngine_Vector2__get_zero(0LL);
    }
    v47 = this->fields.mMapCamera;
    if ( !v47 )
      goto LABEL_54;
    v48 = v47->fields.mZoom;
    if ( !v48 )
      goto LABEL_54;
    if ( !v48->fields._IsZoomMaxFitPosFix_k__BackingField )
      MapScroll__BrakeMv(this, 0.45, v19);
  }
  v38 = 0;
LABEL_41:
  v49 = this->fields.mTgt.fields.x - v5;
  v50 = this->fields.mTgt.fields.y - v14;
  this->fields.mSpd.fields.x = v49;
  this->fields.mSpd.fields.y = v50;
  if ( (v38 & 1) == 0 )
  {
    v49 = v49 * 0.75;
    v50 = v50 * 0.75;
    this->fields.mSpd.fields.x = v49;
    this->fields.mSpd.fields.y = v50;
  }
  v63.fields.x = v5 + v49;
  v63.fields.y = v14 + v50;
  MapScroll__SetScrlPos(this, v63, v19);
  x = this->fields.mSpd.fields.x;
  v52 = this->fields.mSpd.fields.y;
  v55 = UnityEngine_Vector2__get_zero(0LL);
  if ( (float)((float)((float)(x - v55.fields.x) * (float)(x - v55.fields.x))
             + (float)((float)(v52 - v55.fields.y) * (float)(v52 - v55.fields.y))) >= 1.0e-10 )
  {
    v56 = this->fields.mSpd.fields.x;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( fabsf(v56) < 0.01 )
    {
      v57 = this->fields.mSpd.fields.y;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      if ( fabsf(v57) < 0.01 )
        MapScroll__Stop(this, 1, v54);
    }
  }
  MapScroll__LimitMv(this, v53);
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
    sub_B170D4();
  y = pos.fields.y;
  x = pos.fields.x;
  gameObject = UnityEngine_Component__get_gameObject(mCamera, 0LL);
  v7.fields.x = x;
  v7.fields.y = y;
  GameObjectExtensions__SetLocalPosition_27419860(gameObject, v7, 0LL);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mAutoMvEndAct,
    (System_Int32_array **)endAct,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.touchDetector = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.touchDetector, 0LL, v9, v10, v11, v12, v13, v14);
}