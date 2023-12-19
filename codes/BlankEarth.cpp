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

  if ( (byte_40F90D3 & 1) == 0 )
  {
    sub_B16FFC(&BlankEarth_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16798, v8);
    byte_40F90D3 = 1;
  }
  static_fields = BlankEarth_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SOUTH_POLE_ROTATE.fields.x = 0x4292000041F80000LL;
  static_fields->SOUTH_POLE_ROTATE.fields.z = 60.0;
  v10 = BlankEarth_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_16798;
  v10->BLANK_EARTH_ROTATE_KEY = (struct System_String_o *)StringLiteral_16798;
  sub_B16F98((BattleServantConfConponent_o *)&v10->BLANK_EARTH_ROTATE_KEY, v11, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_40F90D2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16377, method);
    byte_40F90D2 = 1;
  }
  *(_QWORD *)&this->fields.startupFadeTime = 0x3E0000003F000000LL;
  *(_OWORD *)&this->fields.greenwichOffset = xmmword_3134E70;
  *(_OWORD *)&this->fields.zoomOutSpdTime = xmmword_3134E80;
  *(_OWORD *)&this->fields.earthRadius = xmmword_3134E90;
  v9 = (System_Int32_array **)StringLiteral_16377;
  this->fields.startupSeName = (struct System_String_o *)StringLiteral_16377;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.startupSeName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.zoomInEasingType = 0x300000003LL;
  this->fields.firstAnimTime = 3.0;
  *(_OWORD *)&this->fields.firstFadeTime = xmmword_3134EA0;
  *(_QWORD *)&this->fields.earthBtnMoveSpeedTime = 0x406000003E800000LL;
  *(_OWORD *)&this->fields.zoomInPos.fields.z = xmmword_3134EB0;
  this->fields.startupEasingType = 2;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarth__Awake(BlankEarth_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct CStateManager_BlankEarth__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct CStateManager_BlankEarth__o *mFSM; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  BlankEarth_StateNone_o *v29; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  BlankEarth_StateStartup_o *v35; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  BlankEarth_StateMain_o *v41; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  BlankEarth_StateZoomIn_o *v47; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  BlankEarth_StateZoomOut_o *v53; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v54; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  BlankEarth_StateQAARotate_o *v59; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v60; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  BlankEarth_StateShortcutRotate_o *v65; // x21
  const MethodInfo *v66; // x2
  UnityEngine_GameObject_o *earthRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  BlankEarthSpotAnimStateManager_o *v73; // x20
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7

  if ( (byte_40F90BB & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthSpotAnimStateManager_TypeInfo, method);
    sub_B16FFC(&Method_CStateManager_BlankEarth___ctor__, v6);
    sub_B16FFC(&Method_CStateManager_BlankEarth__add__, v7);
    sub_B16FFC(&CStateManager_BlankEarth__TypeInfo, v8);
    sub_B16FFC(&BlankEarth_StateMain_TypeInfo, v9);
    sub_B16FFC(&BlankEarth_StateNone_TypeInfo, v10);
    sub_B16FFC(&BlankEarth_StateQAARotate_TypeInfo, v11);
    sub_B16FFC(&BlankEarth_StateShortcutRotate_TypeInfo, v12);
    sub_B16FFC(&BlankEarth_StateStartup_TypeInfo, v13);
    sub_B16FFC(&BlankEarth_StateZoomIn_TypeInfo, v14);
    sub_B16FFC(&BlankEarth_StateZoomOut_TypeInfo, v15);
    byte_40F90BB = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_BlankEarth__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v17,
      (QAASpotStateController_IMapSpot_o *)this,
      7,
      (const MethodInfo_2907EF0 *)Method_CStateManager_BlankEarth___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarth__o *)v17;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    mFSM = this->fields.mFSM;
    v29 = (BlankEarth_StateNone_o *)sub_B170CC(BlankEarth_StateNone_TypeInfo, v25, v26, v27, v28);
    BlankEarth_StateNone___ctor(v29, 0LL);
    if ( !mFSM )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v29,
      (const MethodInfo_2907FBC *)Method_CStateManager_BlankEarth__add__);
    v30 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v35 = (BlankEarth_StateStartup_o *)sub_B170CC(BlankEarth_StateStartup_TypeInfo, v31, v32, v33, v34);
    BlankEarth_StateStartup___ctor(v35, 0LL);
    if ( !v30 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v30,
      1,
      (IState_T__o *)v35,
      (const MethodInfo_2907FBC *)Method_CStateManager_BlankEarth__add__);
    v36 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v41 = (BlankEarth_StateMain_o *)sub_B170CC(BlankEarth_StateMain_TypeInfo, v37, v38, v39, v40);
    BlankEarth_StateMain___ctor(v41, 0LL);
    if ( !v36 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v36,
      2,
      (IState_T__o *)v41,
      (const MethodInfo_2907FBC *)Method_CStateManager_BlankEarth__add__);
    v42 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v47 = (BlankEarth_StateZoomIn_o *)sub_B170CC(BlankEarth_StateZoomIn_TypeInfo, v43, v44, v45, v46);
    BlankEarth_StateZoomIn___ctor(v47, 0LL);
    if ( !v42 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v42,
      3,
      (IState_T__o *)v47,
      (const MethodInfo_2907FBC *)Method_CStateManager_BlankEarth__add__);
    v48 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v53 = (BlankEarth_StateZoomOut_o *)sub_B170CC(BlankEarth_StateZoomOut_TypeInfo, v49, v50, v51, v52);
    BlankEarth_StateZoomOut___ctor(v53, 0LL);
    if ( !v48 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v48,
      4,
      (IState_T__o *)v53,
      (const MethodInfo_2907FBC *)Method_CStateManager_BlankEarth__add__);
    v54 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v59 = (BlankEarth_StateQAARotate_o *)sub_B170CC(BlankEarth_StateQAARotate_TypeInfo, v55, v56, v57, v58);
    BlankEarth_StateQAARotate___ctor(v59, 0LL);
    if ( !v54
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v54,
            5,
            (IState_T__o *)v59,
            (const MethodInfo_2907FBC *)Method_CStateManager_BlankEarth__add__),
          v60 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v65 = (BlankEarth_StateShortcutRotate_o *)sub_B170CC(
                                                      BlankEarth_StateShortcutRotate_TypeInfo,
                                                      v61,
                                                      v62,
                                                      v63,
                                                      v64),
          BlankEarth_StateShortcutRotate___ctor(v65, 0LL),
          !v60) )
    {
LABEL_15:
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v60,
      6,
      (IState_T__o *)v65,
      (const MethodInfo_2907FBC *)Method_CStateManager_BlankEarth__add__);
    BlankEarth__SetState(this, 0, v66);
  }
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !transform )
    goto LABEL_15;
  this->fields.mRootQua = UnityEngine_Transform__get_localRotation(transform, 0LL);
  v73 = (BlankEarthSpotAnimStateManager_o *)sub_B170CC(BlankEarthSpotAnimStateManager_TypeInfo, v69, v70, v71, v72);
  BlankEarthSpotAnimStateManager___ctor(v73, 0LL);
  this->fields._SpotAnimStateManager_k__BackingField = v73;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._SpotAnimStateManager_k__BackingField,
    (System_Int32_array **)v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__BlunkEarthMainOperation(
        BlankEarth_o *this,
        BlankEarth_o *that,
        float *inertialSpeedX,
        float *inertialSpeedY,
        const MethodInfo *method)
{
  float btnSpeedRate; // s0
  float *v10; // x8
  __int64 v11; // x1
  CTouch_c *v12; // x0
  float x; // s9
  float v14; // s0
  CTouch_c *v15; // x0
  float y; // s9
  float v17; // s0
  float v18; // s10
  float v19; // s0
  float v20; // s9
  float v21; // s0
  float totalAngle; // s0
  float maxAngle; // s2
  float v24; // s1
  float v25; // s1
  float v26; // s2
  float v27; // s0
  UnityEngine_Component_o *blankEarth; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v30; // x22
  UnityEngine_Transform_o *v31; // x0
  float v32; // s8
  float v33; // s9
  float z; // s10
  float v35; // s0
  float v36; // s1
  float v37; // s2
  UnityEngine_Transform_o *v38; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40F90BF & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, that);
    byte_40F90BF = 1;
  }
  if ( !that )
