void __fastcall EarthCore___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct EarthCore_StaticFields *static_fields; // x8
  struct EarthCore_StaticFields *v4; // x8

  if ( (byte_4B12D59 & 1) == 0 )
  {
    sub_1BCA7E0(&EarthCore_TypeInfo, v1, v2);
    byte_4B12D59 = 1;
  }
  static_fields = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x = 0xC32A0000C3848000LL;
  static_fields->FOCUS_IN_POS.fields.z = 0.0;
  v4 = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&v4->FOCUS_OUT_POS.fields.x = 0xC3480000C3848000LL;
  v4->FOCUS_OUT_POS.fields.z = 0.0;
}


void __fastcall EarthCore___ctor(EarthCore_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B12D58 & 1) == 0 )
  {
    sub_1BCA7E0(&EarthCore_StateMain_TypeInfo, method, v2);
    byte_4B12D58 = 1;
  }
  v5 = (Il2CppObject *)sub_1BCAA2C(EarthCore_StateMain_TypeInfo, method, v2, v3);
  System_Object___ctor(v5, 0LL);
  this->fields.mStateMain = (struct EarthCore_StateMain_o *)v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mStateMain, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  BaseCore___ctor((BaseCore_o *)this, 0LL);
}


void __fastcall EarthCore__Awake(EarthCore_o *this, const MethodInfo *method)
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
  struct CStateManager_EarthCore__o *mFSM; // x8
  struct CStateManager_EarthCore__o **p_mFSM; // x20
  CStateManager_T__o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  CStateManager_T__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  Il2CppObject *v30; // x22
  CStateManager_T__o *transform; // x0
  __int64 v32; // x1
  CStateManager_T__o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  Il2CppObject *v37; // x22
  CStateManager_T__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  Il2CppObject *v42; // x21
  const MethodInfo *v43; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_GameObject_o *mEarthRoot; // x20
  Il2CppObject *Component_object; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  EarthCore_c *klass; // x8
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12D53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_EarthCore___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_EarthCore__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_EarthCore__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v9, v10);
    sub_1BCA7E0(&EarthCore_StateNone_TypeInfo, v11, v12);
    sub_1BCA7E0(&EarthCore_StateZoomIn_TypeInfo, v13, v14);
    sub_1BCA7E0(&EarthCore_StateZoomOut_TypeInfo, v15, v16);
    byte_4B12D53 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 0;
  if ( !mFSM )
  {
    v19 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_EarthCore__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v19,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_313FBC4 *)Method_CStateManager_EarthCore___ctor__);
    this->fields.mFSM = (struct CStateManager_EarthCore__o *)v19;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v19, v20, v21, v22, v23, v24, v25);
    v26 = (CStateManager_T__o *)this->fields.mFSM;
    v30 = (Il2CppObject *)sub_1BCAA2C(EarthCore_StateNone_TypeInfo, v27, v28, v29);
    System_Object___ctor(v30, 0LL);
    if ( !v26 )
      goto LABEL_15;
    CStateManager_object___add(
      v26,
      0,
      (IState_T__o *)v30,
      (const MethodInfo_313FC6C *)Method_CStateManager_EarthCore__add__);
    transform = (CStateManager_T__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_15;
    CStateManager_object___add(
      transform,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_313FC6C *)Method_CStateManager_EarthCore__add__);
    v33 = (CStateManager_T__o *)this->fields.mFSM;
    v37 = (Il2CppObject *)sub_1BCAA2C(EarthCore_StateZoomIn_TypeInfo, v34, v35, v36);
    System_Object___ctor(v37, 0LL);
    if ( !v33 )
      goto LABEL_15;
    CStateManager_object___add(
      v33,
      2,
      (IState_T__o *)v37,
      (const MethodInfo_313FC6C *)Method_CStateManager_EarthCore__add__);
    v38 = (CStateManager_T__o *)*p_mFSM;
    v42 = (Il2CppObject *)sub_1BCAA2C(EarthCore_StateZoomOut_TypeInfo, v39, v40, v41);
    System_Object___ctor(v42, 0LL);
    if ( !v38 )
      goto LABEL_15;
    CStateManager_object___add(
      v38,
      3,
      (IState_T__o *)v42,
      (const MethodInfo_313FC6C *)Method_CStateManager_EarthCore__add__);
    EarthCore__SetState(this, 0, v43);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34333164(gameObject, 350.0, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v45, v46);
    byte_4B109C6 = 1;
  }
  GameObjectExtensions__SetLocalScale(mEarthRoot, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  transform = (CStateManager_T__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___),
        this->fields.mMeshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.mMeshRenderer,
          (int64_t)Component_object,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54),
        (transform = (CStateManager_T__o *)this->fields.mEarthRoot) == 0LL)
    || (transform = (CStateManager_T__o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)transform,
                                            0LL)) == 0LL )
  {
LABEL_15:
    sub_1BCAA3C(transform, v32);
  }
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
  bool v7; // w23
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  float v16; // s0
  struct EarthCore_StaticFields *static_fields; // x8
  _BOOL4 mIsFocusIn; // w11
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct TransitionCalculator_float__o **p_focusInOutScaleCalculator; // x0
  int64_t v32; // x1
  float v33; // s8
  System_Func_T__T__float__T__o *v34; // x20
  System_Func_T__T__float__T__o *v35; // x21
  float x; // s11
  float y; // s12
  float z; // s13
  float v39; // s9
  float v40; // s10
  float v41; // s14
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  TransitionCalculator_Vector3__o *v45; // x0
  struct TransitionCalculator_Vector3__o *v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  unsigned int LocalScale; // s0
  float mFocusTgtScl; // s9
  float v55; // s10
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  TransitionCalculator_float__o *v59; // x20
  __int64 v60; // [xsp+0h] [xbp-80h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s3.4,4:s4.4,8:s5.4

  v7 = isFocusIn;
  if ( (byte_4B12D52 & 1) == 0 )
  {
    sub_1BCA7E0(&EarthCore_TypeInfo, isFocusIn, isForce);
    sub_1BCA7E0(&Method_TransitionCalculator_Vector3___ctor__, v8, v9);
    sub_1BCA7E0(&Method_TransitionCalculator_float___ctor__, v10, v11);
    sub_1BCA7E0(&TransitionCalculator_float__TypeInfo, v12, v13);
    sub_1BCA7E0(&TransitionCalculator_Vector3__TypeInfo, v14, v15);
    byte_4B12D52 = 1;
  }
  this->fields.mIsFocusIn = v7;
  if ( !EarthCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo, isFocusIn);
  v16 = 0.95;
  static_fields = EarthCore_TypeInfo->static_fields;
  if ( !isFocusIn )
    static_fields = (struct EarthCore_StaticFields *)((char *)static_fields + 12);
  v60 = *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x;
  mIsFocusIn = this->fields.mIsFocusIn;
  this->fields.mFocusTgtPos.fields.z = static_fields->FOCUS_IN_POS.fields.z;
  *(_QWORD *)&this->fields.mFocusTgtPos.fields.x = v60;
  if ( mIsFocusIn )
    v16 = 1.0;
  this->fields.mFocusTgtScl = v16;
  if ( isForce )
  {
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, this->fields.mFocusTgtPos, 0LL);
    GameObjectExtensions__SetLocalScale_34333164(this->fields.mEarthRoot, this->fields.mFocusTgtScl, 0LL);
    this->fields.focusInOutPositionCalculator = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.focusInOutPositionCalculator,
      0LL,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    this->fields.focusInOutScaleCalculator = 0LL;
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    v32 = 0LL;
  }
  else
  {
    v33 = ChangedFPSUtil__CovertFrameNumToSecond(10, 0LL);
    v34 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesVector3(0.35, 10.0, 0LL);
    v35 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesFloat(0.35, 10.0, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0LL);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v39 = LocalPosition.fields.x;
    v40 = LocalPosition.fields.y;
    v41 = LocalPosition.fields.z;
    v45 = (TransitionCalculator_Vector3__o *)sub_1BCAA2C(TransitionCalculator_Vector3__TypeInfo, v42, v43, v44);
    v62.fields.x = v39;
    v62.fields.y = v40;
    v62.fields.z = v41;
    v63.fields.x = x;
    v63.fields.y = y;
    v63.fields.z = z;
    v46 = v45;
    TransitionCalculator_Vector3____ctor(
      v45,
      v62,
      v63,
      v33,
      v34,
      (const MethodInfo_38604FC *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v46;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.focusInOutPositionCalculator,
      (int64_t)v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    LocalScale = (unsigned int)GameObjectExtensions__GetLocalScale(this->fields.mEarthRoot, 0LL);
    mFocusTgtScl = this->fields.mFocusTgtScl;
    v55 = *(float *)&LocalScale;
    v59 = (TransitionCalculator_float__o *)sub_1BCAA2C(TransitionCalculator_float__TypeInfo, v56, v57, v58);
    TransitionCalculator_float____ctor(
      v59,
      v55,
      mFocusTgtScl,
      v33,
      v35,
      (const MethodInfo_3860330 *)Method_TransitionCalculator_float___ctor__);
    this->fields.focusInOutScaleCalculator = v59;
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    v32 = (int64_t)v59;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_focusInOutScaleCalculator, v32, v25, v26, v27, v28, v29, v30);
}


int32_t __fastcall EarthCore__GetState(EarthCore_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EarthCore_o *v3; // x19
  struct CStateManager_EarthCore__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B12D56 & 1) == 0 )
  {
    this = (EarthCore_o *)sub_1BCA7E0(&Method_CStateManager_EarthCore__getState__, method, v2);
    byte_4B12D56 = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall EarthCore__OnPress(EarthCore_o *this, const MethodInfo *method)
{
  struct EarthCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore__SetState(EarthCore_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B12D57 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_EarthCore__setState__, *(_QWORD *)&state, method);
    byte_4B12D57 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(mFSM, state, (const MethodInfo_313FCF8 *)Method_CStateManager_EarthCore__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore__Setup(
        EarthCore_o *this,
        System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList,
        bool isFocusIn,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  UnityEngine_GameObject_o *mEarthRoot; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v24; // w20
  _BOOL8 v25; // x0
  __int64 v26; // x1
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v29; // x23
  int32_t warId; // w21
  _BOOL4 IsEvent; // w0
  __int64 mCoreType; // x28
  System_Single_array_array *PrioredCoordinates; // x0
  __int64 v34; // x1
  int max_length; // w8
  System_Single_array *v36; // x8
  float v37; // s8
  float v38; // s12
  bool IsWarOpen; // w22
  __int64 v40; // x1
  UnityEngine_Object_o *EarthPoint; // x23
  _BOOL8 v42; // x0
  __int64 v43; // x1
  float v44; // s0
  float v45; // s8
  float v46; // s12
  float v47; // s13
  Il2CppObject *EarthPoint_object; // x0
  __int64 v49; // x1
  UnityEngine_GameObject_o *v50; // x0
  __int64 v51; // x1
  float v52; // [xsp+0h] [xbp-D0h] BYREF
  float v53; // [xsp+4h] [xbp-CCh] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-B0h] BYREF
  float cosx; // [xsp+78h] [xbp-58h] BYREF
  float sinx; // [xsp+7Ch] [xbp-54h] BYREF

  if ( (byte_4B12D55 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BaseCore_CreateEarthPoint_EarthPoint___, warInfoList, isFocusIn);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_8355/*"LAST_WAR_ID"*/, v17, v18);
    byte_4B12D55 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_33;
  mEarthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mEarthRoot, 0LL);
  if ( !mEarthRoot )
    goto LABEL_33;
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)mEarthRoot, this->fields.mRootQua, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v21, v22);
    byte_4B109C1 = 1;
  }
  GameObjectExtensions__SetLocalEulerAngle(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  ((void (__fastcall *)(EarthCore_o *, bool, __int64, Il2CppMethodPointer))this->klass->vtable._4_FocusInOut.method)(
    this,
    isFocusIn,
    1LL,
    this->klass->vtable._5_Awake.methodPtr);
  mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8355/*"LAST_WAR_ID"*/, 0LL);
  if ( !warInfoList )
