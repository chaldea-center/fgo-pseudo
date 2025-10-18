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
  CStateManager_T__o *v10; // x21
  Il2CppObject *v11; // x22
  CStateManager_T__o *v12; // x21
  Il2CppObject *v13; // x22
  CStateManager_T__o *v14; // x20
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4C40215 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_SpotLargeComponent___ctor__);
    sub_1C37058(&Method_CStateManager_SpotLargeComponent__add__);
    sub_1C37058(&CStateManager_SpotLargeComponent__TypeInfo);
    sub_1C37058(&SpotLargeComponent_StateLargeIn_TypeInfo);
    sub_1C37058(&SpotLargeComponent_StateLargeMain_TypeInfo);
    sub_1C37058(&SpotLargeComponent_StateLargeOut_TypeInfo);
    sub_1C37058(&SpotLargeComponent_StateNone_TypeInfo);
    byte_4C40215 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C372A4(CStateManager_SpotLargeComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_332CF70 *)Method_CStateManager_SpotLargeComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_SpotLargeComponent__o *)v4;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1C372A4(SpotLargeComponent_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_332D018 *)Method_CStateManager_SpotLargeComponent__add__);
    v10 = (CStateManager_T__o *)*p_mFSM;
    v11 = (Il2CppObject *)sub_1C372A4(SpotLargeComponent_StateLargeIn_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !v10 )
      goto LABEL_9;
    CStateManager_object___add(
      v10,
      1,
      (IState_T__o *)v11,
      (const MethodInfo_332D018 *)Method_CStateManager_SpotLargeComponent__add__);
    v12 = (CStateManager_T__o *)*p_mFSM;
    v13 = (Il2CppObject *)sub_1C372A4(SpotLargeComponent_StateLargeMain_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !v12
      || (CStateManager_object___add(
            v12,
            2,
            (IState_T__o *)v13,
            (const MethodInfo_332D018 *)Method_CStateManager_SpotLargeComponent__add__),
          v14 = (CStateManager_T__o *)*p_mFSM,
          v15 = (Il2CppObject *)sub_1C372A4(SpotLargeComponent_StateLargeOut_TypeInfo),
          System_Object___ctor(v15, 0),
          !v14) )
    {
LABEL_9:
      sub_1C372B4(v9);
    }
    CStateManager_object___add(
      v14,
      3,
      (IState_T__o *)v15,
      (const MethodInfo_332D018 *)Method_CStateManager_SpotLargeComponent__add__);
    SpotLargeComponent__SetState(this, 0, v16);
  }
}


