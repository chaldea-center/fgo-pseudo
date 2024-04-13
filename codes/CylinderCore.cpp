void __fastcall CylinderCore___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CylinderCore_c *v4; // x8
  struct CylinderCore_StaticFields *static_fields; // x9
  struct CylinderCore_StaticFields *v6; // x9
  struct CylinderCore_StaticFields *v7; // x8

  if ( (byte_42EA31F & 1) == 0 )
  {
    sub_B5D5C4(&CylinderCore_TypeInfo, v1, v2, v3);
    byte_42EA31F = 1;
  }
  CylinderCore_TypeInfo->static_fields->BASE_ROT_X = -32.733;
  CylinderCore_TypeInfo->static_fields->BASE_ROT_Z = 5.897;
  v4 = CylinderCore_TypeInfo;
  static_fields = CylinderCore_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x = 0xC3200000C30C0000LL;
  static_fields->FOCUS_IN_POS.fields.z = 5.0;
  v6 = v4->static_fields;
  *(_QWORD *)&v6->FOCUS_OUT_POS.fields.x = 0xC3340000C3290000LL;
  v6->FOCUS_OUT_POS.fields.z = 94.0;
  v7 = v4->static_fields;
  *(_QWORD *)&v7->ZOOM_IN_POS.fields.x = 0xC337000000000000LL;
  v7->ZOOM_IN_POS.fields.z = -624.0;
}


void __fastcall CylinderCore___ctor(CylinderCore_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CylinderCore_StateMain_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42EA31E & 1) == 0 )
  {
    sub_B5D5C4(&CylinderCore_StateMain_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA31E = 1;
  }
  v5 = (CylinderCore_StateMain_o *)sub_B5D694(CylinderCore_StateMain_TypeInfo);
  CylinderCore_StateMain___ctor(v5, 0LL);
  this->fields.mStateMain = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mStateMain,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BaseCore___ctor((BaseCore_o *)this, 0LL);
}


