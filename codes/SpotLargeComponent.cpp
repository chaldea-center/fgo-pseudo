void __fastcall SpotLargeComponent___ctor(SpotLargeComponent_o *this, const MethodInfo *method)
{
  this->fields.mapModelScale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SpotLargeComponent__Awake(SpotLargeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct CStateManager_SpotLargeComponent__o **p_mFSM; // x20
  CStateManager_T__o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  CStateManager_T__o *mFSM; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  Il2CppObject *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  CStateManager_T__o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  Il2CppObject *v36; // x22
  CStateManager_T__o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  Il2CppObject *v41; // x22
  CStateManager_T__o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  Il2CppObject *v46; // x21
  const MethodInfo *v47; // x2

  if ( (byte_4B13632 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_SpotLargeComponent___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_SpotLargeComponent__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_SpotLargeComponent__TypeInfo, v7, v8);
    sub_1BCA7E0(&SpotLargeComponent_StateLargeIn_TypeInfo, v9, v10);
    sub_1BCA7E0(&SpotLargeComponent_StateLargeMain_TypeInfo, v11, v12);
    sub_1BCA7E0(&SpotLargeComponent_StateLargeOut_TypeInfo, v13, v14);
    sub_1BCA7E0(&SpotLargeComponent_StateNone_TypeInfo, v15, v16);
    byte_4B13632 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v18 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_SpotLargeComponent__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_313FBC4 *)Method_CStateManager_SpotLargeComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_SpotLargeComponent__o *)v18;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v18, v19, v20, v21, v22, v23, v24);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v29 = (Il2CppObject *)sub_1BCAA2C(SpotLargeComponent_StateNone_TypeInfo, v26, v27, v28);
    System_Object___ctor(v29, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v29,
      (const MethodInfo_313FC6C *)Method_CStateManager_SpotLargeComponent__add__);
    v32 = (CStateManager_T__o *)*p_mFSM;
    v36 = (Il2CppObject *)sub_1BCAA2C(SpotLargeComponent_StateLargeIn_TypeInfo, v33, v34, v35);
    System_Object___ctor(v36, 0LL);
    if ( !v32 )
      goto LABEL_9;
    CStateManager_object___add(
      v32,
      1,
      (IState_T__o *)v36,
      (const MethodInfo_313FC6C *)Method_CStateManager_SpotLargeComponent__add__);
    v37 = (CStateManager_T__o *)*p_mFSM;
    v41 = (Il2CppObject *)sub_1BCAA2C(SpotLargeComponent_StateLargeMain_TypeInfo, v38, v39, v40);
    System_Object___ctor(v41, 0LL);
    if ( !v37
      || (CStateManager_object___add(
            v37,
            2,
            (IState_T__o *)v41,
            (const MethodInfo_313FC6C *)Method_CStateManager_SpotLargeComponent__add__),
          v42 = (CStateManager_T__o *)*p_mFSM,
          v46 = (Il2CppObject *)sub_1BCAA2C(SpotLargeComponent_StateLargeOut_TypeInfo, v43, v44, v45),
          System_Object___ctor(v46, 0LL),
          !v42) )
    {
LABEL_9:
      sub_1BCAA3C(v30, v31);
    }
    CStateManager_object___add(
      v42,
      3,
      (IState_T__o *)v46,
      (const MethodInfo_313FC6C *)Method_CStateManager_SpotLargeComponent__add__);
    SpotLargeComponent__SetState(this, 0, v47);
  }
}


void __fastcall SpotLargeComponent__ForceOff(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.mFSM )
    SpotLargeComponent__SetState(this, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall SpotLargeComponent__GetBasePosition(
        SpotLargeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mBaseSpot; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *mMapCamera; // x20
  UnityEngine_Component_o *mScrl; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  unsigned __int64 v10; // d0
  float z; // s2
  float32x2_t v12; // d0
  float v13; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v15; // s2
  unsigned __int32 v16; // s1
  struct MapCamera_o *v17; // x8
  float32x2_t v18; // d9
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  float BaseScale; // s0
  float32x2_t v23; // d9
  float v24; // s8
  float32x2_t *v25; // x8
  float v26; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13638 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13638 = 1;
  }
  mBaseSpot = (UnityEngine_Object_o *)this->fields.mBaseSpot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mBaseSpot, 0LL, 0LL) )
    goto LABEL_9;
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  mScrl = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(mMapCamera, 0LL, 0LL);
  if ( ((unsigned __int8)mScrl & 1) != 0 )
  {
LABEL_9:
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v5, v6);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v10 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    goto LABEL_21;
  }
  if ( this->fields.isMapModel )
  {
    v12.n64_u64[0] = *(unsigned __int64 *)&this->fields.screenSpotPosition.fields.x;
    v13 = this->fields.screenSpotPosition.fields.z;
  }
  else
  {
    mScrl = (UnityEngine_Component_o *)this->fields.mBaseSpot;
    if ( !mScrl )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject(mScrl, 0LL);
    *(UnityEngine_Vector3_o *)v12.n64_u64 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    v13 = v15;
    v12.n64_u32[1] = v16;
  }
  v17 = this->fields.mMapCamera;
  if ( !v17 || (mScrl = (UnityEngine_Component_o *)v17->fields.mScrl) == 0LL )
