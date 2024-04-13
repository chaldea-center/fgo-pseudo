void __fastcall BlankEarth___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BlankEarth_StaticFields *static_fields; // x9
  struct BlankEarth_StaticFields *v12; // x0
  System_Int32_array **v13; // x1

  if ( (byte_42E7EB4 & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarth_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17071/*"blankEarthRotateKey"*/, v8, v9, v10);
    byte_42E7EB4 = 1;
  }
  static_fields = BlankEarth_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SOUTH_POLE_ROTATE.fields.x = 0x4292000041F80000LL;
  static_fields->SOUTH_POLE_ROTATE.fields.z = 60.0;
  v12 = BlankEarth_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_17071/*"blankEarthRotateKey"*/;
  v12->BLANK_EARTH_ROTATE_KEY = (struct System_String_o *)StringLiteral_17071/*"blankEarthRotateKey"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v12->BLANK_EARTH_ROTATE_KEY, v13, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_42E7EB3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16639/*"ar223"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E7EB3 = 1;
  }
  *(_QWORD *)&this->fields.startupFadeTime = 0x3E0000003F000000LL;
  *(_OWORD *)&this->fields.greenwichOffset = xmmword_32A2310;
  *(_OWORD *)&this->fields.zoomOutSpdTime = xmmword_32A2320;
  *(_OWORD *)&this->fields.earthRadius = xmmword_32A2330;
  v9 = (System_Int32_array **)StringLiteral_16639/*"ar223"*/;
  this->fields.startupSeName = (struct System_String_o *)StringLiteral_16639/*"ar223"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.startupSeName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.zoomInEasingType = 0x300000003LL;
  this->fields.firstAnimTime = 3.0;
  *(_OWORD *)&this->fields.firstFadeTime = xmmword_32A2340;
  *(_QWORD *)&this->fields.earthBtnMoveSpeedTime = 0x406000003E800000LL;
  *(_OWORD *)&this->fields.zoomInPos.fields.z = xmmword_32A2350;
  this->fields.startupEasingType = 2;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarth__Awake(BlankEarth_o *this, const MethodInfo *method)
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct CStateManager_BlankEarth__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct CStateManager_BlankEarth__o *mFSM; // x21
  BlankEarth_StateNone_o *v44; // x22
  UnityEngine_GameObject_o *earthRoot; // x0
  CStateManager_QAASpotStateController_IMapSpot__o *v46; // x21
  BlankEarth_StateStartup_o *v47; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v48; // x21
  BlankEarth_StateMain_o *v49; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v50; // x21
  BlankEarth_StateZoomIn_o *v51; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v52; // x21
  BlankEarth_StateZoomOut_o *v53; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v54; // x21
  BlankEarth_StateQAARotate_o *v55; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v56; // x20
  BlankEarth_StateShortcutRotate_o *v57; // x21
  const MethodInfo *v58; // x2
  BlankEarthSpotAnimStateManager_o *v59; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7

  if ( (byte_42E7E96 & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarthSpotAnimStateManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_BlankEarth___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_CStateManager_BlankEarth__add__, v8, v9, v10);
    sub_B5D5C4(&CStateManager_BlankEarth__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&BlankEarth_StateMain_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&BlankEarth_StateNone_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&BlankEarth_StateQAARotate_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&BlankEarth_StateShortcutRotate_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&BlankEarth_StateStartup_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&BlankEarth_StateZoomIn_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&BlankEarth_StateZoomOut_TypeInfo, v32, v33, v34);
    byte_42E7E96 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v36 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_BlankEarth__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v36,
      (QAASpotStateController_IMapSpot_o *)this,
      7,
      (const MethodInfo_2BB2630 *)Method_CStateManager_BlankEarth___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarth__o *)v36;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    mFSM = this->fields.mFSM;
    v44 = (BlankEarth_StateNone_o *)sub_B5D694(BlankEarth_StateNone_TypeInfo);
    BlankEarth_StateNone___ctor(v44, 0LL);
    if ( !mFSM )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v44,
      (const MethodInfo_2BB26FC *)Method_CStateManager_BlankEarth__add__);
    v46 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v47 = (BlankEarth_StateStartup_o *)sub_B5D694(BlankEarth_StateStartup_TypeInfo);
    BlankEarth_StateStartup___ctor(v47, 0LL);
    if ( !v46 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v46,
      1,
      (IState_T__o *)v47,
      (const MethodInfo_2BB26FC *)Method_CStateManager_BlankEarth__add__);
    v48 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v49 = (BlankEarth_StateMain_o *)sub_B5D694(BlankEarth_StateMain_TypeInfo);
    BlankEarth_StateMain___ctor(v49, 0LL);
    if ( !v48 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v48,
      2,
      (IState_T__o *)v49,
      (const MethodInfo_2BB26FC *)Method_CStateManager_BlankEarth__add__);
    v50 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v51 = (BlankEarth_StateZoomIn_o *)sub_B5D694(BlankEarth_StateZoomIn_TypeInfo);
    BlankEarth_StateZoomIn___ctor(v51, 0LL);
    if ( !v50 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v50,
      3,
      (IState_T__o *)v51,
      (const MethodInfo_2BB26FC *)Method_CStateManager_BlankEarth__add__);
    v52 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v53 = (BlankEarth_StateZoomOut_o *)sub_B5D694(BlankEarth_StateZoomOut_TypeInfo);
    BlankEarth_StateZoomOut___ctor(v53, 0LL);
    if ( !v52 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v52,
      4,
      (IState_T__o *)v53,
      (const MethodInfo_2BB26FC *)Method_CStateManager_BlankEarth__add__);
    v54 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v55 = (BlankEarth_StateQAARotate_o *)sub_B5D694(BlankEarth_StateQAARotate_TypeInfo);
    BlankEarth_StateQAARotate___ctor(v55, 0LL);
    if ( !v54
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v54,
            5,
            (IState_T__o *)v55,
            (const MethodInfo_2BB26FC *)Method_CStateManager_BlankEarth__add__),
          v56 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v57 = (BlankEarth_StateShortcutRotate_o *)sub_B5D694(BlankEarth_StateShortcutRotate_TypeInfo),
          BlankEarth_StateShortcutRotate___ctor(v57, 0LL),
          !v56) )
    {
LABEL_15:
      sub_B5D69C(earthRoot, method);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v56,
      6,
      (IState_T__o *)v57,
      (const MethodInfo_2BB26FC *)Method_CStateManager_BlankEarth__add__);
    BlankEarth__SetState(this, 0, v58);
  }
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_15;
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !earthRoot )
    goto LABEL_15;
  this->fields.mRootQua = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)earthRoot, 0LL);
  v59 = (BlankEarthSpotAnimStateManager_o *)sub_B5D694(BlankEarthSpotAnimStateManager_TypeInfo);
  BlankEarthSpotAnimStateManager___ctor(v59, 0LL);
  this->fields._SpotAnimStateManager_k__BackingField = v59;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._SpotAnimStateManager_k__BackingField,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
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
  int v11; // w2
  __int64 v12; // x3
  CTouch_c *v13; // x0
  float x; // s9
  float v15; // s0
  CTouch_c *v16; // x0
  float y; // s9
  float v18; // s0
  float v19; // s10
  float v20; // s0
  float v21; // s9
  float v22; // s0
  float totalAngle; // s0
  float maxAngle; // s2
  float v25; // s1
  float v26; // s1
  float v27; // s2
  float v28; // s0
  UnityEngine_Transform_o *v29; // x22
  float v30; // s8
  float v31; // s9
  float z; // s10
  float v33; // s0
  float v34; // s1
  float v35; // s2
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s3.4,4:s4.4,8:s5.4

  v8 = this;
  if ( (byte_42E7E9A & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)that, (_DWORD)inertialSpeedX, inertialSpeedY);
    byte_42E7E9A = 1;
  }
  if ( !that )
LABEL_65:
    sub_B5D69C(this, that);
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
      if ( !byte_42E658F )
      {
        sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)that, v11, v12);
        byte_42E658F = 1;
      }
      v13 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v13 = CTouch_TypeInfo;
      }
      x = v13->static_fields->mScrPosDelta.fields.x;
      if ( !byte_42E6590 )
      {
        sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)that, v11, v12);
        v13 = CTouch_TypeInfo;
        byte_42E6590 = 1;
      }
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = CTouch_TypeInfo;
      }
      v15 = v13->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v15) )
        v15 = x;
      *inertialSpeedX = v15 * -0.2;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_42E658F )
      {
        sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)that, v11, v12);
        byte_42E658F = 1;
      }
      v16 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v16 = CTouch_TypeInfo;
      }
      y = v16->static_fields->mScrPosDelta.fields.y;
      if ( !byte_42E6590 )
      {
        sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)that, v11, v12);
        v16 = CTouch_TypeInfo;
        byte_42E6590 = 1;
      }
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = CTouch_TypeInfo;
      }
      v18 = v16->static_fields->mScrPosDeltaOld.fields.y;
      if ( fabsf(y) >= fabsf(v18) )
        v18 = y;
      *inertialSpeedY = v18 * -0.2;
    }
  }
  else if ( !UnityEngine_Mathf__Approximately(*inertialSpeedX, 0.0, 0LL)
         || !UnityEngine_Mathf__Approximately(*inertialSpeedY, 0.0, 0LL) )
  {
    v19 = *inertialSpeedX;
    v20 = v19 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
    if ( fabsf(v20) < 0.004 )
      v20 = 0.0;
    *inertialSpeedX = v20;
    v21 = *inertialSpeedY;
    v22 = v21 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
    *inertialSpeedY = v22;
    if ( fabsf(v22) < 0.004 )
      *inertialSpeedY = 0.0;
  }
  totalAngle = v8->fields.totalAngle;
  maxAngle = v8->fields.maxAngle;
  v25 = totalAngle + *inertialSpeedY;
  if ( maxAngle < v25 )
  {
    v26 = maxAngle - totalAngle;
    *inertialSpeedY = maxAngle - totalAngle;
    totalAngle = v8->fields.totalAngle;
    maxAngle = v8->fields.maxAngle;
    v25 = totalAngle + v26;
  }
  v27 = -maxAngle;
  if ( v25 < v27 )
  {
    v28 = v27 - totalAngle;
    *inertialSpeedY = v28;
    v25 = v8->fields.totalAngle + v28;
  }
  v8->fields.totalAngle = v25;
  this = (BlankEarth_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_65;
  this = (BlankEarth_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !that->fields.blankEarth )
    goto LABEL_65;
  v29 = (UnityEngine_Transform_o *)this;
  this = (BlankEarth_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)that->fields.blankEarth, 0LL);
  if ( !this )
    goto LABEL_65;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  v30 = position.fields.x;
  v31 = position.fields.y;
  z = position.fields.z;
  *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_right(0LL);
  if ( !v29 )
    goto LABEL_65;
  v39.fields.x = v33;
  v39.fields.y = v34;
  v39.fields.z = v35;
  v37.fields.x = v30;
  v37.fields.y = v31;
  v37.fields.z = z;
  UnityEngine_Transform__RotateAround(v29, v37, v39, -*inertialSpeedY, 0LL);
  this = (BlankEarth_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_65;
  v38.fields.y = *inertialSpeedX;
  v38.fields.x = 0.0;
  v38.fields.z = 0.0;
  UnityEngine_Transform__Rotate_35742348((UnityEngine_Transform_o *)this, v38, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
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

  if ( (byte_42E7E9B & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarth__CoCheckTutorial_d__91_TypeInfo, (_DWORD)adapter, (_DWORD)finishCallback, method);
    byte_42E7E9B = 1;
  }
  v7 = sub_B5D694(BlankEarth__CoCheckTutorial_d__91_TypeInfo);
  BlankEarth__CoCheckTutorial_d__91___ctor((BlankEarth__CoCheckTutorial_d__91_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 56) = adapter;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 56), (System_Int32_array **)adapter, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = finishCallback;
  sub_B5D560(
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

  if ( (byte_42E7E9C & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarth__CoStandByChangeState_d__93_TypeInfo, state, (_DWORD)finishCallback, method);
    byte_42E7E9C = 1;
  }
  v7 = sub_B5D694(BlankEarth__CoStandByChangeState_d__93_TypeInfo);
  BlankEarth__CoStandByChangeState_d__93___ctor((BlankEarth__CoStandByChangeState_d__93_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = state;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B5D560(
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
  v22 = UnityEngine_Quaternion__LookRotation_35651248(normalized, 0LL);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UnityEngine_GameObject_o *v22; // x21
  System_String_o *transform; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *v25; // x22
  System_String_o *v26; // x0
  UnityEngine_Transform_o *blankEarth; // x8
  UnityEngine_Transform_o *v28; // x20
  int v29; // s0
  const MethodInfo *v32; // x2
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7EA3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___,
      (_DWORD)obj,
      (_DWORD)gimmickEnt,
      method);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_2881/*"BlankEarthGimmick_"*/, v19, v20, v21);
    byte_42E7EA3 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v22 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)obj,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_32436388(v22, this->fields.earthGimmickRoot, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v22, one, 0LL);
  if ( !v22 )
    goto LABEL_13;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform(v22, 0LL);
  if ( !gimmickEnt )
    goto LABEL_13;
  v25 = (UnityEngine_Object_o *)transform;
  v26 = System_Int32__ToString((int)gimmickEnt + 16, 0LL);
  transform = System_String__Concat_44577788((System_String_o *)StringLiteral_2881/*"BlankEarthGimmick_"*/, v26, 0LL);
  if ( !v25 )
    goto LABEL_13;
  UnityEngine_Object__set_name(v25, transform, 0LL);
  GameObjectExtensions__SetLocalPosition_32430604(v22, x, y, z, 0LL);
  transform = (System_String_o *)UnityEngine_GameObject__get_transform(v22, 0LL);
  blankEarth = this->fields.blankEarth;
  if ( !blankEarth
    || (v28 = (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_position(blankEarth, 0LL),
        !v28)
    || (UnityEngine_Transform__LookAt_35743444(v28, *(UnityEngine_Vector3_o *)&v29, 0LL),
        (transform = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v22,
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___)) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(transform, v24);
  }
  BlankEarthGimmickComponent__Setup((BlankEarthGimmickComponent_o *)transform, gimmickEnt, v32);
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  TerminalSceneComponent_c *v29; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v31; // x1
  System_String_o *transform; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  UnityEngine_GameObject_o *v42; // x21
  UnityEngine_Object_o *v43; // x22
  System_String_o *v44; // x0
  UnityEngine_Transform_o *v45; // x22
  int v46; // s0
  const MethodInfo *v49; // x4
  BlankEarthPoint_o *v50; // x21
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7EA7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___, (_DWORD)spotObj, (_DWORD)spotEnt, method);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_2882/*"BlankEarthPoint_"*/, v26, v27, v28);
    byte_42E7EA7 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)spotObj, (_DWORD)spotEnt, method);
    byte_42E4B1E = 1;
  }
  v29 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v29 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v29->static_fields->mInstance;
  v31 = *p_mInstance;
  this->fields.mTerminalScene = *p_mInstance;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mTerminalScene,
    (System_Int32_array **)v31,
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mTerminalList,
    (System_Int32_array **)mTerminalList,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v42 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)spotObj,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_32436388(v42, this->fields.earthSpotRoot, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v42, one, 0LL);
  if ( !v42 )
    goto LABEL_22;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform(v42, 0LL);
  if ( !spotEnt )
    goto LABEL_22;
  v43 = (UnityEngine_Object_o *)transform;
  v44 = System_Int32__ToString((int)spotEnt + 16, 0LL);
  transform = System_String__Concat_44577788((System_String_o *)StringLiteral_2882/*"BlankEarthPoint_"*/, v44, 0LL);
  if ( !v43
    || (UnityEngine_Object__set_name(v43, transform, 0LL),
        GameObjectExtensions__SetLocalPosition_32430604(v42, x, y, z, 0LL),
        transform = (System_String_o *)UnityEngine_GameObject__get_transform(v42, 0LL),
        !this->fields.blankEarth)
    || (v45 = (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v46 = UnityEngine_Transform__get_position(this->fields.blankEarth, 0LL),
        !v45)
    || (UnityEngine_Transform__LookAt_35743444(v45, *(UnityEngine_Vector3_o *)&v46, 0LL),
        (transform = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v42,
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___)) == 0LL) )
  {
LABEL_22:
    sub_B5D69C(transform, v33);
  }
  v50 = (BlankEarthPoint_o *)transform;
  BlankEarthPoint__SetEarthObj((BlankEarthPoint_o *)transform, spotEnt, this, this->fields.mEarthCamera, v49);
  return v50;
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
    sub_B5D560(
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
      sub_B5D69C(0LL, v5);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BlankEarthGimmickComponent_o *result; // x0
  UnityEngine_Transform_o *transform; // x19
  System_String_o *v13; // x0
  UnityEngine_Object_o *v14; // x19
  bool v15; // w8
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  v16 = gimmickId;
  if ( (byte_42E7E9F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___, gimmickId, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_2881/*"BlankEarthGimmick_"*/, v8, v9, v10);
    byte_42E7E9F = 1;
  }
  result = (BlankEarthGimmickComponent_o *)this->fields.earthGimmickRoot;
  if ( !result )
    goto LABEL_13;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0LL);
  v13 = System_Int32__ToString((int32_t)&v16, 0LL);
  result = (BlankEarthGimmickComponent_o *)System_String__Concat_44577788(
                                             (System_String_o *)StringLiteral_2881/*"BlankEarthGimmick_"*/,
                                             v13,
                                             0LL);
  if ( !transform )
    goto LABEL_13;
  v14 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)result, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  result = 0LL;
  if ( v15 )
  {
    if ( v14 )
    {
      result = (BlankEarthGimmickComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v14,
                                                 0LL);
      if ( result )
        return (BlankEarthGimmickComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)result,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    }
LABEL_13:
    sub_B5D69C(result, *(_QWORD *)&gimmickId);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
BlankEarthPoint_o *__fastcall BlankEarth__GetEarthPoint(BlankEarth_o *this, int32_t spotId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BlankEarthPoint_o *result; // x0
  UnityEngine_Transform_o *transform; // x19
  System_String_o *v13; // x0
  UnityEngine_Object_o *v14; // x19
  bool v15; // w8
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  v16 = spotId;
  if ( (byte_42E7E9E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___, spotId, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_2882/*"BlankEarthPoint_"*/, v8, v9, v10);
    byte_42E7E9E = 1;
  }
  result = (BlankEarthPoint_o *)this->fields.earthSpotRoot;
  if ( !result )
    goto LABEL_13;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0LL);
  v13 = System_Int32__ToString((int32_t)&v16, 0LL);
  result = (BlankEarthPoint_o *)System_String__Concat_44577788((System_String_o *)StringLiteral_2882/*"BlankEarthPoint_"*/, v13, 0LL);
  if ( !transform )
    goto LABEL_13;
  v14 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)result, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  result = 0LL;
  if ( v15 )
  {
    if ( v14 )
    {
      result = (BlankEarthPoint_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
      if ( result )
        return (BlankEarthPoint_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)result,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    }
LABEL_13:
    sub_B5D69C(result, *(_QWORD *)&spotId);
  }
  return result;
}


