void SpotLargeComponent___ctor(SpotLargeComponent_o *this, const MethodInfo *method)
{
  this->fields.mapModelScale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SpotLargeComponent__Awake(SpotLargeComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_SpotLargeComponent__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  CStateManager_T__o *v11; // x21
  Il2CppObject *v12; // x22
  CStateManager_T__o *v13; // x21
  Il2CppObject *v14; // x22
  CStateManager_T__o *v15; // x20
  Il2CppObject *v16; // x21
  const MethodInfo *v17; // x2

  if ( (byte_4C53FB2 & 1) == 0 )
  {
    sub_1C3E564(&Method_CStateManager_SpotLargeComponent___ctor__);
    sub_1C3E564(&Method_CStateManager_SpotLargeComponent__add__);
    sub_1C3E564(&CStateManager_SpotLargeComponent__TypeInfo);
    sub_1C3E564(&SpotLargeComponent_StateLargeIn_TypeInfo);
    sub_1C3E564(&SpotLargeComponent_StateLargeMain_TypeInfo);
    sub_1C3E564(&SpotLargeComponent_StateLargeOut_TypeInfo);
    sub_1C3E564(&SpotLargeComponent_StateNone_TypeInfo);
    byte_4C53FB2 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C3E7B0(CStateManager_SpotLargeComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_333EE28 *)Method_CStateManager_SpotLargeComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_SpotLargeComponent__o *)v4;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1C3E7B0(SpotLargeComponent_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_333EED0 *)Method_CStateManager_SpotLargeComponent__add__);
    v11 = (CStateManager_T__o *)*p_mFSM;
    v12 = (Il2CppObject *)sub_1C3E7B0(SpotLargeComponent_StateLargeIn_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !v11 )
      goto LABEL_9;
    CStateManager_object___add(
      v11,
      1,
      (IState_T__o *)v12,
      (const MethodInfo_333EED0 *)Method_CStateManager_SpotLargeComponent__add__);
    v13 = (CStateManager_T__o *)*p_mFSM;
    v14 = (Il2CppObject *)sub_1C3E7B0(SpotLargeComponent_StateLargeMain_TypeInfo);
    System_Object___ctor(v14, 0);
    if ( !v13
      || (CStateManager_object___add(
            v13,
            2,
            (IState_T__o *)v14,
            (const MethodInfo_333EED0 *)Method_CStateManager_SpotLargeComponent__add__),
          v15 = (CStateManager_T__o *)*p_mFSM,
          v16 = (Il2CppObject *)sub_1C3E7B0(SpotLargeComponent_StateLargeOut_TypeInfo),
          System_Object___ctor(v16, 0),
          !v15) )
    {
LABEL_9:
      sub_1C3E7C0(v9, v10);
    }
    CStateManager_object___add(
      v15,
      3,
      (IState_T__o *)v16,
      (const MethodInfo_333EED0 *)Method_CStateManager_SpotLargeComponent__add__);
    SpotLargeComponent__SetState(this, 0, v17);
  }
}


void SpotLargeComponent__ForceOff(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  if ( this->fields.mFSM )
    SpotLargeComponent__SetState(this, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o SpotLargeComponent__GetBasePosition(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mBaseSpot; // x20
  UnityEngine_Object_o *mMapCamera; // x20
  UnityEngine_Component_o *mScrl; // x0
  __int64 v6; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  unsigned __int64 v8; // d0
  float z; // s2
  float32x2_t v10; // d0 OVERLAPPED
  float v11; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v13; // s2
  unsigned __int32 v14; // s1
  struct MapCamera_o *v15; // x8
  float32x2_t v16; // d9
  const MethodInfo *v17; // x1
  float BaseScale; // s0
  float32x2_t v19; // d9
  float v20; // s8
  float32x2_t *v21; // x8
  float v22; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C53FB8 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53FB8 = 1;
  }
  mBaseSpot = (UnityEngine_Object_o *)this->fields.mBaseSpot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mBaseSpot, 0, 0) )
    goto LABEL_9;
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mScrl = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(mMapCamera, 0, 0);
  if ( ((unsigned __int8)mScrl & 1) != 0 )
  {
LABEL_9:
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v8 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    goto LABEL_21;
  }
  if ( this->fields.isMapModel )
  {
    v10.n64_u64[0] = *(unsigned __int64 *)&this->fields.screenSpotPosition.fields.x;
    v11 = this->fields.screenSpotPosition.fields.z;
  }
  else
  {
    mScrl = (UnityEngine_Component_o *)this->fields.mBaseSpot;
    if ( !mScrl )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject(mScrl, 0);
    *(UnityEngine_Vector3_o *)v10.n64_u64 = GameObjectExtensions__GetLocalPosition(gameObject, 0);
    v11 = v13;
    v10.n64_u32[1] = v14;
  }
  v15 = this->fields.mMapCamera;
  if ( !v15 || (mScrl = (UnityEngine_Component_o *)v15->fields.mScrl) == 0 )