LABEL_22:
    sub_1BCAA3C(mScrl, v5);
  v18.n64_u64[0] = vsub_f32(v12, (float32x2_t)MapScroll__GetScrlPos((MapScroll_o *)mScrl, 0LL)).n64_u64[0];
  BaseScale = SpotLargeComponent__GetBaseScale(this, v19);
  v23.n64_u64[0] = vmul_n_f32(v18, BaseScale).n64_u64[0];
  v24 = v13 * BaseScale;
  if ( !byte_4B109C9 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v21);
    byte_4B109C9 = 1;
  }
  v25 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v10 = vadd_f32(v23, vmul_f32(v25[3], (float32x2_t)0xC2000000C2000000LL)).n64_u64[0];
  z = v24 + (float)(v25[4].n64_f32[0] * -32.0);
LABEL_21:
  v26 = *((float *)&v10 + 1);
  result.fields.x = *(float *)&v10;
  result.fields.z = z;
  result.fields.y = v26;
  return result;
}


float __fastcall SpotLargeComponent__GetBaseScale(SpotLargeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mMapCamera; // x20
  MapZoom_o *mZoom; // x0
  __int64 v6; // x1
  float result; // s0
  struct MapCamera_o *v8; // x8

  if ( (byte_4B13637 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13637 = 1;
  }
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  mZoom = (MapZoom_o *)UnityEngine_Object__op_Equality(mMapCamera, 0LL, 0LL);
  result = 0.0;
  if ( ((unsigned __int8)mZoom & 1) == 0 )
  {
    v8 = this->fields.mMapCamera;
    if ( !v8 || (mZoom = v8->fields.mZoom) == 0LL )
      sub_1BCAA3C(mZoom, v6);
    return 1.0 / MapZoom__GetZoomSize(mZoom, 0LL);
  }
  return result;
}


int32_t __fastcall SpotLargeComponent__GetState(SpotLargeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SpotLargeComponent_o *v3; // x19
  struct CStateManager_SpotLargeComponent__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B13635 & 1) == 0 )
  {
    this = (SpotLargeComponent_o *)sub_1BCA7E0(&Method_CStateManager_SpotLargeComponent__getState__, method, v2);
    byte_4B13635 = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
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
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct SrcSpotBasePrefab_o **p_mBaseSpot; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  const MethodInfo *v31; // x1
  SpotEntity_o *Mine; // x24
  __int64 v33; // x2
  __int64 v34; // x8
  char v35; // w26
  UnityEngine_GameObject_o *v36; // x25
  bool v37; // w1
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_UIAtlas__o *atlases; // x25
  UISprite_o *mSpotSp; // x26
  const MethodInfo *v41; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  float v43; // s0
  float v44; // s1
  float v45; // s2
  float v46; // s8
  float v47; // s9
  float v48; // s10
  UnityEngine_GameObject_o *v49; // x0
  __int64 v50; // x2
  float v51; // s11
  float v52; // s12
  float v53; // s13
  float v54; // s11
  float v55; // s9
  float BaseScale; // s8
  UnityEngine_GameObject_o *v57; // x0
  const MethodInfo *v58; // x1
  float v59; // s8
  float v60; // s9
  float v61; // s10
  UnityEngine_GameObject_o *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  const MethodInfo *v69; // x2
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BasePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  z = screenSpotPosition.fields.z;
  y = screenSpotPosition.fields.y;
  x = screenSpotPosition.fields.x;
  v18 = isMapModel;
  if ( (byte_4B13634 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, spot, mapCamera);
    sub_1BCA7E0(&SrcSpotBasePrefab_TypeInfo, v19, v20);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v21, v22);
    byte_4B13634 = 1;
  }
  this->fields.isMapModel = v18;
  this->fields.screenSpotPosition.fields.x = x;
  this->fields.screenSpotPosition.fields.y = y;
  this->fields.screenSpotPosition.fields.z = z;
  this->fields.mBaseSpot = spot;
  p_mBaseSpot = &this->fields.mBaseSpot;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mBaseSpot,
    (int64_t)spot,
    (int64_t)mapCamera,
    (int32_t)mapModelCamera,
    (System_String_o *)endAct,
    (BattleSetupInfo_o *)isMapModel,
    (FollowerInfo_o *)method,
    v8);
  this->fields.mMapCamera = mapCamera;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mMapCamera, (int64_t)mapCamera, v24, v25, v26, v27, v28, v29);
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
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v31);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v31, v33);
    byte_4B10F83 = 1;
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v31);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  }
  v34 = *(_QWORD *)mMapCtrl_SpotInfo[2].monitor;
  if ( !v34 )
    goto LABEL_42;
  if ( !spot )
    goto LABEL_42;
  mMapCtrl_SpotInfo = *(MapControl_SpotInfo_o **)(v34 + 256);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_42;
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)ScrTerminalListTop__IsDispEventUIForSpot(
                                                 (ScrTerminalListTop_o *)mMapCtrl_SpotInfo,
                                                 spot->fields.miSpotID,
                                                 0LL);
  if ( !this->fields.mSpotNameSp )
    goto LABEL_42;
  v35 = (char)mMapCtrl_SpotInfo;
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.mSpotNameSp,
                                                 0LL);
  v36 = (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo;
  if ( (v35 & 1) != 0 )
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
    v37 = 0;
  }
  else
  {
    if ( !*p_mBaseSpot )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)System_String__IsNullOrEmpty((*p_mBaseSpot)->fields.mSpotNameStr, 0LL);
    if ( !v36 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v36, ((unsigned __int8)mMapCtrl_SpotInfo & 1) == 0, 0LL);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.mSpotSp;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    v37 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, v37, 0LL);
  if ( !*p_mBaseSpot )
    goto LABEL_42;
  atlases = (*p_mBaseSpot)->fields.atlases;
  mSpotSp = this->fields.mSpotSp;
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v31);
  SrcSpotBasePrefab__SetSpotUIWithOffsetY(atlases, mSpotSp, Mine, 0.0, v38);
  if ( !*p_mBaseSpot )
