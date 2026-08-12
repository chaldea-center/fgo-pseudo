void SpotLargeComponent___ctor(SpotLargeComponent_o *this, const MethodInfo *method)
{
  this->fields.mapModelScale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SpotLargeComponent__Awake(SpotLargeComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_SpotLargeComponent__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x21
  Il2CppObject *v18; // x22
  CStateManager_T__o *v19; // x20
  Il2CppObject *v20; // x21
  const MethodInfo *v21; // x2

  if ( (byte_596D93B & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_SpotLargeComponent___ctor__);
    sub_2213A60(&Method_CStateManager_SpotLargeComponent__add__);
    sub_2213A60(&CStateManager_SpotLargeComponent__TypeInfo);
    sub_2213A60(&SpotLargeComponent_StateLargeIn_TypeInfo);
    sub_2213A60(&SpotLargeComponent_StateLargeMain_TypeInfo);
    sub_2213A60(&SpotLargeComponent_StateLargeOut_TypeInfo);
    sub_2213A60(&SpotLargeComponent_StateNone_TypeInfo);
    byte_596D93B = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_2213CCC(CStateManager_SpotLargeComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3E83D54 *)Method_CStateManager_SpotLargeComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_SpotLargeComponent__o *)v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_2213CCC(SpotLargeComponent_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3E83E04 *)Method_CStateManager_SpotLargeComponent__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_2213CCC(SpotLargeComponent_StateLargeIn_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_9;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_3E83E04 *)Method_CStateManager_SpotLargeComponent__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (Il2CppObject *)sub_2213CCC(SpotLargeComponent_StateLargeMain_TypeInfo);
    System_Object___ctor(v18, 0);
    if ( !v17
      || (CStateManager_object___add(
            v17,
            2,
            (IState_T__o *)v18,
            (const MethodInfo_3E83E04 *)Method_CStateManager_SpotLargeComponent__add__),
          v19 = (CStateManager_T__o *)*p_mFSM,
          v20 = (Il2CppObject *)sub_2213CCC(SpotLargeComponent_StateLargeOut_TypeInfo),
          System_Object___ctor(v20, 0),
          !v19) )
    {
LABEL_9:
      sub_2213CDC(v13, v14);
    }
    CStateManager_object___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_3E83E04 *)Method_CStateManager_SpotLargeComponent__add__);
    SpotLargeComponent__SetState(this, 0, v21);
  }
}


void SpotLargeComponent__ForceOff(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  if ( this->fields.mFSM )
    SpotLargeComponent__SetState(this, 0, v5);
}


UnityEngine_Vector3_o SpotLargeComponent__GetBasePosition(SpotLargeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mBaseSpot; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *mMapCamera; // x20
  UnityEngine_Component_o *mScrl; // x0
  __int64 v9; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  unsigned __int64 v11; // d0
  float32x2_t v13; // d0
  float z; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MapCamera_o *v16; // x8
  float32x2_t v17; // d9
  const MethodInfo *v18; // x1
  float BaseScale; // s0
  float32x2_t v20; // d9
  float v21; // s8
  float32x2_t *v22; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D941 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D941 = 1;
  }
  mBaseSpot = (UnityEngine_Object_o *)this->fields.mBaseSpot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mBaseSpot, 0, 0) )
    goto LABEL_9;
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  mScrl = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(mMapCamera, 0, 0);
  if ( ((unsigned __int8)mScrl & 1) != 0 )
  {
LABEL_9:
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v11 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    result.fields.z = static_fields->zeroVector.fields.z;
    goto LABEL_21;
  }
  if ( this->fields.isMapModel )
  {
    v13.n64_u64[0] = *(unsigned __int64 *)&this->fields.screenSpotPosition.fields.x;
    z = this->fields.screenSpotPosition.fields.z;
  }
  else
  {
    mScrl = (UnityEngine_Component_o *)this->fields.mBaseSpot;
    if ( !mScrl )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject(mScrl, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
    v13.n64_u64[0] = *(unsigned __int64 *)&LocalPosition.fields.x;
    z = LocalPosition.fields.z;
  }
  v16 = this->fields.mMapCamera;
  if ( !v16 || (mScrl = (UnityEngine_Component_o *)v16->fields.mScrl) == 0 )
LABEL_22:
    sub_2213CDC(mScrl, v9);
  v17.n64_u64[0] = vsub_f32(v13, (float32x2_t)MapScroll__GetScrlPos((MapScroll_o *)mScrl, 0)).n64_u64[0];
  BaseScale = SpotLargeComponent__GetBaseScale(this, v18);
  v20.n64_u64[0] = vmul_n_f32(v17, BaseScale).n64_u64[0];
  v21 = z * BaseScale;
  if ( !byte_5969AE8 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE8 = 1;
  }
  v22 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v11 = vadd_f32(v20, vmul_f32(v22[3], (float32x2_t)0xC2000000C2000000LL)).n64_u64[0];
  result.fields.z = v21 + (float)(v22[4].n64_f32[0] * -32.0);
LABEL_21:
  result.fields.y = *((float *)&v11 + 1);
  result.fields.x = *(float *)&v11;
  return result;
}


