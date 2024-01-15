void __fastcall SpotLargeComponent___ctor(SpotLargeComponent_o *this, const MethodInfo *method)
{
  this->fields.mapModelScale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SpotLargeComponent__Awake(SpotLargeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct CStateManager_SpotLargeComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct CStateManager_SpotLargeComponent__o *mFSM; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  SpotLargeComponent_StateNone_o *v25; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  SpotLargeComponent_StateLargeIn_o *v31; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  SpotLargeComponent_StateLargeMain_o *v37; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  SpotLargeComponent_StateLargeOut_o *v43; // x21
  const MethodInfo *v44; // x2

  if ( (byte_40FADC1 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_SpotLargeComponent___ctor__, method);
    sub_B16FFC(&Method_CStateManager_SpotLargeComponent__add__, v6);
    sub_B16FFC(&CStateManager_SpotLargeComponent__TypeInfo, v7);
    sub_B16FFC(&SpotLargeComponent_StateLargeIn_TypeInfo, v8);
    sub_B16FFC(&SpotLargeComponent_StateLargeMain_TypeInfo, v9);
    sub_B16FFC(&SpotLargeComponent_StateLargeOut_TypeInfo, v10);
    sub_B16FFC(&SpotLargeComponent_StateNone_TypeInfo, v11);
    byte_40FADC1 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v13 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_SpotLargeComponent__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v13,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2907EF0 *)Method_CStateManager_SpotLargeComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_SpotLargeComponent__o *)v13;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    mFSM = this->fields.mFSM;
    v25 = (SpotLargeComponent_StateNone_o *)sub_B170CC(SpotLargeComponent_StateNone_TypeInfo, v21, v22, v23, v24);
    SpotLargeComponent_StateNone___ctor(v25, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v25,
      (const MethodInfo_2907FBC *)Method_CStateManager_SpotLargeComponent__add__);
    v26 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v31 = (SpotLargeComponent_StateLargeIn_o *)sub_B170CC(SpotLargeComponent_StateLargeIn_TypeInfo, v27, v28, v29, v30);
    SpotLargeComponent_StateLargeIn___ctor(v31, 0LL);
    if ( !v26 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v26,
      1,
      (IState_T__o *)v31,
      (const MethodInfo_2907FBC *)Method_CStateManager_SpotLargeComponent__add__);
    v32 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v37 = (SpotLargeComponent_StateLargeMain_o *)sub_B170CC(
                                                   SpotLargeComponent_StateLargeMain_TypeInfo,
                                                   v33,
                                                   v34,
                                                   v35,
                                                   v36);
    SpotLargeComponent_StateLargeMain___ctor(v37, 0LL);
    if ( !v32
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v32,
            2,
            (IState_T__o *)v37,
            (const MethodInfo_2907FBC *)Method_CStateManager_SpotLargeComponent__add__),
          v38 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v43 = (SpotLargeComponent_StateLargeOut_o *)sub_B170CC(
                                                        SpotLargeComponent_StateLargeOut_TypeInfo,
                                                        v39,
                                                        v40,
                                                        v41,
                                                        v42),
          SpotLargeComponent_StateLargeOut___ctor(v43, 0LL),
          !v38) )
    {
LABEL_9:
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v38,
      3,
      (IState_T__o *)v43,
      (const MethodInfo_2907FBC *)Method_CStateManager_SpotLargeComponent__add__);
    SpotLargeComponent__SetState(this, 0, v44);
  }
}


