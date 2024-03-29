void __fastcall CylinderCore___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  CylinderCore_c *v2; // x8
  struct CylinderCore_StaticFields *static_fields; // x9
  struct CylinderCore_StaticFields *v4; // x9
  struct CylinderCore_StaticFields *v5; // x8

  if ( (byte_421603D & 1) == 0 )
  {
    sub_B0D8A4(&CylinderCore_TypeInfo, v1);
    byte_421603D = 1;
  }
  CylinderCore_TypeInfo->static_fields->BASE_ROT_X = -32.733;
  CylinderCore_TypeInfo->static_fields->BASE_ROT_Z = 5.897;
  v2 = CylinderCore_TypeInfo;
  static_fields = CylinderCore_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x = 0xC3200000C30C0000LL;
  static_fields->FOCUS_IN_POS.fields.z = 5.0;
  v4 = v2->static_fields;
  *(_QWORD *)&v4->FOCUS_OUT_POS.fields.x = 0xC3340000C3290000LL;
  v4->FOCUS_OUT_POS.fields.z = 94.0;
  v5 = v2->static_fields;
  *(_QWORD *)&v5->ZOOM_IN_POS.fields.x = 0xC337000000000000LL;
  v5->ZOOM_IN_POS.fields.z = -624.0;
}


void __fastcall CylinderCore___ctor(CylinderCore_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CylinderCore_StateMain_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_421603C & 1) == 0 )
  {
    sub_B0D8A4(&CylinderCore_StateMain_TypeInfo, method);
    byte_421603C = 1;
  }
  v4 = (CylinderCore_StateMain_o *)sub_B0D974(CylinderCore_StateMain_TypeInfo, method, v2);
  CylinderCore_StateMain___ctor(v4, 0LL);
  this->fields.mStateMain = v4;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mStateMain,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  BaseCore___ctor((BaseCore_o *)this, 0LL);
}