float SpotLargeComponent__GetBaseScale(SpotLargeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mMapCamera; // x20
  MapZoom_o *mZoom; // x0
  __int64 v6; // x1
  float result; // s0
  struct MapCamera_o *v8; // x8

  if ( (byte_596D940 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D940 = 1;
  }
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  mZoom = (MapZoom_o *)UnityEngine_Object__op_Equality(mMapCamera, 0, 0);
  result = 0.0;
  if ( ((unsigned __int8)mZoom & 1) == 0 )
  {
    v8 = this->fields.mMapCamera;
    if ( !v8 || (mZoom = v8->fields.mZoom) == 0 )
      sub_2213CDC(mZoom, v6);
    return 1.0 / MapZoom__GetZoomSize(mZoom, 0);
  }
  return result;
}


int32_t SpotLargeComponent__GetState(SpotLargeComponent_o *this, const MethodInfo *method)
{
  SpotLargeComponent_o *v2; // x19
  struct CStateManager_SpotLargeComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_596D93E & 1) == 0 )
  {
    this = (SpotLargeComponent_o *)sub_2213A60(&Method_CStateManager_SpotLargeComponent__getState__);
    byte_596D93E = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(this, method);
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
  bool v8; // w7
  float z; // s8
  float y; // s9
  float x; // s10
  bool v18; // w22
  struct SrcSpotBasePrefab_o **p_mBaseSpot; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  char v23; // w5
  bool v24; // w6
  bool v25; // w7
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  const MethodInfo *v27; // x1
  SpotEntity_o *Mine; // x24
  __int64 v29; // x2
  __int64 v30; // x8
  bool IsDispEventUIForSpot; // w8
  bool v32; // w1
  UnityEngine_GameObject_o *v33; // x25
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_UIAtlas__o *atlases; // x25
  UISprite_o *mSpotSp; // x26
  const MethodInfo *v38; // x4
  __int64 v39; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v41; // x0
  __int64 v42; // x2
  float BaseScale; // s8
  UnityEngine_GameObject_o *v44; // x0
  const MethodInfo *v45; // x1
  UnityEngine_GameObject_o *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  char v50; // w5
  bool v51; // w6
  bool v52; // w7
  const MethodInfo *v53; // x2
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v55; // 0:kr14_12.12
  UnityEngine_Vector3_o BasePosition; // 0:kr20_12.12

  z = screenSpotPosition.fields.z;
  y = screenSpotPosition.fields.y;
  x = screenSpotPosition.fields.x;
  v18 = isMapModel;
  if ( (byte_596D93D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SrcSpotBasePrefab_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D93D = 1;
  }
  this->fields.isMapModel = v18;
  this->fields.mBaseSpot = spot;
  p_mBaseSpot = &this->fields.mBaseSpot;
  this->fields.screenSpotPosition.fields.x = x;
  this->fields.screenSpotPosition.fields.y = y;
  this->fields.screenSpotPosition.fields.z = z;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mBaseSpot,
    (int32_t)spot,
    (System_String_o *)mapCamera,
    (System_String_o *)mapModelCamera,
    (int32_t)endAct,
    isMapModel,
    (bool)method,
    v8);
  this->fields.mMapCamera = mapCamera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mMapCamera,
    (int32_t)mapCamera,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !this->fields.mBaseSpot )
    goto LABEL_43;
  mMapCtrl_SpotInfo = this->fields.mBaseSpot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_43;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, 1, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v27, v29);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v27, v29);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  }
  v30 = *(_QWORD *)mMapCtrl_SpotInfo[2].monitor;
  if ( !v30 )
    goto LABEL_43;
  if ( !spot )
    goto LABEL_43;
  mMapCtrl_SpotInfo = *(MapControl_SpotInfo_o **)(v30 + 256);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_43;
  IsDispEventUIForSpot = ScrTerminalListTop__IsDispEventUIForSpot(
                           (ScrTerminalListTop_o *)mMapCtrl_SpotInfo,
                           spot->fields.miSpotID,
                           0);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.mSpotNameSp;
  if ( IsDispEventUIForSpot )
  {
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_43;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, 0, 0);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.mSpotSp;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_43;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_43;
    v32 = 0;
  }
  else
  {
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_43;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0);
    if ( !*p_mBaseSpot )
      goto LABEL_43;
    v33 = (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)System_String__IsNullOrEmpty((*p_mBaseSpot)->fields.mSpotNameStr, 0);
    if ( !v33 )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(v33, ((unsigned __int8)mMapCtrl_SpotInfo & 1) == 0, 0);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.mSpotSp;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_43;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_43;
    v32 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, v32, 0);
  if ( !*p_mBaseSpot )
    goto LABEL_43;
  atlases = (*p_mBaseSpot)->fields.atlases;
  mSpotSp = this->fields.mSpotSp;
  if ( !*(&SrcSpotBasePrefab_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v27, v34);
  SrcSpotBasePrefab__SetSpotUIWithOffsetY(atlases, mSpotSp, Mine, 0.0, v35);
  if ( !*p_mBaseSpot )
LABEL_43:
    sub_2213CDC(mMapCtrl_SpotInfo, v27);
  SrcSpotBasePrefab__SetSpotNameUI(
    (*p_mBaseSpot)->fields.atlases,
    this->fields.mSpotNameSp,
    this->fields.mSpotNameLabel,
    (*p_mBaseSpot)->fields.mSpotNameStr,
    v38);
  this->fields.mapModelScale = 1.0;
  if ( isMapModel )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v39);
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
          v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mMapCtrl_SpotInfo, 0);
          v55 = GameObjectExtensions__GetLocalPosition(v41, 0);
          if ( !byte_5969ADE )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_5969ADE = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v27, v42);
          this->fields.mapModelScale = 2000.0
                                     / sqrtf(
                                         (float)((float)(LocalPosition.fields.z - v55.fields.z)
                                               * (float)(LocalPosition.fields.z - v55.fields.z))
                                       + (float)((float)((float)(LocalPosition.fields.x - v55.fields.x)
                                                       * (float)(LocalPosition.fields.x - v55.fields.x))
                                               + (float)((float)(LocalPosition.fields.y - v55.fields.y)
                                                       * (float)(LocalPosition.fields.y - v55.fields.y))));
          goto LABEL_42;
        }
      }
      goto LABEL_43;
    }
  }