LABEL_65:
    sub_B170D4();
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
      if ( !byte_40F8BA0 )
      {
        sub_B16FFC(&CTouch_TypeInfo, v11);
        byte_40F8BA0 = 1;
      }
      v12 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v12 = CTouch_TypeInfo;
      }
      x = v12->static_fields->mScrPosDelta.fields.x;
      if ( !byte_40F8BA1 )
      {
        sub_B16FFC(&CTouch_TypeInfo, v11);
        v12 = CTouch_TypeInfo;
        byte_40F8BA1 = 1;
      }
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = CTouch_TypeInfo;
      }
      v14 = v12->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v14) )
        v14 = x;
      *inertialSpeedX = v14 * -0.2;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_40F8BA0 )
      {
        sub_B16FFC(&CTouch_TypeInfo, v11);
        byte_40F8BA0 = 1;
      }
      v15 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v15 = CTouch_TypeInfo;
      }
      y = v15->static_fields->mScrPosDelta.fields.y;
      if ( !byte_40F8BA1 )
      {
        sub_B16FFC(&CTouch_TypeInfo, v11);
        v15 = CTouch_TypeInfo;
        byte_40F8BA1 = 1;
      }
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = CTouch_TypeInfo;
      }
      v17 = v15->static_fields->mScrPosDeltaOld.fields.y;
      if ( fabsf(y) >= fabsf(v17) )
        v17 = y;
      *inertialSpeedY = v17 * -0.2;
    }
  }
  else if ( !UnityEngine_Mathf__Approximately(*inertialSpeedX, 0.0, 0LL)
         || !UnityEngine_Mathf__Approximately(*inertialSpeedY, 0.0, 0LL) )
  {
    v18 = *inertialSpeedX;
    v19 = v18 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
    if ( fabsf(v19) < 0.004 )
      v19 = 0.0;
    *inertialSpeedX = v19;
    v20 = *inertialSpeedY;
    v21 = v20 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
    *inertialSpeedY = v21;
    if ( fabsf(v21) < 0.004 )
      *inertialSpeedY = 0.0;
  }
  totalAngle = this->fields.totalAngle;
  maxAngle = this->fields.maxAngle;
  v24 = totalAngle + *inertialSpeedY;
  if ( maxAngle < v24 )
  {
    v25 = maxAngle - totalAngle;
    *inertialSpeedY = maxAngle - totalAngle;
    totalAngle = this->fields.totalAngle;
    maxAngle = this->fields.maxAngle;
    v24 = totalAngle + v25;
  }
  v26 = -maxAngle;
  if ( v24 < v26 )
  {
    v27 = v26 - totalAngle;
    *inertialSpeedY = v27;
    v24 = this->fields.totalAngle + v27;
  }
  this->fields.totalAngle = v24;
  blankEarth = (UnityEngine_Component_o *)that->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_65;
  transform = UnityEngine_Component__get_transform(blankEarth, 0LL);
  if ( !that->fields.blankEarth )
    goto LABEL_65;
  v30 = transform;
  v31 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)that->fields.blankEarth, 0LL);
  if ( !v31 )
    goto LABEL_65;
  position = UnityEngine_Transform__get_position(v31, 0LL);
  v32 = position.fields.x;
  v33 = position.fields.y;
  z = position.fields.z;
  *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_right(0LL);
  if ( !v30 )
    goto LABEL_65;
  v42.fields.x = v35;
  v42.fields.y = v36;
  v42.fields.z = v37;
  v40.fields.x = v32;
  v40.fields.y = v33;
  v40.fields.z = z;
  UnityEngine_Transform__RotateAround(v30, v40, v42, -*inertialSpeedY, 0LL);
  v38 = that->fields.blankEarth;
  if ( !v38 )
    goto LABEL_65;
  v41.fields.y = *inertialSpeedX;
  v41.fields.x = 0.0;
  v41.fields.z = 0.0;
  UnityEngine_Transform__Rotate_34931420(v38, v41, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
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
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F90C0 & 1) == 0 )
  {
    sub_B16FFC(&BlankEarth__CoCheckTutorial_d__84_TypeInfo, adapter);
    byte_40F90C0 = 1;
  }
  v8 = sub_B170CC(BlankEarth__CoCheckTutorial_d__84_TypeInfo, adapter, finishCallback, method, v4);
  BlankEarth__CoCheckTutorial_d__84___ctor((BlankEarth__CoCheckTutorial_d__84_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 56) = adapter;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 56), (System_Int32_array **)adapter, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 32) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 32),
    (System_Int32_array **)finishCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  return (System_Collections_IEnumerator_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BlankEarth__CoStandByChangeState(
        BlankEarth_o *this,
        int32_t state,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F90C1 & 1) == 0 )
  {
    sub_B16FFC(&BlankEarth__CoStandByChangeState_d__86_TypeInfo, *(_QWORD *)&state);
    byte_40F90C1 = 1;
  }
  v8 = sub_B170CC(BlankEarth__CoStandByChangeState_d__86_TypeInfo, *(_QWORD *)&state, finishCallback, method, v4);
  BlankEarth__CoStandByChangeState_d__86___ctor((BlankEarth__CoStandByChangeState_d__86_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 40) = state;
  *(_QWORD *)(v8 + 48) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 48),
    (System_Int32_array **)finishCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v8;
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
  v22 = UnityEngine_Quaternion__LookRotation_34840476(normalized, 0LL);
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  UnityEngine_GameObject_o *v32; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v34; // x22
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  UnityEngine_Transform_o *v38; // x22
  int v39; // s0
  BlankEarthPoint_o *Component_srcLineSprite; // x0
  const MethodInfo *v43; // x4
  BlankEarthPoint_o *v44; // x21
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F90C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___, spotObj);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_2814, v20);
    byte_40F90C7 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, spotObj);
    byte_40F6042 = 1;
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
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mTerminalList,
    (System_Int32_array **)mTerminalList,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v32 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)spotObj,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_27425860(v32, this->fields.earthSpotRoot, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v32, one, 0LL);
  if ( !v32 )
    goto LABEL_22;
  transform = UnityEngine_GameObject__get_transform(v32, 0LL);
  if ( !spotEnt )
    goto LABEL_22;
  v34 = (UnityEngine_Object_o *)transform;
  v35 = System_Int32__ToString((int)spotEnt + 16, 0LL);
  v36 = System_String__Concat_43743732((System_String_o *)StringLiteral_2814, v35, 0LL);
  if ( !v34
    || (UnityEngine_Object__set_name(v34, v36, 0LL),
        GameObjectExtensions__SetLocalPosition_27420076(v32, x, y, z, 0LL),
        v37 = UnityEngine_GameObject__get_transform(v32, 0LL),
        !this->fields.blankEarth)
    || (v38 = v37,
        *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_position(this->fields.blankEarth, 0LL),
        !v38)
    || (UnityEngine_Transform__LookAt_34932516(v38, *(UnityEngine_Vector3_o *)&v39, 0LL),
        (Component_srcLineSprite = (BlankEarthPoint_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v32,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___)) == 0LL) )
  {
LABEL_22:
    sub_B170D4();
  }
  v44 = Component_srcLineSprite;
  BlankEarthPoint__SetEarthObj(Component_srcLineSprite, spotEnt, this, this->fields.mEarthCamera, v43);
  return v44;
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
    sub_B16F98(
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
  int v5; // s0
  UnityEngine_Transform_o *blankEarth; // x0
  const MethodInfo *v10; // x1

  if ( spotEnt )
  {
    *(UnityEngine_Quaternion_o *)&v5 = BlankEarth__ConvertLatLongToSafePointQuaternion(
                                         this,
                                         *(UnityEngine_Vector2_o *)&spotEnt->fields.x,
                                         (const MethodInfo *)spotEnt);
    blankEarth = this->fields.blankEarth;
    if ( !blankEarth )
      sub_B170D4();
    UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v5, 0LL);
    this->fields.totalAngle = UnityEngine_Mathf__Clamp(
                                spotEnt->fields.x,
                                -this->fields.maxAngle,
                                this->fields.maxAngle,
                                0LL);
    BlankEarth__SaveEarthRotate(this, v10);
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
  UnityEngine_GameObject_o *earthSpotRoot; // x0
  UnityEngine_Transform_o *transform; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  UnityEngine_Object_o *v10; // x19
  bool v11; // w8
  BlankEarthPoint_o *result; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = spotId;
  if ( (byte_40F90C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___, *(_QWORD *)&spotId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_2814, v5);
    byte_40F90C3 = 1;
  }
  earthSpotRoot = this->fields.earthSpotRoot;
  if ( !earthSpotRoot )
    goto LABEL_13;
  transform = UnityEngine_GameObject__get_transform(earthSpotRoot, 0LL);
  v8 = System_Int32__ToString((int32_t)&v14, 0LL);
  v9 = System_String__Concat_43743732((System_String_o *)StringLiteral_2814, v8, 0LL);
  if ( !transform )
    goto LABEL_13;
  v10 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, v9, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  result = 0LL;
  if ( v11 )
  {
    if ( v10 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
      if ( gameObject )
        return (BlankEarthPoint_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      gameObject,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    }
LABEL_13:
    sub_B170D4();
  }
  return result;
}


float __fastcall BlankEarth__GetSafeLatitude(BlankEarth_o *this, float latitudeDegree, const MethodInfo *method)
{
  return UnityEngine_Mathf__Clamp(latitudeDegree, -this->fields.maxAngle, this->fields.maxAngle, 0LL);
}


System_String_o *__fastcall BlankEarth__GetSpotPrefabName(BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F90C6 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_5787, v3);
    byte_40F90C6 = 1;
  }
  if ( !spot )
    sub_B170D4();
  objectId = spot->fields.objectId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_5787, v4, 0LL);
}


int32_t __fastcall BlankEarth__GetState(BlankEarth_o *this, const MethodInfo *method)
{
  struct CStateManager_BlankEarth__o *mFSM; // x8

  if ( (byte_40F90BD & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_BlankEarth__getState__, method);
    byte_40F90BD = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
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
  System_String_o *String_34837456; // x21
  __int64 v6; // x2
  System_Char_array *v7; // x0
  __int64 v8; // x2
  System_Char_array *v9; // x1
  System_String_array *v10; // x20
  float v11; // s0
  float v12; // s8
  float v13; // s0
  float v14; // s9
  float v15; // s2
  BlankEarth_c *v16; // x0
  float *p_x; // x8
  float v18; // s0
  float v19; // s1
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s3
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F90C2 & 1) == 0 )
  {
    sub_B16FFC(&BlankEarth_TypeInfo, method);
    sub_B16FFC(&char___TypeInfo, v3);
    byte_40F90C2 = 1;
  }
  v4 = BlankEarth_TypeInfo;
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v4 = BlankEarth_TypeInfo;
  }
  String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456(v4->static_fields->BLANK_EARTH_ROTATE_KEY, 0LL);
  v7 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v6);
  if ( !v7 )
    goto LABEL_21;
  v9 = v7;
  if ( !v7->max_length )
    goto LABEL_22;
  v7->m_Items[2] = 44;
  if ( !String_34837456 )
    goto LABEL_21;
  v10 = System_String__Split(String_34837456, v7, 0LL);
  if ( System_String__IsNullOrEmpty(String_34837456, 0LL) )
    goto LABEL_16;
  if ( !v10 )
LABEL_21:
    sub_B170D4();
  if ( v10->max_length == 4 )
  {
    this->fields.totalAngle = System_Single__Parse(v10->m_Items[3], 0LL);
    if ( v10->max_length )
    {
      v11 = System_Single__Parse(v10->m_Items[0], 0LL);
      if ( v10->max_length > 1 )
      {
        v12 = v11;
        v13 = System_Single__Parse(v10->m_Items[1], 0LL);
        if ( v10->max_length > 2 )
        {
          v14 = v13;
          v15 = System_Single__Parse(v10->m_Items[2], 0LL);
          goto LABEL_20;
        }
      }
    }
LABEL_22:
    sub_B17100(v7, v9, v8);
    sub_B170A0();
  }
LABEL_16:
  this->fields.totalAngle = -this->fields.maxAngle;
  v16 = BlankEarth_TypeInfo;
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v16 = BlankEarth_TypeInfo;
  }
  p_x = &v16->static_fields->SOUTH_POLE_ROTATE.fields.x;
  v12 = *p_x;
  v14 = p_x[1];
  v15 = p_x[2];
