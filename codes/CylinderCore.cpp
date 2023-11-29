void __fastcall CylinderCore___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  CylinderCore_c *v2; // x8
  struct CylinderCore_StaticFields *static_fields; // x9
  struct CylinderCore_StaticFields *v4; // x9
  struct CylinderCore_StaticFields *v5; // x8

  if ( (byte_40FB3DD & 1) == 0 )
  {
    sub_B16FFC(&CylinderCore_TypeInfo, v1);
    byte_40FB3DD = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  CylinderCore_StateMain_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FB3DC & 1) == 0 )
  {
    sub_B16FFC(&CylinderCore_StateMain_TypeInfo, method);
    byte_40FB3DC = 1;
  }
  v6 = (CylinderCore_StateMain_o *)sub_B170CC(CylinderCore_StateMain_TypeInfo, method, v2, v3, v4);
  CylinderCore_StateMain___ctor(v6, 0LL);
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


void __fastcall CylinderCore__Awake(CylinderCore_o *this, const MethodInfo *method)
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
  struct CStateManager_CylinderCore__o *mFSM; // x8
  CStateManager_QAASpotStateController_IMapSpot__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct CStateManager_CylinderCore__o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  CylinderCore_StateNone_o *v26; // x22
  struct CStateManager_CylinderCore__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  CylinderCore_StateZoomIn_o *v32; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  CylinderCore_StateZoomOut_o *v38; // x21
  const MethodInfo *v39; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v41; // x0
  struct UnityEngine_MeshRenderer_o *Component_srcLineSprite; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  CylinderCore_c *klass; // x8
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB3D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_CylinderCore___ctor__, method);
    sub_B16FFC(&Method_CStateManager_CylinderCore__add__, v6);
    sub_B16FFC(&CStateManager_CylinderCore__TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v8);
    sub_B16FFC(&CylinderCore_StateNone_TypeInfo, v9);
    sub_B16FFC(&CylinderCore_StateZoomIn_TypeInfo, v10);
    sub_B16FFC(&CylinderCore_StateZoomOut_TypeInfo, v11);
    byte_40FB3D7 = 1;
  }
  p_mFSM = (CStateManager_QAASpotStateController_IMapSpot__o **)&this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 1;
  if ( !mFSM )
  {
    v14 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_CylinderCore__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v14,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2907EF0 *)Method_CStateManager_CylinderCore___ctor__);
    this->fields.mFSM = (struct CStateManager_CylinderCore__o *)v14;
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
    v26 = (CylinderCore_StateNone_o *)sub_B170CC(CylinderCore_StateNone_TypeInfo, v22, v23, v24, v25);
    CylinderCore_StateNone___ctor(v26, 0LL);
    if ( !v21 )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v21,
      0,
      (IState_T__o *)v26,
      (const MethodInfo_2907FBC *)Method_CStateManager_CylinderCore__add__);
    if ( !*p_mFSM )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      *p_mFSM,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_2907FBC *)Method_CStateManager_CylinderCore__add__);
    v27 = this->fields.mFSM;
    v32 = (CylinderCore_StateZoomIn_o *)sub_B170CC(CylinderCore_StateZoomIn_TypeInfo, v28, v29, v30, v31);
    CylinderCore_StateZoomIn___ctor(v32, 0LL);
    if ( !v27
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)v27,
            2,
            (IState_T__o *)v32,
            (const MethodInfo_2907FBC *)Method_CStateManager_CylinderCore__add__),
          v33 = *p_mFSM,
          v38 = (CylinderCore_StateZoomOut_o *)sub_B170CC(CylinderCore_StateZoomOut_TypeInfo, v34, v35, v36, v37),
          CylinderCore_StateZoomOut___ctor(v38, 0LL),
          !v33) )
    {
LABEL_13:
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v33,
      3,
      (IState_T__o *)v38,
      (const MethodInfo_2907FBC *)Method_CStateManager_CylinderCore__add__);
    CylinderCore__SetState(this, 0, v39);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_27422124(gameObject, 1.0, 0LL);
  v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v41 )
    goto LABEL_13;
  Component_srcLineSprite = (struct UnityEngine_MeshRenderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v41,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  this->fields.mMeshRenderer = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mMeshRenderer,
    (System_Int32_array **)Component_srcLineSprite,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_13;
  transform = UnityEngine_GameObject__get_transform(mEarthRoot, 0LL);
  if ( !transform )
    goto LABEL_13;
  localRotation = UnityEngine_Transform__get_localRotation(transform, 0LL);
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
  __int64 v36; // x3
  __int64 v37; // x4
  TransitionCalculator_Vector3__o *v38; // x0
  struct TransitionCalculator_Vector3__o *v39; // x21
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FB3D6 & 1) == 0 )
  {
    sub_B16FFC(&CylinderCore_TypeInfo, isFocusIn);
    sub_B16FFC(&Method_TransitionCalculator_Vector3___ctor__, v7);
    sub_B16FFC(&TransitionCalculator_Vector3__TypeInfo, v8);
    byte_40FB3D6 = 1;
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
    v40.fields.z = v17;
    v40.fields.y = v16;
    v40.fields.x = v15;
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, v40, 0LL);
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
    v38 = (TransitionCalculator_Vector3__o *)sub_B170CC(TransitionCalculator_Vector3__TypeInfo, v34, v35, v36, v37);
    v42.fields.x = v31;
    v42.fields.y = v32;
    v42.fields.z = v33;
    v43.fields.x = x;
    v43.fields.y = y;
    v43.fields.z = z;
    v39 = v38;
    TransitionCalculator_Vector3____ctor(
      v38,
      v42,
      v43,
      v26,
      (System_Func_T__T__float__T__o *)v27,
      (const MethodInfo_25331D8 *)Method_TransitionCalculator_Vector3___ctor__);
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    this->fields.focusInOutPositionCalculator = v39;
    v25 = (System_Int32_array **)v39;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_focusInOutPositionCalculator, v25, v18, v19, v20, v21, v22, v23);
}