LABEL_42:
  BaseScale = SpotLargeComponent__GetBaseScale(this, v27);
  v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale_42893524(v44, BaseScale, 0);
  BasePosition = SpotLargeComponent__GetBasePosition(this, v45);
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition(v46, BasePosition, 0);
  this->fields.mShowEndAct = endAct;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mShowEndAct,
    (int32_t)endAct,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  SpotLargeComponent__SetState(this, 1, v53);
}


void SpotLargeComponent__LargeOut(SpotLargeComponent_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x2

  this->fields.mHideEndAct = end_act;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mHideEndAct,
    (int32_t)end_act,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SpotLargeComponent__SetState(this, 3, v9);
}


void SpotLargeComponent__SetLargeSpotNameScale_NormalScale(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *mSpotNameSp; // x0
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  unsigned __int64 LocalScale; // kr00_8

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalScale = (unsigned __int64)GameObjectExtensions__GetLocalScale(gameObject, 0);
  mSpotNameSp = (UnityEngine_Component_o *)this->fields.mSpotNameSp;
  if ( !mSpotNameSp )
    sub_2213CDC(0, v6);
  v5 = UnityEngine_Component__get_gameObject(mSpotNameSp, 0);
  GameObjectExtensions__SetLocalScale_42893584(v5, 1.0 / *(float *)&LocalScale, 1.0 / *((float *)&LocalScale + 1), 0);
}