void __fastcall SpotLargeComponent__ForceOff(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  UnityEngine_Object_o *mMapCamera; // x20
  float v5; // s0
  float v6; // s1
  float v7; // s2
  float x; // s9
  float y; // s10
  float z; // s8
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct MapCamera_o *v13; // x8
  MapScroll_o *mScrl; // x0
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  const MethodInfo *v16; // x1
  float BaseScale; // s0
  float v18; // s9
  float v19; // s10
  float v20; // s8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FADC7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FADC7 = 1;
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
    if ( !UnityEngine_Object__op_Equality(mMapCamera, 0LL, 0LL) )
    {
      if ( this->fields.isMapModel )
      {
        x = this->fields.screenSpotPosition.fields.x;
        y = this->fields.screenSpotPosition.fields.y;
        z = this->fields.screenSpotPosition.fields.z;
      }
      else
      {
        v11 = (UnityEngine_Component_o *)this->fields.mBaseSpot;
        if ( !v11 )
          goto LABEL_19;
        gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
        LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
        x = LocalPosition.fields.x;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
      }
      v13 = this->fields.mMapCamera;
      if ( v13 )
      {
        mScrl = v13->fields.mScrl;
        if ( mScrl )
        {
          ScrlPos = MapScroll__GetScrlPos(mScrl, 0LL);
          BaseScale = SpotLargeComponent__GetBaseScale(this, v16);
          v18 = BaseScale * (float)(x - ScrlPos.fields.x);
          v19 = BaseScale * (float)(y - ScrlPos.fields.y);
          v20 = z * BaseScale;
          up = UnityEngine_Vector3__get_up(0LL);
          v5 = v18 - (float)(up.fields.x * 32.0);
          v6 = v19 - (float)(up.fields.y * 32.0);
          v7 = v20 - (float)(up.fields.z * 32.0);
          goto LABEL_20;
        }
      }
LABEL_19:
      sub_B170D4();
    }
  }
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Vector3__get_zero(0LL);
LABEL_20:
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


float __fastcall SpotLargeComponent__GetBaseScale(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMapCamera; // x20
  bool v4; // w0
  float result; // s0
  struct MapCamera_o *v6; // x8
  MapZoom_o *mZoom; // x0

  if ( (byte_40FADC6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FADC6 = 1;
  }
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(mMapCamera, 0LL, 0LL);
  result = 0.0;
  if ( !v4 )
  {
    v6 = this->fields.mMapCamera;
    if ( !v6 || (mZoom = v6->fields.mZoom) == 0LL )
      sub_B170D4();
    return 1.0 / MapZoom__GetZoomSize(mZoom, 0LL);
  }
  return result;
}


int32_t __fastcall SpotLargeComponent__GetState(SpotLargeComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_SpotLargeComponent__o *mFSM; // x8

  if ( (byte_40FADC4 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_SpotLargeComponent__getState__, method);
    byte_40FADC4 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
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
  UnityEngine_Component_o **p_mBaseSpot; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  SpotEntity_o *Mine; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  TerminalSceneComponent_c *v31; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x0
  bool IsDispEventUIForSpot; // w0
  bool v35; // w26
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x25
  UnityEngine_Component_o *mSpotSp; // x0
  UnityEngine_GameObject_o *v39; // x0
  bool v40; // w1
  bool IsNullOrEmpty; // w0
  UnityEngine_Component_o *v42; // x0
  const MethodInfo *v43; // x3
  System_Collections_Generic_List_UIAtlas__o *monitor; // x25
  UISprite_o *v45; // x26
  const MethodInfo *v46; // x4
  const MethodInfo *v47; // x1
  UnityEngine_GameObject_o *v48; // x0
  float v49; // s0
  float v50; // s1
  float v51; // s2
  float v52; // s8
  float v53; // s9
  float v54; // s10
  UnityEngine_GameObject_o *v55; // x0
  float BaseScale; // s8
  UnityEngine_GameObject_o *v57; // x0
  const MethodInfo *v58; // x1
  float v59; // s8
  float v60; // s9
  float v61; // s10
  UnityEngine_GameObject_o *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x2
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BasePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s3.4,4:s4.4,8:s5.4

  z = screenSpotPosition.fields.z;
  y = screenSpotPosition.fields.y;
  x = screenSpotPosition.fields.x;
  if ( (byte_40FADC3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, spot);
    sub_B16FFC(&SrcSpotBasePrefab_TypeInfo, v18);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v19);
    byte_40FADC3 = 1;
  }
  this->fields.screenSpotPosition.fields.x = x;
  this->fields.screenSpotPosition.fields.y = y;
  this->fields.screenSpotPosition.fields.z = z;
  this->fields.isMapModel = isMapModel;
  this->fields.mBaseSpot = spot;
  p_mBaseSpot = (UnityEngine_Component_o **)&this->fields.mBaseSpot;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mBaseSpot,
    (System_Int32_array **)spot,
    (System_String_array **)mapCamera,
    (System_String_array **)mapModelCamera,
    (System_Boolean_array **)endAct,
    (System_Int32_array **)isMapModel,
    (System_Int32_array *)method,
    v8);
  this->fields.mMapCamera = mapCamera;
  sub_B16F98(
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v30);
    byte_40F6042 = 1;
  }
  v31 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v31 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v31->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_42;
  if ( !spot )
    goto LABEL_42;
  mTerminalList = mInstance->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_42;
  IsDispEventUIForSpot = ScrTerminalListTop__IsDispEventUIForSpot(mTerminalList, spot->fields.miSpotID, 0LL);
  if ( !this->fields.mSpotNameSp )
    goto LABEL_42;
  v35 = IsDispEventUIForSpot;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.mSpotNameSp, 0LL);
  v37 = v36;
  if ( v35 )
  {
    if ( !v36 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v36, 0, 0LL);
    mSpotSp = (UnityEngine_Component_o *)this->fields.mSpotSp;
    if ( !mSpotSp )
      goto LABEL_42;
    v39 = UnityEngine_Component__get_gameObject(mSpotSp, 0LL);
    if ( !v39 )
      goto LABEL_42;
    v40 = 0;
  }
  else
  {
    if ( !*p_mBaseSpot )
      goto LABEL_42;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)(*p_mBaseSpot)[8].klass, 0LL);
    if ( !v37 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v37, !IsNullOrEmpty, 0LL);
    v42 = (UnityEngine_Component_o *)this->fields.mSpotSp;
    if ( !v42 )
      goto LABEL_42;
    v39 = UnityEngine_Component__get_gameObject(v42, 0LL);
    if ( !v39 )
      goto LABEL_42;
    v40 = 1;
  }
  UnityEngine_GameObject__SetActive(v39, v40, 0LL);
  if ( !*p_mBaseSpot )
    goto LABEL_42;
  monitor = (System_Collections_Generic_List_UIAtlas__o *)(*p_mBaseSpot)[6].monitor;
  v45 = this->fields.mSpotSp;
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  SrcSpotBasePrefab__SetSpotUIWithOffsetY(monitor, v45, Mine, 0.0, v43);
  if ( !*p_mBaseSpot )
