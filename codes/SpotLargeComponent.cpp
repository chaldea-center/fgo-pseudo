void __fastcall SpotLargeComponent___ctor(SpotLargeComponent_o *this, const MethodInfo *method)
{
  this->fields.mapModelScale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SpotLargeComponent__Awake(SpotLargeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CStateManager_SpotLargeComponent__o **p_mFSM; // x20
  CStateManager_T__o *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  CStateManager_T__o *v21; // x21
  Il2CppObject *v22; // x22
  CStateManager_T__o *v23; // x21
  Il2CppObject *v24; // x22
  CStateManager_T__o *v25; // x20
  Il2CppObject *v26; // x21
  const MethodInfo *v27; // x2

  if ( (byte_4BB1ADF & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_SpotLargeComponent___ctor__, method);
    sub_1C13D24(&Method_CStateManager_SpotLargeComponent__add__, v3);
    sub_1C13D24(&CStateManager_SpotLargeComponent__TypeInfo, v4);
    sub_1C13D24(&SpotLargeComponent_StateLargeIn_TypeInfo, v5);
    sub_1C13D24(&SpotLargeComponent_StateLargeMain_TypeInfo, v6);
    sub_1C13D24(&SpotLargeComponent_StateLargeOut_TypeInfo, v7);
    sub_1C13D24(&SpotLargeComponent_StateNone_TypeInfo, v8);
    byte_4BB1ADF = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v10 = (CStateManager_T__o *)sub_1C13F70(CStateManager_SpotLargeComponent__TypeInfo);
    CStateManager_object____ctor(
      v10,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_31C327C *)Method_CStateManager_SpotLargeComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_SpotLargeComponent__o *)v10;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v18 = (Il2CppObject *)sub_1C13F70(SpotLargeComponent_StateNone_TypeInfo);
    System_Object___ctor(v18, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v18,
      (const MethodInfo_31C3324 *)Method_CStateManager_SpotLargeComponent__add__);
    v21 = (CStateManager_T__o *)*p_mFSM;
    v22 = (Il2CppObject *)sub_1C13F70(SpotLargeComponent_StateLargeIn_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !v21 )
      goto LABEL_9;
    CStateManager_object___add(
      v21,
      1,
      (IState_T__o *)v22,
      (const MethodInfo_31C3324 *)Method_CStateManager_SpotLargeComponent__add__);
    v23 = (CStateManager_T__o *)*p_mFSM;
    v24 = (Il2CppObject *)sub_1C13F70(SpotLargeComponent_StateLargeMain_TypeInfo);
    System_Object___ctor(v24, 0LL);
    if ( !v23
      || (CStateManager_object___add(
            v23,
            2,
            (IState_T__o *)v24,
            (const MethodInfo_31C3324 *)Method_CStateManager_SpotLargeComponent__add__),
          v25 = (CStateManager_T__o *)*p_mFSM,
          v26 = (Il2CppObject *)sub_1C13F70(SpotLargeComponent_StateLargeOut_TypeInfo),
          System_Object___ctor(v26, 0LL),
          !v25) )
    {
LABEL_9:
      sub_1C13F80(v19, v20);
    }
    CStateManager_object___add(
      v25,
      3,
      (IState_T__o *)v26,
      (const MethodInfo_31C3324 *)Method_CStateManager_SpotLargeComponent__add__);
    SpotLargeComponent__SetState(this, 0, v27);
  }
}


