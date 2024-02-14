void __fastcall EarthCore___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EarthCore_StaticFields *static_fields; // x9
  struct EarthCore_StaticFields *v3; // x8

  if ( (byte_4216305 & 1) == 0 )
  {
    sub_B0D8A4(&EarthCore_TypeInfo, v1);
    byte_4216305 = 1;
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
  EarthCore_StateMain_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4216304 & 1) == 0 )
  {
    sub_B0D8A4(&EarthCore_StateMain_TypeInfo, method);
    byte_4216304 = 1;
  }
  v4 = (EarthCore_StateMain_o *)sub_B0D974(EarthCore_StateMain_TypeInfo, method, v2);
  EarthCore_StateMain___ctor(v4, 0LL);
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


void __fastcall EarthCore__Awake(EarthCore_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct CStateManager_EarthCore__o *mFSM; // x8
  struct CStateManager_EarthCore__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct CStateManager_EarthCore__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  EarthCore_StateNone_o *v22; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *transform; // x0
  struct CStateManager_EarthCore__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  EarthCore_StateZoomIn_o *v27; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  EarthCore_StateZoomOut_o *v31; // x21
  const MethodInfo *v32; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  struct UnityEngine_MeshRenderer_o *Component_srcLineSprite; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  EarthCore_c *klass; // x8
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42162FF & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_EarthCore___ctor__, method);
    sub_B0D8A4(&Method_CStateManager_EarthCore__add__, v4);
    sub_B0D8A4(&CStateManager_EarthCore__TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v6);
    sub_B0D8A4(&EarthCore_StateNone_TypeInfo, v7);
    sub_B0D8A4(&EarthCore_StateZoomIn_TypeInfo, v8);
    sub_B0D8A4(&EarthCore_StateZoomOut_TypeInfo, v9);
    byte_42162FF = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 0;
  if ( !mFSM )
  {
    v12 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(CStateManager_EarthCore__TypeInfo, method, v2);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v12,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2AAF784 *)Method_CStateManager_EarthCore___ctor__);
    this->fields.mFSM = (struct CStateManager_EarthCore__o *)v12;
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
    v22 = (EarthCore_StateNone_o *)sub_B0D974(EarthCore_StateNone_TypeInfo, v20, v21);
    EarthCore_StateNone___ctor(v22, 0LL);
    if ( !v19 )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v19,
      0,
      (IState_T__o *)v22,
      (const MethodInfo_2AAF850 *)Method_CStateManager_EarthCore__add__);
    transform = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      transform,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_2AAF850 *)Method_CStateManager_EarthCore__add__);
    v24 = this->fields.mFSM;
    v27 = (EarthCore_StateZoomIn_o *)sub_B0D974(EarthCore_StateZoomIn_TypeInfo, v25, v26);
    EarthCore_StateZoomIn___ctor(v27, 0LL);
    if ( !v24
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)v24,
            2,
            (IState_T__o *)v27,
            (const MethodInfo_2AAF850 *)Method_CStateManager_EarthCore__add__),
          v28 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v31 = (EarthCore_StateZoomOut_o *)sub_B0D974(EarthCore_StateZoomOut_TypeInfo, v29, v30),
          EarthCore_StateZoomOut___ctor(v31, 0LL),
          !v28) )
    {
LABEL_13:
      sub_B0D97C(transform);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v28,
      3,
      (IState_T__o *)v31,
      (const MethodInfo_2AAF850 *)Method_CStateManager_EarthCore__add__);
    EarthCore__SetState(this, 0, v32);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_31180844(gameObject, 350.0, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(mEarthRoot, one, 0LL);
  transform = (CStateManager_QAASpotStateController_IMapSpot__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
  if ( !transform )
    goto LABEL_13;
  Component_srcLineSprite = (struct UnityEngine_MeshRenderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)transform,
                                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  this->fields.mMeshRenderer = Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mMeshRenderer,
    (System_Int32_array **)Component_srcLineSprite,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  transform = (CStateManager_QAASpotStateController_IMapSpot__o *)this->fields.mEarthRoot;
  if ( !transform )
    goto LABEL_13;
  transform = (CStateManager_QAASpotStateController_IMapSpot__o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)transform,
                                                                    0LL);
  if ( !transform )
    goto LABEL_13;
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)transform, 0LL);
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
  TransitionCalculator_Vector3__o *v45; // x0
  struct TransitionCalculator_Vector3__o *v46; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  unsigned int LocalScale; // s0
  float mFocusTgtScl; // s9
  float v55; // s10
  __int64 v56; // x1
  __int64 v57; // x2
  TransitionCalculator_float__o *v58; // x20
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42162FE & 1) == 0 )
  {
    sub_B0D8A4(&EarthCore_TypeInfo, isFocusIn);
    sub_B0D8A4(&Method_TransitionCalculator_Vector3___ctor__, v7);
    sub_B0D8A4(&Method_TransitionCalculator_float___ctor__, v8);
    sub_B0D8A4(&TransitionCalculator_Vector3__TypeInfo, v9);
    sub_B0D8A4(&TransitionCalculator_float__TypeInfo, v10);
    byte_42162FE = 1;
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
    v59.fields.z = v19;
    v59.fields.y = v17;
    v59.fields.x = v18;
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, v59, 0LL);
    GameObjectExtensions__SetLocalScale_31180844(this->fields.mEarthRoot, this->fields.mFocusTgtScl, 0LL);
    this->fields.focusInOutPositionCalculator = 0LL;
    sub_B0D840(
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
    v45 = (TransitionCalculator_Vector3__o *)sub_B0D974(TransitionCalculator_Vector3__TypeInfo, v43, v44);
    v61.fields.x = v40;
    v61.fields.y = v41;
    v61.fields.z = v42;
    v62.fields.x = x;
    v62.fields.y = y;
    v62.fields.z = z;
    v46 = v45;
    TransitionCalculator_Vector3____ctor(
      v45,
      v61,
      v62,
      v34,
      (System_Func_T__T__float__T__o *)v35,
      (const MethodInfo_2686B48 *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v46;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.focusInOutPositionCalculator,
      (System_Int32_array **)v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    LocalScale = (unsigned int)GameObjectExtensions__GetLocalScale(this->fields.mEarthRoot, 0LL);
    mFocusTgtScl = this->fields.mFocusTgtScl;
    v55 = *(float *)&LocalScale;
    v58 = (TransitionCalculator_float__o *)sub_B0D974(TransitionCalculator_float__TypeInfo, v56, v57);
    TransitionCalculator_float____ctor(
      v58,
      v55,
      mFocusTgtScl,
      v34,
      (System_Func_T__T__float__T__o *)v36,
      (const MethodInfo_2686884 *)Method_TransitionCalculator_float___ctor__);
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    this->fields.focusInOutScaleCalculator = v58;
    v33 = (System_Int32_array **)v58;
  }
  sub_B0D840((BattleServantConfConponent_o *)p_focusInOutScaleCalculator, v33, v26, v27, v28, v29, v30, v31);
}


int32_t __fastcall EarthCore__GetState(EarthCore_o *this, const MethodInfo *method)
{
  EarthCore_o *v2; // x19
  struct CStateManager_EarthCore__o *mFSM; // x8

  v2 = this;
  if ( (byte_4216302 & 1) == 0 )
  {
    this = (EarthCore_o *)sub_B0D8A4(&Method_CStateManager_EarthCore__getState__, method);
    byte_4216302 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall EarthCore__OnPress(EarthCore_o *this, const MethodInfo *method)
{
  struct EarthCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_B0D97C(this);
  mStateMain->fields._InertialSpdOld_k__BackingField = mStateMain->fields.mInertialSpd;
}


void __fastcall EarthCore__SetDisp(EarthCore_o *this, bool is_disp, const MethodInfo *method)
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
void __fastcall EarthCore__SetState(EarthCore_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_EarthCore__o *mFSM; // x0

  if ( (byte_4216303 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_EarthCore__setState__, *(_QWORD *)&state);
    byte_4216303 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2AAF8F4 *)Method_CStateManager_EarthCore__setState__);
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
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v15; // w20
  _BOOL8 v16; // x0
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v19; // x23
  int32_t warId; // w21
  _BOOL4 IsEvent; // w0
  __int64 mCoreType; // x27
  System_Single_array_array *PrioredCoordinates; // x0
  int max_length; // w8
  System_Single_array *v25; // x8
  float v26; // s8
  float v27; // s9
  bool IsWarOpen; // w22
  UnityEngine_Object_o *EarthPoint; // x23
  _BOOL8 v30; // x0
  float v31; // s8
  float v32; // s9
  float v33; // s14
  float v34; // s10
  float v35; // s8
  float v36; // s0
  Il2CppObject *EarthPoint_object; // x0
  UnityEngine_GameObject_o *v38; // x0
  __int64 v39; // x0
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4216301 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BaseCore_CreateEarthPoint_EarthPoint___, warInfoList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_8390/*"LAST_WAR_ID"*/, v12);
    byte_4216301 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot
    || (mEarthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mEarthRoot, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)mEarthRoot, this->fields.mRootQua, 0LL),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        zero = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalEulerAngle(gameObject, zero, 0LL),
        ((void (__fastcall *)(EarthCore_o *, bool, __int64, Il2CppMethodPointer))this->klass->vtable._4_FocusInOut.method)(
          this,
          isFocusIn,
          1LL,
          this->klass->vtable._5_Awake.methodPtr),
        mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8390/*"LAST_WAR_ID"*/, 0LL),
        !warInfoList) )
  {
    sub_B0D97C(mEarthRoot);
  }
  v15 = (int)mEarthRoot;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v41,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v16 )
      break;
    current = (MapControl_WarInfo_o *)v41.fields.current;
    if ( !v41.fields.current )
      sub_B0D97C(v16);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v41.fields.current, 0LL);
    v19 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0LL) && !WarEntity__IsDisplayEarthPointWithoutMap(v19, 0LL) )
        goto LABEL_19;
      IsEvent = WarEntity__IsEvent(v19, 0LL);
      if ( warId <= v15 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v19, 0LL);
        if ( !PrioredCoordinates )
          goto LABEL_19;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_19;
        if ( (unsigned int)mCoreType >= max_length )
        {
          v39 = sub_B0D9A8(PrioredCoordinates);
          sub_B0D948(v39, 0LL);
        }
        v25 = PrioredCoordinates->m_Items[mCoreType];
        if ( v25 && (int)v25->max_length >= 2 )
        {
          v26 = v25->m_Items[1];
          v27 = v25->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = (UnityEngine_Object_o *)BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v30 = UnityEngine_Object__op_Equality(EarthPoint, 0LL, 0LL);
          if ( v30 )
          {
            v31 = v26 * 0.017453;
            v32 = (float)(v27 + 9.5) * 0.017453;
            v33 = cosf(v31) * 0.5;
            v34 = cosf(v32);
            v35 = sinf(v31);
            v36 = sinf(v32);
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  v34 * v33,
                                  v35 * 0.5,
                                  v33 * v36,
                                  (const MethodInfo_1705FF0 *)Method_BaseCore_CreateEarthPoint_EarthPoint___);
            if ( !EarthPoint_object )
              sub_B0D97C(0LL);
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
          }
          else
          {
            if ( !EarthPoint )
              sub_B0D97C(v30);
            v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EarthPoint, 0LL);
            if ( !v38 )
              sub_B0D97C(0LL);
            UnityEngine_GameObject__SetActive(v38, IsWarOpen, 0LL);
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
    &v41,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall EarthCore__Update(EarthCore_o *this, const MethodInfo *method)
{
  struct CStateManager_EarthCore__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4216300 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_EarthCore__update__, method);
    byte_4216300 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2AAF8CC *)Method_CStateManager_EarthCore__update__);
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
  EarthCore_StateMain_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  float AutoRotationSpeed; // s8
  float *p_fields; // x20
  float mInertialSpd; // t1
  float v12; // s9
  float v13; // s0
  __int64 v14; // x1
  CTouch_c *v15; // x0
  float x; // s9
  float v17; // s0
  float v18; // s9
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  TransitionCalculator_float__o *focusInOutScaleCalculator; // x0
  bool v21; // w8
  UnityEngine_GameObject_o *mEarthRoot; // x20
  UnityEngine_GameObject_o *v23; // x20
  float v24; // s0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4211AFB & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, that);
    sub_B0D8A4(&Method_TransitionCalculator_float__IsFinished__, v5);
    sub_B0D8A4(&Method_TransitionCalculator_Vector3__IsFinished__, v6);
    sub_B0D8A4(&Method_TransitionCalculator_float__Update__, v7);
    this = (EarthCore_StateMain_o *)sub_B0D8A4(&Method_TransitionCalculator_Vector3__Update__, v8);
    byte_4211AFB = 1;
  }
  if ( !that )
    goto LABEL_40;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0LL);
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    v4->fields.mInertialSpd = 0.0;
    p_fields = (float *)&v4->fields;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    AutoRotationSpeed = 0.0;
    if ( CTouch__isDrag(0LL) )
    {
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4211BDC )
      {
        sub_B0D8A4(&CTouch_TypeInfo, v14);
        byte_4211BDC = 1;
      }
      v15 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v15 = CTouch_TypeInfo;
      }
      x = v15->static_fields->mScrPosDelta.fields.x;
      if ( !byte_4211BDD )
      {
        sub_B0D8A4(&CTouch_TypeInfo, v14);
        v15 = CTouch_TypeInfo;
        byte_4211BDD = 1;
      }
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = CTouch_TypeInfo;
      }
      v17 = v15->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v17) )
        v17 = x;
      *p_fields = v17 * -0.2;
    }
  }
  else
  {
    mInertialSpd = v4->fields.mInertialSpd;
    p_fields = (float *)&v4->fields;
    if ( !UnityEngine_Mathf__Approximately(mInertialSpd, 0.0, 0LL) )
    {
      v12 = *p_fields;
      v13 = v12 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      *p_fields = v13;
      if ( fabsf(v13) < 0.004 )
        *p_fields = 0.0;
    }
  }
  v18 = *p_fields;
  this = (EarthCore_StateMain_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)that, 0LL);
  if ( !this )
    goto LABEL_40;
  v25.fields.y = AutoRotationSpeed + v18;
  v25.fields.x = 0.0;
  v25.fields.z = 0.0;
  UnityEngine_Transform__Rotate_35057284((UnityEngine_Transform_o *)this, v25, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator )
  {
    if ( !TransitionCalculator_Vector3___IsFinished(
            focusInOutPositionCalculator,
            (const MethodInfo_2686CBC *)Method_TransitionCalculator_Vector3__IsFinished__) )
    {
      focusInOutScaleCalculator = that->fields.focusInOutScaleCalculator;
      if ( focusInOutScaleCalculator )
      {
        if ( !TransitionCalculator_float___IsFinished(
                focusInOutScaleCalculator,
                (const MethodInfo_26869C4 *)Method_TransitionCalculator_float__IsFinished__) )
        {
          this = (EarthCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
          if ( this )
          {
            mEarthRoot = that->fields.mEarthRoot;
            v26 = TransitionCalculator_Vector3___Update(
                    (TransitionCalculator_Vector3__o *)this,
                    (const MethodInfo_2686C04 *)Method_TransitionCalculator_Vector3__Update__);
            GameObjectExtensions__SetLocalPosition(mEarthRoot, v26, 0LL);
            this = (EarthCore_StateMain_o *)that->fields.focusInOutScaleCalculator;
            if ( this )
            {
              v23 = that->fields.mEarthRoot;
              v24 = TransitionCalculator_float___Update(
                      (TransitionCalculator_float__o *)this,
                      (const MethodInfo_2686910 *)Method_TransitionCalculator_float__Update__);
              GameObjectExtensions__SetLocalScale_31180844(v23, v24, 0LL);
              v21 = 1;
              goto LABEL_36;
            }
          }
LABEL_40:
          sub_B0D97C(this);
        }
      }
    }
  }
  GameObjectExtensions__SetLocalPosition(that->fields.mEarthRoot, that->fields.mFocusTgtPos, 0LL);
  GameObjectExtensions__SetLocalScale_31180844(that->fields.mEarthRoot, that->fields.mFocusTgtScl, 0LL);
  v21 = 0;
LABEL_36:
  that->fields.mIsFocusMoving = v21;
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

  if ( (byte_4211AFE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method);
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, v3);
    byte_4211AFE = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, 0LL), (v5 = this->fields.mThat) == 0LL)
    || (mThat = (EarthCore_o *)v5->fields.mTerminalMap) == 0LL
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0LL)) == 0LL )
  {
    sub_B0D97C(mThat);
  }
  HutongGames_PlayMaker_Fsm__Event_14644288(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore_StateZoomIn__begin(
        EarthCore_StateZoomIn_o *this,
        EarthCore_o *that,
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
  __int64 v14; // x20
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Component_o **v16; // x21
  struct EarthCore_o *v17; // x1
  UnityEngine_Object_o *klass; // x22
  const MethodInfo *v19; // x1
  TerminalPramsManager_c *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  int v23; // s0
  int v24; // s1
  int v25; // s2
  int v26; // s3
  __int64 v27; // x8
  __int64 v28; // x9
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x8
  UnityEngine_GameObject_o *v32; // x0
  EasingObject_o *v33; // x21
  float mSpdTime; // s8
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_o *v42; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  System_Action_o *v45; // x23
  __int64 v46; // x1
  TerminalPramsManager_c *v47; // x0
  CommonUI_o *Instance; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  System_Action_o *v51; // x21
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4211AFC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&SeManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&Method_EarthCore_StateZoomIn_GoNext__, v9);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    sub_B0D8A4(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, v11);
    sub_B0D8A4(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, v12);
    sub_B0D8A4(&EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, v13);
    byte_4211AFC = 1;
  }
  v14 = sub_B0D974(EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, that, method);
  EarthCore_StateZoomIn___c__DisplayClass3_0___ctor((EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_54;
  *(_QWORD *)(v14 + 24) = that;
  v16 = (UnityEngine_Component_o **)(v14 + 24);
  sub_B0D840(v14 + 24, that);
  *(_QWORD *)(v14 + 144) = this;
  sub_B0D840(v14 + 144, this);
  v17 = *(struct EarthCore_o **)(v14 + 24);
  this->fields.mThat = v17;
  sub_B0D840(&this->fields, v17);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*v16 )
    goto LABEL_54;
  klass = (UnityEngine_Object_o *)(*v16)[3].klass;
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
    if ( !byte_4210867 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v19);
      byte_4210867 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    if ( v20->static_fields->_IsAutoResume_k__BackingField )
    {
      EarthCore_StateZoomIn__GoNext(this, v19);
      return;
    }
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(22, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v51 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v49, v50);
    System_Action___ctor(v51, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 2, 0.4, v51, 0LL);
      return;
    }