void __fastcall CylinderCore__Awake(CylinderCore_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct CStateManager_CylinderCore__o *mFSM; // x8
  struct CStateManager_CylinderCore__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct CStateManager_CylinderCore__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  CylinderCore_StateNone_o *v22; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *mEarthRoot; // x0
  struct CStateManager_CylinderCore__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  CylinderCore_StateZoomIn_o *v27; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  CylinderCore_StateZoomOut_o *v31; // x21
  const MethodInfo *v32; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_MeshRenderer_o *Component_srcLineSprite; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  CylinderCore_c *klass; // x8
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216037 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_CylinderCore___ctor__, method);
    sub_B0D8A4(&Method_CStateManager_CylinderCore__add__, v4);
    sub_B0D8A4(&CStateManager_CylinderCore__TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v6);
    sub_B0D8A4(&CylinderCore_StateNone_TypeInfo, v7);
    sub_B0D8A4(&CylinderCore_StateZoomIn_TypeInfo, v8);
    sub_B0D8A4(&CylinderCore_StateZoomOut_TypeInfo, v9);
    byte_4216037 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 1;
  if ( !mFSM )
  {
    v12 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(
                                                                CStateManager_CylinderCore__TypeInfo,
                                                                method,
                                                                v2);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v12,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2AAF784 *)Method_CStateManager_CylinderCore___ctor__);
    this->fields.mFSM = (struct CStateManager_CylinderCore__o *)v12;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v19 = this->fields.mFSM;
    v22 = (CylinderCore_StateNone_o *)sub_B0D974(CylinderCore_StateNone_TypeInfo, v20, v21);
    CylinderCore_StateNone___ctor(v22, 0LL);
    if ( !v19 )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v19,
      0,
      (IState_T__o *)v22,
      (const MethodInfo_2AAF850 *)Method_CStateManager_CylinderCore__add__);
    mEarthRoot = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      mEarthRoot,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_2AAF850 *)Method_CStateManager_CylinderCore__add__);
    v24 = this->fields.mFSM;
    v27 = (CylinderCore_StateZoomIn_o *)sub_B0D974(CylinderCore_StateZoomIn_TypeInfo, v25, v26);
    CylinderCore_StateZoomIn___ctor(v27, 0LL);
    if ( !v24
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)v24,
            2,
            (IState_T__o *)v27,
            (const MethodInfo_2AAF850 *)Method_CStateManager_CylinderCore__add__),
          v28 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v31 = (CylinderCore_StateZoomOut_o *)sub_B0D974(CylinderCore_StateZoomOut_TypeInfo, v29, v30),
          CylinderCore_StateZoomOut___ctor(v31, 0LL),
          !v28) )
    {
LABEL_13:
      sub_B0D97C(mEarthRoot);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v28,
      3,
      (IState_T__o *)v31,
      (const MethodInfo_2AAF850 *)Method_CStateManager_CylinderCore__add__);
    CylinderCore__SetState(this, 0, v32);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_31180844(gameObject, 1.0, 0LL);
  mEarthRoot = (CStateManager_QAASpotStateController_IMapSpot__o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
  if ( !mEarthRoot )
    goto LABEL_13;
  Component_srcLineSprite = (struct UnityEngine_MeshRenderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)mEarthRoot,
                                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  this->fields.mMeshRenderer = Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mMeshRenderer,
    (System_Int32_array **)Component_srcLineSprite,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  mEarthRoot = (CStateManager_QAASpotStateController_IMapSpot__o *)this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_13;
  mEarthRoot = (CStateManager_QAASpotStateController_IMapSpot__o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)mEarthRoot,
                                                                     0LL);
  if ( !mEarthRoot )
    goto LABEL_13;
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)mEarthRoot, 0LL);
  klass = this->klass;
  this->fields.mRootQua = localRotation;
  ((void (__fastcall *)(CylinderCore_o *, __int64, Il2CppMethodPointer))klass->vtable._12_SetDisp.method)(
    this,
    1LL,
    klass->vtable._13_GetState.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore__FocusInOut(CylinderCore_o *this, bool isFocusIn, bool isForce, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  CylinderCore_c *v9; // x0
  struct CylinderCore_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct CylinderCore_StaticFields *v14; // x10
  float v15; // w8
  float v16; // w9
  float v17; // w10
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct TransitionCalculator_Vector3__o **p_focusInOutPositionCalculator; // x0
  System_Int32_array **v25; // x1
  float v26; // s8
  System_Func_Vector3__Vector3__float__Vector3__o *v27; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v31; // s9
  float v32; // s10
  float v33; // s14
  __int64 v34; // x1
  __int64 v35; // x2
  TransitionCalculator_Vector3__o *v36; // x0
  struct TransitionCalculator_Vector3__o *v37; // x21
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4216036 & 1) == 0 )
  {
    sub_B0D8A4(&CylinderCore_TypeInfo, isFocusIn);
    sub_B0D8A4(&Method_TransitionCalculator_Vector3___ctor__, v7);
    sub_B0D8A4(&TransitionCalculator_Vector3__TypeInfo, v8);
    byte_4216036 = 1;
  }
  this->fields.mIsFocusIn = isFocusIn;
  v9 = CylinderCore_TypeInfo;
  if ( isFocusIn )
  {
    if ( (WORD1(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CylinderCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
      v9 = CylinderCore_TypeInfo;
    }
    static_fields = v9->static_fields;
    p_x = &static_fields->FOCUS_IN_POS.fields.x;
    p_y = &static_fields->FOCUS_IN_POS.fields.y;
    p_z = &static_fields->FOCUS_IN_POS.fields.z;
  }
  else
  {
    if ( (WORD1(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CylinderCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
      v9 = CylinderCore_TypeInfo;
    }
    v14 = v9->static_fields;
    p_x = &v14->FOCUS_OUT_POS.fields.x;
    p_y = &v14->FOCUS_OUT_POS.fields.y;
    p_z = &v14->FOCUS_OUT_POS.fields.z;
  }
  v15 = *p_x;
  v16 = *p_y;
  v17 = *p_z;
  this->fields.mFocusTgtPos.fields.x = v15;
  this->fields.mFocusTgtPos.fields.y = v16;
  this->fields.mFocusTgtPos.fields.z = v17;
  if ( isForce )
  {
    v38.fields.z = v17;
    v38.fields.y = v16;
    v38.fields.x = v15;
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, v38, 0LL);
    this->fields.focusInOutPositionCalculator = 0LL;
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    v25 = 0LL;
  }
  else
  {
    v26 = ChangedFPSUtil__CovertFrameNumToSecond(12, 0LL);
    v27 = ExtraEasing__AsymptoticSeriesVector3(0.35, 12.0, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0LL);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v31 = LocalPosition.fields.x;
    v32 = LocalPosition.fields.y;
    v33 = LocalPosition.fields.z;
    v36 = (TransitionCalculator_Vector3__o *)sub_B0D974(TransitionCalculator_Vector3__TypeInfo, v34, v35);
    v40.fields.x = v31;
    v40.fields.y = v32;
    v40.fields.z = v33;
    v41.fields.x = x;
    v41.fields.y = y;
    v41.fields.z = z;
    v37 = v36;
    TransitionCalculator_Vector3____ctor(
      v36,
      v40,
      v41,
      v26,
      (System_Func_T__T__float__T__o *)v27,
      (const MethodInfo_2686B48 *)Method_TransitionCalculator_Vector3___ctor__);
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    this->fields.focusInOutPositionCalculator = v37;
    v25 = (System_Int32_array **)v37;
  }
  sub_B0D840((BattleServantConfConponent_o *)p_focusInOutPositionCalculator, v25, v18, v19, v20, v21, v22, v23);
}


int32_t __fastcall CylinderCore__GetState(CylinderCore_o *this, const MethodInfo *method)
{
  CylinderCore_o *v2; // x19
  struct CStateManager_CylinderCore__o *mFSM; // x8

  v2 = this;
  if ( (byte_421603A & 1) == 0 )
  {
    this = (CylinderCore_o *)sub_B0D8A4(&Method_CStateManager_CylinderCore__getState__, method);
    byte_421603A = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(this);
  return mFSM->fields.m_state;
}


CylinderCore_StateMain_o *__fastcall CylinderCore__GetStateMain(CylinderCore_o *this, const MethodInfo *method)
{
  return this->fields.mStateMain;
}


float __fastcall CylinderCore__GetStateMainInertialSpdOld(CylinderCore_o *this, const MethodInfo *method)
{
  struct CylinderCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  if ( !mStateMain )
    sub_B0D97C(this);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall CylinderCore__OnPress(CylinderCore_o *this, const MethodInfo *method)
{
  struct CylinderCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_B0D97C(this);
  mStateMain->fields._InertialSpdOld_k__BackingField = mStateMain->fields.mInertialSpd;
}


void __fastcall CylinderCore__SetDisp(CylinderCore_o *this, bool is_disp, const MethodInfo *method)
{
  UnityEngine_Renderer_o *mMeshRenderer; // x0
  bool v5; // w20

  mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mMeshRenderer;
  if ( !mMeshRenderer
    || (v5 = is_disp,
        UnityEngine_Renderer__set_enabled(mMeshRenderer, is_disp, 0LL),
        (mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mEarthPointRoot) == 0LL) )
  {
    sub_B0D97C(mMeshRenderer);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore__SetState(CylinderCore_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_CylinderCore__o *mFSM; // x0

  if ( (byte_421603B & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_CylinderCore__setState__, *(_QWORD *)&state);
    byte_421603B = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2AAF8F4 *)Method_CStateManager_CylinderCore__setState__);
}


void __fastcall CylinderCore__Setup(
        CylinderCore_o *this,
        System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList,
        bool isFocusIn,
        const MethodInfo *method)
{
  __int128 v4; // q10
  __int128 v5; // q12
  __int128 v6; // q14
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v19; // w20
  float v20; // s9
  float v21; // s11
  _BOOL8 v22; // x0
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v25; // x23
  int32_t warId; // w21
  _BOOL4 IsEvent; // w0
  __int64 mCoreType; // x28
  System_Single_array_array *PrioredCoordinates; // x0
  int max_length; // w8
  System_Single_array *v31; // x8
  float v32; // s8
  float v33; // s13
  bool IsWarOpen; // w22
  BaseEarthPoint_o *EarthPoint; // x0
  UnityEngine_Object_o *v36; // x23
  __int64 v37; // x9
  _BOOL8 v38; // x0
  __int128 v39; // q1
  float v40; // s11
  float v41; // s8
  float v42; // s0
  __int128 v43; // q14
  __int128 v44; // q10
  __int128 v45; // q12
  float v46; // s9
  float v47; // s0
  float v48; // s1
  __int128 v49; // q13
  Il2CppObject *EarthPoint_object; // x0
  __int128 v51; // q0
  UnityEngine_GameObject_o *v52; // x0
  __int64 v53; // x0
  float v54; // [xsp+0h] [xbp-D0h]
  float v55; // [xsp+4h] [xbp-CCh]
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+20h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4216039 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BaseCore_CreateEarthPoint_CylinderPoint___, warInfoList);
    sub_B0D8A4(&CylinderPoint_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_8390/*"LAST_WAR_ID"*/, v16);
    byte_4216039 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot
    || (mEarthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mEarthRoot, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)mEarthRoot, this->fields.mRootQua, 0LL),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        zero = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalEulerAngle(gameObject, zero, 0LL),
        ((void (__fastcall *)(CylinderCore_o *, bool, __int64, Il2CppMethodPointer))this->klass->vtable._4_FocusInOut.method)(
          this,
          isFocusIn,
          1LL,
          this->klass->vtable._5_Awake.methodPtr),
        mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8390/*"LAST_WAR_ID"*/, 0LL),
        !warInfoList) )
  {
    sub_B0D97C(mEarthRoot);
  }
  v19 = (int)mEarthRoot;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v20 = 192.0;
  LODWORD(v6) = 1016003125;
  LODWORD(v5) = 1125056512;
  v57 = v56;
  LODWORD(v4) = 1119092736;
  v21 = -90.0;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v57,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v22 )
      break;
    current = (MapControl_WarInfo_o *)v57.fields.current;
    if ( !v57.fields.current )
      sub_B0D97C(v22);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v57.fields.current, 0LL);
    v25 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0LL) && !WarEntity__IsDisplayEarthPointWithoutMap(v25, 0LL) )
        goto LABEL_19;
      IsEvent = WarEntity__IsEvent(v25, 0LL);
      if ( warId <= v19 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v25, 0LL);
        if ( !PrioredCoordinates )
          goto LABEL_19;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_19;
        if ( (unsigned int)mCoreType >= max_length )
        {
          v53 = sub_B0D9A8(PrioredCoordinates);
          sub_B0D948(v53, 0LL);
        }
        v31 = PrioredCoordinates->m_Items[mCoreType];
        if ( v31 && (int)v31->max_length >= 2 )
        {
          v33 = v31->m_Items[1];
          v32 = v31->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          v36 = (UnityEngine_Object_o *)EarthPoint;
          if ( EarthPoint )
          {
            v37 = *(&CylinderPoint_TypeInfo->_2.bitflags2 + 1);
            if ( *(&EarthPoint->klass->_2.bitflags2 + 1) < (unsigned int)v37
              || (CylinderPoint_c *)EarthPoint->klass->_2.typeHierarchy[v37 - 1] != CylinderPoint_TypeInfo )
            {
              v52 = (UnityEngine_GameObject_o *)sub_B0DC70(EarthPoint);
LABEL_40:
              sub_B0D97C(v52);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v38 = UnityEngine_Object__op_Equality(v36, 0LL, 0LL);
          if ( v38 )
          {
            v39 = v6;
            v54 = v21;
            v55 = v20;
            v40 = (float)(v32 + v20) + v21;
            v41 = v40 * *(float *)&v6;
            v42 = v40 * *(float *)&v6;
            v43 = v4;
            v44 = v5;
            v45 = v39;
            v46 = cosf(v42);
            v47 = sinf(v41);
            v48 = v33 / *(float *)&v43;
            v49 = v44;
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  v46 * *(float *)&v44,
                                  v48 * 120.0,
                                  v47 * *(float *)&v44,
                                  (const MethodInfo_1705FF0 *)Method_BaseCore_CreateEarthPoint_CylinderPoint___);
            if ( !EarthPoint_object )
              sub_B0D97C(0LL);
            *((float *)&EarthPoint_object[6].monitor + 1) = v40;
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
            v21 = v54;
            v20 = v55;
            v51 = v45;
            v4 = v43;
            v5 = v49;
            v6 = v51;
          }
          else
          {
            if ( !v36 )
              sub_B0D97C(v38);
            v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v36, 0LL);
            if ( !v52 )
              goto LABEL_40;
            UnityEngine_GameObject__SetActive(v52, IsWarOpen, 0LL);
          }
        }
        else
        {
LABEL_19:
          BaseCore__HideEarthPoint((BaseCore_o *)this, warId, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v57,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall CylinderCore__Update(CylinderCore_o *this, const MethodInfo *method)
{
  struct CStateManager_CylinderCore__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4216038 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_CylinderCore__update__, method);
    byte_4216038 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2AAF8CC *)Method_CStateManager_CylinderCore__update__);
  if ( this->fields.mIsReqZoomIn && CylinderCore__GetState(this, method) == 1 )
  {
    BaseCore__EndSlideServant((BaseCore_o *)this, 0LL);
    this->fields.mIsReqZoomIn = 0;
    CylinderCore__SetState(this, 2, v4);
  }
}