// local variable allocation has failed, the output may be wrong!
void SpotLargeComponent__SetState(SpotLargeComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596D93F & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_SpotLargeComponent__setState__);
    byte_596D93F = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_SpotLargeComponent__setState__);
}


void SpotLargeComponent__StateLargeIn_End(SpotLargeComponent_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_mShowEndAct; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x2

  p_mShowEndAct = (MissionNaviTransitionBoardItem_o *)&this->fields.mShowEndAct;
  ActionExtensions__Call(this->fields.mShowEndAct, 0);
  p_mShowEndAct->klass = 0;
  sub_2213A04(p_mShowEndAct, 0, v4, v5, v6, v7, v8, v9);
  SpotLargeComponent__SetState(this, 2, v10);
}


void SpotLargeComponent__StateLargeOut_End(SpotLargeComponent_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_mHideEndAct; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x2

  p_mHideEndAct = (MissionNaviTransitionBoardItem_o *)&this->fields.mHideEndAct;
  ActionExtensions__Call(this->fields.mHideEndAct, 0);
  p_mHideEndAct->klass = 0;
  sub_2213A04(p_mHideEndAct, 0, v4, v5, v6, v7, v8, v9);
  SpotLargeComponent__SetState(this, 0, v10);
}


void SpotLargeComponent__Update(SpotLargeComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596D93C & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_SpotLargeComponent__update__);
    byte_596D93C = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3E83E6C *)Method_CStateManager_SpotLargeComponent__update__);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o LocalScale; // 0:kr14_12.12

  if ( (byte_596D942 & 1) == 0 )
  {
    sub_2213A60(&Method_UITweener_Begin_TweenAlpha___);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    sub_2213A60(&Method_UITweener_Begin_TweenScale___);
    this = (SpotLargeComponent_StateLargeIn_o *)sub_2213A60(&StringLiteral_13621/*"StateLargeIn_End"*/);
    byte_596D942 = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v5 = UITweener__Begin_object_(gameObject, 0.15, (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v6, 0);
  if ( !v5 )
    goto LABEL_8;
  *(UnityEngine_Vector3_o *)&v5[8].klass = LocalPosition;
  *(void **)((char *)&v5[8].monitor + 4) = (void *)0xC2AA0000C3660000LL;
  HIDWORD(v5[9].klass) = 0;
  LODWORD(v5[2].klass) = 2;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v8 = UITweener__Begin_object_(v7, 0.15, (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenScale___);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(v9, 0);
  if ( !v8 )
    goto LABEL_8;
  mapModelScale = that->fields.mapModelScale;
  HIDWORD(v8[9].klass) = 1065353216;
  *(void **)((char *)&v8[8].monitor + 4) = (void *)0x4000000040000000LL;
  *(float *)&v8[8].klass = LocalScale.fields.x * mapModelScale;
  *((float *)&v8[8].klass + 1) = LocalScale.fields.y * mapModelScale;
  *(float *)&v8[8].monitor = LocalScale.fields.z * mapModelScale;
  LODWORD(v8[2].klass) = 2;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  this = (SpotLargeComponent_StateLargeIn_o *)UITweener__Begin_object_(
                                                v11,
                                                0.15,
                                                (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_2213CDC(this, that);
  v12 = this;
  *((_DWORD *)this + 8) = 2;
  *((_QWORD *)this + 16) = 0x3F80000000000000LL;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v12[5].klass = (SpotLargeComponent_StateLargeIn_c *)v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[5], (int32_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = StringLiteral_13621/*"StateLargeIn_End"*/;
  v12[5].monitor = (void *)StringLiteral_13621/*"StateLargeIn_End"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[5].monitor, v20, v21, v22, v23, v24, v25, v26);
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
    sub_2213CDC(this, 0);
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
  __int64 v5; // x2
  __int64 v6; // x8
  __int64 v7; // x8
  struct UISprite_o *mSpotSp; // x21
  System_Collections_Generic_List_UIAtlas__o *v9; // x20
  UIAtlas_o *UIAtlasBySpriteName; // x0
  struct UISprite_o *mSpotNameSp; // x19
  UIAtlas_o *v12; // x1

  if ( (byte_596D943 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    this = (SpotLargeComponent_StateLargeMain_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D943 = 1;
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
                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, that, v5);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  this = (SpotLargeComponent_StateLargeMain_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, that, v5);
    this = (SpotLargeComponent_StateLargeMain_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = **((_QWORD **)this + 23);
  if ( !v6
    || (v7 = *(_QWORD *)(v6 + 264)) == 0
    || (mSpotSp = that->fields.mSpotSp) == 0
    || (v9 = *(System_Collections_Generic_List_UIAtlas__o **)(v7 + 304),
        UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v9, mSpotSp->fields.mSpriteName, 0),
        UISprite__set_atlas(mSpotSp, UIAtlasBySpriteName, 0),
        (mSpotNameSp = that->fields.mSpotNameSp) == 0) )
  {
LABEL_19:
    sub_2213CDC(this, that);
  }
  v12 = UIAtlas__GetUIAtlasBySpriteName(v9, mSpotNameSp->fields.mSpriteName, 0);
  UISprite__set_atlas(mSpotNameSp, v12, 0);
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
  float BaseScale; // s0
  float mapModelScale; // s1
  float v12; // s0
  UnityEngine_GameObject_o *v13; // x0
  SpotLargeComponent_StateLargeOut_o *v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o LocalScale; // 0:kr20_12.12

  if ( (byte_596D944 & 1) == 0 )
  {
    sub_2213A60(&Method_UITweener_Begin_TweenAlpha___);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    sub_2213A60(&Method_UITweener_Begin_TweenScale___);
    this = (SpotLargeComponent_StateLargeOut_o *)sub_2213A60(&StringLiteral_13622/*"StateLargeOut_End"*/);
    byte_596D944 = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v5 = UITweener__Begin_object_(gameObject, 0.05, (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
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
  v8 = UITweener__Begin_object_(v7, 0.05, (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenScale___);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(v9, 0);
  if ( !v8 )
    goto LABEL_8;
  *(UnityEngine_Vector3_o *)&v8[8].klass = LocalScale;
  BaseScale = SpotLargeComponent__GetBaseScale(that, (const MethodInfo *)that);
  mapModelScale = that->fields.mapModelScale;
  HIDWORD(v8[9].klass) = 1065353216;
  v12 = BaseScale * mapModelScale;
  LODWORD(v8[2].klass) = 2;
  *((float *)&v8[8].monitor + 1) = v12;
  *(float *)&v8[9].klass = v12;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  this = (SpotLargeComponent_StateLargeOut_o *)UITweener__Begin_object_(
                                                 v13,
                                                 0.05,
                                                 (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_2213CDC(this, that);
  v14 = this;
  *((_DWORD *)this + 8) = 2;
  *((_QWORD *)this + 16) = 1065353216;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v14[5].klass = (SpotLargeComponent_StateLargeOut_c *)v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14[5], (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_13622/*"StateLargeOut_End"*/;
  v14[5].monitor = (void *)StringLiteral_13622/*"StateLargeOut_End"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14[5].monitor, v22, v23, v24, v25, v26, v27, v28);
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
    sub_2213CDC(this, 0);
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