LABEL_54:
    sub_B0D97C(transform);
  }
  transform = *v16;
  if ( !*v16 )
    goto LABEL_54;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 16) = Component_UIWidget;
  sub_B0D840(v14 + 16, Component_UIWidget);
  transform = *(UnityEngine_Component_o **)(v14 + 24);
  if ( !transform )
    goto LABEL_54;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_54;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_54;
  *(UnityEngine_Quaternion_o *)&v23 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v27 = *(_QWORD *)(v14 + 24);
  *(_DWORD *)(v14 + 32) = v23;
  *(_DWORD *)(v14 + 36) = v24;
  *(_DWORD *)(v14 + 40) = v25;
  *(_DWORD *)(v14 + 44) = v26;
  if ( !v27 )
    goto LABEL_54;
  v28 = *(_QWORD *)(v27 + 72);
  if ( !v28 )
    goto LABEL_54;
  *(_OWORD *)(v14 + 48) = *(_OWORD *)(v28 + 88);
  *(_DWORD *)(v27 + 104) = v23;
  *(_DWORD *)(v27 + 108) = v24;
  *(_DWORD *)(v27 + 112) = v25;
  *(_DWORD *)(v27 + 116) = v26;
  v29 = *(_QWORD *)(v14 + 24);
  if ( !v29 )
    goto LABEL_54;
  transform = *(UnityEngine_Component_o **)(v29 + 24);
  if ( !transform )
    goto LABEL_54;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_54;
  *(UnityEngine_Quaternion_o *)(v14 + 64) = UnityEngine_Transform__get_rotation(
                                              (UnityEngine_Transform_o *)transform,
                                              0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  v30 = *(_QWORD *)(v14 + 24);
  *(UnityEngine_Quaternion_o *)(v14 + 80) = identity;
  if ( !v30 )
    goto LABEL_54;
  *(UnityEngine_Vector3_o *)(v14 + 96) = GameObjectExtensions__GetLocalPosition(
                                           (UnityEngine_GameObject_o *)*(_QWORD *)(v30 + 24),
                                           0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  v31 = *(_QWORD *)(v14 + 24);
  *(UnityEngine_Vector3_o *)(v14 + 108) = zero;
  if ( !v31 )
    goto LABEL_54;
  transform = *(UnityEngine_Component_o **)(v31 + 24);
  if ( !transform )
    goto LABEL_54;
  v32 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
  *(UnityEngine_Vector3_o *)(v14 + 120) = GameObjectExtensions__GetLocalScale(v32, 0LL);
  v33 = *(EasingObject_o **)(v14 + 16);
  __asm { FMOV            V0.2S, #6.0 }
  *(_QWORD *)(v14 + 132) = _D0;
  *(_DWORD *)(v14 + 140) = 1086324736;
  mSpdTime = this->fields.mSpdTime;
  v42 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v40, v41);
  System_Action___ctor(v42, (Il2CppObject *)v14, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, 0LL);
  v45 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v43, v44);
  System_Action___ctor(v45, (Il2CppObject *)v14, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, 0LL);
  if ( !v33 )
    goto LABEL_54;
  EasingObject__Play(v33, mSpdTime, v42, v45, 0.0, 1, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210867 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v46);
    byte_4210867 = 1;
  }
  v47 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v47 = TerminalPramsManager_TypeInfo;
  }
  if ( !v47->static_fields->_IsAutoResume_k__BackingField )
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
  System_Action_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_4211AFD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_EarthCore_StateZoomIn_GoNext__, v5);
    byte_4211AFD = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v6 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v6 <= 0.4 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_B0D97C(v11);
      CommonUI__maskFadeout(Instance, 2, v6, v10, 0LL);
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
  EarthCore_StateZoomIn___c__DisplayClass3_0_o *v3; // x19
  double mStartTime; // d8
  double v5; // d0
  double v6; // d9
  float v7; // s9
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  struct EarthCore_o *that; // x8
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  struct EarthCore_o *v19; // x8
  UnityEngine_Transform_o *v20; // x0
  float32x2_t v21; // d10
  float z; // s11
  float32x2_t v23; // d13
  float v24; // s12
  UnityEngine_Transform_o *v25; // x20
  float v26; // s0
  float v27; // s2
  unsigned __int64 v28; // d0 OVERLAPPED
  float v29; // s2
  int v30; // s1
  struct EarthCore_o *v31; // x8
  UnityEngine_Transform_o *v32; // x0
  float32x2_t v33; // d9
  float v34; // s10
  float32x2_t v35; // d12
  float v36; // s11
  UnityEngine_Transform_o *v37; // x19
  float v38; // s0
  float v39; // s0
  float v40; // s2
  unsigned __int64 v41; // d0 OVERLAPPED
  float v42; // s2
  int v43; // s1

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_15;
  v3 = this;
  mStartTime = eo->fields.mStartTime;
  v5 = StepFunc__DecSin(mStartTime, 0LL);
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v3->fields.that;
  if ( !this )
    goto LABEL_15;
  v6 = v5;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
  if ( !this )
    goto LABEL_15;
  v7 = v6;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v9 = UnityEngine_Quaternion__Slerp(v3->fields.qua_from, v3->fields.qua_to, v7, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v9, 0LL);
  that = v3->fields.that;
  if ( !that )
    goto LABEL_15;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_15;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__Slerp(
                                        v3->fields.root_qua_from,
                                        v3->fields.root_qua_to,
                                        v7,
                                        0LL);
  if ( !v14 )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation(v14, *(UnityEngine_Quaternion_o *)&v15, 0LL);
  v19 = v3->fields.that;
  if ( !v19 )
    goto LABEL_15;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v19->fields.mEarthRoot;
  if ( !this )
    goto LABEL_15;
  v20 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v21.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_pos_from.fields.x;
  z = v3->fields.root_pos_from.fields.z;
  v23.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_pos_to.fields.x;
  v24 = v3->fields.root_pos_to.fields.z;
  v25 = v20;
  v26 = UnityEngine_Mathf__Clamp01(v7, 0LL);
  if ( !v25 )
    goto LABEL_15;
  v27 = (float)(v24 - z) * v26;
  v28 = vadd_f32(v21, vmul_n_f32(vsub_f32(v23, v21), v26)).n64_u64[0];
  v29 = z + v27;
  v30 = HIDWORD(v28);
  UnityEngine_Transform__set_localPosition(v25, *(UnityEngine_Vector3_o *)&v28, 0LL);
  v31 = v3->fields.that;
  if ( !v31 )
    goto LABEL_15;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v31->fields.mEarthRoot;
  if ( !this )
    goto LABEL_15;
  v32 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v33.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_from.fields.x;
  v34 = v3->fields.root_scl_from.fields.z;
  v35.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_to.fields.x;
  v36 = v3->fields.root_scl_to.fields.z;
  v37 = v32;
  v38 = StepFunc__Acc5(mStartTime, 0LL);
  v39 = UnityEngine_Mathf__Clamp01(v38, 0LL);
  if ( !v37 )