LABEL_42:
    sub_B170D4();
  SrcSpotBasePrefab__SetSpotNameUI(
    (System_Collections_Generic_List_UIAtlas__o *)(*p_mBaseSpot)[6].monitor,
    this->fields.mSpotNameSp,
    this->fields.mSpotNameLabel,
    (System_String_o *)(*p_mBaseSpot)[8].klass,
    v46);
  this->fields.mapModelScale = 1.0;
  if ( isMapModel )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)mapModelCamera, 0LL, 0LL) )
    {
      if ( mapModelCamera )
      {
        v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mapModelCamera, 0LL);
        *(UnityEngine_Vector3_o *)&v49 = GameObjectExtensions__GetLocalPosition(v48, 0LL);
        if ( *p_mBaseSpot )
        {
          v52 = v49;
          v53 = v50;
          v54 = v51;
          v55 = UnityEngine_Component__get_gameObject(*p_mBaseSpot, 0LL);
          LocalPosition = GameObjectExtensions__GetLocalPosition(v55, 0LL);
          v70.fields.x = v52;
          v70.fields.y = v53;
          v70.fields.z = v54;
          this->fields.mapModelScale = 2000.0 / UnityEngine_Vector3__Distance(v70, LocalPosition, 0LL);
          goto LABEL_41;
        }
      }
      goto LABEL_42;
    }
  }
