void __fastcall EarthCore___cctor(const MethodInfo *method)
{
  struct EarthCore_StaticFields *static_fields; // x9
  struct EarthCore_StaticFields *v2; // x8

  if ( (byte_4353812 & 1) == 0 )
  {
    sub_B70694(&EarthCore_TypeInfo);
    byte_4353812 = 1;
  }
  static_fields = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x = 0xC32A0000C3848000LL;
  static_fields->FOCUS_IN_POS.fields.z = 0.0;
  v2 = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&v2->FOCUS_OUT_POS.fields.x = 0xC3480000C3848000LL;
  v2->FOCUS_OUT_POS.fields.z = 0.0;
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

  if ( (byte_4353811 & 1) == 0 )
  {
    sub_B70694(&EarthCore_StateMain_TypeInfo);
    byte_4353811 = 1;
  }
  v3 = (EarthCore_StateMain_o *)sub_B70764(EarthCore_StateMain_TypeInfo);
  EarthCore_StateMain___ctor(v3, 0LL);
  this->fields.mStateMain = v3;
  sub_B70630(
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
  struct CStateManager_EarthCore__o *mFSM; // x8
  struct CStateManager_EarthCore__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct CStateManager_EarthCore__o *v12; // x21
  EarthCore_StateNone_o *v13; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *transform; // x0
  __int64 v15; // x1
  struct CStateManager_EarthCore__o *v16; // x21
  EarthCore_StateZoomIn_o *v17; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v18; // x20
  EarthCore_StateZoomOut_o *v19; // x21
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  struct UnityEngine_MeshRenderer_o *Component_srcLineSprite; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  EarthCore_c *klass; // x8
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_435380C & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_EarthCore___ctor__);
    sub_B70694(&Method_CStateManager_EarthCore__add__);
    sub_B70694(&CStateManager_EarthCore__TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_B70694(&EarthCore_StateNone_TypeInfo);
    sub_B70694(&EarthCore_StateZoomIn_TypeInfo);
    sub_B70694(&EarthCore_StateZoomOut_TypeInfo);
    byte_435380C = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 0;
  if ( !mFSM )
  {
    v5 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B70764(CStateManager_EarthCore__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v5,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2C7FFDC *)Method_CStateManager_EarthCore___ctor__);
    this->fields.mFSM = (struct CStateManager_EarthCore__o *)v5;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.mFSM, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
    v12 = this->fields.mFSM;
    v13 = (EarthCore_StateNone_o *)sub_B70764(EarthCore_StateNone_TypeInfo);
    EarthCore_StateNone___ctor(v13, 0LL);
    if ( !v12 )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v12,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_2C800A8 *)Method_CStateManager_EarthCore__add__);
    transform = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      transform,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_2C800A8 *)Method_CStateManager_EarthCore__add__);
    v16 = this->fields.mFSM;
    v17 = (EarthCore_StateZoomIn_o *)sub_B70764(EarthCore_StateZoomIn_TypeInfo);
    EarthCore_StateZoomIn___ctor(v17, 0LL);
    if ( !v16
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)v16,
            2,
            (IState_T__o *)v17,
            (const MethodInfo_2C800A8 *)Method_CStateManager_EarthCore__add__),
          v18 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v19 = (EarthCore_StateZoomOut_o *)sub_B70764(EarthCore_StateZoomOut_TypeInfo),
          EarthCore_StateZoomOut___ctor(v19, 0LL),
          !v18) )
    {
LABEL_13:
      sub_B7076C(transform, v15);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v18,
      3,
      (IState_T__o *)v19,
      (const MethodInfo_2C800A8 *)Method_CStateManager_EarthCore__add__);
    EarthCore__SetState(this, 0, v20);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_32499584(gameObject, 350.0, 0LL);
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
                                                                   (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  this->fields.mMeshRenderer = Component_srcLineSprite;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mMeshRenderer,
    (System_Int32_array **)Component_srcLineSprite,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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


void __fastcall EarthCore__FocusInOut(EarthCore_o *this, bool isFocusIn, bool isForce, const MethodInfo *method)
{
  EarthCore_c *v7; // x0
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct EarthCore_StaticFields *static_fields; // x10
  float v12; // s0
  float v13; // w9
  float v14; // w8
  float v15; // w10
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct TransitionCalculator_float__o **p_focusInOutScaleCalculator; // x0
  System_Int32_array **v29; // x1
  float v30; // s8
  System_Func_Vector3__Vector3__float__Vector3__o *v31; // x20
  System_Func_float__float__float__float__o *v32; // x21
  float x; // s11
  float y; // s12
  float z; // s13
  float v36; // s9
  float v37; // s10
  float v38; // s14
  TransitionCalculator_Vector3__o *v39; // x0
  struct TransitionCalculator_Vector3__o *v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  unsigned int LocalScale; // s0
  float mFocusTgtScl; // s9
  float v49; // s10
  TransitionCalculator_float__o *v50; // x20
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_435380B & 1) == 0 )
  {
    sub_B70694(&EarthCore_TypeInfo);
    sub_B70694(&Method_TransitionCalculator_Vector3___ctor__);
    sub_B70694(&Method_TransitionCalculator_float___ctor__);
    sub_B70694(&TransitionCalculator_Vector3__TypeInfo);
    sub_B70694(&TransitionCalculator_float__TypeInfo);
    byte_435380B = 1;
  }
  this->fields.mIsFocusIn = isFocusIn;
  v7 = EarthCore_TypeInfo;
  if ( isFocusIn )
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      v7 = EarthCore_TypeInfo;
    }
    p_x = &v7->static_fields->FOCUS_IN_POS.fields.x;
    p_y = p_x + 1;
    p_z = p_x + 2;
  }
  else
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      v7 = EarthCore_TypeInfo;
    }
    static_fields = v7->static_fields;
    p_x = &static_fields->FOCUS_OUT_POS.fields.x;
    p_y = &static_fields->FOCUS_OUT_POS.fields.y;
    p_z = &static_fields->FOCUS_OUT_POS.fields.z;
  }
  v12 = 0.95;
  v13 = *p_y;
  v14 = *p_x;
  v15 = *p_z;
  if ( this->fields.mIsFocusIn )
    v12 = 1.0;
  this->fields.mFocusTgtPos.fields.x = v14;
  this->fields.mFocusTgtPos.fields.y = v13;
  this->fields.mFocusTgtPos.fields.z = v15;
  this->fields.mFocusTgtScl = v12;
  if ( isForce )
  {
    v51.fields.z = v15;
    v51.fields.y = v13;
    v51.fields.x = v14;
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, v51, 0LL);
    GameObjectExtensions__SetLocalScale_32499584(this->fields.mEarthRoot, this->fields.mFocusTgtScl, 0LL);
    this->fields.focusInOutPositionCalculator = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.focusInOutPositionCalculator,
      0LL,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    this->fields.focusInOutScaleCalculator = 0LL;
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    v29 = 0LL;
  }
  else
  {
    v30 = ChangedFPSUtil__CovertFrameNumToSecond(10, 0LL);
    v31 = ExtraEasing__AsymptoticSeriesVector3(0.35, 10.0, 0LL);
    v32 = ExtraEasing__AsymptoticSeriesFloat(0.35, 10.0, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0LL);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v36 = LocalPosition.fields.x;
    v37 = LocalPosition.fields.y;
    v38 = LocalPosition.fields.z;
    v39 = (TransitionCalculator_Vector3__o *)sub_B70764(TransitionCalculator_Vector3__TypeInfo);
    v53.fields.x = v36;
    v53.fields.y = v37;
    v53.fields.z = v38;
    v54.fields.x = x;
    v54.fields.y = y;
    v54.fields.z = z;
    v40 = v39;
    TransitionCalculator_Vector3____ctor(
      v39,
      v53,
      v54,
      v30,
      (System_Func_T__T__float__T__o *)v31,
      (const MethodInfo_29DDDC8 *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v40;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.focusInOutPositionCalculator,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    LocalScale = (unsigned int)GameObjectExtensions__GetLocalScale(this->fields.mEarthRoot, 0LL);
    mFocusTgtScl = this->fields.mFocusTgtScl;
    v49 = *(float *)&LocalScale;
    v50 = (TransitionCalculator_float__o *)sub_B70764(TransitionCalculator_float__TypeInfo);
    TransitionCalculator_float____ctor(
      v50,
      v49,
      mFocusTgtScl,
      v30,
      (System_Func_T__T__float__T__o *)v32,
      (const MethodInfo_29DDB04 *)Method_TransitionCalculator_float___ctor__);
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    this->fields.focusInOutScaleCalculator = v50;
    v29 = (System_Int32_array **)v50;
  }
  sub_B70630((BattleServantConfConponent_o *)p_focusInOutScaleCalculator, v29, v22, v23, v24, v25, v26, v27);
}


int32_t __fastcall EarthCore__GetState(EarthCore_o *this, const MethodInfo *method)
{
  EarthCore_o *v2; // x19
  struct CStateManager_EarthCore__o *mFSM; // x8

  v2 = this;
  if ( (byte_435380F & 1) == 0 )
  {
    this = (EarthCore_o *)sub_B70694(&Method_CStateManager_EarthCore__getState__);
    byte_435380F = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall EarthCore__OnPress(EarthCore_o *this, const MethodInfo *method)
{
  struct EarthCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_B7076C(this, method);
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
    sub_B7076C(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore__SetState(EarthCore_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_EarthCore__o *mFSM; // x0

  if ( (byte_4353810 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_EarthCore__setState__);
    byte_4353810 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B7076C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2C8014C *)Method_CStateManager_EarthCore__setState__);
}


void __fastcall EarthCore__Setup(
        EarthCore_o *this,
        System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList,
        bool isFocusIn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v10; // w20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v15; // x23
  int32_t warId; // w21
  _BOOL4 IsEvent; // w0
  __int64 mCoreType; // x27
  System_Single_array_array *PrioredCoordinates; // x0
  int max_length; // w8
  System_Single_array *v21; // x8
  float v22; // s8
  float v23; // s9
  bool IsWarOpen; // w22
  UnityEngine_Object_o *EarthPoint; // x23
  _BOOL8 v26; // x0
  __int64 v27; // x1
  float v28; // s8
  float v29; // s9
  float v30; // s14
  float v31; // s10
  float v32; // s8
  float v33; // s0
  Il2CppObject *EarthPoint_object; // x0
  __int64 v35; // x1
  UnityEngine_GameObject_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x0
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_435380E & 1) == 0 )
  {
    sub_B70694(&Method_BaseCore_CreateEarthPoint_EarthPoint___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_8468/*"LAST_WAR_ID"*/);
    byte_435380E = 1;
  }
  memset(&v40, 0, sizeof(v40));
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
        mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8468/*"LAST_WAR_ID"*/, 0LL),
        !warInfoList) )
  {
    sub_B7076C(mEarthRoot, v7);
  }
  v10 = (int)mEarthRoot;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v11 )
      break;
    current = (MapControl_WarInfo_o *)v40.fields.current;
    if ( !v40.fields.current )
      sub_B7076C(v11, v12);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v40.fields.current, 0LL);
    v15 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0LL) && !WarEntity__IsDisplayEarthPointWithoutMap(v15, 0LL) )
        goto LABEL_19;
      IsEvent = WarEntity__IsEvent(v15, 0LL);
      if ( warId <= v10 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v15, 0LL);
        if ( !PrioredCoordinates )
          goto LABEL_19;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_19;
        if ( (unsigned int)mCoreType >= max_length )
        {
          v38 = sub_B70798(PrioredCoordinates);
          sub_B70738(v38, 0LL);
        }
        v21 = PrioredCoordinates->m_Items[mCoreType];
        if ( v21 && (int)v21->max_length >= 2 )
        {
          v22 = v21->m_Items[1];
          v23 = v21->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = (UnityEngine_Object_o *)BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v26 = UnityEngine_Object__op_Equality(EarthPoint, 0LL, 0LL);
          if ( v26 )
          {
            v28 = v22 * 0.017453;
            v29 = (float)(v23 + 9.5) * 0.017453;
            v30 = cosf(v28) * 0.5;
            v31 = cosf(v29);
            v32 = sinf(v28);
            v33 = sinf(v29);
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  v31 * v30,
                                  v32 * 0.5,
                                  v30 * v33,
                                  (const MethodInfo_1BDB940 *)Method_BaseCore_CreateEarthPoint_EarthPoint___);
            if ( !EarthPoint_object )
              sub_B7076C(0LL, v35);
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
          }
          else
          {
            if ( !EarthPoint )
              sub_B7076C(v26, v27);
            v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EarthPoint, 0LL);
            if ( !v36 )
              sub_B7076C(0LL, v37);
            UnityEngine_GameObject__SetActive(v36, IsWarOpen, 0LL);
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
    &v40,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall EarthCore__Update(EarthCore_o *this, const MethodInfo *method)
{
  struct CStateManager_EarthCore__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_435380D & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_EarthCore__update__);
    byte_435380D = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2C80124 *)Method_CStateManager_EarthCore__update__);
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
  float AutoRotationSpeed; // s8
  float *p_fields; // x20
  float mInertialSpd; // t1
  float v8; // s9
  float v9; // s0
  CTouch_c *v10; // x0
  float x; // s9
  float v12; // s0
  float v13; // s9
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  TransitionCalculator_float__o *focusInOutScaleCalculator; // x0
  bool v16; // w8
  UnityEngine_GameObject_o *mEarthRoot; // x20
  UnityEngine_GameObject_o *v18; // x20
  float v19; // s0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_434F01B & 1) == 0 )
  {
    sub_B70694(&CTouch_TypeInfo);
    sub_B70694(&Method_TransitionCalculator_float__IsFinished__);
    sub_B70694(&Method_TransitionCalculator_Vector3__IsFinished__);
    sub_B70694(&Method_TransitionCalculator_float__Update__);
    this = (EarthCore_StateMain_o *)sub_B70694(&Method_TransitionCalculator_Vector3__Update__);
    byte_434F01B = 1;
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
      if ( !byte_434F0BA )
      {
        sub_B70694(&CTouch_TypeInfo);
        byte_434F0BA = 1;
      }
      v10 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v10 = CTouch_TypeInfo;
      }
      x = v10->static_fields->mScrPosDelta.fields.x;
      if ( !byte_434F0BB )
      {
        sub_B70694(&CTouch_TypeInfo);
        v10 = CTouch_TypeInfo;
        byte_434F0BB = 1;
      }
      if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = CTouch_TypeInfo;
      }
      v12 = v10->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v12) )
        v12 = x;
      *p_fields = v12 * -0.2;
    }
  }
  else
  {
    mInertialSpd = v4->fields.mInertialSpd;
    p_fields = (float *)&v4->fields;
    if ( !UnityEngine_Mathf__Approximately(mInertialSpd, 0.0, 0LL) )
    {
      v8 = *p_fields;
      v9 = v8 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      *p_fields = v9;
      if ( fabsf(v9) < 0.004 )
        *p_fields = 0.0;
    }
  }
  v13 = *p_fields;
  this = (EarthCore_StateMain_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)that, 0LL);
  if ( !this )
    goto LABEL_40;
  v20.fields.y = AutoRotationSpeed + v13;
  v20.fields.x = 0.0;
  v20.fields.z = 0.0;
  UnityEngine_Transform__Rotate_36189384((UnityEngine_Transform_o *)this, v20, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator )
  {
    if ( !TransitionCalculator_Vector3___IsFinished(
            focusInOutPositionCalculator,
            (const MethodInfo_29DDF3C *)Method_TransitionCalculator_Vector3__IsFinished__) )
    {
      focusInOutScaleCalculator = that->fields.focusInOutScaleCalculator;
      if ( focusInOutScaleCalculator )
      {
        if ( !TransitionCalculator_float___IsFinished(
                focusInOutScaleCalculator,
                (const MethodInfo_29DDC44 *)Method_TransitionCalculator_float__IsFinished__) )
        {
          this = (EarthCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
          if ( this )
          {
            mEarthRoot = that->fields.mEarthRoot;
            v21 = TransitionCalculator_Vector3___Update(
                    (TransitionCalculator_Vector3__o *)this,
                    (const MethodInfo_29DDE84 *)Method_TransitionCalculator_Vector3__Update__);
            GameObjectExtensions__SetLocalPosition(mEarthRoot, v21, 0LL);
            this = (EarthCore_StateMain_o *)that->fields.focusInOutScaleCalculator;
            if ( this )
            {
              v18 = that->fields.mEarthRoot;
              v19 = TransitionCalculator_float___Update(
                      (TransitionCalculator_float__o *)this,
                      (const MethodInfo_29DDB90 *)Method_TransitionCalculator_float__Update__);
              GameObjectExtensions__SetLocalScale_32499584(v18, v19, 0LL);
              v16 = 1;
              goto LABEL_36;
            }
          }
LABEL_40:
          sub_B7076C(this, that);
        }
      }
    }
  }
  GameObjectExtensions__SetLocalPosition(that->fields.mEarthRoot, that->fields.mFocusTgtPos, 0LL);
  GameObjectExtensions__SetLocalScale_32499584(that->fields.mEarthRoot, that->fields.mFocusTgtScl, 0LL);
  v16 = 0;
LABEL_36:
  that->fields.mIsFocusMoving = v16;
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
  EarthCore_o *mThat; // x0
  struct EarthCore_o *v4; // x8

  if ( (byte_434F01E & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_B70694(&StringLiteral_6989/*"GO_NEXT"*/);
    byte_434F01E = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, 0LL), (v4 = this->fields.mThat) == 0LL)
    || (mThat = (EarthCore_o *)v4->fields.mTerminalMap) == 0LL
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0LL)) == 0LL )
  {
    sub_B7076C(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_15018820(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_6989/*"GO_NEXT"*/,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore_StateZoomIn__begin(
        EarthCore_StateZoomIn_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Component_o **v8; // x21
  UnityEngine_Object_o *klass; // x22
  TerminalPramsManager_c *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int v12; // s0
  int v13; // s1
  int v14; // s2
  int v15; // s3
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  UnityEngine_GameObject_o *v21; // x0
  EasingObject_o *v22; // x21
  float mSpdTime; // s8
  System_Action_o *v29; // x22
  System_Action_o *v30; // x23
  TerminalPramsManager_c *v31; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v33; // x21
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_434F01C & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_EarthCore_StateZoomIn_GoNext__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__);
    sub_B70694(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__);
    sub_B70694(&EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
    byte_434F01C = 1;
  }
  v5 = sub_B70764(EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
  EarthCore_StateZoomIn___c__DisplayClass3_0___ctor((EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_54;
  *(_QWORD *)(v5 + 24) = that;
  v8 = (UnityEngine_Component_o **)(v5 + 24);
  sub_B70630(v5 + 24);
  *(_QWORD *)(v5 + 144) = this;
  sub_B70630(v5 + 144);
  this->fields.mThat = *(struct EarthCore_o **)(v5 + 24);
  sub_B70630(&this->fields);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*v8 )
    goto LABEL_54;
  klass = (UnityEngine_Object_o *)(*v8)[3].klass;
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
    if ( !byte_434DECB )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434DECB = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    if ( v10->static_fields->_IsAutoResume_k__BackingField )
    {
      EarthCore_StateZoomIn__GoNext(this, v7);
      return;
    }
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(22, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v33 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 2, 0.4, v33, 0LL);
      return;
    }
LABEL_54:
    sub_B7076C(transform, v7);
  }
  transform = *v8;
  if ( !*v8 )
    goto LABEL_54;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  *(_QWORD *)(v5 + 16) = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           gameObject,
                           (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_B70630(v5 + 16);
  transform = *(UnityEngine_Component_o **)(v5 + 24);
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
  *(UnityEngine_Quaternion_o *)&v12 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v16 = *(_QWORD *)(v5 + 24);
  *(_DWORD *)(v5 + 32) = v12;
  *(_DWORD *)(v5 + 36) = v13;
  *(_DWORD *)(v5 + 40) = v14;
  *(_DWORD *)(v5 + 44) = v15;
  if ( !v16 )
    goto LABEL_54;
  v17 = *(_QWORD *)(v16 + 72);
  if ( !v17 )
    goto LABEL_54;
  *(_OWORD *)(v5 + 48) = *(_OWORD *)(v17 + 88);
  *(_DWORD *)(v16 + 104) = v12;
  *(_DWORD *)(v16 + 108) = v13;
  *(_DWORD *)(v16 + 112) = v14;
  *(_DWORD *)(v16 + 116) = v15;
  v18 = *(_QWORD *)(v5 + 24);
  if ( !v18 )
    goto LABEL_54;
  transform = *(UnityEngine_Component_o **)(v18 + 24);
  if ( !transform )
    goto LABEL_54;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_54;
  *(UnityEngine_Quaternion_o *)(v5 + 64) = UnityEngine_Transform__get_rotation(
                                             (UnityEngine_Transform_o *)transform,
                                             0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  v19 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Quaternion_o *)(v5 + 80) = identity;
  if ( !v19 )
    goto LABEL_54;
  *(UnityEngine_Vector3_o *)(v5 + 96) = GameObjectExtensions__GetLocalPosition(
                                          (UnityEngine_GameObject_o *)*(_QWORD *)(v19 + 24),
                                          0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  v20 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 108) = zero;
  if ( !v20 )
    goto LABEL_54;
  transform = *(UnityEngine_Component_o **)(v20 + 24);
  if ( !transform )
    goto LABEL_54;
  v21 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
  *(UnityEngine_Vector3_o *)(v5 + 120) = GameObjectExtensions__GetLocalScale(v21, 0LL);
  v22 = *(EasingObject_o **)(v5 + 16);
  __asm { FMOV            V0.2S, #6.0 }
  *(_QWORD *)(v5 + 132) = _D0;
  *(_DWORD *)(v5 + 140) = 1086324736;
  mSpdTime = this->fields.mSpdTime;
  v29 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)v5, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, 0LL);
  v30 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)v5, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, 0LL);
  if ( !v22 )
    goto LABEL_54;
  EasingObject__Play(v22, mSpdTime, v29, v30, 0.0, 1, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DECB )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DECB = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  if ( !v31->static_fields->_IsAutoResume_k__BackingField )
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
  float v4; // s8
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_434F01D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_EarthCore_StateZoomIn_GoNext__);
    byte_434F01D = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v4 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v4 <= 0.4 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_B7076C(v7, v8);
      CommonUI__maskFadeout(Instance, 2, v4, v6, 0LL);
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
    sub_B7076C(this, method);
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

  if ( (byte_435159B & 1) == 0 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_435159B = 1;
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
  if ( !byte_434DECB )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DECB = 1;
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
    sub_B7076C(that, method);
  }
}


