void __fastcall EarthCore___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EarthCore_StaticFields *static_fields; // x9
  struct EarthCore_StaticFields *v3; // x8

  if ( (byte_41894A8 & 1) == 0 )
  {
    sub_B2C35C(&EarthCore_TypeInfo, v1);
    byte_41894A8 = 1;
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
  EarthCore_StateMain_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41894A7 & 1) == 0 )
  {
    sub_B2C35C(&EarthCore_StateMain_TypeInfo, method);
    byte_41894A7 = 1;
  }
  v3 = (EarthCore_StateMain_o *)sub_B2C42C(EarthCore_StateMain_TypeInfo);
  EarthCore_StateMain___ctor(v3, 0LL);
  this->fields.mStateMain = v3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mStateMain,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseCore___ctor((BaseCore_o *)this, 0LL);
}


void __fastcall EarthCore__Awake(EarthCore_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CStateManager_EarthCore__o *mFSM; // x8
  struct CStateManager_EarthCore__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct CStateManager_EarthCore__o *v18; // x21
  EarthCore_StateNone_o *v19; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *transform; // x0
  __int64 v21; // x1
  struct CStateManager_EarthCore__o *v22; // x21
  EarthCore_StateZoomIn_o *v23; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v24; // x20
  EarthCore_StateZoomOut_o *v25; // x21
  const MethodInfo *v26; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  struct UnityEngine_MeshRenderer_o *Component_srcLineSprite; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  EarthCore_c *klass; // x8
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_41894A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_EarthCore___ctor__, method);
    sub_B2C35C(&Method_CStateManager_EarthCore__add__, v3);
    sub_B2C35C(&CStateManager_EarthCore__TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v5);
    sub_B2C35C(&EarthCore_StateNone_TypeInfo, v6);
    sub_B2C35C(&EarthCore_StateZoomIn_TypeInfo, v7);
    sub_B2C35C(&EarthCore_StateZoomOut_TypeInfo, v8);
    byte_41894A2 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 0;
  if ( !mFSM )
  {
    v11 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_EarthCore__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v11,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2A08354 *)Method_CStateManager_EarthCore___ctor__);
    this->fields.mFSM = (struct CStateManager_EarthCore__o *)v11;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    v18 = this->fields.mFSM;
    v19 = (EarthCore_StateNone_o *)sub_B2C42C(EarthCore_StateNone_TypeInfo);
    EarthCore_StateNone___ctor(v19, 0LL);
    if ( !v18 )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v18,
      0,
      (IState_T__o *)v19,
      (const MethodInfo_2A08420 *)Method_CStateManager_EarthCore__add__);
    transform = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      transform,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_2A08420 *)Method_CStateManager_EarthCore__add__);
    v22 = this->fields.mFSM;
    v23 = (EarthCore_StateZoomIn_o *)sub_B2C42C(EarthCore_StateZoomIn_TypeInfo);
    EarthCore_StateZoomIn___ctor(v23, 0LL);
    if ( !v22
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)v22,
            2,
            (IState_T__o *)v23,
            (const MethodInfo_2A08420 *)Method_CStateManager_EarthCore__add__),
          v24 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v25 = (EarthCore_StateZoomOut_o *)sub_B2C42C(EarthCore_StateZoomOut_TypeInfo),
          EarthCore_StateZoomOut___ctor(v25, 0LL),
          !v24) )
    {
LABEL_13:
      sub_B2C434(transform, v21);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v24,
      3,
      (IState_T__o *)v25,
      (const MethodInfo_2A08420 *)Method_CStateManager_EarthCore__add__);
    EarthCore__SetState(this, 0, v26);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_31328080(gameObject, 350.0, 0LL);
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
                                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  this->fields.mMeshRenderer = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mMeshRenderer,
    (System_Int32_array **)Component_srcLineSprite,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
  TransitionCalculator_Vector3__o *v43; // x0
  struct TransitionCalculator_Vector3__o *v44; // x22
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  unsigned int LocalScale; // s0
  float mFocusTgtScl; // s9
  float v53; // s10
  TransitionCalculator_float__o *v54; // x20
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_41894A1 & 1) == 0 )
  {
    sub_B2C35C(&EarthCore_TypeInfo, isFocusIn);
    sub_B2C35C(&Method_TransitionCalculator_Vector3___ctor__, v7);
    sub_B2C35C(&Method_TransitionCalculator_float___ctor__, v8);
    sub_B2C35C(&TransitionCalculator_Vector3__TypeInfo, v9);
    sub_B2C35C(&TransitionCalculator_float__TypeInfo, v10);
    byte_41894A1 = 1;
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
    v55.fields.z = v19;
    v55.fields.y = v17;
    v55.fields.x = v18;
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, v55, 0LL);
    GameObjectExtensions__SetLocalScale_31328080(this->fields.mEarthRoot, this->fields.mFocusTgtScl, 0LL);
    this->fields.focusInOutPositionCalculator = 0LL;
    sub_B2C2F8(
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
    v43 = (TransitionCalculator_Vector3__o *)sub_B2C42C(TransitionCalculator_Vector3__TypeInfo);
    v57.fields.x = v40;
    v57.fields.y = v41;
    v57.fields.z = v42;
    v58.fields.x = x;
    v58.fields.y = y;
    v58.fields.z = z;
    v44 = v43;
    TransitionCalculator_Vector3____ctor(
      v43,
      v57,
      v58,
      v34,
      (System_Func_T__T__float__T__o *)v35,
      (const MethodInfo_2648AFC *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v44;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.focusInOutPositionCalculator,
      (System_Int32_array **)v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    LocalScale = (unsigned int)GameObjectExtensions__GetLocalScale(this->fields.mEarthRoot, 0LL);
    mFocusTgtScl = this->fields.mFocusTgtScl;
    v53 = *(float *)&LocalScale;
    v54 = (TransitionCalculator_float__o *)sub_B2C42C(TransitionCalculator_float__TypeInfo);
    TransitionCalculator_float____ctor(
      v54,
      v53,
      mFocusTgtScl,
      v34,
      (System_Func_T__T__float__T__o *)v36,
      (const MethodInfo_2648838 *)Method_TransitionCalculator_float___ctor__);
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    this->fields.focusInOutScaleCalculator = v54;
    v33 = (System_Int32_array **)v54;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)p_focusInOutScaleCalculator, v33, v26, v27, v28, v29, v30, v31);
}