LABEL_33:
    sub_1BCAA3C(mEarthRoot, v19);
  v24 = (int)mEarthRoot;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    (System_Collections_Generic_List_object__o *)warInfoList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v55 = v54;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v25 )
      break;
    current = (MapControl_WarInfo_o *)v55.fields._current;
    if ( !v55.fields._current )
      sub_1BCAA3C(v25, v26);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v55.fields._current, 0LL);
    v29 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0LL) && !WarEntity__IsDisplayEarthPointWithoutMap(v29, 0LL) )
        goto LABEL_21;
      IsEvent = WarEntity__IsEvent(v29, 0LL);
      if ( warId <= v24 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v29, 0LL);
        if ( !PrioredCoordinates )
          goto LABEL_21;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_21;
        if ( (unsigned int)mCoreType >= max_length )
          sub_1BCAA44(PrioredCoordinates, v34);
        v36 = PrioredCoordinates->m_Items[mCoreType];
        if ( v36 && (int)v36->max_length >= 2 )
        {
          v37 = v36->m_Items[1];
          v38 = v36->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = (UnityEngine_Object_o *)BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
          v42 = UnityEngine_Object__op_Equality(EarthPoint, 0LL, 0LL);
          if ( v42 )
          {
            v44 = v37 * 0.017453;
            v45 = (float)(v38 + 9.5) * 0.017453;
            sincosf(v44, &sinx, &cosx);
            v46 = sinx;
            v47 = cosx * 0.5;
            sincosf(v45, &v53, &v52);
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  v47 * v52,
                                  v46 * 0.5,
                                  v47 * v53,
                                  (const MethodInfo_2EFC95C *)Method_BaseCore_CreateEarthPoint_EarthPoint___);
            if ( !EarthPoint_object )
              sub_1BCAA3C(0LL, v49);
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
          }
          else
          {
            if ( !EarthPoint )
              sub_1BCAA3C(v42, v43);
            v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EarthPoint, 0LL);
            if ( !v50 )
              sub_1BCAA3C(0LL, v51);
            UnityEngine_GameObject__SetActive(v50, IsWarOpen, 0LL);
          }
        }
        else
        {
LABEL_21:
          BaseCore__HideEarthPoint((BaseCore_o *)this, warId, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall EarthCore__Update(EarthCore_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B12D54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_EarthCore__update__, method, v2);
    byte_4B12D54 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_313FCD4 *)Method_CStateManager_EarthCore__update__);
  if ( this->fields.mIsReqZoomIn && EarthCore__GetState(this, method) == 1 )
  {
    BaseCore__EndSlideServant((BaseCore_o *)this, 0LL);
    this->fields.mIsReqZoomIn = 0;
    EarthCore__SetState(this, 2, v5);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  float AutoRotationSpeed; // s8
  float mInertialSpd; // s9
  float v17; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v19; // s9
  float v20; // s0
  __int64 v21; // x1
  __int64 v22; // x2
  CTouch_c *v23; // x0
  float x; // s9
  float v25; // s0
  float v26; // s9
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  TransitionCalculator_float__o *focusInOutScaleCalculator; // x0
  bool v29; // w8
  UnityEngine_GameObject_o *mEarthRoot; // x20
  UnityEngine_GameObject_o *v31; // x20
  float v32; // s0
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B12D5A & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, that, method);
    sub_1BCA7E0(&Method_TransitionCalculator_Vector3__IsFinished__, v5, v6);
    sub_1BCA7E0(&Method_TransitionCalculator_float__IsFinished__, v7, v8);
    sub_1BCA7E0(&Method_TransitionCalculator_Vector3__Update__, v9, v10);
    this = (EarthCore_StateMain_o *)sub_1BCA7E0(&Method_TransitionCalculator_float__Update__, v11, v12);
    byte_4B12D5A = 1;
  }
  if ( !that )
    goto LABEL_40;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0LL);
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    v4->fields.mInertialSpd = 0.0;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v13);
    AutoRotationSpeed = 0.0;
    if ( CTouch__isDrag(0LL) )
    {
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v21);
      if ( !byte_4B12CDC )
      {
        sub_1BCA7E0(&CTouch_TypeInfo, v21, v22);
        byte_4B12CDC = 1;
      }
      v23 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v21);
        v23 = CTouch_TypeInfo;
      }
      x = v23->static_fields->mScrPosDelta.fields.x;
      if ( !byte_4B12CDD )
      {
        sub_1BCA7E0(&CTouch_TypeInfo, v21, v22);
        v23 = CTouch_TypeInfo;
        byte_4B12CDD = 1;
      }
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23, v21);
        v23 = CTouch_TypeInfo;
      }
      v25 = v23->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v25) )
        v25 = x;
      v4->fields.mInertialSpd = v25 * -0.2;
    }
  }
  else
  {
    mInertialSpd = v4->fields.mInertialSpd;
    if ( !byte_4B109C5 )
    {
      sub_1BCA7E0(&UnityEngine_Mathf_TypeInfo, v13, v14);
      byte_4B109C5 = 1;
    }
    v17 = fmaxf(fabsf(mInertialSpd), 0.0) * 0.000001;
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    if ( v17 <= (float)(static_fields->Epsilon * 8.0) )
      v17 = static_fields->Epsilon * 8.0;
    if ( vabds_f32(0.0, mInertialSpd) >= v17 )
    {
      v19 = v4->fields.mInertialSpd;
      v20 = v19 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      v4->fields.mInertialSpd = v20;
      if ( fabsf(v20) < 0.004 )
        v4->fields.mInertialSpd = 0.0;
    }
  }
  v26 = v4->fields.mInertialSpd;
  this = (EarthCore_StateMain_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)that, 0LL);
  if ( !this )
    goto LABEL_40;
  v33.fields.y = AutoRotationSpeed + v26;
  v33.fields.x = 0.0;
  v33.fields.z = 0.0;
  UnityEngine_Transform__Rotate_70176896((UnityEngine_Transform_o *)this, v33, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator )
  {
    if ( !TransitionCalculator_Vector3___IsFinished(
            focusInOutPositionCalculator,
            (const MethodInfo_38605F8 *)Method_TransitionCalculator_Vector3__IsFinished__) )
    {
      focusInOutScaleCalculator = that->fields.focusInOutScaleCalculator;
      if ( focusInOutScaleCalculator )
      {
        if ( !TransitionCalculator_float___IsFinished(
                focusInOutScaleCalculator,
                (const MethodInfo_38603F8 *)Method_TransitionCalculator_float__IsFinished__) )
        {
          this = (EarthCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
          if ( this )
          {
            mEarthRoot = that->fields.mEarthRoot;
            v34 = TransitionCalculator_Vector3___Update(
                    (TransitionCalculator_Vector3__o *)this,
                    (const MethodInfo_3860588 *)Method_TransitionCalculator_Vector3__Update__);
            GameObjectExtensions__SetLocalPosition(mEarthRoot, v34, 0LL);
            this = (EarthCore_StateMain_o *)that->fields.focusInOutScaleCalculator;
            if ( this )
            {
              v31 = that->fields.mEarthRoot;
              v32 = TransitionCalculator_float___Update(
                      (TransitionCalculator_float__o *)this,
                      (const MethodInfo_3860390 *)Method_TransitionCalculator_float__Update__);
              GameObjectExtensions__SetLocalScale_34333164(v31, v32, 0LL);
              v29 = 1;
              goto LABEL_36;
            }
          }
LABEL_40:
          sub_1BCAA3C(this, that);
        }
      }
    }
  }
  GameObjectExtensions__SetLocalPosition(that->fields.mEarthRoot, that->fields.mFocusTgtPos, 0LL);
  GameObjectExtensions__SetLocalScale_34333164(that->fields.mEarthRoot, that->fields.mFocusTgtScl, 0LL);
  v29 = 0;
LABEL_36:
  that->fields.mIsFocusMoving = v29;
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
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  EarthCore_o *mThat; // x0
  struct EarthCore_o *v7; // x8

  if ( (byte_4B12D5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method, v2);
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, v4, v5);
    byte_4B12D5D = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, v2), (v7 = this->fields.mThat) == 0LL)
    || (mThat = (EarthCore_o *)v7->fields.mTerminalMap) == 0LL
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0LL)) == 0LL )
  {
    sub_1BCAA3C(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_64415908(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore_StateZoomIn__begin(
        EarthCore_StateZoomIn_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x20
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_Component_o **v33; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct EarthCore_o *v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  UnityEngine_Object_o *monitor; // x21
  __int64 v49; // x2
  TerminalPramsManager_c *v50; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x9
  __int64 v60; // x10
  __int64 v61; // x8
  __int64 v62; // x2
  __int64 v63; // x8
  __int64 v64; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v66; // x8
  float z; // s1
  UnityEngine_GameObject_o *v68; // x0
  EasingObject_o *v69; // x21
  float mSpdTime; // s8
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  System_Action_o *v79; // x22
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  System_Action_o *v83; // x23
  __int64 v84; // x1
  __int64 v85; // x2
  TerminalPramsManager_c *v86; // x0
  _QWORD *v87; // x0
  System_Reflection_MethodBase_o *v88; // x0
  _QWORD *v89; // x0
  System_Reflection_MethodBase_o *v90; // x0
  Il2CppObject *Instance; // x20
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  System_Action_o *v95; // x21
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12D5B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_EarthCore_StateZoomIn_GoNext__, v12, v13);
    sub_1BCA7E0(&Method_EarthCore_StateZoomIn_begin__, v14, v15);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, v18, v19);
    sub_1BCA7E0(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, v20, v21);
    sub_1BCA7E0(&EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, v22, v23);
    byte_4B12D5B = 1;
  }
  v24 = sub_1BCAA2C(EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_50;
  *(_QWORD *)(v24 + 24) = that;
  v33 = (UnityEngine_Component_o **)(v24 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)that, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 144) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 144), (int64_t)this, v34, v35, v36, v37, v38, v39);
  v40 = *(struct EarthCore_o **)(v24 + 24);
  this->fields.mThat = v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v47);
  this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*v33 )
    goto LABEL_50;
  monitor = (UnityEngine_Object_o *)(*v33)[3].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
    if ( !byte_4B12DCF )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v49);
      byte_4B12DCF = 1;
    }
    v50 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
      v50 = TerminalPramsManager_TypeInfo;
    }
    if ( v50->static_fields->_IsAutoResume_k__BackingField )
    {
      EarthCore_StateZoomIn__GoNext(this, v26);
      return;
    }
    v89 = Method_EarthCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_EarthCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v89 = (_QWORD *)sub_1BCA7F8(Method_EarthCore_StateZoomIn_begin__);
    v90 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v89, v89[4]);
    OverwriteAssetSoundName__PlayCommonSe(v90, 22, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v95 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v92, v93, v94);
    System_Action___ctor(v95, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.4, v95, 0LL);
      return;
    }