void __fastcall CylinderCore__Awake(CylinderCore_o *this, const MethodInfo *method)
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
  struct CStateManager_CylinderCore__o *mFSM; // x8
  struct CStateManager_CylinderCore__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct CStateManager_CylinderCore__o *v32; // x21
  CylinderCore_StateNone_o *v33; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *mEarthRoot; // x0
  __int64 v35; // x1
  struct CStateManager_CylinderCore__o *v36; // x21
  CylinderCore_StateZoomIn_o *v37; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v38; // x20
  CylinderCore_StateZoomOut_o *v39; // x21
  const MethodInfo *v40; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_MeshRenderer_o *Component_srcLineSprite; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  CylinderCore_c *klass; // x8
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EA319 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_CylinderCore___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_CylinderCore__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_CylinderCore__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v11, v12, v13);
    sub_B5D5C4(&CylinderCore_StateNone_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CylinderCore_StateZoomIn_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CylinderCore_StateZoomOut_TypeInfo, v20, v21, v22);
    byte_42EA319 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 1;
  if ( !mFSM )
  {
    v25 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_CylinderCore__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v25,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2BB2630 *)Method_CStateManager_CylinderCore___ctor__);
    this->fields.mFSM = (struct CStateManager_CylinderCore__o *)v25;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    v32 = this->fields.mFSM;
    v33 = (CylinderCore_StateNone_o *)sub_B5D694(CylinderCore_StateNone_TypeInfo);
    CylinderCore_StateNone___ctor(v33, 0LL);
    if ( !v32 )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v32,
      0,
      (IState_T__o *)v33,
      (const MethodInfo_2BB26FC *)Method_CStateManager_CylinderCore__add__);
    mEarthRoot = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      mEarthRoot,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_2BB26FC *)Method_CStateManager_CylinderCore__add__);
    v36 = this->fields.mFSM;
    v37 = (CylinderCore_StateZoomIn_o *)sub_B5D694(CylinderCore_StateZoomIn_TypeInfo);
    CylinderCore_StateZoomIn___ctor(v37, 0LL);
    if ( !v36
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)v36,
            2,
            (IState_T__o *)v37,
            (const MethodInfo_2BB26FC *)Method_CStateManager_CylinderCore__add__),
          v38 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v39 = (CylinderCore_StateZoomOut_o *)sub_B5D694(CylinderCore_StateZoomOut_TypeInfo),
          CylinderCore_StateZoomOut___ctor(v39, 0LL),
          !v38) )
    {
LABEL_13:
      sub_B5D69C(mEarthRoot, v35);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v38,
      3,
      (IState_T__o *)v39,
      (const MethodInfo_2BB26FC *)Method_CStateManager_CylinderCore__add__);
    CylinderCore__SetState(this, 0, v40);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_32432652(gameObject, 1.0, 0LL);
  mEarthRoot = (CStateManager_QAASpotStateController_IMapSpot__o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
  if ( !mEarthRoot )
    goto LABEL_13;
  Component_srcLineSprite = (struct UnityEngine_MeshRenderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)mEarthRoot,
                                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  this->fields.mMeshRenderer = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mMeshRenderer,
    (System_Int32_array **)Component_srcLineSprite,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
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


void __fastcall CylinderCore__FocusInOut(CylinderCore_o *this, bool isFocusIn, bool isForce, const MethodInfo *method)
{
  char v7; // w1
  char v8; // w2
  __int64 v9; // x3
  char v10; // w1
  char v11; // w2
  __int64 v12; // x3
  CylinderCore_c *v13; // x0
  struct CylinderCore_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct CylinderCore_StaticFields *v18; // x10
  float v19; // w8
  float v20; // w9
  float v21; // w10
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct TransitionCalculator_Vector3__o **p_focusInOutPositionCalculator; // x0
  System_Int32_array **v29; // x1
  float v30; // s8
  System_Func_Vector3__Vector3__float__Vector3__o *v31; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v35; // s9
  float v36; // s10
  float v37; // s14
  TransitionCalculator_Vector3__o *v38; // x0
  struct TransitionCalculator_Vector3__o *v39; // x21
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42EA318 & 1) == 0 )
  {
    sub_B5D5C4(&CylinderCore_TypeInfo, isFocusIn, isForce, method);
    sub_B5D5C4(&Method_TransitionCalculator_Vector3___ctor__, v7, v8, v9);
    sub_B5D5C4(&TransitionCalculator_Vector3__TypeInfo, v10, v11, v12);
    byte_42EA318 = 1;
  }
  this->fields.mIsFocusIn = isFocusIn;
  v13 = CylinderCore_TypeInfo;
  if ( isFocusIn )
  {
    if ( (WORD1(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CylinderCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
      v13 = CylinderCore_TypeInfo;
    }
    static_fields = v13->static_fields;
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
      v13 = CylinderCore_TypeInfo;
    }
    v18 = v13->static_fields;
    p_x = &v18->FOCUS_OUT_POS.fields.x;
    p_y = &v18->FOCUS_OUT_POS.fields.y;
    p_z = &v18->FOCUS_OUT_POS.fields.z;
  }
  v19 = *p_x;
  v20 = *p_y;
  v21 = *p_z;
  this->fields.mFocusTgtPos.fields.x = v19;
  this->fields.mFocusTgtPos.fields.y = v20;
  this->fields.mFocusTgtPos.fields.z = v21;
  if ( isForce )
  {
    v40.fields.z = v21;
    v40.fields.y = v20;
    v40.fields.x = v19;
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, v40, 0LL);
    this->fields.focusInOutPositionCalculator = 0LL;
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    v29 = 0LL;
  }
  else
  {
    v30 = ChangedFPSUtil__CovertFrameNumToSecond(12, 0LL);
    v31 = ExtraEasing__AsymptoticSeriesVector3(0.35, 12.0, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0LL);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v35 = LocalPosition.fields.x;
    v36 = LocalPosition.fields.y;
    v37 = LocalPosition.fields.z;
    v38 = (TransitionCalculator_Vector3__o *)sub_B5D694(TransitionCalculator_Vector3__TypeInfo);
    v42.fields.x = v35;
    v42.fields.y = v36;
    v42.fields.z = v37;
    v43.fields.x = x;
    v43.fields.y = y;
    v43.fields.z = z;
    v39 = v38;
    TransitionCalculator_Vector3____ctor(
      v38,
      v42,
      v43,
      v30,
      (System_Func_T__T__float__T__o *)v31,
      (const MethodInfo_264E608 *)Method_TransitionCalculator_Vector3___ctor__);
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    this->fields.focusInOutPositionCalculator = v39;
    v29 = (System_Int32_array **)v39;
  }
  sub_B5D560((BattleServantConfConponent_o *)p_focusInOutPositionCalculator, v29, v22, v23, v24, v25, v26, v27);
}