LABEL_22:
    sub_1C3E7C0(mScrl, v6);
  v16.n64_u64[0] = vsub_f32(v10, (float32x2_t)MapScroll__GetScrlPos((MapScroll_o *)mScrl, 0)).n64_u64[0];
  BaseScale = SpotLargeComponent__GetBaseScale(this, v17);
  v19.n64_u64[0] = vmul_n_f32(v16, BaseScale).n64_u64[0];
  v20 = v11 * BaseScale;
  if ( !byte_4C506A9 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A9 = 1;
  }
  v21 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v8 = vadd_f32(v19, vmul_f32(v21[3], (float32x2_t)0xC2000000C2000000LL)).n64_u64[0];
  z = v20 + (float)(v21[4].n64_f32[0] * -32.0);
LABEL_21:
  v22 = *((float *)&v8 + 1);
  result.fields.x = *(float *)&v8;
  result.fields.z = z;
  result.fields.y = v22;
  return result;
}


float SpotLargeComponent__GetBaseScale(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMapCamera; // x20
  MapZoom_o *mZoom; // x0
  __int64 v5; // x1
  float result; // s0
  struct MapCamera_o *v7; // x8

  if ( (byte_4C53FB7 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53FB7 = 1;
  }
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mZoom = (MapZoom_o *)UnityEngine_Object__op_Equality(mMapCamera, 0, 0);
  result = 0.0;
  if ( ((unsigned __int8)mZoom & 1) == 0 )
  {
    v7 = this->fields.mMapCamera;
    if ( !v7 || (mZoom = v7->fields.mZoom) == 0 )
      sub_1C3E7C0(mZoom, v5);
    return 1.0 / MapZoom__GetZoomSize(mZoom, 0);
  }
  return result;
}


int32_t SpotLargeComponent__GetState(SpotLargeComponent_o *this, const MethodInfo *method)
{
  SpotLargeComponent_o *v2; // x19
  struct CStateManager_SpotLargeComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C53FB5 & 1) == 0 )
  {
    this = (SpotLargeComponent_o *)sub_1C3E564(&Method_CStateManager_SpotLargeComponent__getState__);
    byte_4C53FB5 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C3E7C0(this, method);
  return mFSM->fields.m_state;
}