LABEL_20:
  v18 = v12;
  v19 = v14;
  *(UnityEngine_Quaternion_o *)&v20 = UnityEngine_Quaternion__Euler_34841604(*(UnityEngine_Vector3_o *)(&v15 - 2), 0LL);
  result.fields.w = v23;
  result.fields.z = v22;
  result.fields.y = v21;
  result.fields.x = v20;
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

  if ( (byte_40F90CF & 1) == 0 )
  {
    sub_B16FFC(&Method_BlankEarth_OnPressRotateBtnX__, isLeft);
    byte_40F90CF = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnX__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnX__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B17004(Method_BlankEarth_OnPressRotateBtnX__);
  v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  this->fields.isLeft = isLeft;
  this->fields.isBtnTouchX = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__OnPressRotateBtnY(BlankEarth_o *this, bool isUp, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_40F90D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BlankEarth_OnPressRotateBtnY__, isUp);
    byte_40F90D0 = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnY__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnY__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B17004(Method_BlankEarth_OnPressRotateBtnY__);
  v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
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
  BlankEarthPoint_o *EarthPoint; // x22
  const MethodInfo *v11; // x4

  EarthPoint = (BlankEarthPoint_o *)spot;
  if ( (byte_40F90CD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, spot);
    byte_40F90CD = 1;
  }
  if ( EarthPoint )
    EarthPoint = BlankEarth__GetEarthPoint(this, EarthPoint->fields.m_CachedPtr, *(const MethodInfo **)&animIndex);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EarthPoint, 0LL, 0LL) )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !EarthPoint )
      sub_B170D4();
    BlankEarthPoint__PlaySpotUniqueAnim(EarthPoint, animIndex, isQuick, finishCallback, v11);
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
  System_Collections_Generic_IEnumerable_TSource__o *All; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v17; // x21
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x0

  if ( (byte_40F90C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_BlankEarthPoint___, *(_QWORD *)&beforeClearQuestId);
    sub_B16FFC(&Method_BlankEarth_PutSpot__, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___, v8);
    sub_B16FFC(&Method_System_Func_BlankEarthSpotEntity__BlankEarthPoint___ctor__, v9);
    sub_B16FFC(&System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo, v10);
    byte_40F90C4 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BlankEarthSpotMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  All = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__GetAll(
                                                               Master_WarQuestSelectionMaster,
                                                               0LL);
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                          System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo,
                                                                                          v13,
                                                                                          v14,
                                                                                          v15,
                                                                                          v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v17,
    (Il2CppObject *)this,
    Method_BlankEarth_PutSpot__,
    (const MethodInfo_2B6C28C *)Method_System_Func_BlankEarthSpotEntity__BlankEarthPoint___ctor__);
  v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                         All,
                                                         (System_Func_TSource__TResult__o *)v17,
                                                         (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
  v19 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v18,
          (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
  System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_TSource__o *)v19,
    (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
}


BlankEarthPoint_o *__fastcall BlankEarth__PutSpot(
        BlankEarth_o *this,
        BlankEarthSpotEntity_o *spot,
        const MethodInfo *method)
{
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
  AssetManager_o *Instance; // x21
  const MethodInfo *v20; // x1
  AssetData_o *Asset_29970360; // x21
  System_String_o *SpotPrefabName; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x21
  const MethodInfo *v24; // x3

  if ( (byte_40F90C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, spot);
    sub_B16FFC(&BlankEarth_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&ScrTerminalListTop_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    byte_40F90C5 = 1;
  }
  if ( !spot )
    goto LABEL_18;
  v9 = spot->fields.x * 0.017453;
  v10 = (float)(spot->fields.y + this->fields.greenwichOffset) * 0.017453;
  v11 = cosf(v9);
  earthRadius = this->fields.earthRadius;
  v13 = v11;
  v14 = cosf(v10);
  v15 = sinf(v9);
  v16 = this->fields.earthRadius;
  v17 = v15;
  v18 = sinf(v10);
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !Instance )
    goto LABEL_18;
  Asset_29970360 = AssetManager__GetAsset_29970360(
                     Instance,
                     ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH,
                     0LL);
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
  SpotPrefabName = BlankEarth__GetSpotPrefabName(spot, v20);
  if ( !Asset_29970360 )
LABEL_18:
    sub_B170D4();
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 Asset_29970360,
                                                                 SpotPrefabName,
                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    return 0LL;
  else
    return BlankEarth__CreateSpot(
             this,
             Object_WarBoardWaitTimeSetting,
             spot,
             v14 * (float)(v13 * earthRadius),
             v17 * v16,
             (float)(v13 * earthRadius) * v18,
             v24);
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
  BlankEarthPoint_o *EarthPoint; // x22
  const MethodInfo *v11; // x4

  EarthPoint = (BlankEarthPoint_o *)spot;
  if ( (byte_40F90CC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, spot);
    byte_40F90CC = 1;
  }
  if ( EarthPoint )
    EarthPoint = BlankEarth__GetEarthPoint(this, EarthPoint->fields.m_CachedPtr, *(const MethodInfo **)&dispType);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EarthPoint, 0LL, 0LL) )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !EarthPoint )
      sub_B170D4();
    BlankEarthPoint__RevealOrConcealSpotAnim(EarthPoint, dispType, isQuick, finishCallback, v11);
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
  const MethodInfo *v30; // x2
  int32_t v31; // w1
  UnityEngine_Vector2_o v32; // 0:s1.4,4:s2.4

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  if ( (byte_40F90CB & 1) == 0 )
  {
    sub_B16FFC(&BlankEarth_QAARotateEarthParam_TypeInfo, *(_QWORD *)&easeType);
    byte_40F90CB = 1;
  }
  v16 = (BlankEarth_QAARotateEarthParam_o *)sub_B170CC(
                                              BlankEarth_QAARotateEarthParam_TypeInfo,
                                              *(_QWORD *)&easeType,
                                              isShortcut,
                                              finishCallback,
                                              rotateTimeCalculateParam);
  v32.fields.x = x;
  v32.fields.y = y;
  v17 = v16;
  BlankEarth_QAARotateEarthParam___ctor(v16, time, v32, easeType, finishCallback, 0LL);
  this->fields.qaaRotateEarthParam = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.qaaRotateEarthParam,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.rotateEarthTimeCalculateParam = rotateTimeCalculateParam;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rotateEarthTimeCalculateParam,
    (System_Int32_array **)rotateTimeCalculateParam,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !this )
    sub_B170D4();
  if ( isShortcut )
    v31 = 6;
  else
    v31 = 5;
  BlankEarth__SetState(this, v31, v30);
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
  __int64 v15; // x1
  BlankEarth_QAARotateEarthResponse_o *v16; // x20

  if ( (byte_40F90CA & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___, blankEarthSpotEntity);
    sub_B16FFC(&BlankEarth_QAARotateEarthResponse_TypeInfo, v15);
    byte_40F90CA = 1;
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
    v16 = (BlankEarth_QAARotateEarthResponse_o *)sub_B170CC(
                                                   BlankEarth_QAARotateEarthResponse_TypeInfo,
                                                   blankEarthSpotEntity,
                                                   *(_QWORD *)&easeType,
                                                   isShortcut,
                                                   finishCallback);
    BlankEarth_QAARotateEarthResponse___ctor(v16, 1, 0LL);
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      (System_Action_T__o *)finishCallback,
      v16,
      (const MethodInfo_2D39F2C *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
    sub_B170D4();
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
  __int64 v6; // x2
  BlankEarth_c *v7; // x0
  System_String_o *BLANK_EARTH_ROTATE_KEY; // x19
  System_String_array *v9; // x20
  float v10; // s0
  System_String_o *v11; // x0
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x21
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  float v25; // s0
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x21
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  float v37; // s0
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x21
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  float v49; // s0
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x21
  System_String_o *v56; // x0
  UnityEngine_Vector3_o eulerAngles; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF

  methoda.methodPointer = *(Il2CppMethodPointer *)&qua.fields.x;
  methoda.invoker_method = *(void **)&qua.fields.z;
  *((float *)&methoda.klass + 1) = totalAngle;
  if ( (byte_40F90C9 & 1) == 0 )
  {
    sub_B16FFC(&BlankEarth_TypeInfo, method);
    sub_B16FFC(&string___TypeInfo, v4);
    sub_B16FFC(&StringLiteral_698, v5);
    byte_40F90C9 = 1;
  }
  eulerAngles = UnityEngine_Quaternion__get_eulerAngles(qua, &methoda);
  v7 = BlankEarth_TypeInfo;
  if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v7 = BlankEarth_TypeInfo;
  }
  BLANK_EARTH_ROTATE_KEY = v7->static_fields->BLANK_EARTH_ROTATE_KEY;
  v9 = (System_String_array *)sub_B17014(string___TypeInfo, 7LL, v6);
  v11 = System_Single__ToString(v10, (const MethodInfo *)&eulerAngles);
  if ( !v9 )
    sub_B170D4();
  v19 = (System_Int32_array **)v11;
  if ( v11 )
  {
    v11 = (System_String_o *)sub_B170BC(v11, v9->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_36;
  }
  if ( !v9->max_length )
    goto LABEL_35;
  v9->m_Items[0] = (System_String_o *)v19;
  sub_B16F98((BattleServantConfConponent_o *)v9->m_Items, v19, v13, v14, v15, v16, v17, v18);
  v11 = (System_String_o *)StringLiteral_698;
  if ( StringLiteral_698 )
  {
    v11 = (System_String_o *)sub_B170BC(StringLiteral_698, v9->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_36;
    v12 = (System_Int32_array **)StringLiteral_698;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_35;
  v9->m_Items[1] = (System_String_o *)v12;
  sub_B16F98((BattleServantConfConponent_o *)&v9->m_Items[1], v12, v13, v20, v21, v22, v23, v24);
  v11 = System_Single__ToString(v25, (const MethodInfo *)&eulerAngles.fields.y);
  v31 = (System_Int32_array **)v11;
  if ( v11 )
  {
    v11 = (System_String_o *)sub_B170BC(v11, v9->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_36;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_35;
  v9->m_Items[2] = (System_String_o *)v31;
  sub_B16F98((BattleServantConfConponent_o *)&v9->m_Items[2], v31, v13, v26, v27, v28, v29, v30);
  v11 = (System_String_o *)StringLiteral_698;
  if ( StringLiteral_698 )
  {
    v11 = (System_String_o *)sub_B170BC(StringLiteral_698, v9->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_36;
    v12 = (System_Int32_array **)StringLiteral_698;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_35;
  v9->m_Items[3] = (System_String_o *)v12;
  sub_B16F98((BattleServantConfConponent_o *)&v9->m_Items[3], v12, v13, v32, v33, v34, v35, v36);
  v11 = System_Single__ToString(v37, (const MethodInfo *)&eulerAngles.fields.z);
  v43 = (System_Int32_array **)v11;
  if ( v11 )
  {
    v11 = (System_String_o *)sub_B170BC(v11, v9->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_36;
  }
  if ( v9->max_length <= 4 )
    goto LABEL_35;
  v9->m_Items[4] = (System_String_o *)v43;
  sub_B16F98((BattleServantConfConponent_o *)&v9->m_Items[4], v43, v13, v38, v39, v40, v41, v42);
  v11 = (System_String_o *)StringLiteral_698;
  if ( StringLiteral_698 )
  {
    v11 = (System_String_o *)sub_B170BC(StringLiteral_698, v9->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_36;
    v12 = (System_Int32_array **)StringLiteral_698;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v9->max_length <= 5 )
    goto LABEL_35;
  v9->m_Items[5] = (System_String_o *)v12;
  sub_B16F98((BattleServantConfConponent_o *)&v9->m_Items[5], v12, v13, v44, v45, v46, v47, v48);
  v11 = System_Single__ToString(v49, (const MethodInfo *)((char *)&methoda.klass + 4));
  v55 = (System_Int32_array **)v11;
  if ( v11 )
  {
    v11 = (System_String_o *)sub_B170BC(v11, v9->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_36:
      sub_B170F4(v11);
      sub_B170A0();
    }
  }
  if ( v9->max_length <= 6 )
  {
LABEL_35:
    sub_B17100(v11, v12, v13);
    sub_B170A0();
  }
  v9->m_Items[6] = (System_String_o *)v55;
  sub_B16F98((BattleServantConfConponent_o *)&v9->m_Items[6], v55, v13, v50, v51, v52, v53, v54);
  v56 = System_String__Concat_43823856(v9, 0LL);
  UnityEngine_PlayerPrefs__SetString(BLANK_EARTH_ROTATE_KEY, v56, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetEarthRotate(BlankEarth_o *this, UnityEngine_Quaternion_o qua, const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0

  blankEarth = this->fields.blankEarth;
  if ( !blankEarth )
    sub_B170D4();
  UnityEngine_Transform__set_rotation(blankEarth, qua, 0LL);
}


void __fastcall BlankEarth__SetFocusEarthPoint(BlankEarth_o *this, int32_t spotId, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_Component_o *mActionBgColl; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x2
  struct BlankEarthPoint_o *EarthPoint; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mActionBgColl = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(mActionBgColl, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  EarthPoint = BlankEarth__GetEarthPoint(this, spotId, v8);
  this->fields.focusEarthPoint = EarthPoint;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.focusEarthPoint,
    (System_Int32_array **)EarthPoint,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
  sub_B16F98(
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

  if ( (byte_40F90BE & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_BlankEarth__setState__, *(_QWORD *)&state);
    byte_40F90BE = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_BlankEarth__setState__);
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
  struct BlankEarthPoint_o *EarthPoint; // x0
  TerminalPramsManager_c *v8; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_Transform_o *blankEarth; // x20
  float zoomInOffset; // s12
  float v15; // s4
  float v16; // s5
  float v17; // s3
  int v18; // s0
  UnityEngine_GameObject_o *earthRoot; // x0
  UnityEngine_Transform_o *transform; // x20
  int v24; // s0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Transform_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Transform_o *v31; // x0
  ScrTerminalListTop_o *mTerminalList; // x0
  ScrTerminalListTop_o *v33; // x0
  const MethodInfo *v34; // x2
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v38; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_40F90CE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v3);
    byte_40F90CE = 1;
  }
  focusEarthPoint = (UnityEngine_Object_o *)this->fields.focusEarthPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(focusEarthPoint, 0LL, 0LL) )
  {
    EarthPoint = this->fields.focusEarthPoint;
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
    if ( !byte_40F6047 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
      byte_40F6047 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    EarthPoint = BlankEarth__GetEarthPoint(this, v8->static_fields->_BlankEarthSpotId_k__BackingField, v6);
    if ( !EarthPoint )
LABEL_28:
      sub_B170D4();
  }
  x = EarthPoint->fields._FocusQua_k__BackingField.fields.x;
  y = EarthPoint->fields._FocusQua_k__BackingField.fields.y;
  z = EarthPoint->fields._FocusQua_k__BackingField.fields.z;
  w = EarthPoint->fields._FocusQua_k__BackingField.fields.w;
  blankEarth = this->fields.blankEarth;
  zoomInOffset = this->fields.zoomInOffset;
  up = UnityEngine_Vector3__get_up(0LL);
  v15 = up.fields.y;
  v16 = up.fields.z;
  up.fields.y = up.fields.x;
  up.fields.z = v15;
  v17 = v16;
  v37 = UnityEngine_Quaternion__AngleAxis(-zoomInOffset, *(UnityEngine_Vector3_o *)&up.fields.y, 0LL);
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v38.fields.w = w;
  *(UnityEngine_Quaternion_o *)&v18 = UnityEngine_Quaternion__op_Multiply(v37, v38, 0LL);
  if ( !blankEarth )
    goto LABEL_28;
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v18, 0LL);
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_28;
  transform = UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  *(UnityEngine_Quaternion_o *)&v24 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !transform )
    goto LABEL_28;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v24, 0LL);
  v28 = this->fields.earthRoot;
  if ( !v28 )
    goto LABEL_28;
  v29 = UnityEngine_GameObject__get_transform(v28, 0LL);
  if ( !v29 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v29, this->fields.zoomInPos, 0LL);
  v30 = this->fields.earthRoot;
  if ( !v30 )
    goto LABEL_28;
  v31 = UnityEngine_GameObject__get_transform(v30, 0LL);
  if ( !v31 )
    goto LABEL_28;
  v36.fields.x = this->fields.zoomInScl;
  v36.fields.y = v36.fields.x;
  v36.fields.z = v36.fields.x;
  UnityEngine_Transform__set_localScale(v31, v36, 0LL);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_28;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn(mTerminalList, 0, 1, 0LL);
  v33 = this->fields.mTerminalList;
  if ( !v33 )
    goto LABEL_28;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(v33, 0.0, 0, 1, 0LL);
  BlankEarth__SetState(this, 3, v34);
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
          sub_B17100(this, isDisp, method);
          sub_B170A0();
        }
        v7 = presentBoxHideGameObjectList->m_Items[v5];
        if ( !v7 )
          sub_B170D4();
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

  if ( (byte_40F90BC & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_BlankEarth__update__, method);
    byte_40F90BC = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_BlankEarth__update__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthTransform_o *__fastcall BlankEarth__UpdateBlankEarthTransformData(
        BlankEarth_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  struct BlankEarthTransform_o *BlankEarthTransformData_k__BackingField; // x20
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  float v10; // s11
  float v11; // s10
  float v12; // s9
  float v13; // s8
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *earthRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  BlankEarthTransform_o *v33; // x0
  const MethodInfo *v34; // x5
  TerminalPramsManager_c *v35; // x0
  BattleServantConfConponent_o *p_BlankEarthTransformData_k__BackingField; // x0
  float totalAng; // [xsp+34h] [xbp-6Ch]
  float w; // [xsp+38h] [xbp-68h]
  float earthRootRot; // [xsp+3Ch] [xbp-64h]
  float y; // [xsp+88h] [xbp-18h]
  float x; // [xsp+8Ch] [xbp-14h]
  UnityEngine_Vector3_o v43; // 0:x1.12
  UnityEngine_Vector3_o v44; // 0:x3.12
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v47; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_40F90D1 & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthTransform_TypeInfo, method);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v3);
    byte_40F90D1 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F7164 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F7164 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( !this->fields.blankEarth )
    goto LABEL_30;
  BlankEarthTransformData_k__BackingField = v4->static_fields->_BlankEarthTransformData_k__BackingField;
  *(UnityEngine_Quaternion_o *)&v6 = UnityEngine_Transform__get_rotation(this->fields.blankEarth, 0LL);
  v10 = v6;
  v11 = v7;
  v12 = v8;
  v13 = v9;
  if ( !BlankEarthTransformData_k__BackingField )
  {
    earthRoot = this->fields.earthRoot;
    if ( earthRoot )
    {
      transform = UnityEngine_GameObject__get_transform(earthRoot, 0LL);
      if ( transform )
      {
        rotation = UnityEngine_Transform__get_rotation(transform, 0LL);
        y = rotation.fields.y;
        x = rotation.fields.x;
        w = rotation.fields.w;
        earthRootRot = rotation.fields.z;
        LODWORD(totalAng) = (unsigned int)GameObjectExtensions__GetLocalPosition(this->fields.earthRoot, 0LL);
        v27 = this->fields.earthRoot;
        if ( v27 )
        {
          gameObject = UnityEngine_GameObject__get_gameObject(v27, 0LL);
          GameObjectExtensions__GetLocalScale(gameObject, 0LL);
          v33 = (BlankEarthTransform_o *)sub_B170CC(BlankEarthTransform_TypeInfo, v29, v30, v31, v32);
          v47.fields.y = y;
          v47.fields.x = x;
          v47.fields.z = earthRootRot;
          v46.fields.y = v11;
          v47.fields.w = w;
          v46.fields.z = v12;
          v46.fields.w = v13;
          *(_QWORD *)&v43.fields.x = 0LL;
          BlankEarthTransformData_k__BackingField = v33;
          v46.fields.x = v10;
          BlankEarthTransform___ctor(v33, v46, v47, v43, v44, totalAng, v34);
          goto LABEL_21;
        }
      }
    }
LABEL_30:
    sub_B170D4();
  }
  BlankEarthTransformData_k__BackingField->fields.blankEarthRotation.fields.x = v6;
  BlankEarthTransformData_k__BackingField->fields.blankEarthRotation.fields.y = v7;
  BlankEarthTransformData_k__BackingField->fields.blankEarthRotation.fields.z = v8;
  BlankEarthTransformData_k__BackingField->fields.blankEarthRotation.fields.w = v9;
  v14 = this->fields.earthRoot;
  if ( !v14 )
    goto LABEL_30;
  v15 = UnityEngine_GameObject__get_transform(v14, 0LL);
  if ( !v15 )
    goto LABEL_30;
  BlankEarthTransformData_k__BackingField->fields.earthRootRotation = UnityEngine_Transform__get_rotation(v15, 0LL);
  BlankEarthTransformData_k__BackingField->fields.earthRootLocalPosition = GameObjectExtensions__GetLocalPosition(
                                                                             this->fields.earthRoot,
                                                                             0LL);
  v16 = this->fields.earthRoot;
  if ( !v16 )
    goto LABEL_30;
  v17 = UnityEngine_GameObject__get_gameObject(v16, 0LL);
  BlankEarthTransformData_k__BackingField->fields.earthRootLocalScale = GameObjectExtensions__GetLocalScale(v17, 0LL);
  BlankEarthTransformData_k__BackingField->fields.totalAngle = this->fields.totalAngle;
LABEL_21:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F90F8 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v18);
    byte_40F90F8 = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  p_BlankEarthTransformData_k__BackingField = (BattleServantConfConponent_o *)&v35->static_fields->_BlankEarthTransformData_k__BackingField;
  p_BlankEarthTransformData_k__BackingField->klass = (BattleServantConfConponent_c *)BlankEarthTransformData_k__BackingField;
  sub_B16F98(
    p_BlankEarthTransformData_k__BackingField,
    (System_Int32_array **)BlankEarthTransformData_k__BackingField,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  return BlankEarthTransformData_k__BackingField;
}


void __fastcall BlankEarth__UpdateSpotDisp(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *earthSpotRoot; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Collections_Generic_IEnumerable_T__o *v13; // x19
  BlankEarth___c_c *v14; // x8
  struct BlankEarth___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__96_0; // x20
  Il2CppObject *v17; // x21
  struct BlankEarth___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40F90C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BlankEarthPoint___ctor__, method);
    sub_B16FFC(&System_Action_BlankEarthPoint__TypeInfo, v3);
    sub_B16FFC(&Method_BasicHelper_ForEach_BlankEarthPoint___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___, v5);
    sub_B16FFC(&Method_BlankEarth___c__UpdateSpotDisp_b__96_0__, v6);
    sub_B16FFC(&BlankEarth___c_TypeInfo, v7);
    byte_40F90C8 = 1;
  }
  earthSpotRoot = this->fields.earthSpotRoot;
  if ( !earthSpotRoot )
    sub_B170D4();
  v13 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                                                         earthSpotRoot,
                                                         (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  v14 = BlankEarth___c_TypeInfo;
  if ( (BYTE3(BlankEarth___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarth___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo);
    v14 = BlankEarth___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__96_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = BlankEarth___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__96_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_BlankEarthPoint__TypeInfo,
                                                                                      v9,
                                                                                      v10,
                                                                                      v11,
                                                                                      v12);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__96_0,
      v17,
      Method_BlankEarth___c__UpdateSpotDisp_b__96_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_BlankEarthPoint___ctor__);
    v18 = BlankEarth___c_TypeInfo->static_fields;
    v18->__9__96_0 = (struct System_Action_BlankEarthPoint__o *)_9__96_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v18->__9__96_0,
      (System_Int32_array **)_9__96_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v13,
    (System_Action_T__o *)_9__96_0,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BlankEarthPoint___);
}


void __fastcall BlankEarth__UpdateTotalAngle(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *blankEarth; // x0
  UnityEngine_Transform_o *transform; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  blankEarth = (UnityEngine_Component_o *)this->fields.blankEarth;
  if ( !blankEarth || (transform = UnityEngine_Component__get_transform(blankEarth, 0LL)) == 0LL )
    sub_B170D4();
  rotation = UnityEngine_Transform__get_rotation(transform, 0LL);
  v12 = UnityEngine_Quaternion__Inverse(rotation, 0LL);
  x = v12.fields.x;
  y = v12.fields.y;
  z = v12.fields.z;
  w = v12.fields.w;
  *(UnityEngine_Vector3_o *)&v13.fields.x = UnityEngine_Vector3__get_back(0LL);
  v10.fields.x = v13.fields.x;
  v10.fields.y = v13.fields.y;
  v10.fields.z = v13.fields.z;
  v13.fields.x = x;
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.w = w;
  v9 = UnityEngine_Quaternion__op_Multiply_34840904(v13, v10, 0LL);
  this->fields.totalAngle = asinf(v9.fields.y) * 57.296;
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
  sub_B16F98(
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
  BattleServantConfConponent_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  v11 = (BattleServantConfConponent_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11->fields.call_openComp = (struct BattleWindowComponent_EndCall_o *)finishCallback;
  v11 = (BattleServantConfConponent_o *)((char *)v11 + 32);
  *(float *)&v11[-1].fields.classBoardSkillObj = time;
  *((float *)&v11[-1].fields.classBoardSkillObj + 1) = x;
  *(float *)&v11[-1].fields.isOpenAfter = y;
  v11[-1].fields.adjustHeight = easeType;
  sub_B16F98(v11, (System_Int32_array **)finishCallback, v12, v13, v14, v15, v16, v17);
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
    sub_B170D4();
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
    sub_B170D4();
  }
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v5, 0LL);
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__StartRotate(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  EasingObject_o *EasingObj; // x19
  float Time_k__BackingField; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x22
  struct BlankEarth_QAARotateEarthParam_o *v15; // x8

  if ( (byte_40F71EC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    byte_40F71EC = 1;
  }
  Param = this->fields.Param;
  if ( !Param
    || (EasingObj = this->fields.EasingObj,
        Time_k__BackingField = Param->fields._Time_k__BackingField,
        v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4),
        System_Action___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)this->klass->vtable._10_OnRotateCompleted.methodPtr,
          0LL),
        v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13),
        System_Action___ctor(v14, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_update.methodPtr, 0LL),
        (v15 = this->fields.Param) == 0LL)
    || !EasingObj )
  {
    sub_B170D4();
  }
  EasingObject__Play(EasingObj, Time_k__BackingField, v9, v14, 0.0, v15->fields._EaseType_k__BackingField, 0LL);
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__begin(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct BlankEarth_QAARotateEarthParam_o *qaaRotateEarthParam; // x1
  UnityEngine_Transform_o *blankEarth; // x0
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F71EB & 1) == 0 )
  {
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, that);
    byte_40F71EB = 1;
  }
  this->fields.That = that;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)that,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !that )
    goto LABEL_10;
  qaaRotateEarthParam = that->fields.qaaRotateEarthParam;
  this->fields.Param = qaaRotateEarthParam;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.Param,
    (System_Int32_array **)qaaRotateEarthParam,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
        v19 = (UnityEngine_Component_o *)that->fields.blankEarth;
        if ( v19 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
          Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                                 gameObject,
                                 (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
          this->fields.EasingObj = (struct EasingObject_o *)Component_UIWidget;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.EasingObj,
            (System_Int32_array **)Component_UIWidget,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          return;
        }
      }
    }