CylinderPoint_o *__fastcall CylinderCore__get_mFocusCylinderPoint(CylinderCore_o *this, const MethodInfo *method)
{
  struct BaseEarthPoint_o *mFocusEarthPoint; // x8
  __int64 v4; // x11

  if ( (byte_4216035 & 1) == 0 )
  {
    sub_B0D8A4(&CylinderPoint_TypeInfo, method);
    byte_4216035 = 1;
  }
  mFocusEarthPoint = this->fields.mFocusEarthPoint;
  if ( !mFocusEarthPoint )
    return 0LL;
  v4 = *(&CylinderPoint_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mFocusEarthPoint->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (CylinderPoint_c *)mFocusEarthPoint->klass->_2.typeHierarchy[v4 - 1] == CylinderPoint_TypeInfo )
    return (CylinderPoint_o *)this->fields.mFocusEarthPoint;
  return 0LL;
}


void __fastcall CylinderCore__mcbfStartMain(CylinderCore_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CylinderCore__SetState(this, 1, v2);
}


void __fastcall CylinderCore__mcbfStartZoomIn(CylinderCore_o *this, const MethodInfo *method)
{
  this->fields.mIsReqZoomIn = 1;
}


void __fastcall CylinderCore__mcbfStartZoomOut(CylinderCore_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CylinderCore__SetState(this, 3, v2);
}