LABEL_15:
    sub_B0D97C(this);
  v40 = (float)(v36 - v34) * v39;
  v41 = vadd_f32(v33, vmul_n_f32(vsub_f32(v35, v33), v39)).n64_u64[0];
  v42 = v34 + v40;
  v43 = HIDWORD(v41);
  UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v41, 0LL);
}


void __fastcall EarthCore_StateZoomIn___c__DisplayClass3_0___begin_b__1(
        EarthCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *that; // x0
  struct EarthCore_o *v4; // x8
  struct EarthCore_o *v5; // x8
  struct EarthCore_o *v6; // x8
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0

  if ( (byte_4211F6D & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211F6D = 1;
  }
  that = (UnityEngine_Component_o *)this->fields.that;
  if ( !that )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(that, 0LL);
  if ( !that )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_27;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.qua_to, 0LL);
  v4 = this->fields.that;
  if ( !v4 )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)v4->fields.mEarthRoot;
  if ( !that )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_27;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.root_qua_to, 0LL);
  v5 = this->fields.that;
  if ( !v5 )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)v5->fields.mEarthRoot;
  if ( !that )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)that, this->fields.root_pos_to, 0LL);
  v6 = this->fields.that;
  if ( !v6 )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)v6->fields.mEarthRoot;
  if ( !that )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_27;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)that, this->fields.root_scl_to, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210867 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v7);
    byte_4210867 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_IsAutoResume_k__BackingField )
  {
    that = (UnityEngine_Component_o *)this->fields.__4__this;
    if ( that )
    {
      EarthCore_StateZoomIn__GoNext((EarthCore_StateZoomIn_o *)that, 0LL);
      return;
    }
LABEL_27:
    sub_B0D97C(that);
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

  if ( (byte_4211B00 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method);
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, v3);
    byte_4211B00 = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, 0LL), (v5 = this->fields.mThat) == 0LL)
    || (mThat = (EarthCore_o *)v5->fields.mTerminalMap) == 0LL
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0LL)) == 0LL )
  {
    sub_B0D97C(mThat);
  }
  HutongGames_PlayMaker_Fsm__Event_14644288(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/,
    0LL);
}