LABEL_42:
    sub_1BCAA3C(mMapCtrl_SpotInfo, v31);
  SrcSpotBasePrefab__SetSpotNameUI(
    (*p_mBaseSpot)->fields.atlases,
    this->fields.mSpotNameSp,
    this->fields.mSpotNameLabel,
    (*p_mBaseSpot)->fields.mSpotNameStr,
    v41);
  this->fields.mapModelScale = 1.0;
  if ( isMapModel )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)mapModelCamera,
                                                   0LL,
                                                   0LL);
    if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
    {
      if ( mapModelCamera )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mapModelCamera, 0LL);
        *(UnityEngine_Vector3_o *)&v43 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
        mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)*p_mBaseSpot;
        if ( *p_mBaseSpot )
        {
          v46 = v43;
          v47 = v44;
          v48 = v45;
          v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mMapCtrl_SpotInfo, 0LL);
          LocalPosition = GameObjectExtensions__GetLocalPosition(v49, 0LL);
          v51 = LocalPosition.fields.x;
          v52 = LocalPosition.fields.y;
          v53 = LocalPosition.fields.z;
          if ( !byte_4B109BF )
          {
            sub_1BCA7E0(&System_Math_TypeInfo, v31, v50);
            byte_4B109BF = 1;
          }
          v54 = v46 - v51;
          v55 = v47 - v52;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v31);
          this->fields.mapModelScale = 2000.0
                                     / sqrtf(
                                         (float)((float)(v48 - v53) * (float)(v48 - v53))
                                       + (float)((float)(v54 * v54) + (float)(v55 * v55)));
          goto LABEL_41;
        }
      }
      goto LABEL_42;
    }
  }
