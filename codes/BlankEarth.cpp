void __fastcall BlankEarth___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  struct BlankEarth_StaticFields *static_fields; // x9
  struct BlankEarth_StaticFields *v10; // x0
  System_Int32_array **v11; // x1

  if ( (byte_4187627 & 1) == 0 )
  {
    sub_B2C35C(&BlankEarth_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_16864/*"blankEarthRotateKey"*/, v8);
    byte_4187627 = 1;
  }
  static_fields = BlankEarth_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SOUTH_POLE_ROTATE.fields.x = 0x4292000041F80000LL;
  static_fields->SOUTH_POLE_ROTATE.fields.z = 60.0;
  v10 = BlankEarth_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_16864/*"blankEarthRotateKey"*/;
  v10->BLANK_EARTH_ROTATE_KEY = (struct System_String_o *)StringLiteral_16864/*"blankEarthRotateKey"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v10->BLANK_EARTH_ROTATE_KEY, v11, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4187626 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16441/*"ar223"*/, method);
    byte_4187626 = 1;
  }
  *(_QWORD *)&this->fields.startupFadeTime = 0x3E0000003F000000LL;
  *(_OWORD *)&this->fields.greenwichOffset = xmmword_31A1840;
  *(_OWORD *)&this->fields.zoomOutSpdTime = xmmword_31A1850;
  *(_OWORD *)&this->fields.earthRadius = xmmword_31A1860;
  v9 = (System_Int32_array **)StringLiteral_16441/*"ar223"*/;
  this->fields.startupSeName = (struct System_String_o *)StringLiteral_16441/*"ar223"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.startupSeName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.zoomInEasingType = 0x300000003LL;
  this->fields.firstAnimTime = 3.0;
  *(_OWORD *)&this->fields.firstFadeTime = xmmword_31A1870;
  *(_QWORD *)&this->fields.earthBtnMoveSpeedTime = 0x406000003E800000LL;
  *(_OWORD *)&this->fields.zoomInPos.fields.z = xmmword_31A1880;
  this->fields.startupEasingType = 2;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarth__Awake(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct CStateManager_BlankEarth__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct CStateManager_BlankEarth__o *mFSM; // x21
  BlankEarth_StateNone_o *v22; // x22
  UnityEngine_GameObject_o *earthRoot; // x0
  CStateManager_QAASpotStateController_IMapSpot__o *v24; // x21
  BlankEarth_StateStartup_o *v25; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v26; // x21
  BlankEarth_StateMain_o *v27; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v28; // x21
  BlankEarth_StateZoomIn_o *v29; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v30; // x21
  BlankEarth_StateZoomOut_o *v31; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v32; // x21
  BlankEarth_StateQAARotate_o *v33; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v34; // x20
  BlankEarth_StateShortcutRotate_o *v35; // x21
  const MethodInfo *v36; // x2
  BlankEarthSpotAnimStateManager_o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_418760F & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthSpotAnimStateManager_TypeInfo, method);
    sub_B2C35C(&Method_CStateManager_BlankEarth___ctor__, v3);
    sub_B2C35C(&Method_CStateManager_BlankEarth__add__, v4);
    sub_B2C35C(&CStateManager_BlankEarth__TypeInfo, v5);
    sub_B2C35C(&BlankEarth_StateMain_TypeInfo, v6);
    sub_B2C35C(&BlankEarth_StateNone_TypeInfo, v7);
    sub_B2C35C(&BlankEarth_StateQAARotate_TypeInfo, v8);
    sub_B2C35C(&BlankEarth_StateShortcutRotate_TypeInfo, v9);
    sub_B2C35C(&BlankEarth_StateStartup_TypeInfo, v10);
    sub_B2C35C(&BlankEarth_StateZoomIn_TypeInfo, v11);
    sub_B2C35C(&BlankEarth_StateZoomOut_TypeInfo, v12);
    byte_418760F = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v14 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_BlankEarth__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v14,
      (QAASpotStateController_IMapSpot_o *)this,
      7,
      (const MethodInfo_2A08354 *)Method_CStateManager_BlankEarth___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarth__o *)v14;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    mFSM = this->fields.mFSM;
    v22 = (BlankEarth_StateNone_o *)sub_B2C42C(BlankEarth_StateNone_TypeInfo);
    BlankEarth_StateNone___ctor(v22, 0LL);
    if ( !mFSM )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v22,
      (const MethodInfo_2A08420 *)Method_CStateManager_BlankEarth__add__);
    v24 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v25 = (BlankEarth_StateStartup_o *)sub_B2C42C(BlankEarth_StateStartup_TypeInfo);
    BlankEarth_StateStartup___ctor(v25, 0LL);
    if ( !v24 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v24,
      1,
      (IState_T__o *)v25,
      (const MethodInfo_2A08420 *)Method_CStateManager_BlankEarth__add__);
    v26 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v27 = (BlankEarth_StateMain_o *)sub_B2C42C(BlankEarth_StateMain_TypeInfo);
    BlankEarth_StateMain___ctor(v27, 0LL);
    if ( !v26 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v26,
      2,
      (IState_T__o *)v27,
      (const MethodInfo_2A08420 *)Method_CStateManager_BlankEarth__add__);
    v28 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v29 = (BlankEarth_StateZoomIn_o *)sub_B2C42C(BlankEarth_StateZoomIn_TypeInfo);
    BlankEarth_StateZoomIn___ctor(v29, 0LL);
    if ( !v28 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v28,
      3,
      (IState_T__o *)v29,
      (const MethodInfo_2A08420 *)Method_CStateManager_BlankEarth__add__);
    v30 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v31 = (BlankEarth_StateZoomOut_o *)sub_B2C42C(BlankEarth_StateZoomOut_TypeInfo);
    BlankEarth_StateZoomOut___ctor(v31, 0LL);
    if ( !v30 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v30,
      4,
      (IState_T__o *)v31,
      (const MethodInfo_2A08420 *)Method_CStateManager_BlankEarth__add__);
    v32 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v33 = (BlankEarth_StateQAARotate_o *)sub_B2C42C(BlankEarth_StateQAARotate_TypeInfo);
    BlankEarth_StateQAARotate___ctor(v33, 0LL);
    if ( !v32
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v32,
            5,
            (IState_T__o *)v33,
            (const MethodInfo_2A08420 *)Method_CStateManager_BlankEarth__add__),
          v34 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v35 = (BlankEarth_StateShortcutRotate_o *)sub_B2C42C(BlankEarth_StateShortcutRotate_TypeInfo),
          BlankEarth_StateShortcutRotate___ctor(v35, 0LL),
          !v34) )
    {
LABEL_15:
      sub_B2C434(earthRoot, method);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v34,
      6,
      (IState_T__o *)v35,
      (const MethodInfo_2A08420 *)Method_CStateManager_BlankEarth__add__);
    BlankEarth__SetState(this, 0, v36);
  }
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_15;
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !earthRoot )
    goto LABEL_15;
  this->fields.mRootQua = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)earthRoot, 0LL);
  v37 = (BlankEarthSpotAnimStateManager_o *)sub_B2C42C(BlankEarthSpotAnimStateManager_TypeInfo);
  BlankEarthSpotAnimStateManager___ctor(v37, 0LL);
  this->fields._SpotAnimStateManager_k__BackingField = v37;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._SpotAnimStateManager_k__BackingField,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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
  if ( (byte_4187613 & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_B2C35C(&CTouch_TypeInfo, that);
    byte_4187613 = 1;
  }
  if ( !that )
LABEL_65:
    sub_B2C434(this, that);
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
      if ( !byte_4186509 )
      {
        sub_B2C35C(&CTouch_TypeInfo, that);
        byte_4186509 = 1;
      }
      v11 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
      }
      x = v11->static_fields->mScrPosDelta.fields.x;
      if ( !byte_418650A )
      {
        sub_B2C35C(&CTouch_TypeInfo, that);
        v11 = CTouch_TypeInfo;
        byte_418650A = 1;
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
      if ( !byte_4186509 )
      {
        sub_B2C35C(&CTouch_TypeInfo, that);
        byte_4186509 = 1;
      }
      v14 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v14 = CTouch_TypeInfo;
      }
      y = v14->static_fields->mScrPosDelta.fields.y;
      if ( !byte_418650A )
      {
        sub_B2C35C(&CTouch_TypeInfo, that);
        v14 = CTouch_TypeInfo;
        byte_418650A = 1;
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
  UnityEngine_Transform__Rotate_35436904((UnityEngine_Transform_o *)this, v36, 0LL);
}


UnityEngine_Vector3_o __fastcall BlankEarth__CalcPosFromLatLong(
        BlankEarth_o *this,
        float latitudeDegree,
        float longitudeDegree,
        const MethodInfo *method)
{
  float v5; // s8
  float v6; // s9
  float v7; // s11
  float v8; // s10
  float v9; // s0
  float earthRadius; // s12
  float v11; // s8
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v5 = latitudeDegree * 0.017453;
  v6 = (float)(this->fields.greenwichOffset + longitudeDegree) * 0.017453;
  v7 = cosf(latitudeDegree * 0.017453) * this->fields.earthRadius;
  v8 = cosf(v6);
  v9 = sinf(v5);
  earthRadius = this->fields.earthRadius;
  v11 = v9;
  v12 = sinf(v6);
  v13 = v11 * earthRadius;
  v14 = v7 * v12;
  v15 = v8 * v7;
  result.fields.z = v14;
  result.fields.y = v13;
  result.fields.x = v15;
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
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
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

  if ( (byte_4187614 & 1) == 0 )
  {
    sub_B2C35C(&BlankEarth__CoCheckTutorial_d__84_TypeInfo, adapter);
    byte_4187614 = 1;
  }
  v7 = sub_B2C42C(BlankEarth__CoCheckTutorial_d__84_TypeInfo);
  BlankEarth__CoCheckTutorial_d__84___ctor((BlankEarth__CoCheckTutorial_d__84_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 56) = adapter;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 56), (System_Int32_array **)adapter, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = finishCallback;
  sub_B2C2F8(
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4187615 & 1) == 0 )
  {
    sub_B2C35C(&BlankEarth__CoStandByChangeState_d__86_TypeInfo, *(_QWORD *)&state);
    byte_4187615 = 1;
  }
  v7 = sub_B2C42C(BlankEarth__CoStandByChangeState_d__86_TypeInfo);
  BlankEarth__CoStandByChangeState_d__86___ctor((BlankEarth__CoStandByChangeState_d__86_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = state;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B2C2F8(
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
  v9 = cosf(v5 * 0.017453) * this->fields.earthRadius;
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
  v22 = UnityEngine_Quaternion__LookRotation_35345908(normalized, 0LL);
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__Inverse(v22, 0LL);
  result.fields.w = v18;
  result.fields.z = v17;
  result.fields.y = v16;
  result.fields.x = v15;
  return result;
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  TerminalSceneComponent_c *v21; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v23; // x1
  System_String_o *transform; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  UnityEngine_GameObject_o *v34; // x21
  UnityEngine_Object_o *v35; // x22
  System_String_o *v36; // x0
  UnityEngine_Transform_o *v37; // x22
  int v38; // s0
  const MethodInfo *v41; // x4
  BlankEarthPoint_o *v42; // x21
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418761B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___, spotObj);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_2826/*"BlankEarthPoint_"*/, v20);
    byte_418761B = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, spotObj);
    byte_4183C65 = 1;
  }
  v21 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v21 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v21->static_fields->mInstance;
  v23 = *p_mInstance;
  this->fields.mTerminalScene = *p_mInstance;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mTerminalScene,
    (System_Int32_array **)v23,
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mTerminalList,
    (System_Int32_array **)mTerminalList,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v34 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)spotObj,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_31331816(v34, this->fields.earthSpotRoot, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v34, one, 0LL);
  if ( !v34 )
    goto LABEL_22;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform(v34, 0LL);
  if ( !spotEnt )
    goto LABEL_22;
  v35 = (UnityEngine_Object_o *)transform;
  v36 = System_Int32__ToString((int)spotEnt + 16, 0LL);
  transform = System_String__Concat_44305532((System_String_o *)StringLiteral_2826/*"BlankEarthPoint_"*/, v36, 0LL);
  if ( !v35
    || (UnityEngine_Object__set_name(v35, transform, 0LL),
        GameObjectExtensions__SetLocalPosition_31326032(v34, x, y, z, 0LL),
        transform = (System_String_o *)UnityEngine_GameObject__get_transform(v34, 0LL),
        !this->fields.blankEarth)
    || (v37 = (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_position(this->fields.blankEarth, 0LL),
        !v37)
    || (UnityEngine_Transform__LookAt_35438000(v37, *(UnityEngine_Vector3_o *)&v38, 0LL),
        (transform = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v34,
                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___)) == 0LL) )
  {
LABEL_22:
    sub_B2C434(transform, v25);
  }
  v42 = (BlankEarthPoint_o *)transform;
  BlankEarthPoint__SetEarthObj((BlankEarthPoint_o *)transform, spotEnt, this, this->fields.mEarthCamera, v41);
  return v42;
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
    sub_B2C2F8(
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
      sub_B2C434(0LL, v5);
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
BlankEarthPoint_o *__fastcall BlankEarth__GetEarthPoint(BlankEarth_o *this, int32_t spotId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  BlankEarthPoint_o *result; // x0
  UnityEngine_Transform_o *transform; // x19
  System_String_o *v8; // x0
  UnityEngine_Object_o *v9; // x19
  bool v10; // w8
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = spotId;
  if ( (byte_4187617 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___, *(_QWORD *)&spotId);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_2826/*"BlankEarthPoint_"*/, v5);
    byte_4187617 = 1;
  }
  result = (BlankEarthPoint_o *)this->fields.earthSpotRoot;
  if ( !result )
    goto LABEL_13;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0LL);
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  result = (BlankEarthPoint_o *)System_String__Concat_44305532((System_String_o *)StringLiteral_2826/*"BlankEarthPoint_"*/, v8, 0LL);
  if ( !transform )
    goto LABEL_13;
  v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)result, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  result = 0LL;
  if ( v10 )
  {
    if ( v9 )
    {
      result = (BlankEarthPoint_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      if ( result )
        return (BlankEarthPoint_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)result,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    }
LABEL_13:
    sub_B2C434(result, *(_QWORD *)&spotId);
  }
  return result;
}


