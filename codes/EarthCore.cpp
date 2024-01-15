void __fastcall EarthCore___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EarthCore_StaticFields *static_fields; // x9
  struct EarthCore_StaticFields *v3; // x8

  if ( (byte_40FBD0F & 1) == 0 )
  {
    sub_B16FFC(&EarthCore_TypeInfo, v1);
    byte_40FBD0F = 1;
  }
  static_fields = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x = 0xC32A0000C3848000LL;
  static_fields->FOCUS_IN_POS.fields.z = 0.0;
  v3 = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&v3->FOCUS_OUT_POS.fields.x = 0xC3480000C3848000LL;
  v3->FOCUS_OUT_POS.fields.z = 0.0;
}


void __fastcall EarthCore___ctor(EarthCore_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  EarthCore_StateMain_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FBD0E & 1) == 0 )
  {
    sub_B16FFC(&EarthCore_StateMain_TypeInfo, method);
    byte_40FBD0E = 1;
  }
  v6 = (EarthCore_StateMain_o *)sub_B170CC(EarthCore_StateMain_TypeInfo, method, v2, v3, v4);
  EarthCore_StateMain___ctor(v6, 0LL);
  this->fields.mStateMain = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mStateMain,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  BaseCore___ctor((BaseCore_o *)this, 0LL);
}