int32_t __fastcall CylinderCore__GetState(CylinderCore_o *this, const MethodInfo *method)
{
  struct CStateManager_CylinderCore__o *mFSM; // x8

  if ( (byte_40FB3DA & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_CylinderCore__getState__, method);
    byte_40FB3DA = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
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
    sub_B170D4();
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall CylinderCore__OnPress(CylinderCore_o *this, const MethodInfo *method)
{
  struct CylinderCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_B170D4();
  mStateMain->fields._InertialSpdOld_k__BackingField = mStateMain->fields.mInertialSpd;
}


void __fastcall CylinderCore__SetDisp(CylinderCore_o *this, bool is_disp, const MethodInfo *method)
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
void __fastcall CylinderCore__SetState(CylinderCore_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_CylinderCore__o *mFSM; // x0

  if ( (byte_40FB3DB & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_CylinderCore__setState__, *(_QWORD *)&state);
    byte_40FB3DB = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_CylinderCore__setState__);
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t Value; // w0
  int32_t v21; // w20
  float v22; // s9
  float v23; // s11
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v26; // x23
  int32_t warId; // w21
  _BOOL4 IsEvent; // w0
  __int64 mCoreType; // x28
  System_Single_array_array *PrioredCoordinates; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  int max_length; // w8
  System_Single_array *v34; // x8
  float v35; // s8
  float v36; // s13
  bool IsWarOpen; // w22
  BaseEarthPoint_o *EarthPoint; // x0
  UnityEngine_Component_o *v39; // x23
  __int64 v40; // x9
  __int128 v41; // q1
  float v42; // s11
  float v43; // s8
  float v44; // s0
  __int128 v45; // q14
  __int128 v46; // q10
  __int128 v47; // q12
  float v48; // s9
  float v49; // s0
  float v50; // s1
  __int128 v51; // q13
  Il2CppObject *EarthPoint_object; // x0
  __int128 v53; // q0
  UnityEngine_GameObject_o *v54; // x0
  float v55; // [xsp+0h] [xbp-D0h]
  float v56; // [xsp+4h] [xbp-CCh]
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+20h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB3D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_BaseCore_CreateEarthPoint_CylinderPoint___, warInfoList);
    sub_B16FFC(&CylinderPoint_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_8340, v16);
    byte_40FB3D9 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot
    || (transform = UnityEngine_GameObject__get_transform(mEarthRoot, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localRotation(transform, this->fields.mRootQua, 0LL),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        zero = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalEulerAngle(gameObject, zero, 0LL),
        ((void (__fastcall *)(CylinderCore_o *, bool, __int64, Il2CppMethodPointer))this->klass->vtable._4_FocusInOut.method)(
          this,
          isFocusIn,
          1LL,
          this->klass->vtable._5_Awake.methodPtr),
        Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8340, 0LL),
        !warInfoList) )
  {
    sub_B170D4();
  }
  v21 = Value;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v57,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v22 = 192.0;
  LODWORD(v6) = 1016003125;
  LODWORD(v5) = 1125056512;
  v58 = v57;
  LODWORD(v4) = 1119092736;
  v23 = -90.0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v58,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__) )
  {
    current = (MapControl_WarInfo_o *)v58.fields.current;
    if ( !v58.fields.current )
      sub_B170D4();
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v58.fields.current, 0LL);
    v26 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0LL) && !WarEntity__IsDisplayEarthPointWithoutMap(v26, 0LL) )
        goto LABEL_19;
      IsEvent = WarEntity__IsEvent(v26, 0LL);
      if ( warId <= v21 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v26, 0LL);
        if ( !PrioredCoordinates )
          goto LABEL_19;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_19;
        if ( (unsigned int)mCoreType >= max_length )
        {
          sub_B17100(PrioredCoordinates, v31, v32);
          sub_B170A0();
        }
        v34 = PrioredCoordinates->m_Items[mCoreType];
        if ( v34 && (int)v34->max_length >= 2 )
        {
          v36 = v34->m_Items[1];
          v35 = v34->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          v39 = (UnityEngine_Component_o *)EarthPoint;
          if ( EarthPoint )
          {
            v40 = *(&CylinderPoint_TypeInfo->_2.bitflags2 + 1);
            if ( *(&EarthPoint->klass->_2.bitflags2 + 1) < (unsigned int)v40
              || (CylinderPoint_c *)EarthPoint->klass->_2.typeHierarchy[v40 - 1] != CylinderPoint_TypeInfo )
            {
              sub_B173C8(EarthPoint);
LABEL_40:
              sub_B170D4();
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v39, 0LL, 0LL) )
          {
            v41 = v6;
            v55 = v23;
            v56 = v22;
            v42 = (float)(v35 + v22) + v23;
            v43 = v42 * *(float *)&v6;
            v44 = v42 * *(float *)&v6;
            v45 = v4;
            v46 = v5;
            v47 = v41;
            v48 = cosf(v44);
            v49 = sinf(v43);
            v50 = v36 / *(float *)&v45;
            v51 = v46;
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  v48 * *(float *)&v46,
                                  v50 * 120.0,
                                  v49 * *(float *)&v46,
                                  (const MethodInfo_18B4E80 *)Method_BaseCore_CreateEarthPoint_CylinderPoint___);
            if ( !EarthPoint_object )
              sub_B170D4();
            *((float *)&EarthPoint_object[6].monitor + 1) = v42;
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
            v23 = v55;
            v22 = v56;
            v53 = v47;
            v4 = v45;
            v5 = v51;
            v6 = v53;
          }
          else
          {
            if ( !v39 )
              sub_B170D4();
            v54 = UnityEngine_Component__get_gameObject(v39, 0LL);
            if ( !v54 )
              goto LABEL_40;
            UnityEngine_GameObject__SetActive(v54, IsWarOpen, 0LL);
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
    &v58,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall CylinderCore__Update(CylinderCore_o *this, const MethodInfo *method)
{
  struct CStateManager_CylinderCore__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40FB3D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_CylinderCore__update__, method);
    byte_40FB3D8 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_CylinderCore__update__);
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

  if ( (byte_40FB3D5 & 1) == 0 )
  {
    sub_B16FFC(&CylinderPoint_TypeInfo, method);
    byte_40FB3D5 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CylinderCore_StateMain_Fields *p_fields; // x20
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
  TransitionCalculator_Vector3__o *v25; // x0
  UnityEngine_GameObject_o *v26; // x20
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8B18 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, that);
    sub_B16FFC(&CylinderCore_TypeInfo, v5);
    sub_B16FFC(&Method_TransitionCalculator_Vector3__IsFinished__, v6);
    sub_B16FFC(&Method_TransitionCalculator_Vector3__Update__, v7);
    byte_40F8B18 = 1;
  }
  if ( !that )
    goto LABEL_39;
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    this->fields.mInertialSpd = 0.0;
    p_fields = &this->fields;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__isDrag(0LL) )
    {
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_40F8BA0 )
      {
        sub_B16FFC(&CTouch_TypeInfo, v12);
        byte_40F8BA0 = 1;
      }
      v13 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v13 = CTouch_TypeInfo;
      }
      x = v13->static_fields->mScrPosDelta.fields.x;
      if ( !byte_40F8BA1 )
      {
        sub_B16FFC(&CTouch_TypeInfo, v12);
        v13 = CTouch_TypeInfo;
        byte_40F8BA1 = 1;
      }
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = CTouch_TypeInfo;
      }
      v15 = v13->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v15) )
        v15 = x;
      p_fields->mInertialSpd = v15 * -0.2;
    }
  }
  else
  {
    mInertialSpd = this->fields.mInertialSpd;
    p_fields = &this->fields;
    if ( !UnityEngine_Mathf__Approximately(mInertialSpd, 0.0, 0LL) )
    {
      v10 = p_fields->mInertialSpd;
      v11 = v10 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      p_fields->mInertialSpd = v11;
      if ( fabsf(v11) < 0.004 )
        p_fields->mInertialSpd = 0.0;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v17 = p_fields->mInertialSpd;
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
  v27.fields.y = 0.0;
  v27.fields.x = *p_BASE_ROT_X;
  v27.fields.z = p_BASE_ROT_X[1];
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v27, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator
    && !TransitionCalculator_Vector3___IsFinished(
          focusInOutPositionCalculator,
          (const MethodInfo_253334C *)Method_TransitionCalculator_Vector3__IsFinished__) )
  {
    v25 = that->fields.focusInOutPositionCalculator;
    if ( v25 )
    {
      v26 = that->fields.mEarthRoot;
      v28 = TransitionCalculator_Vector3___Update(
              v25,
              (const MethodInfo_2533294 *)Method_TransitionCalculator_Vector3__Update__);
      GameObjectExtensions__SetLocalPosition(v26, v28, 0LL);
      v24 = 1;
      goto LABEL_38;
    }
LABEL_39:
    sub_B170D4();
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
  UnityEngine_GameObject_o *mTerminalMap; // x0
  PlayMakerFSM_o *Component_srcLineSprite; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0

  if ( (byte_40F8B1B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method);
    sub_B16FFC(&StringLiteral_6864, v3);
    byte_40F8B1B = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, 0LL), (v5 = this->fields.mCore) == 0LL)
    || (mTerminalMap = v5->fields.mTerminalMap) == 0LL
    || (Component_srcLineSprite = (PlayMakerFSM_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      mTerminalMap,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (Fsm = PlayMakerFSM__get_Fsm(Component_srcLineSprite, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  HutongGames_PlayMaker_Fsm__Event_14544876(Fsm, (System_String_o *)StringLiteral_6864, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore_StateZoomIn__begin(
        CylinderCore_StateZoomIn_o *this,
        CylinderCore_o *that,
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
  __int64 v16; // x1
  __int64 v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Component_o **v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct CylinderCore_o *v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  float IntpTime_AutoResume; // s0
  struct CylinderCore_o *mCore; // x8
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  const MethodInfo *v41; // x1
  TerminalPramsManager_c *v42; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x8
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Transform_o *transform; // x0
  CylinderCore_c *v54; // x0
  struct CylinderCore_StaticFields *static_fields; // x9
  __int64 v56; // x8
  __int64 v57; // d0
  UnityEngine_Component_o *v58; // x0
  UnityEngine_Transform_o *v59; // x0
  CylinderCore_o *v60; // x0
  CylinderPoint_o *mFocusCylinderPoint; // x0
  float Deg_k__BackingField; // s9
  UnityEngine_Transform_o *v63; // x0
  float v64; // s1
  UnityEngine_GameObject_o *klass; // x0
  UnityEngine_Transform_o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  float v71; // s3
  EasingObject_o *v72; // x21
  float mSpdTime; // s8
  System_Action_o *v74; // x22
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Action_o *v79; // x23
  __int64 v80; // x1
  TerminalPramsManager_c *v81; // x0
  CommonUI_o *Instance; // x20
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  System_Action_o *v87; // x21
  float v88; // [xsp+0h] [xbp-50h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8B19 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&CylinderCore_TypeInfo, v7);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&SeManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&Method_CylinderCore_StateZoomIn_GoNext__, v12);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
    sub_B16FFC(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, v14);
    sub_B16FFC(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, v15);
    sub_B16FFC(&CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, v16);
    byte_40F8B19 = 1;
  }
  v17 = sub_B170CC(CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, that, method, v3, v4);
  CylinderCore_StateZoomIn___c__DisplayClass3_0___ctor((CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_65;
  *(_QWORD *)(v17 + 48) = that;
  v24 = (UnityEngine_Component_o **)(v17 + 48);
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 48), (System_Int32_array **)that, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v17 + 88) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 88), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  v31 = *(struct CylinderCore_o **)(v17 + 48);
  this->fields.mCore = v31;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
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
    if ( !byte_40F606C )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v41);
      byte_40F606C = 1;
    }
    v42 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v42 = TerminalPramsManager_TypeInfo;
    }
    if ( v42->static_fields->_IsAutoResume_k__BackingField )
    {
      CylinderCore_StateZoomIn__GoNext(this, v41);
      return;
    }
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(23, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v87 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v83, v84, v85, v86);
    System_Action___ctor(v87, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 2, 0.4, v87, 0LL);
      return;
    }
LABEL_65:
    sub_B170D4();
  }
  if ( !*v24 )
    goto LABEL_65;
  gameObject = UnityEngine_Component__get_gameObject(*v24, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 16) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), Component_UIWidget, v45, v46, v47, v48, v49, v50);
  v51 = *(_QWORD *)(v17 + 48);
  if ( !v51 )
    goto LABEL_65;
  v52 = *(UnityEngine_GameObject_o **)(v51 + 24);
  if ( !v52 )
    goto LABEL_65;
  transform = UnityEngine_GameObject__get_transform(v52, 0LL);
  if ( !transform )
    goto LABEL_65;
  *(UnityEngine_Vector3_o *)(v17 + 24) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v54 = CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    v54 = CylinderCore_TypeInfo;
  }
  static_fields = v54->static_fields;
  v56 = *(_QWORD *)(v17 + 48);
  v57 = *(_QWORD *)&static_fields->ZOOM_IN_POS.fields.y;
  *(float *)(v17 + 36) = static_fields->ZOOM_IN_POS.fields.x;
  *(_QWORD *)(v17 + 40) = v57;
  if ( !v56 )
    goto LABEL_65;
  v58 = *(UnityEngine_Component_o **)(v56 + 72);
  v88 = *(float *)&v57;
  if ( !v58 )
    goto LABEL_65;
  v59 = UnityEngine_Component__get_transform(v58, 0LL);
  if ( !v59 )
    goto LABEL_65;
  localPosition = UnityEngine_Transform__get_localPosition(v59, 0LL);
  v60 = *(CylinderCore_o **)(v17 + 48);
  *(float *)(v17 + 40) = v88 - localPosition.fields.y;
  if ( !v60 )
    goto LABEL_65;
  mFocusCylinderPoint = CylinderCore__get_mFocusCylinderPoint(v60, 0LL);
  if ( !mFocusCylinderPoint )
    goto LABEL_65;
  if ( !*v24 )
    goto LABEL_65;
  Deg_k__BackingField = mFocusCylinderPoint->fields._Deg_k__BackingField;
  v63 = UnityEngine_Component__get_transform(*v24, 0LL);
  if ( !v63 )
    goto LABEL_65;
  *(UnityEngine_Vector3_o *)(&v64 - 1) = UnityEngine_Transform__get_localEulerAngles(v63, 0LL);
  *(float *)(v17 + 56) = v64;
  *(float *)(v17 + 60) = Deg_k__BackingField + 90.0;
  if ( vabds_f32(v64, Deg_k__BackingField) > 180.0 )
    *(float *)(v17 + 56) = v64 + -360.0;
  if ( !*v24 )
    goto LABEL_65;
  klass = (UnityEngine_GameObject_o *)(*v24)[1].klass;
  if ( !klass )
    goto LABEL_65;
  v66 = UnityEngine_GameObject__get_transform(klass, 0LL);
  if ( !v66 )
    goto LABEL_65;
  *(UnityEngine_Vector3_o *)(v17 + 64) = UnityEngine_Transform__get_localEulerAngles(v66, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  v71 = *(float *)(v17 + 64);
  *(UnityEngine_Vector3_o *)(v17 + 76) = zero;
  if ( v71 > 180.0 )
  {
    v71 = v71 + -360.0;
    *(float *)(v17 + 64) = v71;
  }
  if ( *(float *)(v17 + 72) > 180.0 )
    *(float *)(v17 + 64) = v71 + -360.0;
  v72 = *(EasingObject_o **)(v17 + 16);
  mSpdTime = this->fields.mSpdTime;
  v74 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v67, v68, v69, v70);
  System_Action___ctor(
    v74,
    (Il2CppObject *)v17,
    Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__,
    0LL);
  v79 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v75, v76, v77, v78);
  System_Action___ctor(
    v79,
    (Il2CppObject *)v17,
    Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__,
    0LL);
  if ( !v72 )
    goto LABEL_65;
  EasingObject__Play(v72, mSpdTime, v74, v79, 0.0, 0, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F606C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v80);
    byte_40F606C = 1;
  }
  v81 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v81 = TerminalPramsManager_TypeInfo;
  }
  if ( !v81->static_fields->_IsAutoResume_k__BackingField )
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
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21

  if ( (byte_40F8B1A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_CylinderCore_StateZoomIn_GoNext__, v5);
    byte_40F8B1A = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v6 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v6 <= 0.4 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_B170D4();
      CommonUI__maskFadeout(Instance, 2, v6, v12, 0LL);
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
  float v5; // s9
  float v6; // s10
  float v7; // s0
  struct CylinderCore_o *that; // x8
  UnityEngine_GameObject_o *mEarthRoot; // x0
  float v10; // s11
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float startRotY; // s9
  float endRotY; // s10
  UnityEngine_GameObject_o *v16; // x20
  float v17; // s0
  float v18; // s0
  struct CylinderCore_o *v19; // x8
  UnityEngine_GameObject_o *v20; // x20
  float x; // s9
  float y; // s10
  float z; // s11
  float v24; // s12
  float v25; // s13
  float v26; // s14
  float v27; // s6
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s3.4,4:s4.4,8:s5.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_8;
  mStartTime = eo->fields.mStartTime;
  v5 = Easing__Func_33157772(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mStartTime, 3, 0LL);
  v6 = Easing__Func_33157772(this->fields.startPos.fields.y, this->fields.endPos.fields.y, mStartTime, 15, 0LL);
  v7 = Easing__Func_33157772(this->fields.startPos.fields.z, this->fields.endPos.fields.z, mStartTime, 1, 0LL);
  that = this->fields.that;
  if ( !that )
    goto LABEL_8;
  mEarthRoot = that->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_8;
  v10 = v7;
  transform = UnityEngine_GameObject__get_transform(mEarthRoot, 0LL);
  if ( !transform )
    goto LABEL_8;
  v28.fields.x = v5;
  v28.fields.y = v6;
  v28.fields.z = v10;
  UnityEngine_Transform__set_localPosition(transform, v28, 0LL);
  v12 = (UnityEngine_Component_o *)this->fields.that;
  if ( !v12 )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
  startRotY = this->fields.startRotY;
  endRotY = this->fields.endRotY;
  v16 = gameObject;
  v17 = UnityEngine_Mathf__Clamp01(mStartTime, 0LL);
  v18 = Easing__Func_33157772(startRotY, endRotY, v17, 6, 0LL);
  GameObjectExtensions__SetLocalEulerAngleY(v16, v18, 0LL);
  v19 = this->fields.that;
  if ( !v19 )
LABEL_8:
    sub_B170D4();
  v20 = v19->fields.mEarthRoot;
  x = this->fields.startRot.fields.x;
  y = this->fields.startRot.fields.y;
  z = this->fields.startRot.fields.z;
  v24 = this->fields.endRot.fields.x;
  v25 = this->fields.endRot.fields.y;
  v26 = this->fields.endRot.fields.z;
  v27 = UnityEngine_Mathf__Clamp01(mStartTime * 1.5, 0LL);
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  v31.fields.x = v24;
  v31.fields.y = v25;
  v31.fields.z = v26;
  v30 = Easing__Func(v29, v31, v27, 3, 0LL);
  GameObjectExtensions__SetLocalEulerAngle(v20, v30, 0LL);
}