float __fastcall BlankEarth__GetSafeLatitude(BlankEarth_o *this, float latitudeDegree, const MethodInfo *method)
{
  return UnityEngine_Mathf__Clamp(latitudeDegree, -this->fields.maxAngle, this->fields.maxAngle, 0LL);
}


System_String_o *__fastcall BlankEarth__GetSpotPrefabName(BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  BlankEarthSpotEntity_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = spot;
  if ( (byte_418761A & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    spot = (BlankEarthSpotEntity_o *)sub_B2C35C(&StringLiteral_5804/*"EarthPoint_{0:00000}"*/, v3);
    byte_418761A = 1;
  }
  if ( !v2 )
    sub_B2C434(spot, method);
  objectId = v2->fields.objectId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_5804/*"EarthPoint_{0:00000}"*/, v4, 0LL);
}


int32_t __fastcall BlankEarth__GetState(BlankEarth_o *this, const MethodInfo *method)
{
  BlankEarth_o *v2; // x19
  struct CStateManager_BlankEarth__o *mFSM; // x8

  v2 = this;
  if ( (byte_4187611 & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_B2C35C(&Method_CStateManager_BlankEarth__getState__, method);
    byte_4187611 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
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
  __int64 v3; // x1
  BlankEarth_c *v4; // x0
  System_String_o *String_35342888; // x21
  System_Char_array *IsNullOrEmpty; // x0
  System_Char_array *v7; // x1
  System_String_array *v8; // x20
  float v9; // s0
  float v10; // s8
  float v11; // s0
  float v12; // s9
  float v13; // s2
  BlankEarth_c *v14; // x0
  float *p_x; // x8
  float v16; // s0
  float v17; // s1
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s3
  __int64 v22; // x0
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4187616 & 1) == 0 )
  {
    sub_B2C35C(&BlankEarth_TypeInfo, method);
    sub_B2C35C(&char___TypeInfo, v3);
    byte_4187616 = 1;
  }
  v4 = BlankEarth_TypeInfo;
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v4 = BlankEarth_TypeInfo;
  }
  String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888(v4->static_fields->BLANK_EARTH_ROTATE_KEY, 0LL);
  IsNullOrEmpty = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_21;
  v7 = IsNullOrEmpty;
  if ( !IsNullOrEmpty->max_length )
    goto LABEL_22;
  IsNullOrEmpty->m_Items[2] = 44;
  if ( !String_35342888 )
    goto LABEL_21;
  v8 = System_String__Split(String_35342888, IsNullOrEmpty, 0LL);
  IsNullOrEmpty = (System_Char_array *)System_String__IsNullOrEmpty(String_35342888, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_16;
  if ( !v8 )
LABEL_21:
    sub_B2C434(IsNullOrEmpty, v7);
  if ( v8->max_length == 4 )
  {
    this->fields.totalAngle = System_Single__Parse(v8->m_Items[3], 0LL);
    if ( v8->max_length )
    {
      v9 = System_Single__Parse(v8->m_Items[0], 0LL);
      if ( v8->max_length > 1 )
      {
        v10 = v9;
        v11 = System_Single__Parse(v8->m_Items[1], 0LL);
        if ( v8->max_length > 2 )
        {
          v12 = v11;
          v13 = System_Single__Parse(v8->m_Items[2], 0LL);
          goto LABEL_20;
        }
      }
    }
LABEL_22:
    v22 = sub_B2C460(IsNullOrEmpty);
    sub_B2C400(v22, 0LL);
  }
LABEL_16:
  this->fields.totalAngle = -this->fields.maxAngle;
  v14 = BlankEarth_TypeInfo;
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v14 = BlankEarth_TypeInfo;
  }
  p_x = &v14->static_fields->SOUTH_POLE_ROTATE.fields.x;
  v10 = *p_x;
  v12 = p_x[1];
  v13 = p_x[2];