void __fastcall CylinderCore_StateMain___ctor(CylinderCore_StateMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateMain__begin(
        CylinderCore_StateMain_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  this->fields.mInertialSpd = 0.0;
}


void __fastcall CylinderCore_StateMain__end(
        CylinderCore_StateMain_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


float __fastcall CylinderCore_StateMain__get_InertialSpd(CylinderCore_StateMain_o *this, const MethodInfo *method)
{
  return this->fields.mInertialSpd;
}


float __fastcall CylinderCore_StateMain__get_InertialSpdOld(CylinderCore_StateMain_o *this, const MethodInfo *method)
{
  return this->fields._InertialSpdOld_k__BackingField;
}


void __fastcall CylinderCore_StateMain__set_InertialSpdOld(
        CylinderCore_StateMain_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._InertialSpdOld_k__BackingField = value;
}


void __fastcall CylinderCore_StateMain__update(
        CylinderCore_StateMain_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  CylinderCore_StateMain_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  float *p_fields; // x20
  float mInertialSpd; // t1
  float v10; // s8
  float v11; // s0
  __int64 v12; // x1
  CTouch_c *v13; // x0
  float x; // s8
  float v15; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  float v17; // s8
  UnityEngine_GameObject_o *v18; // x20
  float AutoRotationSpeed; // s0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  CylinderCore_c *v21; // x0
  float *p_BASE_ROT_X; // x8
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  bool v24; // w8
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4213192 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, that);
    sub_B0D8A4(&CylinderCore_TypeInfo, v5);
    sub_B0D8A4(&Method_TransitionCalculator_Vector3__IsFinished__, v6);
    this = (CylinderCore_StateMain_o *)sub_B0D8A4(&Method_TransitionCalculator_Vector3__Update__, v7);
    byte_4213192 = 1;
  }
  if ( !that )
    goto LABEL_39;
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    v4->fields.mInertialSpd = 0.0;
    p_fields = (float *)&v4->fields;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__isDrag(0LL) )
    {
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4211BDC )
      {
        sub_B0D8A4(&CTouch_TypeInfo, v12);
        byte_4211BDC = 1;
      }
      v13 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v13 = CTouch_TypeInfo;
      }
      x = v13->static_fields->mScrPosDelta.fields.x;
      if ( !byte_4211BDD )
      {
        sub_B0D8A4(&CTouch_TypeInfo, v12);
        v13 = CTouch_TypeInfo;
        byte_4211BDD = 1;
      }
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = CTouch_TypeInfo;
      }
      v15 = v13->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v15) )
        v15 = x;
      *p_fields = v15 * -0.2;
    }
  }
  else
  {
    mInertialSpd = v4->fields.mInertialSpd;
    p_fields = (float *)&v4->fields;
    if ( !UnityEngine_Mathf__Approximately(mInertialSpd, 0.0, 0LL) )
    {
      v10 = *p_fields;
      v11 = v10 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      *p_fields = v11;
      if ( fabsf(v11) < 0.004 )
        *p_fields = 0.0;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v17 = *p_fields;
  v18 = gameObject;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0LL);
  GameObjectExtensions__AddLocalEulerAngleY(v18, v17 + AutoRotationSpeed, 0LL);
  mEarthRoot = that->fields.mEarthRoot;
  v21 = CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    v21 = CylinderCore_TypeInfo;
  }
  p_BASE_ROT_X = &v21->static_fields->BASE_ROT_X;
  v26.fields.y = 0.0;
  v26.fields.x = *p_BASE_ROT_X;
  v26.fields.z = p_BASE_ROT_X[1];
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v26, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator
    && !TransitionCalculator_Vector3___IsFinished(
          focusInOutPositionCalculator,
          (const MethodInfo_2686CBC *)Method_TransitionCalculator_Vector3__IsFinished__) )
  {
    this = (CylinderCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
    if ( this )
    {
      v25 = that->fields.mEarthRoot;
      v27 = TransitionCalculator_Vector3___Update(
              (TransitionCalculator_Vector3__o *)this,
              (const MethodInfo_2686C04 *)Method_TransitionCalculator_Vector3__Update__);
      GameObjectExtensions__SetLocalPosition(v25, v27, 0LL);
      v24 = 1;
      goto LABEL_38;
    }
LABEL_39:
    sub_B0D97C(this);
  }
  GameObjectExtensions__SetLocalPosition(that->fields.mEarthRoot, that->fields.mFocusTgtPos, 0LL);
  v24 = 0;
LABEL_38:
  that->fields.mIsFocusMoving = v24;
}