LABEL_50:
    sub_1BCAA3C(transform, v26);
  }
  transform = *v33;
  if ( !*v33 )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v24 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)Component_object, v53, v54, v55, v56, v57, v58);
  transform = *(UnityEngine_Component_o **)(v24 + 24);
  if ( !transform )
    goto LABEL_50;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_50;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_50;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  *(float *)(v24 + 32) = rotation.fields.x;
  v59 = *(_QWORD *)(v24 + 24);
  *(float *)(v24 + 36) = rotation.fields.y;
  *(float *)(v24 + 40) = rotation.fields.z;
  *(float *)(v24 + 44) = rotation.fields.w;
  if ( !v59 )
    goto LABEL_50;
  v60 = *(_QWORD *)(v59 + 80);
  if ( !v60 )
    goto LABEL_50;
  *(_OWORD *)(v24 + 48) = *(_OWORD *)(v60 + 96);
  *(_OWORD *)(v59 + 112) = *(_OWORD *)(v24 + 32);
  v61 = *(_QWORD *)(v24 + 24);
  if ( !v61 )
    goto LABEL_50;
  transform = *(UnityEngine_Component_o **)(v61 + 32);
  if ( !transform )
    goto LABEL_50;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_50;
  *(UnityEngine_Quaternion_o *)(v24 + 64) = UnityEngine_Transform__get_rotation(
                                              (UnityEngine_Transform_o *)transform,
                                              0LL);
  if ( !byte_4B109C7 )
  {
    transform = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v26, v62);
    byte_4B109C7 = 1;
  }
  v63 = *(_QWORD *)(v24 + 24);
  *(struct UnityEngine_Quaternion_StaticFields *)(v24 + 80) = *UnityEngine_Quaternion_TypeInfo->static_fields;
  if ( !v63 )
    goto LABEL_50;
  *(UnityEngine_Vector3_o *)(v24 + 96) = GameObjectExtensions__GetLocalPosition(
                                           (UnityEngine_GameObject_o *)*(_QWORD *)(v63 + 32),
                                           0LL);
  if ( !byte_4B109C1 )
  {
    transform = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v26, v64);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v66 = *(_QWORD *)(v24 + 24);
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v24 + 108) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v24 + 116) = z;
  if ( !v66 )
    goto LABEL_50;
  transform = *(UnityEngine_Component_o **)(v66 + 32);
  if ( !transform )
    goto LABEL_50;
  v68 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
  *(UnityEngine_Vector3_o *)(v24 + 120) = GameObjectExtensions__GetLocalScale(v68, 0LL);
  v69 = *(EasingObject_o **)(v24 + 16);
  __asm { FMOV            V0.2S, #6.0 }
  *(_QWORD *)(v24 + 132) = _D0;
  *(_DWORD *)(v24 + 140) = 1086324736;
  mSpdTime = this->fields.mSpdTime;
  v79 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v76, v77, v78);
  System_Action___ctor(v79, (Il2CppObject *)v24, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, 0LL);
  v83 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v80, v81, v82);
  System_Action___ctor(v83, (Il2CppObject *)v24, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, 0LL);
  if ( !v69 )
    goto LABEL_50;
  EasingObject__Play(v69, mSpdTime, v79, v83, 0.0, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v84);
  if ( !byte_4B12DCF )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v84, v85);
    byte_4B12DCF = 1;
  }
  v86 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v84);
    v86 = TerminalPramsManager_TypeInfo;
  }
  if ( !v86->static_fields->_IsAutoResume_k__BackingField )
  {
    v87 = Method_EarthCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_EarthCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v87 = (_QWORD *)sub_1BCA7F8(Method_EarthCore_StateZoomIn_begin__);
    v88 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v87, v87[4]);
    OverwriteAssetSoundName__PlayCommonSe(v88, 22, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  float v8; // s8
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B12D5C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_EarthCore_StateZoomIn_GoNext__, v6, v7);
    byte_4B12D5C = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v8 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v8 <= 0.4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_1BCAA3C(v14, v15);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, v8, v13, 0LL);
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
  double mNow; // d8
  double v5; // d0
  double v6; // d9
  float v7; // s9
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  struct EarthCore_o *that; // x8
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  struct EarthCore_o *v19; // x8
  float v20; // s0
  float z; // s2
  float v22; // s3
  unsigned __int64 v23; // d0 OVERLAPPED
  float v24; // s2
  int v25; // s1
  struct EarthCore_o *v26; // x8
  UnityEngine_Transform_o *v27; // x0
  float32x2_t v28; // d9
  float v29; // s10
  float32x2_t v30; // d11
  float v31; // s12
  UnityEngine_Transform_o *v32; // x19
  float v33; // s0
  float v34; // s1
  bool v35; // nf
  float v36; // s0
  float v37; // s2 OVERLAPPED
  unsigned __int64 v38; // d0 OVERLAPPED
  int v39; // s1

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_19;
  v3 = this;
  mNow = eo->fields.mNow;
  v5 = StepFunc__DecSin(mNow, 0LL);
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v3->fields.that;
  if ( !this )
    goto LABEL_19;
  v6 = v5;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
  if ( !this )
    goto LABEL_19;
  v7 = v6;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v9 = UnityEngine_Quaternion__Slerp(v3->fields.qua_from, v3->fields.qua_to, v7, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v9, 0LL);
  that = v3->fields.that;
  if ( !that )
    goto LABEL_19;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__Slerp(
                                        v3->fields.root_qua_from,
                                        v3->fields.root_qua_to,
                                        v7,
                                        0LL);
  if ( !v14 )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(v14, *(UnityEngine_Quaternion_o *)&v15, 0LL);
  v19 = v3->fields.that;
  if ( !v19 )
    goto LABEL_19;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v19->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0LL);
  v20 = fminf(v7, 1.0);
  if ( v7 < 0.0 )
    v20 = 0.0;
  if ( !this )
    goto LABEL_19;
  z = v3->fields.root_pos_from.fields.z;
  v22 = v20 * (float)(v3->fields.root_pos_to.fields.z - z);
  v23 = vadd_f32(
          *(float32x2_t *)&v3->fields.root_pos_from.fields.x,
          vmul_n_f32(
            vsub_f32(
              *(float32x2_t *)&v3->fields.root_pos_to.fields.x,
              *(float32x2_t *)&v3->fields.root_pos_from.fields.x),
            v20)).n64_u64[0];
  v24 = z + v22;
  v25 = HIDWORD(v23);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v23, 0LL);
  v26 = v3->fields.that;
  if ( !v26 )
    goto LABEL_19;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v26->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  v27 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v28.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_from.fields.x;
  v29 = v3->fields.root_scl_from.fields.z;
  v30.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_to.fields.x;
  v31 = v3->fields.root_scl_to.fields.z;
  v32 = v27;
  v33 = StepFunc__Acc5(mNow, 0LL);
  v34 = fminf(v33, 1.0);
  v35 = v33 < 0.0;
  v36 = 0.0;
  if ( !v35 )
    v36 = v34;
  if ( !v32 )