LABEL_41:
  BaseScale = SpotLargeComponent__GetBaseScale(this, v31);
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34333164(v57, BaseScale, 0LL);
  BasePosition = SpotLargeComponent__GetBasePosition(this, v58);
  v59 = BasePosition.fields.x;
  v60 = BasePosition.fields.y;
  v61 = BasePosition.fields.z;
  v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v72.fields.x = v59;
  v72.fields.y = v60;
  v72.fields.z = v61;
  GameObjectExtensions__SetLocalPosition(v62, v72, 0LL);
  this->fields.mShowEndAct = endAct;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mShowEndAct, (int64_t)endAct, v63, v64, v65, v66, v67, v68);
  SpotLargeComponent__SetState(this, 1, v69);
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
  sub_1BCA784(
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
    sub_1BCAA3C(0LL, v4);
  v8 = v5;
  v9 = v6;
  v10 = UnityEngine_Component__get_gameObject(mSpotNameSp, 0LL);
  GameObjectExtensions__SetLocalScale_34333224(v10, 1.0 / v8, 1.0 / v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotLargeComponent__SetState(SpotLargeComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B13636 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_SpotLargeComponent__setState__, *(_QWORD *)&state, method);
    byte_4B13636 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_SpotLargeComponent__setState__);
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
  sub_1BCA784(p_mShowEndAct, 0LL, v4, v5, v6, v7, v8, v9);
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
  sub_1BCA784(p_mHideEndAct, 0LL, v4, v5, v6, v7, v8, v9);
  SpotLargeComponent__SetState(this, 0, v10);
}


