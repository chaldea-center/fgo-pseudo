void __fastcall SpotLargeComponent___ctor(SpotLargeComponent_o *this, const MethodInfo *method)
{
  this->fields.mapModelScale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SpotLargeComponent__Awake(SpotLargeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct CStateManager_SpotLargeComponent__o **p_mFSM; // x20
  CStateManager_T__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  CStateManager_T__o *mFSM; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x22
  __int64 v18; // x0
  CStateManager_T__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *v22; // x22
  CStateManager_T__o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x22
  CStateManager_T__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *v30; // x21
  const MethodInfo *v31; // x2

  if ( (byte_49F98FB & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_SpotLargeComponent___ctor__, method);
    sub_1B640C8(&Method_CStateManager_SpotLargeComponent__add__, v4);
    sub_1B640C8(&CStateManager_SpotLargeComponent__TypeInfo, v5);
    sub_1B640C8(&SpotLargeComponent_StateLargeIn_TypeInfo, v6);
    sub_1B640C8(&SpotLargeComponent_StateLargeMain_TypeInfo, v7);
    sub_1B640C8(&SpotLargeComponent_StateLargeOut_TypeInfo, v8);
    sub_1B640C8(&SpotLargeComponent_StateNone_TypeInfo, v9);
    byte_49F98FB = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v11 = (CStateManager_T__o *)sub_1B64314(CStateManager_SpotLargeComponent__TypeInfo, method, v2);
    CStateManager_object____ctor(
      v11,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_30612BC *)Method_CStateManager_SpotLargeComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_SpotLargeComponent__o *)v11;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v11, v12, v13);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v17 = (Il2CppObject *)sub_1B64314(SpotLargeComponent_StateNone_TypeInfo, v15, v16);
    System_Object___ctor(v17, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v17,
      (const MethodInfo_3061364 *)Method_CStateManager_SpotLargeComponent__add__);
    v19 = (CStateManager_T__o *)*p_mFSM;
    v22 = (Il2CppObject *)sub_1B64314(SpotLargeComponent_StateLargeIn_TypeInfo, v20, v21);
    System_Object___ctor(v22, 0LL);
    if ( !v19 )
      goto LABEL_9;
    CStateManager_object___add(
      v19,
      1,
      (IState_T__o *)v22,
      (const MethodInfo_3061364 *)Method_CStateManager_SpotLargeComponent__add__);
    v23 = (CStateManager_T__o *)*p_mFSM;
    v26 = (Il2CppObject *)sub_1B64314(SpotLargeComponent_StateLargeMain_TypeInfo, v24, v25);
    System_Object___ctor(v26, 0LL);
    if ( !v23
      || (CStateManager_object___add(
            v23,
            2,
            (IState_T__o *)v26,
            (const MethodInfo_3061364 *)Method_CStateManager_SpotLargeComponent__add__),
          v27 = (CStateManager_T__o *)*p_mFSM,
          v30 = (Il2CppObject *)sub_1B64314(SpotLargeComponent_StateLargeOut_TypeInfo, v28, v29),
          System_Object___ctor(v30, 0LL),
          !v27) )
    {
LABEL_9:
      sub_1B64324(v18);
    }
    CStateManager_object___add(
      v27,
      3,
      (IState_T__o *)v30,
      (const MethodInfo_3061364 *)Method_CStateManager_SpotLargeComponent__add__);
    SpotLargeComponent__SetState(this, 0, v31);
  }
}


