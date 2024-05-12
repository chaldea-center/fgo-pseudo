void __fastcall BlankEarth___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct BlankEarth_StaticFields *static_fields; // x9
  struct BlankEarth_StaticFields *v8; // x0
  System_Int32_array **v9; // x1

  if ( (byte_438A9A6 & 1) == 0 )
  {
    sub_B775C4(&BlankEarth_TypeInfo);
    sub_B775C4(&StringLiteral_17200/*"blankEarthRotateKey"*/);
    byte_438A9A6 = 1;
  }
  static_fields = BlankEarth_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SOUTH_POLE_ROTATE.fields.x = 0x4292000041F80000LL;
  static_fields->SOUTH_POLE_ROTATE.fields.z = 60.0;
  v8 = BlankEarth_TypeInfo->static_fields;
  v9 = (System_Int32_array **)StringLiteral_17200/*"blankEarthRotateKey"*/;
  v8->BLANK_EARTH_ROTATE_KEY = (struct System_String_o *)StringLiteral_17200/*"blankEarthRotateKey"*/;
  sub_B77560((BattleServantConfConponent_o *)&v8->BLANK_EARTH_ROTATE_KEY, v9, v1, v2, v3, v4, v5, v6);
}


void __fastcall BlankEarth___ctor(BlankEarth_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_438A9A5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16762/*"ar223"*/);
    byte_438A9A5 = 1;
  }
  *(_QWORD *)&this->fields.startupFadeTime = 0x3E0000003F000000LL;
  *(_OWORD *)&this->fields.greenwichOffset = xmmword_331D420;
  *(_OWORD *)&this->fields.zoomOutSpdTime = xmmword_331D430;
  *(_OWORD *)&this->fields.earthRadius = xmmword_331D440;
  v9 = (System_Int32_array **)StringLiteral_16762/*"ar223"*/;
  this->fields.startupSeName = (struct System_String_o *)StringLiteral_16762/*"ar223"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.startupSeName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.zoomInEasingType = 0x300000003LL;
  this->fields.firstAnimTime = 3.0;
  *(_OWORD *)&this->fields.firstFadeTime = xmmword_331D450;
  *(_QWORD *)&this->fields.earthBtnMoveSpeedTime = 0x406000003E800000LL;
  *(_OWORD *)&this->fields.zoomInPos.fields.z = xmmword_331D460;
  this->fields.startupEasingType = 2;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarth__Awake(BlankEarth_o *this, const MethodInfo *method)
{
  struct CStateManager_BlankEarth__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct CStateManager_BlankEarth__o *mFSM; // x21
  BlankEarth_StateNone_o *v12; // x22
  UnityEngine_GameObject_o *earthRoot; // x0
  CStateManager_QAASpotStateController_IMapSpot__o *v14; // x21
  BlankEarth_StateStartup_o *v15; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v16; // x21
  BlankEarth_StateMain_o *v17; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v18; // x21
  BlankEarth_StateZoomIn_o *v19; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v20; // x21
  BlankEarth_StateZoomOut_o *v21; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v22; // x21
  BlankEarth_StateQAARotate_o *v23; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v24; // x20
  BlankEarth_StateShortcutRotate_o *v25; // x21
  const MethodInfo *v26; // x2
  BlankEarthSpotAnimStateManager_o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_438A988 & 1) == 0 )
  {
    sub_B775C4(&BlankEarthSpotAnimStateManager_TypeInfo);
    sub_B775C4(&Method_CStateManager_BlankEarth___ctor__);
    sub_B775C4(&Method_CStateManager_BlankEarth__add__);
    sub_B775C4(&CStateManager_BlankEarth__TypeInfo);
    sub_B775C4(&BlankEarth_StateMain_TypeInfo);
    sub_B775C4(&BlankEarth_StateNone_TypeInfo);
    sub_B775C4(&BlankEarth_StateQAARotate_TypeInfo);
    sub_B775C4(&BlankEarth_StateShortcutRotate_TypeInfo);
    sub_B775C4(&BlankEarth_StateStartup_TypeInfo);
    sub_B775C4(&BlankEarth_StateZoomIn_TypeInfo);
    sub_B775C4(&BlankEarth_StateZoomOut_TypeInfo);
    byte_438A988 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B77694(CStateManager_BlankEarth__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v4,
      (QAASpotStateController_IMapSpot_o *)this,
      7,
      (const MethodInfo_2CBF0B0 *)Method_CStateManager_BlankEarth___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarth__o *)v4;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.mFSM, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
    mFSM = this->fields.mFSM;
    v12 = (BlankEarth_StateNone_o *)sub_B77694(BlankEarth_StateNone_TypeInfo);
    BlankEarth_StateNone___ctor(v12, 0LL);
    if ( !mFSM )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_2CBF17C *)Method_CStateManager_BlankEarth__add__);
    v14 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v15 = (BlankEarth_StateStartup_o *)sub_B77694(BlankEarth_StateStartup_TypeInfo);
    BlankEarth_StateStartup___ctor(v15, 0LL);
    if ( !v14 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_2CBF17C *)Method_CStateManager_BlankEarth__add__);
    v16 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v17 = (BlankEarth_StateMain_o *)sub_B77694(BlankEarth_StateMain_TypeInfo);
    BlankEarth_StateMain___ctor(v17, 0LL);
    if ( !v16 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v16,
      2,
      (IState_T__o *)v17,
      (const MethodInfo_2CBF17C *)Method_CStateManager_BlankEarth__add__);
    v18 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v19 = (BlankEarth_StateZoomIn_o *)sub_B77694(BlankEarth_StateZoomIn_TypeInfo);
    BlankEarth_StateZoomIn___ctor(v19, 0LL);
    if ( !v18 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v18,
      3,
      (IState_T__o *)v19,
      (const MethodInfo_2CBF17C *)Method_CStateManager_BlankEarth__add__);
    v20 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v21 = (BlankEarth_StateZoomOut_o *)sub_B77694(BlankEarth_StateZoomOut_TypeInfo);
    BlankEarth_StateZoomOut___ctor(v21, 0LL);
    if ( !v20 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v20,
      4,
      (IState_T__o *)v21,
      (const MethodInfo_2CBF17C *)Method_CStateManager_BlankEarth__add__);
    v22 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v23 = (BlankEarth_StateQAARotate_o *)sub_B77694(BlankEarth_StateQAARotate_TypeInfo);
    BlankEarth_StateQAARotate___ctor(v23, 0LL);
    if ( !v22
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v22,
            5,
            (IState_T__o *)v23,
            (const MethodInfo_2CBF17C *)Method_CStateManager_BlankEarth__add__),
          v24 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v25 = (BlankEarth_StateShortcutRotate_o *)sub_B77694(BlankEarth_StateShortcutRotate_TypeInfo),
          BlankEarth_StateShortcutRotate___ctor(v25, 0LL),
          !v24) )
    {
LABEL_15:
      sub_B7769C(earthRoot, method);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v24,
      6,
      (IState_T__o *)v25,
      (const MethodInfo_2CBF17C *)Method_CStateManager_BlankEarth__add__);
    BlankEarth__SetState(this, 0, v26);
  }
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_15;
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !earthRoot )
    goto LABEL_15;
  this->fields.mRootQua = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)earthRoot, 0LL);
  v27 = (BlankEarthSpotAnimStateManager_o *)sub_B77694(BlankEarthSpotAnimStateManager_TypeInfo);
  BlankEarthSpotAnimStateManager___ctor(v27, 0LL);
  this->fields._SpotAnimStateManager_k__BackingField = v27;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._SpotAnimStateManager_k__BackingField,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__BlunkEarthMainOperation(
        BlankEarth_o *this,
        BlankEarth_o *that,
        float *inertialSpeedX,
        float *inertialSpeedY,
        const MethodInfo *method)
{
  BlankEarth_o *v8; // x22
  float btnSpeedRate; // s0
  float *v10; // x8
  CTouch_c *v11; // x0
  float x; // s9
  float v13; // s0
  CTouch_c *v14; // x0
  float y; // s9
  float v16; // s0
  float v17; // s10
  float v18; // s0
  float v19; // s9
  float v20; // s0
  float totalAngle; // s0
  float maxAngle; // s2
  float v23; // s1
  float v24; // s1
  float v25; // s2
  float v26; // s0
  UnityEngine_Transform_o *v27; // x22
  float v28; // s8
  float v29; // s9
  float z; // s10
  float v31; // s0
  float v32; // s1
  float v33; // s2
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s3.4,4:s4.4,8:s5.4

  v8 = this;
  if ( (byte_438A98C & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_B775C4(&CTouch_TypeInfo);
    byte_438A98C = 1;
  }
  if ( !that )
LABEL_65:
    sub_B7769C(this, that);
  if ( that->fields.isBtnTouchX )
  {
    btnSpeedRate = that->fields.btnSpeedRate;
    if ( !that->fields.isLeft )
      btnSpeedRate = -btnSpeedRate;
    v10 = inertialSpeedX;
  }
  else
  {
    if ( !that->fields.isBtnTouchY )
      goto LABEL_13;
    btnSpeedRate = that->fields.btnSpeedRate;
    if ( that->fields.isUp )
      btnSpeedRate = -btnSpeedRate;
    v10 = inertialSpeedY;
  }
  *v10 = btnSpeedRate;
LABEL_13:
  if ( that->fields.isTouch )
  {
    *inertialSpeedX = 0.0;
    *inertialSpeedY = 0.0;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__isDrag(0LL) )
    {
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_438869A )
      {
        sub_B775C4(&CTouch_TypeInfo);
        byte_438869A = 1;
      }
      v11 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
      }
      x = v11->static_fields->mScrPosDelta.fields.x;
      if ( !byte_438869B )
      {
        sub_B775C4(&CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
        byte_438869B = 1;
      }
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = CTouch_TypeInfo;
      }
      v13 = v11->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v13) )
        v13 = x;
      *inertialSpeedX = v13 * -0.2;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_438869A )
      {
        sub_B775C4(&CTouch_TypeInfo);
        byte_438869A = 1;
      }
      v14 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v14 = CTouch_TypeInfo;
      }
      y = v14->static_fields->mScrPosDelta.fields.y;
      if ( !byte_438869B )
      {
        sub_B775C4(&CTouch_TypeInfo);
        v14 = CTouch_TypeInfo;
        byte_438869B = 1;
      }
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = CTouch_TypeInfo;
      }
      v16 = v14->static_fields->mScrPosDeltaOld.fields.y;
      if ( fabsf(y) >= fabsf(v16) )
        v16 = y;
      *inertialSpeedY = v16 * -0.2;
    }
  }
  else if ( !UnityEngine_Mathf__Approximately(*inertialSpeedX, 0.0, 0LL)
         || !UnityEngine_Mathf__Approximately(*inertialSpeedY, 0.0, 0LL) )
  {
    v17 = *inertialSpeedX;
    v18 = v17 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
    if ( fabsf(v18) < 0.004 )
      v18 = 0.0;
    *inertialSpeedX = v18;
    v19 = *inertialSpeedY;
    v20 = v19 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
    *inertialSpeedY = v20;
    if ( fabsf(v20) < 0.004 )
      *inertialSpeedY = 0.0;
  }
  totalAngle = v8->fields.totalAngle;
  maxAngle = v8->fields.maxAngle;
  v23 = totalAngle + *inertialSpeedY;
  if ( maxAngle < v23 )
  {
    v24 = maxAngle - totalAngle;
    *inertialSpeedY = maxAngle - totalAngle;
    totalAngle = v8->fields.totalAngle;
    maxAngle = v8->fields.maxAngle;
    v23 = totalAngle + v24;
  }
  v25 = -maxAngle;
  if ( v23 < v25 )
  {
    v26 = v25 - totalAngle;
    *inertialSpeedY = v26;
    v23 = v8->fields.totalAngle + v26;
  }
  v8->fields.totalAngle = v23;
  this = (BlankEarth_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_65;
  this = (BlankEarth_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !that->fields.blankEarth )
    goto LABEL_65;
  v27 = (UnityEngine_Transform_o *)this;
  this = (BlankEarth_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)that->fields.blankEarth, 0LL);
  if ( !this )
    goto LABEL_65;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  v28 = position.fields.x;
  v29 = position.fields.y;
  z = position.fields.z;
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_right(0LL);
  if ( !v27 )
    goto LABEL_65;
  v37.fields.x = v31;
  v37.fields.y = v32;
  v37.fields.z = v33;
  v35.fields.x = v28;
  v35.fields.y = v29;
  v35.fields.z = z;
  UnityEngine_Transform__RotateAround(v27, v35, v37, -*inertialSpeedY, 0LL);
  this = (BlankEarth_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_65;
  v36.fields.y = *inertialSpeedX;
  v36.fields.x = 0.0;
  v36.fields.z = 0.0;
  UnityEngine_Transform__Rotate_36432156((UnityEngine_Transform_o *)this, v36, 0LL);
}


UnityEngine_Vector3_o __fastcall BlankEarth__CalcPosFromLatLong(
        BlankEarth_o *this,
        float latitudeDegree,
        float longitudeDegree,
        float z,
        const MethodInfo *method)
{
  float v6; // s9
  float v7; // s10
  float v8; // s11
  float v9; // s8
  float v10; // s0
  float earthRadius; // s12
  float v12; // s9
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v6 = latitudeDegree * 0.017453;
  v7 = (float)(this->fields.greenwichOffset + longitudeDegree) * 0.017453;
  v8 = cosf(latitudeDegree * 0.017453) * (float)(this->fields.earthRadius + z);
  v9 = cosf(v7);
  v10 = sinf(v6);
  earthRadius = this->fields.earthRadius;
  v12 = v10;
  v13 = sinf(v7);
  v14 = v12 * earthRadius;
  v15 = v8 * v13;
  v16 = v9 * v8;
  result.fields.z = v15;
  result.fields.y = v14;
  result.fields.x = v16;
  return result;
}


void __fastcall BlankEarth__CheckTutorial(
        BlankEarth_o *this,
        TutorialCommunicateAdapter_o *adapter,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_IEnumerator_o *v9; // x1

  if ( this->fields.isTutorialAvailable
    && (BlankEarth__GetState(this, (const MethodInfo *)adapter) == 2 || BlankEarth__GetState(this, v7) == 1) )
  {
    v9 = BlankEarth__CoCheckTutorial(this, adapter, finishCallback, v8);
    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
  }
  else
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BlankEarth__CoCheckTutorial(
        BlankEarth_o *this,
        TutorialCommunicateAdapter_o *adapter,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
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

  if ( (byte_438A98D & 1) == 0 )
  {
    sub_B775C4(&BlankEarth__CoCheckTutorial_d__91_TypeInfo);
    byte_438A98D = 1;
  }
  v7 = sub_B77694(BlankEarth__CoCheckTutorial_d__91_TypeInfo);
  BlankEarth__CoCheckTutorial_d__91___ctor((BlankEarth__CoCheckTutorial_d__91_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 56) = adapter;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 56), (System_Int32_array **)adapter, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = finishCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)(v7 + 32),
    (System_Int32_array **)finishCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall BlankEarth__CoStandByChangeState(
        BlankEarth_o *this,
        int32_t state,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_438A98E & 1) == 0 )
  {
    sub_B775C4(&BlankEarth__CoStandByChangeState_d__93_TypeInfo);
    byte_438A98E = 1;
  }
  v7 = sub_B77694(BlankEarth__CoStandByChangeState_d__93_TypeInfo);
  BlankEarth__CoStandByChangeState_d__93___ctor((BlankEarth__CoStandByChangeState_d__93_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = state;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)(v7 + 48),
    (System_Int32_array **)finishCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Quaternion_o __fastcall BlankEarth__ConvertLatLongToSafePointQuaternion(
        BlankEarth_o *this,
        UnityEngine_Vector2_o latLongVector,
        const MethodInfo *method)
{
  float y; // s8
  float v5; // s0
  float v6; // s1
  float v7; // s8
  float v8; // s9
  float v9; // s11
  float v10; // s10
  float v11; // s0
  float earthRadius; // s12
  float v13; // s8
  float v14; // s0
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s3
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = latLongVector.fields.y;
  v5 = UnityEngine_Mathf__Clamp(latLongVector.fields.x, -this->fields.maxAngle, this->fields.maxAngle, 0LL);
  v6 = y + this->fields.greenwichOffset;
  v7 = v5 * 0.017453;
  v8 = v6 * 0.017453;
  v9 = cosf(v5 * 0.017453) * (float)(this->fields.earthRadius + 0.0);
  v10 = cosf(v8);
  v11 = sinf(v7);
  earthRadius = this->fields.earthRadius;
  v13 = v11;
  v14 = sinf(v8);
  v20.fields.y = v10 * v9;
  v20.fields.z = v13 * earthRadius;
  v20.fields.x = v9 * v14;
  *(float *)&var40.methodPointer = v10 * v9;
  *((float *)&var40.methodPointer + 1) = v13 * earthRadius;
  *(float *)&var40.invoker_method = v20.fields.x;
  normalized = UnityEngine_Vector3__get_normalized(v20, &var40);
  normalized.fields.x = -normalized.fields.x;
  normalized.fields.y = -normalized.fields.y;
  normalized.fields.z = -normalized.fields.z;
  v22 = UnityEngine_Quaternion__LookRotation_36340992(normalized, 0LL);
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__Inverse(v22, 0LL);
  result.fields.w = v18;
  result.fields.z = v17;
  result.fields.y = v16;
  result.fields.x = v15;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__CreateGimmick(
        BlankEarth_o *this,
        UnityEngine_GameObject_o *obj,
        BlankEarthGimmickEntity_o *gimmickEnt,
        float x,
        float y,
        float z,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v13; // x21
  System_String_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x22
  System_String_o *v17; // x0
  UnityEngine_Transform_o *blankEarth; // x8
  UnityEngine_Transform_o *v19; // x20
  int v20; // s0
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438A995 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_2936/*"BlankEarthGimmick_"*/);
    byte_438A995 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)obj,
                                      (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_32813552(v13, this->fields.earthGimmickRoot, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v13, one, 0LL);
  if ( !v13 )
    goto LABEL_13;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
  if ( !gimmickEnt )
    goto LABEL_13;
  v16 = (UnityEngine_Object_o *)transform;
  v17 = System_Int32__ToString((int)gimmickEnt + 16, 0LL);
  transform = System_String__Concat_44901936((System_String_o *)StringLiteral_2936/*"BlankEarthGimmick_"*/, v17, 0LL);
  if ( !v16 )
    goto LABEL_13;
  UnityEngine_Object__set_name(v16, transform, 0LL);
  GameObjectExtensions__SetLocalPosition_32807768(v13, x, y, z, 0LL);
  transform = (System_String_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
  blankEarth = this->fields.blankEarth;
  if ( !blankEarth
    || (v19 = (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(blankEarth, 0LL),
        !v19)
    || (UnityEngine_Transform__LookAt_36433252(v19, *(UnityEngine_Vector3_o *)&v20, 0LL),
        (transform = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v13,
                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___)) == 0LL) )
  {
LABEL_13:
    sub_B7769C(transform, v15);
  }
  BlankEarthGimmickComponent__Setup((BlankEarthGimmickComponent_o *)transform, gimmickEnt, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthPoint_o *__fastcall BlankEarth__CreateSpot(
        BlankEarth_o *this,
        UnityEngine_GameObject_o *spotObj,
        BlankEarthSpotEntity_o *spotEnt,
        float x,
        float y,
        float z,
        const MethodInfo *method)
{
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  TerminalSceneComponent_c *v17; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v19; // x1
  System_String_o *transform; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  UnityEngine_GameObject_o *v30; // x21
  UnityEngine_Object_o *v31; // x22
  System_String_o *v32; // x0
  UnityEngine_Transform_o *v33; // x22
  int v34; // s0
  BlankEarthPoint_o *v37; // x21
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438A999 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&StringLiteral_2937/*"BlankEarthPoint_"*/);
    byte_438A999 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4387463 )
  {
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_4387463 = 1;
  }
  v17 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v17 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v17->static_fields->mInstance;
  v19 = *p_mInstance;
  this->fields.mTerminalScene = *p_mInstance;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mTerminalScene,
    (System_Int32_array **)v19,
    (System_String_array **)spotEnt,
    (System_String_array **)method,
    v7,
    v8,
    v9,
    v10);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_22;
  mTerminalList = mTerminalScene->fields.mTerminalList;
  this->fields.mTerminalList = mTerminalList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mTerminalList,
    (System_Int32_array **)mTerminalList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v30 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)spotObj,
                                      (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_32813552(v30, this->fields.earthSpotRoot, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v30, one, 0LL);
  if ( !v30 )
    goto LABEL_22;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform(v30, 0LL);
  if ( !spotEnt )
    goto LABEL_22;
  v31 = (UnityEngine_Object_o *)transform;
  v32 = System_Int32__ToString((int)spotEnt + 16, 0LL);
  transform = System_String__Concat_44901936((System_String_o *)StringLiteral_2937/*"BlankEarthPoint_"*/, v32, 0LL);
  if ( !v31
    || (UnityEngine_Object__set_name(v31, transform, 0LL),
        GameObjectExtensions__SetLocalPosition_32807768(v30, x, y, z, 0LL),
        transform = (System_String_o *)UnityEngine_GameObject__get_transform(v30, 0LL),
        !this->fields.blankEarth)
    || (v33 = (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Transform__get_position(this->fields.blankEarth, 0LL),
        !v33)
    || (UnityEngine_Transform__LookAt_36433252(v33, *(UnityEngine_Vector3_o *)&v34, 0LL),
        (transform = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v30,
                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___)) == 0LL) )
  {
LABEL_22:
    sub_B7769C(transform, v21);
  }
  v37 = (BlankEarthPoint_o *)transform;
  BlankEarthPoint__SetEarthObj((BlankEarthPoint_o *)transform, spotEnt, this, this->fields.mEarthCamera, 0LL);
  return v37;
}