void __fastcall EarthCore__Awake(EarthCore_o *this, const MethodInfo *method)
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
  struct CStateManager_EarthCore__o *mFSM; // x8
  CStateManager_QAASpotStateController_IMapSpot__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct CStateManager_EarthCore__o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  EarthCore_StateNone_o *v26; // x22
  struct CStateManager_EarthCore__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  EarthCore_StateZoomIn_o *v32; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  EarthCore_StateZoomOut_o *v38; // x21
  const MethodInfo *v39; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  UnityEngine_GameObject_o *v42; // x0
  struct UnityEngine_MeshRenderer_o *Component_srcLineSprite; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Transform_o *transform; // x0
  EarthCore_c *klass; // x8
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FBD09 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EarthCore___ctor__, method);
    sub_B16FFC(&Method_CStateManager_EarthCore__add__, v6);
    sub_B16FFC(&CStateManager_EarthCore__TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v8);
    sub_B16FFC(&EarthCore_StateNone_TypeInfo, v9);
    sub_B16FFC(&EarthCore_StateZoomIn_TypeInfo, v10);
    sub_B16FFC(&EarthCore_StateZoomOut_TypeInfo, v11);
    byte_40FBD09 = 1;
  }
  p_mFSM = (CStateManager_QAASpotStateController_IMapSpot__o **)&this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 0;
  if ( !mFSM )
  {
    v14 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_EarthCore__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v14,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2907EF0 *)Method_CStateManager_EarthCore___ctor__);
    this->fields.mFSM = (struct CStateManager_EarthCore__o *)v14;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v21 = this->fields.mFSM;
    v26 = (EarthCore_StateNone_o *)sub_B170CC(EarthCore_StateNone_TypeInfo, v22, v23, v24, v25);
    EarthCore_StateNone___ctor(v26, 0LL);
    if ( !v21 )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v21,
      0,
      (IState_T__o *)v26,
      (const MethodInfo_2907FBC *)Method_CStateManager_EarthCore__add__);
    if ( !*p_mFSM )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      *p_mFSM,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_2907FBC *)Method_CStateManager_EarthCore__add__);
    v27 = this->fields.mFSM;
    v32 = (EarthCore_StateZoomIn_o *)sub_B170CC(EarthCore_StateZoomIn_TypeInfo, v28, v29, v30, v31);
    EarthCore_StateZoomIn___ctor(v32, 0LL);
    if ( !v27
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)v27,
            2,
            (IState_T__o *)v32,
            (const MethodInfo_2907FBC *)Method_CStateManager_EarthCore__add__),
          v33 = *p_mFSM,
          v38 = (EarthCore_StateZoomOut_o *)sub_B170CC(EarthCore_StateZoomOut_TypeInfo, v34, v35, v36, v37),
          EarthCore_StateZoomOut___ctor(v38, 0LL),
          !v33) )
    {
LABEL_13:
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v33,
      3,
      (IState_T__o *)v38,
      (const MethodInfo_2907FBC *)Method_CStateManager_EarthCore__add__);
    EarthCore__SetState(this, 0, v39);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_27422124(gameObject, 350.0, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(mEarthRoot, one, 0LL);
  v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v42 )
    goto LABEL_13;
  Component_srcLineSprite = (struct UnityEngine_MeshRenderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v42,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  this->fields.mMeshRenderer = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mMeshRenderer,
    (System_Int32_array **)Component_srcLineSprite,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = this->fields.mEarthRoot;
  if ( !v50 )
    goto LABEL_13;
  transform = UnityEngine_GameObject__get_transform(v50, 0LL);
  if ( !transform )
    goto LABEL_13;
  localRotation = UnityEngine_Transform__get_localRotation(transform, 0LL);
  klass = this->klass;
  this->fields.mRootQua = localRotation;
  ((void (__fastcall *)(EarthCore_o *, __int64, Il2CppMethodPointer))klass->vtable._12_SetDisp.method)(
    this,
    1LL,
    klass->vtable._13_GetState.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore__FocusInOut(EarthCore_o *this, bool isFocusIn, bool isForce, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  EarthCore_c *v11; // x0
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct EarthCore_StaticFields *static_fields; // x10
  float v16; // s0
  float v17; // w9
  float v18; // w8
  float v19; // w10
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct TransitionCalculator_float__o **p_focusInOutScaleCalculator; // x0
  System_Int32_array **v33; // x1
  float v34; // s8
  System_Func_Vector3__Vector3__float__Vector3__o *v35; // x20
  System_Func_float__float__float__float__o *v36; // x21
  float x; // s11
  float y; // s12
  float z; // s13
  float v40; // s9
  float v41; // s10
  float v42; // s14
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  TransitionCalculator_Vector3__o *v47; // x0
  struct TransitionCalculator_Vector3__o *v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  unsigned int LocalScale; // s0
  float mFocusTgtScl; // s9
  float v57; // s10
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  TransitionCalculator_float__o *v62; // x20
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FBD08 & 1) == 0 )
  {
    sub_B16FFC(&EarthCore_TypeInfo, isFocusIn);
    sub_B16FFC(&Method_TransitionCalculator_Vector3___ctor__, v7);
    sub_B16FFC(&Method_TransitionCalculator_float___ctor__, v8);
    sub_B16FFC(&TransitionCalculator_Vector3__TypeInfo, v9);
    sub_B16FFC(&TransitionCalculator_float__TypeInfo, v10);
    byte_40FBD08 = 1;
  }
  this->fields.mIsFocusIn = isFocusIn;
  v11 = EarthCore_TypeInfo;
  if ( isFocusIn )
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      v11 = EarthCore_TypeInfo;
    }
    p_x = &v11->static_fields->FOCUS_IN_POS.fields.x;
    p_y = p_x + 1;
    p_z = p_x + 2;
  }
  else
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      v11 = EarthCore_TypeInfo;
    }
    static_fields = v11->static_fields;
    p_x = &static_fields->FOCUS_OUT_POS.fields.x;
    p_y = &static_fields->FOCUS_OUT_POS.fields.y;
    p_z = &static_fields->FOCUS_OUT_POS.fields.z;
  }
  v16 = 0.95;
  v17 = *p_y;
  v18 = *p_x;
  v19 = *p_z;
  if ( this->fields.mIsFocusIn )
    v16 = 1.0;
  this->fields.mFocusTgtPos.fields.x = v18;
  this->fields.mFocusTgtPos.fields.y = v17;
  this->fields.mFocusTgtPos.fields.z = v19;
  this->fields.mFocusTgtScl = v16;
  if ( isForce )
  {
    v63.fields.z = v19;
    v63.fields.y = v17;
    v63.fields.x = v18;
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, v63, 0LL);
    GameObjectExtensions__SetLocalScale_27422124(this->fields.mEarthRoot, this->fields.mFocusTgtScl, 0LL);
    this->fields.focusInOutPositionCalculator = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.focusInOutPositionCalculator,
      0LL,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    this->fields.focusInOutScaleCalculator = 0LL;
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    v33 = 0LL;
  }
  else
  {
    v34 = ChangedFPSUtil__CovertFrameNumToSecond(10, 0LL);
    v35 = ExtraEasing__AsymptoticSeriesVector3(0.35, 10.0, 0LL);
    v36 = ExtraEasing__AsymptoticSeriesFloat(0.35, 10.0, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0LL);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v40 = LocalPosition.fields.x;
    v41 = LocalPosition.fields.y;
    v42 = LocalPosition.fields.z;
    v47 = (TransitionCalculator_Vector3__o *)sub_B170CC(TransitionCalculator_Vector3__TypeInfo, v43, v44, v45, v46);
    v65.fields.x = v40;
    v65.fields.y = v41;
    v65.fields.z = v42;
    v66.fields.x = x;
    v66.fields.y = y;
    v66.fields.z = z;
    v48 = v47;
    TransitionCalculator_Vector3____ctor(
      v47,
      v65,
      v66,
      v34,
      (System_Func_T__T__float__T__o *)v35,
      (const MethodInfo_25331D8 *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v48;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.focusInOutPositionCalculator,
      (System_Int32_array **)v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    LocalScale = (unsigned int)GameObjectExtensions__GetLocalScale(this->fields.mEarthRoot, 0LL);
    mFocusTgtScl = this->fields.mFocusTgtScl;
    v57 = *(float *)&LocalScale;
    v62 = (TransitionCalculator_float__o *)sub_B170CC(TransitionCalculator_float__TypeInfo, v58, v59, v60, v61);
    TransitionCalculator_float____ctor(
      v62,
      v57,
      mFocusTgtScl,
      v34,
      (System_Func_T__T__float__T__o *)v36,
      (const MethodInfo_2532F14 *)Method_TransitionCalculator_float___ctor__);
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    this->fields.focusInOutScaleCalculator = v62;
    v33 = (System_Int32_array **)v62;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_focusInOutScaleCalculator, v33, v26, v27, v28, v29, v30, v31);
}


int32_t __fastcall EarthCore__GetState(EarthCore_o *this, const MethodInfo *method)
{
  struct CStateManager_EarthCore__o *mFSM; // x8

  if ( (byte_40FBD0C & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EarthCore__getState__, method);
    byte_40FBD0C = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  return mFSM->fields.m_state;
}


EarthCore_StateMain_o *__fastcall EarthCore__GetStateMain(EarthCore_o *this, const MethodInfo *method)
{
  return this->fields.mStateMain;
}


float __fastcall EarthCore__GetStateMainInertialSpdOld(EarthCore_o *this, const MethodInfo *method)
{
  struct EarthCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  if ( !mStateMain )
    sub_B170D4();
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall EarthCore__OnPress(EarthCore_o *this, const MethodInfo *method)
{
  struct EarthCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_B170D4();
  mStateMain->fields._InertialSpdOld_k__BackingField = mStateMain->fields.mInertialSpd;
}


void __fastcall EarthCore__SetDisp(EarthCore_o *this, bool is_disp, const MethodInfo *method)
{
  UnityEngine_Renderer_o *mMeshRenderer; // x0
  bool v5; // w20
  UnityEngine_GameObject_o *mEarthPointRoot; // x0

  mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mMeshRenderer;
  if ( !mMeshRenderer
    || (v5 = is_disp,
        UnityEngine_Renderer__set_enabled(mMeshRenderer, is_disp, 0LL),
        (mEarthPointRoot = this->fields.mEarthPointRoot) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(mEarthPointRoot, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore__SetState(EarthCore_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_EarthCore__o *mFSM; // x0

  if ( (byte_40FBD0D & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EarthCore__setState__, *(_QWORD *)&state);
    byte_40FBD0D = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_EarthCore__setState__);
}


void __fastcall EarthCore__Setup(
        EarthCore_o *this,
        System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList,
        bool isFocusIn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t Value; // w0
  int32_t v17; // w20
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v20; // x23
  int32_t warId; // w21
  _BOOL4 IsEvent; // w0
  __int64 mCoreType; // x27
  System_Single_array_array *PrioredCoordinates; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  int max_length; // w8
  System_Single_array *v28; // x8
  float v29; // s8
  float v30; // s9
  bool IsWarOpen; // w22
  UnityEngine_Component_o *EarthPoint; // x23
  float v33; // s8
  float v34; // s9
  float v35; // s14
  float v36; // s10
  float v37; // s8
  float v38; // s0
  Il2CppObject *EarthPoint_object; // x0
  UnityEngine_GameObject_o *v40; // x0
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBD0B & 1) == 0 )
  {
    sub_B16FFC(&Method_BaseCore_CreateEarthPoint_EarthPoint___, warInfoList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_8340/*"LAST_WAR_ID"*/, v12);
    byte_40FBD0B = 1;
  }
  memset(&v42, 0, sizeof(v42));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot
    || (transform = UnityEngine_GameObject__get_transform(mEarthRoot, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localRotation(transform, this->fields.mRootQua, 0LL),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        zero = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalEulerAngle(gameObject, zero, 0LL),
        ((void (__fastcall *)(EarthCore_o *, bool, __int64, Il2CppMethodPointer))this->klass->vtable._4_FocusInOut.method)(
          this,
          isFocusIn,
          1LL,
          this->klass->vtable._5_Awake.methodPtr),
        Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8340/*"LAST_WAR_ID"*/, 0LL),
        !warInfoList) )
  {
    sub_B170D4();
  }
  v17 = Value;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__) )
  {
    current = (MapControl_WarInfo_o *)v42.fields.current;
    if ( !v42.fields.current )
      sub_B170D4();
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v42.fields.current, 0LL);
    v20 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0LL) && !WarEntity__IsDisplayEarthPointWithoutMap(v20, 0LL) )
        goto LABEL_19;
      IsEvent = WarEntity__IsEvent(v20, 0LL);
      if ( warId <= v17 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v20, 0LL);
        if ( !PrioredCoordinates )
          goto LABEL_19;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_19;
        if ( (unsigned int)mCoreType >= max_length )
        {
          sub_B17100(PrioredCoordinates, v25, v26);
          sub_B170A0();
        }
        v28 = PrioredCoordinates->m_Items[mCoreType];
        if ( v28 && (int)v28->max_length >= 2 )
        {
          v29 = v28->m_Items[1];
          v30 = v28->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = (UnityEngine_Component_o *)BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EarthPoint, 0LL, 0LL) )
          {
            v33 = v29 * 0.017453;
            v34 = (float)(v30 + 9.5) * 0.017453;
            v35 = cosf(v33) * 0.5;
            v36 = cosf(v34);
            v37 = sinf(v33);
            v38 = sinf(v34);
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  v36 * v35,
                                  v37 * 0.5,
                                  v35 * v38,
                                  (const MethodInfo_18B4E80 *)Method_BaseCore_CreateEarthPoint_EarthPoint___);
            if ( !EarthPoint_object )
              sub_B170D4();
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
          }
          else
          {
            if ( !EarthPoint )
              sub_B170D4();
            v40 = UnityEngine_Component__get_gameObject(EarthPoint, 0LL);
            if ( !v40 )
              sub_B170D4();
            UnityEngine_GameObject__SetActive(v40, IsWarOpen, 0LL);
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
    &v42,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall EarthCore__Update(EarthCore_o *this, const MethodInfo *method)
{
  struct CStateManager_EarthCore__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40FBD0A & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EarthCore__update__, method);
    byte_40FBD0A = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_EarthCore__update__);
  if ( this->fields.mIsReqZoomIn && EarthCore__GetState(this, method) == 1 )
  {
    BaseCore__EndSlideServant((BaseCore_o *)this, 0LL);
    this->fields.mIsReqZoomIn = 0;
    EarthCore__SetState(this, 2, v4);
  }
}