void __fastcall SpotLargeComponent__ForceOff(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C13F80(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.mFSM )
    SpotLargeComponent__SetState(this, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall SpotLargeComponent__GetBasePosition(
        SpotLargeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mBaseSpot; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *mMapCamera; // x20
  UnityEngine_Component_o *mScrl; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  unsigned __int64 v8; // d0
  float z; // s2
  float32x2_t v10; // d0
  float v11; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v13; // s2
  unsigned __int32 v14; // s1
  struct MapCamera_o *v15; // x8
  float32x2_t v16; // d9
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  float BaseScale; // s0
  float32x2_t v20; // d9
  float v21; // s8
  float32x2_t *v22; // x8
  float v23; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB1AE5 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB1AE5 = 1;
  }
  mBaseSpot = (UnityEngine_Object_o *)this->fields.mBaseSpot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mBaseSpot, 0LL, 0LL) )
    goto LABEL_9;
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mScrl = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(mMapCamera, 0LL, 0LL);
  if ( ((unsigned __int8)mScrl & 1) != 0 )
  {
LABEL_9:
    if ( !byte_4BAEDA1 )
    {
      sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v4);
      byte_4BAEDA1 = 1;
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
    gameObject = UnityEngine_Component__get_gameObject(mScrl, 0LL);
    *(UnityEngine_Vector3_o *)v10.n64_u64 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    v11 = v13;
    v10.n64_u32[1] = v14;
  }
  v15 = this->fields.mMapCamera;
  if ( !v15 || (mScrl = (UnityEngine_Component_o *)v15->fields.mScrl) == 0LL )
LABEL_22:
    sub_1C13F80(mScrl, v4);
  v16.n64_u64[0] = vsub_f32(v10, (float32x2_t)MapScroll__GetScrlPos((MapScroll_o *)mScrl, 0LL)).n64_u64[0];
  BaseScale = SpotLargeComponent__GetBaseScale(this, v17);
  v20.n64_u64[0] = vmul_n_f32(v16, BaseScale).n64_u64[0];
  v21 = v11 * BaseScale;
  if ( !byte_4BAEDA9 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v18);
    byte_4BAEDA9 = 1;
  }
  v22 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v8 = vadd_f32(v20, vmul_f32(v22[3], (float32x2_t)0xC2000000C2000000LL)).n64_u64[0];
  z = v21 + (float)(v22[4].n64_f32[0] * -32.0);
LABEL_21:
  v23 = *((float *)&v8 + 1);
  result.fields.x = *(float *)&v8;
  result.fields.z = z;
  result.fields.y = v23;
  return result;
}