int32_t __fastcall CylinderCore__GetState(CylinderCore_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CylinderCore_o *v4; // x19
  struct CStateManager_CylinderCore__o *mFSM; // x8

  v4 = this;
  if ( (byte_42EA31C & 1) == 0 )
  {
    this = (CylinderCore_o *)sub_B5D5C4(&Method_CStateManager_CylinderCore__getState__, (_DWORD)method, v2, v3);
    byte_42EA31C = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall CylinderCore__OnPress(CylinderCore_o *this, const MethodInfo *method)
{
  struct CylinderCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_B5D69C(this, method);
  mStateMain->fields._InertialSpdOld_k__BackingField = mStateMain->fields.mInertialSpd;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B5D69C(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore__SetState(CylinderCore_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_CylinderCore__o *mFSM; // x0

  if ( (byte_42EA31D & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_CylinderCore__setState__, state, (_DWORD)method, v3);
    byte_42EA31D = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_CylinderCore__setState__);
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
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  __int64 v31; // x1
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v34; // w20
  float v35; // s9
  float v36; // s11
  _BOOL8 v37; // x0
  __int64 v38; // x1
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v41; // x23
  int32_t warId; // w21
  _BOOL4 IsEvent; // w0
  __int64 mCoreType; // x28
  System_Single_array_array *PrioredCoordinates; // x0
  int max_length; // w8
  System_Single_array *v47; // x8
  float v48; // s8
  float v49; // s13
  bool IsWarOpen; // w22
  BaseEarthPoint_o *EarthPoint; // x0
  UnityEngine_Object_o *v52; // x23
  __int64 v53; // x9
  _BOOL8 v54; // x0
  __int64 v55; // x1
  __int128 v56; // q1
  float v57; // s11
  float v58; // s8
  float v59; // s0
  __int128 v60; // q14
  __int128 v61; // q10
  __int128 v62; // q12
  float v63; // s9
  float v64; // s0
  float v65; // s1
  __int128 v66; // q13
  Il2CppObject *EarthPoint_object; // x0
  __int64 v68; // x1
  __int128 v69; // q0
  UnityEngine_GameObject_o *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x0
  float v73; // [xsp+0h] [xbp-D0h]
  float v74; // [xsp+4h] [xbp-CCh]
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+20h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA31B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BaseCore_CreateEarthPoint_CylinderPoint___, (_DWORD)warInfoList, isFocusIn, method);
    sub_B5D5C4(&CylinderPoint_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_8453/*"LAST_WAR_ID"*/, v28, v29, v30);
    byte_42EA31B = 1;
  }
  memset(&v76, 0, sizeof(v76));
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
        mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8453/*"LAST_WAR_ID"*/, 0LL),
        !warInfoList) )
  {
    sub_B5D69C(mEarthRoot, v31);
  }
  v34 = (int)mEarthRoot;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v75,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v35 = 192.0;
  LODWORD(v6) = 1016003125;
  LODWORD(v5) = 1125056512;
  v76 = v75;
  LODWORD(v4) = 1119092736;
  v36 = -90.0;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v76,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v37 )
      break;
    current = (MapControl_WarInfo_o *)v76.fields.current;
    if ( !v76.fields.current )
      sub_B5D69C(v37, v38);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v76.fields.current, 0LL);
    v41 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0LL) && !WarEntity__IsDisplayEarthPointWithoutMap(v41, 0LL) )
        goto LABEL_19;
      IsEvent = WarEntity__IsEvent(v41, 0LL);
      if ( warId <= v34 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v41, 0LL);
        if ( !PrioredCoordinates )
          goto LABEL_19;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_19;
        if ( (unsigned int)mCoreType >= max_length )
        {
          v72 = sub_B5D6C8(PrioredCoordinates);
          sub_B5D668(v72, 0LL);
        }
        v47 = PrioredCoordinates->m_Items[mCoreType];
        if ( v47 && (int)v47->max_length >= 2 )
        {
          v49 = v47->m_Items[1];
          v48 = v47->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          v52 = (UnityEngine_Object_o *)EarthPoint;
          if ( EarthPoint )
          {
            v53 = *(&CylinderPoint_TypeInfo->_2.bitflags2 + 1);
            if ( *(&EarthPoint->klass->_2.bitflags2 + 1) < (unsigned int)v53
              || (CylinderPoint_c *)EarthPoint->klass->_2.typeHierarchy[v53 - 1] != CylinderPoint_TypeInfo )
            {
              v70 = (UnityEngine_GameObject_o *)sub_B5D990(EarthPoint);
LABEL_40:
              sub_B5D69C(v70, v71);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v54 = UnityEngine_Object__op_Equality(v52, 0LL, 0LL);
          if ( v54 )
          {
            v56 = v6;
            v73 = v36;
            v74 = v35;
            v57 = (float)(v48 + v35) + v36;
            v58 = v57 * *(float *)&v6;
            v59 = v57 * *(float *)&v6;
            v60 = v4;
            v61 = v5;
            v62 = v56;
            v63 = cosf(v59);
            v64 = sinf(v58);
            v65 = v49 / *(float *)&v60;
            v66 = v61;
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  v63 * *(float *)&v61,
                                  v65 * 120.0,
                                  v64 * *(float *)&v61,
                                  (const MethodInfo_1AD5BEC *)Method_BaseCore_CreateEarthPoint_CylinderPoint___);
            if ( !EarthPoint_object )
              sub_B5D69C(0LL, v68);
            *((float *)&EarthPoint_object[6].monitor + 1) = v57;
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
            v36 = v73;
            v35 = v74;
            v69 = v62;
            v4 = v60;
            v5 = v66;
            v6 = v69;
          }
          else
          {
            if ( !v52 )
              sub_B5D69C(v54, v55);
            v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v52, 0LL);
            if ( !v70 )
              goto LABEL_40;
            UnityEngine_GameObject__SetActive(v70, IsWarOpen, 0LL);
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
    &v76,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall CylinderCore__Update(CylinderCore_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_CylinderCore__o *mFSM; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42EA31A & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_CylinderCore__update__, (_DWORD)method, v2, v3);
    byte_42EA31A = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_CylinderCore__update__);
  if ( this->fields.mIsReqZoomIn && CylinderCore__GetState(this, method) == 1 )
  {
    BaseCore__EndSlideServant((BaseCore_o *)this, 0LL);
    this->fields.mIsReqZoomIn = 0;
    CylinderCore__SetState(this, 2, v6);
  }
}