void SpotLargeComponent__LargeIn(
        SpotLargeComponent_o *this,
        SrcSpotBasePrefab_o *spot,
        MapCamera_o *mapCamera,
        MapModelCamera_o *mapModelCamera,
        System_Action_o *endAct,
        bool isMapModel,
        UnityEngine_Vector3_o screenSpotPosition,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  bool v17; // w22
  struct SrcSpotBasePrefab_o **p_mBaseSpot; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  const MethodInfo *v22; // x1
  SpotEntity_o *Mine; // x24
  __int64 v24; // x8
  char v25; // w26
  UnityEngine_GameObject_o *v26; // x25
  bool v27; // w1
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_UIAtlas__o *atlases; // x25
  UISprite_o *mSpotSp; // x26
  const MethodInfo *v31; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  float v33; // s8
  float v34; // s9
  float v35; // s10
  UnityEngine_GameObject_o *v36; // x0
  float v37; // s11
  float v38; // s12
  float v39; // s13
  float v40; // s11
  float v41; // s9
  float BaseScale; // s8
  UnityEngine_GameObject_o *v43; // x0
  const MethodInfo *v44; // x1
  float v45; // s8
  float v46; // s9
  float v47; // s10
  UnityEngine_GameObject_o *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x2
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BasePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  z = screenSpotPosition.fields.z;
  y = screenSpotPosition.fields.y;
  x = screenSpotPosition.fields.x;
  v17 = isMapModel;
  if ( (byte_4C53FB4 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SrcSpotBasePrefab_TypeInfo);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C53FB4 = 1;
  }
  this->fields.isMapModel = v17;
  this->fields.screenSpotPosition.fields.x = x;
  this->fields.screenSpotPosition.fields.y = y;
  this->fields.screenSpotPosition.fields.z = z;
  this->fields.mBaseSpot = spot;
  p_mBaseSpot = &this->fields.mBaseSpot;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.mBaseSpot,
    (int32_t)spot,
    (int32_t)mapCamera,
    (const MethodInfo *)mapModelCamera);
  this->fields.mMapCamera = mapCamera;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mMapCamera, (int32_t)mapCamera, v19, v20);
  if ( !this->fields.mBaseSpot )
    goto LABEL_42;
  mMapCtrl_SpotInfo = this->fields.mBaseSpot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_42;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, 1, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  }
  v24 = *(_QWORD *)mMapCtrl_SpotInfo[2].monitor;
  if ( !v24 )
    goto LABEL_42;
  if ( !spot )
    goto LABEL_42;
  mMapCtrl_SpotInfo = *(MapControl_SpotInfo_o **)(v24 + 256);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_42;
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)ScrTerminalListTop__IsDispEventUIForSpot(
                                                 (ScrTerminalListTop_o *)mMapCtrl_SpotInfo,
                                                 spot->fields.miSpotID,
                                                 0);
  if ( !this->fields.mSpotNameSp )
    goto LABEL_42;
  v25 = (char)mMapCtrl_SpotInfo;
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.mSpotNameSp,
                                                 0);
  v26 = (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo;
  if ( (v25 & 1) != 0 )
  {
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, 0, 0);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.mSpotSp;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    v27 = 0;
  }
  else
  {
    if ( !*p_mBaseSpot )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)System_String__IsNullOrEmpty((*p_mBaseSpot)->fields.mSpotNameStr, 0);
    if ( !v26 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v26, ((unsigned __int8)mMapCtrl_SpotInfo & 1) == 0, 0);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.mSpotSp;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    v27 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, v27, 0);
  if ( !*p_mBaseSpot )
    goto LABEL_42;
  atlases = (*p_mBaseSpot)->fields.atlases;
  mSpotSp = this->fields.mSpotSp;
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  SrcSpotBasePrefab__SetSpotUIWithOffsetY(atlases, mSpotSp, Mine, 0.0, v28);
  if ( !*p_mBaseSpot )
LABEL_42:
    sub_1C3E7C0(mMapCtrl_SpotInfo, v22);
  SrcSpotBasePrefab__SetSpotNameUI(
    (*p_mBaseSpot)->fields.atlases,
    this->fields.mSpotNameSp,
    this->fields.mSpotNameLabel,
    (*p_mBaseSpot)->fields.mSpotNameStr,
    v31);
  this->fields.mapModelScale = 1.0;
  if ( isMapModel )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)mapModelCamera,
                                                   0,
                                                   0);
    if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
    {
      if ( mapModelCamera )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mapModelCamera, 0);
        LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
        mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)*p_mBaseSpot;
        if ( *p_mBaseSpot )
        {
          v33 = LocalPosition.fields.x;
          v34 = LocalPosition.fields.y;
          v35 = LocalPosition.fields.z;
          v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mMapCtrl_SpotInfo, 0);
          v53 = GameObjectExtensions__GetLocalPosition(v36, 0);
          v37 = v53.fields.x;
          v38 = v53.fields.y;
          v39 = v53.fields.z;
          if ( !byte_4C5069F )
          {
            sub_1C3E564(&System_Math_TypeInfo);
            byte_4C5069F = 1;
          }
          v40 = v33 - v37;
          v41 = v34 - v38;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          this->fields.mapModelScale = 2000.0
                                     / sqrtf(
                                         (float)((float)(v35 - v39) * (float)(v35 - v39))
                                       + (float)((float)(v40 * v40) + (float)(v41 * v41)));
          goto LABEL_41;
        }
      }
      goto LABEL_42;
    }
  }