LABEL_19:
    sub_1BCAA3C(this, method);
  v37 = v29 + (float)((float)(v31 - v29) * v36);
  v38 = vadd_f32(v28, vmul_n_f32(vsub_f32(v30, v28), v36)).n64_u64[0];
  v39 = HIDWORD(v38);
  UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)(&v37 - 2), 0LL);
}


void __fastcall EarthCore_StateZoomIn___c__DisplayClass3_0___begin_b__1(
        EarthCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *that; // x0
  struct EarthCore_o *v5; // x8
  struct EarthCore_o *v6; // x8
  struct EarthCore_o *v7; // x8
  __int64 v8; // x2
  TerminalPramsManager_c *v9; // x0

  if ( (byte_4B12D5E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12D5E = 1;
  }
  that = (UnityEngine_Component_o *)this->fields.that;
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(that, 0LL);
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_25;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.qua_to, 0LL);
  v5 = this->fields.that;
  if ( !v5 )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)v5->fields.mEarthRoot;
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_25;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.root_qua_to, 0LL);
  v6 = this->fields.that;
  if ( !v6 )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)v6->fields.mEarthRoot;
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)that, this->fields.root_pos_to, 0LL);
  v7 = this->fields.that;
  if ( !v7 )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)v7->fields.mEarthRoot;
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)that, this->fields.root_scl_to, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DCF )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v8);
    byte_4B12DCF = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->_IsAutoResume_k__BackingField )
  {
    that = (UnityEngine_Component_o *)this->fields.__4__this;
    if ( that )
    {
      EarthCore_StateZoomIn__GoNext((EarthCore_StateZoomIn_o *)that, method);
      return;
    }
LABEL_25:
    sub_1BCAA3C(that, method);
  }
}