void __fastcall SpotLargeComponent__ForceOff(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.mFSM )
    SpotLargeComponent__SetState(this, 0, v4);
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

  if ( (byte_49F9901 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9901 = 1;
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
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v4);
      byte_49F7111 = 1;
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
    sub_1B64324(mScrl);
  v16.n64_u64[0] = vsub_f32(v10, (float32x2_t)MapScroll__GetScrlPos((MapScroll_o *)mScrl, 0LL)).n64_u64[0];
  BaseScale = SpotLargeComponent__GetBaseScale(this, v17);
  v20.n64_u64[0] = vmul_n_f32(v16, BaseScale).n64_u64[0];
  v21 = v11 * BaseScale;
  if ( !byte_49F7119 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v18);
    byte_49F7119 = 1;
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
  float result; // s0
  struct MapCamera_o *v6; // x8

  if ( (byte_49F9900 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9900 = 1;
  }
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mZoom = (MapZoom_o *)UnityEngine_Object__op_Equality(mMapCamera, 0LL, 0LL);
  result = 0.0;
  if ( ((unsigned __int8)mZoom & 1) == 0 )
  {
    v6 = this->fields.mMapCamera;
    if ( !v6 || (mZoom = v6->fields.mZoom) == 0LL )
      sub_1B64324(mZoom);
    return 1.0 / MapZoom__GetZoomSize(mZoom, 0LL);
  }
  return result;
}


int32_t __fastcall SpotLargeComponent__GetState(SpotLargeComponent_o *this, const MethodInfo *method)
{
  SpotLargeComponent_o *v2; // x19
  struct CStateManager_SpotLargeComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_49F98FE & 1) == 0 )
  {
    this = (SpotLargeComponent_o *)sub_1B640C8(&Method_CStateManager_SpotLargeComponent__getState__, method);
    byte_49F98FE = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(this);
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
  float z; // s8
  float y; // s9
  float x; // s10
  bool v17; // w22
  __int64 v18; // x1
  __int64 v19; // x1
  struct SrcSpotBasePrefab_o **p_mBaseSpot; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  SpotEntity_o *Mine; // x24
  __int64 v25; // x1
  __int64 v26; // x8
  char v27; // w26
  UnityEngine_GameObject_o *v28; // x25
  bool v29; // w1
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_UIAtlas__o *atlases; // x25
  UISprite_o *mSpotSp; // x26
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  float v36; // s0
  float v37; // s1
  float v38; // s2
  float v39; // s8
  float v40; // s9
  float v41; // s10
  UnityEngine_GameObject_o *v42; // x0
  float v43; // s11
  float v44; // s12
  float v45; // s13
  float v46; // s11
  float v47; // s9
  float BaseScale; // s8
  UnityEngine_GameObject_o *v49; // x0
  const MethodInfo *v50; // x1
  float v51; // s8
  float v52; // s9
  float v53; // s10
  UnityEngine_GameObject_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  const MethodInfo *v57; // x2
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BasePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  z = screenSpotPosition.fields.z;
  y = screenSpotPosition.fields.y;
  x = screenSpotPosition.fields.x;
  v17 = isMapModel;
  if ( (byte_49F98FD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, spot);
    sub_1B640C8(&SrcSpotBasePrefab_TypeInfo, v18);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v19);
    byte_49F98FD = 1;
  }
  this->fields.isMapModel = v17;
  this->fields.screenSpotPosition.fields.x = x;
  this->fields.screenSpotPosition.fields.y = y;
  this->fields.screenSpotPosition.fields.z = z;
  this->fields.mBaseSpot = spot;
  p_mBaseSpot = &this->fields.mBaseSpot;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mBaseSpot,
    (int32_t)spot,
    (int32_t)mapCamera,
    (int32_t)mapModelCamera);
  this->fields.mMapCamera = mapCamera;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mMapCamera, (int32_t)mapCamera, v21, v22);
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
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v25);
    byte_49F76BD = 1;
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  }
  v26 = *(_QWORD *)mMapCtrl_SpotInfo[2].monitor;
  if ( !v26 )
    goto LABEL_42;
  if ( !spot )
    goto LABEL_42;
  mMapCtrl_SpotInfo = *(MapControl_SpotInfo_o **)(v26 + 256);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_42;
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)ScrTerminalListTop__IsDispEventUIForSpot(
                                                 (ScrTerminalListTop_o *)mMapCtrl_SpotInfo,
                                                 spot->fields.miSpotID,
                                                 0LL);
  if ( !this->fields.mSpotNameSp )
    goto LABEL_42;
  v27 = (char)mMapCtrl_SpotInfo;
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.mSpotNameSp,
                                                 0LL);
  v28 = (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo;
  if ( (v27 & 1) != 0 )
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
    v29 = 0;
  }
  else
  {
    if ( !*p_mBaseSpot )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)System_String__IsNullOrEmpty((*p_mBaseSpot)->fields.mSpotNameStr, 0LL);
    if ( !v28 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v28, ((unsigned __int8)mMapCtrl_SpotInfo & 1) == 0, 0LL);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.mSpotSp;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    v29 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, v29, 0LL);
  if ( !*p_mBaseSpot )
    goto LABEL_42;
  atlases = (*p_mBaseSpot)->fields.atlases;
  mSpotSp = this->fields.mSpotSp;
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  SrcSpotBasePrefab__SetSpotUIWithOffsetY(atlases, mSpotSp, Mine, 0.0, v30);
  if ( !*p_mBaseSpot )