void __fastcall EarthCore__mcbfStartMain(EarthCore_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EarthCore__SetState(this, 1, v2);
}


void __fastcall EarthCore__mcbfStartZoomIn(EarthCore_o *this, const MethodInfo *method)
{
  this->fields.mIsReqZoomIn = 1;
}


void __fastcall EarthCore__mcbfStartZoomOut(EarthCore_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EarthCore__SetState(this, 3, v2);
}


void __fastcall EarthCore_StateMain___ctor(EarthCore_StateMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EarthCore_StateMain__begin(EarthCore_StateMain_o *this, EarthCore_o *that, const MethodInfo *method)
{
  this->fields.mInertialSpd = 0.0;
}


void __fastcall EarthCore_StateMain__end(EarthCore_StateMain_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


float __fastcall EarthCore_StateMain__get_InertialSpd(EarthCore_StateMain_o *this, const MethodInfo *method)
{
  return this->fields.mInertialSpd;
}


float __fastcall EarthCore_StateMain__get_InertialSpdOld(EarthCore_StateMain_o *this, const MethodInfo *method)
{
  return this->fields._InertialSpdOld_k__BackingField;
}


void __fastcall EarthCore_StateMain__set_InertialSpdOld(
        EarthCore_StateMain_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._InertialSpdOld_k__BackingField = value;
}


void __fastcall EarthCore_StateMain__update(EarthCore_StateMain_o *this, EarthCore_o *that, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  float AutoRotationSpeed; // s8
  EarthCore_StateMain_Fields *p_fields; // x20
  float mInertialSpd; // t1
  float v12; // s9
  float v13; // s0
  __int64 v14; // x1
  CTouch_c *v15; // x0
  float x; // s9
  float v17; // s0
  float v18; // s9
  UnityEngine_Transform_o *transform; // x0
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  TransitionCalculator_float__o *focusInOutScaleCalculator; // x0
  bool v22; // w8
  TransitionCalculator_Vector3__o *v23; // x0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  TransitionCalculator_float__o *v25; // x0
  UnityEngine_GameObject_o *v26; // x20
  float v27; // s0
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8B77 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, that);
    sub_B16FFC(&Method_TransitionCalculator_float__IsFinished__, v5);
    sub_B16FFC(&Method_TransitionCalculator_Vector3__IsFinished__, v6);
    sub_B16FFC(&Method_TransitionCalculator_float__Update__, v7);
    sub_B16FFC(&Method_TransitionCalculator_Vector3__Update__, v8);
    byte_40F8B77 = 1;
  }
  if ( !that )
    goto LABEL_40;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0LL);
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    this->fields.mInertialSpd = 0.0;
    p_fields = &this->fields;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    AutoRotationSpeed = 0.0;
    if ( CTouch__isDrag(0LL) )
    {
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_40F8BA0 )
      {
        sub_B16FFC(&CTouch_TypeInfo, v14);
        byte_40F8BA0 = 1;
      }
      v15 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v15 = CTouch_TypeInfo;
      }
      x = v15->static_fields->mScrPosDelta.fields.x;
      if ( !byte_40F8BA1 )
      {
        sub_B16FFC(&CTouch_TypeInfo, v14);
        v15 = CTouch_TypeInfo;
        byte_40F8BA1 = 1;
      }
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = CTouch_TypeInfo;
      }
      v17 = v15->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v17) )
        v17 = x;
      p_fields->mInertialSpd = v17 * -0.2;
    }
  }
  else
  {
    mInertialSpd = this->fields.mInertialSpd;
    p_fields = &this->fields;
    if ( !UnityEngine_Mathf__Approximately(mInertialSpd, 0.0, 0LL) )
    {
      v12 = p_fields->mInertialSpd;
      v13 = v12 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      p_fields->mInertialSpd = v13;
      if ( fabsf(v13) < 0.004 )
        p_fields->mInertialSpd = 0.0;
    }
  }
  v18 = p_fields->mInertialSpd;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)that, 0LL);
  if ( !transform )
    goto LABEL_40;
  v28.fields.y = AutoRotationSpeed + v18;
  v28.fields.x = 0.0;
  v28.fields.z = 0.0;
  UnityEngine_Transform__Rotate_34931420(transform, v28, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator )
  {
    if ( !TransitionCalculator_Vector3___IsFinished(
            focusInOutPositionCalculator,
            (const MethodInfo_253334C *)Method_TransitionCalculator_Vector3__IsFinished__) )
    {
      focusInOutScaleCalculator = that->fields.focusInOutScaleCalculator;
      if ( focusInOutScaleCalculator )
      {
        if ( !TransitionCalculator_float___IsFinished(
                focusInOutScaleCalculator,
                (const MethodInfo_2533054 *)Method_TransitionCalculator_float__IsFinished__) )
        {
          v23 = that->fields.focusInOutPositionCalculator;
          if ( v23 )
          {
            mEarthRoot = that->fields.mEarthRoot;
            v29 = TransitionCalculator_Vector3___Update(
                    v23,
                    (const MethodInfo_2533294 *)Method_TransitionCalculator_Vector3__Update__);
            GameObjectExtensions__SetLocalPosition(mEarthRoot, v29, 0LL);
            v25 = that->fields.focusInOutScaleCalculator;
            if ( v25 )
            {
              v26 = that->fields.mEarthRoot;
              v27 = TransitionCalculator_float___Update(
                      v25,
                      (const MethodInfo_2532FA0 *)Method_TransitionCalculator_float__Update__);
              GameObjectExtensions__SetLocalScale_27422124(v26, v27, 0LL);
              v22 = 1;
              goto LABEL_36;
            }
          }
LABEL_40:
          sub_B170D4();
        }
      }
    }
  }
  GameObjectExtensions__SetLocalPosition(that->fields.mEarthRoot, that->fields.mFocusTgtPos, 0LL);
  GameObjectExtensions__SetLocalScale_27422124(that->fields.mEarthRoot, that->fields.mFocusTgtScl, 0LL);
  v22 = 0;