void __fastcall SpotLargeComponent__Update(SpotLargeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B13633 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_SpotLargeComponent__update__, method, v2);
    byte_4B13633 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_313FCD4 *)Method_CStateManager_SpotLargeComponent__update__);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v11; // x20
  UnityEngine_GameObject_o *v12; // x0
  int v13; // s0
  int v14; // s1
  int v15; // s2
  UnityEngine_GameObject_o *v16; // x0
  Il2CppObject *v17; // x20
  UnityEngine_GameObject_o *v18; // x0
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float mapModelScale; // s3
  UnityEngine_GameObject_o *v23; // x0
  SpotLargeComponent_StateLargeIn_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4B13639 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, that, method);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v4, v5);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenScale___, v6, v7);
    this = (SpotLargeComponent_StateLargeIn_o *)sub_1BCA7E0(&StringLiteral_13138/*"StateLargeIn_End"*/, v8, v9);
    byte_4B13639 = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v11 = UITweener__Begin_object_(gameObject, 0.15, (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v13 = GameObjectExtensions__GetLocalPosition(v12, 0LL);
  if ( !v11 )
    goto LABEL_8;
  LODWORD(v11[8].klass) = v13;
  HIDWORD(v11[8].klass) = v14;
  LODWORD(v11[8].monitor) = v15;
  HIDWORD(v11[9].klass) = 0;
  *(void **)((char *)&v11[8].monitor + 4) = (void *)0xC2AA0000C3660000LL;
  LODWORD(v11[2].klass) = 2;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v17 = UITweener__Begin_object_(v16, 0.15, (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenScale___);
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v19 = GameObjectExtensions__GetLocalScale(v18, 0LL);
  if ( !v17 )
    goto LABEL_8;
  mapModelScale = that->fields.mapModelScale;
  *(void **)((char *)&v17[8].monitor + 4) = (void *)0x4000000040000000LL;
  HIDWORD(v17[9].klass) = 1065353216;
  *(float *)&v17[8].klass = v19 * mapModelScale;
  *((float *)&v17[8].klass + 1) = v20 * mapModelScale;
  *(float *)&v17[8].monitor = v21 * mapModelScale;
  LODWORD(v17[2].klass) = 2;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  this = (SpotLargeComponent_StateLargeIn_o *)UITweener__Begin_object_(
                                                v23,
                                                0.15,
                                                (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_1BCAA3C(this, that);
  v24 = this;
  this[8].klass = (SpotLargeComponent_StateLargeIn_c *)0x3F80000000000000LL;
  LODWORD(this[2].klass) = 2;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v24[5].klass = (SpotLargeComponent_StateLargeIn_c *)v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&v24[5], (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_13138/*"StateLargeIn_End"*/;
  v24[5].monitor = (void *)StringLiteral_13138/*"StateLargeIn_End"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v24[5].monitor, v32, v33, v34, v35, v36, v37, v38);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x2
  __int64 v8; // x8
  __int64 v9; // x8
  struct UISprite_o *mSpotSp; // x21
  System_Collections_Generic_List_UIAtlas__o *v11; // x20
  UIAtlas_o *UIAtlasBySpriteName; // x0
  struct UISprite_o *mSpotNameSp; // x19
  UIAtlas_o *v14; // x1

  if ( (byte_4B1363A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, that, method);
    this = (SpotLargeComponent_StateLargeMain_o *)sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    byte_4B1363A = 1;
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
                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, that);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, that, v7);
    byte_4B10F83 = 1;
  }
  this = (SpotLargeComponent_StateLargeMain_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, that);
    this = (SpotLargeComponent_StateLargeMain_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = *(_QWORD *)this[11].monitor;
  if ( !v8
    || (v9 = *(_QWORD *)(v8 + 264)) == 0
    || (mSpotSp = that->fields.mSpotSp) == 0LL
    || (v11 = *(System_Collections_Generic_List_UIAtlas__o **)(v9 + 304),
        UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v11, mSpotSp->fields.mSpriteName, 0LL),
        UISprite__set_atlas(mSpotSp, UIAtlasBySpriteName, 0LL),
        (mSpotNameSp = that->fields.mSpotNameSp) == 0LL) )
  {
LABEL_19:
    sub_1BCAA3C(this, that);
  }
  v14 = UIAtlas__GetUIAtlasBySpriteName(v11, mSpotNameSp->fields.mSpriteName, 0LL);
  UISprite__set_atlas(mSpotNameSp, v14, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v11; // x20
  UnityEngine_GameObject_o *v12; // x0
  int v13; // s0
  int v14; // s1
  int v15; // s2
  UnityEngine_GameObject_o *v16; // x0
  Il2CppObject *v17; // x20
  UnityEngine_GameObject_o *v18; // x0
  int v19; // s0
  int v20; // s1
  int v21; // s2
  float v22; // s0
  UnityEngine_GameObject_o *v23; // x0
  SpotLargeComponent_StateLargeOut_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4B1363B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, that, method);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v4, v5);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenScale___, v6, v7);
    this = (SpotLargeComponent_StateLargeOut_o *)sub_1BCA7E0(&StringLiteral_13139/*"StateLargeOut_End"*/, v8, v9);
    byte_4B1363B = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v11 = UITweener__Begin_object_(gameObject, 0.05, (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v13 = GameObjectExtensions__GetLocalPosition(v12, 0LL);
  if ( !v11 )
    goto LABEL_8;
  LODWORD(v11[8].klass) = v13;
  HIDWORD(v11[8].klass) = v14;
  LODWORD(v11[8].monitor) = v15;
  *(UnityEngine_Vector3_o *)((char *)&v11[8].monitor + 4) = SpotLargeComponent__GetBasePosition(
                                                              that,
                                                              (const MethodInfo *)that);
  LODWORD(v11[2].klass) = 2;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v17 = UITweener__Begin_object_(v16, 0.05, (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenScale___);
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v19 = GameObjectExtensions__GetLocalScale(v18, 0LL);
  if ( !v17 )
    goto LABEL_8;
  LODWORD(v17[8].klass) = v19;
  HIDWORD(v17[8].klass) = v20;
  LODWORD(v17[8].monitor) = v21;
  v22 = SpotLargeComponent__GetBaseScale(that, (const MethodInfo *)that) * that->fields.mapModelScale;
  HIDWORD(v17[9].klass) = 1065353216;
  *((float *)&v17[8].monitor + 1) = v22;
  *(float *)&v17[9].klass = v22;
  LODWORD(v17[2].klass) = 2;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  this = (SpotLargeComponent_StateLargeOut_o *)UITweener__Begin_object_(
                                                 v23,
                                                 0.05,
                                                 (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_1BCAA3C(this, that);
  v24 = this;
  this[8].klass = (SpotLargeComponent_StateLargeOut_c *)1065353216;
  LODWORD(this[2].klass) = 2;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v24[5].klass = (SpotLargeComponent_StateLargeOut_c *)v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&v24[5], (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_13139/*"StateLargeOut_End"*/;
  v24[5].monitor = (void *)StringLiteral_13139/*"StateLargeOut_End"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v24[5].monitor, v32, v33, v34, v35, v36, v37, v38);
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
    sub_1BCAA3C(this, 0LL);
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