void __fastcall EarthCore_StateZoomOut___ctor(EarthCore_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EarthCore_StateZoomOut__GoNext(EarthCore_StateZoomOut_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  EarthCore_o *mThat; // x0
  struct EarthCore_o *v7; // x8

  if ( (byte_4B12D60 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method, v2);
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, v4, v5);
    byte_4B12D60 = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, v2), (v7 = this->fields.mThat) == 0LL)
    || (mThat = (EarthCore_o *)v7->fields.mTerminalMap) == 0LL
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0LL)) == 0LL )
  {
    sub_1BCAA3C(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_64415908(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/,
    0LL);
}


void __fastcall EarthCore_StateZoomOut__begin(
        EarthCore_StateZoomOut_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x19
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_Component_o **v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct EarthCore_o *v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  float IntpTime_AutoResume; // s0
  TerminalSceneComponent_o *monitor; // x22
  EarthCore_StateZoomOut___c_c *v52; // x0
  float v53; // s8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v55; // x24
  struct EarthCore_StateZoomOut___c_StaticFields *static_fields; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  UnityEngine_Object_o *v63; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x8
  __int64 v73; // x8
  __int64 v74; // x8
  int v75; // w20
  struct EarthCore_StaticFields *v76; // x8
  __int64 v77; // x9
  __int64 v78; // x8
  UnityEngine_GameObject_o *v79; // x0
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x8
  float v83; // s0
  EasingObject_o *v84; // x20
  System_Action_o *v85; // x21
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Action_o *v89; // x22
  float z; // [xsp+8h] [xbp-58h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12D5F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&EarthCore_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_EarthCore_StateZoomOut___c__begin_b__1_0__, v14, v15);
    sub_1BCA7E0(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, v16, v17);
    sub_1BCA7E0(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, v18, v19);
    sub_1BCA7E0(&EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, v20, v21);
    sub_1BCA7E0(&EarthCore_StateZoomOut___c_TypeInfo, v22, v23);
    byte_4B12D5F = 1;
  }
  v24 = sub_1BCAA2C(EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_39;
  *(_QWORD *)(v24 + 24) = that;
  v33 = (UnityEngine_Component_o **)(v24 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)that, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 144) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 144), (int64_t)this, v34, v35, v36, v37, v38, v39);
  v40 = *(struct EarthCore_o **)(v24 + 24);
  this->fields.mThat = v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v47);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*v33 )
    goto LABEL_39;
  monitor = (TerminalSceneComponent_o *)(*v33)[2].monitor;
  if ( !monitor )
    goto LABEL_39;
  monitor->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
  monitor->fields._IsPassEarthCore_k__BackingField = 1;
  v52 = EarthCore_StateZoomOut___c_TypeInfo;
  v53 = IntpTime_AutoResume;
  if ( !EarthCore_StateZoomOut___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EarthCore_StateZoomOut___c_TypeInfo, v26);
    v52 = EarthCore_StateZoomOut___c_TypeInfo;
  }
  _9__1_0 = v52->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52, v26);
      v52 = EarthCore_StateZoomOut___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v52->static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v48, v49);
    System_Action___ctor(_9__1_0, v55, Method_EarthCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    static_fields = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = _9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v57, v58, v59, v60, v61, v62);
  }
  TerminalSceneComponent__Fadein_WorldDisp_42930316(monitor, 0.4, _9__1_0, 0LL);
  if ( !*v33 )
    goto LABEL_39;
  v63 = (UnityEngine_Object_o *)(*v33)[3].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Equality(v63, 0LL, 0LL) )
  {
    EarthCore_StateZoomOut__GoNext(this, v26);
    return;
  }
  transform = *v33;
  if ( !*v33 )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v24 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)Component_object, v66, v67, v68, v69, v70, v71);
  transform = *(UnityEngine_Component_o **)(v24 + 24);
  if ( !transform )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_39;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v72 = *(_QWORD *)(v24 + 24);
  *(UnityEngine_Quaternion_o *)(v24 + 48) = rotation;
  if ( !v72 )
    goto LABEL_39;
  *(_OWORD *)(v24 + 32) = *(_OWORD *)(v72 + 112);
  transform = *(UnityEngine_Component_o **)(v72 + 32);
  if ( !transform )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_39;
  v94 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v73 = *(_QWORD *)(v24 + 24);
  *(UnityEngine_Quaternion_o *)(v24 + 80) = v94;
  if ( !v73 )
    goto LABEL_39;
  *(_OWORD *)(v24 + 64) = *(_OWORD *)(v73 + 96);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v73 + 32), 0LL);
  v74 = *(_QWORD *)(v24 + 24);
  *(UnityEngine_Vector3_o *)(v24 + 108) = LocalPosition;
  if ( !v74 )
    goto LABEL_39;
  v75 = *(unsigned __int8 *)(v74 + 144);
  transform = (UnityEngine_Component_o *)EarthCore_TypeInfo;
  if ( !EarthCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo, v26);
  v76 = EarthCore_TypeInfo->static_fields;
  if ( !v75 )
    v76 = (struct EarthCore_StaticFields *)((char *)v76 + 12);
  v77 = *(_QWORD *)&v76->FOCUS_IN_POS.fields.x;
  z = v76->FOCUS_IN_POS.fields.z;
  v78 = *(_QWORD *)(v24 + 24);
  *(float *)(v24 + 104) = z;
  *(_QWORD *)(v24 + 96) = v77;
  if ( !v78 )
    goto LABEL_39;
  transform = *(UnityEngine_Component_o **)(v78 + 32);
  if ( !transform )
    goto LABEL_39;
  v79 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v79, 0LL);
  v82 = *(_QWORD *)(v24 + 24);
  *(UnityEngine_Vector3_o *)(v24 + 132) = LocalScale;
  if ( !v82 )
    goto LABEL_39;
  v83 = 0.95;
  if ( *(_BYTE *)(v82 + 144) )
    v83 = 1.0;
  *(float *)(v24 + 120) = v83;
  *(float *)(v24 + 124) = v83;
  *(float *)(v24 + 128) = v83;
  v84 = *(EasingObject_o **)(v24 + 16);
  v85 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v80, v81);
  System_Action___ctor(v85, (Il2CppObject *)v24, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, 0LL);
  v89 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v86, v87, v88);
  System_Action___ctor(v89, (Il2CppObject *)v24, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, 0LL);
  if ( !v84 )
