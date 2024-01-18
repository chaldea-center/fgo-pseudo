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
  CStateManager_QAASpotStateController_IMapSpot__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct CStateManager_SpotLargeComponent__o *mFSM; // x21
  SpotLargeComponent_StateNone_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v21; // x21
  SpotLargeComponent_StateLargeIn_o *v22; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v23; // x21
  SpotLargeComponent_StateLargeMain_o *v24; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v25; // x20
  SpotLargeComponent_StateLargeOut_o *v26; // x21
  const MethodInfo *v27; // x2

  if ( (byte_4188BC4 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_SpotLargeComponent___ctor__, method);
    sub_B2C35C(&Method_CStateManager_SpotLargeComponent__add__, v3);
    sub_B2C35C(&CStateManager_SpotLargeComponent__TypeInfo, v4);
    sub_B2C35C(&SpotLargeComponent_StateLargeIn_TypeInfo, v5);
    sub_B2C35C(&SpotLargeComponent_StateLargeMain_TypeInfo, v6);
    sub_B2C35C(&SpotLargeComponent_StateLargeOut_TypeInfo, v7);
    sub_B2C35C(&SpotLargeComponent_StateNone_TypeInfo, v8);
    byte_4188BC4 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v10 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_SpotLargeComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v10,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2A08354 *)Method_CStateManager_SpotLargeComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_SpotLargeComponent__o *)v10;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    mFSM = this->fields.mFSM;
    v18 = (SpotLargeComponent_StateNone_o *)sub_B2C42C(SpotLargeComponent_StateNone_TypeInfo);
    SpotLargeComponent_StateNone___ctor(v18, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v18,
      (const MethodInfo_2A08420 *)Method_CStateManager_SpotLargeComponent__add__);
    v21 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v22 = (SpotLargeComponent_StateLargeIn_o *)sub_B2C42C(SpotLargeComponent_StateLargeIn_TypeInfo);
    SpotLargeComponent_StateLargeIn___ctor(v22, 0LL);
    if ( !v21 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v21,
      1,
      (IState_T__o *)v22,
      (const MethodInfo_2A08420 *)Method_CStateManager_SpotLargeComponent__add__);
    v23 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v24 = (SpotLargeComponent_StateLargeMain_o *)sub_B2C42C(SpotLargeComponent_StateLargeMain_TypeInfo);
    SpotLargeComponent_StateLargeMain___ctor(v24, 0LL);
    if ( !v23
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v23,
            2,
            (IState_T__o *)v24,
            (const MethodInfo_2A08420 *)Method_CStateManager_SpotLargeComponent__add__),
          v25 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v26 = (SpotLargeComponent_StateLargeOut_o *)sub_B2C42C(SpotLargeComponent_StateLargeOut_TypeInfo),
          SpotLargeComponent_StateLargeOut___ctor(v26, 0LL),
          !v25) )
    {
LABEL_9:
      sub_B2C434(v19, v20);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v25,
      3,
      (IState_T__o *)v26,
      (const MethodInfo_2A08420 *)Method_CStateManager_SpotLargeComponent__add__);
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
    sub_B2C434(0LL, v4);
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
  UnityEngine_Object_o *mMapCamera; // x20
  UnityEngine_Component_o *mScrl; // x0
  __int64 v6; // x1
  float v7; // s0
  float v8; // s1
  float v9; // s2
  float x; // s9
  float y; // s10
  float z; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MapCamera_o *v14; // x8
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  const MethodInfo *v16; // x1
  float BaseScale; // s0
  float v18; // s9
  float v19; // s10
  float v20; // s8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4188BCA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188BCA = 1;
  }
  mBaseSpot = (UnityEngine_Object_o *)this->fields.mBaseSpot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(mBaseSpot, 0LL, 0LL) )
  {
    mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mScrl = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(mMapCamera, 0LL, 0LL);
    if ( ((unsigned __int8)mScrl & 1) == 0 )
    {
      if ( this->fields.isMapModel )
      {
        x = this->fields.screenSpotPosition.fields.x;
        y = this->fields.screenSpotPosition.fields.y;
        z = this->fields.screenSpotPosition.fields.z;
      }
      else
      {
        mScrl = (UnityEngine_Component_o *)this->fields.mBaseSpot;
        if ( !mScrl )
          goto LABEL_19;
        gameObject = UnityEngine_Component__get_gameObject(mScrl, 0LL);
        LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
        x = LocalPosition.fields.x;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
      }
      v14 = this->fields.mMapCamera;
      if ( v14 )
      {
        mScrl = (UnityEngine_Component_o *)v14->fields.mScrl;
        if ( mScrl )
        {
          ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)mScrl, 0LL);
          BaseScale = SpotLargeComponent__GetBaseScale(this, v16);
          v18 = BaseScale * (float)(x - ScrlPos.fields.x);
          v19 = BaseScale * (float)(y - ScrlPos.fields.y);
          v20 = z * BaseScale;
          up = UnityEngine_Vector3__get_up(0LL);
          v7 = v18 - (float)(up.fields.x * 32.0);
          v8 = v19 - (float)(up.fields.y * 32.0);
          v9 = v20 - (float)(up.fields.z * 32.0);
          goto LABEL_20;
        }
      }