int32_t __fastcall EarthCore__GetState(EarthCore_o *this, const MethodInfo *method)
{
  EarthCore_o *v2; // x19
  struct CStateManager_EarthCore__o *mFSM; // x8

  v2 = this;
  if ( (byte_41894A5 & 1) == 0 )
  {
    this = (EarthCore_o *)sub_B2C35C(&Method_CStateManager_EarthCore__getState__, method);
    byte_41894A5 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall EarthCore__OnPress(EarthCore_o *this, const MethodInfo *method)
{
  struct EarthCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_B2C434(this, method);
  mStateMain->fields._InertialSpdOld_k__BackingField = mStateMain->fields.mInertialSpd;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B2C434(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore__SetState(EarthCore_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_EarthCore__o *mFSM; // x0

  if ( (byte_41894A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_EarthCore__setState__, *(_QWORD *)&state);
    byte_41894A6 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_EarthCore__setState__);
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
  __int64 v13; // x1
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v16; // w20
  _BOOL8 v17; // x0
  __int64 v18; // x1
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v21; // x23
  int32_t warId; // w21
  _BOOL4 IsEvent; // w0
  __int64 mCoreType; // x27
  System_Single_array_array *PrioredCoordinates; // x0
  int max_length; // w8
  System_Single_array *v27; // x8
  float v28; // s8
  float v29; // s9
  bool IsWarOpen; // w22
  UnityEngine_Object_o *EarthPoint; // x23
  _BOOL8 v32; // x0
  __int64 v33; // x1
  float v34; // s8
  float v35; // s9
  float v36; // s14
  float v37; // s10
  float v38; // s8
  float v39; // s0
  Il2CppObject *EarthPoint_object; // x0
  __int64 v41; // x1
  UnityEngine_GameObject_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x0
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41894A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_BaseCore_CreateEarthPoint_EarthPoint___, warInfoList);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_8369/*"LAST_WAR_ID"*/, v12);
    byte_41894A4 = 1;
  }
  memset(&v46, 0, sizeof(v46));
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
        mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8369/*"LAST_WAR_ID"*/, 0LL),
        !warInfoList) )
  {
    sub_B2C434(mEarthRoot, v13);
  }
  v16 = (int)mEarthRoot;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v17 )
      break;
    current = (MapControl_WarInfo_o *)v46.fields.current;
    if ( !v46.fields.current )
      sub_B2C434(v17, v18);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v46.fields.current, 0LL);
    v21 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0LL) && !WarEntity__IsDisplayEarthPointWithoutMap(v21, 0LL) )
        goto LABEL_19;
      IsEvent = WarEntity__IsEvent(v21, 0LL);
      if ( warId <= v16 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v21, 0LL);
        if ( !PrioredCoordinates )
          goto LABEL_19;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_19;
        if ( (unsigned int)mCoreType >= max_length )
        {
          v44 = sub_B2C460(PrioredCoordinates);
          sub_B2C400(v44, 0LL);
        }
        v27 = PrioredCoordinates->m_Items[mCoreType];
        if ( v27 && (int)v27->max_length >= 2 )
        {
          v28 = v27->m_Items[1];
          v29 = v27->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = (UnityEngine_Object_o *)BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v32 = UnityEngine_Object__op_Equality(EarthPoint, 0LL, 0LL);
          if ( v32 )
          {
            v34 = v28 * 0.017453;
            v35 = (float)(v29 + 9.5) * 0.017453;
            v36 = cosf(v34) * 0.5;
            v37 = cosf(v35);
            v38 = sinf(v34);
            v39 = sinf(v35);
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  v37 * v36,
                                  v38 * 0.5,
                                  v36 * v39,
                                  (const MethodInfo_1725564 *)Method_BaseCore_CreateEarthPoint_EarthPoint___);
            if ( !EarthPoint_object )
              sub_B2C434(0LL, v41);
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
          }
          else
          {
            if ( !EarthPoint )
              sub_B2C434(v32, v33);
            v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EarthPoint, 0LL);
            if ( !v42 )
              sub_B2C434(0LL, v43);
            UnityEngine_GameObject__SetActive(v42, IsWarOpen, 0LL);
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
    &v46,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall EarthCore__Update(EarthCore_o *this, const MethodInfo *method)
{
  struct CStateManager_EarthCore__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_41894A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_EarthCore__update__, method);
    byte_41894A3 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_EarthCore__update__);
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
  if ( (byte_4186508 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, that);
    sub_B2C35C(&Method_TransitionCalculator_float__IsFinished__, v5);
    sub_B2C35C(&Method_TransitionCalculator_Vector3__IsFinished__, v6);
    sub_B2C35C(&Method_TransitionCalculator_float__Update__, v7);
    this = (EarthCore_StateMain_o *)sub_B2C35C(&Method_TransitionCalculator_Vector3__Update__, v8);
    byte_4186508 = 1;
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
      if ( !byte_4186509 )
      {
        sub_B2C35C(&CTouch_TypeInfo, v14);
        byte_4186509 = 1;
      }
      v15 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v15 = CTouch_TypeInfo;
      }
      x = v15->static_fields->mScrPosDelta.fields.x;
      if ( !byte_418650A )
      {
        sub_B2C35C(&CTouch_TypeInfo, v14);
        v15 = CTouch_TypeInfo;
        byte_418650A = 1;
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
  UnityEngine_Transform__Rotate_35436904((UnityEngine_Transform_o *)this, v25, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator )
  {
    if ( !TransitionCalculator_Vector3___IsFinished(
            focusInOutPositionCalculator,
            (const MethodInfo_2648C70 *)Method_TransitionCalculator_Vector3__IsFinished__) )
    {
      focusInOutScaleCalculator = that->fields.focusInOutScaleCalculator;
      if ( focusInOutScaleCalculator )
      {
        if ( !TransitionCalculator_float___IsFinished(
                focusInOutScaleCalculator,
                (const MethodInfo_2648978 *)Method_TransitionCalculator_float__IsFinished__) )
        {
          this = (EarthCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
          if ( this )
          {
            mEarthRoot = that->fields.mEarthRoot;
            v26 = TransitionCalculator_Vector3___Update(
                    (TransitionCalculator_Vector3__o *)this,
                    (const MethodInfo_2648BB8 *)Method_TransitionCalculator_Vector3__Update__);
            GameObjectExtensions__SetLocalPosition(mEarthRoot, v26, 0LL);
            this = (EarthCore_StateMain_o *)that->fields.focusInOutScaleCalculator;
            if ( this )
            {
              v23 = that->fields.mEarthRoot;
              v24 = TransitionCalculator_float___Update(
                      (TransitionCalculator_float__o *)this,
                      (const MethodInfo_26488C4 *)Method_TransitionCalculator_float__Update__);
              GameObjectExtensions__SetLocalScale_31328080(v23, v24, 0LL);
              v21 = 1;
              goto LABEL_36;
            }
          }
LABEL_40:
          sub_B2C434(this, that);
        }
      }
    }
  }
  GameObjectExtensions__SetLocalPosition(that->fields.mEarthRoot, that->fields.mFocusTgtPos, 0LL);
  GameObjectExtensions__SetLocalScale_31328080(that->fields.mEarthRoot, that->fields.mFocusTgtScl, 0LL);
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

  if ( (byte_4184A9F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method);
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, v3);
    byte_4184A9F = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, 0LL), (v5 = this->fields.mThat) == 0LL)
    || (mThat = (EarthCore_o *)v5->fields.mTerminalMap) == 0LL
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0LL)) == 0LL )
  {
    sub_B2C434(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_14638752(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/,
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
  const MethodInfo *v16; // x1
  UnityEngine_Component_o **v17; // x21
  struct EarthCore_o *v18; // x1
  UnityEngine_Object_o *klass; // x22
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
  System_Action_o *v40; // x22
  System_Action_o *v41; // x23
  __int64 v42; // x1
  TerminalPramsManager_c *v43; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v45; // x21
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4184A9D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&SeManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&Method_EarthCore_StateZoomIn_GoNext__, v9);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    sub_B2C35C(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, v11);
    sub_B2C35C(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, v12);
    sub_B2C35C(&EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, v13);
    byte_4184A9D = 1;
  }
  v14 = sub_B2C42C(EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
  EarthCore_StateZoomIn___c__DisplayClass3_0___ctor((EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_54;
  *(_QWORD *)(v14 + 24) = that;
  v17 = (UnityEngine_Component_o **)(v14 + 24);
  sub_B2C2F8(v14 + 24, that);
  *(_QWORD *)(v14 + 144) = this;
  sub_B2C2F8(v14 + 144, this);
  v18 = *(struct EarthCore_o **)(v14 + 24);
  this->fields.mThat = v18;
  sub_B2C2F8(&this->fields, v18);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*v17 )
    goto LABEL_54;
  klass = (UnityEngine_Object_o *)(*v17)[3].klass;
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
    if ( !byte_4183C8F )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v16);
      byte_4183C8F = 1;
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
      EarthCore_StateZoomIn__GoNext(this, v16);
      return;
    }
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(22, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v45 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 2, 0.4, v45, 0LL);
      return;
    }