LABEL_36:
  that->fields.mIsFocusMoving = v22;
}


void __fastcall EarthCore_StateNone___ctor(EarthCore_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EarthCore_StateNone__begin(EarthCore_StateNone_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


void __fastcall EarthCore_StateNone__end(EarthCore_StateNone_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


void __fastcall EarthCore_StateNone__update(EarthCore_StateNone_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


void __fastcall EarthCore_StateZoomIn___ctor(EarthCore_StateZoomIn_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EarthCore_StateZoomIn__GoNext(EarthCore_StateZoomIn_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EarthCore_o *mThat; // x0
  struct EarthCore_o *v5; // x8
  UnityEngine_GameObject_o *mTerminalMap; // x0
  PlayMakerFSM_o *Component_srcLineSprite; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0

  if ( (byte_40F8B7A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method);
    sub_B16FFC(&StringLiteral_6864/*"GO_NEXT"*/, v3);
    byte_40F8B7A = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, 0LL), (v5 = this->fields.mThat) == 0LL)
    || (mTerminalMap = v5->fields.mTerminalMap) == 0LL
    || (Component_srcLineSprite = (PlayMakerFSM_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      mTerminalMap,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (Fsm = PlayMakerFSM__get_Fsm(Component_srcLineSprite, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  HutongGames_PlayMaker_Fsm__Event_14544876(Fsm, (System_String_o *)StringLiteral_6864/*"GO_NEXT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore_StateZoomIn__begin(
        EarthCore_StateZoomIn_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
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
  struct EarthCore_o *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Object_o *klass; // x22
  const MethodInfo *v38; // x1
  TerminalPramsManager_c *v39; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Component_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Transform_o *transform; // x0
  int v51; // s0
  int v52; // s1
  int v53; // s2
  int v54; // s3
  __int64 v55; // x8
  __int64 v56; // x9
  __int64 v57; // x8
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_Transform_o *v59; // x0
  __int64 v60; // x8
  __int64 v61; // x8
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  EasingObject_o *v64; // x21
  float mSpdTime; // s8
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  System_Action_o *v75; // x22
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  System_Action_o *v80; // x23
  __int64 v81; // x1
  TerminalPramsManager_c *v82; // x0
  CommonUI_o *Instance; // x20
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  System_Action_o *v88; // x21
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F8B78 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&SeManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&Method_EarthCore_StateZoomIn_GoNext__, v11);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
    sub_B16FFC(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, v13);
    sub_B16FFC(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, v14);
    sub_B16FFC(&EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, v15);
    byte_40F8B78 = 1;
  }
  v16 = sub_B170CC(EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, that, method, v3, v4);
  EarthCore_StateZoomIn___c__DisplayClass3_0___ctor((EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_54;
  *(_QWORD *)(v16 + 24) = that;
  v23 = (UnityEngine_Component_o **)(v16 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)that, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v16 + 144) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 144), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  v30 = *(struct EarthCore_o **)(v16 + 24);
  this->fields.mThat = v30;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*v23 )
    goto LABEL_54;
  klass = (UnityEngine_Object_o *)(*v23)[3].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F606C )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v38);
      byte_40F606C = 1;
    }
    v39 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v39 = TerminalPramsManager_TypeInfo;
    }
    if ( v39->static_fields->_IsAutoResume_k__BackingField )
    {
      EarthCore_StateZoomIn__GoNext(this, v38);
      return;
    }
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(22, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v88 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v84, v85, v86, v87);
    System_Action___ctor(v88, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 2, 0.4, v88, 0LL);
      return;
    }
LABEL_54:
    sub_B170D4();
  }
  if ( !*v23 )
    goto LABEL_54;
  gameObject = UnityEngine_Component__get_gameObject(*v23, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v16 + 16) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), Component_UIWidget, v42, v43, v44, v45, v46, v47);
  v48 = *(UnityEngine_Component_o **)(v16 + 24);
  if ( !v48 )
    goto LABEL_54;
  v49 = UnityEngine_Component__get_gameObject(v48, 0LL);
  if ( !v49 )
    goto LABEL_54;
  transform = UnityEngine_GameObject__get_transform(v49, 0LL);
  if ( !transform )
    goto LABEL_54;
  *(UnityEngine_Quaternion_o *)&v51 = UnityEngine_Transform__get_rotation(transform, 0LL);
  v55 = *(_QWORD *)(v16 + 24);
  *(_DWORD *)(v16 + 32) = v51;
  *(_DWORD *)(v16 + 36) = v52;
  *(_DWORD *)(v16 + 40) = v53;
  *(_DWORD *)(v16 + 44) = v54;
  if ( !v55 )
    goto LABEL_54;
  v56 = *(_QWORD *)(v55 + 72);
  if ( !v56 )
    goto LABEL_54;
  *(_OWORD *)(v16 + 48) = *(_OWORD *)(v56 + 88);
  *(_DWORD *)(v55 + 104) = v51;
  *(_DWORD *)(v55 + 108) = v52;
  *(_DWORD *)(v55 + 112) = v53;
  *(_DWORD *)(v55 + 116) = v54;
  v57 = *(_QWORD *)(v16 + 24);
  if ( !v57 )
    goto LABEL_54;
  v58 = *(UnityEngine_GameObject_o **)(v57 + 24);
  if ( !v58 )
    goto LABEL_54;
  v59 = UnityEngine_GameObject__get_transform(v58, 0LL);
  if ( !v59 )
    goto LABEL_54;
  *(UnityEngine_Quaternion_o *)(v16 + 64) = UnityEngine_Transform__get_rotation(v59, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  v60 = *(_QWORD *)(v16 + 24);
  *(UnityEngine_Quaternion_o *)(v16 + 80) = identity;
  if ( !v60 )
    goto LABEL_54;
  *(UnityEngine_Vector3_o *)(v16 + 96) = GameObjectExtensions__GetLocalPosition(
                                           (UnityEngine_GameObject_o *)*(_QWORD *)(v60 + 24),
                                           0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  v61 = *(_QWORD *)(v16 + 24);
  *(UnityEngine_Vector3_o *)(v16 + 108) = zero;
  if ( !v61 )
    goto LABEL_54;
  v62 = *(UnityEngine_GameObject_o **)(v61 + 24);
  if ( !v62 )
    goto LABEL_54;
  v63 = UnityEngine_GameObject__get_gameObject(v62, 0LL);
  *(UnityEngine_Vector3_o *)(v16 + 120) = GameObjectExtensions__GetLocalScale(v63, 0LL);
  v64 = *(EasingObject_o **)(v16 + 16);
  __asm { FMOV            V0.2S, #6.0 }
  *(_QWORD *)(v16 + 132) = _D0;
  *(_DWORD *)(v16 + 140) = 1086324736;
  mSpdTime = this->fields.mSpdTime;
  v75 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v71, v72, v73, v74);
  System_Action___ctor(v75, (Il2CppObject *)v16, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, 0LL);
  v80 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v76, v77, v78, v79);
  System_Action___ctor(v80, (Il2CppObject *)v16, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, 0LL);
  if ( !v64 )
    goto LABEL_54;
  EasingObject__Play(v64, mSpdTime, v75, v80, 0.0, 1, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F606C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v81);
    byte_40F606C = 1;
  }
  v82 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v82 = TerminalPramsManager_TypeInfo;
  }
  if ( !v82->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(22, 0LL);
    this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  }
}


void __fastcall EarthCore_StateZoomIn__end(EarthCore_StateZoomIn_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


void __fastcall EarthCore_StateZoomIn__update(
        EarthCore_StateZoomIn_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  float v6; // s8
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21

  if ( (byte_40F8B79 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_EarthCore_StateZoomIn_GoNext__, v5);
    byte_40F8B79 = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v6 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v6 <= 0.4 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_B170D4();
      CommonUI__maskFadeout(Instance, 2, v6, v12, 0LL);
      this->fields.mStartTime = 0.0;
    }
  }
}


void __fastcall EarthCore_StateZoomIn___c__DisplayClass3_0___ctor(
        EarthCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore_StateZoomIn___c__DisplayClass3_0___begin_b__0(
        EarthCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  double mStartTime; // d8
  double v5; // d0
  UnityEngine_Component_o *that; // x0
  double v7; // d9
  UnityEngine_GameObject_o *gameObject; // x0
  float v9; // s9
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0
  struct EarthCore_o *v15; // x8
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_Transform_o *v17; // x20
  int v18; // s0
  struct EarthCore_o *v22; // x8
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Transform_o *v24; // x0
  float32x2_t v25; // d10
  float z; // s11
  float32x2_t v27; // d13
  float v28; // s12
  UnityEngine_Transform_o *v29; // x20
  float v30; // s0
  float v31; // s2
  unsigned __int64 v32; // d0 OVERLAPPED
  float v33; // s2
  int v34; // s1
  struct EarthCore_o *v35; // x8
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  float32x2_t v38; // d9
  float v39; // s10
  float32x2_t v40; // d12
  float v41; // s11
  UnityEngine_Transform_o *v42; // x19
  float v43; // s0
  float v44; // s0
  float v45; // s2
  unsigned __int64 v46; // d0 OVERLAPPED
  float v47; // s2
  int v48; // s1

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_15;
  mStartTime = eo->fields.mStartTime;
  v5 = StepFunc__DecSin(mStartTime, 0LL);
  that = (UnityEngine_Component_o *)this->fields.that;
  if ( !that )
    goto LABEL_15;
  v7 = v5;
  gameObject = UnityEngine_Component__get_gameObject(that, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  v9 = v7;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  *(UnityEngine_Quaternion_o *)&v11 = UnityEngine_Quaternion__Slerp(this->fields.qua_from, this->fields.qua_to, v9, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v11, 0LL);
  v15 = this->fields.that;
  if ( !v15 )
    goto LABEL_15;
  mEarthRoot = v15->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_15;
  v17 = UnityEngine_GameObject__get_transform(mEarthRoot, 0LL);
  *(UnityEngine_Quaternion_o *)&v18 = UnityEngine_Quaternion__Slerp(
                                        this->fields.root_qua_from,
                                        this->fields.root_qua_to,
                                        v9,
                                        0LL);
  if ( !v17 )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation(v17, *(UnityEngine_Quaternion_o *)&v18, 0LL);
  v22 = this->fields.that;
  if ( !v22 )
    goto LABEL_15;
  v23 = v22->fields.mEarthRoot;
  if ( !v23 )
    goto LABEL_15;
  v24 = UnityEngine_GameObject__get_transform(v23, 0LL);
  v25.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_pos_from.fields.x;
  z = this->fields.root_pos_from.fields.z;
  v27.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_pos_to.fields.x;
  v28 = this->fields.root_pos_to.fields.z;
  v29 = v24;
  v30 = UnityEngine_Mathf__Clamp01(v9, 0LL);
  if ( !v29 )
    goto LABEL_15;
  v31 = (float)(v28 - z) * v30;
  v32 = vadd_f32(v25, vmul_n_f32(vsub_f32(v27, v25), v30)).n64_u64[0];
  v33 = z + v31;
  v34 = HIDWORD(v32);
  UnityEngine_Transform__set_localPosition(v29, *(UnityEngine_Vector3_o *)&v32, 0LL);
  v35 = this->fields.that;
  if ( !v35 )
    goto LABEL_15;
  v36 = v35->fields.mEarthRoot;
  if ( !v36 )
    goto LABEL_15;
  v37 = UnityEngine_GameObject__get_transform(v36, 0LL);
  v38.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_scl_from.fields.x;
  v39 = this->fields.root_scl_from.fields.z;
  v40.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_scl_to.fields.x;
  v41 = this->fields.root_scl_to.fields.z;
  v42 = v37;
  v43 = StepFunc__Acc5(mStartTime, 0LL);
  v44 = UnityEngine_Mathf__Clamp01(v43, 0LL);
  if ( !v42 )
LABEL_15:
    sub_B170D4();
  v45 = (float)(v41 - v39) * v44;
  v46 = vadd_f32(v38, vmul_n_f32(vsub_f32(v40, v38), v44)).n64_u64[0];
  v47 = v39 + v45;
  v48 = HIDWORD(v46);
  UnityEngine_Transform__set_localScale(v42, *(UnityEngine_Vector3_o *)&v46, 0LL);
}


void __fastcall EarthCore_StateZoomIn___c__DisplayClass3_0___begin_b__1(
        EarthCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *that; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  struct EarthCore_o *v6; // x8
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_Transform_o *v8; // x0
  struct EarthCore_o *v9; // x8
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Transform_o *v11; // x0
  struct EarthCore_o *v12; // x8
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Transform_o *v14; // x0
  __int64 v15; // x1
  TerminalPramsManager_c *v16; // x0
  EarthCore_StateZoomIn_o *_4__this; // x0

  if ( (byte_40F78D0 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F78D0 = 1;
  }
  that = (UnityEngine_Component_o *)this->fields.that;
  if ( !that )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(that, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !transform )
    goto LABEL_27;
  UnityEngine_Transform__set_rotation(transform, this->fields.qua_to, 0LL);
  v6 = this->fields.that;
  if ( !v6 )
    goto LABEL_27;
  mEarthRoot = v6->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_27;
  v8 = UnityEngine_GameObject__get_transform(mEarthRoot, 0LL);
  if ( !v8 )
    goto LABEL_27;
  UnityEngine_Transform__set_rotation(v8, this->fields.root_qua_to, 0LL);
  v9 = this->fields.that;
  if ( !v9 )
    goto LABEL_27;
  v10 = v9->fields.mEarthRoot;
  if ( !v10 )
    goto LABEL_27;
  v11 = UnityEngine_GameObject__get_transform(v10, 0LL);
  if ( !v11 )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(v11, this->fields.root_pos_to, 0LL);
  v12 = this->fields.that;
  if ( !v12 )
    goto LABEL_27;
  v13 = v12->fields.mEarthRoot;
  if ( !v13 )
    goto LABEL_27;
  v14 = UnityEngine_GameObject__get_transform(v13, 0LL);
  if ( !v14 )
    goto LABEL_27;
  UnityEngine_Transform__set_localScale(v14, this->fields.root_scl_to, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F606C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v15);
    byte_40F606C = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  if ( v16->static_fields->_IsAutoResume_k__BackingField )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      EarthCore_StateZoomIn__GoNext(_4__this, 0LL);
      return;
    }
LABEL_27:
    sub_B170D4();
  }
}


void __fastcall EarthCore_StateZoomOut___ctor(EarthCore_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EarthCore_StateZoomOut__GoNext(EarthCore_StateZoomOut_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EarthCore_o *mThat; // x0
  struct EarthCore_o *v5; // x8
  UnityEngine_GameObject_o *mTerminalMap; // x0
  PlayMakerFSM_o *Component_srcLineSprite; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0

  if ( (byte_40F8B7C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method);
    sub_B16FFC(&StringLiteral_6864/*"GO_NEXT"*/, v3);
    byte_40F8B7C = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, 0LL), (v5 = this->fields.mThat) == 0LL)
    || (mTerminalMap = v5->fields.mTerminalMap) == 0LL
    || (Component_srcLineSprite = (PlayMakerFSM_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      mTerminalMap,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (Fsm = PlayMakerFSM__get_Fsm(Component_srcLineSprite, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  HutongGames_PlayMaker_Fsm__Event_14544876(Fsm, (System_String_o *)StringLiteral_6864/*"GO_NEXT"*/, 0LL);
}


void __fastcall EarthCore_StateZoomOut__begin(
        EarthCore_StateZoomOut_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x19
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
  struct EarthCore_o *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  float IntpTime_AutoResume; // s0
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_c *v43; // x8
  TerminalSceneComponent_o *v44; // x22
  float v45; // s8
  EarthCore_StateZoomOut___c_c *v46; // x0
  struct EarthCore_StateZoomOut___c_StaticFields *static_fields; // x8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v49; // x24
  struct EarthCore_StateZoomOut___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  UnityEngine_Object_o *v57; // x22
  const MethodInfo *v58; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  UnityEngine_Component_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v70; // x8
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_Transform_o *v72; // x0
  __int64 v73; // x8
  __int64 v74; // x8
  EarthCore_c *v75; // x0
  int *p_FOCUS_OUT_POS; // x8
  int *p_y; // x9
  int *p_z; // x10
  struct EarthCore_StaticFields *v79; // x10
  int v80; // w9
  int v81; // w11
  int v82; // w10
  __int64 v83; // x8
  UnityEngine_GameObject_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  __int64 v90; // x8
  float v91; // s0
  EasingObject_o *v92; // x20
  System_Action_o *v93; // x21
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  System_Action_o *v98; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F8B7B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&EarthCore_TypeInfo, v7);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    sub_B16FFC(&Method_EarthCore_StateZoomOut___c__begin_b__1_0__, v11);
    sub_B16FFC(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, v12);
    sub_B16FFC(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, v13);
    sub_B16FFC(&EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, v14);
    sub_B16FFC(&EarthCore_StateZoomOut___c_TypeInfo, v15);
    byte_40F8B7B = 1;
  }
  v16 = sub_B170CC(EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  EarthCore_StateZoomOut___c__DisplayClass1_0___ctor((EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_52;
  *(_QWORD *)(v16 + 24) = that;
  v23 = (UnityEngine_Component_o **)(v16 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)that, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v16 + 144) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 144), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  v30 = *(struct EarthCore_o **)(v16 + 24);
  this->fields.mThat = v30;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*v23 )
    goto LABEL_52;
  klass = (*v23)[2].klass;
  if ( !klass )
    goto LABEL_52;
  LOBYTE(klass[1]._1.namespaze) = 0;
  if ( !*v23 )
    goto LABEL_52;
  v43 = (*v23)[2].klass;
  if ( !v43 )
    goto LABEL_52;
  BYTE2(v43[1]._1.namespaze) = 1;
  if ( !*v23 )
    goto LABEL_52;
  v44 = (TerminalSceneComponent_o *)(*v23)[2].klass;
  v45 = IntpTime_AutoResume;
  v46 = EarthCore_StateZoomOut___c_TypeInfo;
  if ( (BYTE3(EarthCore_StateZoomOut___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EarthCore_StateZoomOut___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EarthCore_StateZoomOut___c_TypeInfo);
    v46 = EarthCore_StateZoomOut___c_TypeInfo;
  }
  static_fields = v46->static_fields;
  _9__1_0 = static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      static_fields = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
    System_Action___ctor(_9__1_0, v49, Method_EarthCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    v50 = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
    v50->__9__1_0 = _9__1_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v50->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !v44 )
    goto LABEL_52;
  TerminalSceneComponent__Fadein_WorldDisp_19145700(v44, 0.4, _9__1_0, 0LL);
  if ( !*v23 )
    goto LABEL_52;
  v57 = (UnityEngine_Object_o *)(*v23)[3].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v57, 0LL, 0LL) )
  {
    EarthCore_StateZoomOut__GoNext(this, v58);
    return;
  }
  if ( !*v23 )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject(*v23, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v16 + 16) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), Component_UIWidget, v61, v62, v63, v64, v65, v66);
  v67 = *(UnityEngine_Component_o **)(v16 + 24);
  if ( !v67 )
    goto LABEL_52;
  v68 = UnityEngine_Component__get_gameObject(v67, 0LL);
  if ( !v68 )
    goto LABEL_52;
  transform = UnityEngine_GameObject__get_transform(v68, 0LL);
  if ( !transform )
    goto LABEL_52;
  rotation = UnityEngine_Transform__get_rotation(transform, 0LL);
  v70 = *(_QWORD *)(v16 + 24);
  *(UnityEngine_Quaternion_o *)(v16 + 48) = rotation;
  if ( !v70 )
    goto LABEL_52;
  *(_OWORD *)(v16 + 32) = *(_OWORD *)(v70 + 104);
  v71 = *(UnityEngine_GameObject_o **)(v70 + 24);
  if ( !v71 )
    goto LABEL_52;
  v72 = UnityEngine_GameObject__get_transform(v71, 0LL);
  if ( !v72 )
    goto LABEL_52;
  v102 = UnityEngine_Transform__get_rotation(v72, 0LL);
  v73 = *(_QWORD *)(v16 + 24);
  *(UnityEngine_Quaternion_o *)(v16 + 80) = v102;
  if ( !v73 )
    goto LABEL_52;
  *(_OWORD *)(v16 + 64) = *(_OWORD *)(v73 + 88);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v73 + 24), 0LL);
  v74 = *(_QWORD *)(v16 + 24);
  *(UnityEngine_Vector3_o *)(v16 + 108) = LocalPosition;
  if ( !v74 )
    goto LABEL_52;
  v75 = EarthCore_TypeInfo;
  if ( *(_BYTE *)(v74 + 136) )
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      v75 = EarthCore_TypeInfo;
    }
    p_FOCUS_OUT_POS = (int *)v75->static_fields;
    p_y = p_FOCUS_OUT_POS + 1;
    p_z = p_FOCUS_OUT_POS + 2;
  }
  else
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      v75 = EarthCore_TypeInfo;
    }
    v79 = v75->static_fields;
    p_FOCUS_OUT_POS = (int *)&v79->FOCUS_OUT_POS;
    p_y = (int *)&v79->FOCUS_OUT_POS.fields.y;
    p_z = (int *)&v79->FOCUS_OUT_POS.fields.z;
  }
  v80 = *p_y;
  v81 = *p_FOCUS_OUT_POS;
  v82 = *p_z;
  v83 = *(_QWORD *)(v16 + 24);
  *(_DWORD *)(v16 + 96) = v81;
  *(_DWORD *)(v16 + 100) = v80;
  *(_DWORD *)(v16 + 104) = v82;
  if ( !v83 )
    goto LABEL_52;
  v84 = *(UnityEngine_GameObject_o **)(v83 + 24);
  if ( !v84 )
    goto LABEL_52;
  v85 = UnityEngine_GameObject__get_gameObject(v84, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v85, 0LL);
  v90 = *(_QWORD *)(v16 + 24);
  *(UnityEngine_Vector3_o *)(v16 + 132) = LocalScale;
  if ( !v90 )
    goto LABEL_52;
  v91 = 0.95;
  v92 = *(EasingObject_o **)(v16 + 16);
  if ( *(_BYTE *)(v90 + 136) )
    v91 = 1.0;
  *(float *)(v16 + 120) = v91;
  *(float *)(v16 + 124) = v91;
  *(float *)(v16 + 128) = v91;
  v93 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v86, v87, v88, v89);
  System_Action___ctor(v93, (Il2CppObject *)v16, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, 0LL);
  v98 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v94, v95, v96, v97);
  System_Action___ctor(v98, (Il2CppObject *)v16, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, 0LL);
  if ( !v92 )