LABEL_19:
      sub_B2C434(mScrl, v6);
    }
  }
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_zero(0LL);
LABEL_20:
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


float __fastcall SpotLargeComponent__GetBaseScale(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMapCamera; // x20
  MapZoom_o *mZoom; // x0
  __int64 v5; // x1
  float result; // s0
  struct MapCamera_o *v7; // x8

  if ( (byte_4188BC9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188BC9 = 1;
  }
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mZoom = (MapZoom_o *)UnityEngine_Object__op_Equality(mMapCamera, 0LL, 0LL);
  result = 0.0;
  if ( ((unsigned __int8)mZoom & 1) == 0 )
  {
    v7 = this->fields.mMapCamera;
    if ( !v7 || (mZoom = v7->fields.mZoom) == 0LL )
      sub_B2C434(mZoom, v5);
    return 1.0 / MapZoom__GetZoomSize(mZoom, 0LL);
  }
  return result;
}


int32_t __fastcall SpotLargeComponent__GetState(SpotLargeComponent_o *this, const MethodInfo *method)
{
  SpotLargeComponent_o *v2; // x19
  struct CStateManager_SpotLargeComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4188BC7 & 1) == 0 )
  {
    this = (SpotLargeComponent_o *)sub_B2C35C(&Method_CStateManager_SpotLargeComponent__getState__, method);
    byte_4188BC7 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
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
  System_Int32_array *v8; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v18; // x1
  __int64 v19; // x1
  struct SrcSpotBasePrefab_o **p_mBaseSpot; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  const MethodInfo *v28; // x1
  SpotEntity_o *Mine; // x24
  __int64 v30; // x8
  char v31; // w26
  UnityEngine_GameObject_o *v32; // x25
  bool v33; // w1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_UIAtlas__o *atlases; // x25
  UISprite_o *mSpotSp; // x26
  const MethodInfo *v37; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  float v39; // s0
  float v40; // s1
  float v41; // s2
  float v42; // s8
  float v43; // s9
  float v44; // s10
  UnityEngine_GameObject_o *v45; // x0
  float BaseScale; // s8
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x1
  float v49; // s8
  float v50; // s9
  float v51; // s10
  UnityEngine_GameObject_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  const MethodInfo *v59; // x2
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BasePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s3.4,4:s4.4,8:s5.4

  z = screenSpotPosition.fields.z;
  y = screenSpotPosition.fields.y;
  x = screenSpotPosition.fields.x;
  if ( (byte_4188BC6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, spot);
    sub_B2C35C(&SrcSpotBasePrefab_TypeInfo, v18);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v19);
    byte_4188BC6 = 1;
  }
  this->fields.screenSpotPosition.fields.x = x;
  this->fields.screenSpotPosition.fields.y = y;
  this->fields.screenSpotPosition.fields.z = z;
  this->fields.isMapModel = isMapModel;
  this->fields.mBaseSpot = spot;
  p_mBaseSpot = &this->fields.mBaseSpot;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mBaseSpot,
    (System_Int32_array **)spot,
    (System_String_array **)mapCamera,
    (System_String_array **)mapModelCamera,
    (System_Boolean_array **)endAct,
    (System_Int32_array **)isMapModel,
    (System_Int32_array *)method,
    v8);
  this->fields.mMapCamera = mapCamera;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mMapCamera,
    (System_Int32_array **)mapCamera,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v28);
    byte_4183C65 = 1;
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  }
  v30 = *(_QWORD *)mMapCtrl_SpotInfo[2].monitor;
  if ( !v30 )
    goto LABEL_42;
  if ( !spot )
    goto LABEL_42;
  mMapCtrl_SpotInfo = *(MapControl_SpotInfo_o **)(v30 + 248);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_42;
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)ScrTerminalListTop__IsDispEventUIForSpot(
                                                 (ScrTerminalListTop_o *)mMapCtrl_SpotInfo,
                                                 spot->fields.miSpotID,
                                                 0LL);
  if ( !this->fields.mSpotNameSp )
    goto LABEL_42;
  v31 = (char)mMapCtrl_SpotInfo;
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.mSpotNameSp,
                                                 0LL);
  v32 = (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo;
  if ( (v31 & 1) != 0 )
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
    v33 = 0;
  }
  else
  {
    if ( !*p_mBaseSpot )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)System_String__IsNullOrEmpty((*p_mBaseSpot)->fields.mSpotNameStr, 0LL);
    if ( !v32 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v32, ((unsigned __int8)mMapCtrl_SpotInfo & 1) == 0, 0LL);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.mSpotSp;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    v33 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, v33, 0LL);
  if ( !*p_mBaseSpot )
    goto LABEL_42;
  atlases = (*p_mBaseSpot)->fields.atlases;
  mSpotSp = this->fields.mSpotSp;
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  SrcSpotBasePrefab__SetSpotUIWithOffsetY(atlases, mSpotSp, Mine, 0.0, v34);
  if ( !*p_mBaseSpot )