System_String_o *__fastcall BlankEarth__GetGimmickPrefabName(
        BlankEarthGimmickEntity_o *gimmick,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BlankEarthGimmickEntity_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v4 = gimmick;
  if ( (byte_42E7EA2 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    gimmick = (BlankEarthGimmickEntity_o *)sub_B5D5C4(&StringLiteral_5880/*"EarthGimmick_{0:00000}"*/, v5, v6, v7);
    byte_42E7EA2 = 1;
  }
  if ( !v4 )
    sub_B5D69C(gimmick, method);
  objectId = v4->fields.objectId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_5880/*"EarthGimmick_{0:00000}"*/, v8, 0LL);
}


float __fastcall BlankEarth__GetSafeLatitude(BlankEarth_o *this, float latitudeDegree, const MethodInfo *method)
{
  return UnityEngine_Mathf__Clamp(latitudeDegree, -this->fields.maxAngle, this->fields.maxAngle, 0LL);
}


System_String_o *__fastcall BlankEarth__GetSpotPrefabName(BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BlankEarthSpotEntity_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v4 = spot;
  if ( (byte_42E7EA6 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    spot = (BlankEarthSpotEntity_o *)sub_B5D5C4(&StringLiteral_5882/*"EarthPoint_{0:00000}"*/, v5, v6, v7);
    byte_42E7EA6 = 1;
  }
  if ( !v4 )
    sub_B5D69C(spot, method);
  objectId = v4->fields.objectId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_5882/*"EarthPoint_{0:00000}"*/, v8, 0LL);
}


int32_t __fastcall BlankEarth__GetState(BlankEarth_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BlankEarth_o *v4; // x19
  struct CStateManager_BlankEarth__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E7E98 & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_B5D5C4(&Method_CStateManager_BlankEarth__getState__, (_DWORD)method, v2, v3);
    byte_42E7E98 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BlankEarth_c *v8; // x0
  System_String_o *String_35648228; // x21
  System_Char_array *IsNullOrEmpty; // x0
  System_Char_array *v11; // x1
  System_String_array *v12; // x20
  float v13; // s0
  float v14; // s8
  float v15; // s0
  float v16; // s9
  float v17; // s2
  BlankEarth_c *v18; // x0
  float *p_x; // x8
  float v20; // s0
  float v21; // s1
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s3
  __int64 v26; // x0
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E7E9D & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarth_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&char___TypeInfo, v5, v6, v7);
    byte_42E7E9D = 1;
  }
  v8 = BlankEarth_TypeInfo;
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v8 = BlankEarth_TypeInfo;
  }
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228(v8->static_fields->BLANK_EARTH_ROTATE_KEY, 0LL);
  IsNullOrEmpty = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_21;
  v11 = IsNullOrEmpty;
  if ( !IsNullOrEmpty->max_length )
    goto LABEL_22;
  IsNullOrEmpty->m_Items[2] = 44;
  if ( !String_35648228 )
    goto LABEL_21;
  v12 = System_String__Split(String_35648228, IsNullOrEmpty, 0LL);
  IsNullOrEmpty = (System_Char_array *)System_String__IsNullOrEmpty(String_35648228, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_16;
  if ( !v12 )
LABEL_21:
    sub_B5D69C(IsNullOrEmpty, v11);
  if ( v12->max_length == 4 )
  {
    this->fields.totalAngle = System_Single__Parse(v12->m_Items[3], 0LL);
    if ( v12->max_length )
    {
      v13 = System_Single__Parse(v12->m_Items[0], 0LL);
      if ( v12->max_length > 1 )
      {
        v14 = v13;
        v15 = System_Single__Parse(v12->m_Items[1], 0LL);
        if ( v12->max_length > 2 )
        {
          v16 = v15;
          v17 = System_Single__Parse(v12->m_Items[2], 0LL);
          goto LABEL_20;
        }
      }
    }
LABEL_22:
    v26 = sub_B5D6C8(IsNullOrEmpty);
    sub_B5D668(v26, 0LL);
  }
LABEL_16:
  this->fields.totalAngle = -this->fields.maxAngle;
  v18 = BlankEarth_TypeInfo;
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v18 = BlankEarth_TypeInfo;
  }
  p_x = &v18->static_fields->SOUTH_POLE_ROTATE.fields.x;
  v14 = *p_x;
  v16 = p_x[1];
  v17 = p_x[2];