float __fastcall SpotLargeComponent__GetBaseScale(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMapCamera; // x20
  MapZoom_o *mZoom; // x0
  __int64 v5; // x1
  float result; // s0
  struct MapCamera_o *v7; // x8

  if ( (byte_4BB1AE4 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB1AE4 = 1;
  }
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mZoom = (MapZoom_o *)UnityEngine_Object__op_Equality(mMapCamera, 0LL, 0LL);
  result = 0.0;
  if ( ((unsigned __int8)mZoom & 1) == 0 )
  {
    v7 = this->fields.mMapCamera;
    if ( !v7 || (mZoom = v7->fields.mZoom) == 0LL )
      sub_1C13F80(mZoom, v5);
    return 1.0 / MapZoom__GetZoomSize(mZoom, 0LL);
  }
  return result;
}


int32_t __fastcall SpotLargeComponent__GetState(SpotLargeComponent_o *this, const MethodInfo *method)
{
  SpotLargeComponent_o *v2; // x19
  struct CStateManager_SpotLargeComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4BB1AE2 & 1) == 0 )
  {
    this = (SpotLargeComponent_o *)sub_1C13D24(&Method_CStateManager_SpotLargeComponent__getState__, method);
    byte_4BB1AE2 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C13F80(this, method);
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotLargeComponent__LargeIn(
        SpotLargeComponent_o *this,
        SrcSpotBasePrefab_o *spot,
        MapCamera_o *mapCamera,
        MapModelCamera_o *mapModelCamera,
        System_Action_o *endAct,
        bool isMapModel,
        UnityEngine_Vector3_o screenSpotPosition,
        const MethodInfo *method)
{
  PartyListViewItem_o *v8; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  bool v18; // w22
  __int64 v19; // x1
  __int64 v20; // x1
  struct SrcSpotBasePrefab_o **p_mBaseSpot; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  const MethodInfo *v29; // x1
  SpotEntity_o *Mine; // x24
  __int64 v31; // x8
  char v32; // w26
  UnityEngine_GameObject_o *v33; // x25
  bool v34; // w1
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_UIAtlas__o *atlases; // x25
  UISprite_o *mSpotSp; // x26
  const MethodInfo *v38; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  float v40; // s0
  float v41; // s1
  float v42; // s2
  float v43; // s8
  float v44; // s9
  float v45; // s10
  UnityEngine_GameObject_o *v46; // x0
  float v47; // s11
  float v48; // s12
  float v49; // s13
  float v50; // s11
  float v51; // s9
  float BaseScale; // s8
  UnityEngine_GameObject_o *v53; // x0
  const MethodInfo *v54; // x1
  float v55; // s8
  float v56; // s9
  float v57; // s10
  UnityEngine_GameObject_o *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  const MethodInfo *v65; // x2
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BasePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  z = screenSpotPosition.fields.z;
  y = screenSpotPosition.fields.y;
  x = screenSpotPosition.fields.x;
  v18 = isMapModel;
  if ( (byte_4BB1AE1 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, spot);
    sub_1C13D24(&SrcSpotBasePrefab_TypeInfo, v19);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v20);
    byte_4BB1AE1 = 1;
  }
  this->fields.isMapModel = v18;
  this->fields.screenSpotPosition.fields.x = x;
  this->fields.screenSpotPosition.fields.y = y;
  this->fields.screenSpotPosition.fields.z = z;
  this->fields.mBaseSpot = spot;
  p_mBaseSpot = &this->fields.mBaseSpot;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.mBaseSpot,
    (int64_t)spot,
    (int64_t)mapCamera,
    (int32_t)mapModelCamera,
    (System_String_o *)endAct,
    (BattleSetupInfo_o *)isMapModel,
    (FollowerInfo_o *)method,
    v8);
  this->fields.mMapCamera = mapCamera;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.mMapCamera, (int64_t)mapCamera, v22, v23, v24, v25, v26, v27);
  if ( !this->fields.mBaseSpot )
    goto LABEL_42;
  mMapCtrl_SpotInfo = this->fields.mBaseSpot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_42;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v29);
    byte_4BAF374 = 1;
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  }
  v31 = *(_QWORD *)mMapCtrl_SpotInfo[2].monitor;
  if ( !v31 )
    goto LABEL_42;
  if ( !spot )
    goto LABEL_42;
  mMapCtrl_SpotInfo = *(MapControl_SpotInfo_o **)(v31 + 256);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_42;
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)ScrTerminalListTop__IsDispEventUIForSpot(
                                                 (ScrTerminalListTop_o *)mMapCtrl_SpotInfo,
                                                 spot->fields.miSpotID,
                                                 0LL);
  if ( !this->fields.mSpotNameSp )
    goto LABEL_42;
  v32 = (char)mMapCtrl_SpotInfo;
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.mSpotNameSp,
                                                 0LL);
  v33 = (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo;
  if ( (v32 & 1) != 0 )
  {
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, 0, 0LL);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.mSpotSp;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    v34 = 0;
  }
  else
  {
    if ( !*p_mBaseSpot )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)System_String__IsNullOrEmpty((*p_mBaseSpot)->fields.mSpotNameStr, 0LL);
    if ( !v33 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v33, ((unsigned __int8)mMapCtrl_SpotInfo & 1) == 0, 0LL);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.mSpotSp;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    v34 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, v34, 0LL);
  if ( !*p_mBaseSpot )
    goto LABEL_42;
  atlases = (*p_mBaseSpot)->fields.atlases;
  mSpotSp = this->fields.mSpotSp;
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  SrcSpotBasePrefab__SetSpotUIWithOffsetY(atlases, mSpotSp, Mine, 0.0, v35);
  if ( !*p_mBaseSpot )