LABEL_42:
    sub_B2C434(mMapCtrl_SpotInfo, v28);
  SrcSpotBasePrefab__SetSpotNameUI(
    (*p_mBaseSpot)->fields.atlases,
    this->fields.mSpotNameSp,
    this->fields.mSpotNameLabel,
    (*p_mBaseSpot)->fields.mSpotNameStr,
    v37);
  this->fields.mapModelScale = 1.0;
  if ( isMapModel )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)mapModelCamera,
                                                   0LL,
                                                   0LL);
    if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
    {
      if ( mapModelCamera )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mapModelCamera, 0LL);
        *(UnityEngine_Vector3_o *)&v39 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
        mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)*p_mBaseSpot;
        if ( *p_mBaseSpot )
        {
          v42 = v39;
          v43 = v40;
          v44 = v41;
          v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mMapCtrl_SpotInfo, 0LL);
          LocalPosition = GameObjectExtensions__GetLocalPosition(v45, 0LL);
          v60.fields.x = v42;
          v60.fields.y = v43;
          v60.fields.z = v44;
          this->fields.mapModelScale = 2000.0 / UnityEngine_Vector3__Distance(v60, LocalPosition, 0LL);
          goto LABEL_41;
        }
      }
      goto LABEL_42;
    }
  }
LABEL_41:
  BaseScale = SpotLargeComponent__GetBaseScale(this, v28);
  v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_31328080(v47, BaseScale, 0LL);
  BasePosition = SpotLargeComponent__GetBasePosition(this, v48);
  v49 = BasePosition.fields.x;
  v50 = BasePosition.fields.y;
  v51 = BasePosition.fields.z;
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v62.fields.x = v49;
  v62.fields.y = v50;
  v62.fields.z = v51;
  GameObjectExtensions__SetLocalPosition(v52, v62, 0LL);
  this->fields.mShowEndAct = endAct;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mShowEndAct,
    (System_Int32_array **)endAct,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  SpotLargeComponent__SetState(this, 1, v59);
}