void __fastcall BlankEarth__ExecuteAfterStartUpScaling(
        BlankEarth_o *this,
        System_Action_o *startupScalingEndCallback,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( BlankEarth__GetState(this, (const MethodInfo *)startupScalingEndCallback) == 1 )
  {
    this->fields.scalingEndCallback = startupScalingEndCallback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.scalingEndCallback,
      (System_Int32_array **)startupScalingEndCallback,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  else
  {
    ActionExtensions__Call(startupScalingEndCallback, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__FocusAndSaveRotation(
        BlankEarth_o *this,
        BlankEarthSpotEntity_o *spotEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int v6; // s0
  UnityEngine_Transform_o *blankEarth; // x0
  const MethodInfo *v11; // x1

  if ( spotEnt )
  {
    *(UnityEngine_Quaternion_o *)&v6 = BlankEarth__ConvertLatLongToSafePointQuaternion(
                                         this,
                                         *(UnityEngine_Vector2_o *)&spotEnt->fields.x,
                                         (const MethodInfo *)spotEnt);
    blankEarth = this->fields.blankEarth;
    if ( !blankEarth )
      sub_B7769C(0LL, v5);
    UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v6, 0LL);
    this->fields.totalAngle = UnityEngine_Mathf__Clamp(
                                spotEnt->fields.x,
                                -this->fields.maxAngle,
                                this->fields.maxAngle,
                                0LL);
    BlankEarth__SaveEarthRotate(this, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BlankEarth__GetDefaultEarthScale(BlankEarth_o *this, const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&v2 = UnityEngine_Vector3__get_one(0LL);
  result.fields.z = v4;
  result.fields.y = v3;
  result.fields.x = v2;
  return result;
}


// local variable allocation has failed, the output may be wrong!
BlankEarthGimmickComponent_o *__fastcall BlankEarth__GetEarthGimmick(
        BlankEarth_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent_o *result; // x0
  UnityEngine_Transform_o *transform; // x19
  System_String_o *v6; // x0
  UnityEngine_Object_o *v7; // x19
  bool v8; // w8
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = gimmickId;
  if ( (byte_438A991 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_2936/*"BlankEarthGimmick_"*/);
    byte_438A991 = 1;
  }
  result = (BlankEarthGimmickComponent_o *)this->fields.earthGimmickRoot;
  if ( !result )
    goto LABEL_13;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  result = (BlankEarthGimmickComponent_o *)System_String__Concat_44901936(
                                             (System_String_o *)StringLiteral_2936/*"BlankEarthGimmick_"*/,
                                             v6,
                                             0LL);
  if ( !transform )
    goto LABEL_13;
  v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)result, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  result = 0LL;
  if ( v8 )
  {
    if ( v7 )
    {
      result = (BlankEarthGimmickComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
      if ( result )
        return (BlankEarthGimmickComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)result,
                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    }
LABEL_13:
    sub_B7769C(result, *(_QWORD *)&gimmickId);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
BlankEarthPoint_o *__fastcall BlankEarth__GetEarthPoint(BlankEarth_o *this, int32_t spotId, const MethodInfo *method)
{
  BlankEarthPoint_o *result; // x0
  UnityEngine_Transform_o *transform; // x19
  System_String_o *v6; // x0
  UnityEngine_Object_o *v7; // x19
  bool v8; // w8
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = spotId;
  if ( (byte_438A990 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_2937/*"BlankEarthPoint_"*/);
    byte_438A990 = 1;
  }
  result = (BlankEarthPoint_o *)this->fields.earthSpotRoot;
  if ( !result )
    goto LABEL_13;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  result = (BlankEarthPoint_o *)System_String__Concat_44901936((System_String_o *)StringLiteral_2937/*"BlankEarthPoint_"*/, v6, 0LL);
  if ( !transform )
    goto LABEL_13;
  v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)result, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  result = 0LL;
  if ( v8 )
  {
    if ( v7 )
    {
      result = (BlankEarthPoint_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
      if ( result )
        return (BlankEarthPoint_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)result,
                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    }
LABEL_13:
    sub_B7769C(result, *(_QWORD *)&spotId);
  }
  return result;
}


System_String_o *__fastcall BlankEarth__GetGimmickPrefabName(
        BlankEarthGimmickEntity_o *gimmick,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BlankEarthGimmickEntity_o *v3; // x19
  Il2CppObject *v4; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v3 = gimmick;
  if ( (byte_438A994 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    gimmick = (BlankEarthGimmickEntity_o *)sub_B775C4(&StringLiteral_5948/*"EarthGimmick_{0:00000}"*/);
    byte_438A994 = 1;
  }
  if ( !v3 )
    sub_B7769C(gimmick, method);
  objectId = v3->fields.objectId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId, v2);
  return System_String__Format((System_String_o *)StringLiteral_5948/*"EarthGimmick_{0:00000}"*/, v4, 0LL);
}


float __fastcall BlankEarth__GetSafeLatitude(BlankEarth_o *this, float latitudeDegree, const MethodInfo *method)
{
  return UnityEngine_Mathf__Clamp(latitudeDegree, -this->fields.maxAngle, this->fields.maxAngle, 0LL);
}


System_String_o *__fastcall BlankEarth__GetSpotPrefabName(BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  __int64 v2; // x2
  BlankEarthSpotEntity_o *v3; // x19
  Il2CppObject *v4; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v3 = spot;
  if ( (byte_438A998 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    spot = (BlankEarthSpotEntity_o *)sub_B775C4(&StringLiteral_5950/*"EarthPoint_{0:00000}"*/);
    byte_438A998 = 1;
  }
  if ( !v3 )
    sub_B7769C(spot, method);
  objectId = v3->fields.objectId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId, v2);
  return System_String__Format((System_String_o *)StringLiteral_5950/*"EarthPoint_{0:00000}"*/, v4, 0LL);
}


int32_t __fastcall BlankEarth__GetState(BlankEarth_o *this, const MethodInfo *method)
{
  BlankEarth_o *v2; // x19
  struct CStateManager_BlankEarth__o *mFSM; // x8

  v2 = this;
  if ( (byte_438A98A & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_B775C4(&Method_CStateManager_BlankEarth__getState__);
    byte_438A98A = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B7769C(this, method);
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BlankEarth__IsJustState(BlankEarth_o *this, int32_t state, const MethodInfo *method)
{
  return BlankEarth__GetState(this, *(const MethodInfo **)&state) == state;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Quaternion_o __fastcall BlankEarth__LoadEarthRotate(BlankEarth_o *this, const MethodInfo *method)
{
  BlankEarth_c *v3; // x0
  System_String_o *String_36337972; // x21
  System_Char_array *IsNullOrEmpty; // x0
  System_Char_array *v6; // x1
  System_String_array *v7; // x20
  float v8; // s0
  float v9; // s8
  float v10; // s0
  float v11; // s9
  float v12; // s2
  BlankEarth_c *v13; // x0
  float *p_x; // x8
  float v15; // s0
  float v16; // s1
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  __int64 v21; // x0
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438A98F & 1) == 0 )
  {
    sub_B775C4(&BlankEarth_TypeInfo);
    sub_B775C4(&char___TypeInfo);
    byte_438A98F = 1;
  }
  v3 = BlankEarth_TypeInfo;
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v3 = BlankEarth_TypeInfo;
  }
  String_36337972 = UnityEngine_PlayerPrefs__GetString_36337972(v3->static_fields->BLANK_EARTH_ROTATE_KEY, 0LL);
  IsNullOrEmpty = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_21;
  v6 = IsNullOrEmpty;
  if ( !IsNullOrEmpty->max_length )
    goto LABEL_22;
  IsNullOrEmpty->m_Items[2] = 44;
  if ( !String_36337972 )
    goto LABEL_21;
  v7 = System_String__Split(String_36337972, IsNullOrEmpty, 0LL);
  IsNullOrEmpty = (System_Char_array *)System_String__IsNullOrEmpty(String_36337972, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_16;
  if ( !v7 )
LABEL_21:
    sub_B7769C(IsNullOrEmpty, v6);
  if ( v7->max_length == 4 )
  {
    this->fields.totalAngle = System_Single__Parse(v7->m_Items[3], 0LL);
    if ( v7->max_length )
    {
      v8 = System_Single__Parse(v7->m_Items[0], 0LL);
      if ( v7->max_length > 1 )
      {
        v9 = v8;
        v10 = System_Single__Parse(v7->m_Items[1], 0LL);
        if ( v7->max_length > 2 )
        {
          v11 = v10;
          v12 = System_Single__Parse(v7->m_Items[2], 0LL);
          goto LABEL_20;
        }
      }
    }
LABEL_22:
    v21 = sub_B776C8(IsNullOrEmpty);
    sub_B77668(v21, 0LL);
  }
LABEL_16:
  this->fields.totalAngle = -this->fields.maxAngle;
  v13 = BlankEarth_TypeInfo;
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v13 = BlankEarth_TypeInfo;
  }
  p_x = &v13->static_fields->SOUTH_POLE_ROTATE.fields.x;
  v9 = *p_x;
  v11 = p_x[1];
  v12 = p_x[2];
LABEL_20:
  v15 = v9;
  v16 = v11;
  *(UnityEngine_Quaternion_o *)&v17 = UnityEngine_Quaternion__Euler_36342120(*(UnityEngine_Vector3_o *)(&v12 - 2), 0LL);
  result.fields.w = v20;
  result.fields.z = v19;
  result.fields.y = v18;
  result.fields.x = v17;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__OnApplicationPause(BlankEarth_o *this, bool paused, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( paused && BlankEarth__GetState(this, (const MethodInfo *)paused) == 2 )
    BlankEarth__SaveEarthRotate(this, v4);
}


void __fastcall BlankEarth__OnPress(BlankEarth_o *this, const MethodInfo *method)
{
  this->fields.isTouch = 1;
}


void __fastcall BlankEarth__OnPressRotateBtnX(BlankEarth_o *this, bool isLeft, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_438A9A2 & 1) == 0 )
  {
    sub_B775C4(&Method_BlankEarth_OnPressRotateBtnX__);
    byte_438A9A2 = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnX__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnX__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B775CC(Method_BlankEarth_OnPressRotateBtnX__);
  v6 = (System_Reflection_MethodBase_o *)sub_B775A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  this->fields.isLeft = isLeft;
  this->fields.isBtnTouchX = 1;
}


void __fastcall BlankEarth__OnPressRotateBtnY(BlankEarth_o *this, bool isUp, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_438A9A3 & 1) == 0 )
  {
    sub_B775C4(&Method_BlankEarth_OnPressRotateBtnY__);
    byte_438A9A3 = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnY__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnY__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B775CC(Method_BlankEarth_OnPressRotateBtnY__);
  v6 = (System_Reflection_MethodBase_o *)sub_B775A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  this->fields.isUp = isUp;
  this->fields.isBtnTouchY = 1;
}


void __fastcall BlankEarth__OnRelease(BlankEarth_o *this, const MethodInfo *method)
{
  this->fields.isTouch = 0;
}


void __fastcall BlankEarth__OnReleaseRotateBtn(BlankEarth_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isBtnTouchX = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__PlaySpotUniqueAnim(
        BlankEarth_o *this,
        BlankEarthSpotEntity_o *spot,
        int32_t animIndex,
        bool isQuick,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_438A9A0 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A9A0 = 1;
  }
  if ( spot )
    spot = (BlankEarthSpotEntity_o *)BlankEarth__GetEarthPoint(this, spot->fields.id, *(const MethodInfo **)&animIndex);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)spot, 0LL, 0LL);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !spot )
      sub_B7769C(v11, v12);
    BlankEarthPoint__PlaySpotUniqueAnim((BlankEarthPoint_o *)spot, animIndex, isQuick, finishCallback, 0LL);
  }
}


void __fastcall BlankEarth__PutAllGimmick(BlankEarth_o *this, const MethodInfo *method)
{
  BlankEarthGimmickMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  BlankEarthGimmickMaster_o *v7; // x20
  unsigned __int64 v8; // x21
  __int64 v9; // x0

  if ( (byte_438A992 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438A992 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BlankEarthGimmickMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (BlankEarthGimmickMaster_o *)BlankEarthGimmickMaster__GetAllGimmick(
                                                                        Master_WarQuestSelectionMaster,
                                                                        0LL)) == 0LL )
  {
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
  }
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v7 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)MasterName_k__BackingField )
      {
        v9 = sub_B776C8(Master_WarQuestSelectionMaster);
        sub_B77668(v9, 0LL);
      }
      BlankEarth__PutGimmick(this, *((BlankEarthGimmickEntity_o **)&v7->fields.list + v8), v5);
      LODWORD(MasterName_k__BackingField) = v7->fields._MasterName_k__BackingField;
      ++v8;
    }
    while ( (__int64)v8 < (int)MasterName_k__BackingField );
  }
}