void __fastcall EarthCore_StateZoomOut__begin(
        EarthCore_StateZoomOut_o *this,
        EarthCore_o *that,
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
  __int64 v16; // x21
  struct EarthCore_o *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  float IntpTime_AutoResume; // s0
  __int64 v21; // x8
  __int64 v22; // x8
  TerminalSceneComponent_o *v23; // x22
  float v24; // s8
  struct EarthCore_StateZoomOut___c_StaticFields *static_fields; // x8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v27; // x24
  struct EarthCore_StateZoomOut___c_StaticFields *v28; // x0
  UnityEngine_Object_o *v29; // x22
  const MethodInfo *v30; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x8
  int *v36; // x8
  int *v37; // x9
  int *v38; // x10
  int *v39; // x10
  int v40; // w9
  int v41; // w11
  int v42; // w10
  __int64 v43; // x8
  UnityEngine_GameObject_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x8
  float v48; // s0
  EasingObject_o *v49; // x20
  System_Action_o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  System_Action_o *v53; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4211AFF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&EarthCore_TypeInfo, v5);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v8);
    sub_B0D8A4(&Method_EarthCore_StateZoomOut___c__begin_b__1_0__, v9);
    sub_B0D8A4(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, v10);
    sub_B0D8A4(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, v11);
    sub_B0D8A4(&EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, v12);
    sub_B0D8A4(&EarthCore_StateZoomOut___c_TypeInfo, v13);
    byte_4211AFF = 1;
  }
  v14 = sub_B0D974(EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, that, method);
  EarthCore_StateZoomOut___c__DisplayClass1_0___ctor((EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_52;
  *(_QWORD *)(v14 + 24) = that;
  v16 = v14 + 24;
  sub_B0D840(v14 + 24, that);
  *(_QWORD *)(v14 + 144) = this;
  sub_B0D840(v14 + 144, this);
  v17 = *(struct EarthCore_o **)(v14 + 24);
  this->fields.mThat = v17;
  sub_B0D840(&this->fields, v17);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*(_QWORD *)v16 )
    goto LABEL_52;
  v21 = *(_QWORD *)(*(_QWORD *)v16 + 48LL);
  if ( !v21 )
    goto LABEL_52;
  *(_BYTE *)(v21 + 392) = 0;
  if ( !*(_QWORD *)v16 )
    goto LABEL_52;
  v22 = *(_QWORD *)(*(_QWORD *)v16 + 48LL);
  if ( !v22 )
    goto LABEL_52;
  *(_BYTE *)(v22 + 394) = 1;
  if ( !*(_QWORD *)v16 )
    goto LABEL_52;
  v23 = *(TerminalSceneComponent_o **)(*(_QWORD *)v16 + 48LL);
  v24 = IntpTime_AutoResume;
  transform = EarthCore_StateZoomOut___c_TypeInfo;
  if ( (BYTE3(EarthCore_StateZoomOut___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EarthCore_StateZoomOut___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EarthCore_StateZoomOut___c_TypeInfo);
    transform = EarthCore_StateZoomOut___c_TypeInfo;
  }
  static_fields = (struct EarthCore_StateZoomOut___c_StaticFields *)*((_QWORD *)transform + 23);
  _9__1_0 = static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (*((_BYTE *)transform + 307) & 4) != 0 && !*((_DWORD *)transform + 56) )
    {
      j_il2cpp_runtime_class_init_0(transform);
      static_fields = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v18, v19);
    System_Action___ctor(_9__1_0, v27, Method_EarthCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    v28 = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
    v28->__9__1_0 = _9__1_0;
    sub_B0D840(&v28->__9__1_0, _9__1_0);
  }
  if ( !v23 )
    goto LABEL_52;
  TerminalSceneComponent__Fadein_WorldDisp_17434276(v23, 0.4, _9__1_0, 0LL);
  if ( !*(_QWORD *)v16 )
    goto LABEL_52;
  v29 = *(UnityEngine_Object_o **)(*(_QWORD *)v16 + 72LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v29, 0LL, 0LL) )
  {
    EarthCore_StateZoomOut__GoNext(this, v30);
    return;
  }
  transform = *(void **)v16;
  if ( !*(_QWORD *)v16 )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 16) = Component_UIWidget;
  sub_B0D840(v14 + 16, Component_UIWidget);
  transform = *(void **)(v14 + 24);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v33 = *(_QWORD *)(v14 + 24);
  *(UnityEngine_Quaternion_o *)(v14 + 48) = rotation;
  if ( !v33 )
    goto LABEL_52;
  *(_OWORD *)(v14 + 32) = *(_OWORD *)(v33 + 104);
  transform = *(void **)(v33 + 24);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  v57 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v34 = *(_QWORD *)(v14 + 24);
  *(UnityEngine_Quaternion_o *)(v14 + 80) = v57;
  if ( !v34 )
    goto LABEL_52;
  *(_OWORD *)(v14 + 64) = *(_OWORD *)(v34 + 88);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v34 + 24), 0LL);
  v35 = *(_QWORD *)(v14 + 24);
  *(UnityEngine_Vector3_o *)(v14 + 108) = LocalPosition;
  if ( !v35 )
    goto LABEL_52;
  transform = EarthCore_TypeInfo;
  if ( *(_BYTE *)(v35 + 136) )
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      transform = EarthCore_TypeInfo;
    }
    v36 = (int *)*((_QWORD *)transform + 23);
    v37 = v36 + 1;
    v38 = v36 + 2;
  }
  else
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      transform = EarthCore_TypeInfo;
    }
    v39 = (int *)*((_QWORD *)transform + 23);
    v36 = v39 + 3;
    v37 = v39 + 4;
    v38 = v39 + 5;
  }
  v40 = *v37;
  v41 = *v36;
  v42 = *v38;
  v43 = *(_QWORD *)(v14 + 24);
  *(_DWORD *)(v14 + 96) = v41;
  *(_DWORD *)(v14 + 100) = v40;
  *(_DWORD *)(v14 + 104) = v42;
  if ( !v43 )
    goto LABEL_52;
  transform = *(void **)(v43 + 24);
  if ( !transform )
    goto LABEL_52;
  v44 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v44, 0LL);
  v47 = *(_QWORD *)(v14 + 24);
  *(UnityEngine_Vector3_o *)(v14 + 132) = LocalScale;
  if ( !v47 )
    goto LABEL_52;
  v48 = 0.95;
  v49 = *(EasingObject_o **)(v14 + 16);
  if ( *(_BYTE *)(v47 + 136) )
    v48 = 1.0;
  *(float *)(v14 + 120) = v48;
  *(float *)(v14 + 124) = v48;
  *(float *)(v14 + 128) = v48;
  v50 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v45, v46);
  System_Action___ctor(v50, (Il2CppObject *)v14, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, 0LL);
  v53 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v51, v52);
  System_Action___ctor(v53, (Il2CppObject *)v14, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, 0LL);
  if ( !v49 )