CylinderPoint_o *__fastcall CylinderCore__get_mFocusCylinderPoint(CylinderCore_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct BaseEarthPoint_o *mFocusEarthPoint; // x8
  __int64 v6; // x11

  if ( (byte_42EA317 & 1) == 0 )
  {
    sub_B5D5C4(&CylinderPoint_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA317 = 1;
  }
  mFocusEarthPoint = this->fields.mFocusEarthPoint;
  if ( !mFocusEarthPoint )
    return 0LL;
  v6 = *(&CylinderPoint_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mFocusEarthPoint->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (CylinderPoint_c *)mFocusEarthPoint->klass->_2.typeHierarchy[v6 - 1] == CylinderPoint_TypeInfo )
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
  __int64 v3; // x3
  CylinderCore_StateMain_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  float *p_fields; // x20
  float mInertialSpd; // t1
  float v17; // s8
  float v18; // s0
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  CTouch_c *v22; // x0
  float x; // s8
  float v24; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  float v26; // s8
  UnityEngine_GameObject_o *v27; // x20
  float AutoRotationSpeed; // s0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  CylinderCore_c *v30; // x0
  float *p_BASE_ROT_X; // x8
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  bool v33; // w8
  UnityEngine_GameObject_o *v34; // x20
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42E6D4D & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&CylinderCore_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_TransitionCalculator_Vector3__IsFinished__, v9, v10, v11);
    this = (CylinderCore_StateMain_o *)sub_B5D5C4(&Method_TransitionCalculator_Vector3__Update__, v12, v13, v14);
    byte_42E6D4D = 1;
  }
  if ( !that )
    goto LABEL_39;
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    v5->fields.mInertialSpd = 0.0;
    p_fields = (float *)&v5->fields;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__isDrag(0LL) )
    {
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_42E658F )
      {
        sub_B5D5C4(&CTouch_TypeInfo, v19, v20, v21);
        byte_42E658F = 1;
      }
      v22 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v22 = CTouch_TypeInfo;
      }
      x = v22->static_fields->mScrPosDelta.fields.x;
      if ( !byte_42E6590 )
      {
        sub_B5D5C4(&CTouch_TypeInfo, v19, v20, v21);
        v22 = CTouch_TypeInfo;
        byte_42E6590 = 1;
      }
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = CTouch_TypeInfo;
      }
      v24 = v22->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v24) )
        v24 = x;
      *p_fields = v24 * -0.2;
    }
  }
  else
  {
    mInertialSpd = v5->fields.mInertialSpd;
    p_fields = (float *)&v5->fields;
    if ( !UnityEngine_Mathf__Approximately(mInertialSpd, 0.0, 0LL) )
    {
      v17 = *p_fields;
      v18 = v17 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      *p_fields = v18;
      if ( fabsf(v18) < 0.004 )
        *p_fields = 0.0;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v26 = *p_fields;
  v27 = gameObject;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0LL);
  GameObjectExtensions__AddLocalEulerAngleY(v27, v26 + AutoRotationSpeed, 0LL);
  mEarthRoot = that->fields.mEarthRoot;
  v30 = CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    v30 = CylinderCore_TypeInfo;
  }
  p_BASE_ROT_X = &v30->static_fields->BASE_ROT_X;
  v35.fields.y = 0.0;
  v35.fields.x = *p_BASE_ROT_X;
  v35.fields.z = p_BASE_ROT_X[1];
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v35, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator
    && !TransitionCalculator_Vector3___IsFinished(
          focusInOutPositionCalculator,
          (const MethodInfo_264E77C *)Method_TransitionCalculator_Vector3__IsFinished__) )
  {
    this = (CylinderCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
    if ( this )
    {
      v34 = that->fields.mEarthRoot;
      v36 = TransitionCalculator_Vector3___Update(
              (TransitionCalculator_Vector3__o *)this,
              (const MethodInfo_264E6C4 *)Method_TransitionCalculator_Vector3__Update__);
      GameObjectExtensions__SetLocalPosition(v34, v36, 0LL);
      v33 = 1;
      goto LABEL_38;
    }
LABEL_39:
    sub_B5D69C(this, that);
  }
  GameObjectExtensions__SetLocalPosition(that->fields.mEarthRoot, that->fields.mFocusTgtPos, 0LL);
  v33 = 0;
LABEL_38:
  that->fields.mIsFocusMoving = v33;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CylinderCore_o *mCore; // x0
  struct CylinderCore_o *v9; // x8

  if ( (byte_42E6D50 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, v5, v6, v7);
    byte_42E6D50 = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, 0LL), (v9 = this->fields.mCore) == 0LL)
    || (mCore = (CylinderCore_o *)v9->fields.mTerminalMap) == 0LL
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0LL)) == 0LL )
  {
    sub_B5D69C(mCore, method);
  }
  HutongGames_PlayMaker_Fsm__Event_14925220(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore_StateZoomIn__begin(
        CylinderCore_StateZoomIn_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x20
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_Component_o **v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct CylinderCore_o *v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  float IntpTime_AutoResume; // s0
  struct CylinderCore_o *mCore; // x8
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  int v62; // w2
  __int64 v63; // x3
  TerminalPramsManager_c *v64; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x8
  __int64 v74; // x9
  __int64 v75; // x8
  __int64 v76; // d0
  float v77; // s9
  float v78; // s1
  float v79; // s3
  EasingObject_o *v80; // x21
  float mSpdTime; // s8
  System_Action_o *v82; // x22
  System_Action_o *v83; // x23
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  TerminalPramsManager_c *v87; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v89; // x21
  float v90; // [xsp+0h] [xbp-50h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6D4E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&CylinderCore_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&SeManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&Method_CylinderCore_StateZoomIn_GoNext__, v21, v22, v23);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, v27, v28, v29);
    sub_B5D5C4(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, v30, v31, v32);
    sub_B5D5C4(&CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, v33, v34, v35);
    byte_42E6D4E = 1;
  }
  v36 = sub_B5D694(CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
  CylinderCore_StateZoomIn___c__DisplayClass3_0___ctor((CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_65;
  *(_QWORD *)(v36 + 48) = that;
  v45 = (UnityEngine_Component_o **)(v36 + 48);
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 48), (System_Int32_array **)that, v39, v40, v41, v42, v43, v44);
  *(_QWORD *)(v36 + 88) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 88), (System_Int32_array **)this, v46, v47, v48, v49, v50, v51);
  v52 = *(struct CylinderCore_o **)(v36 + 48);
  this->fields.mCore = v52;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
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
    if ( !byte_42E4B48 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v38, v62, v63);
      byte_42E4B48 = 1;
    }
    v64 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v64 = TerminalPramsManager_TypeInfo;
    }
    if ( v64->static_fields->_IsAutoResume_k__BackingField )
    {
      CylinderCore_StateZoomIn__GoNext(this, v38);
      return;
    }
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(23, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v89 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v89, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 2, 0.4, v89, 0LL);
      return;
    }