void __fastcall BlankEarth__PutAllSpots(BlankEarth_o *this, int32_t beforeClearQuestId, const MethodInfo *method)
{
  BlankEarthSpotMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *All; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v7; // x21
  System_Collections_Generic_IEnumerable_T__o *v8; // x0
  System_Collections_Generic_IEnumerable_T__o *v9; // x0

  if ( (byte_438A996 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
    sub_B775C4(&Method_BlankEarth_PutSpot__);
    sub_B775C4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
    sub_B775C4(&Method_System_Func_BlankEarthSpotEntity__BlankEarthPoint___ctor__);
    sub_B775C4(&System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo);
    byte_438A996 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BlankEarthSpotMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7769C(0LL, v5);
  All = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__GetAll(
                                                               Master_WarQuestSelectionMaster,
                                                               0LL);
  v7 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BlankEarth_PutSpot__,
    (const MethodInfo_29EAA10 *)Method_System_Func_BlankEarthSpotEntity__BlankEarthPoint___ctor__);
  v8 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                        All,
                                                        (System_Func_TSource__TResult__o *)v7,
                                                        (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
  v9 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
         v8,
         (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
  System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_TSource__o *)v9,
    (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
}


void __fastcall BlankEarth__PutGimmick(
        BlankEarth_o *this,
        BlankEarthGimmickEntity_o *gimmick,
        const MethodInfo *method)
{
  BlankEarth_o *v4; // x20
  float z; // s12
  float v6; // s10
  float v7; // s11
  float v8; // s0
  float earthRadius; // s13
  float v10; // s8
  float v11; // s9
  float v12; // s0
  float v13; // s14
  float v14; // s10
  float v15; // s11
  AssetManager_o *v16; // x21
  const MethodInfo *v17; // x1
  AssetData_o *Asset_24425464; // x21
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x21
  const MethodInfo *v20; // x3

  v4 = this;
  if ( (byte_438A993 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&BlankEarth_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ScrTerminalListTop_TypeInfo);
    this = (BlankEarth_o *)sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A993 = 1;
  }
  if ( !gimmick )
    goto LABEL_18;
  z = gimmick->fields.z;
  v6 = gimmick->fields.x * 0.017453;
  v7 = (float)(gimmick->fields.y + v4->fields.greenwichOffset) * 0.017453;
  v8 = cosf(v6);
  earthRadius = v4->fields.earthRadius;
  v10 = v8;
  v11 = cosf(v7);
  v12 = sinf(v6);
  v13 = v4->fields.earthRadius;
  v14 = v12;
  v15 = sinf(v7);
  this = (BlankEarth_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v16 = (AssetManager_o *)this;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v16 )
    goto LABEL_18;
  Asset_24425464 = AssetManager__GetAsset_24425464(
                     v16,
                     ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH,
                     0LL);
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
  this = (BlankEarth_o *)BlankEarth__GetGimmickPrefabName(gimmick, v17);
  if ( !Asset_24425464 )
LABEL_18:
    sub_B7769C(this, gimmick);
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 Asset_24425464,
                                                                 (System_String_o *)this,
                                                                 (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    BlankEarth__CreateGimmick(
      v4,
      Object_WarBoardWaitTimeSetting,
      gimmick,
      v11 * (float)(v10 * (float)(z + earthRadius)),
      v14 * v13,
      (float)(v10 * (float)(z + earthRadius)) * v15,
      v20);
}


BlankEarthPoint_o *__fastcall BlankEarth__PutSpot(
        BlankEarth_o *this,
        BlankEarthSpotEntity_o *spot,
        const MethodInfo *method)
{
  BlankEarth_o *v4; // x20
  float v5; // s10
  float v6; // s11
  float v7; // s0
  float earthRadius; // s12
  float v9; // s8
  float v10; // s9
  float v11; // s0
  float v12; // s13
  float v13; // s10
  float v14; // s11
  AssetManager_o *v15; // x21
  const MethodInfo *v16; // x1
  AssetData_o *Asset_24425464; // x21
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x21
  const MethodInfo *v19; // x3

  v4 = this;
  if ( (byte_438A997 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&BlankEarth_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ScrTerminalListTop_TypeInfo);
    this = (BlankEarth_o *)sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A997 = 1;
  }
  if ( !spot )
    goto LABEL_18;
  v5 = spot->fields.x * 0.017453;
  v6 = (float)(spot->fields.y + v4->fields.greenwichOffset) * 0.017453;
  v7 = cosf(v5);
  earthRadius = v4->fields.earthRadius;
  v9 = v7;
  v10 = cosf(v6);
  v11 = sinf(v5);
  v12 = v4->fields.earthRadius;
  v13 = v11;
  v14 = sinf(v6);
  this = (BlankEarth_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v15 = (AssetManager_o *)this;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v15 )
    goto LABEL_18;
  Asset_24425464 = AssetManager__GetAsset_24425464(
                     v15,
                     ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH,
                     0LL);
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
  this = (BlankEarth_o *)BlankEarth__GetSpotPrefabName(spot, v16);
  if ( !Asset_24425464 )
LABEL_18:
    sub_B7769C(this, spot);
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 Asset_24425464,
                                                                 (System_String_o *)this,
                                                                 (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    return 0LL;
  else
    return BlankEarth__CreateSpot(
             v4,
             Object_WarBoardWaitTimeSetting,
             spot,
             v10 * (float)(v9 * (float)(earthRadius + 0.0)),
             v13 * v12,
             (float)(v9 * (float)(earthRadius + 0.0)) * v14,
             v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__RevealEarthPoint(
        BlankEarth_o *this,
        BlankEarthSpotEntity_o *spot,
        int32_t dispType,
        bool isQuick,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_438A99F & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A99F = 1;
  }
  if ( spot )
    spot = (BlankEarthSpotEntity_o *)BlankEarth__GetEarthPoint(this, spot->fields.id, *(const MethodInfo **)&dispType);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)spot, 0LL, 0LL);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !spot )
      sub_B7769C(v11, v12);
    BlankEarthPoint__RevealOrConcealSpotAnim((BlankEarthPoint_o *)spot, dispType, isQuick, finishCallback, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__RotateEarthByLatLong(
        BlankEarth_o *this,
        UnityEngine_Vector2_o latLongVector,
        float time,
        int32_t easeType,
        bool isShortcut,
        System_Action_BlankEarth_QAARotateEarthResponse__o *finishCallback,
        BlankEarth_RotateEarthTimeCalculateParam_o *rotateTimeCalculateParam,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s10
  BlankEarth_QAARotateEarthParam_o *v16; // x0
  struct BlankEarth_QAARotateEarthParam_o *v17; // x24
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  int32_t v33; // w1
  UnityEngine_Vector2_o v34; // 0:s1.4,4:s2.4

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  if ( (byte_438A99E & 1) == 0 )
  {
    sub_B775C4(&BlankEarth_QAARotateEarthParam_TypeInfo);
    byte_438A99E = 1;
  }
  v16 = (BlankEarth_QAARotateEarthParam_o *)sub_B77694(BlankEarth_QAARotateEarthParam_TypeInfo);
  v34.fields.x = x;
  v34.fields.y = y;
  v17 = v16;
  BlankEarth_QAARotateEarthParam___ctor(v16, time, v34, easeType, finishCallback, 0LL);
  this->fields.qaaRotateEarthParam = v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.qaaRotateEarthParam,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.rotateEarthTimeCalculateParam = rotateTimeCalculateParam;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.rotateEarthTimeCalculateParam,
    (System_Int32_array **)rotateTimeCalculateParam,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !this )
    sub_B7769C(v30, v31);
  if ( isShortcut )
    v33 = 6;
  else
    v33 = 5;
  BlankEarth__SetState(this, v33, v32);
}


void __fastcall BlankEarth__RotateEarthTowardsGimmick(
        BlankEarth_o *this,
        BlankEarthGimmickEntity_o *blankEarthGimmickEntity,
        float time,
        int32_t easeType,
        bool isShortcut,
        System_Action_BlankEarth_QAARotateEarthResponse__o *finishCallback,
        const MethodInfo *method)
{
  BlankEarth_QAARotateEarthResponse_o *v13; // x20

  if ( (byte_438A99D & 1) == 0 )
  {
    sub_B775C4(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_B775C4(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_438A99D = 1;
  }
  if ( blankEarthGimmickEntity )
  {
    BlankEarth__RotateEarthByLatLong(
      this,
      *(UnityEngine_Vector2_o *)&blankEarthGimmickEntity->fields.x,
      time,
      easeType,
      isShortcut,
      finishCallback,
      0LL,
      method);
  }
  else
  {
    v13 = (BlankEarth_QAARotateEarthResponse_o *)sub_B77694(BlankEarth_QAARotateEarthResponse_TypeInfo);
    BlankEarth_QAARotateEarthResponse___ctor(v13, 1, 0LL);
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      (System_Action_T__o *)finishCallback,
      v13,
      (const MethodInfo_2C3C35C *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
  }
}


void __fastcall BlankEarth__RotateEarthTowardsSpot(
        BlankEarth_o *this,
        BlankEarthSpotEntity_o *blankEarthSpotEntity,
        float time,
        int32_t easeType,
        bool isShortcut,
        System_Action_BlankEarth_QAARotateEarthResponse__o *finishCallback,
        BlankEarth_RotateEarthTimeCalculateParam_o *rotateTimeCalculateParam,
        const MethodInfo *method)
{
  BlankEarth_QAARotateEarthResponse_o *v15; // x20

  if ( (byte_438A99C & 1) == 0 )
  {
    sub_B775C4(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_B775C4(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_438A99C = 1;
  }
  if ( blankEarthSpotEntity )
  {
    BlankEarth__RotateEarthByLatLong(
      this,
      *(UnityEngine_Vector2_o *)&blankEarthSpotEntity->fields.x,
      time,
      easeType,
      isShortcut,
      finishCallback,
      rotateTimeCalculateParam,
      (const MethodInfo *)rotateTimeCalculateParam);
  }
  else
  {
    v15 = (BlankEarth_QAARotateEarthResponse_o *)sub_B77694(BlankEarth_QAARotateEarthResponse_TypeInfo);
    BlankEarth_QAARotateEarthResponse___ctor(v15, 1, 0LL);
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      (System_Action_T__o *)finishCallback,
      v15,
      (const MethodInfo_2C3C35C *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
  }
}


void __fastcall BlankEarth__SaveEarthRotate(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0
  BlankEarth_o *v4; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  blankEarth = this->fields.blankEarth;
  if ( !blankEarth )
    sub_B7769C(0LL, method);
  rotation = UnityEngine_Transform__get_rotation(blankEarth, 0LL);
  BlankEarth__SaveQuaternionAndTotalAngle(v4, rotation, this->fields.totalAngle, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SaveQuaternionAndTotalAngle(
        BlankEarth_o *this,
        UnityEngine_Quaternion_o qua,
        float totalAngle,
        const MethodInfo *method)
{
  BlankEarth_c *v4; // x0
  System_String_o *BLANK_EARTH_ROTATE_KEY; // x19
  System_String_array *v6; // x20
  float v7; // s0
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  float v24; // s0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  float v39; // s0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  float v54; // s0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x21
  System_String_o *v62; // x0
  __int64 v63; // x0
  __int64 v64; // x0
  UnityEngine_Vector3_o eulerAngles; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF

  methoda.methodPointer = *(Il2CppMethodPointer *)&qua.fields.x;
  methoda.invoker_method = *(void **)&qua.fields.z;
  *((float *)&methoda.klass + 1) = totalAngle;
  if ( (byte_438A99B & 1) == 0 )
  {
    sub_B775C4(&BlankEarth_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_714/*","*/);
    byte_438A99B = 1;
  }
  eulerAngles = UnityEngine_Quaternion__get_eulerAngles(qua, &methoda);
  v4 = BlankEarth_TypeInfo;
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v4 = BlankEarth_TypeInfo;
  }
  BLANK_EARTH_ROTATE_KEY = v4->static_fields->BLANK_EARTH_ROTATE_KEY;
  v6 = (System_String_array *)sub_B775DC(string___TypeInfo, 7LL);
  v8 = System_Single__ToString(v7, (const MethodInfo *)&eulerAngles);
  if ( !v6 )
    sub_B7769C(v8, v9);
  v16 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (System_String_o *)sub_B77684(v8, v6->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_36;
  }
  if ( !v6->max_length )
    goto LABEL_35;
  v6->m_Items[0] = (System_String_o *)v16;
  sub_B77560((BattleServantConfConponent_o *)v6->m_Items, v16, v10, v11, v12, v13, v14, v15);
  v8 = (System_String_o *)StringLiteral_714/*","*/;
  if ( StringLiteral_714/*","*/ )
  {
    v8 = (System_String_o *)sub_B77684(StringLiteral_714/*","*/, v6->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_36;
    v23 = (System_Int32_array **)StringLiteral_714/*","*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v6->max_length <= 1 )
    goto LABEL_35;
  v6->m_Items[1] = (System_String_o *)v23;
  sub_B77560((BattleServantConfConponent_o *)&v6->m_Items[1], v23, v17, v18, v19, v20, v21, v22);
  v8 = System_Single__ToString(v24, (const MethodInfo *)&eulerAngles.fields.y);
  v31 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (System_String_o *)sub_B77684(v8, v6->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_36;
  }
  if ( v6->max_length <= 2 )
    goto LABEL_35;
  v6->m_Items[2] = (System_String_o *)v31;
  sub_B77560((BattleServantConfConponent_o *)&v6->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  v8 = (System_String_o *)StringLiteral_714/*","*/;
  if ( StringLiteral_714/*","*/ )
  {
    v8 = (System_String_o *)sub_B77684(StringLiteral_714/*","*/, v6->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_36;
    v38 = (System_Int32_array **)StringLiteral_714/*","*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v6->max_length <= 3 )
    goto LABEL_35;
  v6->m_Items[3] = (System_String_o *)v38;
  sub_B77560((BattleServantConfConponent_o *)&v6->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
  v8 = System_Single__ToString(v39, (const MethodInfo *)&eulerAngles.fields.z);
  v46 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (System_String_o *)sub_B77684(v8, v6->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_36;
  }
  if ( v6->max_length <= 4 )
    goto LABEL_35;
  v6->m_Items[4] = (System_String_o *)v46;
  sub_B77560((BattleServantConfConponent_o *)&v6->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  v8 = (System_String_o *)StringLiteral_714/*","*/;
  if ( StringLiteral_714/*","*/ )
  {
    v8 = (System_String_o *)sub_B77684(StringLiteral_714/*","*/, v6->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_36;
    v53 = (System_Int32_array **)StringLiteral_714/*","*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( v6->max_length <= 5 )
    goto LABEL_35;
  v6->m_Items[5] = (System_String_o *)v53;
  sub_B77560((BattleServantConfConponent_o *)&v6->m_Items[5], v53, v47, v48, v49, v50, v51, v52);
  v8 = System_Single__ToString(v54, (const MethodInfo *)((char *)&methoda.klass + 4));
  v61 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (System_String_o *)sub_B77684(v8, v6->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_36:
      v64 = sub_B776BC(v8);
      sub_B77668(v64, 0LL);
    }
  }
  if ( v6->max_length <= 6 )
  {
LABEL_35:
    v63 = sub_B776C8(v8);
    sub_B77668(v63, 0LL);
  }
  v6->m_Items[6] = (System_String_o *)v61;
  sub_B77560((BattleServantConfConponent_o *)&v6->m_Items[6], v61, v55, v56, v57, v58, v59, v60);
  v62 = System_String__Concat_44982964(v6, 0LL);
  UnityEngine_PlayerPrefs__SetString(BLANK_EARTH_ROTATE_KEY, v62, 0LL);
}


void __fastcall BlankEarth__SaveSpotRotation(
        BlankEarth_o *this,
        BlankEarthSpotEntity_o *spotEnt,
        const MethodInfo *method)
{
  float z; // s10
  float x; // s8
  float y; // s9
  float w; // s11
  float v9; // s0
  float v10; // s4
  BlankEarth_o *v11; // x0
  const MethodInfo *v12; // x1
  UnityEngine_Quaternion_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( spotEnt )
  {
    v13 = BlankEarth__ConvertLatLongToSafePointQuaternion(
            this,
            *(UnityEngine_Vector2_o *)&spotEnt->fields.x,
            (const MethodInfo *)spotEnt);
    z = v13.fields.z;
    x = v13.fields.x;
    y = v13.fields.y;
    w = v13.fields.w;
    v9 = UnityEngine_Mathf__Clamp(spotEnt->fields.x, -this->fields.maxAngle, this->fields.maxAngle, 0LL);
    this->fields.totalAngle = v9;
    v10 = v9;
    v14.fields.x = x;
    v14.fields.y = y;
    v14.fields.z = z;
    v14.fields.w = w;
    BlankEarth__SaveQuaternionAndTotalAngle(v11, v14, v10, v12);
  }
}


void __fastcall BlankEarth__SetActionAfterStateChange(
        BlankEarth_o *this,
        int32_t state,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BlankEarth__CoStandByChangeState(this, state, callback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetEarthRotate(BlankEarth_o *this, UnityEngine_Quaternion_o qua, const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0

  blankEarth = this->fields.blankEarth;
  if ( !blankEarth )
    sub_B7769C(0LL, method);
  UnityEngine_Transform__set_rotation(blankEarth, qua, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetFocusEarthPoint(BlankEarth_o *this, int32_t spotId, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  BlankEarth_o *v4; // x19
  const MethodInfo *v6; // x2
  System_Int32_array **EarthPoint; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (v4 = this, (this = (BlankEarth_o *)mTerminalList->fields.mActionBgColl) == 0LL)
    || (this = (BlankEarth_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_B7769C(this, *(_QWORD *)&spotId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  EarthPoint = (System_Int32_array **)BlankEarth__GetEarthPoint(v4, spotId, v6);
  v4->fields.focusEarthPoint = (struct BlankEarthPoint_o *)EarthPoint;
  sub_B77560((BattleServantConfConponent_o *)&v4->fields.focusEarthPoint, EarthPoint, v8, v9, v10, v11, v12, v13);
}


void __fastcall BlankEarth__SetMainState(BlankEarth_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BlankEarth__SetState(this, 2, v2);
}


void __fastcall BlankEarth__SetOrdealCallFolder(
        BlankEarth_o *this,
        ScrTerminalListTop_CaldeaFolderInfo_o *folderInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.ordealCallFolderInfo = folderInfo;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.ordealCallFolderInfo,
    (System_Int32_array **)folderInfo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetState(BlankEarth_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_BlankEarth__o *mFSM; // x0

  if ( (byte_438A98B & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_BlankEarth__setState__);
    byte_438A98B = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B7769C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2CBF220 *)Method_CStateManager_BlankEarth__setState__);
}


void __fastcall BlankEarth__SetTutorialFlag(BlankEarth_o *this, bool isAvailable, const MethodInfo *method)
{
  this->fields.isTutorialAvailable = isAvailable;
}


void __fastcall BlankEarth__SetTutorialWaitSkipFlag(BlankEarth_o *this, bool isSkip, const MethodInfo *method)
{
  this->fields.isSkipTutorialWait = isSkip;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetZoomEarth(BlankEarth_o *this, const MethodInfo *method)
{
  struct BlankEarthPoint_o **p_focusEarthPoint; // x20
  UnityEngine_Object_o *focusEarthPoint; // x21
  UnityEngine_GameObject_o *earthRoot; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  TerminalPramsManager_c *v8; // x0
  struct BlankEarthPoint_o *EarthPoint; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  float *v16; // x8
  float v17; // s8
  float v18; // s9
  float v19; // s10
  float v20; // s11
  UnityEngine_Transform_o *blankEarth; // x20
  float zoomInOffset; // s12
  float y; // s4
  float z; // s5
  float v25; // s3
  int v26; // s0
  UnityEngine_Transform_o *transform; // x20
  int v31; // s0
  const MethodInfo *v35; // x2
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v39; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_438A9A1 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438A9A1 = 1;
  }
  p_focusEarthPoint = &this->fields.focusEarthPoint;
  focusEarthPoint = (UnityEngine_Object_o *)this->fields.focusEarthPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(focusEarthPoint, 0LL, 0LL);
  if ( ((unsigned __int8)earthRoot & 1) != 0 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387468 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387468 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    EarthPoint = BlankEarth__GetEarthPoint(this, v8->static_fields->_BlankEarthSpotId_k__BackingField, v7);
    this->fields.focusEarthPoint = EarthPoint;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.focusEarthPoint,
      (System_Int32_array **)EarthPoint,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (float *)*p_focusEarthPoint;
  if ( !*p_focusEarthPoint )
    goto LABEL_27;
  v17 = v16[60];
  v18 = v16[61];
  v19 = v16[62];
  v20 = v16[63];
  blankEarth = this->fields.blankEarth;
  zoomInOffset = this->fields.zoomInOffset;
  up = UnityEngine_Vector3__get_up(0LL);
  y = up.fields.y;
  z = up.fields.z;
  up.fields.y = up.fields.x;
  up.fields.z = y;
  v25 = z;
  v38 = UnityEngine_Quaternion__AngleAxis(-zoomInOffset, *(UnityEngine_Vector3_o *)&up.fields.y, 0LL);
  v39.fields.x = v17;
  v39.fields.y = v18;
  v39.fields.z = v19;
  v39.fields.w = v20;
  *(UnityEngine_Quaternion_o *)&v26 = UnityEngine_Quaternion__op_Multiply(v38, v39, 0LL);
  if ( !blankEarth )
    goto LABEL_27;
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v26, 0LL);
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_27;
  transform = UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  *(UnityEngine_Quaternion_o *)&v31 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !transform )
    goto LABEL_27;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v31, 0LL);
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_27;
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !earthRoot )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)earthRoot, this->fields.zoomInPos, 0LL);
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_27;
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !earthRoot
    || (v37.fields.x = this->fields.zoomInScl,
        v37.fields.y = v37.fields.x,
        v37.fields.z = v37.fields.x,
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)earthRoot, v37, 0LL),
        (earthRoot = (UnityEngine_GameObject_o *)this->fields.mTerminalList) == 0LL)
    || (ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)earthRoot, 0, 1, 0LL),
        (earthRoot = (UnityEngine_GameObject_o *)this->fields.mTerminalList) == 0LL) )
  {
LABEL_27:
    sub_B7769C(earthRoot, v6);
  }
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)earthRoot, 0.0, 0, 1, 0LL);
  BlankEarth__SetState(this, 3, v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SwitchDispPresentBoxHideGameObject(
        BlankEarth_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *presentBoxHideGameObjectList; // x20
  int max_length; // w8
  __int64 v5; // x21
  bool v6; // w19
  UnityEngine_GameObject_o *v7; // x0
  __int64 v8; // x0

  presentBoxHideGameObjectList = this->fields.presentBoxHideGameObjectList;
  if ( presentBoxHideGameObjectList )
  {
    max_length = presentBoxHideGameObjectList->max_length;
    if ( max_length >= 1 )
    {
      v5 = 0LL;
      v6 = isDisp;
      do
      {
        if ( (unsigned int)v5 >= max_length )
        {
          v8 = sub_B776C8(this);
          sub_B77668(v8, 0LL);
        }
        v7 = presentBoxHideGameObjectList->m_Items[v5];
        if ( !v7 )
          sub_B7769C(0LL, isDisp);
        UnityEngine_GameObject__SetActive(v7, v6, 0LL);
        max_length = presentBoxHideGameObjectList->max_length;
        ++v5;
      }
      while ( (int)v5 < max_length );
    }
  }
}


void __fastcall BlankEarth__Update(BlankEarth_o *this, const MethodInfo *method)
{
  struct CStateManager_BlankEarth__o *mFSM; // x0

  if ( (byte_438A989 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_BlankEarth__update__);
    byte_438A989 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2CBF1F8 *)Method_CStateManager_BlankEarth__update__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthTransform_o *__fastcall BlankEarth__UpdateBlankEarthTransformData(
        BlankEarth_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *earthRoot; // x0
  BlankEarthTransform_o *v4; // x20
  float v5; // s0
  float v6; // s1
  float v7; // s2
  float v8; // s3
  float v9; // s11
  float v10; // s10
  float v11; // s9
  float v12; // s8
  UnityEngine_GameObject_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  BlankEarthTransform_o *v21; // x0
  const MethodInfo *v22; // x5
  TerminalPramsManager_c *v23; // x0
  BattleServantConfConponent_o *p_BlankEarthTransformData_k__BackingField; // x0
  float totalAng; // [xsp+34h] [xbp-6Ch]
  float w; // [xsp+38h] [xbp-68h]
  float earthRootRot; // [xsp+3Ch] [xbp-64h]
  float y; // [xsp+88h] [xbp-18h]
  float x; // [xsp+8Ch] [xbp-14h]
  UnityEngine_Vector3_o v31; // 0:x1.12
  UnityEngine_Vector3_o v32; // 0:x3.12
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v35; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_438A9A4 & 1) == 0 )
  {
    sub_B775C4(&BlankEarthTransform_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438A9A4 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43885B6 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43885B6 = 1;
  }
  earthRoot = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    earthRoot = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !this->fields.blankEarth )
    goto LABEL_30;
  v4 = *(BlankEarthTransform_o **)(*(_QWORD *)&earthRoot[7].fields.m_CachedPtr + 512LL);
  *(UnityEngine_Quaternion_o *)&v5 = UnityEngine_Transform__get_rotation(this->fields.blankEarth, 0LL);
  v9 = v5;
  v10 = v6;
  v11 = v7;
  v12 = v8;
  if ( !v4 )
  {
    earthRoot = this->fields.earthRoot;
    if ( earthRoot )
    {
      earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
      if ( earthRoot )
      {
        rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)earthRoot, 0LL);
        y = rotation.fields.y;
        x = rotation.fields.x;
        w = rotation.fields.w;
        earthRootRot = rotation.fields.z;
        LODWORD(totalAng) = (unsigned int)GameObjectExtensions__GetLocalPosition(this->fields.earthRoot, 0LL);
        earthRoot = this->fields.earthRoot;
        if ( earthRoot )
        {
          gameObject = UnityEngine_GameObject__get_gameObject(earthRoot, 0LL);
          GameObjectExtensions__GetLocalScale(gameObject, 0LL);
          v21 = (BlankEarthTransform_o *)sub_B77694(BlankEarthTransform_TypeInfo);
          v35.fields.y = y;
          v35.fields.x = x;
          v35.fields.z = earthRootRot;
          v34.fields.y = v10;
          v35.fields.w = w;
          v34.fields.z = v11;
          v34.fields.w = v12;
          *(_QWORD *)&v31.fields.x = 0LL;
          v4 = v21;
          v34.fields.x = v9;
          BlankEarthTransform___ctor(v21, v34, v35, v31, v32, totalAng, v22);
          goto LABEL_21;
        }
      }
    }
LABEL_30:
    sub_B7769C(earthRoot, method);
  }
  v4->fields.blankEarthRotation.fields.x = v5;
  v4->fields.blankEarthRotation.fields.y = v6;
  v4->fields.blankEarthRotation.fields.z = v7;
  v4->fields.blankEarthRotation.fields.w = v8;
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_30;
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !earthRoot )
    goto LABEL_30;
  v4->fields.earthRootRotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)earthRoot, 0LL);
  v4->fields.earthRootLocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.earthRoot, 0LL);
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_30;
  v13 = UnityEngine_GameObject__get_gameObject(earthRoot, 0LL);
  v4->fields.earthRootLocalScale = GameObjectExtensions__GetLocalScale(v13, 0LL);
  v4->fields.totalAngle = this->fields.totalAngle;
LABEL_21:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438A9A7 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438A9A7 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  p_BlankEarthTransformData_k__BackingField = (BattleServantConfConponent_o *)&v23->static_fields->_BlankEarthTransformData_k__BackingField;
  p_BlankEarthTransformData_k__BackingField->klass = (BattleServantConfConponent_c *)v4;
  sub_B77560(p_BlankEarthTransformData_k__BackingField, (System_Int32_array **)v4, v14, v15, v16, v17, v18, v19);
  return v4;
}


void __fastcall BlankEarth__UpdateSpotDisp(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *earthSpotRoot; // x0
  System_Collections_Generic_IEnumerable_T__o *v4; // x19
  BlankEarth___c_c *v5; // x8
  struct BlankEarth___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__108_0; // x20
  Il2CppObject *v8; // x21
  struct BlankEarth___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_438A99A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BlankEarthPoint___ctor__);
    sub_B775C4(&System_Action_BlankEarthPoint__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_BlankEarthPoint___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_B775C4(&Method_BlankEarth___c__UpdateSpotDisp_b__108_0__);
    sub_B775C4(&BlankEarth___c_TypeInfo);
    byte_438A99A = 1;
  }
  earthSpotRoot = this->fields.earthSpotRoot;
  if ( !earthSpotRoot )
    sub_B7769C(0LL, method);
  v4 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__31376384(
                                                        earthSpotRoot,
                                                        (const MethodInfo_1DEC400 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  v5 = BlankEarth___c_TypeInfo;
  if ( (BYTE3(BlankEarth___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarth___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo);
    v5 = BlankEarth___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__108_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = BlankEarth___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__108_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BlankEarthPoint__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__108_0,
      v8,
      Method_BlankEarth___c__UpdateSpotDisp_b__108_0__,
      (const MethodInfo_26A0868 *)Method_System_Action_BlankEarthPoint___ctor__);
    v9 = BlankEarth___c_TypeInfo->static_fields;
    v9->__9__108_0 = (struct System_Action_BlankEarthPoint__o *)_9__108_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->__9__108_0,
      (System_Int32_array **)_9__108_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v4,
    (System_Action_T__o *)_9__108_0,
    (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_BlankEarthPoint___);
}


void __fastcall BlankEarth__UpdateTotalAngle(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *blankEarth; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  blankEarth = (UnityEngine_Component_o *)this->fields.blankEarth;
  if ( !blankEarth
    || (blankEarth = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(blankEarth, 0LL)) == 0LL )
  {
    sub_B7769C(blankEarth, method);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
  v11 = UnityEngine_Quaternion__Inverse(rotation, 0LL);
  x = v11.fields.x;
  y = v11.fields.y;
  z = v11.fields.z;
  w = v11.fields.w;
  *(UnityEngine_Vector3_o *)&v12.fields.x = UnityEngine_Vector3__get_back(0LL);
  v9.fields.x = v12.fields.x;
  v9.fields.y = v12.fields.y;
  v9.fields.z = v12.fields.z;
  v12.fields.x = x;
  v12.fields.y = y;
  v12.fields.z = z;
  v12.fields.w = w;
  v8 = UnityEngine_Quaternion__op_Multiply_36341420(v12, v9, 0LL);
  this->fields.totalAngle = asinf(v8.fields.y) * 57.296;
}


float __fastcall BlankEarth__get_EarthBtnMoveSpeedTime(BlankEarth_o *this, const MethodInfo *method)
{
  return this->fields.earthBtnMoveSpeedTime;
}


float __fastcall BlankEarth__get_EarthRadius(BlankEarth_o *this, const MethodInfo *method)
{
  return this->fields.earthRadius;
}


float __fastcall BlankEarth__get_GreenwichOffset(BlankEarth_o *this, const MethodInfo *method)
{
  return this->fields.greenwichOffset;
}


ScrTerminalListTop_CaldeaFolderInfo_o *__fastcall BlankEarth__get_OrdealCallFolderInfo(
        BlankEarth_o *this,
        const MethodInfo *method)
{
  return this->fields.ordealCallFolderInfo;
}


BlankEarthSpotAnimStateManager_o *__fastcall BlankEarth__get_SpotAnimStateManager(
        BlankEarth_o *this,
        const MethodInfo *method)
{
  return this->fields._SpotAnimStateManager_k__BackingField;
}


void __fastcall BlankEarth__set_SpotAnimStateManager(
        BlankEarth_o *this,
        BlankEarthSpotAnimStateManager_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SpotAnimStateManager_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._SpotAnimStateManager_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth_QAARotateEarthParam___ctor(
        BlankEarth_QAARotateEarthParam_o *this,
        float time,
        UnityEngine_Vector2_o latLongVector,
        int32_t easeType,
        System_Action_BlankEarth_QAARotateEarthResponse__o *finishCallback,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  BlankEarth_QAARotateEarthParam_o *v11; // x21

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  v11 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11->fields._FinishCallback_k__BackingField = finishCallback;
  v11 = (BlankEarth_QAARotateEarthParam_o *)((char *)v11 + 32);
  v11[-1].fields._LatLongVector_k__BackingField.fields.y = time;
  *(float *)&v11[-1].fields._EaseType_k__BackingField = x;
  *(float *)&v11[-1].fields._FinishCallback_k__BackingField = y;
  HIDWORD(v11[-1].fields._FinishCallback_k__BackingField) = easeType;
  sub_B77560(v11);
}


int32_t __fastcall BlankEarth_QAARotateEarthParam__get_EaseType(
        BlankEarth_QAARotateEarthParam_o *this,
        const MethodInfo *method)
{
  return this->fields._EaseType_k__BackingField;
}


System_Action_BlankEarth_QAARotateEarthResponse__o *__fastcall BlankEarth_QAARotateEarthParam__get_FinishCallback(
        BlankEarth_QAARotateEarthParam_o *this,
        const MethodInfo *method)
{
  return this->fields._FinishCallback_k__BackingField;
}


UnityEngine_Vector2_o __fastcall BlankEarth_QAARotateEarthParam__get_LatLongVector(
        BlankEarth_QAARotateEarthParam_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields._LatLongVector_k__BackingField.fields.x;
  y = this->fields._LatLongVector_k__BackingField.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float __fastcall BlankEarth_QAARotateEarthParam__get_Time(
        BlankEarth_QAARotateEarthParam_o *this,
        const MethodInfo *method)
{
  return this->fields._Time_k__BackingField;
}


void __fastcall BlankEarth_QAARotateEarthResponse___ctor(
        BlankEarth_QAARotateEarthResponse_o *this,
        bool isInterrupted,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._IsInterrupted_k__BackingField = isInterrupted;
}


bool __fastcall BlankEarth_QAARotateEarthResponse__get_IsInterrupted(
        BlankEarth_QAARotateEarthResponse_o *this,
        const MethodInfo *method)
{
  return this->fields._IsInterrupted_k__BackingField;
}


void __fastcall BlankEarth_RotateEarthTimeCalculateParam___ctor(
        BlankEarth_RotateEarthTimeCalculateParam_o *this,
        float defaultTime,
        float distanceMultipleValue,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._DefaultTime_k__BackingField = defaultTime;
  this->fields._DistanceMultipleValue_k__BackingField = distanceMultipleValue;
}


float __fastcall BlankEarth_RotateEarthTimeCalculateParam__get_DefaultTime(
        BlankEarth_RotateEarthTimeCalculateParam_o *this,
        const MethodInfo *method)
{
  return this->fields._DefaultTime_k__BackingField;
}


float __fastcall BlankEarth_RotateEarthTimeCalculateParam__get_DistanceMultipleValue(
        BlankEarth_RotateEarthTimeCalculateParam_o *this,
        const MethodInfo *method)
{
  return this->fields._DistanceMultipleValue_k__BackingField;
}


void __fastcall BlankEarth_StateEarthAutoRotateBase___ctor(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__OnRotateCompleted(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        const MethodInfo *method)
{
  BlankEarth_o *That; // x0

  That = this->fields.That;
  if ( !That )
    sub_B7769C(0LL, method);
  BlankEarth__SetState(That, 2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth_StateEarthAutoRotateBase__Rotate(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        const MethodInfo *method)
{
  struct BlankEarth_o *That; // x9
  struct EasingObject_o *EasingObj; // x8
  UnityEngine_Transform_o *blankEarth; // x19
  int v5; // s0

  That = this->fields.That;
  if ( !That
    || (EasingObj = this->fields.EasingObj) == 0LL
    || (blankEarth = That->fields.blankEarth,
        *(UnityEngine_Quaternion_o *)&v5 = UnityEngine_Quaternion__Slerp(
                                             this->fields.QuaFrom,
                                             this->fields.QuaTo,
                                             EasingObj->fields.mStartTime,
                                             0LL),
        !blankEarth) )
  {
    sub_B7769C(this, method);
  }
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v5, 0LL);
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__StartRotate(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x20
  Il2CppClass *klass; // x8
  EasingObject_o *monitor; // x19
  float v5; // s8
  System_Action_o *v6; // x21
  System_Action_o *v7; // x22
  Il2CppClass *v8; // x8

  v2 = (Il2CppObject *)this;
  if ( (byte_4388519 & 1) == 0 )
  {
    this = (BlankEarth_StateEarthAutoRotateBase_o *)sub_B775C4(&System_Action_TypeInfo);
    byte_4388519 = 1;
  }
  klass = v2[4].klass;
  if ( !klass
    || (monitor = (EasingObject_o *)v2[1].monitor,
        v5 = *(float *)&klass->_1.name,
        v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(v6, v2, (intptr_t)v2->klass->vtable[10].methodPtr, 0LL),
        v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, (intptr_t)v2->klass->vtable[11].methodPtr, 0LL),
        (v8 = v2[4].klass) == 0LL)
    || !monitor )
  {
    sub_B7769C(this, method);
  }
  EasingObject__Play(monitor, v5, v6, v7, 0.0, HIDWORD(v8->_1.namespaze), 0LL);
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__begin(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0
  __int64 v6; // x1
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4388518 & 1) == 0 )
  {
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    byte_4388518 = 1;
  }
  this->fields.That = that;
  sub_B77560(&this->fields);
  if ( !that )
    goto LABEL_10;
  this->fields.Param = that->fields.qaaRotateEarthParam;
  sub_B77560(&this->fields.Param);
  if ( that->fields.qaaRotateEarthParam )
  {
    blankEarth = that->fields.blankEarth;
    if ( blankEarth )
    {
      rotation = UnityEngine_Transform__get_rotation(blankEarth, 0LL);
      Param = this->fields.Param;
      this->fields.QuaFrom = rotation;
      if ( Param )
      {
        this->fields.QuaTo = BlankEarth__ConvertLatLongToSafePointQuaternion(
                               that,
                               Param->fields._LatLongVector_k__BackingField,
                               0LL);
        blankEarth = that->fields.blankEarth;
        if ( blankEarth )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarth, 0LL);
          this->fields.EasingObj = (struct EasingObject_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                              gameObject,
                                                              (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
          sub_B77560(&this->fields.EasingObj);
          return;
        }
      }
    }
LABEL_10:
    sub_B7769C(blankEarth, v6);
  }
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__end(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  EasingObject_o *EasingObj; // x0
  struct EasingObject_o *v5; // x9
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  System_Action_T__o *FinishCallback_k__BackingField; // x19
  bool v8; // w21
  __int64 v9; // x20

  if ( (byte_438851A & 1) == 0 )
  {
    sub_B775C4(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_B775C4(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_438851A = 1;
  }
  EasingObj = this->fields.EasingObj;
  if ( !EasingObj
    || (EasingObject__Stop(EasingObj, 0LL), (EasingObj = (EasingObject_o *)this->fields.That) == 0LL)
    || (BlankEarth__UpdateTotalAngle((BlankEarth_o *)EasingObj, 0LL), (v5 = this->fields.EasingObj) == 0LL) )
  {
    sub_B7769C(EasingObj, that);
  }
  Param = this->fields.Param;
  if ( Param )
  {
    FinishCallback_k__BackingField = (System_Action_T__o *)Param->fields._FinishCallback_k__BackingField;
    v8 = v5->fields.mStartTime < 1.0;
    v9 = sub_B77694(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0LL);
    *(_BYTE *)(v9 + 16) = v8;
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      FinishCallback_k__BackingField,
      (BlankEarth_QAARotateEarthResponse_o *)v9,
      (const MethodInfo_2C3C35C *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
  }
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__update(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth_StateMain___ctor(BlankEarth_StateMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarth_StateMain__begin(BlankEarth_StateMain_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_Vector3_o DefaultEarthScale; // 0:s0.4,4:s1.4,8:s2.4

  this->fields = 0LL;
  if ( !that
    || (this = (BlankEarth_StateMain_o *)that->fields.earthRoot) == 0LL
    || (gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        DefaultEarthScale = BlankEarth__GetDefaultEarthScale(that, 0LL),
        GameObjectExtensions__SetLocalScale(gameObject, DefaultEarthScale, 0LL),
        (mTerminalList = that->fields.mTerminalList) == 0LL)
    || (this = (BlankEarth_StateMain_o *)mTerminalList->fields.mActionBgColl) == 0LL
    || (this = (BlankEarth_StateMain_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_B7769C(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BlankEarth_StateMain__end(BlankEarth_StateMain_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth_StateMain__update(
        BlankEarth_StateMain_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_B7769C(this, 0LL);
  BlankEarth__BlunkEarthMainOperation(that, that, (float *)&this->fields, &this->fields.inertialSpeedY, 0LL);
}


void __fastcall BlankEarth_StateNone___ctor(BlankEarth_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarth_StateNone__begin(BlankEarth_StateNone_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth_StateNone__end(BlankEarth_StateNone_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth_StateNone__update(
        BlankEarth_StateNone_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth_StateQAARotate___ctor(BlankEarth_StateQAARotate_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarth_StateQAARotate__begin(
        BlankEarth_StateQAARotate_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  BlankEarth_StateEarthAutoRotateBase__begin((BlankEarth_StateEarthAutoRotateBase_o *)this, that, method);
  ((void (__fastcall *)(BlankEarth_StateQAARotate_o *, Il2CppMethodPointer))this->klass->vtable._8_StartRotate.method)(
    this,
    this->klass->vtable._9_Rotate.methodPtr);
}


void __fastcall BlankEarth_StateShortcutRotate___ctor(BlankEarth_StateShortcutRotate_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth_StateShortcutRotate__Rotate(
        BlankEarth_StateShortcutRotate_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *EasingObj; // x8
  struct BlankEarth_o *That; // x9
  BlankEarth_StateShortcutRotate_o *v4; // x19
  float mStartTime; // s11
  struct BlankEarth_o *v6; // x8
  struct BlankEarth_o *v7; // x8
  UnityEngine_Transform_o *v8; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float v12; // s0
  float v13; // s1
  float v14; // s2
  struct BlankEarth_o *v15; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s3.4,4:s4.4,8:s5.4

  EasingObj = this->fields.EasingObj;
  if ( !EasingObj )
    goto LABEL_14;
  That = this->fields.That;
  v4 = this;
  if ( !That )
    goto LABEL_14;
  this = (BlankEarth_StateShortcutRotate_o *)That->fields.blankEarth;
  if ( !this )
    goto LABEL_14;
  mStartTime = EasingObj->fields.mStartTime;
  this = (BlankEarth_StateShortcutRotate_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_14;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v4->fields.QuaFrom, 0LL);
  v6 = v4->fields.That;
  if ( !v6 )
    goto LABEL_14;
  this = (BlankEarth_StateShortcutRotate_o *)v6->fields.blankEarth;
  if ( !this )
    goto LABEL_14;
  this = (BlankEarth_StateShortcutRotate_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v7 = v4->fields.That;
  if ( !v7 )
    goto LABEL_14;
  v8 = (UnityEngine_Transform_o *)this;
  this = (BlankEarth_StateShortcutRotate_o *)v7->fields.blankEarth;
  if ( !this )
    goto LABEL_14;
  this = (BlankEarth_StateShortcutRotate_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_14;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_right(0LL);
  if ( !v8 )
    goto LABEL_14;
  v19.fields.x = v12;
  v19.fields.y = v13;
  v19.fields.z = v14;
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  UnityEngine_Transform__RotateAround(v8, v17, v19, mStartTime * v4->fields.rotAmountX, 0LL);
  v15 = v4->fields.That;
  if ( !v15 || (this = (BlankEarth_StateShortcutRotate_o *)v15->fields.blankEarth) == 0LL )
LABEL_14:
    sub_B7769C(this, method);
  v18.fields.x = 0.0;
  v18.fields.y = mStartTime * v4->fields.rotAmountY;
  v18.fields.z = 0.0;
  UnityEngine_Transform__Rotate_36432156((UnityEngine_Transform_o *)this, v18, 0LL);
}


void __fastcall BlankEarth_StateShortcutRotate__StartRotate(
        BlankEarth_StateShortcutRotate_o *this,
        const MethodInfo *method)
{
  EasingObject_o *EasingObj; // x19
  float rotateTime; // s8
  System_Action_o *v5; // x0
  __int64 v6; // x1
  System_Action_o *v7; // x21
  System_Action_o *v8; // x22
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8

  if ( (byte_438851B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438851B = 1;
  }
  EasingObj = this->fields.EasingObj;
  rotateTime = this->fields.rotateTime;
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  if ( !this
    || (v7 = v5,
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)this->klass->vtable._10_OnRotateCompleted.methodPtr,
          0LL),
        v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_update.methodPtr, 0LL),
        (Param = this->fields.Param) == 0LL)
    || !EasingObj )
  {
    sub_B7769C(v5, v6);
  }
  EasingObject__Play(EasingObj, rotateTime, v7, v8, 0.0, Param->fields._EaseType_k__BackingField, 0LL);
}


void __fastcall BlankEarth_StateShortcutRotate__begin(
        BlankEarth_StateShortcutRotate_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  float v9; // s8
  float v10; // s9
  float v11; // s10
  float v12; // s11
  float v13; // s12
  float v14; // s13
  float v15; // s14
  float v16; // s11
  float v17; // s12
  float v18; // s13
  float v19; // s14
  EasingObject_o *EasingObj; // x0
  __int64 v21; // x1
  float v22; // s0
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  float v24; // s0
  struct BlankEarth_RotateEarthTimeCalculateParam_o *rotateEarthTimeCalculateParam; // x8
  float rotAmountY; // s2
  float rotAmountX; // s2
  UnityEngine_Vector3_o axis; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v34; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v35; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v36; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  BlankEarth_StateEarthAutoRotateBase__begin((BlankEarth_StateEarthAutoRotateBase_o *)this, that, method);
  v37 = UnityEngine_Quaternion__Inverse(this->fields.QuaFrom, 0LL);
  x = v37.fields.x;
  y = v37.fields.y;
  z = v37.fields.z;
  w = v37.fields.w;
  *(UnityEngine_Vector3_o *)&v38.fields.x = UnityEngine_Vector3__get_back(0LL);
  v35.fields.x = v38.fields.x;
  v35.fields.y = v38.fields.y;
  v35.fields.z = v38.fields.z;
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v38.fields.w = w;
  v29 = UnityEngine_Quaternion__op_Multiply_36341420(v38, v35, 0LL);
  v9 = v29.fields.x;
  v10 = v29.fields.y;
  v11 = v29.fields.z;
  v39 = UnityEngine_Quaternion__Inverse(this->fields.QuaTo, 0LL);
  v12 = v39.fields.x;
  v13 = v39.fields.y;
  v14 = v39.fields.z;
  v15 = v39.fields.w;
  *(UnityEngine_Vector3_o *)&v40.fields.x = UnityEngine_Vector3__get_back(0LL);
  v36.fields.x = v40.fields.x;
  v36.fields.y = v40.fields.y;
  v36.fields.z = v40.fields.z;
  v40.fields.x = v12;
  v40.fields.y = v13;
  v40.fields.z = v14;
  v40.fields.w = v15;
  v30 = UnityEngine_Quaternion__op_Multiply_36341420(v40, v36, 0LL);
  v16 = v30.fields.x;
  v17 = v30.fields.y;
  v18 = v30.fields.z;
  axis = UnityEngine_Vector3__get_down(0LL);
  v31.fields.y = 0.0;
  v33.fields.y = 0.0;
  v31.fields.x = v9;
  v31.fields.z = v11;
  v33.fields.x = v16;
  v33.fields.z = v18;
  this->fields.rotAmountY = UnityEngine_Vector3__SignedAngle(v31, v33, axis, 0LL);
  v19 = asinf(v10);
  v22 = asinf(v17);
  Param = this->fields.Param;
  this->fields.rotAmountX = (float)(v19 - v22) * 57.296;
  if ( !Param )
    goto LABEL_13;
  this->fields.rotateTime = Param->fields._Time_k__BackingField;
  if ( !that )
    goto LABEL_13;
  if ( that->fields.rotateEarthTimeCalculateParam )
  {
    v32.fields.x = v9;
    v32.fields.y = v10;
    v32.fields.z = v11;
    v34.fields.x = v16;
    v34.fields.y = v17;
    v34.fields.z = v18;
    v24 = UnityEngine_Vector3__Distance(v32, v34, 0LL);
    rotateEarthTimeCalculateParam = that->fields.rotateEarthTimeCalculateParam;
    if ( !rotateEarthTimeCalculateParam )
      goto LABEL_13;
    this->fields.rotateTime = (float)(v24 * rotateEarthTimeCalculateParam->fields._DistanceMultipleValue_k__BackingField)
                            + rotateEarthTimeCalculateParam->fields._DefaultTime_k__BackingField;
  }
  ((void (__fastcall *)(BlankEarth_StateShortcutRotate_o *, Il2CppMethodPointer))this->klass->vtable._8_StartRotate.method)(
    this,
    this->klass->vtable._9_Rotate.methodPtr);
  rotAmountY = this->fields.rotAmountY;
  if ( rotAmountY > -1.0 && rotAmountY < 1.0 )
  {
    rotAmountX = this->fields.rotAmountX;
    if ( rotAmountX > -1.0 && rotAmountX < 1.0 )
    {
      EasingObj = this->fields.EasingObj;
      if ( EasingObj )
      {
        EasingObject__Skip(EasingObj, 0LL);
        return;
      }
LABEL_13:
      sub_B7769C(EasingObj, v21);
    }
  }
}


void __fastcall BlankEarth_StateStartup___ctor(BlankEarth_StateStartup_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth_StateStartup__begin(
        BlankEarth_StateStartup_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 Int; // x0
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x8
  float v10; // s8
  int v11; // s0
  TerminalSceneComponent_c *v12; // x0
  __int64 v13; // x8
  UnityEngine_Transform_o *v14; // x22
  BlankEarth_c *v15; // x0
  int v16; // s0
  TerminalSceneComponent_c *v20; // x0
  UnityEngine_Transform_o *v21; // x22
  int v22; // s0
  _QWORD *v26; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x8
  UnityEngine_GameObject_o *v29; // x0
  EasingObject_o *v30; // x22
  System_Action_o *v31; // x23
  System_Action_o *v32; // x24
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438851C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BlankEarth_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B775C4(&Method_BlankEarth_StateStartup_begin__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__);
    sub_B775C4(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__);
    sub_B775C4(&BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo);
    byte_438851C = 1;
  }
  v5 = sub_B77694(BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo);
  BlankEarth_StateStartup___c__DisplayClass3_0___ctor((BlankEarth_StateStartup___c__DisplayClass3_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_68;
  *(_QWORD *)(v5 + 24) = this;
  sub_B77560(v5 + 24);
  *(_QWORD *)(v5 + 32) = that;
  v8 = v5 + 32;
  sub_B77560(v5 + 32);
  *(_QWORD *)&this->fields.inertialSpeedX = 0LL;
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_68;
  *(_DWORD *)(*(_QWORD *)(v5 + 32) + 220LL) = 0;
  v9 = *(_QWORD *)v8;
  if ( !*(_QWORD *)v8 )
    goto LABEL_68;
  v10 = *(float *)(v9 + 112);
  v11 = 0;
  if ( *(_BYTE *)(v9 + 216) && !*(_BYTE *)(v9 + 217) )
    v11 = *(_DWORD *)(v9 + 144);
  *(_DWORD *)(v5 + 68) = v11;
  *(_DWORD *)(v9 + 304) = *(_DWORD *)(v9 + 120);
  v12 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v12 = TerminalSceneComponent_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v12->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0LL);
  v13 = *(_QWORD *)v8;
  if ( !*(_QWORD *)v8 )
    goto LABEL_68;
  if ( (_DWORD)Int == 1 )
  {
    v10 = *(float *)(v13 + 136);
    *(_DWORD *)(v13 + 304) = *(_DWORD *)(v13 + 140);
    if ( !*(_QWORD *)v8 )
      goto LABEL_68;
    v14 = *(UnityEngine_Transform_o **)(*(_QWORD *)v8 + 24LL);
    v15 = BlankEarth_TypeInfo;
    if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
      v15 = BlankEarth_TypeInfo;
    }
    *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__Euler_36342120(
                                          v15->static_fields->SOUTH_POLE_ROTATE,
                                          0LL);
    if ( !v14 )
      goto LABEL_68;
    UnityEngine_Transform__set_rotation(v14, *(UnityEngine_Quaternion_o *)&v16, 0LL);
    v20 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v20 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v20->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0LL);
    if ( !*(_QWORD *)v8 )
      goto LABEL_68;
    *(float *)(*(_QWORD *)v8 + 220LL) = -*(float *)(*(_QWORD *)v8 + 76LL);
  }
  else
  {
    v21 = *(UnityEngine_Transform_o **)(v13 + 24);
    *(UnityEngine_Quaternion_o *)&v22 = BlankEarth__LoadEarthRotate((BlankEarth_o *)*(_QWORD *)v8, 0LL);
    if ( !v21 )
      goto LABEL_68;
    UnityEngine_Transform__set_rotation(v21, *(UnityEngine_Quaternion_o *)&v22, 0LL);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438747F )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438747F = 1;
  }
  Int = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Int = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(Int + 184) + 92LL) )
  {
    v26 = Method_BlankEarth_StateStartup_begin__;
    if ( (*((_BYTE *)Method_BlankEarth_StateStartup_begin__ + 75) & 2) != 0 )
      v26 = (_QWORD *)sub_B775CC(Method_BlankEarth_StateStartup_begin__);
    Int = sub_B775A8(v26, v26[3]);
    if ( *(_QWORD *)v8 )
    {
      Int = (__int64)OverwriteAssetSoundName__PlaySe(
                       (System_Reflection_MethodBase_o *)Int,
                       *(System_String_o **)(*(_QWORD *)v8 + 128LL),
                       0LL);
      goto LABEL_39;
    }
LABEL_68:
    sub_B7769C(Int, v7);
  }
LABEL_39:
  if ( !*(_QWORD *)v8 )
    goto LABEL_68;
  Int = *(_QWORD *)(*(_QWORD *)v8 + 24LL);
  if ( !Int )
    goto LABEL_68;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Int, 0LL);
  *(_QWORD *)(v5 + 16) = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           gameObject,
                           (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_B77560(v5 + 16);
  v28 = *(_QWORD *)(v5 + 32);
  if ( !v28 )
    goto LABEL_68;
  Int = *(_QWORD *)(v28 + 32);
  if ( !Int )
    goto LABEL_68;
  v29 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Int, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v29, 0LL);
  Int = *(_QWORD *)(v5 + 32);
  *(UnityEngine_Vector3_o *)(v5 + 52) = LocalScale;
  if ( !Int )
    goto LABEL_68;
  *(UnityEngine_Vector3_o *)(v5 + 40) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)Int, 0LL);
  *(_BYTE *)(v5 + 64) = 0;
  v30 = *(EasingObject_o **)(v5 + 16);
  v31 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v5, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, 0LL);
  v32 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)v5, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, 0LL);
  v33 = *(_QWORD *)(v5 + 32);
  if ( !v33 )
    goto LABEL_68;
  if ( !v30 )
    goto LABEL_68;
  EasingObject__Play_34159032(v30, 1.0, 0.0, v10, v31, v32, 0.0, *(_DWORD *)(v33 + 188), 0LL);
  if ( !*(_QWORD *)v8 )
    goto LABEL_68;
  Int = *(_QWORD *)(*(_QWORD *)v8 + 232LL);
  if ( !Int )
    goto LABEL_68;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)Int, 0, 1, 0LL);
  v34 = *(_QWORD *)v8;
  if ( !*(_QWORD *)v8 )
    goto LABEL_68;
  Int = *(_QWORD *)(v34 + 232);
  if ( !Int )
    goto LABEL_68;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)Int, *(float *)(v34 + 172), 0, 1, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4387463 )
  {
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_4387463 = 1;
  }
  Int = (__int64)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v35 = **(_QWORD **)(Int + 184);
  if ( !v35 )
    goto LABEL_68;
  v36 = *(_QWORD *)(v35 + 248);
  if ( !v36 )
    goto LABEL_68;
  *(_BYTE *)(v36 + 402) = 1;
  if ( !byte_4387463 )
  {
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
    byte_4387463 = 1;
  }
  if ( (*(_BYTE *)(Int + 307) & 4) != 0 && !*(_DWORD *)(Int + 224) )
  {
    j_il2cpp_runtime_class_init_0(Int);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v37 = **(_QWORD **)(Int + 184);
  if ( !v37 )
    goto LABEL_68;
  v38 = *(_QWORD *)(v37 + 248);
  if ( !v38 )
    goto LABEL_68;
  *(_BYTE *)(v38 + 403) = 1;
}


void __fastcall BlankEarth_StateStartup__end(
        BlankEarth_StateStartup_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth_StateStartup__update(
        BlankEarth_StateStartup_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  System_Action_o *scalingEndCallback; // x0
  struct System_Action_o **p_scalingEndCallback; // x19

  if ( !that )
    sub_B7769C(this, 0LL);
  BlankEarth__BlunkEarthMainOperation(that, that, &this->fields.inertialSpeedX, &this->fields.inertialSpeedY, 0LL);
  scalingEndCallback = that->fields.scalingEndCallback;
  if ( scalingEndCallback )
  {
    if ( this->fields.scaleRate < 0.0001 )
    {
      p_scalingEndCallback = &that->fields.scalingEndCallback;
      System_Action__Invoke(scalingEndCallback, 0LL);
      *p_scalingEndCallback = 0LL;
      sub_B77560(p_scalingEndCallback);
    }
  }
}


void __fastcall BlankEarth_StateStartup___c__DisplayClass3_0___ctor(
        BlankEarth_StateStartup___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth_StateStartup___c__DisplayClass3_0___begin_b__0(
        BlankEarth_StateStartup___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  float mStartTime; // s9
  BlankEarth_StateStartup___c__DisplayClass3_0_o *v4; // x19
  double v5; // d0
  struct BlankEarth_StateStartup_o *_4__this; // x8
  float v7; // s8
  struct BlankEarth_o *that; // x8
  UnityEngine_Transform_o *transform; // x0
  float32x2_t v10; // d10
  float z; // s11
  float32x2_t v12; // d13
  float v13; // s12
  UnityEngine_Transform_o *v14; // x20
  float v15; // s0
  float v16; // s2
  unsigned __int64 v17; // d0 OVERLAPPED
  float v18; // s2
  int v19; // s1
  struct BlankEarth_o *v20; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct BlankEarth_o *v22; // x8

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_20;
  mStartTime = eo->fields.mStartTime;
  v4 = this;
  v5 = StepFunc__Acc5(mStartTime, 0LL);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  v7 = v5;
  _4__this->fields.scaleRate = v7;
  that = v4->fields.that;
  if ( !that )
    goto LABEL_20;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)that->fields.earthRoot;
  if ( !this )
    goto LABEL_20;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v10.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_to.fields.x;
  z = v4->fields.root_scl_to.fields.z;
  v12.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_from.fields.x;
  v13 = v4->fields.root_scl_from.fields.z;
  v14 = transform;
  v15 = UnityEngine_Mathf__Clamp01(v7, 0LL);
  if ( !v14 )
    goto LABEL_20;
  v16 = (float)(v13 - z) * v15;
  v17 = vadd_f32(v10, vmul_n_f32(vsub_f32(v12, v10), v15)).n64_u64[0];
  v18 = z + v16;
  v19 = HIDWORD(v17);
  UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v17, 0LL);
  if ( !v4->fields.isStartRotateBtn )
  {
    v20 = v4->fields.that;
    if ( !v20 )
      goto LABEL_20;
    if ( mStartTime < v20->fields.startupFrameInRotateBtnRate )
    {
      if ( v20->fields.isTutorialAvailable )
      {
        v4->fields.isStartRotateBtn = 1;
      }
      else
      {
        mTerminalList = v20->fields.mTerminalList;
        if ( !mTerminalList )
          goto LABEL_20;
        this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)mTerminalList->fields.mActionBgColl;
        if ( !this )
          goto LABEL_20;
        this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_20;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v20 = v4->fields.that;
        v4->fields.isStartRotateBtn = 1;
        if ( !v20 )
          goto LABEL_20;
      }
      this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)v20->fields.mTerminalList;
      if ( this )
      {
        ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
          (ScrTerminalListTop_o *)this,
          v20->fields.earthBtnMoveSpeedTime,
          1,
          0,
          0LL);
        v22 = v4->fields.that;
        if ( v22 )
        {
          this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)v22->fields.mTerminalList;
          if ( this )
          {
            ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)this, 1, 0, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_B7769C(this, method);
    }
  }
}


void __fastcall BlankEarth_StateStartup___c__DisplayClass3_0___begin_b__1(
        BlankEarth_StateStartup___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  BlankEarth_StateStartup___c__DisplayClass3_0_o *v2; // x19
  struct BlankEarth_o *that; // x8
  Il2CppObject *v4; // x20
  System_Action_o *monitor; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct BlankEarth_o *v12; // x8
  float wait_time; // s8
  System_Action_o *v14; // x21
  struct BlankEarth_o *v15; // x8

  v2 = this;
  if ( (byte_438AC00 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_B775C4(&Method_BlankEarth_SetMainState__);
    byte_438AC00 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_13;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)that->fields.earthRoot;
  if ( !this )
    goto LABEL_13;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_13;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v2->fields.root_scl_to, 0LL);
  v4 = (Il2CppObject *)v2->fields.that;
  if ( !v4 )
    goto LABEL_13;
  monitor = (System_Action_o *)v4[18].monitor;
  if ( monitor )
  {
    System_Action__Invoke(monitor, 0LL);
    v12 = v2->fields.that;
    if ( !v12 )
      goto LABEL_13;
    v12->fields.scalingEndCallback = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&v12->fields.scalingEndCallback, 0LL, v6, v7, v8, v9, v10, v11);
    v4 = (Il2CppObject *)v2->fields.that;
  }
  wait_time = v2->fields.wait_time;
  v14 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v14, v4, Method_BlankEarth_SetMainState__, 0LL);
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)BasicHelper__DelayCall(wait_time, v14, 0LL);
  if ( !v4
    || (this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_MonoBehaviour__StartCoroutine_36304832(
                                                                   (UnityEngine_MonoBehaviour_o *)v4,
                                                                   (System_Collections_IEnumerator_o *)this,
                                                                   0LL),
        (v15 = v2->fields.that) == 0LL) )
  {
LABEL_13:
    sub_B7769C(this, method);
  }
  v15->fields.isSkipTutorialWait = 0;
}


void __fastcall BlankEarth_StateZoomIn___ctor(BlankEarth_StateZoomIn_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth_StateZoomIn__begin(
        BlankEarth_StateZoomIn_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ScrTerminalListTop_o *mTerminalList; // x0
  __int64 v7; // x1
  BlankEarth_o **v8; // x21
  BlankEarth_o *v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  struct BlankEarthPoint_o *focusEarthPoint; // x8
  int32_t spotId_k__BackingField; // w22
  TerminalPramsManager_c *v16; // x0
  BlankEarth_o *v17; // x8
  ScrTerminalListTop_o *v18; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x8
  float v21; // s8
  float y; // s4
  float z; // s5
  float v24; // s3
  int v25; // s0
  UnityEngine_Quaternion_o *v29; // x8
  __int64 v30; // x8
  int caldeaFolderInfoList; // w10
  int v32; // w10
  int warSelectedQuestInfoDic_high; // w10
  int v34; // w9
  UnityEngine_Object_o *v35; // x22
  BlankEarth_o *v36; // x21
  __int64 *v37; // x21
  __int64 v38; // x8
  __int64 v39; // x9
  int v40; // w8
  EasingObject_o *v41; // x21
  float mSpdTime; // s8
  System_Action_o *v43; // x19
  System_Action_o *v44; // x22
  __int64 v45; // x8
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438851D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__);
    sub_B775C4(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__);
    sub_B775C4(&BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo);
    byte_438851D = 1;
  }
  v5 = sub_B77694(BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo);
  BlankEarth_StateZoomIn___c__DisplayClass1_0___ctor((BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_76;
  *(_QWORD *)(v5 + 24) = that;
  v8 = (BlankEarth_o **)(v5 + 24);
  sub_B77560(v5 + 24);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_76;
  mTerminalList = *(ScrTerminalListTop_o **)(*(_QWORD *)(v5 + 24) + 232LL);
  if ( !mTerminalList )
    goto LABEL_76;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn(mTerminalList, 0, 0, 0LL);
  v9 = *v8;
  if ( !*v8 )
    goto LABEL_76;
  mTerminalList = v9->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_76;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(mTerminalList, v9->fields.earthBtnMoveSpeedTime, 0, 0, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4387463 )
  {
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_4387463 = 1;
  }
  mTerminalList = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalList = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v10 = **(_QWORD **)&mTerminalList->fields.boardGameTokenEffectId;
  if ( !v10 )
    goto LABEL_76;
  v11 = *(_QWORD *)(v10 + 248);
  if ( !v11 )
    goto LABEL_76;
  *(_BYTE *)(v11 + 402) = 1;
  if ( !byte_4387463 )
  {
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    mTerminalList = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    byte_4387463 = 1;
  }
  if ( (BYTE3(mTerminalList->fields.blankEarthBg) & 4) != 0 && !LODWORD(mTerminalList->fields.mTerminalServant) )
  {
    j_il2cpp_runtime_class_init_0(mTerminalList);
    mTerminalList = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v12 = **(_QWORD **)&mTerminalList->fields.boardGameTokenEffectId;
  if ( !v12 )
    goto LABEL_76;
  v13 = *(_QWORD *)(v12 + 248);
  if ( !v13 )
    goto LABEL_76;
  *(_BYTE *)(v13 + 403) = 1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387468 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387468 = 1;
  }
  mTerminalList = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    mTerminalList = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(*(_QWORD *)&mTerminalList->fields.boardGameTokenEffectId + 500LL) )
  {
    if ( *v8 )
    {
      focusEarthPoint = (*v8)->fields.focusEarthPoint;
      if ( focusEarthPoint )
      {
        spotId_k__BackingField = focusEarthPoint->fields._spotId_k__BackingField;
        if ( (BYTE3(mTerminalList->fields.blankEarthBg) & 4) != 0 && !LODWORD(mTerminalList->fields.mTerminalServant) )
          j_il2cpp_runtime_class_init_0(mTerminalList);
        if ( !byte_438849B )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_438849B = 1;
        }
        v16 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v16 = TerminalPramsManager_TypeInfo;
        }
        v16->static_fields->_BlankEarthSpotId_k__BackingField = spotId_k__BackingField;
        TerminalPramsManager__BlankEarthSpotId_SaveData(0LL);
        if ( *v8 )
        {
          this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume((*v8)->fields.zoomInSpdTime, 0LL);
          v17 = *v8;
          if ( *v8 )
          {
            mTerminalList = v17->fields.mTerminalList;
            if ( mTerminalList )
            {
              ScrTerminalListTop__cbfBlankEarthQuestCreate(mTerminalList, v17->fields.focusEarthPoint, 0LL);
              mTerminalList = (ScrTerminalListTop_o *)*v8;
              if ( *v8 )
              {
                BlankEarth__SaveEarthRotate((BlankEarth_o *)mTerminalList, 0LL);
                mTerminalList = (ScrTerminalListTop_o *)*v8;
                if ( *v8 )
                {
                  mTerminalList = (ScrTerminalListTop_o *)BlankEarth__UpdateBlankEarthTransformData(
                                                            (BlankEarth_o *)mTerminalList,
                                                            0LL);
                  if ( *v8 )
                  {
                    v18 = mTerminalList;
                    mTerminalList = (ScrTerminalListTop_o *)(*v8)->fields.blankEarth;
                    if ( mTerminalList )
                    {
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
                      *(_QWORD *)(v5 + 16) = GameObjectExtensions__SafeGetComponent_UIWidget_(
                                               gameObject,
                                               (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
                      sub_B77560(v5 + 16);
                      if ( v18 )
                      {
                        v20 = *(_QWORD *)(v5 + 24);
                        *(_OWORD *)(v5 + 32) = *(_OWORD *)&v18->fields.m_CachedPtr;
                        if ( v20 )
                        {
                          v21 = *(float *)(v20 + 80);
                          up = UnityEngine_Vector3__get_up(0LL);
                          y = up.fields.y;
                          z = up.fields.z;
                          up.fields.y = up.fields.x;
                          up.fields.z = y;
                          v24 = z;
                          *(UnityEngine_Quaternion_o *)&v25 = UnityEngine_Quaternion__AngleAxis(
                                                                -v21,
                                                                *(UnityEngine_Vector3_o *)&up.fields.y,
                                                                0LL);
                          if ( *v8 )
                          {
                            v29 = (UnityEngine_Quaternion_o *)(*v8)->fields.focusEarthPoint;
                            if ( v29 )
                            {
                              *(UnityEngine_Quaternion_o *)(v5 + 48) = UnityEngine_Quaternion__op_Multiply(
                                                                         *(UnityEngine_Quaternion_o *)&v25,
                                                                         v29[15],
                                                                         0LL);
                              *(_OWORD *)(v5 + 64) = *(_OWORD *)&v18->fields.areaQuestInfoList;
                              *(UnityEngine_Quaternion_o *)(v5 + 80) = UnityEngine_Quaternion__get_identity(0LL);
                              v30 = *(_QWORD *)(v5 + 24);
                              caldeaFolderInfoList = (int)v18->fields.caldeaFolderInfoList;
                              *(_QWORD *)(v5 + 96) = v18->fields.storyQuestInfoList;
                              *(_DWORD *)(v5 + 104) = caldeaFolderInfoList;
                              if ( v30 )
                              {
                                v32 = *(_DWORD *)(v30 + 156);
                                *(_QWORD *)(v5 + 108) = *(_QWORD *)(v30 + 148);
                                *(_DWORD *)(v5 + 116) = v32;
                                warSelectedQuestInfoDic_high = HIDWORD(v18->fields.warSelectedQuestInfoDic);
                                *(_QWORD *)(v5 + 120) = *(struct System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o **)((char *)&v18->fields.caldeaFolderInfoList + 4);
                                *(_DWORD *)(v5 + 128) = warSelectedQuestInfoDic_high;
                                v34 = *(_DWORD *)(v30 + 92);
                                *(_BYTE *)(v5 + 176) = 0;
                                *(_DWORD *)(v5 + 132) = v34;
                                *(_DWORD *)(v5 + 136) = v34;
                                *(_DWORD *)(v5 + 140) = v34;
                                v35 = *(UnityEngine_Object_o **)(v30 + 200);
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                mTerminalList = (ScrTerminalListTop_o *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
                                v36 = *v8;
                                if ( ((unsigned __int8)mTerminalList & 1) != 0 )
                                {
                                  if ( !v36 )
                                    goto LABEL_76;
                                  *(_QWORD *)(v5 + 144) = v36->fields.focusEarthPoint;
                                  v37 = (__int64 *)(v5 + 144);
                                }
                                else
                                {
                                  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                  }
                                  if ( !byte_4387468 )
                                  {
                                    sub_B775C4(&TerminalPramsManager_TypeInfo);
                                    byte_4387468 = 1;
                                  }
                                  mTerminalList = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
                                  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                    mTerminalList = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
                                  }
                                  if ( !v36 )
                                    goto LABEL_76;
                                  *(_QWORD *)(v5 + 144) = BlankEarth__GetEarthPoint(
                                                            v36,
                                                            *(_DWORD *)(*(_QWORD *)&mTerminalList->fields.boardGameTokenEffectId
                                                                      + 500LL),
                                                            0LL);
                                  v37 = (__int64 *)(v5 + 144);
                                }
                                sub_B77560(v37);
                                v38 = *v37;
                                if ( *v37 )
                                {
                                  v39 = *(_QWORD *)(v38 + 136);
                                  v40 = *(_DWORD *)(v38 + 144);
                                  *(_QWORD *)(v5 + 152) = v39;
                                  *(_DWORD *)(v5 + 160) = v40;
                                  *(UnityEngine_Vector3_o *)(v5 + 164) = UnityEngine_Vector3__get_zero(0LL);
                                  v41 = *(EasingObject_o **)(v5 + 16);
                                  mSpdTime = this->fields.mSpdTime;
                                  v43 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v43,
                                    (Il2CppObject *)v5,
                                    Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__,
                                    0LL);
                                  v44 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v44,
                                    (Il2CppObject *)v5,
                                    Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__,
                                    0LL);
                                  v45 = *(_QWORD *)(v5 + 24);
                                  if ( v45 )
                                  {
                                    if ( v41 )
                                    {
                                      EasingObject__Play(v41, mSpdTime, v43, v44, 0.0, *(_DWORD *)(v45 + 180), 0LL);
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_76:
    sub_B7769C(mTerminalList, v7);
  }
}


void __fastcall BlankEarth_StateZoomIn__end(
        BlankEarth_StateZoomIn_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth_StateZoomIn__update(
        BlankEarth_StateZoomIn_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth_StateZoomIn___c__DisplayClass1_0___ctor(
        BlankEarth_StateZoomIn___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth_StateZoomIn___c__DisplayClass1_0___begin_b__0(
        BlankEarth_StateZoomIn___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  float mStartTime; // s9
  BlankEarth_StateZoomIn___c__DisplayClass1_0_o *v4; // x19
  double v5; // d8
  double v6; // d0
  struct BlankEarth_o *that; // x8
  UnityEngine_Transform_o *blankEarth; // x20
  float v9; // s10
  int v10; // s0
  struct BlankEarth_o *v14; // x8
  UnityEngine_Transform_o *transform; // x20
  int v16; // s0
  struct BlankEarth_o *v20; // x8
  UnityEngine_Transform_o *v21; // x0
  float32x2_t v22; // d10
  float z; // s11
  float32x2_t v24; // d13
  float v25; // s12
  UnityEngine_Transform_o *v26; // x20
  float v27; // s0
  float v28; // s0
  float v29; // s2
  unsigned __int64 v30; // d0 OVERLAPPED
  float v31; // s2
  int v32; // s1
  struct BlankEarth_o *v33; // x8
  UnityEngine_Transform_o *v34; // x0
  float32x2_t v35; // d10
  float v36; // s11
  float32x2_t v37; // d13
  float v38; // s12
  UnityEngine_Transform_o *v39; // x20
  float v40; // s0
  float v41; // s0
  float v42; // s2
  unsigned __int64 v43; // d0 OVERLAPPED
  float v44; // s2
  int v45; // s1
  struct BlankEarthPoint_o *focusEarthPoint; // x20
  float32x2_t v47; // d10
  float v48; // s11
  float32x2_t v49; // d13
  float v50; // s12
  float v51; // s0
  float v52; // s0
  struct BlankEarth_o *v53; // x8

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_20;
  mStartTime = eo->fields.mStartTime;
  v4 = this;
  v5 = mStartTime;
  v6 = StepFunc__AccSig(mStartTime, 0LL);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_20;
  blankEarth = that->fields.blankEarth;
  v9 = v6;
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Slerp(v4->fields.qua_from, v4->fields.qua_to, v9, 0LL);
  if ( !blankEarth )
    goto LABEL_20;
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v10, 0LL);
  v14 = v4->fields.that;
  if ( !v14 )
    goto LABEL_20;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v14->fields.earthRoot;
  if ( !this )
    goto LABEL_20;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__Slerp(
                                        v4->fields.root_qua_from,
                                        v4->fields.root_qua_to,
                                        v9,
                                        0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v16, 0LL);
  v20 = v4->fields.that;
  if ( !v20 )
    goto LABEL_20;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v20->fields.earthRoot;
  if ( !this )
    goto LABEL_20;
  v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v22.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_from.fields.x;
  z = v4->fields.root_pos_from.fields.z;
  v24.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_to.fields.x;
  v25 = v4->fields.root_pos_to.fields.z;
  v26 = v21;
  v27 = StepFunc__DecSin(v5, 0LL);
  v28 = UnityEngine_Mathf__Clamp01(v27, 0LL);
  if ( !v26 )
    goto LABEL_20;
  v29 = (float)(v25 - z) * v28;
  v30 = vadd_f32(v22, vmul_n_f32(vsub_f32(v24, v22), v28)).n64_u64[0];
  v31 = z + v29;
  v32 = HIDWORD(v30);
  UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v30, 0LL);
  v33 = v4->fields.that;
  if ( !v33 )
    goto LABEL_20;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v33->fields.earthRoot;
  if ( !this )
    goto LABEL_20;
  v34 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v35.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_from.fields.x;
  v36 = v4->fields.root_scl_from.fields.z;
  v37.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_to.fields.x;
  v38 = v4->fields.root_scl_to.fields.z;
  v39 = v34;
  v40 = StepFunc__Acc5(v5, 0LL);
  v41 = UnityEngine_Mathf__Clamp01(v40, 0LL);
  if ( !v39 )
    goto LABEL_20;
  v42 = (float)(v38 - v36) * v41;
  v43 = vadd_f32(v35, vmul_n_f32(vsub_f32(v37, v35), v41)).n64_u64[0];
  v44 = v36 + v42;
  v45 = HIDWORD(v43);
  UnityEngine_Transform__set_localScale(v39, *(UnityEngine_Vector3_o *)&v43, 0LL);
  focusEarthPoint = v4->fields.focusEarthPoint;
  v47.n64_u64[0] = *(unsigned __int64 *)&v4->fields.spot_ui_root_qua_from.fields.x;
  v48 = v4->fields.spot_ui_root_qua_from.fields.z;
  v49.n64_u64[0] = *(unsigned __int64 *)&v4->fields.spot_ui_root_qua_to.fields.x;
  v50 = v4->fields.spot_ui_root_qua_to.fields.z;
  v51 = StepFunc__Acc5(v5, 0LL);
  v52 = UnityEngine_Mathf__Clamp01(v51, 0LL);
  if ( !focusEarthPoint )
    goto LABEL_20;
  *(float32x2_t *)&focusEarthPoint->fields.changedUiRootPosition.fields.x = vadd_f32(
                                                                              v47,
                                                                              vmul_n_f32(vsub_f32(v49, v47), v52));
  focusEarthPoint->fields.changedUiRootPosition.fields.z = v48 + (float)((float)(v50 - v48) * v52);
  if ( !v4->fields.isStartSlideIn )
  {
    v53 = v4->fields.that;
    if ( !v53 )
      goto LABEL_20;
    if ( mStartTime > v53->fields.zoomInFrameInBoardRate )
    {
      v4->fields.isStartSlideIn = 1;
      this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v53->fields.mTerminalList;
      if ( this )
      {
        ScrTerminalListTop__CallBlankEarthSpotCreateFinishEvent(
          (ScrTerminalListTop_o *)this,
          v53->fields.focusEarthPoint,
          0LL);
        return;
      }
LABEL_20:
      sub_B7769C(this, method);
    }
  }
}


void __fastcall BlankEarth_StateZoomIn___c__DisplayClass1_0___begin_b__1(
        BlankEarth_StateZoomIn___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct BlankEarth_o *that; // x8
  BlankEarth_StateZoomIn___c__DisplayClass1_0_o *v3; // x19
  struct BlankEarth_o *v4; // x8
  struct BlankEarth_o *v5; // x8
  struct BlankEarth_o *v6; // x8

  that = this->fields.that;
  if ( !that )
    goto LABEL_13;
  v3 = this;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_13;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v3->fields.qua_to, 0LL);
  v4 = v3->fields.that;
  if ( !v4 )
    goto LABEL_13;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v4->fields.earthRoot;
  if ( !this )
    goto LABEL_13;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
  if ( !this )
    goto LABEL_13;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v3->fields.root_qua_to, 0LL);
  v5 = v3->fields.that;
  if ( !v5
    || (this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v5->fields.earthRoot) == 0LL
    || (this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL)) == 0LL
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v3->fields.root_pos_to, 0LL),
        (v6 = v3->fields.that) == 0LL)
    || (this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v6->fields.earthRoot) == 0LL
    || (this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL)) == 0LL )
  {
LABEL_13:
    sub_B7769C(this, method);
  }
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v3->fields.root_scl_to, 0LL);
}


void __fastcall BlankEarth_StateZoomOut___ctor(BlankEarth_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth_StateZoomOut__begin(
        BlankEarth_StateZoomOut_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  UnityEngine_Component_o *blankEarth; // x0
  __int64 v6; // x1
  BlankEarth_o **v7; // x20
  float IntpTime_AutoResume; // s0
  float v9; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  UnityEngine_GameObject_o *v15; // x0
  TerminalPramsManager_c *v16; // x0
  __int64 v17; // x8
  int v18; // w10
  __int64 v19; // x9
  int v20; // w8
  float zoomInOffset; // s9
  float y; // s4
  float z; // s5
  float v24; // s3
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s3
  float v29; // s9
  float v30; // s10
  float v31; // s11
  float v32; // s12
  __int64 v33; // x8
  UnityEngine_Object_o *focusEarthPoint; // x21
  BlankEarth_o *v35; // x20
  BlankEarthPoint_o *EarthPoint; // x1
  __int64 v37; // x8
  __int64 v38; // x9
  int v39; // w8
  EasingObject_o *v40; // x20
  System_Action_o *v41; // x21
  System_Action_o *v42; // x22
  __int64 v43; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v52; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_438851E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__);
    sub_B775C4(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__);
    sub_B775C4(&BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo);
    byte_438851E = 1;
  }
  v4 = sub_B77694(BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo);
  BlankEarth_StateZoomOut___c__DisplayClass0_0___ctor((BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v4, 0LL);
  if ( !v4 )
    goto LABEL_52;
  *(_QWORD *)(v4 + 24) = that;
  v7 = (BlankEarth_o **)(v4 + 24);
  sub_B77560(v4 + 24);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__ResetBlankEarthSpotInfo(0LL);
  if ( !*v7 )
    goto LABEL_52;
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume((*v7)->fields.zoomOutSpdTime, 0LL);
  if ( !*v7 )
    goto LABEL_52;
  blankEarth = (UnityEngine_Component_o *)(*v7)->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_52;
  v9 = IntpTime_AutoResume;
  gameObject = UnityEngine_Component__get_gameObject(blankEarth, 0LL);
  *(_QWORD *)(v4 + 16) = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           gameObject,
                           (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_B77560(v4 + 16);
  v11 = *(_QWORD *)(v4 + 24);
  if ( !v11 )
    goto LABEL_52;
  blankEarth = *(UnityEngine_Component_o **)(v11 + 24);
  if ( !blankEarth )
    goto LABEL_52;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
  v12 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Quaternion_o *)(v4 + 48) = rotation;
  if ( !v12 )
    goto LABEL_52;
  blankEarth = *(UnityEngine_Component_o **)(v12 + 32);
  if ( !blankEarth )
    goto LABEL_52;
  blankEarth = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)blankEarth,
                                            0LL);
  if ( !blankEarth )
    goto LABEL_52;
  v49 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
  v13 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Quaternion_o *)(v4 + 80) = v49;
  if ( !v13 )
    goto LABEL_52;
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 32), 0LL);
  v14 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Vector3_o *)(v4 + 108) = LocalPosition;
  if ( !v14 )
    goto LABEL_52;
  blankEarth = *(UnityEngine_Component_o **)(v14 + 32);
  if ( !blankEarth )
    goto LABEL_52;
  v15 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)blankEarth, 0LL);
  *(UnityEngine_Vector3_o *)(v4 + 132) = GameObjectExtensions__GetLocalScale(v15, 0LL);
  if ( !byte_43885B6 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43885B6 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  *(_QWORD *)(v4 + 184) = v16->static_fields->_BlankEarthTransformData_k__BackingField;
  sub_B77560(v4 + 184);
  v17 = *(_QWORD *)(v4 + 184);
  if ( v17 )
  {
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(v17 + 16);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(v17 + 32);
    v18 = *(_DWORD *)(v17 + 56);
    *(_QWORD *)(v4 + 96) = *(_QWORD *)(v17 + 48);
    *(_DWORD *)(v4 + 104) = v18;
    v19 = *(_QWORD *)(v17 + 60);
    v20 = *(_DWORD *)(v17 + 68);
    *(_QWORD *)(v4 + 120) = v19;
    *(_DWORD *)(v4 + 128) = v20;
  }
  else
  {
    if ( !*v7 )
      goto LABEL_52;
    zoomInOffset = (*v7)->fields.zoomInOffset;
    up = UnityEngine_Vector3__get_up(0LL);
    y = up.fields.y;
    z = up.fields.z;
    up.fields.y = up.fields.x;
    up.fields.z = y;
    v24 = z;
    *(UnityEngine_Quaternion_o *)&v25 = UnityEngine_Quaternion__AngleAxis(
                                          zoomInOffset,
                                          *(UnityEngine_Vector3_o *)&up.fields.y,
                                          0LL);
    if ( !*v7 )
      goto LABEL_52;
    blankEarth = (UnityEngine_Component_o *)(*v7)->fields.blankEarth;
    if ( !blankEarth )
      goto LABEL_52;
    v29 = v25;
    v30 = v26;
    v31 = v27;
    v32 = v28;
    v52 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
    v50.fields.x = v29;
    v50.fields.y = v30;
    v50.fields.z = v31;
    v50.fields.w = v32;
    v51 = UnityEngine_Quaternion__op_Multiply(v50, v52, 0LL);
    v33 = *(_QWORD *)(v4 + 24);
    *(float *)(v4 + 36) = v51.fields.y;
    *(float *)(v4 + 44) = v51.fields.w;
    *(_DWORD *)(v4 + 32) = 0;
    *(_DWORD *)(v4 + 40) = 0;
    if ( !v33 )
      goto LABEL_52;
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(v33 + 248);
    zero = UnityEngine_Vector3__get_zero(0LL);
    blankEarth = *(UnityEngine_Component_o **)(v4 + 24);
    *(UnityEngine_Vector3_o *)(v4 + 96) = zero;
    if ( !blankEarth )
      goto LABEL_52;
    *(UnityEngine_Vector3_o *)(v4 + 120) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)blankEarth, 0LL);
  }
  if ( !*v7 )
    goto LABEL_52;
  focusEarthPoint = (UnityEngine_Object_o *)(*v7)->fields.focusEarthPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  blankEarth = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(focusEarthPoint, 0LL, 0LL);
  v35 = *v7;
  if ( ((unsigned __int8)blankEarth & 1) == 0 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387468 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387468 = 1;
    }
    blankEarth = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      blankEarth = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
    }
    if ( v35 )
    {
      EarthPoint = BlankEarth__GetEarthPoint(
                     v35,
                     *(_DWORD *)(*(_QWORD *)&blankEarth[7].fields.m_CachedPtr + 500LL),
                     0LL);
      goto LABEL_48;
    }
LABEL_52:
    sub_B7769C(blankEarth, v6);
  }
  if ( !v35 )
    goto LABEL_52;
  EarthPoint = v35->fields.focusEarthPoint;
LABEL_48:
  *(_QWORD *)(v4 + 144) = EarthPoint;
  sub_B77560(v4 + 144);
  v47 = UnityEngine_Vector3__get_zero(0LL);
  v37 = *(_QWORD *)(v4 + 144);
  *(UnityEngine_Vector3_o *)(v4 + 164) = v47;
  if ( !v37 )
    goto LABEL_52;
  v38 = *(_QWORD *)(v37 + 136);
  v39 = *(_DWORD *)(v37 + 144);
  *(_BYTE *)(v4 + 176) = 0;
  *(_QWORD *)(v4 + 152) = v38;
  *(_DWORD *)(v4 + 160) = v39;
  v40 = *(EasingObject_o **)(v4 + 16);
  v41 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)v4, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, 0LL);
  v42 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)v4, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, 0LL);
  v43 = *(_QWORD *)(v4 + 24);
  if ( !v43 || !v40 )
    goto LABEL_52;
  EasingObject__Play_34159032(v40, 1.0, 0.0, v9, v41, v42, 0.0, *(_DWORD *)(v43 + 184), 0LL);
}


void __fastcall BlankEarth_StateZoomOut__end(
        BlankEarth_StateZoomOut_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth_StateZoomOut__update(
        BlankEarth_StateZoomOut_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth_StateZoomOut___c__DisplayClass0_0___ctor(
        BlankEarth_StateZoomOut___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth_StateZoomOut___c__DisplayClass0_0___begin_b__0(
        BlankEarth_StateZoomOut___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  float mStartTime; // s9
  BlankEarth_StateZoomOut___c__DisplayClass0_0_o *v4; // x19
  double v5; // d8
  double v6; // d0
  struct BlankEarth_o *that; // x8
  UnityEngine_Transform_o *blankEarth; // x20
  float v9; // s10
  int v10; // s0
  struct BlankEarth_o *v14; // x8
  UnityEngine_Transform_o *transform; // x20
  int v16; // s0
  struct BlankEarth_o *v20; // x8
  UnityEngine_Transform_o *v21; // x0
  float32x2_t v22; // d10
  float z; // s11
  float32x2_t v24; // d13
  float v25; // s12
  UnityEngine_Transform_o *v26; // x20
  float v27; // s0
  float v28; // s0
  float v29; // s2
  unsigned __int64 v30; // d0 OVERLAPPED
  float v31; // s2
  int v32; // s1
  struct BlankEarth_o *v33; // x8
  UnityEngine_Transform_o *v34; // x0
  float32x2_t v35; // d10
  float v36; // s11
  float32x2_t v37; // d13
  float v38; // s12
  UnityEngine_Transform_o *v39; // x20
  float v40; // s0
  float v41; // s0
  float v42; // s2
  unsigned __int64 v43; // d0 OVERLAPPED
  float v44; // s2
  int v45; // s1
  struct BlankEarthPoint_o *focusEarthPoint; // x20
  float32x2_t v47; // d10
  float v48; // s11
  float32x2_t v49; // d13
  float v50; // s12
  float v51; // s0
  float v52; // s0
  struct BlankEarth_o *v53; // x8
  struct BlankEarth_o *v54; // x8

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_22;
  mStartTime = eo->fields.mStartTime;
  v4 = this;
  v5 = mStartTime;
  v6 = StepFunc__AccSig(mStartTime, 0LL);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_22;
  blankEarth = that->fields.blankEarth;
  v9 = v6;
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Slerp(v4->fields.qua_to, v4->fields.qua_from, v9, 0LL);
  if ( !blankEarth )
    goto LABEL_22;
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v10, 0LL);
  v14 = v4->fields.that;
  if ( !v14 )
    goto LABEL_22;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v14->fields.earthRoot;
  if ( !this )
    goto LABEL_22;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__Slerp(
                                        v4->fields.root_qua_to,
                                        v4->fields.root_qua_from,
                                        v9,
                                        0LL);
  if ( !transform )
    goto LABEL_22;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v16, 0LL);
  v20 = v4->fields.that;
  if ( !v20 )
    goto LABEL_22;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v20->fields.earthRoot;
  if ( !this )
    goto LABEL_22;
  v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v22.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_to.fields.x;
  z = v4->fields.root_pos_to.fields.z;
  v24.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_from.fields.x;
  v25 = v4->fields.root_pos_from.fields.z;
  v26 = v21;
  v27 = StepFunc__DecSin(v5, 0LL);
  v28 = UnityEngine_Mathf__Clamp01(v27, 0LL);
  if ( !v26 )
    goto LABEL_22;
  v29 = (float)(v25 - z) * v28;
  v30 = vadd_f32(v22, vmul_n_f32(vsub_f32(v24, v22), v28)).n64_u64[0];
  v31 = z + v29;
  v32 = HIDWORD(v30);
  UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v30, 0LL);
  v33 = v4->fields.that;
  if ( !v33 )
    goto LABEL_22;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v33->fields.earthRoot;
  if ( !this )
    goto LABEL_22;
  v34 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v35.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_to.fields.x;
  v36 = v4->fields.root_scl_to.fields.z;
  v37.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_from.fields.x;
  v38 = v4->fields.root_scl_from.fields.z;
  v39 = v34;
  v40 = StepFunc__Acc5(v5, 0LL);
  v41 = UnityEngine_Mathf__Clamp01(v40, 0LL);
  if ( !v39 )
    goto LABEL_22;
  v42 = (float)(v38 - v36) * v41;
  v43 = vadd_f32(v35, vmul_n_f32(vsub_f32(v37, v35), v41)).n64_u64[0];
  v44 = v36 + v42;
  v45 = HIDWORD(v43);
  UnityEngine_Transform__set_localScale(v39, *(UnityEngine_Vector3_o *)&v43, 0LL);
  focusEarthPoint = v4->fields.focusEarthPoint;
  v47.n64_u64[0] = *(unsigned __int64 *)&v4->fields.spot_ui_root_qua_to.fields.x;
  v48 = v4->fields.spot_ui_root_qua_to.fields.z;
  v49.n64_u64[0] = *(unsigned __int64 *)&v4->fields.spot_ui_root_qua_from.fields.x;
  v50 = v4->fields.spot_ui_root_qua_from.fields.z;
  v51 = StepFunc__Acc5(v5, 0LL);
  v52 = UnityEngine_Mathf__Clamp01(v51, 0LL);
  if ( !focusEarthPoint )
    goto LABEL_22;
  *(float32x2_t *)&focusEarthPoint->fields.changedUiRootPosition.fields.x = vadd_f32(
                                                                              v47,
                                                                              vmul_n_f32(vsub_f32(v49, v47), v52));
  focusEarthPoint->fields.changedUiRootPosition.fields.z = v48 + (float)((float)(v50 - v48) * v52);
  if ( !v4->fields.isStartRotateBtn )
  {
    v53 = v4->fields.that;
    if ( !v53 )
      goto LABEL_22;
    if ( mStartTime < v53->fields.zoomOutFrameInRotateBtnRate )
    {
      v4->fields.isStartRotateBtn = 1;
      this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v53->fields.mTerminalList;
      if ( this )
      {
        ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
          (ScrTerminalListTop_o *)this,
          v53->fields.earthBtnMoveSpeedTime,
          1,
          0,
          0LL);
        v54 = v4->fields.that;
        if ( v54 )
        {
          this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v54->fields.mTerminalList;
          if ( this )
          {
            ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)this, 1, 0, 0LL);
            return;
          }
        }
      }
LABEL_22:
      sub_B7769C(this, method);
    }
  }
}


void __fastcall BlankEarth_StateZoomOut___c__DisplayClass0_0___begin_b__1(
        BlankEarth_StateZoomOut___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  BlankEarth_StateZoomOut___c__DisplayClass0_0_o *v2; // x19
  struct BlankEarthTransform_o *blankEarthTransform; // x9
  struct BlankEarth_o *that; // x8
  float totalAngle; // s0
  struct BlankEarth_o *v6; // x8
  struct BlankEarth_o *v7; // x8
  struct BlankEarth_o *v8; // x8
  struct BlankEarth_o *v9; // x8
  struct BlankEarth_o *v10; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct BlankEarth_o *v12; // x8

  v2 = this;
  if ( (byte_438AC01 & 1) == 0 )
  {
    this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)sub_B775C4(&StringLiteral_19440/*"gevINFOBAR_BACK"*/);
    byte_438AC01 = 1;
  }
  blankEarthTransform = v2->fields.blankEarthTransform;
  that = v2->fields.that;
  if ( blankEarthTransform )
  {
    totalAngle = blankEarthTransform->fields.totalAngle;
    if ( !that )
      goto LABEL_28;
  }
  else
  {
    totalAngle = 0.0;
    if ( !that )
      goto LABEL_28;
  }
  that->fields.totalAngle = totalAngle;
  v6 = v2->fields.that;
  if ( !v6 )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v6->fields.blankEarth;
  if ( !this )
    goto LABEL_28;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v2->fields.qua_to, 0LL);
  v7 = v2->fields.that;
  if ( !v7 )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v7->fields.earthRoot;
  if ( !this )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_28;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v2->fields.root_qua_to, 0LL);
  v8 = v2->fields.that;
  if ( !v8 )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v8->fields.earthRoot;
  if ( !this )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v2->fields.root_pos_to, 0LL);
  v9 = v2->fields.that;
  if ( !v9 )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v9->fields.earthRoot;
  if ( !this )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v2->fields.root_scl_to, 0LL);
  v10 = v2->fields.that;
  if ( !v10 )
    goto LABEL_28;
  mTerminalList = v10->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)mTerminalList->fields.mActionBgColl;
  if ( !this )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL), (v12 = v2->fields.that) == 0LL)
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v12->fields.mTerminalList) == 0LL
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)ScrTerminalListTop__mfGetMyFsmP(
                                                                   (ScrTerminalListTop_o *)this,
                                                                   0LL)) == 0LL
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL)) == 0LL
    || (HutongGames_PlayMaker_Fsm__Event_15039392(
          (HutongGames_PlayMaker_Fsm_o *)this,
          (System_String_o *)StringLiteral_19440/*"gevINFOBAR_BACK"*/,
          0LL),
        (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v2->fields.that) == 0LL) )
  {
LABEL_28:
    sub_B7769C(this, method);
  }
  BlankEarth__SetState((BlankEarth_o *)this, 2, 0LL);
}


void __fastcall BlankEarth__CoCheckTutorial_d__91___ctor(
        BlankEarth__CoCheckTutorial_d__91_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarth__CoCheckTutorial_d__91__MoveNext(
        BlankEarth__CoCheckTutorial_d__91_o *this,
        const MethodInfo *method)
{
  BlankEarth__CoCheckTutorial_d__91_o *v2; // x19
  int32_t _1__state; // w8
  BlankEarth_o *_4__this; // x20
  Il2CppObject *v5; // x21
  float time_5__2; // s0
  bool v7; // w21
  float v8; // s8
  Il2CppObject **p__2__current; // x19
  EventTutorialMaster_EventTutorialArgs_o *v10; // x21
  Il2CppObject *_8__1; // x22
  System_Action_o *v12; // x23

  v2 = this;
  if ( (byte_4388517 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B775C4(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B775C4(&Method_BlankEarth___c__DisplayClass91_0__CoCheckTutorial_g__OnFinish_0__);
    this = (BlankEarth__CoCheckTutorial_d__91_o *)sub_B775C4(&BlankEarth___c__DisplayClass91_0_TypeInfo);
    byte_4388517 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    time_5__2 = v2->fields._time_5__2;
    v2->fields.__1__state = -1;
    if ( time_5__2 > 5.0 )
      goto LABEL_12;
    if ( !_4__this )
      goto LABEL_21;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_B77694(BlankEarth___c__DisplayClass91_0_TypeInfo);
    System_Object___ctor(v5, 0LL);
    v2->fields.__8__1 = (struct BlankEarth___c__DisplayClass91_0_o *)v5;
    sub_B77560(&v2->fields.__8__1);
    this = (BlankEarth__CoCheckTutorial_d__91_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    *(_QWORD *)&this->fields.__1__state = v2->fields.finishCallback;
    sub_B77560(&this->fields);
    v2->fields._time_5__2 = 0.0;
    if ( !_4__this )
      goto LABEL_21;
  }
  v7 = 1;
  if ( BlankEarth__IsJustState(_4__this, 1, 0LL) )
  {
    v8 = v2->fields._time_5__2;
    v2->fields._time_5__2 = v8 + UnityEngine_Time__get_deltaTime(0LL);
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    sub_B77560(p__2__current);
    *((_DWORD *)p__2__current - 2) = 1;
    return v7;
  }
LABEL_12:
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  this = (BlankEarth__CoCheckTutorial_d__91_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0LL);
  v10 = (EventTutorialMaster_EventTutorialArgs_o *)sub_B77694(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  v10->fields.openKind = 83;
  _8__1 = (Il2CppObject *)v2->fields.__8__1;
  v12 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v12, _8__1, Method_BlankEarth___c__DisplayClass91_0__CoCheckTutorial_g__OnFinish_0__, 0LL);
  v10->fields.callbackAfter = v12;
  sub_B77560(&v10->fields.callbackAfter);
  v10->fields.adapter = v2->fields.adapter;
  sub_B77560(&v10->fields.adapter);
  this = (BlankEarth__CoCheckTutorial_d__91_o *)EventTutorialMaster__CoroutineCheckTutorial(v10, 0LL);
  if ( !_4__this )
LABEL_21:
    sub_B7769C(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832(
    (UnityEngine_MonoBehaviour_o *)_4__this,
    (System_Collections_IEnumerator_o *)this,
    0LL);
  v7 = 0;
  _4__this->fields.isTutorialAvailable = 0;
  return v7;
}


Il2CppObject *__fastcall BlankEarth__CoCheckTutorial_d__91__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarth__CoCheckTutorial_d__91_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarth__CoCheckTutorial_d__91__System_Collections_IEnumerator_Reset(
        BlankEarth__CoCheckTutorial_d__91_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BlankEarth__CoCheckTutorial_d__91_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BlankEarth__CoCheckTutorial_d__91__System_Collections_IEnumerator_get_Current(
        BlankEarth__CoCheckTutorial_d__91_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarth__CoCheckTutorial_d__91__System_IDisposable_Dispose(
        BlankEarth__CoCheckTutorial_d__91_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth__CoStandByChangeState_d__93___ctor(
        BlankEarth__CoStandByChangeState_d__93_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarth__CoStandByChangeState_d__93__MoveNext(
        BlankEarth__CoStandByChangeState_d__93_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BlankEarth_o *_4__this; // x0
  float time_5__2; // s8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_10;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    this->fields._time_5__2 = 0.0;
    if ( !_4__this )
LABEL_10:
      sub_B7769C(_4__this, method);
  }
  if ( BlankEarth__IsJustState(_4__this, this->fields.state, 0LL) )
  {
    time_5__2 = this->fields._time_5__2;
    this->fields._time_5__2 = time_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B77560(p__2__current);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
  return 0;
}


Il2CppObject *__fastcall BlankEarth__CoStandByChangeState_d__93__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarth__CoStandByChangeState_d__93_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarth__CoStandByChangeState_d__93__System_Collections_IEnumerator_Reset(
        BlankEarth__CoStandByChangeState_d__93_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BlankEarth__CoStandByChangeState_d__93_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BlankEarth__CoStandByChangeState_d__93__System_Collections_IEnumerator_get_Current(
        BlankEarth__CoStandByChangeState_d__93_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarth__CoStandByChangeState_d__93__System_IDisposable_Dispose(
        BlankEarth__CoStandByChangeState_d__93_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BlankEarth___c_StaticFields *static_fields; // x0

  if ( (byte_4388515 & 1) == 0 )
  {
    sub_B775C4(&BlankEarth___c_TypeInfo);
    byte_4388515 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BlankEarth___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BlankEarth___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarth___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall BlankEarth___c___ctor(BlankEarth___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarth___c___UpdateSpotDisp_b__108_0(
        BlankEarth___c_o *this,
        BlankEarthPoint_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  BlankEarthPoint__UpdateDisp(x, 1, 0LL);
}


void __fastcall BlankEarth___c__DisplayClass91_0___ctor(
        BlankEarth___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarth___c__DisplayClass91_0___CoCheckTutorial_g__OnFinish_0(
        BlankEarth___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_4388516 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B775C4(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_4388516 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B7769C(0LL, v4);
  MissionNotifyManager__EndPause(v3, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}