LABEL_52:
    sub_B0D97C(transform);
  EasingObject__Play_32669972(v49, 1.0, 0.0, v24, v50, v53, 0.0, 3, 0LL);
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
  Il2CppObject *v3; // x19
  struct EarthCore_StateZoomOut___c_StaticFields *static_fields; // x0

  if ( (byte_4211F6E & 1) == 0 )
  {
    sub_B0D8A4(&EarthCore_StateZoomOut___c_TypeInfo, v1);
    byte_4211F6E = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EarthCore_StateZoomOut___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EarthCore_StateZoomOut___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  EarthCore_StateZoomOut___c__DisplayClass1_0_o *v3; // x19
  double mStartTime; // d8
  double v5; // d0
  double v6; // d9
  float v7; // s9
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  struct EarthCore_o *that; // x8
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  struct EarthCore_o *v19; // x8
  UnityEngine_Transform_o *v20; // x0
  float32x2_t v21; // d10
  float z; // s11
  float32x2_t v23; // d13
  float v24; // s12
  UnityEngine_Transform_o *v25; // x20
  float v26; // s0
  float v27; // s2
  unsigned __int64 v28; // d0 OVERLAPPED
  float v29; // s2
  int v30; // s1
  struct EarthCore_o *v31; // x8
  UnityEngine_Transform_o *v32; // x0
  float32x2_t v33; // d9
  float v34; // s10
  float32x2_t v35; // d12
  float v36; // s11
  UnityEngine_Transform_o *v37; // x19
  float v38; // s0
  float v39; // s0
  float v40; // s2
  unsigned __int64 v41; // d0 OVERLAPPED
  float v42; // s2
  int v43; // s1

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_15;
  v3 = this;
  mStartTime = eo->fields.mStartTime;
  v5 = StepFunc__DecSin(mStartTime, 0LL);
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v3->fields.that;
  if ( !this )
    goto LABEL_15;
  v6 = v5;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
  if ( !this )
    goto LABEL_15;
  v7 = v6;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v9 = UnityEngine_Quaternion__Slerp(v3->fields.qua_to, v3->fields.qua_from, v7, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v9, 0LL);
  that = v3->fields.that;
  if ( !that )
    goto LABEL_15;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_15;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__Slerp(
                                        v3->fields.root_qua_to,
                                        v3->fields.root_qua_from,
                                        v7,
                                        0LL);
  if ( !v14 )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation(v14, *(UnityEngine_Quaternion_o *)&v15, 0LL);
  v19 = v3->fields.that;
  if ( !v19 )
    goto LABEL_15;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v19->fields.mEarthRoot;
  if ( !this )
    goto LABEL_15;
  v20 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v21.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_pos_to.fields.x;
  z = v3->fields.root_pos_to.fields.z;
  v23.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_pos_from.fields.x;
  v24 = v3->fields.root_pos_from.fields.z;
  v25 = v20;
  v26 = UnityEngine_Mathf__Clamp01(v7, 0LL);
  if ( !v25 )
    goto LABEL_15;
  v27 = (float)(v24 - z) * v26;
  v28 = vadd_f32(v21, vmul_n_f32(vsub_f32(v23, v21), v26)).n64_u64[0];
  v29 = z + v27;
  v30 = HIDWORD(v28);
  UnityEngine_Transform__set_localPosition(v25, *(UnityEngine_Vector3_o *)&v28, 0LL);
  v31 = v3->fields.that;
  if ( !v31 )
    goto LABEL_15;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v31->fields.mEarthRoot;
  if ( !this )
    goto LABEL_15;
  v32 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v33.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_to.fields.x;
  v34 = v3->fields.root_scl_to.fields.z;
  v35.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_from.fields.x;
  v36 = v3->fields.root_scl_from.fields.z;
  v37 = v32;
  v38 = StepFunc__Acc5(mStartTime, 0LL);
  v39 = UnityEngine_Mathf__Clamp01(v38, 0LL);
  if ( !v37 )
LABEL_15:
    sub_B0D97C(this);
  v40 = (float)(v36 - v34) * v39;
  v41 = vadd_f32(v33, vmul_n_f32(vsub_f32(v35, v33), v39)).n64_u64[0];
  v42 = v34 + v40;
  v43 = HIDWORD(v41);
  UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v41, 0LL);
}