LABEL_54:
    sub_B2C434(transform, v16);
  }
  transform = *v17;
  if ( !*v17 )
    goto LABEL_54;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 16) = Component_UIWidget;
  sub_B2C2F8(v14 + 16, Component_UIWidget);
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
  v40 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)v14, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, 0LL);
  v41 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)v14, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, 0LL);
  if ( !v33 )
    goto LABEL_54;
  EasingObject__Play(v33, mSpdTime, v40, v41, 0.0, 1, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C8F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v42);
    byte_4183C8F = 1;
  }
  v43 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v43 = TerminalPramsManager_TypeInfo;
  }
  if ( !v43->static_fields->_IsAutoResume_k__BackingField )
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
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4184A9E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_EarthCore_StateZoomIn_GoNext__, v5);
    byte_4184A9E = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v6 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v6 <= 0.4 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_B2C434(v9, v10);
      CommonUI__maskFadeout(Instance, 2, v6, v8, 0LL);
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
    sub_B2C434(this, method);
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
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4185596 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4185596 = 1;
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
  if ( !byte_4183C8F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183C8F = 1;
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
    that = (UnityEngine_Component_o *)this->fields.__4__this;
    if ( that )
    {
      EarthCore_StateZoomIn__GoNext((EarthCore_StateZoomIn_o *)that, 0LL);
      return;
    }
LABEL_27:
    sub_B2C434(that, method);
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

  if ( (byte_4184AA1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method);
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, v3);
    byte_4184AA1 = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, 0LL), (v5 = this->fields.mThat) == 0LL)
    || (mThat = (EarthCore_o *)v5->fields.mTerminalMap) == 0LL
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0LL)) == 0LL )
  {
    sub_B2C434(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_14638752(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/,
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
  const MethodInfo *v16; // x1
  __int64 v17; // x21
  struct EarthCore_o *v18; // x1
  float IntpTime_AutoResume; // s0
  __int64 v20; // x8
  __int64 v21; // x8
  TerminalSceneComponent_o *v22; // x22
  float v23; // s8
  struct EarthCore_StateZoomOut___c_StaticFields *static_fields; // x8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v26; // x24
  struct EarthCore_StateZoomOut___c_StaticFields *v27; // x0
  UnityEngine_Object_o *v28; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  __int64 v31; // x8
  __int64 v32; // x8
  __int64 v33; // x8
  int *v34; // x8
  int *v35; // x9
  int *v36; // x10
  int *v37; // x10
  int v38; // w9
  int v39; // w11
  int v40; // w10
  __int64 v41; // x8
  UnityEngine_GameObject_o *v42; // x0
  __int64 v43; // x8
  float v44; // s0
  EasingObject_o *v45; // x20
  System_Action_o *v46; // x21
  System_Action_o *v47; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4184AA0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&EarthCore_TypeInfo, v5);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    sub_B2C35C(&Method_EarthCore_StateZoomOut___c__begin_b__1_0__, v9);
    sub_B2C35C(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, v10);
    sub_B2C35C(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, v11);
    sub_B2C35C(&EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, v12);
    sub_B2C35C(&EarthCore_StateZoomOut___c_TypeInfo, v13);
    byte_4184AA0 = 1;
  }
  v14 = sub_B2C42C(EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
  EarthCore_StateZoomOut___c__DisplayClass1_0___ctor((EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_52;
  *(_QWORD *)(v14 + 24) = that;
  v17 = v14 + 24;
  sub_B2C2F8(v14 + 24, that);
  *(_QWORD *)(v14 + 144) = this;
  sub_B2C2F8(v14 + 144, this);
  v18 = *(struct EarthCore_o **)(v14 + 24);
  this->fields.mThat = v18;
  sub_B2C2F8(&this->fields, v18);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*(_QWORD *)v17 )
    goto LABEL_52;
  v20 = *(_QWORD *)(*(_QWORD *)v17 + 48LL);
  if ( !v20 )
    goto LABEL_52;
  *(_BYTE *)(v20 + 392) = 0;
  if ( !*(_QWORD *)v17 )
    goto LABEL_52;
  v21 = *(_QWORD *)(*(_QWORD *)v17 + 48LL);
  if ( !v21 )
    goto LABEL_52;
  *(_BYTE *)(v21 + 394) = 1;
  if ( !*(_QWORD *)v17 )
    goto LABEL_52;
  v22 = *(TerminalSceneComponent_o **)(*(_QWORD *)v17 + 48LL);
  v23 = IntpTime_AutoResume;
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
    v26 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__1_0, v26, Method_EarthCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    v27 = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
    v27->__9__1_0 = _9__1_0;
    sub_B2C2F8(&v27->__9__1_0, _9__1_0);
  }
  if ( !v22 )
    goto LABEL_52;
  TerminalSceneComponent__Fadein_WorldDisp_18823972(v22, 0.4, _9__1_0, 0LL);
  if ( !*(_QWORD *)v17 )
    goto LABEL_52;
  v28 = *(UnityEngine_Object_o **)(*(_QWORD *)v17 + 72LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v28, 0LL, 0LL) )
  {
    EarthCore_StateZoomOut__GoNext(this, v16);
    return;
  }
  transform = *(void **)v17;
  if ( !*(_QWORD *)v17 )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 16) = Component_UIWidget;
  sub_B2C2F8(v14 + 16, Component_UIWidget);
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
  v31 = *(_QWORD *)(v14 + 24);
  *(UnityEngine_Quaternion_o *)(v14 + 48) = rotation;
  if ( !v31 )
    goto LABEL_52;
  *(_OWORD *)(v14 + 32) = *(_OWORD *)(v31 + 104);
  transform = *(void **)(v31 + 24);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  v51 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v32 = *(_QWORD *)(v14 + 24);
  *(UnityEngine_Quaternion_o *)(v14 + 80) = v51;
  if ( !v32 )
    goto LABEL_52;
  *(_OWORD *)(v14 + 64) = *(_OWORD *)(v32 + 88);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v32 + 24), 0LL);
  v33 = *(_QWORD *)(v14 + 24);
  *(UnityEngine_Vector3_o *)(v14 + 108) = LocalPosition;
  if ( !v33 )
    goto LABEL_52;
  transform = EarthCore_TypeInfo;
  if ( *(_BYTE *)(v33 + 136) )
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      transform = EarthCore_TypeInfo;
    }
    v34 = (int *)*((_QWORD *)transform + 23);
    v35 = v34 + 1;
    v36 = v34 + 2;
  }
  else
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      transform = EarthCore_TypeInfo;
    }
    v37 = (int *)*((_QWORD *)transform + 23);
    v34 = v37 + 3;
    v35 = v37 + 4;
    v36 = v37 + 5;
  }
  v38 = *v35;
  v39 = *v34;
  v40 = *v36;
  v41 = *(_QWORD *)(v14 + 24);
  *(_DWORD *)(v14 + 96) = v39;
  *(_DWORD *)(v14 + 100) = v38;
  *(_DWORD *)(v14 + 104) = v40;
  if ( !v41 )
    goto LABEL_52;
  transform = *(void **)(v41 + 24);
  if ( !transform )
    goto LABEL_52;
  v42 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v42, 0LL);
  v43 = *(_QWORD *)(v14 + 24);
  *(UnityEngine_Vector3_o *)(v14 + 132) = LocalScale;
  if ( !v43 )
    goto LABEL_52;
  v44 = 0.95;
  v45 = *(EasingObject_o **)(v14 + 16);
  if ( *(_BYTE *)(v43 + 136) )
    v44 = 1.0;
  *(float *)(v14 + 120) = v44;
  *(float *)(v14 + 124) = v44;
  *(float *)(v14 + 128) = v44;
  v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)v14, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, 0LL);
  v47 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v47, (Il2CppObject *)v14, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, 0LL);
  if ( !v45 )
LABEL_52:
    sub_B2C434(transform, v16);
  EasingObject__Play_33149296(v45, 1.0, 0.0, v23, v46, v47, 0.0, 3, 0LL);
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
  Il2CppObject *v2; // x19
  struct EarthCore_StateZoomOut___c_StaticFields *static_fields; // x0

  if ( (byte_4185597 & 1) == 0 )
  {
    sub_B2C35C(&EarthCore_StateZoomOut___c_TypeInfo, v1);
    byte_4185597 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EarthCore_StateZoomOut___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EarthCore_StateZoomOut___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, method);
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
    sub_B2C434(that, method);
  }
  EarthCore_StateZoomOut__GoNext((EarthCore_StateZoomOut_o *)that, 0LL);
}