LABEL_20:
  v20 = v14;
  v21 = v16;
  *(UnityEngine_Quaternion_o *)&v22 = UnityEngine_Quaternion__Euler_35652376(*(UnityEngine_Vector3_o *)(&v17 - 2), 0LL);
  result.fields.w = v25;
  result.fields.z = v24;
  result.fields.y = v23;
  result.fields.x = v22;
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
  __int64 v3; // x3
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_42E7EB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BlankEarth_OnPressRotateBtnX__, isLeft, (_DWORD)method, v3);
    byte_42E7EB0 = 1;
  }
  v6 = Method_BlankEarth_OnPressRotateBtnX__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnX__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B5D5CC(Method_BlankEarth_OnPressRotateBtnX__);
  v7 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  this->fields.isLeft = isLeft;
  this->fields.isBtnTouchX = 1;
}


void __fastcall BlankEarth__OnPressRotateBtnY(BlankEarth_o *this, bool isUp, const MethodInfo *method)
{
  __int64 v3; // x3
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_42E7EB1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BlankEarth_OnPressRotateBtnY__, isUp, (_DWORD)method, v3);
    byte_42E7EB1 = 1;
  }
  v6 = Method_BlankEarth_OnPressRotateBtnY__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnY__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B5D5CC(Method_BlankEarth_OnPressRotateBtnY__);
  v7 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
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
  if ( (byte_42E7EAE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)spot, animIndex, isQuick);
    byte_42E7EAE = 1;
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
      sub_B5D69C(v11, v12);
    BlankEarthPoint__PlaySpotUniqueAnim((BlankEarthPoint_o *)EarthPoint, animIndex, isQuick, finishCallback, v13);
  }
}


void __fastcall BlankEarth__PutAllGimmick(BlankEarth_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BlankEarthGimmickMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  BlankEarthGimmickMaster_o *v12; // x20
  unsigned __int64 v13; // x21
  __int64 v14; // x0

  if ( (byte_42E7EA0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E7EA0 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BlankEarthGimmickMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (BlankEarthGimmickMaster_o *)BlankEarthGimmickMaster__GetAllGimmick(
                                                                        Master_WarQuestSelectionMaster,
                                                                        v9)) == 0LL )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v9);
  }
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v12 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)MasterName_k__BackingField )
      {
        v14 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v14, 0LL);
      }
      BlankEarth__PutGimmick(this, *((BlankEarthGimmickEntity_o **)&v12->fields.list + v13), v10);
      LODWORD(MasterName_k__BackingField) = v12->fields._MasterName_k__BackingField;
      ++v13;
    }
    while ( (__int64)v13 < (int)MasterName_k__BackingField );
  }
}


void __fastcall BlankEarth__PutAllSpots(BlankEarth_o *this, int32_t beforeClearQuestId, const MethodInfo *method)
{
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  BlankEarthSpotMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerable_TSource__o *All; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v29; // x21
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  System_Collections_Generic_IEnumerable_T__o *v31; // x0

  if ( (byte_42E7EA4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_BlankEarthPoint___, beforeClearQuestId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BlankEarth_PutSpot__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_BlankEarthSpotEntity__BlankEarthPoint___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo, v23, v24, v25);
    byte_42E7EA4 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BlankEarthSpotMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v27);
  All = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__GetAll(
                                                               Master_WarQuestSelectionMaster,
                                                               0LL);
  v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v29,
    (Il2CppObject *)this,
    Method_BlankEarth_PutSpot__,
    (const MethodInfo_2C3041C *)Method_System_Func_BlankEarthSpotEntity__BlankEarthPoint___ctor__);
  v30 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                         All,
                                                         (System_Func_TSource__TResult__o *)v29,
                                                         (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
  v31 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v30,
          (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
  System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_TSource__o *)v31,
    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
}


void __fastcall BlankEarth__PutGimmick(
        BlankEarth_o *this,
        BlankEarthGimmickEntity_o *gimmick,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BlankEarth_o *v5; // x20
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
  float z; // s12
  float v19; // s10
  float v20; // s11
  float v21; // s0
  float earthRadius; // s13
  float v23; // s8
  float v24; // s9
  float v25; // s0
  float v26; // s14
  float v27; // s10
  float v28; // s11
  AssetManager_o *v29; // x21
  const MethodInfo *v30; // x1
  AssetData_o *Asset_30680548; // x21
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x21
  const MethodInfo *v33; // x3

  v5 = this;
  if ( (byte_42E7EA1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)gimmick, (_DWORD)method, v3);
    sub_B5D5C4(&BlankEarth_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ScrTerminalListTop_TypeInfo, v12, v13, v14);
    this = (BlankEarth_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v15, v16, v17);
    byte_42E7EA1 = 1;
  }
  if ( !gimmick )
    goto LABEL_18;
  z = gimmick->fields.z;
  v19 = gimmick->fields.x * 0.017453;
  v20 = (float)(gimmick->fields.y + v5->fields.greenwichOffset) * 0.017453;
  v21 = cosf(v19);
  earthRadius = v5->fields.earthRadius;
  v23 = v21;
  v24 = cosf(v20);
  v25 = sinf(v19);
  v26 = v5->fields.earthRadius;
  v27 = v25;
  v28 = sinf(v20);
  this = (BlankEarth_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v29 = (AssetManager_o *)this;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v29 )
    goto LABEL_18;
  Asset_30680548 = AssetManager__GetAsset_30680548(
                     v29,
                     ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH,
                     0LL);
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
  this = (BlankEarth_o *)BlankEarth__GetGimmickPrefabName(gimmick, v30);
  if ( !Asset_30680548 )
LABEL_18:
    sub_B5D69C(this, gimmick);
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 Asset_30680548,
                                                                 (System_String_o *)this,
                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    BlankEarth__CreateGimmick(
      v5,
      Object_WarBoardWaitTimeSetting,
      gimmick,
      v24 * (float)(v23 * (float)(z + earthRadius)),
      v27 * v26,
      (float)(v23 * (float)(z + earthRadius)) * v28,
      v33);
}


BlankEarthPoint_o *__fastcall BlankEarth__PutSpot(
        BlankEarth_o *this,
        BlankEarthSpotEntity_o *spot,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BlankEarth_o *v5; // x20
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
  float v18; // s10
  float v19; // s11
  float v20; // s0
  float earthRadius; // s12
  float v22; // s8
  float v23; // s9
  float v24; // s0
  float v25; // s13
  float v26; // s10
  float v27; // s11
  AssetManager_o *v28; // x21
  const MethodInfo *v29; // x1
  AssetData_o *Asset_30680548; // x21
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x21
  const MethodInfo *v32; // x3

  v5 = this;
  if ( (byte_42E7EA5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)spot, (_DWORD)method, v3);
    sub_B5D5C4(&BlankEarth_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ScrTerminalListTop_TypeInfo, v12, v13, v14);
    this = (BlankEarth_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v15, v16, v17);
    byte_42E7EA5 = 1;
  }
  if ( !spot )
    goto LABEL_18;
  v18 = spot->fields.x * 0.017453;
  v19 = (float)(spot->fields.y + v5->fields.greenwichOffset) * 0.017453;
  v20 = cosf(v18);
  earthRadius = v5->fields.earthRadius;
  v22 = v20;
  v23 = cosf(v19);
  v24 = sinf(v18);
  v25 = v5->fields.earthRadius;
  v26 = v24;
  v27 = sinf(v19);
  this = (BlankEarth_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v28 = (AssetManager_o *)this;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v28 )
    goto LABEL_18;
  Asset_30680548 = AssetManager__GetAsset_30680548(
                     v28,
                     ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH,
                     0LL);
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
  this = (BlankEarth_o *)BlankEarth__GetSpotPrefabName(spot, v29);
  if ( !Asset_30680548 )