void SpotLargeComponent__ForceOff(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  if ( this->fields.mFSM )
    SpotLargeComponent__SetState(this, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o SpotLargeComponent__GetBasePosition(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mBaseSpot; // x20
  UnityEngine_Object_o *mMapCamera; // x20
  UnityEngine_Component_o *mScrl; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  unsigned __int64 v7; // d0
  float z; // s2
  float32x2_t v9; // d0 OVERLAPPED
  float v10; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v12; // s2
  unsigned __int32 v13; // s1
  struct MapCamera_o *v14; // x8
  float32x2_t v15; // d9
  const MethodInfo *v16; // x1
  float BaseScale; // s0
  float32x2_t v18; // d9
  float v19; // s8
  float32x2_t *v20; // x8
  float v21; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4021B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4021B = 1;
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
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v7 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    goto LABEL_21;
  }
  if ( this->fields.isMapModel )
  {
    v9.n64_u64[0] = *(unsigned __int64 *)&this->fields.screenSpotPosition.fields.x;
    v10 = this->fields.screenSpotPosition.fields.z;
  }
  else
  {
    mScrl = (UnityEngine_Component_o *)this->fields.mBaseSpot;
    if ( !mScrl )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject(mScrl, 0);
    *(UnityEngine_Vector3_o *)v9.n64_u64 = GameObjectExtensions__GetLocalPosition(gameObject, 0);
    v10 = v12;
    v9.n64_u32[1] = v13;
  }
  v14 = this->fields.mMapCamera;
  if ( !v14 || (mScrl = (UnityEngine_Component_o *)v14->fields.mScrl) == 0 )
LABEL_22:
    sub_1C372B4(mScrl);
  v15.n64_u64[0] = vsub_f32(v9, (float32x2_t)MapScroll__GetScrlPos((MapScroll_o *)mScrl, 0)).n64_u64[0];
  BaseScale = SpotLargeComponent__GetBaseScale(this, v16);
  v18.n64_u64[0] = vmul_n_f32(v15, BaseScale).n64_u64[0];
  v19 = v10 * BaseScale;
  if ( !byte_4C3C929 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C929 = 1;
  }
  v20 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v7 = vadd_f32(v18, vmul_f32(v20[3], (float32x2_t)0xC2000000C2000000LL)).n64_u64[0];
  z = v19 + (float)(v20[4].n64_f32[0] * -32.0);
LABEL_21:
  v21 = *((float *)&v7 + 1);
  result.fields.x = *(float *)&v7;
  result.fields.z = z;
  result.fields.y = v21;
  return result;
}


float SpotLargeComponent__GetBaseScale(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMapCamera; // x20
  MapZoom_o *mZoom; // x0
  float result; // s0
  struct MapCamera_o *v6; // x8

  if ( (byte_4C4021A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4021A = 1;
  }
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mZoom = (MapZoom_o *)UnityEngine_Object__op_Equality(mMapCamera, 0, 0);
  result = 0.0;
  if ( ((unsigned __int8)mZoom & 1) == 0 )
  {
    v6 = this->fields.mMapCamera;
    if ( !v6 || (mZoom = v6->fields.mZoom) == 0 )
      sub_1C372B4(mZoom);
    return 1.0 / MapZoom__GetZoomSize(mZoom, 0);
  }
  return result;
}


int32_t SpotLargeComponent__GetState(SpotLargeComponent_o *this, const MethodInfo *method)
{
  SpotLargeComponent_o *v2; // x19
  struct CStateManager_SpotLargeComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C40218 & 1) == 0 )
  {
    this = (SpotLargeComponent_o *)sub_1C37058(&Method_CStateManager_SpotLargeComponent__getState__);
    byte_4C40218 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(this);
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
  SpotEntity_o *Mine; // x24
  __int64 v23; // x8
  char v24; // w26
  UnityEngine_GameObject_o *v25; // x25
  bool v26; // w1
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_UIAtlas__o *atlases; // x25
  UISprite_o *mSpotSp; // x26
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x1
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
  if ( (byte_4C40217 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SrcSpotBasePrefab_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C40217 = 1;
  }
  this->fields.isMapModel = v17;
  this->fields.screenSpotPosition.fields.x = x;
  this->fields.screenSpotPosition.fields.y = y;
  this->fields.screenSpotPosition.fields.z = z;
  this->fields.mBaseSpot = spot;
  p_mBaseSpot = &this->fields.mBaseSpot;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.mBaseSpot,
    (int32_t)spot,
    (int32_t)mapCamera,
    (const MethodInfo *)mapModelCamera);
  this->fields.mMapCamera = mapCamera;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMapCamera, (int32_t)mapCamera, v19, v20);
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
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  }
  v23 = *(_QWORD *)mMapCtrl_SpotInfo[2].monitor;
  if ( !v23 )
    goto LABEL_42;
  if ( !spot )
    goto LABEL_42;
  mMapCtrl_SpotInfo = *(MapControl_SpotInfo_o **)(v23 + 256);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_42;
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)ScrTerminalListTop__IsDispEventUIForSpot(
                                                 (ScrTerminalListTop_o *)mMapCtrl_SpotInfo,
                                                 spot->fields.miSpotID,
                                                 0);
  if ( !this->fields.mSpotNameSp )
    goto LABEL_42;
  v24 = (char)mMapCtrl_SpotInfo;
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.mSpotNameSp,
                                                 0);
  v25 = (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo;
  if ( (v24 & 1) != 0 )
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
    v26 = 0;
  }
  else
  {
    if ( !*p_mBaseSpot )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)System_String__IsNullOrEmpty((*p_mBaseSpot)->fields.mSpotNameStr, 0);
    if ( !v25 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v25, ((unsigned __int8)mMapCtrl_SpotInfo & 1) == 0, 0);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.mSpotSp;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    v26 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, v26, 0);
  if ( !*p_mBaseSpot )
    goto LABEL_42;
  atlases = (*p_mBaseSpot)->fields.atlases;
  mSpotSp = this->fields.mSpotSp;
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  SrcSpotBasePrefab__SetSpotUIWithOffsetY(atlases, mSpotSp, Mine, 0.0, v27);
  if ( !*p_mBaseSpot )
LABEL_42:
    sub_1C372B4(mMapCtrl_SpotInfo);
  SrcSpotBasePrefab__SetSpotNameUI(
    (*p_mBaseSpot)->fields.atlases,
    this->fields.mSpotNameSp,
    this->fields.mSpotNameLabel,
    (*p_mBaseSpot)->fields.mSpotNameStr,
    v30);
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
          if ( !byte_4C3C91F )
          {
            sub_1C37058(&System_Math_TypeInfo);
            byte_4C3C91F = 1;
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
  BaseScale = SpotLargeComponent__GetBaseScale(this, v31);
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale_36134400(v43, BaseScale, 0);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mShowEndAct, (int32_t)endAct, v49, v50);
  SpotLargeComponent__SetState(this, 1, v51);
}


void SpotLargeComponent__LargeOut(SpotLargeComponent_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x2

  this->fields.mHideEndAct = end_act;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mHideEndAct, (int32_t)end_act, (int32_t)method, v3);
  SpotLargeComponent__SetState(this, 3, v5);
}


void SpotLargeComponent__SetLargeSpotNameScale_NormalScale(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *mSpotNameSp; // x0
  float x; // s8
  float y; // s9
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(gameObject, 0);
  mSpotNameSp = (UnityEngine_Component_o *)this->fields.mSpotNameSp;
  if ( !mSpotNameSp )
    sub_1C372B4(0);
  x = LocalScale.fields.x;
  y = LocalScale.fields.y;
  v7 = UnityEngine_Component__get_gameObject(mSpotNameSp, 0);
  GameObjectExtensions__SetLocalScale_36134460(v7, 1.0 / x, 1.0 / y, 0);
}