void __fastcall CylinderCore_StateNone___ctor(CylinderCore_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateNone__begin(
        CylinderCore_StateNone_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateNone__end(
        CylinderCore_StateNone_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateNone__update(
        CylinderCore_StateNone_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateZoomIn___ctor(CylinderCore_StateZoomIn_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateZoomIn__GoNext(CylinderCore_StateZoomIn_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CylinderCore_o *mCore; // x0
  struct CylinderCore_o *v5; // x8

  if ( (byte_4213195 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method);
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, v3);
    byte_4213195 = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, 0LL), (v5 = this->fields.mCore) == 0LL)
    || (mCore = (CylinderCore_o *)v5->fields.mTerminalMap) == 0LL
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0LL)) == 0LL )
  {
    sub_B0D97C(mCore);
  }
  HutongGames_PlayMaker_Fsm__Event_14644288(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore_StateZoomIn__begin(
        CylinderCore_StateZoomIn_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
  UnityEngine_Component_o *transform; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Component_o **v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct CylinderCore_o *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  float IntpTime_AutoResume; // s0
  struct CylinderCore_o *mCore; // x8
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  const MethodInfo *v40; // x1
  TerminalPramsManager_c *v41; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x8
  __int64 v51; // x9
  __int64 v52; // x8
  __int64 v53; // d0
  float v54; // s9
  float v55; // s1
  __int64 v56; // x1
  __int64 v57; // x2
  float v58; // s3
  EasingObject_o *v59; // x21
  float mSpdTime; // s8
  System_Action_o *v61; // x22
  __int64 v62; // x1
  __int64 v63; // x2
  System_Action_o *v64; // x23
  __int64 v65; // x1
  TerminalPramsManager_c *v66; // x0
  CommonUI_o *Instance; // x20
  __int64 v68; // x1
  __int64 v69; // x2
  System_Action_o *v70; // x21
  float v71; // [xsp+0h] [xbp-50h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4213193 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&CylinderCore_TypeInfo, v5);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&SeManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&Method_CylinderCore_StateZoomIn_GoNext__, v10);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v11);
    sub_B0D8A4(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, v12);
    sub_B0D8A4(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, v13);
    sub_B0D8A4(&CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, v14);
    byte_4213193 = 1;
  }
  v15 = sub_B0D974(CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, that, method);
  CylinderCore_StateZoomIn___c__DisplayClass3_0___ctor((CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_65;
  *(_QWORD *)(v15 + 48) = that;
  v23 = (UnityEngine_Component_o **)(v15 + 48);
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 48), (System_Int32_array **)that, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v15 + 88) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 88), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  v30 = *(struct CylinderCore_o **)(v15 + 48);
  this->fields.mCore = v30;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0LL);
  mCore = this->fields.mCore;
  this->fields.mSpdTime = IntpTime_AutoResume;
  if ( !mCore )
    goto LABEL_65;
  mFocusEarthPoint = (UnityEngine_Object_o *)mCore->fields.mFocusEarthPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mFocusEarthPoint, 0LL, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210867 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v40);
      byte_4210867 = 1;
    }
    v41 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v41 = TerminalPramsManager_TypeInfo;
    }
    if ( v41->static_fields->_IsAutoResume_k__BackingField )
    {
      CylinderCore_StateZoomIn__GoNext(this, v40);
      return;
    }
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(23, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v70 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v68, v69);
    System_Action___ctor(v70, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 2, 0.4, v70, 0LL);
      return;
    }
LABEL_65:
    sub_B0D97C(transform);
  }
  transform = *v23;
  if ( !*v23 )
    goto LABEL_65;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v15 + 16) = Component_UIWidget;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), Component_UIWidget, v44, v45, v46, v47, v48, v49);
  v50 = *(_QWORD *)(v15 + 48);
  if ( !v50 )
    goto LABEL_65;
  transform = *(UnityEngine_Component_o **)(v50 + 24);
  if ( !transform )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_65;
  *(UnityEngine_Vector3_o *)(v15 + 24) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  }
  v51 = *(_QWORD *)&transform[7].fields.m_CachedPtr;
  v52 = *(_QWORD *)(v15 + 48);
  v53 = *(_QWORD *)(v51 + 36);
  *(_DWORD *)(v15 + 36) = *(_DWORD *)(v51 + 32);
  *(_QWORD *)(v15 + 40) = v53;
  if ( !v52 )
    goto LABEL_65;
  transform = *(UnityEngine_Component_o **)(v52 + 72);
  v71 = *(float *)&v53;
  if ( !transform )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_65;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = *(UnityEngine_Component_o **)(v15 + 48);
  *(float *)(v15 + 40) = v71 - localPosition.fields.y;
  if ( !transform )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)CylinderCore__get_mFocusCylinderPoint((CylinderCore_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_65;
  if ( !*v23 )
    goto LABEL_65;
  v54 = *((float *)&transform[4].monitor + 1);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*v23, 0LL);
  if ( !transform )
    goto LABEL_65;
  *(UnityEngine_Vector3_o *)(&v55 - 1) = UnityEngine_Transform__get_localEulerAngles(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  *(float *)(v15 + 56) = v55;
  *(float *)(v15 + 60) = v54 + 90.0;
  if ( vabds_f32(v55, v54) > 180.0 )
    *(float *)(v15 + 56) = v55 + -360.0;
  if ( !*v23 )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)(*v23)[1].klass;
  if ( !transform )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_65;
  *(UnityEngine_Vector3_o *)(v15 + 64) = UnityEngine_Transform__get_localEulerAngles(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  v58 = *(float *)(v15 + 64);
  *(UnityEngine_Vector3_o *)(v15 + 76) = zero;
  if ( v58 > 180.0 )
  {
    v58 = v58 + -360.0;
    *(float *)(v15 + 64) = v58;
  }
  if ( *(float *)(v15 + 72) > 180.0 )
    *(float *)(v15 + 64) = v58 + -360.0;
  v59 = *(EasingObject_o **)(v15 + 16);
  mSpdTime = this->fields.mSpdTime;
  v61 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v56, v57);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v15,
    Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__,
    0LL);
  v64 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v62, v63);
  System_Action___ctor(
    v64,
    (Il2CppObject *)v15,
    Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__,
    0LL);
  if ( !v59 )
    goto LABEL_65;
  EasingObject__Play(v59, mSpdTime, v61, v64, 0.0, 0, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210867 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v65);
    byte_4210867 = 1;
  }
  v66 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v66 = TerminalPramsManager_TypeInfo;
  }
  if ( !v66->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(23, 0LL);
    this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  }
}