LABEL_52:
    sub_B170D4();
  EasingObject__Play_33167332(v92, 1.0, 0.0, v45, v93, v98, 0.0, 3, 0LL);
}


void __fastcall EarthCore_StateZoomOut__end(
        EarthCore_StateZoomOut_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EarthCore_StateZoomOut__update(
        EarthCore_StateZoomOut_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EarthCore_StateZoomOut___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F78D1 & 1) == 0 )
  {
    sub_B16FFC(&EarthCore_StateZoomOut___c_TypeInfo, v1);
    byte_40F78D1 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EarthCore_StateZoomOut___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EarthCore_StateZoomOut___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EarthCore_StateZoomOut___c___ctor(EarthCore_StateZoomOut___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EarthCore_StateZoomOut___c___begin_b__1_0(EarthCore_StateZoomOut___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EarthCore_StateZoomOut___c__DisplayClass1_0___ctor(
        EarthCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore_StateZoomOut___c__DisplayClass1_0___begin_b__1(
        EarthCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  double mStartTime; // d8
  double v5; // d0
  UnityEngine_Component_o *that; // x0
  double v7; // d9
  UnityEngine_GameObject_o *gameObject; // x0
  float v9; // s9
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0
  struct EarthCore_o *v15; // x8
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_Transform_o *v17; // x20
  int v18; // s0
  struct EarthCore_o *v22; // x8
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Transform_o *v24; // x0
  float32x2_t v25; // d10
  float z; // s11
  float32x2_t v27; // d13
  float v28; // s12
  UnityEngine_Transform_o *v29; // x20
  float v30; // s0
  float v31; // s2
  unsigned __int64 v32; // d0 OVERLAPPED
  float v33; // s2
  int v34; // s1
  struct EarthCore_o *v35; // x8
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  float32x2_t v38; // d9
  float v39; // s10
  float32x2_t v40; // d12
  float v41; // s11
  UnityEngine_Transform_o *v42; // x19
  float v43; // s0
  float v44; // s0
  float v45; // s2
  unsigned __int64 v46; // d0 OVERLAPPED
  float v47; // s2
  int v48; // s1

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_15;
  mStartTime = eo->fields.mStartTime;
  v5 = StepFunc__DecSin(mStartTime, 0LL);
  that = (UnityEngine_Component_o *)this->fields.that;
  if ( !that )
    goto LABEL_15;
  v7 = v5;
  gameObject = UnityEngine_Component__get_gameObject(that, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  v9 = v7;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  *(UnityEngine_Quaternion_o *)&v11 = UnityEngine_Quaternion__Slerp(this->fields.qua_to, this->fields.qua_from, v9, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v11, 0LL);
  v15 = this->fields.that;
  if ( !v15 )
    goto LABEL_15;
  mEarthRoot = v15->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_15;
  v17 = UnityEngine_GameObject__get_transform(mEarthRoot, 0LL);
  *(UnityEngine_Quaternion_o *)&v18 = UnityEngine_Quaternion__Slerp(
                                        this->fields.root_qua_to,
                                        this->fields.root_qua_from,
                                        v9,
                                        0LL);
  if ( !v17 )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation(v17, *(UnityEngine_Quaternion_o *)&v18, 0LL);
  v22 = this->fields.that;
  if ( !v22 )
    goto LABEL_15;
  v23 = v22->fields.mEarthRoot;
  if ( !v23 )
    goto LABEL_15;
  v24 = UnityEngine_GameObject__get_transform(v23, 0LL);
  v25.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_pos_to.fields.x;
  z = this->fields.root_pos_to.fields.z;
  v27.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_pos_from.fields.x;
  v28 = this->fields.root_pos_from.fields.z;
  v29 = v24;
  v30 = UnityEngine_Mathf__Clamp01(v9, 0LL);
  if ( !v29 )
    goto LABEL_15;
  v31 = (float)(v28 - z) * v30;
  v32 = vadd_f32(v25, vmul_n_f32(vsub_f32(v27, v25), v30)).n64_u64[0];
  v33 = z + v31;
  v34 = HIDWORD(v32);
  UnityEngine_Transform__set_localPosition(v29, *(UnityEngine_Vector3_o *)&v32, 0LL);
  v35 = this->fields.that;
  if ( !v35 )
    goto LABEL_15;
  v36 = v35->fields.mEarthRoot;
  if ( !v36 )
    goto LABEL_15;
  v37 = UnityEngine_GameObject__get_transform(v36, 0LL);
  v38.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_scl_to.fields.x;
  v39 = this->fields.root_scl_to.fields.z;
  v40.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_scl_from.fields.x;
  v41 = this->fields.root_scl_from.fields.z;
  v42 = v37;
  v43 = StepFunc__Acc5(mStartTime, 0LL);
  v44 = UnityEngine_Mathf__Clamp01(v43, 0LL);
  if ( !v42 )
LABEL_15:
    sub_B170D4();
  v45 = (float)(v41 - v39) * v44;
  v46 = vadd_f32(v38, vmul_n_f32(vsub_f32(v40, v38), v44)).n64_u64[0];
  v47 = v39 + v45;
  v48 = HIDWORD(v46);
  UnityEngine_Transform__set_localScale(v42, *(UnityEngine_Vector3_o *)&v46, 0LL);
}


void __fastcall EarthCore_StateZoomOut___c__DisplayClass1_0___begin_b__2(
        EarthCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *that; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  struct EarthCore_o *v6; // x8
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_Transform_o *v8; // x0
  struct EarthCore_o *v9; // x8
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Transform_o *v11; // x0
  struct EarthCore_o *v12; // x8
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Transform_o *v14; // x0
  EarthCore_StateZoomOut_o *_4__this; // x0

  that = (UnityEngine_Component_o *)this->fields.that;
  if ( !that )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject(that, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation(transform, this->fields.qua_to, 0LL);
  v6 = this->fields.that;
  if ( !v6 )
    goto LABEL_15;
  mEarthRoot = v6->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_15;
  v8 = UnityEngine_GameObject__get_transform(mEarthRoot, 0LL);
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation(v8, this->fields.root_qua_to, 0LL);
  v9 = this->fields.that;
  if ( !v9 )
    goto LABEL_15;
  v10 = v9->fields.mEarthRoot;
  if ( !v10
    || (v11 = UnityEngine_GameObject__get_transform(v10, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localPosition(v11, this->fields.root_pos_to, 0LL), (v12 = this->fields.that) == 0LL)
    || (v13 = v12->fields.mEarthRoot) == 0LL
    || (v14 = UnityEngine_GameObject__get_transform(v13, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localScale(v14, this->fields.root_scl_to, 0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  EarthCore_StateZoomOut__GoNext(_4__this, 0LL);
}