LABEL_41:
  BaseScale = SpotLargeComponent__GetBaseScale(this, v47);
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_27422124(v57, BaseScale, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mShowEndAct,
    (System_Int32_array **)endAct,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  SpotLargeComponent__SetState(this, 1, v69);
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
  sub_B16F98(
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
    sub_B170D4();
  v7 = v4;
  v8 = v5;
  v9 = UnityEngine_Component__get_gameObject(mSpotNameSp, 0LL);
  GameObjectExtensions__SetLocalScale_27422188(v9, 1.0 / v7, 1.0 / v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotLargeComponent__SetState(SpotLargeComponent_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_SpotLargeComponent__o *mFSM; // x0

  if ( (byte_40FADC5 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_SpotLargeComponent__setState__, *(_QWORD *)&state);
    byte_40FADC5 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_SpotLargeComponent__setState__);
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
  sub_B16F98(p_mShowEndAct, 0LL, v4, v5, v6, v7, v8, v9);
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
  sub_B16F98(p_mHideEndAct, 0LL, v4, v5, v6, v7, v8, v9);
  SpotLargeComponent__SetState(this, 0, v10);
}


void __fastcall SpotLargeComponent__Update(SpotLargeComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_SpotLargeComponent__o *mFSM; // x0

  if ( (byte_40FADC2 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_SpotLargeComponent__update__, method);
    byte_40FADC2 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_SpotLargeComponent__update__);
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
  TweenWidth_o *v21; // x0
  TweenWidth_o *v22; // x20
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40F7A53 & 1) == 0 )
  {
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, that);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v4);
    sub_B16FFC(&Method_UITweener_Begin_TweenScale___, v5);
    sub_B16FFC(&StringLiteral_13007/*"StateLargeIn_End"*/, v6);
    byte_40F7A53 = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v8 = UITweener__Begin_TweenWidth_(
         gameObject,
         0.15,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
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
  v14 = UITweener__Begin_TweenWidth_(v13, 0.15, (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenScale___);
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
  v21 = UITweener__Begin_TweenWidth_(v20, 0.15, (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v21 )
LABEL_8:
    sub_B170D4();
  v22 = v21;
  v21->fields.style = 2;
  *(_QWORD *)&v21->fields.from = 0x3F80000000000000LL;
  v23 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v22->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v23;
  sub_B16F98((BattleServantConfConponent_o *)&v22->fields.eventReceiver, v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_Int32_array **)StringLiteral_13007/*"StateLargeIn_End"*/;
  v22->fields.callWhenFinished = (struct System_String_o *)StringLiteral_13007/*"StateLargeIn_End"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v22->fields.callWhenFinished, v30, v31, v32, v33, v34, v35, v36);
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
    sub_B170D4();
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
  UnityEngine_Component_o *Parent; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  TerminalSceneComponent_c *v11; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct UISprite_o *mSpotSp; // x21
  System_Collections_Generic_List_UIAtlas__o *spotList; // x20
  UIAtlas_o *UIAtlasBySpriteName; // x0
  struct UISprite_o *mSpotNameSp; // x19
  UIAtlas_o *v18; // x1

  if ( (byte_40F7A54 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, that);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v4);
    byte_40F7A54 = 1;
  }
  if ( !that )
    goto LABEL_21;
  SpotLargeComponent__SetLargeSpotNameScale_NormalScale(that, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !Parent )
    goto LABEL_21;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              Parent,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_WebViewObject )
    goto LABEL_21;
  ((void (__fastcall *)(WebViewObject_o *, __int64, void *))Component_WebViewObject->klass[1]._1.klass)(
    Component_WebViewObject,
    1LL,
    Component_WebViewObject->klass[1]._1.fields);
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  if ( !v8 )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(v8, 0, 0LL);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  if ( !v9 )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(v9, 1, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v10);
    byte_40F6042 = 1;
  }
  v11 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v11 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v11->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL
    || (mSpotSp = that->fields.mSpotSp) == 0LL
    || (spotList = (System_Collections_Generic_List_UIAtlas__o *)mTerminalMap->fields.spotList,
        UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(spotList, mSpotSp->fields.mSpriteName, 0LL),
        UISprite__set_atlas(mSpotSp, UIAtlasBySpriteName, 0LL),
        (mSpotNameSp = that->fields.mSpotNameSp) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  v18 = UIAtlas__GetUIAtlasBySpriteName(spotList, mSpotNameSp->fields.mSpriteName, 0LL);
  UISprite__set_atlas(mSpotNameSp, v18, 0LL);
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
  TweenWidth_o *v21; // x0
  TweenWidth_o *v22; // x20
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40F7A55 & 1) == 0 )
  {
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, that);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v4);
    sub_B16FFC(&Method_UITweener_Begin_TweenScale___, v5);
    sub_B16FFC(&StringLiteral_13008/*"StateLargeOut_End"*/, v6);
    byte_40F7A55 = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v8 = UITweener__Begin_TweenWidth_(
         gameObject,
         0.05,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
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
  v14 = UITweener__Begin_TweenWidth_(v13, 0.05, (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenScale___);
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
  v21 = UITweener__Begin_TweenWidth_(v20, 0.05, (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v21 )
LABEL_8:
    sub_B170D4();
  v22 = v21;
  v21->fields.style = 2;
  *(_QWORD *)&v21->fields.from = 1065353216LL;
  v23 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v22->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v23;
  sub_B16F98((BattleServantConfConponent_o *)&v22->fields.eventReceiver, v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_Int32_array **)StringLiteral_13008/*"StateLargeOut_End"*/;
  v22->fields.callWhenFinished = (struct System_String_o *)StringLiteral_13008/*"StateLargeOut_End"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v22->fields.callWhenFinished, v30, v31, v32, v33, v34, v35, v36);
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
    sub_B170D4();
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