void __fastcall CylinderCore_StateZoomIn__end(
        CylinderCore_StateZoomIn_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateZoomIn__update(
        CylinderCore_StateZoomIn_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  float v6; // s8
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_4213194 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_CylinderCore_StateZoomIn_GoNext__, v5);
    byte_4213194 = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v6 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v6 <= 0.4 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_B0D97C(v11);
      CommonUI__maskFadeout(Instance, 2, v6, v10, 0LL);
      this->fields.mStartTime = 0.0;
    }
  }
}


void __fastcall CylinderCore_StateZoomIn__updateFadeTime(CylinderCore_StateZoomIn_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateZoomIn___c__DisplayClass3_0___ctor(
        CylinderCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateZoomIn___c__DisplayClass3_0___begin_b__0(
        CylinderCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  float mStartTime; // s8
  CylinderCore_StateZoomIn___c__DisplayClass3_0_o *v4; // x19
  float v5; // s9
  float v6; // s10
  float v7; // s0
  struct CylinderCore_o *that; // x8
  float v9; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  float startRotY; // s9
  float endRotY; // s10
  UnityEngine_GameObject_o *v13; // x20
  float v14; // s0
  float v15; // s0
  struct CylinderCore_o *v16; // x8
  UnityEngine_GameObject_o *mEarthRoot; // x20
  float x; // s9
  float y; // s10
  float z; // s11
  float v21; // s12
  float v22; // s13
  float v23; // s14
  float v24; // s6
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s3.4,4:s4.4,8:s5.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_8;
  mStartTime = eo->fields.mStartTime;
  v4 = this;
  v5 = Easing__Func_32660412(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mStartTime, 3, 0LL);
  v6 = Easing__Func_32660412(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mStartTime, 15, 0LL);
  v7 = Easing__Func_32660412(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mStartTime, 1, 0LL);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_8;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_8;
  v9 = v7;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_8;
  v25.fields.x = v5;
  v25.fields.y = v6;
  v25.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0LL);
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v4->fields.that;
  if ( !this )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  startRotY = v4->fields.startRotY;
  endRotY = v4->fields.endRotY;
  v13 = gameObject;
  v14 = UnityEngine_Mathf__Clamp01(mStartTime, 0LL);
  v15 = Easing__Func_32660412(startRotY, endRotY, v14, 6, 0LL);
  GameObjectExtensions__SetLocalEulerAngleY(v13, v15, 0LL);
  v16 = v4->fields.that;
  if ( !v16 )
LABEL_8:
    sub_B0D97C(this);
  mEarthRoot = v16->fields.mEarthRoot;
  x = v4->fields.startRot.fields.x;
  y = v4->fields.startRot.fields.y;
  z = v4->fields.startRot.fields.z;
  v21 = v4->fields.endRot.fields.x;
  v22 = v4->fields.endRot.fields.y;
  v23 = v4->fields.endRot.fields.z;
  v24 = UnityEngine_Mathf__Clamp01(mStartTime * 1.5, 0LL);
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  v28.fields.x = v21;
  v28.fields.y = v22;
  v28.fields.z = v23;
  v27 = Easing__Func(v26, v28, v24, 3, 0LL);
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v27, 0LL);
}


void __fastcall CylinderCore_StateZoomIn___c__DisplayClass3_0___begin_b__1(
        CylinderCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  CylinderCore_StateZoomIn___c__DisplayClass3_0_o *v2; // x19
  struct CylinderCore_o *that; // x8
  struct CylinderCore_o *v4; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0

  v2 = this;
  if ( (byte_4211F6A & 1) == 0 )
  {
    this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211F6A = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_22;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v2->fields.endPos, 0LL);
  v4 = v2->fields.that;
  if ( !v4 )
    goto LABEL_22;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v4->fields.mEarthRoot;
  if ( !this )
    goto LABEL_22;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_22;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v2->fields.endRot, 0LL);
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v2->fields.that;
  if ( !this )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalEulerAngleY(gameObject, v2->fields.endRotY, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210867 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    byte_4210867 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( v7->static_fields->_IsAutoResume_k__BackingField )
  {
    this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v2->fields.__4__this;
    if ( this )
    {
      CylinderCore_StateZoomIn__GoNext((CylinderCore_StateZoomIn_o *)this, 0LL);
      return;
    }
LABEL_22:
    sub_B0D97C(this);
  }
}


void __fastcall CylinderCore_StateZoomOut___ctor(CylinderCore_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateZoomOut__GoNext(CylinderCore_StateZoomOut_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CylinderCore_o *mCore; // x0
  struct CylinderCore_o *v5; // x8

  if ( (byte_4213197 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method);
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, v3);
    byte_4213197 = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, 0LL), (v5 = this->fields.mCore) == 0LL)
    || (mCore = (CylinderCore_o *)v5->fields.mTerminalMap) == 0LL
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0LL)) == 0LL )
  {
    sub_B0D97C(mCore);
  }
  HutongGames_PlayMaker_Fsm__Event_14644288(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/,
    0LL);
}