LABEL_42:
    sub_1C13F80(mMapCtrl_SpotInfo, v29);
  SrcSpotBasePrefab__SetSpotNameUI(
    (*p_mBaseSpot)->fields.atlases,
    this->fields.mSpotNameSp,
    this->fields.mSpotNameLabel,
    (*p_mBaseSpot)->fields.mSpotNameStr,
    v38);
  this->fields.mapModelScale = 1.0;
  if ( isMapModel )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)mapModelCamera,
                                                   0LL,
                                                   0LL);
    if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
    {
      if ( mapModelCamera )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mapModelCamera, 0LL);
        *(UnityEngine_Vector3_o *)&v40 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
        mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)*p_mBaseSpot;
        if ( *p_mBaseSpot )
        {
          v43 = v40;
          v44 = v41;
          v45 = v42;
          v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mMapCtrl_SpotInfo, 0LL);
          LocalPosition = GameObjectExtensions__GetLocalPosition(v46, 0LL);
          v47 = LocalPosition.fields.x;
          v48 = LocalPosition.fields.y;
          v49 = LocalPosition.fields.z;
          if ( !byte_4BAED9F )
          {
            sub_1C13D24(&System_Math_TypeInfo, v29);
            byte_4BAED9F = 1;
          }
          v50 = v43 - v47;
          v51 = v44 - v48;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          this->fields.mapModelScale = 2000.0
                                     / sqrtf(
                                         (float)((float)(v45 - v49) * (float)(v45 - v49))
                                       + (float)((float)(v50 * v50) + (float)(v51 * v51)));
          goto LABEL_41;
        }
      }
      goto LABEL_42;
    }
  }
LABEL_41:
  BaseScale = SpotLargeComponent__GetBaseScale(this, v29);
  v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34713904(v53, BaseScale, 0LL);
  BasePosition = SpotLargeComponent__GetBasePosition(this, v54);
  v55 = BasePosition.fields.x;
  v56 = BasePosition.fields.y;
  v57 = BasePosition.fields.z;
  v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v68.fields.x = v55;
  v68.fields.y = v56;
  v68.fields.z = v57;
  GameObjectExtensions__SetLocalPosition(v58, v68, 0LL);
  this->fields.mShowEndAct = endAct;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.mShowEndAct, (int64_t)endAct, v59, v60, v61, v62, v63, v64);
  SpotLargeComponent__SetState(this, 1, v65);
}


void __fastcall SpotLargeComponent__LargeOut(
        SpotLargeComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x2

  this->fields.mHideEndAct = end_act;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.mHideEndAct,
    (int64_t)end_act,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SpotLargeComponent__SetState(this, 3, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotLargeComponent__SetLargeSpotNameScale_NormalScale(
        SpotLargeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  float v5; // s0
  float v6; // s1
  UnityEngine_Component_o *mSpotNameSp; // x0
  float v8; // s8
  float v9; // s9
  UnityEngine_GameObject_o *v10; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v5 = GameObjectExtensions__GetLocalScale(gameObject, 0LL);
  mSpotNameSp = (UnityEngine_Component_o *)this->fields.mSpotNameSp;
  if ( !mSpotNameSp )
    sub_1C13F80(0LL, v4);
  v8 = v5;
  v9 = v6;
  v10 = UnityEngine_Component__get_gameObject(mSpotNameSp, 0LL);
  GameObjectExtensions__SetLocalScale_34713964(v10, 1.0 / v8, 1.0 / v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotLargeComponent__SetState(SpotLargeComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BB1AE3 & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_SpotLargeComponent__setState__, *(_QWORD *)&state);
    byte_4BB1AE3 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C13F80(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_31C33B0 *)Method_CStateManager_SpotLargeComponent__setState__);
}


void __fastcall SpotLargeComponent__StateLargeIn_End(SpotLargeComponent_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_mShowEndAct; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  const MethodInfo *v10; // x2

  p_mShowEndAct = (PartyOrganizationUtility_o *)&this->fields.mShowEndAct;
  ActionExtensions__Call(this->fields.mShowEndAct, 0LL);
  p_mShowEndAct->klass = 0LL;
  sub_1C13CC8(p_mShowEndAct, 0LL, v4, v5, v6, v7, v8, v9);
  SpotLargeComponent__SetState(this, 2, v10);
}


void __fastcall SpotLargeComponent__StateLargeOut_End(SpotLargeComponent_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_mHideEndAct; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  const MethodInfo *v10; // x2

  p_mHideEndAct = (PartyOrganizationUtility_o *)&this->fields.mHideEndAct;
  ActionExtensions__Call(this->fields.mHideEndAct, 0LL);
  p_mHideEndAct->klass = 0LL;
  sub_1C13CC8(p_mHideEndAct, 0LL, v4, v5, v6, v7, v8, v9);
  SpotLargeComponent__SetState(this, 0, v10);
}


void __fastcall SpotLargeComponent__Update(SpotLargeComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BB1AE0 & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_SpotLargeComponent__update__, method);
    byte_4BB1AE0 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_31C338C *)Method_CStateManager_SpotLargeComponent__update__);
}