void __fastcall SpotLargeComponent__LargeOut(
        SpotLargeComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x2

  this->fields.mHideEndAct = end_act;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mHideEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)method,
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
    sub_B2C434(0LL, v4);
  v8 = v5;
  v9 = v6;
  v10 = UnityEngine_Component__get_gameObject(mSpotNameSp, 0LL);
  GameObjectExtensions__SetLocalScale_31328144(v10, 1.0 / v8, 1.0 / v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotLargeComponent__SetState(SpotLargeComponent_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_SpotLargeComponent__o *mFSM; // x0

  if ( (byte_4188BC8 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_SpotLargeComponent__setState__, *(_QWORD *)&state);
    byte_4188BC8 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_SpotLargeComponent__setState__);
}


void __fastcall SpotLargeComponent__StateLargeIn_End(SpotLargeComponent_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_mShowEndAct; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x2

  p_mShowEndAct = (BattleServantConfConponent_o *)&this->fields.mShowEndAct;
  ActionExtensions__Call(this->fields.mShowEndAct, 0LL);
  p_mShowEndAct->klass = 0LL;
  sub_B2C2F8(p_mShowEndAct, 0LL, v4, v5, v6, v7, v8, v9);
  SpotLargeComponent__SetState(this, 2, v10);
}


void __fastcall SpotLargeComponent__StateLargeOut_End(SpotLargeComponent_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_mHideEndAct; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x2

  p_mHideEndAct = (BattleServantConfConponent_o *)&this->fields.mHideEndAct;
  ActionExtensions__Call(this->fields.mHideEndAct, 0LL);
  p_mHideEndAct->klass = 0LL;
  sub_B2C2F8(p_mHideEndAct, 0LL, v4, v5, v6, v7, v8, v9);
  SpotLargeComponent__SetState(this, 0, v10);
}


void __fastcall SpotLargeComponent__Update(SpotLargeComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_SpotLargeComponent__o *mFSM; // x0

  if ( (byte_4188BC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_SpotLargeComponent__update__, method);
    byte_4188BC5 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_SpotLargeComponent__update__);
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
  TweenWidth_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  int32_t v10; // s0
  int32_t v11; // s1
  int v12; // s2
  UnityEngine_GameObject_o *v13; // x0
  TweenWidth_o *v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float mapModelScale; // s3
  UnityEngine_GameObject_o *v20; // x0
  SpotLargeComponent_StateLargeIn_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1

  if ( (byte_4184784 & 1) == 0 )
  {
    sub_B2C35C(&Method_UITweener_Begin_TweenAlpha___, that);
    sub_B2C35C(&Method_UITweener_Begin_TweenPosition___, v4);
    sub_B2C35C(&Method_UITweener_Begin_TweenScale___, v5);
    this = (SpotLargeComponent_StateLargeIn_o *)sub_B2C35C(&StringLiteral_13063/*"StateLargeIn_End"*/, v6);
    byte_4184784 = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v8 = UITweener__Begin_TweenWidth_(
         gameObject,
         0.15,
         (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v10 = GameObjectExtensions__GetLocalPosition(v9, 0LL);
  if ( !v8 )
    goto LABEL_8;
  v8->fields.from = v10;
  v8->fields.to = v11;
  *(_DWORD *)&v8->fields.updateTable = v12;
  HIDWORD(v8->fields.mWidget) = 0;
  *(_QWORD *)(&v8->fields.updateTable + 4) = 0xC2AA0000C3660000LL;
  v8->fields.style = 2;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v14 = UITweener__Begin_TweenWidth_(v13, 0.15, (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenScale___);
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v16 = GameObjectExtensions__GetLocalScale(v15, 0LL);
  if ( !v14 )
    goto LABEL_8;
  mapModelScale = that->fields.mapModelScale;
  *(_QWORD *)(&v14->fields.updateTable + 4) = 0x4000000040000000LL;
  HIDWORD(v14->fields.mWidget) = 1065353216;
  *(float *)&v14->fields.from = v16 * mapModelScale;
  *(float *)&v14->fields.to = v17 * mapModelScale;
  *(float *)&v14->fields.updateTable = v18 * mapModelScale;
  v14->fields.style = 2;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  this = (SpotLargeComponent_StateLargeIn_o *)UITweener__Begin_TweenWidth_(
                                                v20,
                                                0.15,
                                                (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_B2C434(this, that);
  v21 = this;
  LODWORD(this[1].monitor) = 2;
  this[7].monitor = (void *)0x3F80000000000000LL;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v21[4].monitor = v22;
  sub_B2C2F8(&v21[4].monitor, v22);
  v23 = StringLiteral_13063/*"StateLargeIn_End"*/;
  v21[5].klass = (SpotLargeComponent_StateLargeIn_c *)StringLiteral_13063/*"StateLargeIn_End"*/;
  sub_B2C2F8(&v21[5], v23);
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
    sub_B2C434(this, 0LL);
  SpotLargeComponent__SetLargeSpotNameScale_NormalScale(that, 0LL);
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

  if ( (byte_4184785 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, that);
    this = (SpotLargeComponent_StateLargeMain_o *)sub_B2C35C(&TerminalSceneComponent_TypeInfo, v4);
    byte_4184785 = 1;
  }
  if ( !that )
    goto LABEL_21;
  SpotLargeComponent__SetLargeSpotNameScale_NormalScale(that, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  this = (SpotLargeComponent_StateLargeMain_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !this )
    goto LABEL_21;
  this = (SpotLargeComponent_StateLargeMain_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !this )
    goto LABEL_21;
  ((void (__fastcall *)(SpotLargeComponent_StateLargeMain_o *, __int64, void *))this->klass[1]._1.parent)(
    this,
    1LL,
    this->klass[1]._1.generic_class);
  this = (SpotLargeComponent_StateLargeMain_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)that,
                                                  0LL);
  if ( !this )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (SpotLargeComponent_StateLargeMain_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)that,
                                                  0LL);
  if ( !this )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, that);
    byte_4183C65 = 1;
  }
  this = (SpotLargeComponent_StateLargeMain_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    this = (SpotLargeComponent_StateLargeMain_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = *(_QWORD *)this[11].monitor;
  if ( !v6
    || (v7 = *(_QWORD *)(v6 + 256)) == 0
    || (mSpotSp = that->fields.mSpotSp) == 0LL
    || (v9 = *(System_Collections_Generic_List_UIAtlas__o **)(v7 + 288),
        UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v9, mSpotSp->fields.mSpriteName, 0LL),
        UISprite__set_atlas(mSpotSp, UIAtlasBySpriteName, 0LL),
        (mSpotNameSp = that->fields.mSpotNameSp) == 0LL) )
  {
LABEL_21:
    sub_B2C434(this, that);
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
  TweenWidth_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  int32_t v10; // s0
  int32_t v11; // s1
  int v12; // s2
  UnityEngine_GameObject_o *v13; // x0
  TweenWidth_o *v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // s0
  int32_t v17; // s1
  int v18; // s2
  float v19; // s0
  UnityEngine_GameObject_o *v20; // x0
  SpotLargeComponent_StateLargeOut_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1

  if ( (byte_4184786 & 1) == 0 )
  {
    sub_B2C35C(&Method_UITweener_Begin_TweenAlpha___, that);
    sub_B2C35C(&Method_UITweener_Begin_TweenPosition___, v4);
    sub_B2C35C(&Method_UITweener_Begin_TweenScale___, v5);
    this = (SpotLargeComponent_StateLargeOut_o *)sub_B2C35C(&StringLiteral_13064/*"StateLargeOut_End"*/, v6);
    byte_4184786 = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v8 = UITweener__Begin_TweenWidth_(
         gameObject,
         0.05,
         (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v10 = GameObjectExtensions__GetLocalPosition(v9, 0LL);
  if ( !v8 )
    goto LABEL_8;
  v8->fields.from = v10;
  v8->fields.to = v11;
  *(_DWORD *)&v8->fields.updateTable = v12;
  *(UnityEngine_Vector3_o *)(&v8->fields.updateTable + 4) = SpotLargeComponent__GetBasePosition(that, 0LL);
  v8->fields.style = 2;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v14 = UITweener__Begin_TweenWidth_(v13, 0.05, (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenScale___);
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v16 = GameObjectExtensions__GetLocalScale(v15, 0LL);
  if ( !v14 )
    goto LABEL_8;
  v14->fields.from = v16;
  v14->fields.to = v17;
  *(_DWORD *)&v14->fields.updateTable = v18;
  v19 = SpotLargeComponent__GetBaseScale(that, 0LL) * that->fields.mapModelScale;
  HIDWORD(v14->fields.mWidget) = 1065353216;
  *((float *)&v14->fields.updateTable + 1) = v19;
  *(float *)&v14->fields.mWidget = v19;
  v14->fields.style = 2;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  this = (SpotLargeComponent_StateLargeOut_o *)UITweener__Begin_TweenWidth_(
                                                 v20,
                                                 0.05,
                                                 (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_B2C434(this, that);
  v21 = this;
  LODWORD(this[1].monitor) = 2;
  this[7].monitor = (void *)1065353216;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v21[4].monitor = v22;
  sub_B2C2F8(&v21[4].monitor, v22);
  v23 = StringLiteral_13064/*"StateLargeOut_End"*/;
  v21[5].klass = (SpotLargeComponent_StateLargeOut_c *)StringLiteral_13064/*"StateLargeOut_End"*/;
  sub_B2C2F8(&v21[5], v23);
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
    sub_B2C434(this, 0LL);
  SpotLargeComponent__SetLargeSpotNameScale_NormalScale(that, 0LL);
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