LABEL_10:
    sub_B170D4();
  }
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__end(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  EasingObject_o *EasingObj; // x0
  BlankEarth_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  struct EasingObject_o *v11; // x9
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  System_Action_T__o *FinishCallback_k__BackingField; // x19
  bool v14; // w21
  __int64 v15; // x20

  if ( (byte_40F71ED & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___, that);
    sub_B16FFC(&BlankEarth_QAARotateEarthResponse_TypeInfo, v4);
    byte_40F71ED = 1;
  }
  EasingObj = this->fields.EasingObj;
  if ( !EasingObj
    || (EasingObject__Stop(EasingObj, 0LL), (v6 = this->fields.That) == 0LL)
    || (BlankEarth__UpdateTotalAngle(v6, 0LL), (v11 = this->fields.EasingObj) == 0LL) )
  {
    sub_B170D4();
  }
  Param = this->fields.Param;
  if ( Param )
  {
    FinishCallback_k__BackingField = (System_Action_T__o *)Param->fields._FinishCallback_k__BackingField;
    v14 = v11->fields.mStartTime < 1.0;
    v15 = sub_B170CC(BlankEarth_QAARotateEarthResponse_TypeInfo, v7, v8, v9, v10);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    *(_BYTE *)(v15 + 16) = v14;
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      FinishCallback_k__BackingField,
      (BlankEarth_QAARotateEarthResponse_o *)v15,
      (const MethodInfo_2D39F2C *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
  UnityEngine_GameObject_o *earthRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_Component_o *mActionBgColl; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Vector3_o DefaultEarthScale; // 0:s0.4,4:s1.4,8:s2.4

  this->fields = 0LL;
  if ( !that
    || (earthRoot = that->fields.earthRoot) == 0LL
    || (gameObject = UnityEngine_GameObject__get_gameObject(earthRoot, 0LL),
        DefaultEarthScale = BlankEarth__GetDefaultEarthScale(that, 0LL),
        GameObjectExtensions__SetLocalScale(gameObject, DefaultEarthScale, 0LL),
        (mTerminalList = that->fields.mTerminalList) == 0LL)
    || (mActionBgColl = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl) == 0LL
    || (v8 = UnityEngine_Component__get_gameObject(mActionBgColl, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v8, 0, 0LL);
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
    sub_B170D4();
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
  UnityEngine_Component_o *blankEarth; // x0
  float mStartTime; // s11
  UnityEngine_Transform_o *transform; // x0
  struct BlankEarth_o *v8; // x8
  UnityEngine_Component_o *v9; // x0
  UnityEngine_Transform_o *v10; // x0
  struct BlankEarth_o *v11; // x8
  UnityEngine_Transform_o *v12; // x20
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Transform_o *v14; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float v18; // s0
  float v19; // s1
  float v20; // s2
  struct BlankEarth_o *v21; // x8
  UnityEngine_Transform_o *v22; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s3.4,4:s4.4,8:s5.4

  EasingObj = this->fields.EasingObj;
  if ( !EasingObj )
    goto LABEL_14;
  That = this->fields.That;
  if ( !That )
    goto LABEL_14;
  blankEarth = (UnityEngine_Component_o *)That->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_14;
  mStartTime = EasingObj->fields.mStartTime;
  transform = UnityEngine_Component__get_transform(blankEarth, 0LL);
  if ( !transform )
    goto LABEL_14;
  UnityEngine_Transform__set_rotation(transform, this->fields.QuaFrom, 0LL);
  v8 = this->fields.That;
  if ( !v8 )
    goto LABEL_14;
  v9 = (UnityEngine_Component_o *)v8->fields.blankEarth;
  if ( !v9 )
    goto LABEL_14;
  v10 = UnityEngine_Component__get_transform(v9, 0LL);
  v11 = this->fields.That;
  if ( !v11 )
    goto LABEL_14;
  v12 = v10;
  v13 = (UnityEngine_Component_o *)v11->fields.blankEarth;
  if ( !v13 )
    goto LABEL_14;
  v14 = UnityEngine_Component__get_transform(v13, 0LL);
  if ( !v14 )
    goto LABEL_14;
  position = UnityEngine_Transform__get_position(v14, 0LL);
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_right(0LL);
  if ( !v12 )
    goto LABEL_14;
  v26.fields.x = v18;
  v26.fields.y = v19;
  v26.fields.z = v20;
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  UnityEngine_Transform__RotateAround(v12, v24, v26, mStartTime * this->fields.rotAmountX, 0LL);
  v21 = this->fields.That;
  if ( !v21 || (v22 = v21->fields.blankEarth) == 0LL )
LABEL_14:
    sub_B170D4();
  v25.fields.x = 0.0;
  v25.fields.y = mStartTime * this->fields.rotAmountY;
  v25.fields.z = 0.0;
  UnityEngine_Transform__Rotate_34931420(v22, v25, 0LL);
}


void __fastcall BlankEarth_StateShortcutRotate__StartRotate(
        BlankEarth_StateShortcutRotate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  EasingObject_o *EasingObj; // x19
  float rotateTime; // s8
  System_Action_o *v8; // x0
  System_Action_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x22
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8

  if ( (byte_40F71EE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    byte_40F71EE = 1;
  }
  EasingObj = this->fields.EasingObj;
  rotateTime = this->fields.rotateTime;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  if ( !this
    || (v9 = v8,
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)this->klass->vtable._10_OnRotateCompleted.methodPtr,
          0LL),
        v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13),
        System_Action___ctor(v14, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_update.methodPtr, 0LL),
        (Param = this->fields.Param) == 0LL)
    || !EasingObj )
  {
    sub_B170D4();
  }
  EasingObject__Play(EasingObj, rotateTime, v9, v14, 0.0, Param->fields._EaseType_k__BackingField, 0LL);
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
  float v20; // s0
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  float v22; // s0
  struct BlankEarth_RotateEarthTimeCalculateParam_o *rotateEarthTimeCalculateParam; // x8
  float rotAmountY; // s2
  float rotAmountX; // s2
  EasingObject_o *EasingObj; // x0
  UnityEngine_Vector3_o axis; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v33; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v34; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v35; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  BlankEarth_StateEarthAutoRotateBase__begin((BlankEarth_StateEarthAutoRotateBase_o *)this, that, method);
  v36 = UnityEngine_Quaternion__Inverse(this->fields.QuaFrom, 0LL);
  x = v36.fields.x;
  y = v36.fields.y;
  z = v36.fields.z;
  w = v36.fields.w;
  *(UnityEngine_Vector3_o *)&v37.fields.x = UnityEngine_Vector3__get_back(0LL);
  v34.fields.x = v37.fields.x;
  v34.fields.y = v37.fields.y;
  v34.fields.z = v37.fields.z;
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  v37.fields.w = w;
  v28 = UnityEngine_Quaternion__op_Multiply_34840904(v37, v34, 0LL);
  v9 = v28.fields.x;
  v10 = v28.fields.y;
  v11 = v28.fields.z;
  v38 = UnityEngine_Quaternion__Inverse(this->fields.QuaTo, 0LL);
  v12 = v38.fields.x;
  v13 = v38.fields.y;
  v14 = v38.fields.z;
  v15 = v38.fields.w;
  *(UnityEngine_Vector3_o *)&v39.fields.x = UnityEngine_Vector3__get_back(0LL);
  v35.fields.x = v39.fields.x;
  v35.fields.y = v39.fields.y;
  v35.fields.z = v39.fields.z;
  v39.fields.x = v12;
  v39.fields.y = v13;
  v39.fields.z = v14;
  v39.fields.w = v15;
  v29 = UnityEngine_Quaternion__op_Multiply_34840904(v39, v35, 0LL);
  v16 = v29.fields.x;
  v17 = v29.fields.y;
  v18 = v29.fields.z;
  axis = UnityEngine_Vector3__get_down(0LL);
  v30.fields.y = 0.0;
  v32.fields.y = 0.0;
  v30.fields.x = v9;
  v30.fields.z = v11;
  v32.fields.x = v16;
  v32.fields.z = v18;
  this->fields.rotAmountY = UnityEngine_Vector3__SignedAngle(v30, v32, axis, 0LL);
  v19 = asinf(v10);
  v20 = asinf(v17);
  Param = this->fields.Param;
  this->fields.rotAmountX = (float)(v19 - v20) * 57.296;
  if ( !Param )
    goto LABEL_13;
  this->fields.rotateTime = Param->fields._Time_k__BackingField;
  if ( !that )
    goto LABEL_13;
  if ( that->fields.rotateEarthTimeCalculateParam )
  {
    v31.fields.x = v9;
    v31.fields.y = v10;
    v31.fields.z = v11;
    v33.fields.x = v16;
    v33.fields.y = v17;
    v33.fields.z = v18;
    v22 = UnityEngine_Vector3__Distance(v31, v33, 0LL);
    rotateEarthTimeCalculateParam = that->fields.rotateEarthTimeCalculateParam;
    if ( !rotateEarthTimeCalculateParam )
      goto LABEL_13;
    this->fields.rotateTime = (float)(v22 * rotateEarthTimeCalculateParam->fields._DistanceMultipleValue_k__BackingField)
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
      sub_B170D4();
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x8
  float v29; // s8
  int v30; // s0
  TerminalSceneComponent_c *v31; // x0
  int32_t Int; // w0
  __int64 v33; // x8
  UnityEngine_Transform_o *v34; // x21
  BlankEarth_c *v35; // x0
  int v36; // s0
  TerminalSceneComponent_c *v40; // x0
  UnityEngine_Transform_o *v41; // x21
  int v42; // s0
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  UnityEngine_Component_o *v48; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x8
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  BlankEarth_o *v60; // x0
  EasingObject_o *v61; // x21
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  System_Action_o *v66; // x22
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Action_o *v71; // x23
  __int64 v72; // x8
  ScrTerminalListTop_o *v73; // x0
  __int64 v74; // x8
  ScrTerminalListTop_o *v75; // x0
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F71EF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&BlankEarth_TypeInfo, v7);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8);
    sub_B16FFC(&Method_BlankEarth_StateStartup_begin__, v9);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v10);
    sub_B16FFC(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, v11);
    sub_B16FFC(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, v12);
    sub_B16FFC(&BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo, v13);
    byte_40F71EF = 1;
  }
  v14 = sub_B170CC(BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo, that, method, v3, v4);
  BlankEarth_StateStartup___c__DisplayClass3_0___ctor((BlankEarth_StateStartup___c__DisplayClass3_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_40;
  *(_QWORD *)(v14 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 32) = that;
  v21 = v14 + 32;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 32), (System_Int32_array **)that, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)&this->fields.inertialSpeedX = 0LL;
  if ( !*(_QWORD *)(v14 + 32) )
    goto LABEL_40;
  *(_DWORD *)(*(_QWORD *)(v14 + 32) + 212LL) = 0;
  v28 = *(_QWORD *)v21;
  if ( !*(_QWORD *)v21 )
    goto LABEL_40;
  v29 = *(float *)(v28 + 104);
  if ( *(_BYTE *)(v28 + 208) )
    v30 = *(_DWORD *)(v28 + 136);
  else
    v30 = 0;
  *(_DWORD *)(v14 + 68) = v30;
  v31 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v31 = TerminalSceneComponent_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v31->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0LL);
  v33 = *(_QWORD *)v21;
  if ( !*(_QWORD *)v21 )
    goto LABEL_40;
  if ( Int == 1 )
  {
    v29 = *(float *)(v33 + 128);
    v34 = *(UnityEngine_Transform_o **)(v33 + 24);
    v35 = BlankEarth_TypeInfo;
    if ( (BYTE3(BlankEarth_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BlankEarth_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
      v35 = BlankEarth_TypeInfo;
    }
    *(UnityEngine_Quaternion_o *)&v36 = UnityEngine_Quaternion__Euler_34841604(
                                          v35->static_fields->SOUTH_POLE_ROTATE,
                                          0LL);
    if ( v34 )
    {
      UnityEngine_Transform__set_rotation(v34, *(UnityEngine_Quaternion_o *)&v36, 0LL);
      v40 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v40 = TerminalSceneComponent_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(v40->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0LL);
      if ( *(_QWORD *)v21 )
      {
        *(float *)(*(_QWORD *)v21 + 212LL) = -*(float *)(*(_QWORD *)v21 + 68LL);
        goto LABEL_25;
      }
    }
LABEL_40:
    sub_B170D4();
  }
  v41 = *(UnityEngine_Transform_o **)(v33 + 24);
  *(UnityEngine_Quaternion_o *)&v42 = BlankEarth__LoadEarthRotate((BlankEarth_o *)*(_QWORD *)v21, 0LL);
  if ( !v41 )
    goto LABEL_40;
  UnityEngine_Transform__set_rotation(v41, *(UnityEngine_Quaternion_o *)&v42, 0LL);
LABEL_25:
  v46 = Method_BlankEarth_StateStartup_begin__;
  if ( (*((_BYTE *)Method_BlankEarth_StateStartup_begin__ + 75) & 2) != 0 )
    v46 = (_QWORD *)sub_B17004(Method_BlankEarth_StateStartup_begin__);
  v47 = (System_Reflection_MethodBase_o *)sub_B16FE0(v46, v46[3]);
  if ( !*(_QWORD *)v21 )
    goto LABEL_40;
  OverwriteAssetSoundName__PlaySe(v47, *(System_String_o **)(*(_QWORD *)v21 + 120LL), 0LL);
  if ( !*(_QWORD *)v21 )
    goto LABEL_40;
  v48 = *(UnityEngine_Component_o **)(*(_QWORD *)v21 + 24LL);
  if ( !v48 )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject(v48, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 16) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), Component_UIWidget, v51, v52, v53, v54, v55, v56);
  v57 = *(_QWORD *)(v14 + 32);
  if ( !v57 )
    goto LABEL_40;
  v58 = *(UnityEngine_GameObject_o **)(v57 + 32);
  if ( !v58 )
    goto LABEL_40;
  v59 = UnityEngine_GameObject__get_gameObject(v58, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v59, 0LL);
  v60 = *(BlankEarth_o **)(v14 + 32);
  *(UnityEngine_Vector3_o *)(v14 + 52) = LocalScale;
  if ( !v60 )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)(v14 + 40) = BlankEarth__GetDefaultEarthScale(v60, 0LL);
  *(_BYTE *)(v14 + 64) = 0;
  v61 = *(EasingObject_o **)(v14 + 16);
  v66 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v62, v63, v64, v65);
  System_Action___ctor(v66, (Il2CppObject *)v14, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, 0LL);
  v71 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v67, v68, v69, v70);
  System_Action___ctor(v71, (Il2CppObject *)v14, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, 0LL);
  v72 = *(_QWORD *)(v14 + 32);
  if ( !v72 )
    goto LABEL_40;
  if ( !v61 )
    goto LABEL_40;
  EasingObject__Play_33167332(v61, 1.0, 0.0, v29, v66, v71, 0.0, *(_DWORD *)(v72 + 180), 0LL);
  if ( !*(_QWORD *)v21 )
    goto LABEL_40;
  v73 = *(ScrTerminalListTop_o **)(*(_QWORD *)v21 + 224LL);
  if ( !v73 )
    goto LABEL_40;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn(v73, 0, 1, 0LL);
  v74 = *(_QWORD *)v21;
  if ( !*(_QWORD *)v21 )
    goto LABEL_40;
  v75 = *(ScrTerminalListTop_o **)(v74 + 224);
  if ( !v75 )
    goto LABEL_40;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(v75, *(float *)(v74 + 164), 0, 1, 0LL);
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
  BattleServantConfConponent_o *p_scalingEndCallback; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( !that )
    sub_B170D4();
  BlankEarth__BlunkEarthMainOperation(that, that, &this->fields.inertialSpeedX, &this->fields.inertialSpeedY, 0LL);
  scalingEndCallback = that->fields.scalingEndCallback;
  if ( scalingEndCallback )
  {
    if ( this->fields.scaleRate < 0.0001 )
    {
      p_scalingEndCallback = (BattleServantConfConponent_o *)&that->fields.scalingEndCallback;
      System_Action__Invoke(scalingEndCallback, 0LL);
      p_scalingEndCallback->klass = 0LL;
      sub_B16F98(p_scalingEndCallback, 0LL, v7, v8, v9, v10, v11, v12);
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
  double v5; // d0
  struct BlankEarth_StateStartup_o *_4__this; // x8
  float v7; // s8
  struct BlankEarth_o *that; // x8
  UnityEngine_GameObject_o *earthRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  float32x2_t v11; // d10
  float z; // s11
  float32x2_t v13; // d13
  float v14; // s12
  UnityEngine_Transform_o *v15; // x20
  float v16; // s0
  float v17; // s2
  unsigned __int64 v18; // d0 OVERLAPPED
  float v19; // s2
  int v20; // s1
  struct BlankEarth_o *v21; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_Component_o *mActionBgColl; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ScrTerminalListTop_o *v25; // x0

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_18;
  mStartTime = eo->fields.mStartTime;
  v5 = StepFunc__Acc5(mStartTime, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  v7 = v5;
  _4__this->fields.scaleRate = v7;
  that = this->fields.that;
  if ( !that )
    goto LABEL_18;
  earthRoot = that->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_18;
  transform = UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  v11.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_scl_to.fields.x;
  z = this->fields.root_scl_to.fields.z;
  v13.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_scl_from.fields.x;
  v14 = this->fields.root_scl_from.fields.z;
  v15 = transform;
  v16 = UnityEngine_Mathf__Clamp01(v7, 0LL);
  if ( !v15 )
    goto LABEL_18;
  v17 = (float)(v14 - z) * v16;
  v18 = vadd_f32(v11, vmul_n_f32(vsub_f32(v13, v11), v16)).n64_u64[0];
  v19 = z + v17;
  v20 = HIDWORD(v18);
  UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v18, 0LL);
  if ( !this->fields.isStartRotateBtn )
  {
    v21 = this->fields.that;
    if ( !v21 )
      goto LABEL_18;
    if ( mStartTime < v21->fields.startupFrameInRotateBtnRate )
    {
      if ( v21->fields.isTutorialAvailable )
      {
        this->fields.isStartRotateBtn = 1;
      }
      else
      {
        mTerminalList = v21->fields.mTerminalList;
        if ( !mTerminalList )
          goto LABEL_18;
        mActionBgColl = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl;
        if ( !mActionBgColl )
          goto LABEL_18;
        gameObject = UnityEngine_Component__get_gameObject(mActionBgColl, 0LL);
        if ( !gameObject )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        v21 = this->fields.that;
        this->fields.isStartRotateBtn = 1;
        if ( !v21 )
          goto LABEL_18;
      }
      v25 = v21->fields.mTerminalList;
      if ( v25 )
      {
        ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(v25, v21->fields.earthBtnMoveSpeedTime, 1, 0, 0LL);
        return;
      }
LABEL_18:
      sub_B170D4();
    }
  }
}


void __fastcall BlankEarth_StateStartup___c__DisplayClass3_0___begin_b__1(
        BlankEarth_StateStartup___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct BlankEarth_o *that; // x8
  UnityEngine_GameObject_o *earthRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x20
  System_Action_o *klass; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct BlankEarth_o *v19; // x8
  float wait_time; // s8
  System_Action_o *v21; // x19
  System_Collections_IEnumerator_o *v22; // x0

  if ( (byte_40F78C9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BlankEarth_SetMainState__, v3);
    byte_40F78C9 = 1;
  }
  that = this->fields.that;
  if ( !that )
    goto LABEL_12;
  earthRoot = that->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !transform )
    goto LABEL_12;
  UnityEngine_Transform__set_localScale(transform, this->fields.root_scl_to, 0LL);
  v11 = (Il2CppObject *)this->fields.that;
  if ( !v11 )
    goto LABEL_12;
  klass = (System_Action_o *)v11[18].klass;
  if ( klass )
  {
    System_Action__Invoke(klass, 0LL);
    v19 = this->fields.that;
    if ( !v19 )
      goto LABEL_12;
    v19->fields.scalingEndCallback = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&v19->fields.scalingEndCallback, 0LL, v13, v14, v15, v16, v17, v18);
    v11 = (Il2CppObject *)this->fields.that;
  }
  wait_time = this->fields.wait_time;
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v21, v11, Method_BlankEarth_SetMainState__, 0LL);
  v22 = BasicHelper__DelayCall(wait_time, v21, 0LL);
  if ( !v11 )