void __fastcall EarthCore_StateZoomOut___ctor(EarthCore_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EarthCore_StateZoomOut__GoNext(EarthCore_StateZoomOut_o *this, const MethodInfo *method)
{
  EarthCore_o *mThat; // x0
  struct EarthCore_o *v4; // x8

  if ( (byte_434F020 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_B70694(&StringLiteral_6989/*"GO_NEXT"*/);
    byte_434F020 = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, 0LL), (v4 = this->fields.mThat) == 0LL)
    || (mThat = (EarthCore_o *)v4->fields.mTerminalMap) == 0LL
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0LL)) == 0LL )
  {
    sub_B7076C(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_15018820(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_6989/*"GO_NEXT"*/,
    0LL);
}


void __fastcall EarthCore_StateZoomOut__begin(
        EarthCore_StateZoomOut_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x19
  void *transform; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x21
  float IntpTime_AutoResume; // s0
  __int64 v10; // x8
  __int64 v11; // x8
  TerminalSceneComponent_o *v12; // x22
  float v13; // s8
  struct EarthCore_StateZoomOut___c_StaticFields *static_fields; // x8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v16; // x24
  struct EarthCore_StateZoomOut___c_StaticFields *v17; // x0
  UnityEngine_Object_o *v18; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  int *v23; // x8
  int *v24; // x9
  int *v25; // x10
  int *v26; // x10
  int v27; // w9
  int v28; // w11
  int v29; // w10
  __int64 v30; // x8
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x8
  float v33; // s0
  EasingObject_o *v34; // x20
  System_Action_o *v35; // x21
  System_Action_o *v36; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_434F01F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&EarthCore_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&Method_EarthCore_StateZoomOut___c__begin_b__1_0__);
    sub_B70694(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__);
    sub_B70694(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__);
    sub_B70694(&EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
    sub_B70694(&EarthCore_StateZoomOut___c_TypeInfo);
    byte_434F01F = 1;
  }
  v5 = sub_B70764(EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
  EarthCore_StateZoomOut___c__DisplayClass1_0___ctor((EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_52;
  *(_QWORD *)(v5 + 24) = that;
  v8 = v5 + 24;
  sub_B70630(v5 + 24);
  *(_QWORD *)(v5 + 144) = this;
  sub_B70630(v5 + 144);
  this->fields.mThat = *(struct EarthCore_o **)(v5 + 24);
  sub_B70630(&this->fields);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*(_QWORD *)v8 )
    goto LABEL_52;
  v10 = *(_QWORD *)(*(_QWORD *)v8 + 48LL);
  if ( !v10 )
    goto LABEL_52;
  *(_BYTE *)(v10 + 392) = 0;
  if ( !*(_QWORD *)v8 )
    goto LABEL_52;
  v11 = *(_QWORD *)(*(_QWORD *)v8 + 48LL);
  if ( !v11 )
    goto LABEL_52;
  *(_BYTE *)(v11 + 394) = 1;
  if ( !*(_QWORD *)v8 )
    goto LABEL_52;
  v12 = *(TerminalSceneComponent_o **)(*(_QWORD *)v8 + 48LL);
  v13 = IntpTime_AutoResume;
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
    v16 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(_9__1_0, v16, Method_EarthCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    v17 = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
    v17->__9__1_0 = _9__1_0;
    sub_B70630(&v17->__9__1_0);
  }
  if ( !v12 )
    goto LABEL_52;
  TerminalSceneComponent__Fadein_WorldDisp_18527132(v12, 0.4, _9__1_0, 0LL);
  if ( !*(_QWORD *)v8 )
    goto LABEL_52;
  v18 = *(UnityEngine_Object_o **)(*(_QWORD *)v8 + 72LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
  {
    EarthCore_StateZoomOut__GoNext(this, v7);
    return;
  }
  transform = *(void **)v8;
  if ( !*(_QWORD *)v8 )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  *(_QWORD *)(v5 + 16) = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           gameObject,
                           (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_B70630(v5 + 16);
  transform = *(void **)(v5 + 24);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v20 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Quaternion_o *)(v5 + 48) = rotation;
  if ( !v20 )
    goto LABEL_52;
  *(_OWORD *)(v5 + 32) = *(_OWORD *)(v20 + 104);
  transform = *(void **)(v20 + 24);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  v40 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v21 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Quaternion_o *)(v5 + 80) = v40;
  if ( !v21 )
    goto LABEL_52;
  *(_OWORD *)(v5 + 64) = *(_OWORD *)(v21 + 88);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v21 + 24), 0LL);
  v22 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 108) = LocalPosition;
  if ( !v22 )
    goto LABEL_52;
  transform = EarthCore_TypeInfo;
  if ( *(_BYTE *)(v22 + 136) )
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      transform = EarthCore_TypeInfo;
    }
    v23 = (int *)*((_QWORD *)transform + 23);
    v24 = v23 + 1;
    v25 = v23 + 2;
  }
  else
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      transform = EarthCore_TypeInfo;
    }
    v26 = (int *)*((_QWORD *)transform + 23);
    v23 = v26 + 3;
    v24 = v26 + 4;
    v25 = v26 + 5;
  }
  v27 = *v24;
  v28 = *v23;
  v29 = *v25;
  v30 = *(_QWORD *)(v5 + 24);
  *(_DWORD *)(v5 + 96) = v28;
  *(_DWORD *)(v5 + 100) = v27;
  *(_DWORD *)(v5 + 104) = v29;
  if ( !v30 )
    goto LABEL_52;
  transform = *(void **)(v30 + 24);
  if ( !transform )
    goto LABEL_52;
  v31 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v31, 0LL);
  v32 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 132) = LocalScale;
  if ( !v32 )
    goto LABEL_52;
  v33 = 0.95;
  v34 = *(EasingObject_o **)(v5 + 16);
  if ( *(_BYTE *)(v32 + 136) )
    v33 = 1.0;
  *(float *)(v5 + 120) = v33;
  *(float *)(v5 + 124) = v33;
  *(float *)(v5 + 128) = v33;
  v35 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v5, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, 0LL);
  v36 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)v5, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, 0LL);
  if ( !v34 )
LABEL_52:
    sub_B7076C(transform, v7);
  EasingObject__Play_33912172(v34, 1.0, 0.0, v13, v35, v36, 0.0, 3, 0LL);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_435159C & 1) == 0 )
  {
    sub_B70694(&EarthCore_StateZoomOut___c_TypeInfo);
    byte_435159C = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EarthCore_StateZoomOut___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)EarthCore_StateZoomOut___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7076C(this, method);
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
    sub_B7076C(that, method);
  }
  EarthCore_StateZoomOut__GoNext((EarthCore_StateZoomOut_o *)that, 0LL);
}