void SpotLargeComponent__SetState(SpotLargeComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C40219 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_SpotLargeComponent__setState__);
    byte_4C40219 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(0);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_332D0A4 *)Method_CStateManager_SpotLargeComponent__setState__);
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
  sub_1C36FFC(p_mShowEndAct, 0, v4, v5);
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
  sub_1C36FFC(p_mHideEndAct, 0, v4, v5);
  SpotLargeComponent__SetState(this, 0, v6);
}


void SpotLargeComponent__Update(SpotLargeComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C40216 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_SpotLargeComponent__update__);
    byte_4C40216 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_332D080 *)Method_CStateManager_SpotLargeComponent__update__);
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

  if ( (byte_4C4021C & 1) == 0 )
  {
    sub_1C37058(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C37058(&Method_UITweener_Begin_TweenPosition___);
    sub_1C37058(&Method_UITweener_Begin_TweenScale___);
    this = (SpotLargeComponent_StateLargeIn_o *)sub_1C37058(&StringLiteral_13075/*"StateLargeIn_End"*/);
    byte_4C4021C = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v5 = UITweener__Begin_object_(gameObject, 0.15, (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenPosition___);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v6, 0);
  if ( !v5 )
    goto LABEL_8;
  *(UnityEngine_Vector3_o *)&v5[8].klass = LocalPosition;
  HIDWORD(v5[9].klass) = 0;
  *(void **)((char *)&v5[8].monitor + 4) = (void *)0xC2AA0000C3660000LL;
  LODWORD(v5[2].klass) = 2;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v8 = UITweener__Begin_object_(v7, 0.15, (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenScale___);
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
                                                (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_1C372B4(this);
  v12 = this;
  this[8].klass = (SpotLargeComponent_StateLargeIn_c *)0x3F80000000000000LL;
  LODWORD(this[2].klass) = 2;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v12[5].klass = (SpotLargeComponent_StateLargeIn_c *)v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12[5], (int32_t)v13, v14, v15);
  v16 = StringLiteral_13075/*"StateLargeIn_End"*/;
  v12[5].monitor = (void *)StringLiteral_13075/*"StateLargeIn_End"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12[5].monitor, v16, v17, v18);
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
    sub_1C372B4(this);
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

  if ( (byte_4C4021D & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    this = (SpotLargeComponent_StateLargeMain_o *)sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C4021D = 1;
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
                                                  (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
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
    sub_1C372B4(this);
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
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  Il2CppObject *v9; // x20
  UnityEngine_GameObject_o *v10; // x0
  const MethodInfo *v11; // x1
  float v12; // s0
  UnityEngine_GameObject_o *v13; // x0
  SpotLargeComponent_StateLargeOut_o *v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4021E & 1) == 0 )
  {
    sub_1C37058(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C37058(&Method_UITweener_Begin_TweenPosition___);
    sub_1C37058(&Method_UITweener_Begin_TweenScale___);
    this = (SpotLargeComponent_StateLargeOut_o *)sub_1C37058(&StringLiteral_13076/*"StateLargeOut_End"*/);
    byte_4C4021E = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v5 = UITweener__Begin_object_(gameObject, 0.05, (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenPosition___);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v6, 0);
  if ( !v5 )
    goto LABEL_8;
  *(UnityEngine_Vector3_o *)&v5[8].klass = LocalPosition;
  *(UnityEngine_Vector3_o *)((char *)&v5[8].monitor + 4) = SpotLargeComponent__GetBasePosition(that, v7);
  LODWORD(v5[2].klass) = 2;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v9 = UITweener__Begin_object_(v8, 0.05, (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenScale___);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(v10, 0);
  if ( !v9 )
    goto LABEL_8;
  *(UnityEngine_Vector3_o *)&v9[8].klass = LocalScale;
  v12 = SpotLargeComponent__GetBaseScale(that, v11) * that->fields.mapModelScale;
  HIDWORD(v9[9].klass) = 1065353216;
  *((float *)&v9[8].monitor + 1) = v12;
  *(float *)&v9[9].klass = v12;
  LODWORD(v9[2].klass) = 2;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  this = (SpotLargeComponent_StateLargeOut_o *)UITweener__Begin_object_(
                                                 v13,
                                                 0.05,
                                                 (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_1C372B4(this);
  v14 = this;
  this[8].klass = (SpotLargeComponent_StateLargeOut_c *)1065353216;
  LODWORD(this[2].klass) = 2;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v14[5].klass = (SpotLargeComponent_StateLargeOut_c *)v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14[5], (int32_t)v15, v16, v17);
  v18 = StringLiteral_13076/*"StateLargeOut_End"*/;
  v14[5].monitor = (void *)StringLiteral_13076/*"StateLargeOut_End"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14[5].monitor, v18, v19, v20);
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
    sub_1C372B4(this);
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