void __fastcall CylinderCore_StateZoomIn___c__DisplayClass3_0___begin_b__1(
        CylinderCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct CylinderCore_o *that; // x8
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  struct CylinderCore_o *v6; // x8
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  CylinderCore_StateZoomIn_o *_4__this; // x0

  if ( (byte_40F78CD & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F78CD = 1;
  }
  that = this->fields.that;
  if ( !that )
    goto LABEL_22;
  mEarthRoot = that->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_22;
  transform = UnityEngine_GameObject__get_transform(mEarthRoot, 0LL);
  if ( !transform )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition(transform, this->fields.endPos, 0LL);
  v6 = this->fields.that;
  if ( !v6 )
    goto LABEL_22;
  v7 = v6->fields.mEarthRoot;
  if ( !v7 )
    goto LABEL_22;
  v8 = UnityEngine_GameObject__get_transform(v7, 0LL);
  if ( !v8 )
    goto LABEL_22;
  UnityEngine_Transform__set_localEulerAngles(v8, this->fields.endRot, 0LL);
  v9 = (UnityEngine_Component_o *)this->fields.that;
  if ( !v9 )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
  GameObjectExtensions__SetLocalEulerAngleY(gameObject, this->fields.endRotY, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F606C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    byte_40F606C = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( v12->static_fields->_IsAutoResume_k__BackingField )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      CylinderCore_StateZoomIn__GoNext(_4__this, 0LL);
      return;
    }
LABEL_22:
    sub_B170D4();
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
  UnityEngine_GameObject_o *mTerminalMap; // x0
  PlayMakerFSM_o *Component_srcLineSprite; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0

  if ( (byte_40F8B1D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method);
    sub_B16FFC(&StringLiteral_6864, v3);
    byte_40F8B1D = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, 0LL), (v5 = this->fields.mCore) == 0LL)
    || (mTerminalMap = v5->fields.mTerminalMap) == 0LL
    || (Component_srcLineSprite = (PlayMakerFSM_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      mTerminalMap,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (Fsm = PlayMakerFSM__get_Fsm(Component_srcLineSprite, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  HutongGames_PlayMaker_Fsm__Event_14544876(Fsm, (System_String_o *)StringLiteral_6864, 0LL);
}


void __fastcall CylinderCore_StateZoomOut__begin(
        CylinderCore_StateZoomOut_o *this,
        CylinderCore_o *that,
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
  UnityEngine_Component_o **v23; // x20
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
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  float IntpTime_AutoResume; // s0
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_c *v43; // x8
  TerminalSceneComponent_o *v44; // x22
  float v45; // s8
  CylinderCore_StateZoomOut___c_c *v46; // x0
  struct CylinderCore_StateZoomOut___c_StaticFields *static_fields; // x8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v49; // x24
  struct CylinderCore_StateZoomOut___c_StaticFields *v50; // x0
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
  CylinderCore_c *v67; // x0
  struct CylinderCore_StaticFields *v68; // x9
  __int64 v69; // x8
  __int64 v70; // d0
  UnityEngine_Component_o *v71; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v73; // x8
  CylinderCore_c *v74; // x0
  struct CylinderCore_StaticFields *v75; // x10
  _DWORD *p_x; // x8
  int *p_y; // x9
  int *p_z; // x10
  struct CylinderCore_StaticFields *v79; // x10
  int v80; // w9
  int v81; // w10
  UnityEngine_Component_o *v82; // x0
  UnityEngine_GameObject_o *v83; // x0
  UnityEngine_Component_o *v84; // x8
  UnityEngine_GameObject_o *v85; // x20
  CylinderPoint_o *mFocusCylinderPoint; // x0
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  CylinderCore_c *v91; // x0
  unsigned int *v92; // x8
  EasingObject_o *v93; // x20
  unsigned int v94; // w9
  System_Action_o *v95; // x21
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  System_Action_o *v100; // x22
  float v101; // [xsp+0h] [xbp-50h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8B1C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&CylinderCore_TypeInfo, v7);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    sub_B16FFC(&Method_CylinderCore_StateZoomOut___c__begin_b__1_0__, v11);
    sub_B16FFC(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, v12);
    sub_B16FFC(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, v13);
    sub_B16FFC(&CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, v14);
    sub_B16FFC(&CylinderCore_StateZoomOut___c_TypeInfo, v15);
    byte_40F8B1C = 1;
  }
  v16 = sub_B170CC(CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  CylinderCore_StateZoomOut___c__DisplayClass1_0___ctor((CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_52;
  *(_QWORD *)(v16 + 48) = that;
  v23 = (UnityEngine_Component_o **)(v16 + 48);
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 48), (System_Int32_array **)that, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v16 + 80) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 80), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  v30 = *(struct CylinderCore_o **)(v16 + 48);
  this->fields.mCore = v30;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0LL);
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
  BYTE1(v43[1]._1.namespaze) = 1;
  if ( !*v23 )
    goto LABEL_52;
  v44 = (TerminalSceneComponent_o *)(*v23)[2].klass;
  v45 = IntpTime_AutoResume;
  v46 = CylinderCore_StateZoomOut___c_TypeInfo;
  if ( (BYTE3(CylinderCore_StateZoomOut___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CylinderCore_StateZoomOut___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_StateZoomOut___c_TypeInfo);
    v46 = CylinderCore_StateZoomOut___c_TypeInfo;
  }
  static_fields = v46->static_fields;
  _9__1_0 = static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      static_fields = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
    System_Action___ctor(_9__1_0, v49, Method_CylinderCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    v50 = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
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
    CylinderCore_StateZoomOut__GoNext(this, v58);
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
  v67 = CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    v67 = CylinderCore_TypeInfo;
  }
  v68 = v67->static_fields;
  v69 = *(_QWORD *)(v16 + 48);
  v70 = *(_QWORD *)&v68->ZOOM_IN_POS.fields.y;
  *(float *)(v16 + 24) = v68->ZOOM_IN_POS.fields.x;
  *(_QWORD *)(v16 + 28) = v70;
  if ( !v69 )
    goto LABEL_52;
  v71 = *(UnityEngine_Component_o **)(v69 + 72);
  v101 = *(float *)&v70;
  if ( !v71 )
    goto LABEL_52;
  transform = UnityEngine_Component__get_transform(v71, 0LL);
  if ( !transform )
    goto LABEL_52;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v73 = *(_QWORD *)(v16 + 48);
  *(float *)(v16 + 28) = v101 - localPosition.fields.y;
  if ( !v73 )
    goto LABEL_52;
  v74 = CylinderCore_TypeInfo;
  if ( *(_BYTE *)(v73 + 136) )
  {
    if ( (WORD1(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CylinderCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
      v74 = CylinderCore_TypeInfo;
    }
    v75 = v74->static_fields;
    p_x = (_DWORD *)&v75->FOCUS_IN_POS.fields.x;
    p_y = (int *)&v75->FOCUS_IN_POS.fields.y;
    p_z = (int *)&v75->FOCUS_IN_POS.fields.z;
  }
  else
  {
    if ( (WORD1(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CylinderCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
      v74 = CylinderCore_TypeInfo;
    }
    v79 = v74->static_fields;
    p_x = (_DWORD *)&v79->FOCUS_OUT_POS.fields.x;
    p_y = (int *)&v79->FOCUS_OUT_POS.fields.y;
    p_z = (int *)&v79->FOCUS_OUT_POS.fields.z;
  }
  v80 = *p_y;
  v81 = *p_z;
  v82 = *(UnityEngine_Component_o **)(v16 + 48);
  *(_DWORD *)(v16 + 36) = *p_x;
  *(_DWORD *)(v16 + 40) = v80;
  *(_DWORD *)(v16 + 44) = v81;
  if ( !v82 )
    goto LABEL_52;
  v83 = UnityEngine_Component__get_gameObject(v82, 0LL);
  v84 = *v23;
  if ( !*v23 )
    goto LABEL_52;
  v85 = v83;
  mFocusCylinderPoint = CylinderCore__get_mFocusCylinderPoint((CylinderCore_o *)v84, 0LL);
  if ( !mFocusCylinderPoint )
    goto LABEL_52;
  GameObjectExtensions__SetLocalEulerAngleY(v85, mFocusCylinderPoint->fields._Deg_k__BackingField + 90.0, 0LL);
  *(UnityEngine_Vector3_o *)(v16 + 68) = UnityEngine_Vector3__get_zero(0LL);
  v91 = CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    v91 = CylinderCore_TypeInfo;
  }
  v92 = (unsigned int *)v91->static_fields;
  v93 = *(EasingObject_o **)(v16 + 16);
  v94 = *v92;
  LODWORD(v92) = v92[1];
  *(_QWORD *)(v16 + 56) = v94;
  *(_DWORD *)(v16 + 64) = (_DWORD)v92;
  v95 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v87, v88, v89, v90);
  System_Action___ctor(
    v95,
    (Il2CppObject *)v16,
    Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__,
    0LL);
  v100 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v96, v97, v98, v99);
  System_Action___ctor(
    v100,
    (Il2CppObject *)v16,
    Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__,
    0LL);
  if ( !v93 )
LABEL_52:
    sub_B170D4();
  EasingObject__Play(v93, v45, v95, v100, 0.0, 0, 0LL);
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

  if ( (byte_40F78CE & 1) == 0 )
  {
    sub_B16FFC(&CylinderCore_StateZoomOut___c_TypeInfo, v1);
    byte_40F78CE = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CylinderCore_StateZoomOut___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  float v5; // s9
  float v6; // s10
  float v7; // s0
  struct CylinderCore_o *that; // x8
  UnityEngine_GameObject_o *mEarthRoot; // x0
  float v10; // s11
  UnityEngine_Transform_o *transform; // x0
  struct CylinderCore_o *v12; // x8
  UnityEngine_GameObject_o *v13; // x20
  float x; // s9
  float y; // s10
  float z; // s11
  float v17; // s12
  float v18; // s13
  float v19; // s14
  float v20; // s6
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float v23; // s0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s3.4,4:s4.4,8:s5.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_8;
  mStartTime = eo->fields.mStartTime;
  v5 = Easing__Func_33157772(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mStartTime, 3, 0LL);
  v6 = Easing__Func_33157772(this->fields.startPos.fields.y, this->fields.endPos.fields.y, mStartTime, 15, 0LL);
  v7 = Easing__Func_33157772(this->fields.startPos.fields.z, this->fields.endPos.fields.z, mStartTime, 2, 0LL);
  that = this->fields.that;
  if ( !that )
    goto LABEL_8;
  mEarthRoot = that->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_8;
  v10 = v7;
  transform = UnityEngine_GameObject__get_transform(mEarthRoot, 0LL);
  if ( !transform )
    goto LABEL_8;
  v24.fields.x = v5;
  v24.fields.y = v6;
  v24.fields.z = v10;
  UnityEngine_Transform__set_localPosition(transform, v24, 0LL);
  v12 = this->fields.that;
  if ( !v12 )
    goto LABEL_8;
  v13 = v12->fields.mEarthRoot;
  x = this->fields.endRot.fields.x;
  y = this->fields.endRot.fields.y;
  z = this->fields.endRot.fields.z;
  v17 = this->fields.startRot.fields.x;
  v18 = this->fields.startRot.fields.y;
  v19 = this->fields.startRot.fields.z;
  v20 = UnityEngine_Mathf__Clamp01((float)(1.0 - mStartTime) * 1.5, 0LL);
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  v27.fields.x = v17;
  v27.fields.y = v18;
  v27.fields.z = v19;
  v26 = Easing__Func(v25, v27, v20, 3, 0LL);
  GameObjectExtensions__SetLocalEulerAngle(v13, v26, 0LL);
  v21 = (UnityEngine_Component_o *)this->fields.that;
  if ( !v21 )
LABEL_8:
    sub_B170D4();
  gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
  v23 = Easing__Func_33157772(0.0, 1.0, mStartTime, 5, 0LL);
  GameObjectExtensions__AddLocalEulerAngleY(gameObject, v23 * -0.4, 0LL);
}


void __fastcall CylinderCore_StateZoomOut___c__DisplayClass1_0___begin_b__2(
        CylinderCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct CylinderCore_o *that; // x8
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  struct CylinderCore_o *v6; // x8
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Transform_o *v8; // x0
  CylinderCore_StateZoomOut_o *_4__this; // x0

  that = this->fields.that;
  if ( !that )
    goto LABEL_9;
  mEarthRoot = that->fields.mEarthRoot;
  if ( !mEarthRoot
    || (transform = UnityEngine_GameObject__get_transform(mEarthRoot, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.endPos, 0LL), (v6 = this->fields.that) == 0LL)
    || (v7 = v6->fields.mEarthRoot) == 0LL
    || (v8 = UnityEngine_GameObject__get_transform(v7, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localEulerAngles(v8, this->fields.endRot, 0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  CylinderCore_StateZoomOut__GoNext(_4__this, 0LL);
}