LABEL_65:
    sub_B5D69C(transform, v38);
  }
  transform = *v45;
  if ( !*v45 )
    goto LABEL_65;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v36 + 16) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), Component_UIWidget, v67, v68, v69, v70, v71, v72);
  v73 = *(_QWORD *)(v36 + 48);
  if ( !v73 )
    goto LABEL_65;
  transform = *(UnityEngine_Component_o **)(v73 + 24);
  if ( !transform )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_65;
  *(UnityEngine_Vector3_o *)(v36 + 24) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  }
  v74 = *(_QWORD *)&transform[7].fields.m_CachedPtr;
  v75 = *(_QWORD *)(v36 + 48);
  v76 = *(_QWORD *)(v74 + 36);
  *(_DWORD *)(v36 + 36) = *(_DWORD *)(v74 + 32);
  *(_QWORD *)(v36 + 40) = v76;
  if ( !v75 )
    goto LABEL_65;
  transform = *(UnityEngine_Component_o **)(v75 + 72);
  v90 = *(float *)&v76;
  if ( !transform )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_65;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = *(UnityEngine_Component_o **)(v36 + 48);
  *(float *)(v36 + 40) = v90 - localPosition.fields.y;
  if ( !transform )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)CylinderCore__get_mFocusCylinderPoint((CylinderCore_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_65;
  if ( !*v45 )
    goto LABEL_65;
  v77 = *((float *)&transform[4].monitor + 1);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*v45, 0LL);
  if ( !transform )
    goto LABEL_65;
  *(UnityEngine_Vector3_o *)(&v78 - 1) = UnityEngine_Transform__get_localEulerAngles(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  *(float *)(v36 + 56) = v78;
  *(float *)(v36 + 60) = v77 + 90.0;
  if ( vabds_f32(v78, v77) > 180.0 )
    *(float *)(v36 + 56) = v78 + -360.0;
  if ( !*v45 )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)(*v45)[1].klass;
  if ( !transform )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_65;
  *(UnityEngine_Vector3_o *)(v36 + 64) = UnityEngine_Transform__get_localEulerAngles(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  v79 = *(float *)(v36 + 64);
  *(UnityEngine_Vector3_o *)(v36 + 76) = zero;
  if ( v79 > 180.0 )
  {
    v79 = v79 + -360.0;
    *(float *)(v36 + 64) = v79;
  }
  if ( *(float *)(v36 + 72) > 180.0 )
    *(float *)(v36 + 64) = v79 + -360.0;
  v80 = *(EasingObject_o **)(v36 + 16);
  mSpdTime = this->fields.mSpdTime;
  v82 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v82,
    (Il2CppObject *)v36,
    Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__,
    0LL);
  v83 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v83,
    (Il2CppObject *)v36,
    Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__,
    0LL);
  if ( !v80 )
    goto LABEL_65;
  EasingObject__Play(v80, mSpdTime, v82, v83, 0.0, 0, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B48 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v84, v85, v86);
    byte_42E4B48 = 1;
  }
  v87 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v87 = TerminalPramsManager_TypeInfo;
  }
  if ( !v87->static_fields->_IsAutoResume_k__BackingField )
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  float v11; // s8
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42E6D4F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_CylinderCore_StateZoomIn_GoNext__, v8, v9, v10);
    byte_42E6D4F = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v11 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v11 <= 0.4 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_B5D69C(v14, v15);
      CommonUI__maskFadeout(Instance, 2, v11, v13, 0LL);
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
  v5 = Easing__Func_33951568(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mStartTime, 3, 0LL);
  v6 = Easing__Func_33951568(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mStartTime, 15, 0LL);
  v7 = Easing__Func_33951568(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mStartTime, 1, 0LL);
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
  v15 = Easing__Func_33951568(startRotY, endRotY, v14, 6, 0LL);
  GameObjectExtensions__SetLocalEulerAngleY(v13, v15, 0LL);
  v16 = v4->fields.that;
  if ( !v16 )
