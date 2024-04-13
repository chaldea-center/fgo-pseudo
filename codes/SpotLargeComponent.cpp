void __fastcall SpotLargeComponent___ctor(SpotLargeComponent_o *this, const MethodInfo *method)
{
  this->fields.mapModelScale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SpotLargeComponent__Awake(SpotLargeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct CStateManager_SpotLargeComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct CStateManager_SpotLargeComponent__o *mFSM; // x21
  SpotLargeComponent_StateNone_o *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v35; // x21
  SpotLargeComponent_StateLargeIn_o *v36; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v37; // x21
  SpotLargeComponent_StateLargeMain_o *v38; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v39; // x20
  SpotLargeComponent_StateLargeOut_o *v40; // x21
  const MethodInfo *v41; // x2

  if ( (byte_42E9256 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_SpotLargeComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_SpotLargeComponent__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_SpotLargeComponent__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SpotLargeComponent_StateLargeIn_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SpotLargeComponent_StateLargeMain_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SpotLargeComponent_StateLargeOut_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&SpotLargeComponent_StateNone_TypeInfo, v20, v21, v22);
    byte_42E9256 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v24 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_SpotLargeComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v24,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2BB2630 *)Method_CStateManager_SpotLargeComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_SpotLargeComponent__o *)v24;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    mFSM = this->fields.mFSM;
    v32 = (SpotLargeComponent_StateNone_o *)sub_B5D694(SpotLargeComponent_StateNone_TypeInfo);
    SpotLargeComponent_StateNone___ctor(v32, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v32,
      (const MethodInfo_2BB26FC *)Method_CStateManager_SpotLargeComponent__add__);
    v35 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v36 = (SpotLargeComponent_StateLargeIn_o *)sub_B5D694(SpotLargeComponent_StateLargeIn_TypeInfo);
    SpotLargeComponent_StateLargeIn___ctor(v36, 0LL);
    if ( !v35 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v35,
      1,
      (IState_T__o *)v36,
      (const MethodInfo_2BB26FC *)Method_CStateManager_SpotLargeComponent__add__);
    v37 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v38 = (SpotLargeComponent_StateLargeMain_o *)sub_B5D694(SpotLargeComponent_StateLargeMain_TypeInfo);
    SpotLargeComponent_StateLargeMain___ctor(v38, 0LL);
    if ( !v37
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v37,
            2,
            (IState_T__o *)v38,
            (const MethodInfo_2BB26FC *)Method_CStateManager_SpotLargeComponent__add__),
          v39 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v40 = (SpotLargeComponent_StateLargeOut_o *)sub_B5D694(SpotLargeComponent_StateLargeOut_TypeInfo),
          SpotLargeComponent_StateLargeOut___ctor(v40, 0LL),
          !v39) )
    {
LABEL_9:
      sub_B5D69C(v33, v34);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v39,
      3,
      (IState_T__o *)v40,
      (const MethodInfo_2BB26FC *)Method_CStateManager_SpotLargeComponent__add__);
    SpotLargeComponent__SetState(this, 0, v41);
  }
}


void __fastcall SpotLargeComponent__ForceOff(SpotLargeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.mFSM )
    SpotLargeComponent__SetState(this, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall SpotLargeComponent__GetBasePosition(
        SpotLargeComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *mBaseSpot; // x20
  UnityEngine_Object_o *mMapCamera; // x20
  UnityEngine_Component_o *mScrl; // x0
  __int64 v8; // x1
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float x; // s9
  float y; // s10
  float z; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct MapCamera_o *v16; // x8
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  const MethodInfo *v18; // x1
  float BaseScale; // s0
  float v20; // s9
  float v21; // s10
  float v22; // s8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E925C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E925C = 1;
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
      v16 = this->fields.mMapCamera;
      if ( v16 )
      {
        mScrl = (UnityEngine_Component_o *)v16->fields.mScrl;
        if ( mScrl )
        {
          ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)mScrl, 0LL);
          BaseScale = SpotLargeComponent__GetBaseScale(this, v18);
          v20 = BaseScale * (float)(x - ScrlPos.fields.x);
          v21 = BaseScale * (float)(y - ScrlPos.fields.y);
          v22 = z * BaseScale;
          up = UnityEngine_Vector3__get_up(0LL);
          v9 = v20 - (float)(up.fields.x * 32.0);
          v10 = v21 - (float)(up.fields.y * 32.0);
          v11 = v22 - (float)(up.fields.z * 32.0);
          goto LABEL_20;
        }
      }
LABEL_19:
      sub_B5D69C(mScrl, v8);
    }
  }
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
LABEL_20:
  result.fields.z = v11;
  result.fields.y = v10;
  result.fields.x = v9;
  return result;
}