LABEL_18:
    sub_B5D69C(this, spot);
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 Asset_30680548,
                                                                 (System_String_o *)this,
                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    return 0LL;
  else
    return BlankEarth__CreateSpot(
             v5,
             Object_WarBoardWaitTimeSetting,
             spot,
             v23 * (float)(v22 * (float)(earthRadius + 0.0)),
             v26 * v25,
             (float)(v22 * (float)(earthRadius + 0.0)) * v27,
             v32);
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
  if ( (byte_42E7EAD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)spot, dispType, isQuick);
    byte_42E7EAD = 1;
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
      sub_B5D69C(v11, v12);
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
  if ( (byte_42E7EAC & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarth_QAARotateEarthParam_TypeInfo, easeType, isShortcut, finishCallback);
    byte_42E7EAC = 1;
  }
  v16 = (BlankEarth_QAARotateEarthParam_o *)sub_B5D694(BlankEarth_QAARotateEarthParam_TypeInfo);
  v34.fields.x = x;
  v34.fields.y = y;
  v17 = v16;
  BlankEarth_QAARotateEarthParam___ctor(v16, time, v34, easeType, finishCallback, 0LL);
  this->fields.qaaRotateEarthParam = v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.qaaRotateEarthParam,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.rotateEarthTimeCalculateParam = rotateTimeCalculateParam;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rotateEarthTimeCalculateParam,
    (System_Int32_array **)rotateTimeCalculateParam,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !this )
    sub_B5D69C(v30, v31);
  if ( isShortcut )
    v33 = 6;
  else
    v33 = 5;
  BlankEarth__SetState(this, v33, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__RotateEarthTowardsGimmick(
        BlankEarth_o *this,
        BlankEarthGimmickEntity_o *blankEarthGimmickEntity,
        float time,
        int32_t easeType,
        bool isShortcut,
        System_Action_BlankEarth_QAARotateEarthResponse__o *finishCallback,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  BlankEarth_QAARotateEarthResponse_o *v16; // x20

  if ( (byte_42E7EAB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___,
      (_DWORD)blankEarthGimmickEntity,
      easeType,
      isShortcut);
    sub_B5D5C4(&BlankEarth_QAARotateEarthResponse_TypeInfo, v13, v14, v15);
    byte_42E7EAB = 1;
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
    v16 = (BlankEarth_QAARotateEarthResponse_o *)sub_B5D694(BlankEarth_QAARotateEarthResponse_TypeInfo);
    BlankEarth_QAARotateEarthResponse___ctor(v16, 1, 0LL);
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      (System_Action_T__o *)finishCallback,
      v16,
      (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BlankEarth_QAARotateEarthResponse_o *v18; // x20

  if ( (byte_42E7EAA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___,
      (_DWORD)blankEarthSpotEntity,
      easeType,
      isShortcut);
    sub_B5D5C4(&BlankEarth_QAARotateEarthResponse_TypeInfo, v15, v16, v17);
    byte_42E7EAA = 1;
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
    v18 = (BlankEarth_QAARotateEarthResponse_o *)sub_B5D694(BlankEarth_QAARotateEarthResponse_TypeInfo);
    BlankEarth_QAARotateEarthResponse___ctor(v18, 1, 0LL);
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      (System_Action_T__o *)finishCallback,
      v18,
      (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
    sub_B5D69C(0LL, method);
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
  int v4; // w2
  __int64 v5; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BlankEarth_c *v12; // x0
  System_String_o *BLANK_EARTH_ROTATE_KEY; // x19
  System_String_array *v14; // x20
  float v15; // s0
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  float v32; // s0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  float v47; // s0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  float v62; // s0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x21
  System_String_o *v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  UnityEngine_Vector3_o eulerAngles; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF

  methoda.methodPointer = *(Il2CppMethodPointer *)&qua.fields.x;
  methoda.invoker_method = *(void **)&qua.fields.z;
  *((float *)&methoda.klass + 1) = totalAngle;
  if ( (byte_42E7EA9 & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarth_TypeInfo, (_DWORD)method, v4, v5);
    sub_B5D5C4(&string___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_707/*","*/, v9, v10, v11);
    byte_42E7EA9 = 1;
  }
  eulerAngles = UnityEngine_Quaternion__get_eulerAngles(qua, &methoda);
  v12 = BlankEarth_TypeInfo;
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v12 = BlankEarth_TypeInfo;
  }
  BLANK_EARTH_ROTATE_KEY = v12->static_fields->BLANK_EARTH_ROTATE_KEY;
  v14 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 7LL);
  v16 = System_Single__ToString(v15, (const MethodInfo *)&eulerAngles);
  if ( !v14 )
    sub_B5D69C(v16, v17);
  v24 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = (System_String_o *)sub_B5D684(v16, v14->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_36;
  }
  if ( !v14->max_length )
    goto LABEL_35;
  v14->m_Items[0] = (System_String_o *)v24;
  sub_B5D560((BattleServantConfConponent_o *)v14->m_Items, v24, v18, v19, v20, v21, v22, v23);
  v16 = (System_String_o *)StringLiteral_707/*","*/;
  if ( StringLiteral_707/*","*/ )
  {
    v16 = (System_String_o *)sub_B5D684(StringLiteral_707/*","*/, v14->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_36;
    v31 = (System_Int32_array **)StringLiteral_707/*","*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v14->max_length <= 1 )
    goto LABEL_35;
  v14->m_Items[1] = (System_String_o *)v31;
  sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
  v16 = System_Single__ToString(v32, (const MethodInfo *)&eulerAngles.fields.y);
  v39 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = (System_String_o *)sub_B5D684(v16, v14->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_36;
  }
  if ( v14->max_length <= 2 )
    goto LABEL_35;
  v14->m_Items[2] = (System_String_o *)v39;
  sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[2], v39, v33, v34, v35, v36, v37, v38);
  v16 = (System_String_o *)StringLiteral_707/*","*/;
  if ( StringLiteral_707/*","*/ )
  {
    v16 = (System_String_o *)sub_B5D684(StringLiteral_707/*","*/, v14->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_36;
    v46 = (System_Int32_array **)StringLiteral_707/*","*/;
  }
  else
  {
    v46 = 0LL;
  }
  if ( v14->max_length <= 3 )
    goto LABEL_35;
  v14->m_Items[3] = (System_String_o *)v46;
  sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[3], v46, v40, v41, v42, v43, v44, v45);
  v16 = System_Single__ToString(v47, (const MethodInfo *)&eulerAngles.fields.z);
  v54 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = (System_String_o *)sub_B5D684(v16, v14->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_36;
  }
  if ( v14->max_length <= 4 )
    goto LABEL_35;
  v14->m_Items[4] = (System_String_o *)v54;
  sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[4], v54, v48, v49, v50, v51, v52, v53);
  v16 = (System_String_o *)StringLiteral_707/*","*/;
  if ( StringLiteral_707/*","*/ )
  {
    v16 = (System_String_o *)sub_B5D684(StringLiteral_707/*","*/, v14->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_36;
    v61 = (System_Int32_array **)StringLiteral_707/*","*/;
  }
  else
  {
    v61 = 0LL;
  }
  if ( v14->max_length <= 5 )
    goto LABEL_35;
  v14->m_Items[5] = (System_String_o *)v61;
  sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[5], v61, v55, v56, v57, v58, v59, v60);
  v16 = System_Single__ToString(v62, (const MethodInfo *)((char *)&methoda.klass + 4));
  v69 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = (System_String_o *)sub_B5D684(v16, v14->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_36:
      v72 = sub_B5D6BC(v16);
      sub_B5D668(v72, 0LL);
    }
  }
  if ( v14->max_length <= 6 )
  {
LABEL_35:
    v71 = sub_B5D6C8(v16);
    sub_B5D668(v71, 0LL);
  }
  v14->m_Items[6] = (System_String_o *)v69;
  sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[6], v69, v63, v64, v65, v66, v67, v68);
  v70 = System_String__Concat_44657912(v14, 0LL);
  UnityEngine_PlayerPrefs__SetString(BLANK_EARTH_ROTATE_KEY, v70, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetEarthRotate(BlankEarth_o *this, UnityEngine_Quaternion_o qua, const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0

  blankEarth = this->fields.blankEarth;
  if ( !blankEarth )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, *(_QWORD *)&spotId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  EarthPoint = (System_Int32_array **)BlankEarth__GetEarthPoint(v4, spotId, v6);
  v4->fields.focusEarthPoint = (struct BlankEarthPoint_o *)EarthPoint;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.focusEarthPoint, EarthPoint, v8, v9, v10, v11, v12, v13);
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
  sub_B5D560(
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
  __int64 v3; // x3
  struct CStateManager_BlankEarth__o *mFSM; // x0

  if ( (byte_42E7E99 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_BlankEarth__setState__, state, (_DWORD)method, v3);
    byte_42E7E99 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_BlankEarth__setState__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BlankEarthPoint_o **p_focusEarthPoint; // x20
  UnityEngine_Object_o *focusEarthPoint; // x21
  UnityEngine_GameObject_o *earthRoot; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x3
  TerminalPramsManager_c *v14; // x0
  struct BlankEarthPoint_o *EarthPoint; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  float *v22; // x8
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float v26; // s11
  UnityEngine_Transform_o *blankEarth; // x20
  float zoomInOffset; // s12
  float y; // s4
  float z; // s5
  float v31; // s3
  int v32; // s0
  UnityEngine_Transform_o *transform; // x20
  int v37; // s0
  const MethodInfo *v41; // x2
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v45; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_42E7EAF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    byte_42E7EAF = 1;
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
    if ( !byte_42E4B23 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, (_DWORD)v12, v13);
      byte_42E4B23 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    EarthPoint = BlankEarth__GetEarthPoint(this, v14->static_fields->_BlankEarthSpotId_k__BackingField, v12);
    this->fields.focusEarthPoint = EarthPoint;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.focusEarthPoint,
      (System_Int32_array **)EarthPoint,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = (float *)*p_focusEarthPoint;
  if ( !*p_focusEarthPoint )
    goto LABEL_27;
  v23 = v22[60];
  v24 = v22[61];
  v25 = v22[62];
  v26 = v22[63];
  blankEarth = this->fields.blankEarth;
  zoomInOffset = this->fields.zoomInOffset;
  up = UnityEngine_Vector3__get_up(0LL);
  y = up.fields.y;
  z = up.fields.z;
  up.fields.y = up.fields.x;
  up.fields.z = y;
  v31 = z;
  v44 = UnityEngine_Quaternion__AngleAxis(-zoomInOffset, *(UnityEngine_Vector3_o *)&up.fields.y, 0LL);
  v45.fields.x = v23;
  v45.fields.y = v24;
  v45.fields.z = v25;
  v45.fields.w = v26;
  *(UnityEngine_Quaternion_o *)&v32 = UnityEngine_Quaternion__op_Multiply(v44, v45, 0LL);
  if ( !blankEarth )
    goto LABEL_27;
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v32, 0LL);
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_27;
  transform = UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  *(UnityEngine_Quaternion_o *)&v37 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !transform )
    goto LABEL_27;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v37, 0LL);
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
    || (v43.fields.x = this->fields.zoomInScl,
        v43.fields.y = v43.fields.x,
        v43.fields.z = v43.fields.x,
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)earthRoot, v43, 0LL),
        (earthRoot = (UnityEngine_GameObject_o *)this->fields.mTerminalList) == 0LL)
    || (ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)earthRoot, 0, 1, 0LL),
        (earthRoot = (UnityEngine_GameObject_o *)this->fields.mTerminalList) == 0LL) )
  {
LABEL_27:
    sub_B5D69C(earthRoot, v11);
  }
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)earthRoot, 0.0, 0, 1, 0LL);
  BlankEarth__SetState(this, 3, v41);
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
          v8 = sub_B5D6C8(this);
          sub_B5D668(v8, 0LL);
        }
        v7 = presentBoxHideGameObjectList->m_Items[v5];
        if ( !v7 )
          sub_B5D69C(0LL, isDisp);
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
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_BlankEarth__o *mFSM; // x0

  if ( (byte_42E7E97 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_BlankEarth__update__, (_DWORD)method, v2, v3);
    byte_42E7E97 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_BlankEarth__update__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthTransform_o *__fastcall BlankEarth__UpdateBlankEarthTransformData(
        BlankEarth_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *earthRoot; // x0
  BlankEarthTransform_o *v9; // x20
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s3
  float v14; // s11
  float v15; // s10
  float v16; // s9
  float v17; // s8
  UnityEngine_GameObject_o *v18; // x0
  int v19; // w1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  BlankEarthTransform_o *v27; // x0
  const MethodInfo *v28; // x5
  TerminalPramsManager_c *v29; // x0
  BattleServantConfConponent_o *p_BlankEarthTransformData_k__BackingField; // x0
  float totalAng; // [xsp+34h] [xbp-6Ch]
  float w; // [xsp+38h] [xbp-68h]
  float earthRootRot; // [xsp+3Ch] [xbp-64h]
  float y; // [xsp+88h] [xbp-18h]
  float x; // [xsp+8Ch] [xbp-14h]
  UnityEngine_Vector3_o v37; // 0:x1.12
  UnityEngine_Vector3_o v38; // 0:x3.12
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v41; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_42E7EB2 & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarthTransform_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    byte_42E7EB2 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5ED9 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5ED9 = 1;
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
  v9 = *(BlankEarthTransform_o **)(*(_QWORD *)&earthRoot[7].fields.m_CachedPtr + 512LL);
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Transform__get_rotation(this->fields.blankEarth, 0LL);
  v14 = v10;
  v15 = v11;
  v16 = v12;
  v17 = v13;
  if ( !v9 )
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
          v27 = (BlankEarthTransform_o *)sub_B5D694(BlankEarthTransform_TypeInfo);
          v41.fields.y = y;
          v41.fields.x = x;
          v41.fields.z = earthRootRot;
          v40.fields.y = v15;
          v41.fields.w = w;
          v40.fields.z = v16;
          v40.fields.w = v17;
          *(_QWORD *)&v37.fields.x = 0LL;
          v9 = v27;
          v40.fields.x = v14;
          BlankEarthTransform___ctor(v27, v40, v41, v37, v38, totalAng, v28);
          goto LABEL_21;
        }
      }
    }