void __fastcall EarthCore_StateZoomOut___c__DisplayClass1_0___begin_b__2(
        EarthCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *that; // x0
  struct EarthCore_o *v4; // x8
  struct EarthCore_o *v5; // x8
  struct EarthCore_o *v6; // x8

  that = (UnityEngine_Component_o *)this->fields.that;
  if ( !that )
    goto LABEL_15;
  that = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(that, 0LL);
  if ( !that )
    goto LABEL_15;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.qua_to, 0LL);
  v4 = this->fields.that;
  if ( !v4 )
    goto LABEL_15;
  that = (UnityEngine_Component_o *)v4->fields.mEarthRoot;
  if ( !that )
    goto LABEL_15;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.root_qua_to, 0LL);
  v5 = this->fields.that;
  if ( !v5 )
    goto LABEL_15;
  that = (UnityEngine_Component_o *)v5->fields.mEarthRoot;
  if ( !that
    || (that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)that, this->fields.root_pos_to, 0LL),
        (v6 = this->fields.that) == 0LL)
    || (that = (UnityEngine_Component_o *)v6->fields.mEarthRoot) == 0LL
    || (that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)that, this->fields.root_scl_to, 0LL),
        (that = (UnityEngine_Component_o *)this->fields.__4__this) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(that);
  }
  EarthCore_StateZoomOut__GoNext((EarthCore_StateZoomOut_o *)that, 0LL);
}