LABEL_20:
  v16 = v10;
  v17 = v12;
  *(UnityEngine_Quaternion_o *)&v18 = UnityEngine_Quaternion__Euler_35347036(*(UnityEngine_Vector3_o *)(&v13 - 2), 0LL);
  result.fields.w = v21;
  result.fields.z = v20;
  result.fields.y = v19;
  result.fields.x = v18;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__OnPressRotateBtnX(BlankEarth_o *this, bool isLeft, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4187623 & 1) == 0 )
  {
    sub_B2C35C(&Method_BlankEarth_OnPressRotateBtnX__, isLeft);
    byte_4187623 = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnX__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnX__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B2C364(Method_BlankEarth_OnPressRotateBtnX__);
  v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  this->fields.isLeft = isLeft;
  this->fields.isBtnTouchX = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__OnPressRotateBtnY(BlankEarth_o *this, bool isUp, const MethodInfo *method)
{
  System_Reflection_MethodBase_o *v5; // x0
  _QWORD *v6; // x0

  if ( (byte_4187624 & 1) == 0 )
  {
    sub_B2C35C(&Method_BlankEarth_OnPressRotateBtnY__, isUp);
    byte_4187624 = 1;
  }
  v6 = Method_BlankEarth_OnPressRotateBtnY__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnY__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B2C364(Method_BlankEarth_OnPressRotateBtnY__);
  v5 = (System_Reflection_MethodBase_o *)sub_B2C340(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  UnityEngine_Object_o *EarthPoint; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  EarthPoint = (UnityEngine_Object_o *)spot;
  if ( (byte_4187621 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, spot);
    byte_4187621 = 1;
  }
  if ( EarthPoint )
    EarthPoint = (UnityEngine_Object_o *)BlankEarth__GetEarthPoint(
                                           this,
                                           EarthPoint->fields.m_CachedPtr,
                                           *(const MethodInfo **)&animIndex);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(EarthPoint, 0LL, 0LL);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !EarthPoint )
      sub_B2C434(v11, v12);
    BlankEarthPoint__PlaySpotUniqueAnim((BlankEarthPoint_o *)EarthPoint, animIndex, isQuick, finishCallback, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__PutAllSpots(BlankEarth_o *this, int32_t beforeClearQuestId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BlankEarthSpotMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *All; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v14; // x21
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  System_Collections_Generic_IEnumerable_T__o *v16; // x0

  if ( (byte_4187618 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_ExcludeNull_BlankEarthPoint___, *(_QWORD *)&beforeClearQuestId);
    sub_B2C35C(&Method_BlankEarth_PutSpot__, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___, v8);
    sub_B2C35C(&Method_System_Func_BlankEarthSpotEntity__BlankEarthPoint___ctor__, v9);
    sub_B2C35C(&System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo, v10);
    byte_4187618 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BlankEarthSpotMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v12);
  All = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__GetAll(
                                                               Master_WarQuestSelectionMaster,
                                                               0LL);
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v14,
    (Il2CppObject *)this,
    Method_BlankEarth_PutSpot__,
    (const MethodInfo_2713350 *)Method_System_Func_BlankEarthSpotEntity__BlankEarthPoint___ctor__);
  v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                         All,
                                                         (System_Func_TSource__TResult__o *)v14,
                                                         (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
  v16 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v15,
          (const MethodInfo_1726A44 *)Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
  System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_TSource__o *)v16,
    (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
}


BlankEarthPoint_o *__fastcall BlankEarth__PutSpot(
        BlankEarth_o *this,
        BlankEarthSpotEntity_o *spot,
        const MethodInfo *method)
{
  BlankEarth_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  float v9; // s10
  float v10; // s11
  float v11; // s0
  float earthRadius; // s12
  float v13; // s8
  float v14; // s9
  float v15; // s0
  float v16; // s13
  float v17; // s10
  float v18; // s11
  AssetManager_o *v19; // x21
  const MethodInfo *v20; // x1
  AssetData_o *Asset_30175668; // x21
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x21
  const MethodInfo *v23; // x3

  v4 = this;
  if ( (byte_4187619 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, spot);
    sub_B2C35C(&BlankEarth_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&ScrTerminalListTop_TypeInfo, v7);
    this = (BlankEarth_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    byte_4187619 = 1;
  }
  if ( !spot )
    goto LABEL_18;
  v9 = spot->fields.x * 0.017453;
  v10 = (float)(spot->fields.y + v4->fields.greenwichOffset) * 0.017453;
  v11 = cosf(v9);
  earthRadius = v4->fields.earthRadius;
  v13 = v11;
  v14 = cosf(v10);
  v15 = sinf(v9);
  v16 = v4->fields.earthRadius;
  v17 = v15;
  v18 = sinf(v10);
  this = (BlankEarth_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v19 = (AssetManager_o *)this;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v19 )
    goto LABEL_18;
  Asset_30175668 = AssetManager__GetAsset_30175668(
                     v19,
                     ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH,
                     0LL);
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
  this = (BlankEarth_o *)BlankEarth__GetSpotPrefabName(spot, v20);
  if ( !Asset_30175668 )
LABEL_18:
    sub_B2C434(this, spot);
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 Asset_30175668,
                                                                 (System_String_o *)this,
                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
             v14 * (float)(v13 * earthRadius),
             v17 * v16,
             (float)(v13 * earthRadius) * v18,
             v23);
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
  UnityEngine_Object_o *EarthPoint; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  EarthPoint = (UnityEngine_Object_o *)spot;
  if ( (byte_4187620 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, spot);
    byte_4187620 = 1;
  }
  if ( EarthPoint )
    EarthPoint = (UnityEngine_Object_o *)BlankEarth__GetEarthPoint(
                                           this,
                                           EarthPoint->fields.m_CachedPtr,
                                           *(const MethodInfo **)&dispType);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(EarthPoint, 0LL, 0LL);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !EarthPoint )
      sub_B2C434(v11, v12);
    BlankEarthPoint__RevealOrConcealSpotAnim((BlankEarthPoint_o *)EarthPoint, dispType, isQuick, finishCallback, v13);
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
  if ( (byte_418761F & 1) == 0 )
  {
    sub_B2C35C(&BlankEarth_QAARotateEarthParam_TypeInfo, *(_QWORD *)&easeType);
    byte_418761F = 1;
  }
  v16 = (BlankEarth_QAARotateEarthParam_o *)sub_B2C42C(BlankEarth_QAARotateEarthParam_TypeInfo);
  v34.fields.x = x;
  v34.fields.y = y;
  v17 = v16;
  BlankEarth_QAARotateEarthParam___ctor(v16, time, v34, easeType, finishCallback, 0LL);
  this->fields.qaaRotateEarthParam = v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.qaaRotateEarthParam,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.rotateEarthTimeCalculateParam = rotateTimeCalculateParam;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rotateEarthTimeCalculateParam,
    (System_Int32_array **)rotateTimeCalculateParam,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !this )
    sub_B2C434(v30, v31);
  if ( isShortcut )
    v33 = 6;
  else
    v33 = 5;
  BlankEarth__SetState(this, v33, v32);
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
  __int64 v15; // x1
  BlankEarth_QAARotateEarthResponse_o *v16; // x20

  if ( (byte_418761E & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___, blankEarthSpotEntity);
    sub_B2C35C(&BlankEarth_QAARotateEarthResponse_TypeInfo, v15);
    byte_418761E = 1;
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
    v16 = (BlankEarth_QAARotateEarthResponse_o *)sub_B2C42C(BlankEarth_QAARotateEarthResponse_TypeInfo);
    BlankEarth_QAARotateEarthResponse___ctor(v16, 1, 0LL);
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      (System_Action_T__o *)finishCallback,
      v16,
      (const MethodInfo_2D65B10 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
    sub_B2C434(0LL, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  BlankEarth_c *v6; // x0
  System_String_o *BLANK_EARTH_ROTATE_KEY; // x19
  System_String_array *v8; // x20
  float v9; // s0
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  float v26; // s0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  float v41; // s0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  float v56; // s0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x21
  System_String_o *v64; // x0
  __int64 v65; // x0
  __int64 v66; // x0
  UnityEngine_Vector3_o eulerAngles; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF

  methoda.methodPointer = *(Il2CppMethodPointer *)&qua.fields.x;
  methoda.invoker_method = *(void **)&qua.fields.z;
  *((float *)&methoda.klass + 1) = totalAngle;
  if ( (byte_418761D & 1) == 0 )
  {
    sub_B2C35C(&BlankEarth_TypeInfo, method);
    sub_B2C35C(&string___TypeInfo, v4);
    sub_B2C35C(&StringLiteral_699/*","*/, v5);
    byte_418761D = 1;
  }
  eulerAngles = UnityEngine_Quaternion__get_eulerAngles(qua, &methoda);
  v6 = BlankEarth_TypeInfo;
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v6 = BlankEarth_TypeInfo;
  }
  BLANK_EARTH_ROTATE_KEY = v6->static_fields->BLANK_EARTH_ROTATE_KEY;
  v8 = (System_String_array *)sub_B2C374(string___TypeInfo, 7LL);
  v10 = System_Single__ToString(v9, (const MethodInfo *)&eulerAngles);
  if ( !v8 )
    sub_B2C434(v10, v11);
  v18 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_B2C41C(v10, v8->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_36;
  }
  if ( !v8->max_length )
    goto LABEL_35;
  v8->m_Items[0] = (System_String_o *)v18;
  sub_B2C2F8((BattleServantConfConponent_o *)v8->m_Items, v18, v12, v13, v14, v15, v16, v17);
  v10 = (System_String_o *)StringLiteral_699/*","*/;
  if ( StringLiteral_699/*","*/ )
  {
    v10 = (System_String_o *)sub_B2C41C(StringLiteral_699/*","*/, v8->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_36;
    v25 = (System_Int32_array **)StringLiteral_699/*","*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_35;
  v8->m_Items[1] = (System_String_o *)v25;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  v10 = System_Single__ToString(v26, (const MethodInfo *)&eulerAngles.fields.y);
  v33 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_B2C41C(v10, v8->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_36;
  }
  if ( v8->max_length <= 2 )
    goto LABEL_35;
  v8->m_Items[2] = (System_String_o *)v33;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->m_Items[2], v33, v27, v28, v29, v30, v31, v32);
  v10 = (System_String_o *)StringLiteral_699/*","*/;
  if ( StringLiteral_699/*","*/ )
  {
    v10 = (System_String_o *)sub_B2C41C(StringLiteral_699/*","*/, v8->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_36;
    v40 = (System_Int32_array **)StringLiteral_699/*","*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v8->max_length <= 3 )
    goto LABEL_35;
  v8->m_Items[3] = (System_String_o *)v40;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->m_Items[3], v40, v34, v35, v36, v37, v38, v39);
  v10 = System_Single__ToString(v41, (const MethodInfo *)&eulerAngles.fields.z);
  v48 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_B2C41C(v10, v8->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_36;
  }
  if ( v8->max_length <= 4 )
    goto LABEL_35;
  v8->m_Items[4] = (System_String_o *)v48;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->m_Items[4], v48, v42, v43, v44, v45, v46, v47);
  v10 = (System_String_o *)StringLiteral_699/*","*/;
  if ( StringLiteral_699/*","*/ )
  {
    v10 = (System_String_o *)sub_B2C41C(StringLiteral_699/*","*/, v8->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_36;
    v55 = (System_Int32_array **)StringLiteral_699/*","*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v8->max_length <= 5 )
    goto LABEL_35;
  v8->m_Items[5] = (System_String_o *)v55;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->m_Items[5], v55, v49, v50, v51, v52, v53, v54);
  v10 = System_Single__ToString(v56, (const MethodInfo *)((char *)&methoda.klass + 4));
  v63 = (System_Int32_array **)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_B2C41C(v10, v8->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_36:
      v66 = sub_B2C454(v10);
      sub_B2C400(v66, 0LL);
    }
  }
  if ( v8->max_length <= 6 )
  {
LABEL_35:
    v65 = sub_B2C460(v10);
    sub_B2C400(v65, 0LL);
  }
  v8->m_Items[6] = (System_String_o *)v63;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->m_Items[6], v63, v57, v58, v59, v60, v61, v62);
  v64 = System_String__Concat_44385656(v8, 0LL);
  UnityEngine_PlayerPrefs__SetString(BLANK_EARTH_ROTATE_KEY, v64, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetEarthRotate(BlankEarth_o *this, UnityEngine_Quaternion_o qua, const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0

  blankEarth = this->fields.blankEarth;
  if ( !blankEarth )
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, *(_QWORD *)&spotId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  EarthPoint = (System_Int32_array **)BlankEarth__GetEarthPoint(v4, spotId, v6);
  v4->fields.focusEarthPoint = (struct BlankEarthPoint_o *)EarthPoint;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.focusEarthPoint, EarthPoint, v8, v9, v10, v11, v12, v13);
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
  sub_B2C2F8(
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

  if ( (byte_4187612 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_BlankEarth__setState__, *(_QWORD *)&state);
    byte_4187612 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_BlankEarth__setState__);
}


void __fastcall BlankEarth__SetTutorialFlag(BlankEarth_o *this, bool isAvailable, const MethodInfo *method)
{
  this->fields.isTutorialAvailable = isAvailable;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetZoomEarth(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *focusEarthPoint; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  float *EarthPoint; // x0
  TerminalPramsManager_c *v8; // x0
  float v9; // s8
  float v10; // s9
  float v11; // s10
  float v12; // s11
  UnityEngine_Transform_o *blankEarth; // x20
  float zoomInOffset; // s12
  float y; // s4
  float z; // s5
  float v17; // s3
  int v18; // s0
  UnityEngine_Transform_o *transform; // x20
  int v23; // s0
  const MethodInfo *v27; // x2
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v31; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4187622 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    byte_4187622 = 1;
  }
  focusEarthPoint = (UnityEngine_Object_o *)this->fields.focusEarthPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(focusEarthPoint, 0LL, 0LL) )
  {
    EarthPoint = (float *)this->fields.focusEarthPoint;
    if ( !EarthPoint )
      goto LABEL_28;
  }
  else
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C6A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
      byte_4183C6A = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    EarthPoint = (float *)BlankEarth__GetEarthPoint(this, v8->static_fields->_BlankEarthSpotId_k__BackingField, v6);
    if ( !EarthPoint )
LABEL_28:
      sub_B2C434(EarthPoint, v5);
  }
  v9 = EarthPoint[54];
  v10 = EarthPoint[55];
  v11 = EarthPoint[56];
  v12 = EarthPoint[57];
  blankEarth = this->fields.blankEarth;
  zoomInOffset = this->fields.zoomInOffset;
  up = UnityEngine_Vector3__get_up(0LL);
  y = up.fields.y;
  z = up.fields.z;
  up.fields.y = up.fields.x;
  up.fields.z = y;
  v17 = z;
  v30 = UnityEngine_Quaternion__AngleAxis(-zoomInOffset, *(UnityEngine_Vector3_o *)&up.fields.y, 0LL);
  v31.fields.x = v9;
  v31.fields.y = v10;
  v31.fields.z = v11;
  v31.fields.w = v12;
  *(UnityEngine_Quaternion_o *)&v18 = UnityEngine_Quaternion__op_Multiply(v30, v31, 0LL);
  if ( !blankEarth )
    goto LABEL_28;
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v18, 0LL);
  EarthPoint = (float *)this->fields.earthRoot;
  if ( !EarthPoint )
    goto LABEL_28;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EarthPoint, 0LL);
  *(UnityEngine_Quaternion_o *)&v23 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !transform )
    goto LABEL_28;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v23, 0LL);
  EarthPoint = (float *)this->fields.earthRoot;
  if ( !EarthPoint )
    goto LABEL_28;
  EarthPoint = (float *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EarthPoint, 0LL);
  if ( !EarthPoint )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)EarthPoint, this->fields.zoomInPos, 0LL);
  EarthPoint = (float *)this->fields.earthRoot;
  if ( !EarthPoint )
    goto LABEL_28;
  EarthPoint = (float *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EarthPoint, 0LL);
  if ( !EarthPoint )
    goto LABEL_28;
  v29.fields.x = this->fields.zoomInScl;
  v29.fields.y = v29.fields.x;
  v29.fields.z = v29.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)EarthPoint, v29, 0LL);
  EarthPoint = (float *)this->fields.mTerminalList;
  if ( !EarthPoint )
    goto LABEL_28;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)EarthPoint, 0, 1, 0LL);
  EarthPoint = (float *)this->fields.mTerminalList;
  if ( !EarthPoint )
    goto LABEL_28;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)EarthPoint, 0.0, 0, 1, 0LL);
  BlankEarth__SetState(this, 3, v27);
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
          v8 = sub_B2C460(this);
          sub_B2C400(v8, 0LL);
        }
        v7 = presentBoxHideGameObjectList->m_Items[v5];
        if ( !v7 )
          sub_B2C434(0LL, isDisp);
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

  if ( (byte_4187610 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_BlankEarth__update__, method);
    byte_4187610 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_BlankEarth__update__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthTransform_o *__fastcall BlankEarth__UpdateBlankEarthTransformData(
        BlankEarth_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *earthRoot; // x0
  BlankEarthTransform_o *v5; // x20
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  float v10; // s11
  float v11; // s10
  float v12; // s9
  float v13; // s8
  UnityEngine_GameObject_o *v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  BlankEarthTransform_o *v23; // x0
  const MethodInfo *v24; // x5
  TerminalPramsManager_c *v25; // x0
  BattleServantConfConponent_o *p_BlankEarthTransformData_k__BackingField; // x0
  float totalAng; // [xsp+34h] [xbp-6Ch]
  float w; // [xsp+38h] [xbp-68h]
  float earthRootRot; // [xsp+3Ch] [xbp-64h]
  float y; // [xsp+88h] [xbp-18h]
  float x; // [xsp+8Ch] [xbp-14h]
  UnityEngine_Vector3_o v33; // 0:x1.12
  UnityEngine_Vector3_o v34; // 0:x3.12
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v37; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4187625 & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthTransform_TypeInfo, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    byte_4187625 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184F5D )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184F5D = 1;
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
  v5 = *(BlankEarthTransform_o **)(*(_QWORD *)&earthRoot[7].fields.m_CachedPtr + 496LL);
  *(UnityEngine_Quaternion_o *)&v6 = UnityEngine_Transform__get_rotation(this->fields.blankEarth, 0LL);
  v10 = v6;
  v11 = v7;
  v12 = v8;
  v13 = v9;
  if ( !v5 )
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
          v23 = (BlankEarthTransform_o *)sub_B2C42C(BlankEarthTransform_TypeInfo);
          v37.fields.y = y;
          v37.fields.x = x;
          v37.fields.z = earthRootRot;
          v36.fields.y = v11;
          v37.fields.w = w;
          v36.fields.z = v12;
          v36.fields.w = v13;
          *(_QWORD *)&v33.fields.x = 0LL;
          v5 = v23;
          v36.fields.x = v10;
          BlankEarthTransform___ctor(v23, v36, v37, v33, v34, totalAng, v24);
          goto LABEL_21;
        }
      }
    }
LABEL_30:
    sub_B2C434(earthRoot, method);
  }
  v5->fields.blankEarthRotation.fields.x = v6;
  v5->fields.blankEarthRotation.fields.y = v7;
  v5->fields.blankEarthRotation.fields.z = v8;
  v5->fields.blankEarthRotation.fields.w = v9;
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_30;
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !earthRoot )
    goto LABEL_30;
  v5->fields.earthRootRotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)earthRoot, 0LL);
  v5->fields.earthRootLocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.earthRoot, 0LL);
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_30;
  v14 = UnityEngine_GameObject__get_gameObject(earthRoot, 0LL);
  v5->fields.earthRootLocalScale = GameObjectExtensions__GetLocalScale(v14, 0LL);
  v5->fields.totalAngle = this->fields.totalAngle;
LABEL_21:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4187640 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    byte_4187640 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  p_BlankEarthTransformData_k__BackingField = (BattleServantConfConponent_o *)&v25->static_fields->_BlankEarthTransformData_k__BackingField;
  p_BlankEarthTransformData_k__BackingField->klass = (BattleServantConfConponent_c *)v5;
  sub_B2C2F8(p_BlankEarthTransformData_k__BackingField, (System_Int32_array **)v5, v16, v17, v18, v19, v20, v21);
  return v5;
}


void __fastcall BlankEarth__UpdateSpotDisp(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *earthSpotRoot; // x0
  System_Collections_Generic_IEnumerable_T__o *v9; // x19
  BlankEarth___c_c *v10; // x8
  struct BlankEarth___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__96_0; // x20
  Il2CppObject *v13; // x21
  struct BlankEarth___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_418761C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BlankEarthPoint___ctor__, method);
    sub_B2C35C(&System_Action_BlankEarthPoint__TypeInfo, v3);
    sub_B2C35C(&Method_BasicHelper_ForEach_BlankEarthPoint___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___, v5);
    sub_B2C35C(&Method_BlankEarth___c__UpdateSpotDisp_b__96_0__, v6);
    sub_B2C35C(&BlankEarth___c_TypeInfo, v7);
    byte_418761C = 1;
  }
  earthSpotRoot = this->fields.earthSpotRoot;
  if ( !earthSpotRoot )
    sub_B2C434(0LL, method);
  v9 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                                        earthSpotRoot,
                                                        (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  v10 = BlankEarth___c_TypeInfo;
  if ( (BYTE3(BlankEarth___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarth___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo);
    v10 = BlankEarth___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__96_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BlankEarth___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__96_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BlankEarthPoint__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__96_0,
      v13,
      Method_BlankEarth___c__UpdateSpotDisp_b__96_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_BlankEarthPoint___ctor__);
    v14 = BlankEarth___c_TypeInfo->static_fields;
    v14->__9__96_0 = (struct System_Action_BlankEarthPoint__o *)_9__96_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v14->__9__96_0,
      (System_Int32_array **)_9__96_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v9,
    (System_Action_T__o *)_9__96_0,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_BlankEarthPoint___);
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
    sub_B2C434(blankEarth, method);
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
  v8 = UnityEngine_Quaternion__op_Multiply_35346336(v12, v9, 0LL);
  this->fields.totalAngle = asinf(v8.fields.y) * 57.296;
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
  sub_B2C2F8(
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
  sub_B2C2F8(v11, finishCallback);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, method);
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
  if ( (byte_4184E88 & 1) == 0 )
  {
    this = (BlankEarth_StateEarthAutoRotateBase_o *)sub_B2C35C(&System_Action_TypeInfo, method);
    byte_4184E88 = 1;
  }
  klass = v2[4].klass;
  if ( !klass
    || (monitor = (EasingObject_o *)v2[1].monitor,
        v5 = *(float *)&klass->_1.name,
        v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v6, v2, (intptr_t)v2->klass->vtable[10].methodPtr, 0LL),
        v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, (intptr_t)v2->klass->vtable[11].methodPtr, 0LL),
        (v8 = v2[4].klass) == 0LL)
    || !monitor )
  {
    sub_B2C434(this, method);
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
  struct BlankEarth_QAARotateEarthParam_o *qaaRotateEarthParam; // x1
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4184E87 & 1) == 0 )
  {
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, that);
    byte_4184E87 = 1;
  }
  this->fields.That = that;
  sub_B2C2F8(&this->fields, that);
  if ( !that )
    goto LABEL_10;
  qaaRotateEarthParam = that->fields.qaaRotateEarthParam;
  this->fields.Param = qaaRotateEarthParam;
  sub_B2C2F8(&this->fields.Param, qaaRotateEarthParam);
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
          Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                                 gameObject,
                                 (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
          this->fields.EasingObj = (struct EasingObject_o *)Component_UIWidget;
          sub_B2C2F8(&this->fields.EasingObj, Component_UIWidget);
          return;
        }
      }
    }
LABEL_10:
    sub_B2C434(blankEarth, v6);
  }
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__end(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  EasingObject_o *EasingObj; // x0
  struct EasingObject_o *v6; // x9
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  System_Action_T__o *FinishCallback_k__BackingField; // x19
  bool v9; // w21
  __int64 v10; // x20

  if ( (byte_4184E89 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___, that);
    sub_B2C35C(&BlankEarth_QAARotateEarthResponse_TypeInfo, v4);
    byte_4184E89 = 1;
  }
  EasingObj = this->fields.EasingObj;
  if ( !EasingObj
    || (EasingObject__Stop(EasingObj, 0LL), (EasingObj = (EasingObject_o *)this->fields.That) == 0LL)
    || (BlankEarth__UpdateTotalAngle((BlankEarth_o *)EasingObj, 0LL), (v6 = this->fields.EasingObj) == 0LL) )
  {
    sub_B2C434(EasingObj, that);
  }
  Param = this->fields.Param;
  if ( Param )
  {
    FinishCallback_k__BackingField = (System_Action_T__o *)Param->fields._FinishCallback_k__BackingField;
    v9 = v6->fields.mStartTime < 1.0;
    v10 = sub_B2C42C(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    *(_BYTE *)(v10 + 16) = v9;
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      FinishCallback_k__BackingField,
      (BlankEarth_QAARotateEarthResponse_o *)v10,
      (const MethodInfo_2D65B10 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
    sub_B2C434(this, that);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, method);
  v18.fields.x = 0.0;
  v18.fields.y = mStartTime * v4->fields.rotAmountY;
  v18.fields.z = 0.0;
  UnityEngine_Transform__Rotate_35436904((UnityEngine_Transform_o *)this, v18, 0LL);
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

  if ( (byte_4184E8A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    byte_4184E8A = 1;
  }
  EasingObj = this->fields.EasingObj;
  rotateTime = this->fields.rotateTime;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  if ( !this
    || (v7 = v5,
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)this->klass->vtable._10_OnRotateCompleted.methodPtr,
          0LL),
        v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_update.methodPtr, 0LL),
        (Param = this->fields.Param) == 0LL)
    || !EasingObj )
  {
    sub_B2C434(v5, v6);
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
  v29 = UnityEngine_Quaternion__op_Multiply_35346336(v38, v35, 0LL);
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
  v30 = UnityEngine_Quaternion__op_Multiply_35346336(v40, v36, 0LL);
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
      sub_B2C434(EasingObj, v21);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  SePlayer_o *Int; // x0
  __int64 v14; // x1
  __int64 v15; // x19
  __int64 v16; // x8
  float v17; // s8
  int v18; // s0
  TerminalSceneComponent_c *v19; // x0
  __int64 v20; // x8
  UnityEngine_Transform_o *v21; // x21
  BlankEarth_c *v22; // x0
  int v23; // s0
  TerminalSceneComponent_c *v27; // x0
  UnityEngine_Transform_o *v28; // x21
  int v29; // s0
  _QWORD *v33; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  __int64 v36; // x8
  UnityEngine_GameObject_o *v37; // x0
  EasingObject_o *v38; // x21
  System_Action_o *v39; // x22
  System_Action_o *v40; // x23
  __int64 v41; // x8
  __int64 v42; // x8
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4184E8B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&BlankEarth_TypeInfo, v5);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_B2C35C(&Method_BlankEarth_StateStartup_begin__, v7);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v8);
    sub_B2C35C(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, v9);
    sub_B2C35C(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, v10);
    sub_B2C35C(&BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo, v11);
    byte_4184E8B = 1;
  }
  v12 = sub_B2C42C(BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo);
  BlankEarth_StateStartup___c__DisplayClass3_0___ctor((BlankEarth_StateStartup___c__DisplayClass3_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_40;
  *(_QWORD *)(v12 + 24) = this;
  sub_B2C2F8(v12 + 24, this);
  *(_QWORD *)(v12 + 32) = that;
  v15 = v12 + 32;
  sub_B2C2F8(v12 + 32, that);
  *(_QWORD *)&this->fields.inertialSpeedX = 0LL;
  if ( !*(_QWORD *)(v12 + 32) )
    goto LABEL_40;
  *(_DWORD *)(*(_QWORD *)(v12 + 32) + 212LL) = 0;
  v16 = *(_QWORD *)v15;
  if ( !*(_QWORD *)v15 )
    goto LABEL_40;
  v17 = *(float *)(v16 + 104);
  if ( *(_BYTE *)(v16 + 208) )
    v18 = *(_DWORD *)(v16 + 136);
  else
    v18 = 0;
  *(_DWORD *)(v12 + 68) = v18;
  v19 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v19 = TerminalSceneComponent_TypeInfo;
  }
  Int = (SePlayer_o *)UnityEngine_PlayerPrefs__GetInt(v19->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0LL);
  v20 = *(_QWORD *)v15;
  if ( !*(_QWORD *)v15 )
    goto LABEL_40;
  if ( (_DWORD)Int == 1 )
  {
    v17 = *(float *)(v20 + 128);
    v21 = *(UnityEngine_Transform_o **)(v20 + 24);
    v22 = BlankEarth_TypeInfo;
    if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
      v22 = BlankEarth_TypeInfo;
    }
    *(UnityEngine_Quaternion_o *)&v23 = UnityEngine_Quaternion__Euler_35347036(
                                          v22->static_fields->SOUTH_POLE_ROTATE,
                                          0LL);
    if ( v21 )
    {
      UnityEngine_Transform__set_rotation(v21, *(UnityEngine_Quaternion_o *)&v23, 0LL);
      v27 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v27 = TerminalSceneComponent_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(v27->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0LL);
      if ( *(_QWORD *)v15 )
      {
        *(float *)(*(_QWORD *)v15 + 212LL) = -*(float *)(*(_QWORD *)v15 + 68LL);
        goto LABEL_25;
      }
    }
LABEL_40:
    sub_B2C434(Int, v14);
  }
  v28 = *(UnityEngine_Transform_o **)(v20 + 24);
  *(UnityEngine_Quaternion_o *)&v29 = BlankEarth__LoadEarthRotate((BlankEarth_o *)*(_QWORD *)v15, 0LL);
  if ( !v28 )
    goto LABEL_40;
  UnityEngine_Transform__set_rotation(v28, *(UnityEngine_Quaternion_o *)&v29, 0LL);
LABEL_25:
  v33 = Method_BlankEarth_StateStartup_begin__;
  if ( (*((_BYTE *)Method_BlankEarth_StateStartup_begin__ + 75) & 2) != 0 )
    v33 = (_QWORD *)sub_B2C364(Method_BlankEarth_StateStartup_begin__);
  Int = (SePlayer_o *)sub_B2C340(v33, v33[3]);
  if ( !*(_QWORD *)v15 )
    goto LABEL_40;
  Int = OverwriteAssetSoundName__PlaySe(
          (System_Reflection_MethodBase_o *)Int,
          *(System_String_o **)(*(_QWORD *)v15 + 120LL),
          0LL);
  if ( !*(_QWORD *)v15 )
    goto LABEL_40;
  Int = *(SePlayer_o **)(*(_QWORD *)v15 + 24LL);
  if ( !Int )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Int, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v12 + 16) = Component_UIWidget;
  sub_B2C2F8(v12 + 16, Component_UIWidget);
  v36 = *(_QWORD *)(v12 + 32);
  if ( !v36 )
    goto LABEL_40;
  Int = *(SePlayer_o **)(v36 + 32);
  if ( !Int )
    goto LABEL_40;
  v37 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Int, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v37, 0LL);
  Int = *(SePlayer_o **)(v12 + 32);
  *(UnityEngine_Vector3_o *)(v12 + 52) = LocalScale;
  if ( !Int )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)(v12 + 40) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)Int, 0LL);
  *(_BYTE *)(v12 + 64) = 0;
  v38 = *(EasingObject_o **)(v12 + 16);
  v39 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)v12, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, 0LL);
  v40 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)v12, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, 0LL);
  v41 = *(_QWORD *)(v12 + 32);
  if ( !v41 )
    goto LABEL_40;
  if ( !v38 )
    goto LABEL_40;
  EasingObject__Play_33149296(v38, 1.0, 0.0, v17, v39, v40, 0.0, *(_DWORD *)(v41 + 180), 0LL);
  if ( !*(_QWORD *)v15 )
    goto LABEL_40;
  Int = *(SePlayer_o **)(*(_QWORD *)v15 + 224LL);
  if ( !Int )
    goto LABEL_40;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)Int, 0, 1, 0LL);
  v42 = *(_QWORD *)v15;
  if ( !*(_QWORD *)v15 )
    goto LABEL_40;
  Int = *(SePlayer_o **)(v42 + 224);
  if ( !Int )
    goto LABEL_40;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)Int, *(float *)(v42 + 164), 0, 1, 0LL);
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
    sub_B2C434(this, 0LL);
  BlankEarth__BlunkEarthMainOperation(that, that, &this->fields.inertialSpeedX, &this->fields.inertialSpeedY, 0LL);
  scalingEndCallback = that->fields.scalingEndCallback;
  if ( scalingEndCallback )
  {
    if ( this->fields.scaleRate < 0.0001 )
    {
      p_scalingEndCallback = &that->fields.scalingEndCallback;
      System_Action__Invoke(scalingEndCallback, 0LL);
      *p_scalingEndCallback = 0LL;
      sub_B2C2F8(p_scalingEndCallback, 0LL);
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

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_18;
  mStartTime = eo->fields.mStartTime;
  v4 = this;
  v5 = StepFunc__Acc5(mStartTime, 0LL);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  v7 = v5;
  _4__this->fields.scaleRate = v7;
  that = v4->fields.that;
  if ( !that )
    goto LABEL_18;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)that->fields.earthRoot;
  if ( !this )
    goto LABEL_18;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v10.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_to.fields.x;
  z = v4->fields.root_scl_to.fields.z;
  v12.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_from.fields.x;
  v13 = v4->fields.root_scl_from.fields.z;
  v14 = transform;
  v15 = UnityEngine_Mathf__Clamp01(v7, 0LL);
  if ( !v14 )
    goto LABEL_18;
  v16 = (float)(v13 - z) * v15;
  v17 = vadd_f32(v10, vmul_n_f32(vsub_f32(v12, v10), v15)).n64_u64[0];
  v18 = z + v16;
  v19 = HIDWORD(v17);
  UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v17, 0LL);
  if ( !v4->fields.isStartRotateBtn )
  {
    v20 = v4->fields.that;
    if ( !v20 )
      goto LABEL_18;
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
          goto LABEL_18;
        this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)mTerminalList->fields.mActionBgColl;
        if ( !this )
          goto LABEL_18;
        this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v20 = v4->fields.that;
        v4->fields.isStartRotateBtn = 1;
        if ( !v20 )
          goto LABEL_18;
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
        return;
      }
LABEL_18:
      sub_B2C434(this, method);
    }
  }
}


void __fastcall BlankEarth_StateStartup___c__DisplayClass3_0___begin_b__1(
        BlankEarth_StateStartup___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  BlankEarth_StateStartup___c__DisplayClass3_0_o *v2; // x19
  __int64 v3; // x1
  struct BlankEarth_o *that; // x8
  Il2CppObject *v5; // x20
  System_Action_o *klass; // x0
  struct BlankEarth_o *v7; // x8
  float wait_time; // s8
  System_Action_o *v9; // x19

  v2 = this;
  if ( (byte_418558F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_B2C35C(&Method_BlankEarth_SetMainState__, v3);
    byte_418558F = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_12;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)that->fields.earthRoot;
  if ( !this )
    goto LABEL_12;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_12;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v2->fields.root_scl_to, 0LL);
  v5 = (Il2CppObject *)v2->fields.that;
  if ( !v5 )
    goto LABEL_12;
  klass = (System_Action_o *)v5[18].klass;
  if ( klass )
  {
    System_Action__Invoke(klass, 0LL);
    v7 = v2->fields.that;
    if ( !v7 )
      goto LABEL_12;
    v7->fields.scalingEndCallback = 0LL;
    sub_B2C2F8(&v7->fields.scalingEndCallback, 0LL);
    v5 = (Il2CppObject *)v2->fields.that;
  }
  wait_time = v2->fields.wait_time;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, v5, Method_BlankEarth_SetMainState__, 0LL);
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)BasicHelper__DelayCall(wait_time, v9, 0LL);
  if ( !v5 )
LABEL_12:
    sub_B2C434(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748(
    (UnityEngine_MonoBehaviour_o *)v5,
    (System_Collections_IEnumerator_o *)this,
    0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  ScrTerminalListTop_o *updated; // x0
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 v14; // x8
  __int64 v15; // x8
  int32_t v16; // w23
  TerminalPramsManager_c *v17; // x0
  __int64 v18; // x8
  ScrTerminalListTop_o *v19; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  __int64 v22; // x8
  float v23; // s8
  float y; // s4
  float z; // s5
  float v26; // s3
  int v27; // s0
  __int64 v31; // x8
  __int64 v32; // x8
  int caldeaFolderInfoList; // w10
  int v34; // w10
  EasingObject_o *v35; // x21
  int warSelectedQuestInfoDic_high; // w10
  int v37; // w8
  float mSpdTime; // s8
  System_Action_o *v39; // x19
  System_Action_o *v40; // x22
  __int64 v41; // x8
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4184E8C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    sub_B2C35C(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__, v7);
    sub_B2C35C(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__, v8);
    sub_B2C35C(&BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo, v9);
    byte_4184E8C = 1;
  }
  v10 = sub_B2C42C(BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo);
  BlankEarth_StateZoomIn___c__DisplayClass1_0___ctor((BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_42;
  *(_QWORD *)(v10 + 24) = that;
  v13 = v10 + 24;
  sub_B2C2F8(v10 + 24, that);
  if ( !*(_QWORD *)(v10 + 24) )
    goto LABEL_42;
  updated = *(ScrTerminalListTop_o **)(*(_QWORD *)(v10 + 24) + 224LL);
  if ( !updated )
    goto LABEL_42;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn(updated, 0, 0, 0LL);
  v14 = *(_QWORD *)v13;
  if ( !*(_QWORD *)v13 )
    goto LABEL_42;
  updated = *(ScrTerminalListTop_o **)(v14 + 224);
  if ( !updated )
    goto LABEL_42;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(updated, *(float *)(v14 + 164), 0, 0, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C6A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
    byte_4183C6A = 1;
  }
  updated = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    updated = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(*(_QWORD *)&updated->fields.boardGameTokenEffectId + 484LL) )
  {
    if ( *(_QWORD *)v13 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)v13 + 192LL);
      if ( v15 )
      {
        v16 = *(_DWORD *)(v15 + 236);
        if ( (BYTE3(updated->fields.blankEarthBg) & 4) != 0 && !LODWORD(updated->fields.mTerminalServant) )
          j_il2cpp_runtime_class_init_0(updated);
        if ( !byte_41846F7 )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
          byte_41846F7 = 1;
        }
        v17 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v17 = TerminalPramsManager_TypeInfo;
        }
        v17->static_fields->_BlankEarthSpotId_k__BackingField = v16;
        TerminalPramsManager__BlankEarthSpotId_SaveData(0LL);
        if ( *(_QWORD *)v13 )
        {
          this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume(*(float *)(*(_QWORD *)v13 + 76LL), 0LL);
          v18 = *(_QWORD *)v13;
          if ( *(_QWORD *)v13 )
          {
            updated = *(ScrTerminalListTop_o **)(v18 + 224);
            if ( updated )
            {
              ScrTerminalListTop__cbfBlankEarthQuestCreate(updated, *(BlankEarthPoint_o **)(v18 + 192), 0LL);
              updated = *(ScrTerminalListTop_o **)v13;
              if ( *(_QWORD *)v13 )
              {
                BlankEarth__SaveEarthRotate((BlankEarth_o *)updated, 0LL);
                updated = *(ScrTerminalListTop_o **)v13;
                if ( *(_QWORD *)v13 )
                {
                  updated = (ScrTerminalListTop_o *)BlankEarth__UpdateBlankEarthTransformData(
                                                      (BlankEarth_o *)updated,
                                                      0LL);
                  if ( *(_QWORD *)v13 )
                  {
                    v19 = updated;
                    updated = *(ScrTerminalListTop_o **)(*(_QWORD *)v13 + 24LL);
                    if ( updated )
                    {
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)updated, 0LL);
                      Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                                             gameObject,
                                             (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
                      *(_QWORD *)(v10 + 16) = Component_UIWidget;
                      sub_B2C2F8(v10 + 16, Component_UIWidget);
                      if ( v19 )
                      {
                        v22 = *(_QWORD *)(v10 + 24);
                        *(_OWORD *)(v10 + 32) = *(_OWORD *)&v19->fields.m_CachedPtr;
                        if ( v22 )
                        {
                          v23 = *(float *)(v22 + 72);
                          up = UnityEngine_Vector3__get_up(0LL);
                          y = up.fields.y;
                          z = up.fields.z;
                          up.fields.y = up.fields.x;
                          up.fields.z = y;
                          v26 = z;
                          *(UnityEngine_Quaternion_o *)&v27 = UnityEngine_Quaternion__AngleAxis(
                                                                -v23,
                                                                *(UnityEngine_Vector3_o *)&up.fields.y,
                                                                0LL);
                          if ( *(_QWORD *)v13 )
                          {
                            v31 = *(_QWORD *)(*(_QWORD *)v13 + 192LL);
                            if ( v31 )
                            {
                              *(UnityEngine_Quaternion_o *)(v10 + 48) = UnityEngine_Quaternion__op_Multiply(
                                                                          *(UnityEngine_Quaternion_o *)&v27,
                                                                          *(UnityEngine_Quaternion_o *)(v31 + 216),
                                                                          0LL);
                              *(_OWORD *)(v10 + 64) = *(_OWORD *)&v19->fields.areaQuestInfoList;
                              *(UnityEngine_Quaternion_o *)(v10 + 80) = UnityEngine_Quaternion__get_identity(0LL);
                              v32 = *(_QWORD *)(v10 + 24);
                              caldeaFolderInfoList = (int)v19->fields.caldeaFolderInfoList;
                              *(_QWORD *)(v10 + 96) = v19->fields.storyQuestInfoList;
                              *(_DWORD *)(v10 + 104) = caldeaFolderInfoList;
                              if ( v32 )
                              {
                                v34 = *(_DWORD *)(v32 + 148);
                                v35 = *(EasingObject_o **)(v10 + 16);
                                *(_QWORD *)(v10 + 108) = *(_QWORD *)(v32 + 140);
                                *(_DWORD *)(v10 + 116) = v34;
                                warSelectedQuestInfoDic_high = HIDWORD(v19->fields.warSelectedQuestInfoDic);
                                *(_QWORD *)(v10 + 120) = *(struct System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o **)((char *)&v19->fields.caldeaFolderInfoList + 4);
                                *(_DWORD *)(v10 + 128) = warSelectedQuestInfoDic_high;
                                v37 = *(_DWORD *)(v32 + 84);
                                *(_BYTE *)(v10 + 144) = 0;
                                *(_DWORD *)(v10 + 132) = v37;
                                *(_DWORD *)(v10 + 136) = v37;
                                *(_DWORD *)(v10 + 140) = v37;
                                mSpdTime = this->fields.mSpdTime;
                                v39 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v39,
                                  (Il2CppObject *)v10,
                                  Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__,
                                  0LL);
                                v40 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v40,
                                  (Il2CppObject *)v10,
                                  Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__,
                                  0LL);
                                v41 = *(_QWORD *)(v10 + 24);
                                if ( v41 )
                                {
                                  if ( v35 )
                                  {
                                    EasingObject__Play(v35, mSpdTime, v39, v40, 0.0, *(_DWORD *)(v41 + 172), 0LL);
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
LABEL_42:
    sub_B2C434(updated, v12);
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
  struct BlankEarth_o *v46; // x8

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_19;
  mStartTime = eo->fields.mStartTime;
  v4 = this;
  v5 = mStartTime;
  v6 = StepFunc__AccSig(mStartTime, 0LL);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_19;
  blankEarth = that->fields.blankEarth;
  v9 = v6;
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Slerp(v4->fields.qua_from, v4->fields.qua_to, v9, 0LL);
  if ( !blankEarth )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v10, 0LL);
  v14 = v4->fields.that;
  if ( !v14 )
    goto LABEL_19;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v14->fields.earthRoot;
  if ( !this )
    goto LABEL_19;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__Slerp(
                                        v4->fields.root_qua_from,
                                        v4->fields.root_qua_to,
                                        v9,
                                        0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v16, 0LL);
  v20 = v4->fields.that;
  if ( !v20 )
    goto LABEL_19;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v20->fields.earthRoot;
  if ( !this )
    goto LABEL_19;
  v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v22.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_from.fields.x;
  z = v4->fields.root_pos_from.fields.z;
  v24.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_to.fields.x;
  v25 = v4->fields.root_pos_to.fields.z;
  v26 = v21;
  v27 = StepFunc__DecSin(v5, 0LL);
  v28 = UnityEngine_Mathf__Clamp01(v27, 0LL);
  if ( !v26 )
    goto LABEL_19;
  v29 = (float)(v25 - z) * v28;
  v30 = vadd_f32(v22, vmul_n_f32(vsub_f32(v24, v22), v28)).n64_u64[0];
  v31 = z + v29;
  v32 = HIDWORD(v30);
  UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v30, 0LL);
  v33 = v4->fields.that;
  if ( !v33 )
    goto LABEL_19;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v33->fields.earthRoot;
  if ( !this )
    goto LABEL_19;
  v34 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v35.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_from.fields.x;
  v36 = v4->fields.root_scl_from.fields.z;
  v37.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_to.fields.x;
  v38 = v4->fields.root_scl_to.fields.z;
  v39 = v34;
  v40 = StepFunc__Acc5(v5, 0LL);
  v41 = UnityEngine_Mathf__Clamp01(v40, 0LL);
  if ( !v39 )
    goto LABEL_19;
  v42 = (float)(v38 - v36) * v41;
  v43 = vadd_f32(v35, vmul_n_f32(vsub_f32(v37, v35), v41)).n64_u64[0];
  v44 = v36 + v42;
  v45 = HIDWORD(v43);
  UnityEngine_Transform__set_localScale(v39, *(UnityEngine_Vector3_o *)&v43, 0LL);
  if ( !v4->fields.isStartSlideIn )
  {
    v46 = v4->fields.that;
    if ( !v46 )
      goto LABEL_19;
    if ( mStartTime > v46->fields.zoomInFrameInBoardRate )
    {
      v4->fields.isStartSlideIn = 1;
      this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v46->fields.mTerminalList;
      if ( this )
      {
        ScrTerminalListTop__CallBlankEarthSpotCreateFinishEvent(
          (ScrTerminalListTop_o *)this,
          v46->fields.focusEarthPoint,
          0LL);
        return;
      }
LABEL_19:
      sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  UnityEngine_Component_o *transform; // x0
  __int64 v11; // x1
  __int64 v12; // x20
  float IntpTime_AutoResume; // s0
  float v14; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x1
  TerminalPramsManager_c *v23; // x0
  struct BlankEarthTransform_o *BlankEarthTransformData_k__BackingField; // x1
  __int64 v25; // x8
  int v26; // w10
  __int64 v27; // x9
  int v28; // w8
  float v29; // s9
  float y; // s4
  float z; // s5
  float v32; // s3
  float v33; // s0
  float v34; // s1
  float v35; // s2
  float v36; // s3
  float v37; // s9
  float v38; // s10
  float v39; // s11
  float v40; // s12
  __int64 v41; // x8
  EasingObject_o *v42; // x20
  System_Action_o *v43; // x21
  System_Action_o *v44; // x22
  __int64 v45; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v53; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4184E8D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v4);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    sub_B2C35C(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, v6);
    sub_B2C35C(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, v7);
    sub_B2C35C(&BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo, v8);
    byte_4184E8D = 1;
  }
  v9 = sub_B2C42C(BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo);
  BlankEarth_StateZoomOut___c__DisplayClass0_0___ctor((BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_34;
  *(_QWORD *)(v9 + 24) = that;
  v12 = v9 + 24;
  sub_B2C2F8(v9 + 24, that);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__ResetBlankEarthSpotInfo(0LL);
  if ( !*(_QWORD *)v12 )
    goto LABEL_34;
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(*(float *)(*(_QWORD *)v12 + 80LL), 0LL);
  if ( !*(_QWORD *)v12 )
    goto LABEL_34;
  transform = *(UnityEngine_Component_o **)(*(_QWORD *)v12 + 24LL);
  if ( !transform )
    goto LABEL_34;
  v14 = IntpTime_AutoResume;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 16) = Component_UIWidget;
  sub_B2C2F8(v9 + 16, Component_UIWidget);
  v17 = *(_QWORD *)(v9 + 24);
  if ( !v17 )
    goto LABEL_34;
  transform = *(UnityEngine_Component_o **)(v17 + 24);
  if ( !transform )
    goto LABEL_34;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v18 = *(_QWORD *)(v9 + 24);
  *(UnityEngine_Quaternion_o *)(v9 + 48) = rotation;
  if ( !v18 )
    goto LABEL_34;
  transform = *(UnityEngine_Component_o **)(v18 + 32);
  if ( !transform )
    goto LABEL_34;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_34;
  v50 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v19 = *(_QWORD *)(v9 + 24);
  *(UnityEngine_Quaternion_o *)(v9 + 80) = v50;
  if ( !v19 )
    goto LABEL_34;
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v19 + 32), 0LL);
  v20 = *(_QWORD *)(v9 + 24);
  *(UnityEngine_Vector3_o *)(v9 + 108) = LocalPosition;
  if ( !v20 )
    goto LABEL_34;
  transform = *(UnityEngine_Component_o **)(v20 + 32);
  if ( !transform )
    goto LABEL_34;
  v21 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
  *(UnityEngine_Vector3_o *)(v9 + 132) = GameObjectExtensions__GetLocalScale(v21, 0LL);
  if ( !byte_4184F5D )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v22);
    byte_4184F5D = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  BlankEarthTransformData_k__BackingField = v23->static_fields->_BlankEarthTransformData_k__BackingField;
  *(_QWORD *)(v9 + 152) = BlankEarthTransformData_k__BackingField;
  sub_B2C2F8(v9 + 152, BlankEarthTransformData_k__BackingField);
  v25 = *(_QWORD *)(v9 + 152);
  if ( !v25 )
  {
    if ( *(_QWORD *)v12 )
    {
      v29 = *(float *)(*(_QWORD *)v12 + 72LL);
      up = UnityEngine_Vector3__get_up(0LL);
      y = up.fields.y;
      z = up.fields.z;
      up.fields.y = up.fields.x;
      up.fields.z = y;
      v32 = z;
      *(UnityEngine_Quaternion_o *)&v33 = UnityEngine_Quaternion__AngleAxis(
                                            v29,
                                            *(UnityEngine_Vector3_o *)&up.fields.y,
                                            0LL);
      if ( *(_QWORD *)v12 )
      {
        transform = *(UnityEngine_Component_o **)(*(_QWORD *)v12 + 24LL);
        if ( transform )
        {
          v37 = v33;
          v38 = v34;
          v39 = v35;
          v40 = v36;
          v53 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
          v51.fields.x = v37;
          v51.fields.y = v38;
          v51.fields.z = v39;
          v51.fields.w = v40;
          v52 = UnityEngine_Quaternion__op_Multiply(v51, v53, 0LL);
          v41 = *(_QWORD *)(v9 + 24);
          *(float *)(v9 + 36) = v52.fields.y;
          *(float *)(v9 + 44) = v52.fields.w;
          *(_DWORD *)(v9 + 32) = 0;
          *(_DWORD *)(v9 + 40) = 0;
          if ( v41 )
          {
            *(_OWORD *)(v9 + 64) = *(_OWORD *)(v41 + 240);
            zero = UnityEngine_Vector3__get_zero(0LL);
            transform = *(UnityEngine_Component_o **)(v9 + 24);
            *(UnityEngine_Vector3_o *)(v9 + 96) = zero;
            if ( transform )
            {
              *(UnityEngine_Vector3_o *)(v9 + 120) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)transform, 0LL);
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_34:
    sub_B2C434(transform, v11);
  }
  *(_OWORD *)(v9 + 32) = *(_OWORD *)(v25 + 16);
  *(_OWORD *)(v9 + 64) = *(_OWORD *)(v25 + 32);
  v26 = *(_DWORD *)(v25 + 56);
  *(_QWORD *)(v9 + 96) = *(_QWORD *)(v25 + 48);
  *(_DWORD *)(v9 + 104) = v26;
  v27 = *(_QWORD *)(v25 + 60);
  v28 = *(_DWORD *)(v25 + 68);
  *(_QWORD *)(v9 + 120) = v27;
  *(_DWORD *)(v9 + 128) = v28;
LABEL_31:
  *(_BYTE *)(v9 + 144) = 0;
  v42 = *(EasingObject_o **)(v9 + 16);
  v43 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)v9, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, 0LL);
  v44 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)v9, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, 0LL);
  v45 = *(_QWORD *)(v9 + 24);
  if ( !v45 || !v42 )
    goto LABEL_34;
  EasingObject__Play_33149296(v42, 1.0, 0.0, v14, v43, v44, 0.0, *(_DWORD *)(v45 + 176), 0LL);
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
  struct BlankEarth_o *v46; // x8

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_19;
  mStartTime = eo->fields.mStartTime;
  v4 = this;
  v5 = mStartTime;
  v6 = StepFunc__AccSig(mStartTime, 0LL);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_19;
  blankEarth = that->fields.blankEarth;
  v9 = v6;
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Slerp(v4->fields.qua_to, v4->fields.qua_from, v9, 0LL);
  if ( !blankEarth )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v10, 0LL);
  v14 = v4->fields.that;
  if ( !v14 )
    goto LABEL_19;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v14->fields.earthRoot;
  if ( !this )
    goto LABEL_19;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__Slerp(
                                        v4->fields.root_qua_to,
                                        v4->fields.root_qua_from,
                                        v9,
                                        0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v16, 0LL);
  v20 = v4->fields.that;
  if ( !v20 )
    goto LABEL_19;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v20->fields.earthRoot;
  if ( !this )
    goto LABEL_19;
  v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v22.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_to.fields.x;
  z = v4->fields.root_pos_to.fields.z;
  v24.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_from.fields.x;
  v25 = v4->fields.root_pos_from.fields.z;
  v26 = v21;
  v27 = StepFunc__DecSin(v5, 0LL);
  v28 = UnityEngine_Mathf__Clamp01(v27, 0LL);
  if ( !v26 )
    goto LABEL_19;
  v29 = (float)(v25 - z) * v28;
  v30 = vadd_f32(v22, vmul_n_f32(vsub_f32(v24, v22), v28)).n64_u64[0];
  v31 = z + v29;
  v32 = HIDWORD(v30);
  UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v30, 0LL);
  v33 = v4->fields.that;
  if ( !v33 )
    goto LABEL_19;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v33->fields.earthRoot;
  if ( !this )
    goto LABEL_19;
  v34 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v35.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_to.fields.x;
  v36 = v4->fields.root_scl_to.fields.z;
  v37.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_from.fields.x;
  v38 = v4->fields.root_scl_from.fields.z;
  v39 = v34;
  v40 = StepFunc__Acc5(v5, 0LL);
  v41 = UnityEngine_Mathf__Clamp01(v40, 0LL);
  if ( !v39 )
    goto LABEL_19;
  v42 = (float)(v38 - v36) * v41;
  v43 = vadd_f32(v35, vmul_n_f32(vsub_f32(v37, v35), v41)).n64_u64[0];
  v44 = v36 + v42;
  v45 = HIDWORD(v43);
  UnityEngine_Transform__set_localScale(v39, *(UnityEngine_Vector3_o *)&v43, 0LL);
  if ( !v4->fields.isStartRotateBtn )
  {
    v46 = v4->fields.that;
    if ( !v46 )
      goto LABEL_19;
    if ( mStartTime < v46->fields.zoomOutFrameInRotateBtnRate )
    {
      v4->fields.isStartRotateBtn = 1;
      this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v46->fields.mTerminalList;
      if ( this )
      {
        ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
          (ScrTerminalListTop_o *)this,
          v46->fields.earthBtnMoveSpeedTime,
          1,
          0,
          0LL);
        return;
      }
LABEL_19:
      sub_B2C434(this, method);
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
  if ( (byte_4185590 & 1) == 0 )
  {
    this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)sub_B2C35C(&StringLiteral_19054/*"gevINFOBAR_BACK"*/, method);
    byte_4185590 = 1;
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
    || (HutongGames_PlayMaker_Fsm__Event_14638752(
          (HutongGames_PlayMaker_Fsm_o *)this,
          (System_String_o *)StringLiteral_19054/*"gevINFOBAR_BACK"*/,
          0LL),
        (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v2->fields.that) == 0LL) )
  {
LABEL_28:
    sub_B2C434(this, method);
  }
  BlankEarth__SetState((BlankEarth_o *)this, 2, 0LL);
}


void __fastcall BlankEarth__CoCheckTutorial_d__84___ctor(
        BlankEarth__CoCheckTutorial_d__84_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarth__CoCheckTutorial_d__84__MoveNext(
        BlankEarth__CoCheckTutorial_d__84_o *this,
        const MethodInfo *method)
{
  BlankEarth__CoCheckTutorial_d__84_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  BlankEarth_o *_4__this; // x20
  Il2CppObject *v10; // x21
  struct System_Action_o *finishCallback; // x1
  float time_5__2; // s0
  bool v13; // w21
  float v14; // s8
  Il2CppObject **p__2__current; // x19
  EventTutorialMaster_EventTutorialArgs_o *v16; // x21
  Il2CppObject *_8__1; // x22
  System_Action_o *v18; // x23
  struct TutorialCommunicateAdapter_o *adapter; // x1

  v2 = this;
  if ( (byte_4184E86 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5);
    sub_B2C35C(&Method_BlankEarth___c__DisplayClass84_0__CoCheckTutorial_g__OnFinish_0__, v6);
    this = (BlankEarth__CoCheckTutorial_d__84_o *)sub_B2C35C(&BlankEarth___c__DisplayClass84_0_TypeInfo, v7);
    byte_4184E86 = 1;
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
    v10 = (Il2CppObject *)sub_B2C42C(BlankEarth___c__DisplayClass84_0_TypeInfo);
    System_Object___ctor(v10, 0LL);
    v2->fields.__8__1 = (struct BlankEarth___c__DisplayClass84_0_o *)v10;
    sub_B2C2F8(&v2->fields.__8__1, v10);
    this = (BlankEarth__CoCheckTutorial_d__84_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    finishCallback = v2->fields.finishCallback;
    *(_QWORD *)&this->fields.__1__state = finishCallback;
    sub_B2C2F8(&this->fields, finishCallback);
    v2->fields._time_5__2 = 0.0;
    if ( !_4__this )
      goto LABEL_21;
  }
  v13 = 1;
  if ( BlankEarth__IsJustState(_4__this, 1, 0LL) )
  {
    v14 = v2->fields._time_5__2;
    v2->fields._time_5__2 = v14 + UnityEngine_Time__get_deltaTime(0LL);
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    sub_B2C2F8(p__2__current, 0LL);
    *((_DWORD *)p__2__current - 2) = 1;
    return v13;
  }
LABEL_12:
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  this = (BlankEarth__CoCheckTutorial_d__84_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0LL);
  v16 = (EventTutorialMaster_EventTutorialArgs_o *)sub_B2C42C(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_21;
  v16->fields.openKind = 83;
  _8__1 = (Il2CppObject *)v2->fields.__8__1;
  v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v18, _8__1, Method_BlankEarth___c__DisplayClass84_0__CoCheckTutorial_g__OnFinish_0__, 0LL);
  v16->fields.callbackAfter = v18;
  sub_B2C2F8(&v16->fields.callbackAfter, v18);
  adapter = v2->fields.adapter;
  v16->fields.adapter = adapter;
  sub_B2C2F8(&v16->fields.adapter, adapter);
  this = (BlankEarth__CoCheckTutorial_d__84_o *)EventTutorialMaster__CoroutineCheckTutorial(v16, 0LL);
  if ( !_4__this )
LABEL_21:
    sub_B2C434(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748(
    (UnityEngine_MonoBehaviour_o *)_4__this,
    (System_Collections_IEnumerator_o *)this,
    0LL);
  v13 = 0;
  _4__this->fields.isTutorialAvailable = 0;
  return v13;
}


Il2CppObject *__fastcall BlankEarth__CoCheckTutorial_d__84__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarth__CoCheckTutorial_d__84_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarth__CoCheckTutorial_d__84__System_Collections_IEnumerator_Reset(
        BlankEarth__CoCheckTutorial_d__84_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BlankEarth__CoCheckTutorial_d__84_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BlankEarth__CoCheckTutorial_d__84__System_Collections_IEnumerator_get_Current(
        BlankEarth__CoCheckTutorial_d__84_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarth__CoCheckTutorial_d__84__System_IDisposable_Dispose(
        BlankEarth__CoCheckTutorial_d__84_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth__CoStandByChangeState_d__86___ctor(
        BlankEarth__CoStandByChangeState_d__86_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarth__CoStandByChangeState_d__86__MoveNext(
        BlankEarth__CoStandByChangeState_d__86_o *this,
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
      sub_B2C434(_4__this, method);
  }
  if ( BlankEarth__IsJustState(_4__this, this->fields.state, 0LL) )
  {
    time_5__2 = this->fields._time_5__2;
    this->fields._time_5__2 = time_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B2C2F8(p__2__current, 0LL);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
  return 0;
}


Il2CppObject *__fastcall BlankEarth__CoStandByChangeState_d__86__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarth__CoStandByChangeState_d__86_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarth__CoStandByChangeState_d__86__System_Collections_IEnumerator_Reset(
        BlankEarth__CoStandByChangeState_d__86_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BlankEarth__CoStandByChangeState_d__86_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BlankEarth__CoStandByChangeState_d__86__System_Collections_IEnumerator_get_Current(
        BlankEarth__CoStandByChangeState_d__86_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarth__CoStandByChangeState_d__86__System_IDisposable_Dispose(
        BlankEarth__CoStandByChangeState_d__86_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BlankEarth___c_StaticFields *static_fields; // x0

  if ( (byte_4184E84 & 1) == 0 )
  {
    sub_B2C35C(&BlankEarth___c_TypeInfo, v1);
    byte_4184E84 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BlankEarth___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BlankEarth___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarth___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall BlankEarth___c___ctor(BlankEarth___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarth___c___UpdateSpotDisp_b__96_0(
        BlankEarth___c_o *this,
        BlankEarthPoint_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  BlankEarthPoint__UpdateDisp(x, 1, 0LL);
}


void __fastcall BlankEarth___c__DisplayClass84_0___ctor(
        BlankEarth___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarth___c__DisplayClass84_0___CoCheckTutorial_g__OnFinish_0(
        BlankEarth___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_4184E85 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_4184E85 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  MissionNotifyManager__EndPause(v4, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}