LABEL_30:
    sub_B5D69C(earthRoot, method);
  }
  v9->fields.blankEarthRotation.fields.x = v10;
  v9->fields.blankEarthRotation.fields.y = v11;
  v9->fields.blankEarthRotation.fields.z = v12;
  v9->fields.blankEarthRotation.fields.w = v13;
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_30;
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !earthRoot )
    goto LABEL_30;
  v9->fields.earthRootRotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)earthRoot, 0LL);
  v9->fields.earthRootLocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.earthRoot, 0LL);
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_30;
  v18 = UnityEngine_GameObject__get_gameObject(earthRoot, 0LL);
  v9->fields.earthRootLocalScale = GameObjectExtensions__GetLocalScale(v18, 0LL);
  v9->fields.totalAngle = this->fields.totalAngle;
LABEL_21:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E7ED3 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v19, (_DWORD)v20, v21);
    byte_42E7ED3 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  p_BlankEarthTransformData_k__BackingField = (BattleServantConfConponent_o *)&v29->static_fields->_BlankEarthTransformData_k__BackingField;
  p_BlankEarthTransformData_k__BackingField->klass = (BattleServantConfConponent_c *)v9;
  sub_B5D560(p_BlankEarthTransformData_k__BackingField, (System_Int32_array **)v9, v20, v21, v22, v23, v24, v25);
  return v9;
}


void __fastcall BlankEarth__UpdateSpotDisp(BlankEarth_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *earthSpotRoot; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x19
  BlankEarth___c_c *v22; // x8
  struct BlankEarth___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__108_0; // x20
  Il2CppObject *v25; // x21
  struct BlankEarth___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E7EA8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BlankEarthPoint___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BlankEarthPoint__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BlankEarthPoint___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___, v11, v12, v13);
    sub_B5D5C4(&Method_BlankEarth___c__UpdateSpotDisp_b__108_0__, v14, v15, v16);
    sub_B5D5C4(&BlankEarth___c_TypeInfo, v17, v18, v19);
    byte_42E7EA8 = 1;
  }
  earthSpotRoot = this->fields.earthSpotRoot;
  if ( !earthSpotRoot )
    sub_B5D69C(0LL, method);
  v21 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                                         earthSpotRoot,
                                                         (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  v22 = BlankEarth___c_TypeInfo;
  if ( (BYTE3(BlankEarth___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarth___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo);
    v22 = BlankEarth___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__108_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = BlankEarth___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__108_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BlankEarthPoint__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__108_0,
      v25,
      Method_BlankEarth___c__UpdateSpotDisp_b__108_0__,
      (const MethodInfo_258B320 *)Method_System_Action_BlankEarthPoint___ctor__);
    v26 = BlankEarth___c_TypeInfo->static_fields;
    v26->__9__108_0 = (struct System_Action_BlankEarthPoint__o *)_9__108_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v26->__9__108_0,
      (System_Int32_array **)_9__108_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v21,
    (System_Action_T__o *)_9__108_0,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BlankEarthPoint___);
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
    sub_B5D69C(blankEarth, method);
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
  v8 = UnityEngine_Quaternion__op_Multiply_35651676(v12, v9, 0LL);
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
  sub_B5D560(
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
  sub_B5D560(v11);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
  }
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v5, 0LL);
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__StartRotate(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x20
  Il2CppClass *klass; // x8
  EasingObject_o *monitor; // x19
  float v7; // s8
  System_Action_o *v8; // x21
  System_Action_o *v9; // x22
  Il2CppClass *v10; // x8

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5E0F & 1) == 0 )
  {
    this = (BlankEarth_StateEarthAutoRotateBase_o *)sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5E0F = 1;
  }
  klass = v4[4].klass;
  if ( !klass
    || (monitor = (EasingObject_o *)v4[1].monitor,
        v7 = *(float *)&klass->_1.name,
        v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v8, v4, (intptr_t)v4->klass->vtable[10].methodPtr, 0LL),
        v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v9, v4, (intptr_t)v4->klass->vtable[11].methodPtr, 0LL),
        (v10 = v4[4].klass) == 0LL)
    || !monitor )
  {
    sub_B5D69C(this, method);
  }
  EasingObject__Play(monitor, v7, v8, v9, 0.0, HIDWORD(v10->_1.namespaze), 0LL);
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__begin(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Transform_o *blankEarth; // x0
  __int64 v7; // x1
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E5E0E & 1) == 0 )
  {
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, (_DWORD)that, (_DWORD)method, v3);
    byte_42E5E0E = 1;
  }
  this->fields.That = that;
  sub_B5D560(&this->fields);
  if ( !that )
    goto LABEL_10;
  this->fields.Param = that->fields.qaaRotateEarthParam;
  sub_B5D560(&this->fields.Param);
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
                                                              (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
          sub_B5D560(&this->fields.EasingObj);
          return;
        }
      }
    }
LABEL_10:
    sub_B5D69C(blankEarth, v7);
  }
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__end(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EasingObject_o *EasingObj; // x0
  struct EasingObject_o *v9; // x9
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  System_Action_T__o *FinishCallback_k__BackingField; // x19
  bool v12; // w21
  __int64 v13; // x20

  if ( (byte_42E5E10 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&BlankEarth_QAARotateEarthResponse_TypeInfo, v5, v6, v7);
    byte_42E5E10 = 1;
  }
  EasingObj = this->fields.EasingObj;
  if ( !EasingObj
    || (EasingObject__Stop(EasingObj, 0LL), (EasingObj = (EasingObject_o *)this->fields.That) == 0LL)
    || (BlankEarth__UpdateTotalAngle((BlankEarth_o *)EasingObj, 0LL), (v9 = this->fields.EasingObj) == 0LL) )
  {
    sub_B5D69C(EasingObj, that);
  }
  Param = this->fields.Param;
  if ( Param )
  {
    FinishCallback_k__BackingField = (System_Action_T__o *)Param->fields._FinishCallback_k__BackingField;
    v12 = v9->fields.mStartTime < 1.0;
    v13 = sub_B5D694(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    *(_BYTE *)(v13 + 16) = v12;
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      FinishCallback_k__BackingField,
      (BlankEarth_QAARotateEarthResponse_o *)v13,
      (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
    sub_B5D69C(this, that);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, method);
  v18.fields.x = 0.0;
  v18.fields.y = mStartTime * v4->fields.rotAmountY;
  v18.fields.z = 0.0;
  UnityEngine_Transform__Rotate_35742348((UnityEngine_Transform_o *)this, v18, 0LL);
}


void __fastcall BlankEarth_StateShortcutRotate__StartRotate(
        BlankEarth_StateShortcutRotate_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EasingObject_o *EasingObj; // x19
  float rotateTime; // s8
  System_Action_o *v7; // x0
  __int64 v8; // x1
  System_Action_o *v9; // x21
  System_Action_o *v10; // x22
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8

  if ( (byte_42E5E11 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5E11 = 1;
  }
  EasingObj = this->fields.EasingObj;
  rotateTime = this->fields.rotateTime;
  v7 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  if ( !this
    || (v9 = v7,
        System_Action___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)this->klass->vtable._10_OnRotateCompleted.methodPtr,
          0LL),
        v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_update.methodPtr, 0LL),
        (Param = this->fields.Param) == 0LL)
    || !EasingObj )
  {
    sub_B5D69C(v7, v8);
  }
  EasingObject__Play(EasingObj, rotateTime, v9, v10, 0.0, Param->fields._EaseType_k__BackingField, 0LL);
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
  v29 = UnityEngine_Quaternion__op_Multiply_35651676(v38, v35, 0LL);
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
  v30 = UnityEngine_Quaternion__op_Multiply_35651676(v40, v36, 0LL);
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
      sub_B5D69C(EasingObj, v21);
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
  __int64 v30; // x21
  __int64 Int; // x0
  __int64 v32; // x1
  __int64 v33; // x20
  __int64 v34; // x8
  float v35; // s8
  int v36; // s0
  TerminalSceneComponent_c *v37; // x0
  __int64 v38; // x8
  UnityEngine_Transform_o *v39; // x22
  BlankEarth_c *v40; // x0
  int v41; // s0
  TerminalSceneComponent_c *v45; // x0
  int v46; // w2
  __int64 v47; // x3
  UnityEngine_Transform_o *v48; // x22
  int v49; // s0
  _QWORD *v53; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v55; // x8
  UnityEngine_GameObject_o *v56; // x0
  EasingObject_o *v57; // x22
  System_Action_o *v58; // x23
  System_Action_o *v59; // x24
  __int64 v60; // x8
  __int64 v61; // x8
  int v62; // w2
  __int64 v63; // x3
  __int64 v64; // x8
  __int64 v65; // x8
  __int64 v66; // x8
  __int64 v67; // x8
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E5E12 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&BlankEarth_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9, v10, v11);
    sub_B5D5C4(&Method_BlankEarth_StateStartup_begin__, v12, v13, v14);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, v21, v22, v23);
    sub_B5D5C4(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, v24, v25, v26);
    sub_B5D5C4(&BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo, v27, v28, v29);
    byte_42E5E12 = 1;
  }
  v30 = sub_B5D694(BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo);
  BlankEarth_StateStartup___c__DisplayClass3_0___ctor((BlankEarth_StateStartup___c__DisplayClass3_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_68;
  *(_QWORD *)(v30 + 24) = this;
  sub_B5D560(v30 + 24);
  *(_QWORD *)(v30 + 32) = that;
  v33 = v30 + 32;
  sub_B5D560(v30 + 32);
  *(_QWORD *)&this->fields.inertialSpeedX = 0LL;
  if ( !*(_QWORD *)(v30 + 32) )
    goto LABEL_68;
  *(_DWORD *)(*(_QWORD *)(v30 + 32) + 220LL) = 0;
  v34 = *(_QWORD *)v33;
  if ( !*(_QWORD *)v33 )
    goto LABEL_68;
  v35 = *(float *)(v34 + 112);
  v36 = 0;
  if ( *(_BYTE *)(v34 + 216) && !*(_BYTE *)(v34 + 217) )
    v36 = *(_DWORD *)(v34 + 144);
  *(_DWORD *)(v30 + 68) = v36;
  *(_DWORD *)(v34 + 304) = *(_DWORD *)(v34 + 120);
  v37 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v37 = TerminalSceneComponent_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v37->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0LL);
  v38 = *(_QWORD *)v33;
  if ( !*(_QWORD *)v33 )
    goto LABEL_68;
  if ( (_DWORD)Int == 1 )
  {
    v35 = *(float *)(v38 + 136);
    *(_DWORD *)(v38 + 304) = *(_DWORD *)(v38 + 140);
    if ( !*(_QWORD *)v33 )
      goto LABEL_68;
    v39 = *(UnityEngine_Transform_o **)(*(_QWORD *)v33 + 24LL);
    v40 = BlankEarth_TypeInfo;
    if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
      v40 = BlankEarth_TypeInfo;
    }
    *(UnityEngine_Quaternion_o *)&v41 = UnityEngine_Quaternion__Euler_35652376(
                                          v40->static_fields->SOUTH_POLE_ROTATE,
                                          0LL);
    if ( !v39 )
      goto LABEL_68;
    UnityEngine_Transform__set_rotation(v39, *(UnityEngine_Quaternion_o *)&v41, 0LL);
    v45 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v45 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v45->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0LL);
    if ( !*(_QWORD *)v33 )
      goto LABEL_68;
    *(float *)(*(_QWORD *)v33 + 220LL) = -*(float *)(*(_QWORD *)v33 + 76LL);
  }
  else
  {
    v48 = *(UnityEngine_Transform_o **)(v38 + 24);
    *(UnityEngine_Quaternion_o *)&v49 = BlankEarth__LoadEarthRotate((BlankEarth_o *)*(_QWORD *)v33, 0LL);
    if ( !v48 )
      goto LABEL_68;
    UnityEngine_Transform__set_rotation(v48, *(UnityEngine_Quaternion_o *)&v49, 0LL);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B3A )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v32, v46, v47);
    byte_42E4B3A = 1;
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
    v53 = Method_BlankEarth_StateStartup_begin__;
    if ( (*((_BYTE *)Method_BlankEarth_StateStartup_begin__ + 75) & 2) != 0 )
      v53 = (_QWORD *)sub_B5D5CC(Method_BlankEarth_StateStartup_begin__);
    Int = sub_B5D5A8(v53, v53[3]);
    if ( *(_QWORD *)v33 )
    {
      Int = (__int64)OverwriteAssetSoundName__PlaySe(
                       (System_Reflection_MethodBase_o *)Int,
                       *(System_String_o **)(*(_QWORD *)v33 + 128LL),
                       0LL);
      goto LABEL_39;
    }