LABEL_8:
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  CylinderCore_StateZoomIn___c__DisplayClass3_0_o *v4; // x19
  struct CylinderCore_o *that; // x8
  struct CylinderCore_o *v6; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int v8; // w2
  __int64 v9; // x3
  TerminalPramsManager_c *v10; // x0

  v4 = this;
  if ( (byte_42E6032 & 1) == 0 )
  {
    this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)sub_B5D5C4(
                                                                &TerminalPramsManager_TypeInfo,
                                                                (_DWORD)method,
                                                                v2,
                                                                v3);
    byte_42E6032 = 1;
  }
  that = v4->fields.that;
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
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.endPos, 0LL);
  v6 = v4->fields.that;
  if ( !v6 )
    goto LABEL_22;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v6->fields.mEarthRoot;
  if ( !this )
    goto LABEL_22;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_22;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.endRot, 0LL);
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v4->fields.that;
  if ( !this )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalEulerAngleY(gameObject, v4->fields.endRotY, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B48 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v8, v9);
    byte_42E4B48 = 1;
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
    this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v4->fields.__4__this;
    if ( this )
    {
      CylinderCore_StateZoomIn__GoNext((CylinderCore_StateZoomIn_o *)this, 0LL);
      return;
    }
LABEL_22:
    sub_B5D69C(this, method);
  }
}