float __fastcall SpotLargeComponent__GetBaseScale(SpotLargeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *mMapCamera; // x20
  MapZoom_o *mZoom; // x0
  __int64 v7; // x1
  float result; // s0
  struct MapCamera_o *v9; // x8

  if ( (byte_42E925B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E925B = 1;
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
    v9 = this->fields.mMapCamera;
    if ( !v9 || (mZoom = v9->fields.mZoom) == 0LL )
      sub_B5D69C(mZoom, v7);
    return 1.0 / MapZoom__GetZoomSize(mZoom, 0LL);
  }
  return result;
}


int32_t __fastcall SpotLargeComponent__GetState(SpotLargeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SpotLargeComponent_o *v4; // x19
  struct CStateManager_SpotLargeComponent__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E9259 & 1) == 0 )
  {
    this = (SpotLargeComponent_o *)sub_B5D5C4(
                                     &Method_CStateManager_SpotLargeComponent__getState__,
                                     (_DWORD)method,
                                     v2,
                                     v3);
    byte_42E9259 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct SrcSpotBasePrefab_o **p_mBaseSpot; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  const MethodInfo *v32; // x1
  SpotEntity_o *Mine; // x24
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x8
  char v37; // w26
  UnityEngine_GameObject_o *v38; // x25
  bool v39; // w1
  const MethodInfo *v40; // x3
  System_Collections_Generic_List_UIAtlas__o *atlases; // x25
  UISprite_o *mSpotSp; // x26
  const MethodInfo *v43; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  float v45; // s0
  float v46; // s1
  float v47; // s2
  float v48; // s8
  float v49; // s9
  float v50; // s10
  UnityEngine_GameObject_o *v51; // x0
  float BaseScale; // s8
  UnityEngine_GameObject_o *v53; // x0
  const MethodInfo *v54; // x1
  float v55; // s8
  float v56; // s9
  float v57; // s10
  UnityEngine_GameObject_o *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  const MethodInfo *v65; // x2
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BasePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s3.4,4:s4.4,8:s5.4

  z = screenSpotPosition.fields.z;
  y = screenSpotPosition.fields.y;
  x = screenSpotPosition.fields.x;
  if ( (byte_42E9258 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)spot, (_DWORD)mapCamera, mapModelCamera);
    sub_B5D5C4(&SrcSpotBasePrefab_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v21, v22, v23);
    byte_42E9258 = 1;
  }
  this->fields.screenSpotPosition.fields.x = x;
  this->fields.screenSpotPosition.fields.y = y;
  this->fields.screenSpotPosition.fields.z = z;
  this->fields.isMapModel = isMapModel;
  this->fields.mBaseSpot = spot;
  p_mBaseSpot = &this->fields.mBaseSpot;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mBaseSpot,
    (System_Int32_array **)spot,
    (System_String_array **)mapCamera,
    (System_String_array **)mapModelCamera,
    (System_Boolean_array **)endAct,
    (System_Int32_array **)isMapModel,
    (System_Int32_array *)method,
    v8);
  this->fields.mMapCamera = mapCamera;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mMapCamera,
    (System_Int32_array **)mapCamera,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v32, v34, v35);
    byte_42E4B1E = 1;
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
  }
  v36 = *(_QWORD *)mMapCtrl_SpotInfo[2].monitor;
  if ( !v36 )
    goto LABEL_42;
  if ( !spot )
    goto LABEL_42;
  mMapCtrl_SpotInfo = *(MapControl_SpotInfo_o **)(v36 + 248);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_42;
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)ScrTerminalListTop__IsDispEventUIForSpot(
                                                 (ScrTerminalListTop_o *)mMapCtrl_SpotInfo,
                                                 spot->fields.miSpotID,
                                                 0LL);
  if ( !this->fields.mSpotNameSp )
    goto LABEL_42;
  v37 = (char)mMapCtrl_SpotInfo;
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.mSpotNameSp,
                                                 0LL);
  v38 = (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo;
  if ( (v37 & 1) != 0 )
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
    v39 = 0;
  }
  else
  {
    if ( !*p_mBaseSpot )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)System_String__IsNullOrEmpty((*p_mBaseSpot)->fields.mSpotNameStr, 0LL);
    if ( !v38 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v38, ((unsigned __int8)mMapCtrl_SpotInfo & 1) == 0, 0LL);
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.mSpotSp;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_42;
    v39 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, v39, 0LL);
  if ( !*p_mBaseSpot )
    goto LABEL_42;
  atlases = (*p_mBaseSpot)->fields.atlases;
  mSpotSp = this->fields.mSpotSp;
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  SrcSpotBasePrefab__SetSpotUIWithOffsetY(atlases, mSpotSp, Mine, 0.0, v40);
  if ( !*p_mBaseSpot )