LABEL_39:
    sub_1BCAA3C(transform, v26);
  EasingObject__Play_47132496(v84, 1.0, 0.0, v53, v85, v89, 0.0, 3, 0LL);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12D61 & 1) == 0 )
  {
    sub_1BCA7E0(&EarthCore_StateZoomOut___c_TypeInfo, v1, v2);
    byte_4B12D61 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EarthCore_StateZoomOut___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EarthCore_StateZoomOut___c_TypeInfo->static_fields->__9 = (struct EarthCore_StateZoomOut___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EarthCore_StateZoomOut___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  double mNow; // d8
  double v5; // d0
  double v6; // d9
  float v7; // s9
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  struct EarthCore_o *that; // x8
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  struct EarthCore_o *v19; // x8
  float v20; // s0
  float z; // s2
  float v22; // s3
  unsigned __int64 v23; // d0 OVERLAPPED
  float v24; // s2
  int v25; // s1
  struct EarthCore_o *v26; // x8
  UnityEngine_Transform_o *v27; // x0
  float32x2_t v28; // d9
  float v29; // s10
  float32x2_t v30; // d11
  float v31; // s12
  UnityEngine_Transform_o *v32; // x19
  float v33; // s0
  float v34; // s1
  bool v35; // nf
  float v36; // s0
  float v37; // s2 OVERLAPPED
  unsigned __int64 v38; // d0 OVERLAPPED
  int v39; // s1

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_19;
  v3 = this;
  mNow = eo->fields.mNow;
  v5 = StepFunc__DecSin(mNow, 0LL);
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v3->fields.that;
  if ( !this )
    goto LABEL_19;
  v6 = v5;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
  if ( !this )
    goto LABEL_19;
  v7 = v6;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v9 = UnityEngine_Quaternion__Slerp(v3->fields.qua_to, v3->fields.qua_from, v7, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v9, 0LL);
  that = v3->fields.that;
  if ( !that )
    goto LABEL_19;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__Slerp(
                                        v3->fields.root_qua_to,
                                        v3->fields.root_qua_from,
                                        v7,
                                        0LL);
  if ( !v14 )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(v14, *(UnityEngine_Quaternion_o *)&v15, 0LL);
  v19 = v3->fields.that;
  if ( !v19 )
    goto LABEL_19;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v19->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
  v20 = fminf(v7, 1.0);
  if ( v7 < 0.0 )
    v20 = 0.0;
  if ( !this )
    goto LABEL_19;
  z = v3->fields.root_pos_to.fields.z;
  v22 = v20 * (float)(v3->fields.root_pos_from.fields.z - z);
  v23 = vadd_f32(
          *(float32x2_t *)&v3->fields.root_pos_to.fields.x,
          vmul_n_f32(
            vsub_f32(
              *(float32x2_t *)&v3->fields.root_pos_from.fields.x,
              *(float32x2_t *)&v3->fields.root_pos_to.fields.x),
            v20)).n64_u64[0];
  v24 = z + v22;
  v25 = HIDWORD(v23);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v23, 0LL);
  v26 = v3->fields.that;
  if ( !v26 )
    goto LABEL_19;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v26->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  v27 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v28.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_to.fields.x;
  v29 = v3->fields.root_scl_to.fields.z;
  v30.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_from.fields.x;
  v31 = v3->fields.root_scl_from.fields.z;
  v32 = v27;
  v33 = StepFunc__Acc5(mNow, 0LL);
  v34 = fminf(v33, 1.0);
  v35 = v33 < 0.0;
  v36 = 0.0;
  if ( !v35 )
    v36 = v34;
  if ( !v32 )
LABEL_19:
    sub_1BCAA3C(this, method);
  v37 = v29 + (float)((float)(v31 - v29) * v36);
  v38 = vadd_f32(v28, vmul_n_f32(vsub_f32(v30, v28), v36)).n64_u64[0];
  v39 = HIDWORD(v38);
  UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)(&v37 - 2), 0LL);
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
    sub_1BCAA3C(that, method);
  }
  EarthCore_StateZoomOut__GoNext((EarthCore_StateZoomOut_o *)that, method);
}