LABEL_41:
  BaseScale = SpotLargeComponent__GetBaseScale(this, v22);
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale_36178300(v43, BaseScale, 0);
  BasePosition = SpotLargeComponent__GetBasePosition(this, v44);
  v45 = BasePosition.fields.x;
  v46 = BasePosition.fields.y;
  v47 = BasePosition.fields.z;
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v55.fields.x = v45;
  v55.fields.y = v46;
  v55.fields.z = v47;
  GameObjectExtensions__SetLocalPosition(v48, v55, 0);
  this->fields.mShowEndAct = endAct;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mShowEndAct, (int32_t)endAct, v49, v50);
  SpotLargeComponent__SetState(this, 1, v51);
}


void SpotLargeComponent__LargeOut(SpotLargeComponent_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x2

  this->fields.mHideEndAct = end_act;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mHideEndAct, (int32_t)end_act, (int32_t)method, v3);
  SpotLargeComponent__SetState(this, 3, v5);
}


void SpotLargeComponent__SetLargeSpotNameScale_NormalScale(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Component_o *mSpotNameSp; // x0
  float x; // s8
  float y; // s9
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(gameObject, 0);
  mSpotNameSp = (UnityEngine_Component_o *)this->fields.mSpotNameSp;
  if ( !mSpotNameSp )
    sub_1C3E7C0(0, v4);
  x = LocalScale.fields.x;
  y = LocalScale.fields.y;
  v8 = UnityEngine_Component__get_gameObject(mSpotNameSp, 0);
  GameObjectExtensions__SetLocalScale_36178360(v8, 1.0 / x, 1.0 / y, 0);
}


// local variable allocation has failed, the output may be wrong!
void SpotLargeComponent__SetState(SpotLargeComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C53FB6 & 1) == 0 )
  {
    sub_1C3E564(&Method_CStateManager_SpotLargeComponent__setState__);
    byte_4C53FB6 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C3E7C0(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_333EF5C *)Method_CStateManager_SpotLargeComponent__setState__);
}


void SpotLargeComponent__StateLargeIn_End(SpotLargeComponent_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_mShowEndAct; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  p_mShowEndAct = (CGThumbnailListItem_o *)&this->fields.mShowEndAct;
  ActionExtensions__Call(this->fields.mShowEndAct, 0);
  p_mShowEndAct->klass = 0;
  sub_1C3E508(p_mShowEndAct, 0, v4, v5);
  SpotLargeComponent__SetState(this, 2, v6);
}


void SpotLargeComponent__StateLargeOut_End(SpotLargeComponent_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_mHideEndAct; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  p_mHideEndAct = (CGThumbnailListItem_o *)&this->fields.mHideEndAct;
  ActionExtensions__Call(this->fields.mHideEndAct, 0);
  p_mHideEndAct->klass = 0;
  sub_1C3E508(p_mHideEndAct, 0, v4, v5);
  SpotLargeComponent__SetState(this, 0, v6);
}


void SpotLargeComponent__Update(SpotLargeComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C53FB3 & 1) == 0 )
  {
    sub_1C3E564(&Method_CStateManager_SpotLargeComponent__update__);
    byte_4C53FB3 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_333EF38 *)Method_CStateManager_SpotLargeComponent__update__);
}