LABEL_42:
    sub_B5D69C(mMapCtrl_SpotInfo, v32);
  SrcSpotBasePrefab__SetSpotNameUI(
    (*p_mBaseSpot)->fields.atlases,
    this->fields.mSpotNameSp,
    this->fields.mSpotNameLabel,
    (*p_mBaseSpot)->fields.mSpotNameStr,
    v43);
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
        *(UnityEngine_Vector3_o *)&v45 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
        mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)*p_mBaseSpot;
        if ( *p_mBaseSpot )
        {
          v48 = v45;
          v49 = v46;
          v50 = v47;
          v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mMapCtrl_SpotInfo, 0LL);
          LocalPosition = GameObjectExtensions__GetLocalPosition(v51, 0LL);
          v66.fields.x = v48;
          v66.fields.y = v49;
          v66.fields.z = v50;
          this->fields.mapModelScale = 2000.0 / UnityEngine_Vector3__Distance(v66, LocalPosition, 0LL);
          goto LABEL_41;
        }
      }
      goto LABEL_42;
    }
  }
LABEL_41:
  BaseScale = SpotLargeComponent__GetBaseScale(this, v32);
  v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_32432652(v53, BaseScale, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mShowEndAct,
    (System_Int32_array **)endAct,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  SpotLargeComponent__SetState(this, 1, v65);
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
  sub_B5D560(
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
    sub_B5D69C(0LL, v4);
  v8 = v5;
  v9 = v6;
  v10 = UnityEngine_Component__get_gameObject(mSpotNameSp, 0LL);
  GameObjectExtensions__SetLocalScale_32432716(v10, 1.0 / v8, 1.0 / v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotLargeComponent__SetState(SpotLargeComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_SpotLargeComponent__o *mFSM; // x0

  if ( (byte_42E925A & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_SpotLargeComponent__setState__, state, (_DWORD)method, v3);
    byte_42E925A = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_SpotLargeComponent__setState__);
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
  sub_B5D560(p_mShowEndAct, 0LL, v4, v5, v6, v7, v8, v9);
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
  sub_B5D560(p_mHideEndAct, 0LL, v4, v5, v6, v7, v8, v9);
  SpotLargeComponent__SetState(this, 0, v10);
}


void __fastcall SpotLargeComponent__Update(SpotLargeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_SpotLargeComponent__o *mFSM; // x0

  if ( (byte_42E9257 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_SpotLargeComponent__update__, (_DWORD)method, v2, v3);
    byte_42E9257 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_SpotLargeComponent__update__);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  TweenWidth_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // s0
  int32_t v18; // s1
  int v19; // s2
  UnityEngine_GameObject_o *v20; // x0
  TweenWidth_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  float v23; // s0
  float v24; // s1
  float v25; // s2
  float mapModelScale; // s3
  UnityEngine_GameObject_o *v27; // x0
  SpotLargeComponent_StateLargeIn_o *v28; // x20

  if ( (byte_42E643A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v5, v6, v7);
    sub_B5D5C4(&Method_UITweener_Begin_TweenScale___, v8, v9, v10);
    this = (SpotLargeComponent_StateLargeIn_o *)sub_B5D5C4(&StringLiteral_13219/*"StateLargeIn_End"*/, v11, v12, v13);
    byte_42E643A = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v15 = UITweener__Begin_TweenWidth_(
          gameObject,
          0.15,
          (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = GameObjectExtensions__GetLocalPosition(v16, 0LL);
  if ( !v15 )
    goto LABEL_8;
  v15->fields.from = v17;
  v15->fields.to = v18;
  *(_DWORD *)&v15->fields.updateTable = v19;
  HIDWORD(v15->fields.mWidget) = 0;
  *(_QWORD *)(&v15->fields.updateTable + 4) = 0xC2AA0000C3660000LL;
  v15->fields.style = 2;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v21 = UITweener__Begin_TweenWidth_(v20, 0.15, (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenScale___);
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v23 = GameObjectExtensions__GetLocalScale(v22, 0LL);
  if ( !v21 )
    goto LABEL_8;
  mapModelScale = that->fields.mapModelScale;
  *(_QWORD *)(&v21->fields.updateTable + 4) = 0x4000000040000000LL;
  HIDWORD(v21->fields.mWidget) = 1065353216;
  *(float *)&v21->fields.from = v23 * mapModelScale;
  *(float *)&v21->fields.to = v24 * mapModelScale;
  *(float *)&v21->fields.updateTable = v25 * mapModelScale;
  v21->fields.style = 2;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  this = (SpotLargeComponent_StateLargeIn_o *)UITweener__Begin_TweenWidth_(
                                                v27,
                                                0.15,
                                                (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_B5D69C(this, that);
  v28 = this;
  LODWORD(this[1].monitor) = 2;
  this[7].monitor = (void *)0x3F80000000000000LL;
  this[4].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  sub_B5D560(&v28[4].monitor);
  v28[5].klass = (SpotLargeComponent_StateLargeIn_c *)StringLiteral_13219/*"StateLargeIn_End"*/;
  sub_B5D560(&v28[5]);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x8
  __int64 v12; // x8
  struct UISprite_o *mSpotSp; // x21
  System_Collections_Generic_List_UIAtlas__o *v14; // x20
  UIAtlas_o *UIAtlasBySpriteName; // x0
  struct UISprite_o *mSpotNameSp; // x19
  UIAtlas_o *v17; // x1

  if ( (byte_42E643B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, (_DWORD)that, (_DWORD)method, v3);
    this = (SpotLargeComponent_StateLargeMain_o *)sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v5, v6, v7);
    byte_42E643B = 1;
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
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)that, v9, v10);
    byte_42E4B1E = 1;
  }
  this = (SpotLargeComponent_StateLargeMain_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    this = (SpotLargeComponent_StateLargeMain_o *)TerminalSceneComponent_TypeInfo;
  }
  v11 = *(_QWORD *)this[11].monitor;
  if ( !v11
    || (v12 = *(_QWORD *)(v11 + 256)) == 0
    || (mSpotSp = that->fields.mSpotSp) == 0LL
    || (v14 = *(System_Collections_Generic_List_UIAtlas__o **)(v12 + 288),
        UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v14, mSpotSp->fields.mSpriteName, 0LL),
        UISprite__set_atlas(mSpotSp, UIAtlasBySpriteName, 0LL),
        (mSpotNameSp = that->fields.mSpotNameSp) == 0LL) )
  {
LABEL_21:
    sub_B5D69C(this, that);
  }
  v17 = UIAtlas__GetUIAtlasBySpriteName(v14, mSpotNameSp->fields.mSpriteName, 0LL);
  UISprite__set_atlas(mSpotNameSp, v17, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  TweenWidth_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // s0
  int32_t v18; // s1
  int v19; // s2
  UnityEngine_GameObject_o *v20; // x0
  TweenWidth_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  int32_t v23; // s0
  int32_t v24; // s1
  int v25; // s2
  float v26; // s0
  UnityEngine_GameObject_o *v27; // x0
  SpotLargeComponent_StateLargeOut_o *v28; // x20

  if ( (byte_42E643C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v5, v6, v7);
    sub_B5D5C4(&Method_UITweener_Begin_TweenScale___, v8, v9, v10);
    this = (SpotLargeComponent_StateLargeOut_o *)sub_B5D5C4(&StringLiteral_13220/*"StateLargeOut_End"*/, v11, v12, v13);
    byte_42E643C = 1;
  }
  if ( !that )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v15 = UITweener__Begin_TweenWidth_(
          gameObject,
          0.05,
          (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = GameObjectExtensions__GetLocalPosition(v16, 0LL);
  if ( !v15 )
    goto LABEL_8;
  v15->fields.from = v17;
  v15->fields.to = v18;
  *(_DWORD *)&v15->fields.updateTable = v19;
  *(UnityEngine_Vector3_o *)(&v15->fields.updateTable + 4) = SpotLargeComponent__GetBasePosition(that, 0LL);
  v15->fields.style = 2;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v21 = UITweener__Begin_TweenWidth_(v20, 0.05, (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenScale___);
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  *(UnityEngine_Vector3_o *)&v23 = GameObjectExtensions__GetLocalScale(v22, 0LL);
  if ( !v21 )
    goto LABEL_8;
  v21->fields.from = v23;
  v21->fields.to = v24;
  *(_DWORD *)&v21->fields.updateTable = v25;
  v26 = SpotLargeComponent__GetBaseScale(that, 0LL) * that->fields.mapModelScale;
  HIDWORD(v21->fields.mWidget) = 1065353216;
  *((float *)&v21->fields.updateTable + 1) = v26;
  *(float *)&v21->fields.mWidget = v26;
  v21->fields.style = 2;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  this = (SpotLargeComponent_StateLargeOut_o *)UITweener__Begin_TweenWidth_(
                                                 v27,
                                                 0.05,
                                                 (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !this )
LABEL_8:
    sub_B5D69C(this, that);
  v28 = this;
  LODWORD(this[1].monitor) = 2;
  this[7].monitor = (void *)1065353216;
  this[4].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  sub_B5D560(&v28[4].monitor);
  v28[5].klass = (SpotLargeComponent_StateLargeOut_c *)StringLiteral_13220/*"StateLargeOut_End"*/;
  sub_B5D560(&v28[5]);
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
    sub_B5D69C(this, 0LL);
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