LABEL_68:
    sub_B5D69C(Int, v32);
  }
LABEL_39:
  if ( !*(_QWORD *)v33 )
    goto LABEL_68;
  Int = *(_QWORD *)(*(_QWORD *)v33 + 24LL);
  if ( !Int )
    goto LABEL_68;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Int, 0LL);
  *(_QWORD *)(v30 + 16) = GameObjectExtensions__SafeGetComponent_UIWidget_(
                            gameObject,
                            (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_B5D560(v30 + 16);
  v55 = *(_QWORD *)(v30 + 32);
  if ( !v55 )
    goto LABEL_68;
  Int = *(_QWORD *)(v55 + 32);
  if ( !Int )
    goto LABEL_68;
  v56 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Int, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v56, 0LL);
  Int = *(_QWORD *)(v30 + 32);
  *(UnityEngine_Vector3_o *)(v30 + 52) = LocalScale;
  if ( !Int )
    goto LABEL_68;
  *(UnityEngine_Vector3_o *)(v30 + 40) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)Int, 0LL);
  *(_BYTE *)(v30 + 64) = 0;
  v57 = *(EasingObject_o **)(v30 + 16);
  v58 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v58, (Il2CppObject *)v30, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, 0LL);
  v59 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)v30, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, 0LL);
  v60 = *(_QWORD *)(v30 + 32);
  if ( !v60 )
    goto LABEL_68;
  if ( !v57 )
    goto LABEL_68;
  EasingObject__Play_33961128(v57, 1.0, 0.0, v35, v58, v59, 0.0, *(_DWORD *)(v60 + 188), 0LL);
  if ( !*(_QWORD *)v33 )
    goto LABEL_68;
  Int = *(_QWORD *)(*(_QWORD *)v33 + 232LL);
  if ( !Int )
    goto LABEL_68;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)Int, 0, 1, 0LL);
  v61 = *(_QWORD *)v33;
  if ( !*(_QWORD *)v33 )
    goto LABEL_68;
  Int = *(_QWORD *)(v61 + 232);
  if ( !Int )
    goto LABEL_68;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)Int, *(float *)(v61 + 172), 0, 1, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v32, v62, v63);
    byte_42E4B1E = 1;
  }
  Int = (__int64)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v64 = **(_QWORD **)(Int + 184);
  if ( !v64 )
    goto LABEL_68;
  v65 = *(_QWORD *)(v64 + 248);
  if ( !v65 )
    goto LABEL_68;
  *(_BYTE *)(v65 + 402) = 1;
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v32, v62, v63);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
    byte_42E4B1E = 1;
  }
  if ( (*(_BYTE *)(Int + 307) & 4) != 0 && !*(_DWORD *)(Int + 224) )
  {
    j_il2cpp_runtime_class_init_0(Int);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v66 = **(_QWORD **)(Int + 184);
  if ( !v66 )
    goto LABEL_68;
  v67 = *(_QWORD *)(v66 + 248);
  if ( !v67 )
    goto LABEL_68;
  *(_BYTE *)(v67 + 403) = 1;
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
    sub_B5D69C(this, 0LL);
  BlankEarth__BlunkEarthMainOperation(that, that, &this->fields.inertialSpeedX, &this->fields.inertialSpeedY, 0LL);
  scalingEndCallback = that->fields.scalingEndCallback;
  if ( scalingEndCallback )
  {
    if ( this->fields.scaleRate < 0.0001 )
    {
      p_scalingEndCallback = &that->fields.scalingEndCallback;
      System_Action__Invoke(scalingEndCallback, 0LL);
      *p_scalingEndCallback = 0LL;
      sub_B5D560(p_scalingEndCallback);
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
      sub_B5D69C(this, method);
    }
  }
}