void __fastcall SpotLargeComponent_StateLargeIn___ctor(
        SpotLargeComponent_StateLargeIn_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotLargeComponent_StateLargeIn__begin(
        SpotLargeComponent_StateLargeIn_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  int v10; // s0
  int v11; // s1
  int v12; // s2
  UnityEngine_GameObject_o *v13; // x0
  Il2CppObject *v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float mapModelScale; // s3
  UnityEngine_GameObject_o *v20; // x0
  SpotLargeComponent_StateLargeIn_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BB1AE6 & 1) == 0 )
  {
    sub_1C13D24(&Method_UITweener_Begin_TweenAlpha___, that);
    sub_1C13D24(&Method_UITweener_Begin_TweenPosition___, v4);
    sub_1C13D24(&Method_UITweener_Begin_TweenScale___, v5);
    this = (SpotLargeComponent_StateLargeIn_o *)sub_1C13D24(&StringLiteral_13208/*"StartVoice"*/, v6);
    byte_4BB1AE6 = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v8 = UITweener__Begin_object_(gameObject, 0.15, (const MethodInfo_3043CC0 *)Method_UITweener_Begin_TweenPosition___);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v10 = GameObjectExtensions__GetLocalPosition(v9, 0LL);
  if ( !v8 )
    goto LABEL_8;
  LODWORD(v8[8].klass) = v10;
  HIDWORD(v8[8].klass) = v11;
  LODWORD(v8[8].monitor) = v12;
  HIDWORD(v8[9].klass) = 0;
  *(void **)((char *)&v8[8].monitor + 4) = (void *)0xC2AA0000C3660000LL;
  LODWORD(v8[2].klass) = 2;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v14 = UITweener__Begin_object_(v13, 0.15, (const MethodInfo_3043CC0 *)Method_UITweener_Begin_TweenScale___);
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v16 = GameObjectExtensions__GetLocalScale(v15, 0LL);
  if ( !v14 )
    goto LABEL_8;
  mapModelScale = that->fields.mapModelScale;
  *(void **)((char *)&v14[8].monitor + 4) = (void *)0x4000000040000000LL;
  HIDWORD(v14[9].klass) = 1065353216;
  *(float *)&v14[8].klass = v16 * mapModelScale;
  *((float *)&v14[8].klass + 1) = v17 * mapModelScale;
  *(float *)&v14[8].monitor = v18 * mapModelScale;
  LODWORD(v14[2].klass) = 2;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  this = (SpotLargeComponent_StateLargeIn_o *)UITweener__Begin_object_(
                                                v20,
                                                0.15,
                                                (const MethodInfo_3043CC0 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_1C13F80(this, that);
  v21 = this;
  this[8].klass = (SpotLargeComponent_StateLargeIn_c *)0x3F80000000000000LL;
  LODWORD(this[2].klass) = 2;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v21[5].klass = (SpotLargeComponent_StateLargeIn_c *)v22;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v21[5], (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = StringLiteral_13208/*"StartVoice"*/;
  v21[5].monitor = (void *)StringLiteral_13208/*"StartVoice"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v21[5].monitor, v29, v30, v31, v32, v33, v34, v35);
}


void __fastcall SpotLargeComponent_StateLargeIn__end(
        SpotLargeComponent_StateLargeIn_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SpotLargeComponent_StateLargeIn__update(
        SpotLargeComponent_StateLargeIn_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_1C13F80(this, 0LL);
  SpotLargeComponent__SetLargeSpotNameScale_NormalScale(that, (const MethodInfo *)that);
}


void __fastcall SpotLargeComponent_StateLargeMain___ctor(
        SpotLargeComponent_StateLargeMain_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SpotLargeComponent_StateLargeMain__begin(
        SpotLargeComponent_StateLargeMain_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x8
  __int64 v7; // x8
  struct UISprite_o *mSpotSp; // x21
  System_Collections_Generic_List_UIAtlas__o *v9; // x20
  UIAtlas_o *UIAtlasBySpriteName; // x0
  struct UISprite_o *mSpotNameSp; // x19
  UIAtlas_o *v12; // x1

  if ( (byte_4BB1AE7 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIPanel___, that);
    this = (SpotLargeComponent_StateLargeMain_o *)sub_1C13D24(&TerminalSceneComponent_TypeInfo, v4);
    byte_4BB1AE7 = 1;
  }
  if ( !that )
    goto LABEL_19;
  SpotLargeComponent__SetLargeSpotNameScale_NormalScale(that, (const MethodInfo *)that);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  this = (SpotLargeComponent_StateLargeMain_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !this )
    goto LABEL_19;
  this = (SpotLargeComponent_StateLargeMain_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(SpotLargeComponent_StateLargeMain_o *, __int64, void *))this->klass[1]._1.parent)(
    this,
    1LL,
    this->klass[1]._1.generic_class);
  this = (SpotLargeComponent_StateLargeMain_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)that,
                                                  0LL);
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (SpotLargeComponent_StateLargeMain_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)that,
                                                  0LL);
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, that);
    byte_4BAF374 = 1;
  }
  this = (SpotLargeComponent_StateLargeMain_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    this = (SpotLargeComponent_StateLargeMain_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = *(_QWORD *)this[11].monitor;
  if ( !v6
    || (v7 = *(_QWORD *)(v6 + 264)) == 0
    || (mSpotSp = that->fields.mSpotSp) == 0LL
    || (v9 = *(System_Collections_Generic_List_UIAtlas__o **)(v7 + 304),
        UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v9, mSpotSp->fields.mSpriteName, 0LL),
        UISprite__set_atlas(mSpotSp, UIAtlasBySpriteName, 0LL),
        (mSpotNameSp = that->fields.mSpotNameSp) == 0LL) )
  {
LABEL_19:
    sub_1C13F80(this, that);
  }
  v12 = UIAtlas__GetUIAtlasBySpriteName(v9, mSpotNameSp->fields.mSpriteName, 0LL);
  UISprite__set_atlas(mSpotNameSp, v12, 0LL);
}


void __fastcall SpotLargeComponent_StateLargeMain__end(
        SpotLargeComponent_StateLargeMain_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SpotLargeComponent_StateLargeMain__update(
        SpotLargeComponent_StateLargeMain_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SpotLargeComponent_StateLargeOut___ctor(
        SpotLargeComponent_StateLargeOut_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotLargeComponent_StateLargeOut__begin(
        SpotLargeComponent_StateLargeOut_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  int v10; // s0
  int v11; // s1
  int v12; // s2
  UnityEngine_GameObject_o *v13; // x0
  Il2CppObject *v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  int v16; // s0
  int v17; // s1
  int v18; // s2
  float v19; // s0
  UnityEngine_GameObject_o *v20; // x0
  SpotLargeComponent_StateLargeOut_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BB1AE8 & 1) == 0 )
  {
    sub_1C13D24(&Method_UITweener_Begin_TweenAlpha___, that);
    sub_1C13D24(&Method_UITweener_Begin_TweenPosition___, v4);
    sub_1C13D24(&Method_UITweener_Begin_TweenScale___, v5);
    this = (SpotLargeComponent_StateLargeOut_o *)sub_1C13D24(&StringLiteral_13209/*"StartWhite"*/, v6);
    byte_4BB1AE8 = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v8 = UITweener__Begin_object_(gameObject, 0.05, (const MethodInfo_3043CC0 *)Method_UITweener_Begin_TweenPosition___);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v10 = GameObjectExtensions__GetLocalPosition(v9, 0LL);
  if ( !v8 )
    goto LABEL_8;
  LODWORD(v8[8].klass) = v10;
  HIDWORD(v8[8].klass) = v11;
  LODWORD(v8[8].monitor) = v12;
  *(UnityEngine_Vector3_o *)((char *)&v8[8].monitor + 4) = SpotLargeComponent__GetBasePosition(
                                                             that,
                                                             (const MethodInfo *)that);
  LODWORD(v8[2].klass) = 2;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v14 = UITweener__Begin_object_(v13, 0.05, (const MethodInfo_3043CC0 *)Method_UITweener_Begin_TweenScale___);
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v16 = GameObjectExtensions__GetLocalScale(v15, 0LL);
  if ( !v14 )
    goto LABEL_8;
  LODWORD(v14[8].klass) = v16;
  HIDWORD(v14[8].klass) = v17;
  LODWORD(v14[8].monitor) = v18;
  v19 = SpotLargeComponent__GetBaseScale(that, (const MethodInfo *)that) * that->fields.mapModelScale;
  HIDWORD(v14[9].klass) = 1065353216;
  *((float *)&v14[8].monitor + 1) = v19;
  *(float *)&v14[9].klass = v19;
  LODWORD(v14[2].klass) = 2;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  this = (SpotLargeComponent_StateLargeOut_o *)UITweener__Begin_object_(
                                                 v20,
                                                 0.05,
                                                 (const MethodInfo_3043CC0 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_1C13F80(this, that);
  v21 = this;
  this[8].klass = (SpotLargeComponent_StateLargeOut_c *)1065353216;
  LODWORD(this[2].klass) = 2;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v21[5].klass = (SpotLargeComponent_StateLargeOut_c *)v22;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v21[5], (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = StringLiteral_13209/*"StartWhite"*/;
  v21[5].monitor = (void *)StringLiteral_13209/*"StartWhite"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v21[5].monitor, v29, v30, v31, v32, v33, v34, v35);
}


void __fastcall SpotLargeComponent_StateLargeOut__end(
        SpotLargeComponent_StateLargeOut_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SpotLargeComponent_StateLargeOut__update(
        SpotLargeComponent_StateLargeOut_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_1C13F80(this, 0LL);
  SpotLargeComponent__SetLargeSpotNameScale_NormalScale(that, (const MethodInfo *)that);
}


void __fastcall SpotLargeComponent_StateNone___ctor(SpotLargeComponent_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SpotLargeComponent_StateNone__begin(
        SpotLargeComponent_StateNone_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SpotLargeComponent_StateNone__end(
        SpotLargeComponent_StateNone_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SpotLargeComponent_StateNone__update(
        SpotLargeComponent_StateNone_o *this,
        SpotLargeComponent_o *that,
        const MethodInfo *method)
{
  ;
}