LABEL_42:
    sub_1B64324(mMapCtrl_SpotInfo);
  SrcSpotBasePrefab__SetSpotNameUI(
    (*p_mBaseSpot)->fields.atlases,
    this->fields.mSpotNameSp,
    this->fields.mSpotNameLabel,
    (*p_mBaseSpot)->fields.mSpotNameStr,
    v33);
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
        *(UnityEngine_Vector3_o *)&v36 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
        mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)*p_mBaseSpot;
        if ( *p_mBaseSpot )
        {
          v39 = v36;
          v40 = v37;
          v41 = v38;
          v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mMapCtrl_SpotInfo, 0LL);
          LocalPosition = GameObjectExtensions__GetLocalPosition(v42, 0LL);
          v43 = LocalPosition.fields.x;
          v44 = LocalPosition.fields.y;
          v45 = LocalPosition.fields.z;
          if ( !byte_49F710F )
          {
            sub_1B640C8(&System_Math_TypeInfo, v34);
            byte_49F710F = 1;
          }
          v46 = v39 - v43;
          v47 = v40 - v44;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          this->fields.mapModelScale = 2000.0
                                     / sqrtf(
                                         (float)((float)(v41 - v45) * (float)(v41 - v45))
                                       + (float)((float)(v46 * v46) + (float)(v47 * v47)));
          goto LABEL_41;
        }
      }
      goto LABEL_42;
    }
  }
LABEL_41:
  BaseScale = SpotLargeComponent__GetBaseScale(this, v34);
  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_33377468(v49, BaseScale, 0LL);
  BasePosition = SpotLargeComponent__GetBasePosition(this, v50);
  v51 = BasePosition.fields.x;
  v52 = BasePosition.fields.y;
  v53 = BasePosition.fields.z;
  v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v60.fields.x = v51;
  v60.fields.y = v52;
  v60.fields.z = v53;
  GameObjectExtensions__SetLocalPosition(v54, v60, 0LL);
  this->fields.mShowEndAct = endAct;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mShowEndAct, (int32_t)endAct, v55, v56);
  SpotLargeComponent__SetState(this, 1, v57);
}


void __fastcall SpotLargeComponent__LargeOut(
        SpotLargeComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x2

  this->fields.mHideEndAct = end_act;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mHideEndAct, (int32_t)end_act, (int32_t)method, v3);
  SpotLargeComponent__SetState(this, 3, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotLargeComponent__SetLargeSpotNameScale_NormalScale(
        SpotLargeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  float v4; // s0
  float v5; // s1
  UnityEngine_Component_o *mSpotNameSp; // x0
  float v7; // s8
  float v8; // s9
  UnityEngine_GameObject_o *v9; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v4 = GameObjectExtensions__GetLocalScale(gameObject, 0LL);
  mSpotNameSp = (UnityEngine_Component_o *)this->fields.mSpotNameSp;
  if ( !mSpotNameSp )
    sub_1B64324(0LL);
  v7 = v4;
  v8 = v5;
  v9 = UnityEngine_Component__get_gameObject(mSpotNameSp, 0LL);
  GameObjectExtensions__SetLocalScale_33377528(v9, 1.0 / v7, 1.0 / v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotLargeComponent__SetState(SpotLargeComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49F98FF & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_SpotLargeComponent__setState__, *(_QWORD *)&state);
    byte_49F98FF = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(0LL);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30613F0 *)Method_CStateManager_SpotLargeComponent__setState__);
}