void __fastcall BlankEarth_StateStartup___c__DisplayClass3_0___begin_b__1(
        BlankEarth_StateStartup___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BlankEarth_StateStartup___c__DisplayClass3_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BlankEarth_o *that; // x8
  Il2CppObject *v9; // x20
  System_Action_o *monitor; // x0
  struct BlankEarth_o *v11; // x8
  float wait_time; // s8
  System_Action_o *v13; // x21
  struct BlankEarth_o *v14; // x8

  v4 = this;
  if ( (byte_42E602E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_B5D5C4(&Method_BlankEarth_SetMainState__, v5, v6, v7);
    byte_42E602E = 1;
  }
  that = v4->fields.that;
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
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v4->fields.root_scl_to, 0LL);
  v9 = (Il2CppObject *)v4->fields.that;
  if ( !v9 )
    goto LABEL_13;
  monitor = (System_Action_o *)v9[18].monitor;
  if ( monitor )
  {
    System_Action__Invoke(monitor, 0LL);
    v11 = v4->fields.that;
    if ( !v11 )
      goto LABEL_13;
    v11->fields.scalingEndCallback = 0LL;
    sub_B5D560(&v11->fields.scalingEndCallback);
    v9 = (Il2CppObject *)v4->fields.that;
  }
  wait_time = v4->fields.wait_time;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, v9, Method_BlankEarth_SetMainState__, 0LL);
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)BasicHelper__DelayCall(wait_time, v13, 0LL);
  if ( !v9
    || (this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                                   (UnityEngine_MonoBehaviour_o *)v9,
                                                                   (System_Collections_IEnumerator_o *)this,
                                                                   0LL),
        (v14 = v4->fields.that) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(this, method);
  }
  v14->fields.isSkipTutorialWait = 0;
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
  __int64 v27; // x20
  ScrTerminalListTop_o *mTerminalList; // x0
  __int64 v29; // x1
  BlankEarth_o **v30; // x21
  BlankEarth_o *v31; // x8
  int v32; // w2
  __int64 v33; // x3
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v36; // x8
  __int64 v37; // x8
  struct BlankEarthPoint_o *focusEarthPoint; // x8
  int32_t spotId_k__BackingField; // w22
  TerminalPramsManager_c *v40; // x0
  BlankEarth_o *v41; // x8
  ScrTerminalListTop_o *v42; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v44; // x8
  float v45; // s8
  float y; // s4
  float z; // s5
  float v48; // s3
  int v49; // s0
  UnityEngine_Quaternion_o *v53; // x8
  __int64 v54; // x8
  int caldeaFolderInfoList; // w10
  int v56; // w10
  int warSelectedQuestInfoDic_high; // w10
  int v58; // w9
  UnityEngine_Object_o *v59; // x22
  int v60; // w2
  __int64 v61; // x3
  BlankEarth_o *v62; // x21
  __int64 *v63; // x21
  __int64 v64; // x8
  __int64 v65; // x9
  int v66; // w8
  EasingObject_o *v67; // x21
  float mSpdTime; // s8
  System_Action_o *v69; // x19
  System_Action_o *v70; // x22
  __int64 v71; // x8
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E5E13 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__, v18, v19, v20);
    sub_B5D5C4(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__, v21, v22, v23);
    sub_B5D5C4(&BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo, v24, v25, v26);
    byte_42E5E13 = 1;
  }
  v27 = sub_B5D694(BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo);
  BlankEarth_StateZoomIn___c__DisplayClass1_0___ctor((BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v27, 0LL);
  if ( !v27 )
    goto LABEL_76;
  *(_QWORD *)(v27 + 24) = that;
  v30 = (BlankEarth_o **)(v27 + 24);
  sub_B5D560(v27 + 24);
  if ( !*(_QWORD *)(v27 + 24) )
    goto LABEL_76;
  mTerminalList = *(ScrTerminalListTop_o **)(*(_QWORD *)(v27 + 24) + 232LL);
  if ( !mTerminalList )
    goto LABEL_76;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn(mTerminalList, 0, 0, 0LL);
  v31 = *v30;
  if ( !*v30 )
    goto LABEL_76;
  mTerminalList = v31->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_76;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(mTerminalList, v31->fields.earthBtnMoveSpeedTime, 0, 0, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v29, v32, v33);
    byte_42E4B1E = 1;
  }
  mTerminalList = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalList = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v34 = **(_QWORD **)&mTerminalList->fields.boardGameTokenEffectId;
  if ( !v34 )
    goto LABEL_76;
  v35 = *(_QWORD *)(v34 + 248);
  if ( !v35 )
    goto LABEL_76;
  *(_BYTE *)(v35 + 402) = 1;
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v29, v32, v33);
    mTerminalList = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    byte_42E4B1E = 1;
  }
  if ( (BYTE3(mTerminalList->fields.blankEarthBg) & 4) != 0 && !LODWORD(mTerminalList->fields.mTerminalServant) )
  {
    j_il2cpp_runtime_class_init_0(mTerminalList);
    mTerminalList = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v36 = **(_QWORD **)&mTerminalList->fields.boardGameTokenEffectId;
  if ( !v36 )
    goto LABEL_76;
  v37 = *(_QWORD *)(v36 + 248);
  if ( !v37 )
    goto LABEL_76;
  *(_BYTE *)(v37 + 403) = 1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B23 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v29, v32, v33);
    byte_42E4B23 = 1;
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
    if ( *v30 )
    {
      focusEarthPoint = (*v30)->fields.focusEarthPoint;
      if ( focusEarthPoint )
      {
        spotId_k__BackingField = focusEarthPoint->fields._spotId_k__BackingField;
        if ( (BYTE3(mTerminalList->fields.blankEarthBg) & 4) != 0 && !LODWORD(mTerminalList->fields.mTerminalServant) )
          j_il2cpp_runtime_class_init_0(mTerminalList);
        if ( !byte_42E5CAB )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v29, v32, v33);
          byte_42E5CAB = 1;
        }
        v40 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v40 = TerminalPramsManager_TypeInfo;
        }
        v40->static_fields->_BlankEarthSpotId_k__BackingField = spotId_k__BackingField;
        TerminalPramsManager__BlankEarthSpotId_SaveData(0LL);
        if ( *v30 )
        {
          this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume((*v30)->fields.zoomInSpdTime, 0LL);
          v41 = *v30;
          if ( *v30 )
          {
            mTerminalList = v41->fields.mTerminalList;
            if ( mTerminalList )
            {
              ScrTerminalListTop__cbfBlankEarthQuestCreate(mTerminalList, v41->fields.focusEarthPoint, 0LL);
              mTerminalList = (ScrTerminalListTop_o *)*v30;
              if ( *v30 )
              {
                BlankEarth__SaveEarthRotate((BlankEarth_o *)mTerminalList, 0LL);
                mTerminalList = (ScrTerminalListTop_o *)*v30;
                if ( *v30 )
                {
                  mTerminalList = (ScrTerminalListTop_o *)BlankEarth__UpdateBlankEarthTransformData(
                                                            (BlankEarth_o *)mTerminalList,
                                                            0LL);
                  if ( *v30 )
                  {
                    v42 = mTerminalList;
                    mTerminalList = (ScrTerminalListTop_o *)(*v30)->fields.blankEarth;
                    if ( mTerminalList )
                    {
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
                      *(_QWORD *)(v27 + 16) = GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
                      sub_B5D560(v27 + 16);
                      if ( v42 )
                      {
                        v44 = *(_QWORD *)(v27 + 24);
                        *(_OWORD *)(v27 + 32) = *(_OWORD *)&v42->fields.m_CachedPtr;
                        if ( v44 )
                        {
                          v45 = *(float *)(v44 + 80);
                          up = UnityEngine_Vector3__get_up(0LL);
                          y = up.fields.y;
                          z = up.fields.z;
                          up.fields.y = up.fields.x;
                          up.fields.z = y;
                          v48 = z;
                          *(UnityEngine_Quaternion_o *)&v49 = UnityEngine_Quaternion__AngleAxis(
                                                                -v45,
                                                                *(UnityEngine_Vector3_o *)&up.fields.y,
                                                                0LL);
                          if ( *v30 )
                          {
                            v53 = (UnityEngine_Quaternion_o *)(*v30)->fields.focusEarthPoint;
                            if ( v53 )
                            {
                              *(UnityEngine_Quaternion_o *)(v27 + 48) = UnityEngine_Quaternion__op_Multiply(
                                                                          *(UnityEngine_Quaternion_o *)&v49,
                                                                          v53[15],
                                                                          0LL);
                              *(_OWORD *)(v27 + 64) = *(_OWORD *)&v42->fields.areaQuestInfoList;
                              *(UnityEngine_Quaternion_o *)(v27 + 80) = UnityEngine_Quaternion__get_identity(0LL);
                              v54 = *(_QWORD *)(v27 + 24);
                              caldeaFolderInfoList = (int)v42->fields.caldeaFolderInfoList;
                              *(_QWORD *)(v27 + 96) = v42->fields.storyQuestInfoList;
                              *(_DWORD *)(v27 + 104) = caldeaFolderInfoList;
                              if ( v54 )
                              {
                                v56 = *(_DWORD *)(v54 + 156);
                                *(_QWORD *)(v27 + 108) = *(_QWORD *)(v54 + 148);
                                *(_DWORD *)(v27 + 116) = v56;
                                warSelectedQuestInfoDic_high = HIDWORD(v42->fields.warSelectedQuestInfoDic);
                                *(_QWORD *)(v27 + 120) = *(struct System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o **)((char *)&v42->fields.caldeaFolderInfoList + 4);
                                *(_DWORD *)(v27 + 128) = warSelectedQuestInfoDic_high;
                                v58 = *(_DWORD *)(v54 + 92);
                                *(_BYTE *)(v27 + 176) = 0;
                                *(_DWORD *)(v27 + 132) = v58;
                                *(_DWORD *)(v27 + 136) = v58;
                                *(_DWORD *)(v27 + 140) = v58;
                                v59 = *(UnityEngine_Object_o **)(v54 + 200);
                                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                }
                                mTerminalList = (ScrTerminalListTop_o *)UnityEngine_Object__op_Inequality(v59, 0LL, 0LL);
                                v62 = *v30;
                                if ( ((unsigned __int8)mTerminalList & 1) != 0 )
                                {
                                  if ( !v62 )
                                    goto LABEL_76;
                                  *(_QWORD *)(v27 + 144) = v62->fields.focusEarthPoint;
                                  v63 = (__int64 *)(v27 + 144);
                                }
                                else
                                {
                                  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                  }
                                  if ( !byte_42E4B23 )
                                  {
                                    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v29, v60, v61);
                                    byte_42E4B23 = 1;
                                  }
                                  mTerminalList = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
                                  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                    mTerminalList = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
                                  }
                                  if ( !v62 )
                                    goto LABEL_76;
                                  *(_QWORD *)(v27 + 144) = BlankEarth__GetEarthPoint(
                                                             v62,
                                                             *(_DWORD *)(*(_QWORD *)&mTerminalList->fields.boardGameTokenEffectId
                                                                       + 500LL),
                                                             0LL);
                                  v63 = (__int64 *)(v27 + 144);
                                }
                                sub_B5D560(v63);
                                v64 = *v63;
                                if ( *v63 )
                                {
                                  v65 = *(_QWORD *)(v64 + 136);
                                  v66 = *(_DWORD *)(v64 + 144);
                                  *(_QWORD *)(v27 + 152) = v65;
                                  *(_DWORD *)(v27 + 160) = v66;
                                  *(UnityEngine_Vector3_o *)(v27 + 164) = UnityEngine_Vector3__get_zero(0LL);
                                  v67 = *(EasingObject_o **)(v27 + 16);
                                  mSpdTime = this->fields.mSpdTime;
                                  v69 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v69,
                                    (Il2CppObject *)v27,
                                    Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__,
                                    0LL);
                                  v70 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v70,
                                    (Il2CppObject *)v27,
                                    Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__,
                                    0LL);
                                  v71 = *(_QWORD *)(v27 + 24);
                                  if ( v71 )
                                  {
                                    if ( v67 )
                                    {
                                      EasingObject__Play(v67, mSpdTime, v69, v70, 0.0, *(_DWORD *)(v71 + 180), 0LL);
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
    sub_B5D69C(mTerminalList, v29);
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
      sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
  __int64 v23; // x19
  UnityEngine_Component_o *blankEarth; // x0
  __int64 v25; // x1
  BlankEarth_o **v26; // x20
  float IntpTime_AutoResume; // s0
  float v28; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x8
  __int64 v31; // x8
  __int64 v32; // x8
  __int64 v33; // x8
  UnityEngine_GameObject_o *v34; // x0
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  TerminalPramsManager_c *v38; // x0
  __int64 v39; // x8
  int v40; // w10
  __int64 v41; // x9
  int v42; // w8
  float zoomInOffset; // s9
  float y; // s4
  float z; // s5
  float v46; // s3
  float v47; // s0
  float v48; // s1
  float v49; // s2
  float v50; // s3
  float v51; // s9
  float v52; // s10
  float v53; // s11
  float v54; // s12
  __int64 v55; // x8
  UnityEngine_Object_o *focusEarthPoint; // x21
  int v57; // w2
  __int64 v58; // x3
  BlankEarth_o *v59; // x20
  BlankEarthPoint_o *EarthPoint; // x1
  __int64 v61; // x8
  __int64 v62; // x9
  int v63; // w8
  EasingObject_o *v64; // x20
  System_Action_o *v65; // x21
  System_Action_o *v66; // x22
  __int64 v67; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v76; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_42E5E14 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, v14, v15, v16);
    sub_B5D5C4(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, v17, v18, v19);
    sub_B5D5C4(&BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo, v20, v21, v22);
    byte_42E5E14 = 1;
  }
  v23 = sub_B5D694(BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo);
  BlankEarth_StateZoomOut___c__DisplayClass0_0___ctor((BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_52;
  *(_QWORD *)(v23 + 24) = that;
  v26 = (BlankEarth_o **)(v23 + 24);
  sub_B5D560(v23 + 24);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__ResetBlankEarthSpotInfo(0LL);
  if ( !*v26 )
    goto LABEL_52;
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume((*v26)->fields.zoomOutSpdTime, 0LL);
  if ( !*v26 )
    goto LABEL_52;
  blankEarth = (UnityEngine_Component_o *)(*v26)->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_52;
  v28 = IntpTime_AutoResume;
  gameObject = UnityEngine_Component__get_gameObject(blankEarth, 0LL);
  *(_QWORD *)(v23 + 16) = GameObjectExtensions__SafeGetComponent_UIWidget_(
                            gameObject,
                            (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_B5D560(v23 + 16);
  v30 = *(_QWORD *)(v23 + 24);
  if ( !v30 )
    goto LABEL_52;
  blankEarth = *(UnityEngine_Component_o **)(v30 + 24);
  if ( !blankEarth )
    goto LABEL_52;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
  v31 = *(_QWORD *)(v23 + 24);
  *(UnityEngine_Quaternion_o *)(v23 + 48) = rotation;
  if ( !v31 )
    goto LABEL_52;
  blankEarth = *(UnityEngine_Component_o **)(v31 + 32);
  if ( !blankEarth )
    goto LABEL_52;
  blankEarth = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)blankEarth,
                                            0LL);
  if ( !blankEarth )
    goto LABEL_52;
  v73 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
  v32 = *(_QWORD *)(v23 + 24);
  *(UnityEngine_Quaternion_o *)(v23 + 80) = v73;
  if ( !v32 )
    goto LABEL_52;
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v32 + 32), 0LL);
  v33 = *(_QWORD *)(v23 + 24);
  *(UnityEngine_Vector3_o *)(v23 + 108) = LocalPosition;
  if ( !v33 )
    goto LABEL_52;
  blankEarth = *(UnityEngine_Component_o **)(v33 + 32);
  if ( !blankEarth )
    goto LABEL_52;
  v34 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)blankEarth, 0LL);
  *(UnityEngine_Vector3_o *)(v23 + 132) = GameObjectExtensions__GetLocalScale(v34, 0LL);
  if ( !byte_42E5ED9 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v35, v36, v37);
    byte_42E5ED9 = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  *(_QWORD *)(v23 + 184) = v38->static_fields->_BlankEarthTransformData_k__BackingField;
  sub_B5D560(v23 + 184);
  v39 = *(_QWORD *)(v23 + 184);
  if ( v39 )
  {
    *(_OWORD *)(v23 + 32) = *(_OWORD *)(v39 + 16);
    *(_OWORD *)(v23 + 64) = *(_OWORD *)(v39 + 32);
    v40 = *(_DWORD *)(v39 + 56);
    *(_QWORD *)(v23 + 96) = *(_QWORD *)(v39 + 48);
    *(_DWORD *)(v23 + 104) = v40;
    v41 = *(_QWORD *)(v39 + 60);
    v42 = *(_DWORD *)(v39 + 68);
    *(_QWORD *)(v23 + 120) = v41;
    *(_DWORD *)(v23 + 128) = v42;
  }
  else
  {
    if ( !*v26 )
      goto LABEL_52;
    zoomInOffset = (*v26)->fields.zoomInOffset;
    up = UnityEngine_Vector3__get_up(0LL);
    y = up.fields.y;
    z = up.fields.z;
    up.fields.y = up.fields.x;
    up.fields.z = y;
    v46 = z;
    *(UnityEngine_Quaternion_o *)&v47 = UnityEngine_Quaternion__AngleAxis(
                                          zoomInOffset,
                                          *(UnityEngine_Vector3_o *)&up.fields.y,
                                          0LL);
    if ( !*v26 )
      goto LABEL_52;
    blankEarth = (UnityEngine_Component_o *)(*v26)->fields.blankEarth;
    if ( !blankEarth )
      goto LABEL_52;
    v51 = v47;
    v52 = v48;
    v53 = v49;
    v54 = v50;
    v76 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
    v74.fields.x = v51;
    v74.fields.y = v52;
    v74.fields.z = v53;
    v74.fields.w = v54;
    v75 = UnityEngine_Quaternion__op_Multiply(v74, v76, 0LL);
    v55 = *(_QWORD *)(v23 + 24);
    *(float *)(v23 + 36) = v75.fields.y;
    *(float *)(v23 + 44) = v75.fields.w;
    *(_DWORD *)(v23 + 32) = 0;
    *(_DWORD *)(v23 + 40) = 0;
    if ( !v55 )
      goto LABEL_52;
    *(_OWORD *)(v23 + 64) = *(_OWORD *)(v55 + 248);
    zero = UnityEngine_Vector3__get_zero(0LL);
    blankEarth = *(UnityEngine_Component_o **)(v23 + 24);
    *(UnityEngine_Vector3_o *)(v23 + 96) = zero;
    if ( !blankEarth )
      goto LABEL_52;
    *(UnityEngine_Vector3_o *)(v23 + 120) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)blankEarth, 0LL);
  }
  if ( !*v26 )
    goto LABEL_52;
  focusEarthPoint = (UnityEngine_Object_o *)(*v26)->fields.focusEarthPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  blankEarth = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(focusEarthPoint, 0LL, 0LL);
  v59 = *v26;
  if ( ((unsigned __int8)blankEarth & 1) == 0 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B23 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v25, v57, v58);
      byte_42E4B23 = 1;
    }
    blankEarth = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      blankEarth = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
    }
    if ( v59 )
    {
      EarthPoint = BlankEarth__GetEarthPoint(
                     v59,
                     *(_DWORD *)(*(_QWORD *)&blankEarth[7].fields.m_CachedPtr + 500LL),
                     0LL);
      goto LABEL_48;
    }
LABEL_52:
    sub_B5D69C(blankEarth, v25);
  }
  if ( !v59 )
    goto LABEL_52;
  EarthPoint = v59->fields.focusEarthPoint;