void __fastcall CylinderCore_StateZoomOut___ctor(CylinderCore_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateZoomOut__GoNext(CylinderCore_StateZoomOut_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CylinderCore_o *mCore; // x0
  struct CylinderCore_o *v9; // x8

  if ( (byte_42E6D52 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, v5, v6, v7);
    byte_42E6D52 = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, 0LL), (v9 = this->fields.mCore) == 0LL)
    || (mCore = (CylinderCore_o *)v9->fields.mTerminalMap) == 0LL
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0LL)) == 0LL )
  {
    sub_B5D69C(mCore, method);
  }
  HutongGames_PlayMaker_Fsm__Event_14925220(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/,
    0LL);
}


void __fastcall CylinderCore_StateZoomOut__begin(
        CylinderCore_StateZoomOut_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x19
  void *transform; // x0
  const MethodInfo *v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  CylinderCore_o **v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct CylinderCore_o *v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  float IntpTime_AutoResume; // s0
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct TerminalSceneComponent_o *v58; // x8
  TerminalSceneComponent_o *v59; // x22
  float v60; // s8
  struct CylinderCore_StateZoomOut___c_StaticFields *static_fields; // x8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v63; // x24
  struct CylinderCore_StateZoomOut___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // x9
  __int64 v81; // x8
  __int64 v82; // d0
  __int64 v83; // x8
  CylinderCore_c *v84; // x0
  struct CylinderCore_StaticFields *v85; // x10
  _DWORD *p_x; // x8
  int *p_y; // x9
  int *p_z; // x10
  struct CylinderCore_StaticFields *v89; // x10
  int v90; // w9
  int v91; // w10
  CylinderCore_o *v92; // x8
  UnityEngine_GameObject_o *v93; // x20
  CylinderCore_c *v94; // x0
  unsigned int *v95; // x8
  EasingObject_o *v96; // x20
  unsigned int v97; // w9
  System_Action_o *v98; // x21
  System_Action_o *v99; // x22
  float v100; // [xsp+0h] [xbp-50h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6D51 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&CylinderCore_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_CylinderCore_StateZoomOut___c__begin_b__1_0__, v18, v19, v20);
    sub_B5D5C4(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, v21, v22, v23);
    sub_B5D5C4(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, v24, v25, v26);
    sub_B5D5C4(&CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CylinderCore_StateZoomOut___c_TypeInfo, v30, v31, v32);
    byte_42E6D51 = 1;
  }
  v33 = sub_B5D694(CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
  CylinderCore_StateZoomOut___c__DisplayClass1_0___ctor((CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_52;
  *(_QWORD *)(v33 + 48) = that;
  v42 = (CylinderCore_o **)(v33 + 48);
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 48), (System_Int32_array **)that, v36, v37, v38, v39, v40, v41);
  *(_QWORD *)(v33 + 80) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 80), (System_Int32_array **)this, v43, v44, v45, v46, v47, v48);
  v49 = *(struct CylinderCore_o **)(v33 + 48);
  this->fields.mCore = v49;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v49, v50, v51, v52, v53, v54, v55);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0LL);
  if ( !*v42 )
    goto LABEL_52;
  mTerminalScene = (*v42)->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_52;
  mTerminalScene->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
  if ( !*v42 )
    goto LABEL_52;
  v58 = (*v42)->fields.mTerminalScene;
  if ( !v58 )
    goto LABEL_52;
  v58->fields._IsPassCylinderCore_k__BackingField = 1;
  if ( !*v42 )
    goto LABEL_52;
  v59 = (*v42)->fields.mTerminalScene;
  v60 = IntpTime_AutoResume;
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
    v63 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__1_0, v63, Method_CylinderCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    v64 = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
    v64->__9__1_0 = _9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v64->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  if ( !v59 )
    goto LABEL_52;
  TerminalSceneComponent__Fadein_WorldDisp_18307880(v59, 0.4, _9__1_0, 0LL);
  if ( !*v42 )
    goto LABEL_52;
  mFocusEarthPoint = (UnityEngine_Object_o *)(*v42)->fields.mFocusEarthPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mFocusEarthPoint, 0LL, 0LL) )
  {
    CylinderCore_StateZoomOut__GoNext(this, v35);
    return;
  }
  transform = *v42;
  if ( !*v42 )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v33 + 16) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), Component_UIWidget, v74, v75, v76, v77, v78, v79);
  transform = CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    transform = CylinderCore_TypeInfo;
  }
  v80 = *((_QWORD *)transform + 23);
  v81 = *(_QWORD *)(v33 + 48);
  v82 = *(_QWORD *)(v80 + 36);
  *(_DWORD *)(v33 + 24) = *(_DWORD *)(v80 + 32);
  *(_QWORD *)(v33 + 28) = v82;
  if ( !v81 )
    goto LABEL_52;
  transform = *(void **)(v81 + 72);
  v100 = *(float *)&v82;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  v83 = *(_QWORD *)(v33 + 48);
  *(float *)(v33 + 28) = v100 - localPosition.fields.y;
  if ( !v83 )
    goto LABEL_52;
  v84 = CylinderCore_TypeInfo;
  if ( *(_BYTE *)(v83 + 136) )
  {
    if ( (WORD1(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CylinderCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
      v84 = CylinderCore_TypeInfo;
    }
    v85 = v84->static_fields;
    p_x = (_DWORD *)&v85->FOCUS_IN_POS.fields.x;
    p_y = (int *)&v85->FOCUS_IN_POS.fields.y;
    p_z = (int *)&v85->FOCUS_IN_POS.fields.z;
  }
  else
  {
    if ( (WORD1(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CylinderCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
      v84 = CylinderCore_TypeInfo;
    }
    v89 = v84->static_fields;
    p_x = (_DWORD *)&v89->FOCUS_OUT_POS.fields.x;
    p_y = (int *)&v89->FOCUS_OUT_POS.fields.y;
    p_z = (int *)&v89->FOCUS_OUT_POS.fields.z;
  }
  v90 = *p_y;
  v91 = *p_z;
  transform = *(void **)(v33 + 48);
  *(_DWORD *)(v33 + 36) = *p_x;
  *(_DWORD *)(v33 + 40) = v90;
  *(_DWORD *)(v33 + 44) = v91;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  v92 = *v42;
  if ( !*v42 )
    goto LABEL_52;
  v93 = (UnityEngine_GameObject_o *)transform;
  transform = CylinderCore__get_mFocusCylinderPoint(v92, 0LL);
  if ( !transform )
    goto LABEL_52;
  GameObjectExtensions__SetLocalEulerAngleY(v93, *((float *)transform + 27) + 90.0, 0LL);
  *(UnityEngine_Vector3_o *)(v33 + 68) = UnityEngine_Vector3__get_zero(0LL);
  v94 = CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    v94 = CylinderCore_TypeInfo;
  }
  v95 = (unsigned int *)v94->static_fields;
  v96 = *(EasingObject_o **)(v33 + 16);
  v97 = *v95;
  LODWORD(v95) = v95[1];
  *(_QWORD *)(v33 + 56) = v97;
  *(_DWORD *)(v33 + 64) = (_DWORD)v95;
  v98 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v98,
    (Il2CppObject *)v33,
    Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__,
    0LL);
  v99 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v99,
    (Il2CppObject *)v33,
    Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__,
    0LL);
  if ( !v96 )
LABEL_52:
    sub_B5D69C(transform, v35);
  EasingObject__Play(v96, v60, v98, v99, 0.0, 0, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct CylinderCore_StateZoomOut___c_StaticFields *static_fields; // x0

  if ( (byte_42E6033 & 1) == 0 )
  {
    sub_B5D5C4(&CylinderCore_StateZoomOut___c_TypeInfo, v1, v2, v3);
    byte_42E6033 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CylinderCore_StateZoomOut___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CylinderCore_StateZoomOut___c_o *)v4;
  sub_B5D560(static_fields);
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
  v5 = Easing__Func_33951568(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mStartTime, 3, 0LL);
  v6 = Easing__Func_33951568(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mStartTime, 15, 0LL);
  v7 = Easing__Func_33951568(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mStartTime, 2, 0LL);
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
    sub_B5D69C(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20 = Easing__Func_33951568(0.0, 1.0, mStartTime, 5, 0LL);
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
    sub_B5D69C(this, method);
  }
  CylinderCore_StateZoomOut__GoNext((CylinderCore_StateZoomOut_o *)this, 0LL);
}