void __fastcall CylinderCore_StateZoomOut__begin(
        CylinderCore_StateZoomOut_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  void *transform; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  CylinderCore_o **v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct CylinderCore_o *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  float IntpTime_AutoResume; // s0
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct TerminalSceneComponent_o *v40; // x8
  TerminalSceneComponent_o *v41; // x22
  float v42; // s8
  struct CylinderCore_StateZoomOut___c_StaticFields *static_fields; // x8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v45; // x24
  struct CylinderCore_StateZoomOut___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  const MethodInfo *v54; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x9
  __int64 v64; // x8
  __int64 v65; // d0
  __int64 v66; // x8
  CylinderCore_c *v67; // x0
  struct CylinderCore_StaticFields *v68; // x10
  _DWORD *p_x; // x8
  int *p_y; // x9
  int *p_z; // x10
  struct CylinderCore_StaticFields *v72; // x10
  int v73; // w9
  int v74; // w10
  CylinderCore_o *v75; // x8
  UnityEngine_GameObject_o *v76; // x20
  __int64 v77; // x1
  __int64 v78; // x2
  CylinderCore_c *v79; // x0
  unsigned int *v80; // x8
  EasingObject_o *v81; // x20
  unsigned int v82; // w9
  System_Action_o *v83; // x21
  __int64 v84; // x1
  __int64 v85; // x2
  System_Action_o *v86; // x22
  float v87; // [xsp+0h] [xbp-50h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4213196 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&CylinderCore_TypeInfo, v5);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v8);
    sub_B0D8A4(&Method_CylinderCore_StateZoomOut___c__begin_b__1_0__, v9);
    sub_B0D8A4(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, v10);
    sub_B0D8A4(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, v11);
    sub_B0D8A4(&CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, v12);
    sub_B0D8A4(&CylinderCore_StateZoomOut___c_TypeInfo, v13);
    byte_4213196 = 1;
  }
  v14 = sub_B0D974(CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, that, method);
  CylinderCore_StateZoomOut___c__DisplayClass1_0___ctor((CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_52;
  *(_QWORD *)(v14 + 48) = that;
  v22 = (CylinderCore_o **)(v14 + 48);
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 48), (System_Int32_array **)that, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v14 + 80) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 80), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  v29 = *(struct CylinderCore_o **)(v14 + 48);
  this->fields.mCore = v29;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0LL);
  if ( !*v22 )
    goto LABEL_52;
  mTerminalScene = (*v22)->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_52;
  mTerminalScene->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
  if ( !*v22 )
    goto LABEL_52;
  v40 = (*v22)->fields.mTerminalScene;
  if ( !v40 )
    goto LABEL_52;
  v40->fields._IsPassCylinderCore_k__BackingField = 1;
  if ( !*v22 )
    goto LABEL_52;
  v41 = (*v22)->fields.mTerminalScene;
  v42 = IntpTime_AutoResume;
  transform = CylinderCore_StateZoomOut___c_TypeInfo;
  if ( (BYTE3(CylinderCore_StateZoomOut___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CylinderCore_StateZoomOut___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_StateZoomOut___c_TypeInfo);
    transform = CylinderCore_StateZoomOut___c_TypeInfo;
  }
  static_fields = (struct CylinderCore_StateZoomOut___c_StaticFields *)*((_QWORD *)transform + 23);
  _9__1_0 = static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (*((_BYTE *)transform + 307) & 4) != 0 && !*((_DWORD *)transform + 56) )
    {
      j_il2cpp_runtime_class_init_0(transform);
      static_fields = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v36, v37);
    System_Action___ctor(_9__1_0, v45, Method_CylinderCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    v46 = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
    v46->__9__1_0 = _9__1_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v46->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  if ( !v41 )
    goto LABEL_52;
  TerminalSceneComponent__Fadein_WorldDisp_17434276(v41, 0.4, _9__1_0, 0LL);
  if ( !*v22 )
    goto LABEL_52;
  mFocusEarthPoint = (UnityEngine_Object_o *)(*v22)->fields.mFocusEarthPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mFocusEarthPoint, 0LL, 0LL) )
  {
    CylinderCore_StateZoomOut__GoNext(this, v54);
    return;
  }
  transform = *v22;
  if ( !*v22 )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 16) = Component_UIWidget;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), Component_UIWidget, v57, v58, v59, v60, v61, v62);
  transform = CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    transform = CylinderCore_TypeInfo;
  }
  v63 = *((_QWORD *)transform + 23);
  v64 = *(_QWORD *)(v14 + 48);
  v65 = *(_QWORD *)(v63 + 36);
  *(_DWORD *)(v14 + 24) = *(_DWORD *)(v63 + 32);
  *(_QWORD *)(v14 + 28) = v65;
  if ( !v64 )
    goto LABEL_52;
  transform = *(void **)(v64 + 72);
  v87 = *(float *)&v65;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  v66 = *(_QWORD *)(v14 + 48);
  *(float *)(v14 + 28) = v87 - localPosition.fields.y;
  if ( !v66 )
    goto LABEL_52;
  v67 = CylinderCore_TypeInfo;
  if ( *(_BYTE *)(v66 + 136) )
  {
    if ( (WORD1(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CylinderCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
      v67 = CylinderCore_TypeInfo;
    }
    v68 = v67->static_fields;
    p_x = (_DWORD *)&v68->FOCUS_IN_POS.fields.x;
    p_y = (int *)&v68->FOCUS_IN_POS.fields.y;
    p_z = (int *)&v68->FOCUS_IN_POS.fields.z;
  }
  else
  {
    if ( (WORD1(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CylinderCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
      v67 = CylinderCore_TypeInfo;
    }
    v72 = v67->static_fields;
    p_x = (_DWORD *)&v72->FOCUS_OUT_POS.fields.x;
    p_y = (int *)&v72->FOCUS_OUT_POS.fields.y;
    p_z = (int *)&v72->FOCUS_OUT_POS.fields.z;
  }
  v73 = *p_y;
  v74 = *p_z;
  transform = *(void **)(v14 + 48);
  *(_DWORD *)(v14 + 36) = *p_x;
  *(_DWORD *)(v14 + 40) = v73;
  *(_DWORD *)(v14 + 44) = v74;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  v75 = *v22;
  if ( !*v22 )
    goto LABEL_52;
  v76 = (UnityEngine_GameObject_o *)transform;
  transform = CylinderCore__get_mFocusCylinderPoint(v75, 0LL);
  if ( !transform )
    goto LABEL_52;
  GameObjectExtensions__SetLocalEulerAngleY(v76, *((float *)transform + 27) + 90.0, 0LL);
  *(UnityEngine_Vector3_o *)(v14 + 68) = UnityEngine_Vector3__get_zero(0LL);
  v79 = CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    v79 = CylinderCore_TypeInfo;
  }
  v80 = (unsigned int *)v79->static_fields;
  v81 = *(EasingObject_o **)(v14 + 16);
  v82 = *v80;
  LODWORD(v80) = v80[1];
  *(_QWORD *)(v14 + 56) = v82;
  *(_DWORD *)(v14 + 64) = (_DWORD)v80;
  v83 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v77, v78);
  System_Action___ctor(
    v83,
    (Il2CppObject *)v14,
    Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__,
    0LL);
  v86 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v84, v85);
  System_Action___ctor(
    v86,
    (Il2CppObject *)v14,
    Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__,
    0LL);
  if ( !v81 )
LABEL_52:
    sub_B0D97C(transform);
  EasingObject__Play(v81, v42, v83, v86, 0.0, 0, 0LL);
}