LABEL_48:
  *(_QWORD *)(v23 + 144) = EarthPoint;
  sub_B5D560(v23 + 144);
  v71 = UnityEngine_Vector3__get_zero(0LL);
  v61 = *(_QWORD *)(v23 + 144);
  *(UnityEngine_Vector3_o *)(v23 + 164) = v71;
  if ( !v61 )
    goto LABEL_52;
  v62 = *(_QWORD *)(v61 + 136);
  v63 = *(_DWORD *)(v61 + 144);
  *(_BYTE *)(v23 + 176) = 0;
  *(_QWORD *)(v23 + 152) = v62;
  *(_DWORD *)(v23 + 160) = v63;
  v64 = *(EasingObject_o **)(v23 + 16);
  v65 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v65, (Il2CppObject *)v23, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, 0LL);
  v66 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v66, (Il2CppObject *)v23, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, 0LL);
  v67 = *(_QWORD *)(v23 + 24);
  if ( !v67 || !v64 )
    goto LABEL_52;
  EasingObject__Play_33961128(v64, 1.0, 0.0, v28, v65, v66, 0.0, *(_DWORD *)(v67 + 184), 0LL);
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
      sub_B5D69C(this, method);
    }
  }
}


void __fastcall BlankEarth_StateZoomOut___c__DisplayClass0_0___begin_b__1(
        BlankEarth_StateZoomOut___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BlankEarth_StateZoomOut___c__DisplayClass0_0_o *v4; // x19
  struct BlankEarthTransform_o *blankEarthTransform; // x9
  struct BlankEarth_o *that; // x8
  float totalAngle; // s0
  struct BlankEarth_o *v8; // x8
  struct BlankEarth_o *v9; // x8
  struct BlankEarth_o *v10; // x8
  struct BlankEarth_o *v11; // x8
  struct BlankEarth_o *v12; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct BlankEarth_o *v14; // x8

  v4 = this;
  if ( (byte_42E602F & 1) == 0 )
  {
    this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)sub_B5D5C4(&StringLiteral_19293/*"gevINFOBAR_BACK"*/, (_DWORD)method, v2, v3);
    byte_42E602F = 1;
  }
  blankEarthTransform = v4->fields.blankEarthTransform;
  that = v4->fields.that;
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
  v8 = v4->fields.that;
  if ( !v8 )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v8->fields.blankEarth;
  if ( !this )
    goto LABEL_28;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v4->fields.qua_to, 0LL);
  v9 = v4->fields.that;
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
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v4->fields.root_qua_to, 0LL);
  v10 = v4->fields.that;
  if ( !v10 )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v10->fields.earthRoot;
  if ( !this )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.root_pos_to, 0LL);
  v11 = v4->fields.that;
  if ( !v11 )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v11->fields.earthRoot;
  if ( !this )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v4->fields.root_scl_to, 0LL);
  v12 = v4->fields.that;
  if ( !v12 )
    goto LABEL_28;
  mTerminalList = v12->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)mTerminalList->fields.mActionBgColl;
  if ( !this )
    goto LABEL_28;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL), (v14 = v4->fields.that) == 0LL)
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v14->fields.mTerminalList) == 0LL
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)ScrTerminalListTop__mfGetMyFsmP(
                                                                   (ScrTerminalListTop_o *)this,
                                                                   0LL)) == 0LL
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL)) == 0LL
    || (HutongGames_PlayMaker_Fsm__Event_14925220(
          (HutongGames_PlayMaker_Fsm_o *)this,
          (System_String_o *)StringLiteral_19293/*"gevINFOBAR_BACK"*/,
          0LL),
        (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v4->fields.that) == 0LL) )
  {
LABEL_28:
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  BlankEarth__CoCheckTutorial_d__91_o *v4; // x19
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
  int32_t _1__state; // w8
  BlankEarth_o *_4__this; // x20
  Il2CppObject *v22; // x21
  float time_5__2; // s0
  bool v24; // w21
  float v25; // s8
  Il2CppObject **p__2__current; // x19
  EventTutorialMaster_EventTutorialArgs_o *v27; // x21
  Il2CppObject *_8__1; // x22
  System_Action_o *v29; // x23

  v4 = this;
  if ( (byte_42E5E0D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BlankEarth___c__DisplayClass91_0__CoCheckTutorial_g__OnFinish_0__, v14, v15, v16);
    this = (BlankEarth__CoCheckTutorial_d__91_o *)sub_B5D5C4(&BlankEarth___c__DisplayClass91_0_TypeInfo, v17, v18, v19);
    byte_42E5E0D = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    time_5__2 = v4->fields._time_5__2;
    v4->fields.__1__state = -1;
    if ( time_5__2 > 5.0 )
      goto LABEL_12;
    if ( !_4__this )
      goto LABEL_21;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v22 = (Il2CppObject *)sub_B5D694(BlankEarth___c__DisplayClass91_0_TypeInfo);
    System_Object___ctor(v22, 0LL);
    v4->fields.__8__1 = (struct BlankEarth___c__DisplayClass91_0_o *)v22;
    sub_B5D560(&v4->fields.__8__1);
    this = (BlankEarth__CoCheckTutorial_d__91_o *)v4->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    *(_QWORD *)&this->fields.__1__state = v4->fields.finishCallback;
    sub_B5D560(&this->fields);
    v4->fields._time_5__2 = 0.0;
    if ( !_4__this )
      goto LABEL_21;
  }
  v24 = 1;
  if ( BlankEarth__IsJustState(_4__this, 1, 0LL) )
  {
    v25 = v4->fields._time_5__2;
    v4->fields._time_5__2 = v25 + UnityEngine_Time__get_deltaTime(0LL);
    v4->fields.__2__current = 0LL;
    p__2__current = &v4->fields.__2__current;
    sub_B5D560(p__2__current);
    *((_DWORD *)p__2__current - 2) = 1;
    return v24;
  }
LABEL_12:
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  this = (BlankEarth__CoCheckTutorial_d__91_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0LL);
  v27 = (EventTutorialMaster_EventTutorialArgs_o *)sub_B5D694(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_21;
  v27->fields.openKind = 83;
  _8__1 = (Il2CppObject *)v4->fields.__8__1;
  v29 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v29, _8__1, Method_BlankEarth___c__DisplayClass91_0__CoCheckTutorial_g__OnFinish_0__, 0LL);
  v27->fields.callbackAfter = v29;
  sub_B5D560(&v27->fields.callbackAfter);
  v27->fields.adapter = v4->fields.adapter;
  sub_B5D560(&v27->fields.adapter);
  this = (BlankEarth__CoCheckTutorial_d__91_o *)EventTutorialMaster__CoroutineCheckTutorial(v27, 0LL);
  if ( !_4__this )
LABEL_21:
    sub_B5D69C(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088(
    (UnityEngine_MonoBehaviour_o *)_4__this,
    (System_Collections_IEnumerator_o *)this,
    0LL);
  v24 = 0;
  _4__this->fields.isTutorialAvailable = 0;
  return v24;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BlankEarth__CoCheckTutorial_d__91_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
      sub_B5D69C(_4__this, method);
  }
  if ( BlankEarth__IsJustState(_4__this, this->fields.state, 0LL) )
  {
    time_5__2 = this->fields._time_5__2;
    this->fields._time_5__2 = time_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BlankEarth__CoStandByChangeState_d__93_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BlankEarth___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E0B & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarth___c_TypeInfo, v1, v2, v3);
    byte_42E5E0B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BlankEarth___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BlankEarth___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarth___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E5E0C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5, v6, v7);
    byte_42E5E0C = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  MissionNotifyManager__EndPause(v8, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}