LABEL_12:
    sub_B170D4();
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)v11, v22, 0LL);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BlankEarth_o **v19; // x21
  ScrTerminalListTop_o *v20; // x0
  BlankEarth_o *v21; // x8
  ScrTerminalListTop_o *mTerminalList; // x0
  __int64 v23; // x1
  TerminalPramsManager_c *v24; // x0
  struct BlankEarthPoint_o *focusEarthPoint; // x8
  int32_t spotId_k__BackingField; // w23
  TerminalPramsManager_c *v27; // x0
  BlankEarth_o *v28; // x8
  ScrTerminalListTop_o *v29; // x0
  BlankEarthTransform_o *updated; // x0
  BlankEarthTransform_o *v31; // x22
  UnityEngine_Component_o *blankEarth; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x8
  float v42; // s8
  float y; // s4
  float z; // s5
  float v45; // s3
  int v46; // s0
  struct BlankEarthPoint_o *v50; // x8
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x8
  float v56; // w10
  int v57; // w10
  EasingObject_o *v58; // x21
  float v59; // w10
  int v60; // w8
  float mSpdTime; // s8
  System_Action_o *v62; // x19
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Action_o *v67; // x22
  __int64 v68; // x8
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F7084 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    sub_B16FFC(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__, v9);
    sub_B16FFC(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__, v10);
    sub_B16FFC(&BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo, v11);
    byte_40F7084 = 1;
  }
  v12 = sub_B170CC(BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  BlankEarth_StateZoomIn___c__DisplayClass1_0___ctor((BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_42;
  *(_QWORD *)(v12 + 24) = that;
  v19 = (BlankEarth_o **)(v12 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)that, v13, v14, v15, v16, v17, v18);
  if ( !*(_QWORD *)(v12 + 24) )
    goto LABEL_42;
  v20 = *(ScrTerminalListTop_o **)(*(_QWORD *)(v12 + 24) + 224LL);
  if ( !v20 )
    goto LABEL_42;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn(v20, 0, 0, 0LL);
  v21 = *v19;
  if ( !*v19 )
    goto LABEL_42;
  mTerminalList = v21->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_42;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(mTerminalList, v21->fields.earthBtnMoveSpeedTime, 0, 0, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6047 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v23);
    byte_40F6047 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  if ( !v24->static_fields->_BlankEarthSpotId_k__BackingField )
  {
    if ( *v19 )
    {
      focusEarthPoint = (*v19)->fields.focusEarthPoint;
      if ( focusEarthPoint )
      {
        spotId_k__BackingField = focusEarthPoint->fields._spotId_k__BackingField;
        if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v24);
        if ( !byte_40F6E08 )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v23);
          byte_40F6E08 = 1;
        }
        v27 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v27 = TerminalPramsManager_TypeInfo;
        }
        v27->static_fields->_BlankEarthSpotId_k__BackingField = spotId_k__BackingField;
        TerminalPramsManager__BlankEarthSpotId_SaveData(0LL);
        if ( *v19 )
        {
          this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume((*v19)->fields.zoomInSpdTime, 0LL);
          v28 = *v19;
          if ( *v19 )
          {
            v29 = v28->fields.mTerminalList;
            if ( v29 )
            {
              ScrTerminalListTop__cbfBlankEarthQuestCreate(v29, v28->fields.focusEarthPoint, 0LL);
              if ( *v19 )
              {
                BlankEarth__SaveEarthRotate(*v19, 0LL);
                if ( *v19 )
                {
                  updated = BlankEarth__UpdateBlankEarthTransformData(*v19, 0LL);
                  if ( *v19 )
                  {
                    v31 = updated;
                    blankEarth = (UnityEngine_Component_o *)(*v19)->fields.blankEarth;
                    if ( blankEarth )
                    {
                      gameObject = UnityEngine_Component__get_gameObject(blankEarth, 0LL);
                      Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                                    gameObject,
                                                                    (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
                      *(_QWORD *)(v12 + 16) = Component_UIWidget;
                      sub_B16F98(
                        (BattleServantConfConponent_o *)(v12 + 16),
                        Component_UIWidget,
                        v35,
                        v36,
                        v37,
                        v38,
                        v39,
                        v40);
                      if ( v31 )
                      {
                        v41 = *(_QWORD *)(v12 + 24);
                        *(struct UnityEngine_Quaternion_o *)(v12 + 32) = v31->fields.blankEarthRotation;
                        if ( v41 )
                        {
                          v42 = *(float *)(v41 + 72);
                          up = UnityEngine_Vector3__get_up(0LL);
                          y = up.fields.y;
                          z = up.fields.z;
                          up.fields.y = up.fields.x;
                          up.fields.z = y;
                          v45 = z;
                          *(UnityEngine_Quaternion_o *)&v46 = UnityEngine_Quaternion__AngleAxis(
                                                                -v42,
                                                                *(UnityEngine_Vector3_o *)&up.fields.y,
                                                                0LL);
                          if ( *v19 )
                          {
                            v50 = (*v19)->fields.focusEarthPoint;
                            if ( v50 )
                            {
                              *(UnityEngine_Quaternion_o *)(v12 + 48) = UnityEngine_Quaternion__op_Multiply(
                                                                          *(UnityEngine_Quaternion_o *)&v46,
                                                                          v50->fields._FocusQua_k__BackingField,
                                                                          0LL);
                              *(struct UnityEngine_Quaternion_o *)(v12 + 64) = v31->fields.earthRootRotation;
                              *(UnityEngine_Quaternion_o *)(v12 + 80) = UnityEngine_Quaternion__get_identity(0LL);
                              v55 = *(_QWORD *)(v12 + 24);
                              v56 = v31->fields.earthRootLocalPosition.fields.z;
                              *(_QWORD *)(v12 + 96) = *(_QWORD *)&v31->fields.earthRootLocalPosition.fields.x;
                              *(float *)(v12 + 104) = v56;
                              if ( v55 )
                              {
                                v57 = *(_DWORD *)(v55 + 148);
                                v58 = *(EasingObject_o **)(v12 + 16);
                                *(_QWORD *)(v12 + 108) = *(_QWORD *)(v55 + 140);
                                *(_DWORD *)(v12 + 116) = v57;
                                v59 = v31->fields.earthRootLocalScale.fields.z;
                                *(_QWORD *)(v12 + 120) = *(_QWORD *)&v31->fields.earthRootLocalScale.fields.x;
                                *(float *)(v12 + 128) = v59;
                                v60 = *(_DWORD *)(v55 + 84);
                                *(_BYTE *)(v12 + 144) = 0;
                                *(_DWORD *)(v12 + 132) = v60;
                                *(_DWORD *)(v12 + 136) = v60;
                                *(_DWORD *)(v12 + 140) = v60;
                                mSpdTime = this->fields.mSpdTime;
                                v62 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v51, v52, v53, v54);
                                System_Action___ctor(
                                  v62,
                                  (Il2CppObject *)v12,
                                  Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__,
                                  0LL);
                                v67 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v63, v64, v65, v66);
                                System_Action___ctor(
                                  v67,
                                  (Il2CppObject *)v12,
                                  Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__,
                                  0LL);
                                v68 = *(_QWORD *)(v12 + 24);
                                if ( v68 )
                                {
                                  if ( v58 )
                                  {
                                    EasingObject__Play(v58, mSpdTime, v62, v67, 0.0, *(_DWORD *)(v68 + 172), 0LL);
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
    sub_B170D4();
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
  double v5; // d8
  double v6; // d0
  struct BlankEarth_o *that; // x8
  UnityEngine_Transform_o *blankEarth; // x20
  float v9; // s10
  int v10; // s0
  struct BlankEarth_o *v14; // x8
  UnityEngine_GameObject_o *earthRoot; // x0
  UnityEngine_Transform_o *transform; // x20
  int v17; // s0
  struct BlankEarth_o *v21; // x8
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Transform_o *v23; // x0
  float32x2_t v24; // d10
  float z; // s11
  float32x2_t v26; // d13
  float v27; // s12
  UnityEngine_Transform_o *v28; // x20
  float v29; // s0
  float v30; // s0
  float v31; // s2
  unsigned __int64 v32; // d0 OVERLAPPED
  float v33; // s2
  int v34; // s1
  struct BlankEarth_o *v35; // x8
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  float32x2_t v38; // d10
  float v39; // s11
  float32x2_t v40; // d13
  float v41; // s12
  UnityEngine_Transform_o *v42; // x20
  float v43; // s0
  float v44; // s0
  float v45; // s2
  unsigned __int64 v46; // d0 OVERLAPPED
  float v47; // s2
  int v48; // s1
  struct BlankEarth_o *v49; // x8
  ScrTerminalListTop_o *mTerminalList; // x0

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_19;
  mStartTime = eo->fields.mStartTime;
  v5 = mStartTime;
  v6 = StepFunc__AccSig(mStartTime, 0LL);
  that = this->fields.that;
  if ( !that )
    goto LABEL_19;
  blankEarth = that->fields.blankEarth;
  v9 = v6;
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Slerp(this->fields.qua_from, this->fields.qua_to, v9, 0LL);
  if ( !blankEarth )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v10, 0LL);
  v14 = this->fields.that;
  if ( !v14 )
    goto LABEL_19;
  earthRoot = v14->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_19;
  transform = UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  *(UnityEngine_Quaternion_o *)&v17 = UnityEngine_Quaternion__Slerp(
                                        this->fields.root_qua_from,
                                        this->fields.root_qua_to,
                                        v9,
                                        0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v17, 0LL);
  v21 = this->fields.that;
  if ( !v21 )
    goto LABEL_19;
  v22 = v21->fields.earthRoot;
  if ( !v22 )
    goto LABEL_19;
  v23 = UnityEngine_GameObject__get_transform(v22, 0LL);
  v24.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_pos_from.fields.x;
  z = this->fields.root_pos_from.fields.z;
  v26.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_pos_to.fields.x;
  v27 = this->fields.root_pos_to.fields.z;
  v28 = v23;
  v29 = StepFunc__DecSin(v5, 0LL);
  v30 = UnityEngine_Mathf__Clamp01(v29, 0LL);
  if ( !v28 )
    goto LABEL_19;
  v31 = (float)(v27 - z) * v30;
  v32 = vadd_f32(v24, vmul_n_f32(vsub_f32(v26, v24), v30)).n64_u64[0];
  v33 = z + v31;
  v34 = HIDWORD(v32);
  UnityEngine_Transform__set_localPosition(v28, *(UnityEngine_Vector3_o *)&v32, 0LL);
  v35 = this->fields.that;
  if ( !v35 )
    goto LABEL_19;
  v36 = v35->fields.earthRoot;
  if ( !v36 )
    goto LABEL_19;
  v37 = UnityEngine_GameObject__get_transform(v36, 0LL);
  v38.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_scl_from.fields.x;
  v39 = this->fields.root_scl_from.fields.z;
  v40.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_scl_to.fields.x;
  v41 = this->fields.root_scl_to.fields.z;
  v42 = v37;
  v43 = StepFunc__Acc5(v5, 0LL);
  v44 = UnityEngine_Mathf__Clamp01(v43, 0LL);
  if ( !v42 )
    goto LABEL_19;
  v45 = (float)(v41 - v39) * v44;
  v46 = vadd_f32(v38, vmul_n_f32(vsub_f32(v40, v38), v44)).n64_u64[0];
  v47 = v39 + v45;
  v48 = HIDWORD(v46);
  UnityEngine_Transform__set_localScale(v42, *(UnityEngine_Vector3_o *)&v46, 0LL);
  if ( !this->fields.isStartSlideIn )
  {
    v49 = this->fields.that;
    if ( !v49 )
      goto LABEL_19;
    if ( mStartTime > v49->fields.zoomInFrameInBoardRate )
    {
      this->fields.isStartSlideIn = 1;
      mTerminalList = v49->fields.mTerminalList;
      if ( mTerminalList )
      {
        ScrTerminalListTop__CallBlankEarthSpotCreateFinishEvent(mTerminalList, v49->fields.focusEarthPoint, 0LL);
        return;
      }
LABEL_19:
      sub_B170D4();
    }
  }
}


void __fastcall BlankEarth_StateZoomIn___c__DisplayClass1_0___begin_b__1(
        BlankEarth_StateZoomIn___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct BlankEarth_o *that; // x8
  UnityEngine_Transform_o *blankEarth; // x0
  struct BlankEarth_o *v5; // x8
  UnityEngine_GameObject_o *earthRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  struct BlankEarth_o *v8; // x8
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Transform_o *v10; // x0
  struct BlankEarth_o *v11; // x8
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Transform_o *v13; // x0

  that = this->fields.that;
  if ( !that )
    goto LABEL_13;
  blankEarth = that->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_13;
  UnityEngine_Transform__set_rotation(blankEarth, this->fields.qua_to, 0LL);
  v5 = this->fields.that;
  if ( !v5 )
    goto LABEL_13;
  earthRoot = v5->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_13;
  transform = UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_rotation(transform, this->fields.root_qua_to, 0LL);
  v8 = this->fields.that;
  if ( !v8
    || (v9 = v8->fields.earthRoot) == 0LL
    || (v10 = UnityEngine_GameObject__get_transform(v9, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localPosition(v10, this->fields.root_pos_to, 0LL), (v11 = this->fields.that) == 0LL)
    || (v12 = v11->fields.earthRoot) == 0LL
    || (v13 = UnityEngine_GameObject__get_transform(v12, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v13, this->fields.root_scl_to, 0LL);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x20
  float IntpTime_AutoResume; // s0
  UnityEngine_Component_o *v20; // x0
  float v21; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x8
  UnityEngine_Transform_o *v31; // x0
  __int64 v32; // x8
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v35; // x8
  __int64 v36; // x8
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  TerminalPramsManager_c *v46; // x0
  System_Int32_array **BlankEarthTransformData_k__BackingField; // x1
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x8
  int v53; // w10
  __int64 v54; // x9
  int v55; // w8
  float v56; // s9
  float y; // s4
  float z; // s5
  float v59; // s3
  float v60; // s0
  float v61; // s1
  float v62; // s2
  float v63; // s3
  UnityEngine_Transform_o *v64; // x0
  float v65; // s9
  float v66; // s10
  float v67; // s11
  float v68; // s12
  __int64 v69; // x8
  BlankEarth_o *v70; // x0
  EasingObject_o *v71; // x20
  System_Action_o *v72; // x21
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_Action_o *v77; // x22
  __int64 v78; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v86; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_40F7085 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v7);
    sub_B16FFC(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, v8);
    sub_B16FFC(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, v9);
    sub_B16FFC(&BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo, v10);
    byte_40F7085 = 1;
  }
  v11 = sub_B170CC(BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo, that, method, v3, v4);
  BlankEarth_StateZoomOut___c__DisplayClass0_0___ctor((BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_34;
  *(_QWORD *)(v11 + 24) = that;
  v18 = v11 + 24;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)that, v12, v13, v14, v15, v16, v17);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__ResetBlankEarthSpotInfo(0LL);
  if ( !*(_QWORD *)v18 )
    goto LABEL_34;
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(*(float *)(*(_QWORD *)v18 + 80LL), 0LL);
  if ( !*(_QWORD *)v18 )
    goto LABEL_34;
  v20 = *(UnityEngine_Component_o **)(*(_QWORD *)v18 + 24LL);
  if ( !v20 )
    goto LABEL_34;
  v21 = IntpTime_AutoResume;
  gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 16) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), Component_UIWidget, v24, v25, v26, v27, v28, v29);
  v30 = *(_QWORD *)(v11 + 24);
  if ( !v30 )
    goto LABEL_34;
  v31 = *(UnityEngine_Transform_o **)(v30 + 24);
  if ( !v31 )
    goto LABEL_34;
  rotation = UnityEngine_Transform__get_rotation(v31, 0LL);
  v32 = *(_QWORD *)(v11 + 24);
  *(UnityEngine_Quaternion_o *)(v11 + 48) = rotation;
  if ( !v32 )
    goto LABEL_34;
  v33 = *(UnityEngine_GameObject_o **)(v32 + 32);
  if ( !v33 )
    goto LABEL_34;
  transform = UnityEngine_GameObject__get_transform(v33, 0LL);
  if ( !transform )
    goto LABEL_34;
  v83 = UnityEngine_Transform__get_rotation(transform, 0LL);
  v35 = *(_QWORD *)(v11 + 24);
  *(UnityEngine_Quaternion_o *)(v11 + 80) = v83;
  if ( !v35 )
    goto LABEL_34;
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v35 + 32), 0LL);
  v36 = *(_QWORD *)(v11 + 24);
  *(UnityEngine_Vector3_o *)(v11 + 108) = LocalPosition;
  if ( !v36 )
    goto LABEL_34;
  v37 = *(UnityEngine_GameObject_o **)(v36 + 32);
  if ( !v37 )
    goto LABEL_34;
  v38 = UnityEngine_GameObject__get_gameObject(v37, 0LL);
  *(UnityEngine_Vector3_o *)(v11 + 132) = GameObjectExtensions__GetLocalScale(v38, 0LL);
  if ( !byte_40F7164 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v39);
    byte_40F7164 = 1;
  }
  v46 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v46 = TerminalPramsManager_TypeInfo;
  }
  BlankEarthTransformData_k__BackingField = (System_Int32_array **)v46->static_fields->_BlankEarthTransformData_k__BackingField;
  *(_QWORD *)(v11 + 152) = BlankEarthTransformData_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 152),
    BlankEarthTransformData_k__BackingField,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v52 = *(_QWORD *)(v11 + 152);
  if ( !v52 )
  {
    if ( *(_QWORD *)v18 )
    {
      v56 = *(float *)(*(_QWORD *)v18 + 72LL);
      up = UnityEngine_Vector3__get_up(0LL);
      y = up.fields.y;
      z = up.fields.z;
      up.fields.y = up.fields.x;
      up.fields.z = y;
      v59 = z;
      *(UnityEngine_Quaternion_o *)&v60 = UnityEngine_Quaternion__AngleAxis(
                                            v56,
                                            *(UnityEngine_Vector3_o *)&up.fields.y,
                                            0LL);
      if ( *(_QWORD *)v18 )
      {
        v64 = *(UnityEngine_Transform_o **)(*(_QWORD *)v18 + 24LL);
        if ( v64 )
        {
          v65 = v60;
          v66 = v61;
          v67 = v62;
          v68 = v63;
          v86 = UnityEngine_Transform__get_rotation(v64, 0LL);
          v84.fields.x = v65;
          v84.fields.y = v66;
          v84.fields.z = v67;
          v84.fields.w = v68;
          v85 = UnityEngine_Quaternion__op_Multiply(v84, v86, 0LL);
          v69 = *(_QWORD *)(v11 + 24);
          *(float *)(v11 + 36) = v85.fields.y;
          *(float *)(v11 + 44) = v85.fields.w;
          *(_DWORD *)(v11 + 32) = 0;
          *(_DWORD *)(v11 + 40) = 0;
          if ( v69 )
          {
            *(_OWORD *)(v11 + 64) = *(_OWORD *)(v69 + 240);
            zero = UnityEngine_Vector3__get_zero(0LL);
            v70 = *(BlankEarth_o **)(v11 + 24);
            *(UnityEngine_Vector3_o *)(v11 + 96) = zero;
            if ( v70 )
            {
              *(UnityEngine_Vector3_o *)(v11 + 120) = BlankEarth__GetDefaultEarthScale(v70, 0LL);
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_34:
    sub_B170D4();
  }
  *(_OWORD *)(v11 + 32) = *(_OWORD *)(v52 + 16);
  *(_OWORD *)(v11 + 64) = *(_OWORD *)(v52 + 32);
  v53 = *(_DWORD *)(v52 + 56);
  *(_QWORD *)(v11 + 96) = *(_QWORD *)(v52 + 48);
  *(_DWORD *)(v11 + 104) = v53;
  v54 = *(_QWORD *)(v52 + 60);
  v55 = *(_DWORD *)(v52 + 68);
  *(_QWORD *)(v11 + 120) = v54;
  *(_DWORD *)(v11 + 128) = v55;
LABEL_31:
  *(_BYTE *)(v11 + 144) = 0;
  v71 = *(EasingObject_o **)(v11 + 16);
  v72 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
  System_Action___ctor(v72, (Il2CppObject *)v11, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, 0LL);
  v77 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v73, v74, v75, v76);
  System_Action___ctor(v77, (Il2CppObject *)v11, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, 0LL);
  v78 = *(_QWORD *)(v11 + 24);
  if ( !v78 || !v71 )
    goto LABEL_34;
  EasingObject__Play_33167332(v71, 1.0, 0.0, v21, v72, v77, 0.0, *(_DWORD *)(v78 + 176), 0LL);
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
  double v5; // d8
  double v6; // d0
  struct BlankEarth_o *that; // x8
  UnityEngine_Transform_o *blankEarth; // x20
  float v9; // s10
  int v10; // s0
  struct BlankEarth_o *v14; // x8
  UnityEngine_GameObject_o *earthRoot; // x0
  UnityEngine_Transform_o *transform; // x20
  int v17; // s0
  struct BlankEarth_o *v21; // x8
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Transform_o *v23; // x0
  float32x2_t v24; // d10
  float z; // s11
  float32x2_t v26; // d13
  float v27; // s12
  UnityEngine_Transform_o *v28; // x20
  float v29; // s0
  float v30; // s0
  float v31; // s2
  unsigned __int64 v32; // d0 OVERLAPPED
  float v33; // s2
  int v34; // s1
  struct BlankEarth_o *v35; // x8
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  float32x2_t v38; // d10
  float v39; // s11
  float32x2_t v40; // d13
  float v41; // s12
  UnityEngine_Transform_o *v42; // x20
  float v43; // s0
  float v44; // s0
  float v45; // s2
  unsigned __int64 v46; // d0 OVERLAPPED
  float v47; // s2
  int v48; // s1
  struct BlankEarth_o *v49; // x8
  ScrTerminalListTop_o *mTerminalList; // x0

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_19;
  mStartTime = eo->fields.mStartTime;
  v5 = mStartTime;
  v6 = StepFunc__AccSig(mStartTime, 0LL);
  that = this->fields.that;
  if ( !that )
    goto LABEL_19;
  blankEarth = that->fields.blankEarth;
  v9 = v6;
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Slerp(this->fields.qua_to, this->fields.qua_from, v9, 0LL);
  if ( !blankEarth )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v10, 0LL);
  v14 = this->fields.that;
  if ( !v14 )
    goto LABEL_19;
  earthRoot = v14->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_19;
  transform = UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  *(UnityEngine_Quaternion_o *)&v17 = UnityEngine_Quaternion__Slerp(
                                        this->fields.root_qua_to,
                                        this->fields.root_qua_from,
                                        v9,
                                        0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v17, 0LL);
  v21 = this->fields.that;
  if ( !v21 )
    goto LABEL_19;
  v22 = v21->fields.earthRoot;
  if ( !v22 )
    goto LABEL_19;
  v23 = UnityEngine_GameObject__get_transform(v22, 0LL);
  v24.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_pos_to.fields.x;
  z = this->fields.root_pos_to.fields.z;
  v26.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_pos_from.fields.x;
  v27 = this->fields.root_pos_from.fields.z;
  v28 = v23;
  v29 = StepFunc__DecSin(v5, 0LL);
  v30 = UnityEngine_Mathf__Clamp01(v29, 0LL);
  if ( !v28 )
    goto LABEL_19;
  v31 = (float)(v27 - z) * v30;
  v32 = vadd_f32(v24, vmul_n_f32(vsub_f32(v26, v24), v30)).n64_u64[0];
  v33 = z + v31;
  v34 = HIDWORD(v32);
  UnityEngine_Transform__set_localPosition(v28, *(UnityEngine_Vector3_o *)&v32, 0LL);
  v35 = this->fields.that;
  if ( !v35 )
    goto LABEL_19;
  v36 = v35->fields.earthRoot;
  if ( !v36 )
    goto LABEL_19;
  v37 = UnityEngine_GameObject__get_transform(v36, 0LL);
  v38.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_scl_to.fields.x;
  v39 = this->fields.root_scl_to.fields.z;
  v40.n64_u64[0] = *(unsigned __int64 *)&this->fields.root_scl_from.fields.x;
  v41 = this->fields.root_scl_from.fields.z;
  v42 = v37;
  v43 = StepFunc__Acc5(v5, 0LL);
  v44 = UnityEngine_Mathf__Clamp01(v43, 0LL);
  if ( !v42 )
    goto LABEL_19;
  v45 = (float)(v41 - v39) * v44;
  v46 = vadd_f32(v38, vmul_n_f32(vsub_f32(v40, v38), v44)).n64_u64[0];
  v47 = v39 + v45;
  v48 = HIDWORD(v46);
  UnityEngine_Transform__set_localScale(v42, *(UnityEngine_Vector3_o *)&v46, 0LL);
  if ( !this->fields.isStartRotateBtn )
  {
    v49 = this->fields.that;
    if ( !v49 )
      goto LABEL_19;
    if ( mStartTime < v49->fields.zoomOutFrameInRotateBtnRate )
    {
      this->fields.isStartRotateBtn = 1;
      mTerminalList = v49->fields.mTerminalList;
      if ( mTerminalList )
      {
        ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(mTerminalList, v49->fields.earthBtnMoveSpeedTime, 1, 0, 0LL);
        return;
      }
LABEL_19:
      sub_B170D4();
    }
  }
}


void __fastcall BlankEarth_StateZoomOut___c__DisplayClass0_0___begin_b__1(
        BlankEarth_StateZoomOut___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  struct BlankEarthTransform_o *blankEarthTransform; // x9
  struct BlankEarth_o *that; // x8
  float totalAngle; // s0
  struct BlankEarth_o *v6; // x8
  UnityEngine_Transform_o *blankEarth; // x0
  struct BlankEarth_o *v8; // x8
  UnityEngine_GameObject_o *earthRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  struct BlankEarth_o *v11; // x8
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Transform_o *v13; // x0
  struct BlankEarth_o *v14; // x8
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Transform_o *v16; // x0
  struct BlankEarth_o *v17; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_Component_o *mActionBgColl; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct BlankEarth_o *v21; // x8
  ScrTerminalListTop_o *v22; // x0
  PlayMakerFSM_o *MyFsmP; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  BlankEarth_o *v25; // x0

  if ( (byte_40F78CA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18982, method);
    byte_40F78CA = 1;
  }
  blankEarthTransform = this->fields.blankEarthTransform;
  that = this->fields.that;
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
  v6 = this->fields.that;
  if ( !v6 )
    goto LABEL_28;
  blankEarth = v6->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_28;
  UnityEngine_Transform__set_rotation(blankEarth, this->fields.qua_to, 0LL);
  v8 = this->fields.that;
  if ( !v8 )
    goto LABEL_28;
  earthRoot = v8->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_28;
  transform = UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !transform )
    goto LABEL_28;
  UnityEngine_Transform__set_rotation(transform, this->fields.root_qua_to, 0LL);
  v11 = this->fields.that;
  if ( !v11 )
    goto LABEL_28;
  v12 = v11->fields.earthRoot;
  if ( !v12 )
    goto LABEL_28;
  v13 = UnityEngine_GameObject__get_transform(v12, 0LL);
  if ( !v13 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v13, this->fields.root_pos_to, 0LL);
  v14 = this->fields.that;
  if ( !v14 )
    goto LABEL_28;
  v15 = v14->fields.earthRoot;
  if ( !v15 )
    goto LABEL_28;
  v16 = UnityEngine_GameObject__get_transform(v15, 0LL);
  if ( !v16 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v16, this->fields.root_scl_to, 0LL);
  v17 = this->fields.that;
  if ( !v17 )
    goto LABEL_28;
  mTerminalList = v17->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_28;
  mActionBgColl = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl;
  if ( !mActionBgColl )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject(mActionBgColl, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (v21 = this->fields.that) == 0LL)
    || (v22 = v21->fields.mTerminalList) == 0LL
    || (MyFsmP = ScrTerminalListTop__mfGetMyFsmP(v22, 0LL)) == 0LL
    || (Fsm = PlayMakerFSM__get_Fsm(MyFsmP, 0LL)) == 0LL
    || (HutongGames_PlayMaker_Fsm__Event_14544876(Fsm, (System_String_o *)StringLiteral_18982, 0LL),
        (v25 = this->fields.that) == 0LL) )
  {
LABEL_28:
    sub_B170D4();
  }
  BlankEarth__SetState(v25, 2, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct BlankEarth_o *_4__this; // x20
  Il2CppObject *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct BlankEarth___c__DisplayClass84_0_o *_8__1; // x0
  System_Int32_array **finishCallback; // x1
  float time_5__2; // s0
  bool v29; // w21
  float v30; // s8
  Il2CppObject **p__2__current; // x19
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  MissionNotifyManager_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x22
  System_Action_o *v49; // x23
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **adapter; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_IEnumerator_o *v63; // x0

  if ( (byte_40F71EA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8);
    sub_B16FFC(&Method_BlankEarth___c__DisplayClass84_0__CoCheckTutorial_g__OnFinish_0__, v9);
    sub_B16FFC(&BlankEarth___c__DisplayClass84_0_TypeInfo, v10);
    byte_40F71EA = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    time_5__2 = this->fields._time_5__2;
    this->fields.__1__state = -1;
    if ( time_5__2 > 5.0 )
      goto LABEL_12;
    if ( !_4__this )
      goto LABEL_21;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    v13 = (Il2CppObject *)sub_B170CC(BlankEarth___c__DisplayClass84_0_TypeInfo, method, v2, v3, v4);
    System_Object___ctor(v13, 0LL);
    this->fields.__8__1 = (struct BlankEarth___c__DisplayClass84_0_o *)v13;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__8__1,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_21;
    finishCallback = (System_Int32_array **)this->fields.finishCallback;
    _8__1->fields.finishCallback = (struct System_Action_o *)finishCallback;
    sub_B16F98((BattleServantConfConponent_o *)&_8__1->fields, finishCallback, v20, v21, v22, v23, v24, v25);
    this->fields._time_5__2 = 0.0;
    if ( !_4__this )
      goto LABEL_21;
  }
  v29 = 1;
  if ( BlankEarth__IsJustState(_4__this, 1, 0LL) )
  {
    v30 = this->fields._time_5__2;
    this->fields._time_5__2 = v30 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v32, v33, v34, v35, v36, v37);
    *((_DWORD *)p__2__current - 2) = 1;
    return v29;
  }
LABEL_12:
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v38 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v38 )
    goto LABEL_21;
  MissionNotifyManager__StartPause(v38, 0LL);
  v43 = sub_B170CC(EventTutorialMaster_EventTutorialArgs_TypeInfo, v39, v40, v41, v42);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v43, 0LL);
  if ( !v43 )
    goto LABEL_21;
  *(_DWORD *)(v43 + 20) = 83;
  v48 = (Il2CppObject *)this->fields.__8__1;
  v49 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v44, v45, v46, v47);
  System_Action___ctor(v49, v48, Method_BlankEarth___c__DisplayClass84_0__CoCheckTutorial_g__OnFinish_0__, 0LL);
  *(_QWORD *)(v43 + 24) = v49;
  sub_B16F98((BattleServantConfConponent_o *)(v43 + 24), (System_Int32_array **)v49, v50, v51, v52, v53, v54, v55);
  adapter = (System_Int32_array **)this->fields.adapter;
  *(_QWORD *)(v43 + 48) = adapter;
  sub_B16F98((BattleServantConfConponent_o *)(v43 + 48), adapter, v57, v58, v59, v60, v61, v62);
  v63 = EventTutorialMaster__CoroutineCheckTutorial((EventTutorialMaster_EventTutorialArgs_o *)v43, 0LL);
  if ( !_4__this )
LABEL_21:
    sub_B170D4();
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)_4__this, v63, 0LL);
  v29 = 0;
  _4__this->fields.isTutorialAvailable = 0;
  return v29;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BlankEarth__CoCheckTutorial_d__84_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
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
      sub_B170D4();
  }
  if ( BlankEarth__IsJustState(_4__this, this->fields.state, 0LL) )
  {
    time_5__2 = this->fields._time_5__2;
    this->fields._time_5__2 = time_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BlankEarth__CoStandByChangeState_d__86_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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

  if ( (byte_40F71E8 & 1) == 0 )
  {
    sub_B16FFC(&BlankEarth___c_TypeInfo, v1);
    byte_40F71E8 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BlankEarth___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BlankEarth___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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

  if ( (byte_40F71E9 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_40F71E9 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B170D4();
  MissionNotifyManager__EndPause(v4, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}