void __fastcall CylinderCore_StateZoomOut__end(
        CylinderCore_StateZoomOut_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateZoomOut__update(
        CylinderCore_StateZoomOut_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateZoomOut___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct CylinderCore_StateZoomOut___c_StaticFields *static_fields; // x0

  if ( (byte_4211F6B & 1) == 0 )
  {
    sub_B0D8A4(&CylinderCore_StateZoomOut___c_TypeInfo, v1);
    byte_4211F6B = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(CylinderCore_StateZoomOut___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CylinderCore_StateZoomOut___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall CylinderCore_StateZoomOut___c___ctor(CylinderCore_StateZoomOut___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateZoomOut___c___begin_b__1_0(
        CylinderCore_StateZoomOut___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateZoomOut___c__DisplayClass1_0___ctor(
        CylinderCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateZoomOut___c__DisplayClass1_0___begin_b__1(
        CylinderCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  float mStartTime; // s8
  CylinderCore_StateZoomOut___c__DisplayClass1_0_o *v4; // x19
  float v5; // s9
  float v6; // s10
  float v7; // s0
  struct CylinderCore_o *that; // x8
  float v9; // s11
  struct CylinderCore_o *v10; // x8
  UnityEngine_GameObject_o *mEarthRoot; // x20
  float x; // s9
  float y; // s10
  float z; // s11
  float v15; // s12
  float v16; // s13
  float v17; // s14
  float v18; // s6
  UnityEngine_GameObject_o *gameObject; // x19
  float v20; // s0
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s3.4,4:s4.4,8:s5.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_8;
  mStartTime = eo->fields.mStartTime;
  v4 = this;
  v5 = Easing__Func_32660412(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mStartTime, 3, 0LL);
  v6 = Easing__Func_32660412(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mStartTime, 15, 0LL);
  v7 = Easing__Func_32660412(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mStartTime, 2, 0LL);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_8;
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_8;
  v9 = v7;
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_8;
  v21.fields.x = v5;
  v21.fields.y = v6;
  v21.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v21, 0LL);
  v10 = v4->fields.that;
  if ( !v10 )
    goto LABEL_8;
  mEarthRoot = v10->fields.mEarthRoot;
  x = v4->fields.endRot.fields.x;
  y = v4->fields.endRot.fields.y;
  z = v4->fields.endRot.fields.z;
  v15 = v4->fields.startRot.fields.x;
  v16 = v4->fields.startRot.fields.y;
  v17 = v4->fields.startRot.fields.z;
  v18 = UnityEngine_Mathf__Clamp01((float)(1.0 - mStartTime) * 1.5, 0LL);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  v24.fields.x = v15;
  v24.fields.y = v16;
  v24.fields.z = v17;
  v23 = Easing__Func(v22, v24, v18, 3, 0LL);
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v23, 0LL);
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v4->fields.that;
  if ( !this )
LABEL_8:
    sub_B0D97C(this);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20 = Easing__Func_32660412(0.0, 1.0, mStartTime, 5, 0LL);
  GameObjectExtensions__AddLocalEulerAngleY(gameObject, v20 * -0.4, 0LL);
}


void __fastcall CylinderCore_StateZoomOut___c__DisplayClass1_0___begin_b__2(
        CylinderCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct CylinderCore_o *that; // x8
  CylinderCore_StateZoomOut___c__DisplayClass1_0_o *v3; // x19
  struct CylinderCore_o *v4; // x8

  that = this->fields.that;
  if ( !that )
    goto LABEL_9;
  v3 = this;
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)that->fields.mEarthRoot;
  if ( !this
    || (this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0LL)) == 0LL
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v3->fields.endPos, 0LL),
        (v4 = v3->fields.that) == 0LL)
    || (this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v4->fields.mEarthRoot) == 0LL
    || (this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0LL)) == 0LL
    || (UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v3->fields.endRot, 0LL),
        (this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v3->fields.__4__this) == 0LL) )
  {
LABEL_9:
    sub_B0D97C(this);
  }
  CylinderCore_StateZoomOut__GoNext((CylinderCore_StateZoomOut_o *)this, 0LL);
}