void __fastcall SpotLargeComponent__StateLargeIn_End(SpotLargeComponent_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_mShowEndAct; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x2

  p_mShowEndAct = (ServantStatusBattleListViewItem_o *)&this->fields.mShowEndAct;
  ActionExtensions__Call(this->fields.mShowEndAct, 0LL);
  p_mShowEndAct->klass = 0LL;
  sub_1B6406C(p_mShowEndAct, 0, v4, v5);
  SpotLargeComponent__SetState(this, 2, v6);
}


void __fastcall SpotLargeComponent__StateLargeOut_End(SpotLargeComponent_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_mHideEndAct; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x2

  p_mHideEndAct = (ServantStatusBattleListViewItem_o *)&this->fields.mHideEndAct;
  ActionExtensions__Call(this->fields.mHideEndAct, 0LL);
  p_mHideEndAct->klass = 0LL;
  sub_1B6406C(p_mHideEndAct, 0, v4, v5);
  SpotLargeComponent__SetState(this, 0, v6);
}


void __fastcall SpotLargeComponent__Update(SpotLargeComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49F98FC & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_SpotLargeComponent__update__, method);
    byte_49F98FC = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_30613CC *)Method_CStateManager_SpotLargeComponent__update__);
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
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_49F9902 & 1) == 0 )
  {
    sub_1B640C8(&Method_UITweener_Begin_TweenAlpha___, that);
    sub_1B640C8(&Method_UITweener_Begin_TweenPosition___, v4);
    sub_1B640C8(&Method_UITweener_Begin_TweenScale___, v5);
    this = (SpotLargeComponent_StateLargeIn_o *)sub_1B640C8(&StringLiteral_12914/*"StateLargeIn_End"*/, v6);
    byte_49F9902 = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v8 = UITweener__Begin_object_(gameObject, 0.15, (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenPosition___);
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
  v14 = UITweener__Begin_object_(v13, 0.15, (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenScale___);
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
                                                (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_1B64324(this);
  v21 = this;
  this[8].klass = (SpotLargeComponent_StateLargeIn_c *)0x3F80000000000000LL;
  LODWORD(this[2].klass) = 2;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v21[5].klass = (SpotLargeComponent_StateLargeIn_c *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21[5], (int32_t)v22, v23, v24);
  v25 = StringLiteral_12914/*"StateLargeIn_End"*/;
  v21[5].monitor = (void *)StringLiteral_12914/*"StateLargeIn_End"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21[5].monitor, v25, v26, v27);
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
    sub_1B64324(this);
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
  __int64 v6; // x1
  __int64 v7; // x8
  __int64 v8; // x8
  struct UISprite_o *mSpotSp; // x21
  System_Collections_Generic_List_UIAtlas__o *v10; // x20
  UIAtlas_o *UIAtlasBySpriteName; // x0
  struct UISprite_o *mSpotNameSp; // x19
  UIAtlas_o *v13; // x1

  if ( (byte_49F9903 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIPanel___, that);
    this = (SpotLargeComponent_StateLargeMain_o *)sub_1B640C8(&TerminalSceneComponent_TypeInfo, v4);
    byte_49F9903 = 1;
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
                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v6);
    byte_49F76BD = 1;
  }
  this = (SpotLargeComponent_StateLargeMain_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    this = (SpotLargeComponent_StateLargeMain_o *)TerminalSceneComponent_TypeInfo;
  }
  v7 = *(_QWORD *)this[11].monitor;
  if ( !v7
    || (v8 = *(_QWORD *)(v7 + 264)) == 0
    || (mSpotSp = that->fields.mSpotSp) == 0LL
    || (v10 = *(System_Collections_Generic_List_UIAtlas__o **)(v8 + 296),
        UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v10, mSpotSp->fields.mSpriteName, 0LL),
        UISprite__set_atlas(mSpotSp, UIAtlasBySpriteName, 0LL),
        (mSpotNameSp = that->fields.mSpotNameSp) == 0LL) )
  {
LABEL_19:
    sub_1B64324(this);
  }
  v13 = UIAtlas__GetUIAtlasBySpriteName(v10, mSpotNameSp->fields.mSpriteName, 0LL);
  UISprite__set_atlas(mSpotNameSp, v13, 0LL);
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
  const MethodInfo *v10; // x1
  int v11; // s0
  int v12; // s1
  int v13; // s2
  UnityEngine_GameObject_o *v14; // x0
  Il2CppObject *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  const MethodInfo *v17; // x1
  int v18; // s0
  int v19; // s1
  int v20; // s2
  float v21; // s0
  UnityEngine_GameObject_o *v22; // x0
  SpotLargeComponent_StateLargeOut_o *v23; // x20
  UnityEngine_GameObject_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_49F9904 & 1) == 0 )
  {
    sub_1B640C8(&Method_UITweener_Begin_TweenAlpha___, that);
    sub_1B640C8(&Method_UITweener_Begin_TweenPosition___, v4);
    sub_1B640C8(&Method_UITweener_Begin_TweenScale___, v5);
    this = (SpotLargeComponent_StateLargeOut_o *)sub_1B640C8(&StringLiteral_12915/*"StateLargeOut_End"*/, v6);
    byte_49F9904 = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v8 = UITweener__Begin_object_(gameObject, 0.05, (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenPosition___);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v11 = GameObjectExtensions__GetLocalPosition(v9, 0LL);
  if ( !v8 )
    goto LABEL_8;
  LODWORD(v8[8].klass) = v11;
  HIDWORD(v8[8].klass) = v12;
  LODWORD(v8[8].monitor) = v13;
  *(UnityEngine_Vector3_o *)((char *)&v8[8].monitor + 4) = SpotLargeComponent__GetBasePosition(that, v10);
  LODWORD(v8[2].klass) = 2;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v15 = UITweener__Begin_object_(v14, 0.05, (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenScale___);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v18 = GameObjectExtensions__GetLocalScale(v16, 0LL);
  if ( !v15 )
    goto LABEL_8;
  LODWORD(v15[8].klass) = v18;
  HIDWORD(v15[8].klass) = v19;
  LODWORD(v15[8].monitor) = v20;
  v21 = SpotLargeComponent__GetBaseScale(that, v17) * that->fields.mapModelScale;
  HIDWORD(v15[9].klass) = 1065353216;
  *((float *)&v15[8].monitor + 1) = v21;
  *(float *)&v15[9].klass = v21;
  LODWORD(v15[2].klass) = 2;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  this = (SpotLargeComponent_StateLargeOut_o *)UITweener__Begin_object_(
                                                 v22,
                                                 0.05,
                                                 (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_1B64324(this);
  v23 = this;
  this[8].klass = (SpotLargeComponent_StateLargeOut_c *)1065353216;
  LODWORD(this[2].klass) = 2;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v23[5].klass = (SpotLargeComponent_StateLargeOut_c *)v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23[5], (int32_t)v24, v25, v26);
  v27 = StringLiteral_12915/*"StateLargeOut_End"*/;
  v23[5].monitor = (void *)StringLiteral_12915/*"StateLargeOut_End"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23[5].monitor, v27, v28, v29);
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
    sub_1B64324(this);
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