void SpotLargeComponent_StateLargeIn___ctor(SpotLargeComponent_StateLargeIn_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SpotLargeComponent_StateLargeIn__begin(
        SpotLargeComponent_StateLargeIn_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v5; // x20
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  Il2CppObject *v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  float mapModelScale; // s3
  UnityEngine_GameObject_o *v11; // x0
  SpotLargeComponent_StateLargeIn_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C53FB9 & 1) == 0 )
  {
    sub_1C3E564(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C3E564(&Method_UITweener_Begin_TweenPosition___);
    sub_1C3E564(&Method_UITweener_Begin_TweenScale___);
    this = (SpotLargeComponent_StateLargeIn_o *)sub_1C3E564(&StringLiteral_13083/*"StateLargeIn_End"*/);
    byte_4C53FB9 = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v5 = UITweener__Begin_object_(gameObject, 0.15, (const MethodInfo_31B54C4 *)Method_UITweener_Begin_TweenPosition___);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v6, 0);
  if ( !v5 )
    goto LABEL_8;
  *(UnityEngine_Vector3_o *)&v5[8].klass = LocalPosition;
  HIDWORD(v5[9].klass) = 0;
  *(void **)((char *)&v5[8].monitor + 4) = (void *)0xC2AA0000C3660000LL;
  LODWORD(v5[2].klass) = 2;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v8 = UITweener__Begin_object_(v7, 0.15, (const MethodInfo_31B54C4 *)Method_UITweener_Begin_TweenScale___);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(v9, 0);
  if ( !v8 )
    goto LABEL_8;
  mapModelScale = that->fields.mapModelScale;
  *(void **)((char *)&v8[8].monitor + 4) = (void *)0x4000000040000000LL;
  HIDWORD(v8[9].klass) = 1065353216;
  *(float *)&v8[8].klass = LocalScale.fields.x * mapModelScale;
  *((float *)&v8[8].klass + 1) = LocalScale.fields.y * mapModelScale;
  *(float *)&v8[8].monitor = LocalScale.fields.z * mapModelScale;
  LODWORD(v8[2].klass) = 2;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  this = (SpotLargeComponent_StateLargeIn_o *)UITweener__Begin_object_(
                                                v11,
                                                0.15,
                                                (const MethodInfo_31B54C4 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_1C3E7C0(this, that);
  v12 = this;
  this[8].klass = (SpotLargeComponent_StateLargeIn_c *)0x3F80000000000000LL;
  LODWORD(this[2].klass) = 2;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v12[5].klass = (SpotLargeComponent_StateLargeIn_c *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v12[5], (int32_t)v13, v14, v15);
  v16 = StringLiteral_13083/*"StateLargeIn_End"*/;
  v12[5].monitor = (void *)StringLiteral_13083/*"StateLargeIn_End"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v12[5].monitor, v16, v17, v18);
}


void SpotLargeComponent_StateLargeIn__end(
        SpotLargeComponent_StateLargeIn_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void SpotLargeComponent_StateLargeIn__update(
        SpotLargeComponent_StateLargeIn_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_1C3E7C0(this, 0);
  SpotLargeComponent__SetLargeSpotNameScale_NormalScale(that, (const MethodInfo *)that);
}


void SpotLargeComponent_StateLargeMain___ctor(SpotLargeComponent_StateLargeMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SpotLargeComponent_StateLargeMain__begin(
        SpotLargeComponent_StateLargeMain_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x8
  __int64 v6; // x8
  struct UISprite_o *mSpotSp; // x21
  System_Collections_Generic_List_UIAtlas__o *v8; // x20
  UIAtlas_o *UIAtlasBySpriteName; // x0
  struct UISprite_o *mSpotNameSp; // x19
  UIAtlas_o *v11; // x1

  if ( (byte_4C53FBA & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    this = (SpotLargeComponent_StateLargeMain_o *)sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C53FBA = 1;
  }
  if ( !that )
    goto LABEL_19;
  SpotLargeComponent__SetLargeSpotNameScale_NormalScale(that, (const MethodInfo *)that);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  this = (SpotLargeComponent_StateLargeMain_o *)GameObjectExtensions__GetParent(gameObject, 0);
  if ( !this )
    goto LABEL_19;
  this = (SpotLargeComponent_StateLargeMain_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(SpotLargeComponent_StateLargeMain_o *, __int64, Il2CppClass *))this->klass[1]._1.declaringType)(
    this,
    1,
    this->klass[1]._1.parent);
  this = (SpotLargeComponent_StateLargeMain_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)that,
                                                  0);
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (SpotLargeComponent_StateLargeMain_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)that,
                                                  0);
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
  }
  this = (SpotLargeComponent_StateLargeMain_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    this = (SpotLargeComponent_StateLargeMain_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = *(_QWORD *)this[11].monitor;
  if ( !v5
    || (v6 = *(_QWORD *)(v5 + 264)) == 0
    || (mSpotSp = that->fields.mSpotSp) == 0
    || (v8 = *(System_Collections_Generic_List_UIAtlas__o **)(v6 + 304),
        UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v8, mSpotSp->fields.mSpriteName, 0),
        UISprite__set_atlas(mSpotSp, UIAtlasBySpriteName, 0),
        (mSpotNameSp = that->fields.mSpotNameSp) == 0) )
  {
LABEL_19:
    sub_1C3E7C0(this, that);
  }
  v11 = UIAtlas__GetUIAtlasBySpriteName(v8, mSpotNameSp->fields.mSpriteName, 0);
  UISprite__set_atlas(mSpotNameSp, v11, 0);
}


void SpotLargeComponent_StateLargeMain__end(
        SpotLargeComponent_StateLargeMain_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void SpotLargeComponent_StateLargeMain__update(
        SpotLargeComponent_StateLargeMain_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void SpotLargeComponent_StateLargeOut___ctor(SpotLargeComponent_StateLargeOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SpotLargeComponent_StateLargeOut__begin(
        SpotLargeComponent_StateLargeOut_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v5; // x20
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  Il2CppObject *v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  float v10; // s0
  UnityEngine_GameObject_o *v11; // x0
  SpotLargeComponent_StateLargeOut_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C53FBB & 1) == 0 )
  {
    sub_1C3E564(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C3E564(&Method_UITweener_Begin_TweenPosition___);
    sub_1C3E564(&Method_UITweener_Begin_TweenScale___);
    this = (SpotLargeComponent_StateLargeOut_o *)sub_1C3E564(&StringLiteral_13084/*"StateLargeOut_End"*/);
    byte_4C53FBB = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v5 = UITweener__Begin_object_(gameObject, 0.05, (const MethodInfo_31B54C4 *)Method_UITweener_Begin_TweenPosition___);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v6, 0);
  if ( !v5 )
    goto LABEL_8;
  *(UnityEngine_Vector3_o *)&v5[8].klass = LocalPosition;
  *(UnityEngine_Vector3_o *)((char *)&v5[8].monitor + 4) = SpotLargeComponent__GetBasePosition(
                                                             that,
                                                             (const MethodInfo *)that);
  LODWORD(v5[2].klass) = 2;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v8 = UITweener__Begin_object_(v7, 0.05, (const MethodInfo_31B54C4 *)Method_UITweener_Begin_TweenScale___);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(v9, 0);
  if ( !v8 )
    goto LABEL_8;
  *(UnityEngine_Vector3_o *)&v8[8].klass = LocalScale;
  v10 = SpotLargeComponent__GetBaseScale(that, (const MethodInfo *)that) * that->fields.mapModelScale;
  HIDWORD(v8[9].klass) = 1065353216;
  *((float *)&v8[8].monitor + 1) = v10;
  *(float *)&v8[9].klass = v10;
  LODWORD(v8[2].klass) = 2;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  this = (SpotLargeComponent_StateLargeOut_o *)UITweener__Begin_object_(
                                                 v11,
                                                 0.05,
                                                 (const MethodInfo_31B54C4 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_1C3E7C0(this, that);
  v12 = this;
  this[8].klass = (SpotLargeComponent_StateLargeOut_c *)1065353216;
  LODWORD(this[2].klass) = 2;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v12[5].klass = (SpotLargeComponent_StateLargeOut_c *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v12[5], (int32_t)v13, v14, v15);
  v16 = StringLiteral_13084/*"StateLargeOut_End"*/;
  v12[5].monitor = (void *)StringLiteral_13084/*"StateLargeOut_End"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v12[5].monitor, v16, v17, v18);
}


void SpotLargeComponent_StateLargeOut__end(
        SpotLargeComponent_StateLargeOut_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void SpotLargeComponent_StateLargeOut__update(
        SpotLargeComponent_StateLargeOut_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_1C3E7C0(this, 0);
  SpotLargeComponent__SetLargeSpotNameScale_NormalScale(that, (const MethodInfo *)that);
}


void SpotLargeComponent_StateNone___ctor(SpotLargeComponent_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SpotLargeComponent_StateNone__begin(
        SpotLargeComponent_StateNone_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void SpotLargeComponent_StateNone__end(
        SpotLargeComponent_StateNone_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void SpotLargeComponent_StateNone__update(
        SpotLargeComponent_StateNone_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  ;
}