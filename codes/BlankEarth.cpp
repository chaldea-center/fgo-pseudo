void BlankEarth___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  struct BlankEarth_StaticFields *static_fields; // x8
  BlankEarth_c *v8; // x9
  int32_t v9; // w1
  struct BlankEarth_StaticFields *v10; // x0
  int32_t v11; // w1
  struct BlankEarth_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596CDE1 & 1) == 0 )
  {
    sub_2213A60(&BlankEarth_TypeInfo);
    sub_2213A60(&StringLiteral_18049/*"blankEarthRotateKey"*/);
    sub_2213A60(&StringLiteral_11082/*"PlanetEarthRotateKey_"*/);
    byte_596CDE1 = 1;
  }
  static_fields = BlankEarth_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SOUTH_POLE_ROTATE.fields.x = 1118568448;
  v8 = BlankEarth_TypeInfo;
  static_fields->SOUTH_POLE_ROTATE.fields.z = 0.0;
  v9 = StringLiteral_18049/*"blankEarthRotateKey"*/;
  v10 = v8->static_fields;
  v10->BLANK_EARTH_ROTATE_KEY = (struct System_String_o *)StringLiteral_18049/*"blankEarthRotateKey"*/;
  v10 = (struct BlankEarth_StaticFields *)((char *)v10 + 16);
  v10[-1].EARTH_NO_DISP_SPOT_UI_SPRITE_DOT = 86.0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v10, v9, v1, v2, v3, v4, v5, v6);
  v11 = StringLiteral_11082/*"PlanetEarthRotateKey_"*/;
  v12 = BlankEarth_TypeInfo->static_fields;
  v12->PlanetEarthRotateKeyPrefix = (struct System_String_o *)StringLiteral_11082/*"PlanetEarthRotateKey_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->PlanetEarthRotateKeyPrefix, v11, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)&BlankEarth_TypeInfo->static_fields->EARTH_DISP_SPOT_UI_SPRITE_DOT = 0x3E19999A3E99999ALL;
}


void BlankEarth___ctor(BlankEarth_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  __int64 v10; // x1
  __int64 v11; // x2
  BlankEarth_c *v12; // x0
  int v13; // w8

  if ( (byte_596CDE0 & 1) == 0 )
  {
    sub_2213A60(&BlankEarth_TypeInfo);
    sub_2213A60(&StringLiteral_17568/*"ar223"*/);
    byte_596CDE0 = 1;
  }
  v9 = StringLiteral_17568/*"ar223"*/;
  this->fields.startupSeName = (struct System_String_o *)StringLiteral_17568/*"ar223"*/;
  *(_OWORD *)&this->fields.greenwichOffset = xmmword_E9BE00;
  *(_OWORD *)&this->fields.zoomInScl = xmmword_E9CBE0;
  *(_QWORD *)&this->fields.startupAnimTime = 0x3F00000040000000LL;
  this->fields.startupFrameInRotateBtnRate = 0.125;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.startupSeName, v9, v2, v3, v4, v5, v6, v7);
  v12 = BlankEarth_TypeInfo;
  *(_OWORD *)&this->fields.firstAnimTime = xmmword_E9C9D0;
  *(_OWORD *)&this->fields.zoomInPos.fields.y = xmmword_E9BF40;
  *(_QWORD *)&this->fields.adjustEarthScale.fields.z = 0x3E8000003F400000LL;
  this->fields.btnSpeedRate = 3.5;
  *(_QWORD *)&this->fields.zoomInEasingType = 0x300000003LL;
  v13 = *(&v12->_2.cctor_finished + 1);
  this->fields.startupEasingType = 2;
  *(_QWORD *)&this->fields.object1DispSpotUISpriteDot = 0x3ECCCCCD3F266666LL;
  if ( !v13 )
  {
    j_il2cpp_runtime_class_init_0(v12, v10, v11);
    v12 = BlankEarth_TypeInfo;
  }
  this->fields.maxAngle = v12->static_fields->SouthPoleRotateAngle;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BlankEarth__Awake(BlankEarth_o *this, const MethodInfo *method)
{
  struct CStateManager_BlankEarth__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v12; // x22
  UnityEngine_GameObject_o *earthRoot; // x0
  CStateManager_T__o *v14; // x21
  Il2CppObject *v15; // x22
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x21
  Il2CppObject *v19; // x22
  CStateManager_T__o *v20; // x21
  Il2CppObject *v21; // x22
  CStateManager_T__o *v22; // x21
  BlankEarth_StateQAARotate_o *v23; // x22
  CStateManager_T__o *v24; // x21
  BlankEarth_StateShortcutRotate_o *v25; // x22
  CStateManager_T__o *v26; // x21
  BlankEarth_StateGrandStartup_o *v27; // x22
  CStateManager_T__o *v28; // x20
  BlankEarth_StateGrandMain_o *v29; // x21
  const MethodInfo *v30; // x2

  if ( (byte_596CDB7 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_BlankEarth___ctor__);
    sub_2213A60(&Method_CStateManager_BlankEarth__add__);
    sub_2213A60(&CStateManager_BlankEarth__TypeInfo);
    sub_2213A60(&BlankEarth_StateGrandMain_TypeInfo);
    sub_2213A60(&BlankEarth_StateGrandStartup_TypeInfo);
    sub_2213A60(&BlankEarth_StateMain_TypeInfo);
    sub_2213A60(&BlankEarth_StateNone_TypeInfo);
    sub_2213A60(&BlankEarth_StateQAARotate_TypeInfo);
    sub_2213A60(&BlankEarth_StateShortcutRotate_TypeInfo);
    sub_2213A60(&BlankEarth_StateStartup_TypeInfo);
    sub_2213A60(&BlankEarth_StateZoomIn_TypeInfo);
    sub_2213A60(&BlankEarth_StateZoomOut_TypeInfo);
    byte_596CDB7 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_2213CCC(CStateManager_BlankEarth__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      9,
      (const MethodInfo_3E83D54 *)Method_CStateManager_BlankEarth___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarth__o *)v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_2213CCC(BlankEarth_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_17;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3E83E04 *)Method_CStateManager_BlankEarth__add__);
    v14 = (CStateManager_T__o *)*p_mFSM;
    v15 = (Il2CppObject *)sub_2213CCC(BlankEarth_StateStartup_TypeInfo);
    System_Object___ctor(v15, 0);
    if ( !v14 )
      goto LABEL_17;
    CStateManager_object___add(
      v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_3E83E04 *)Method_CStateManager_BlankEarth__add__);
    v16 = (CStateManager_T__o *)*p_mFSM;
    v17 = (Il2CppObject *)sub_2213CCC(BlankEarth_StateMain_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_17;
    CStateManager_object___add(
      v16,
      2,
      (IState_T__o *)v17,
      (const MethodInfo_3E83E04 *)Method_CStateManager_BlankEarth__add__);
    v18 = (CStateManager_T__o *)*p_mFSM;
    v19 = (Il2CppObject *)sub_2213CCC(BlankEarth_StateZoomIn_TypeInfo);
    System_Object___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_17;
    CStateManager_object___add(
      v18,
      3,
      (IState_T__o *)v19,
      (const MethodInfo_3E83E04 *)Method_CStateManager_BlankEarth__add__);
    v20 = (CStateManager_T__o *)*p_mFSM;
    v21 = (Il2CppObject *)sub_2213CCC(BlankEarth_StateZoomOut_TypeInfo);
    System_Object___ctor(v21, 0);
    if ( !v20 )
      goto LABEL_17;
    CStateManager_object___add(
      v20,
      4,
      (IState_T__o *)v21,
      (const MethodInfo_3E83E04 *)Method_CStateManager_BlankEarth__add__);
    v22 = (CStateManager_T__o *)*p_mFSM;
    v23 = (BlankEarth_StateQAARotate_o *)sub_2213CCC(BlankEarth_StateQAARotate_TypeInfo);
    BlankEarth_StateQAARotate___ctor(v23, 0);
    if ( !v22 )
      goto LABEL_17;
    CStateManager_object___add(
      v22,
      5,
      (IState_T__o *)v23,
      (const MethodInfo_3E83E04 *)Method_CStateManager_BlankEarth__add__);
    v24 = (CStateManager_T__o *)*p_mFSM;
    v25 = (BlankEarth_StateShortcutRotate_o *)sub_2213CCC(BlankEarth_StateShortcutRotate_TypeInfo);
    BlankEarth_StateShortcutRotate___ctor(v25, 0);
    if ( !v24 )
      goto LABEL_17;
    CStateManager_object___add(
      v24,
      6,
      (IState_T__o *)v25,
      (const MethodInfo_3E83E04 *)Method_CStateManager_BlankEarth__add__);
    v26 = (CStateManager_T__o *)*p_mFSM;
    v27 = (BlankEarth_StateGrandStartup_o *)sub_2213CCC(BlankEarth_StateGrandStartup_TypeInfo);
    BlankEarth_StateGrandStartup___ctor(v27, 0);
    if ( !v26
      || (CStateManager_object___add(
            v26,
            7,
            (IState_T__o *)v27,
            (const MethodInfo_3E83E04 *)Method_CStateManager_BlankEarth__add__),
          v28 = (CStateManager_T__o *)*p_mFSM,
          v29 = (BlankEarth_StateGrandMain_o *)sub_2213CCC(BlankEarth_StateGrandMain_TypeInfo),
          BlankEarth_StateGrandMain___ctor(v29, 0),
          !v28) )
    {
LABEL_17:
      sub_2213CDC(earthRoot, method);
    }
    CStateManager_object___add(
      v28,
      8,
      (IState_T__o *)v29,
      (const MethodInfo_3E83E04 *)Method_CStateManager_BlankEarth__add__);
    BlankEarth__SetState(this, 0, v30);
  }
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_17;
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0);
  if ( !earthRoot )
    goto LABEL_17;
  this->fields.mRootQua = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)earthRoot, 0);
}


void BlankEarth__BlunkEarthMainOperation(
        BlankEarth_o *this,
        BlankEarth_o *that,
        float *inertialSpeedX,
        float *inertialSpeedY,
        const MethodInfo *method)
{
  BlankEarth_o *v8; // x22
  float btnSpeedRate; // s0
  float v10; // s0
  __int64 v11; // x2
  CTouch_c *v12; // x0
  float x; // s8
  int v14; // w8
  float v15; // s0
  CTouch_c *v16; // x0
  float y; // s9
  float v18; // s0
  float v19; // s9
  float v20; // s8
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v22; // s4
  float v23; // s0
  float v24; // s3
  float v25; // s2
  float v26; // s1
  float v27; // s10
  float v28; // s0
  float v29; // s11
  float v30; // s0
  float *p_totalAngle; // x22
  float totalAngle; // t1
  float v33; // s0
  float v34; // s1
  float v35; // s1
  float v36; // s2
  float *v37; // x8
  float v38; // s1
  float maxAngle; // s2
  float v40; // s0
  BlankEarth_o *v41; // x22
  float v42; // s8
  float v43; // s9
  float z; // s10
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_596CDC0 & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_2213A60(&CTouch_TypeInfo);
    byte_596CDC0 = 1;
  }
  if ( !that )
LABEL_72:
    sub_2213CDC(this, that);
  if ( that->fields.isBtnTouchX )
  {
    btnSpeedRate = that->fields.btnSpeedRate;
    if ( !that->fields.isLeft )
      btnSpeedRate = -btnSpeedRate;
    *inertialSpeedX = btnSpeedRate;
  }
  else if ( that->fields.isBtnTouchY )
  {
    v10 = that->fields.btnSpeedRate;
    if ( that->fields.isUp )
      v10 = -v10;
    *inertialSpeedY = v10;
  }
  if ( that->fields.isTouch )
  {
    *inertialSpeedX = 0.0;
    *inertialSpeedY = 0.0;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, that, inertialSpeedX);
    if ( CTouch__isDrag(0) )
    {
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, that, v11);
      if ( !byte_596CDF4 )
      {
        sub_2213A60(&CTouch_TypeInfo);
        byte_596CDF4 = 1;
      }
      v12 = CTouch_TypeInfo;
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, that, v11);
        v12 = CTouch_TypeInfo;
      }
      x = v12->static_fields->mScrPosDelta.fields.x;
      if ( !byte_596CDF5 )
      {
        sub_2213A60(&CTouch_TypeInfo);
        v12 = CTouch_TypeInfo;
        byte_596CDF5 = 1;
      }
      v14 = *(&v12->_2.cctor_finished + 1);
      if ( !v14 )
      {
        j_il2cpp_runtime_class_init_0(v12, that, v11);
        v12 = CTouch_TypeInfo;
        v14 = *(&CTouch_TypeInfo->_2.cctor_finished + 1);
      }
      v15 = v12->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v15) )
        v15 = x;
      *inertialSpeedX = v15 * -0.2;
      if ( !v14 )
        j_il2cpp_runtime_class_init_0(v12, that, v11);
      if ( !byte_596CDF4 )
      {
        sub_2213A60(&CTouch_TypeInfo);
        byte_596CDF4 = 1;
      }
      v16 = CTouch_TypeInfo;
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, that, v11);
        v16 = CTouch_TypeInfo;
      }
      y = v16->static_fields->mScrPosDelta.fields.y;
      if ( !byte_596CDF5 )
      {
        sub_2213A60(&CTouch_TypeInfo);
        v16 = CTouch_TypeInfo;
        byte_596CDF5 = 1;
      }
      if ( !*(&v16->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v16, that, v11);
        v16 = CTouch_TypeInfo;
      }
      v18 = v16->static_fields->mScrPosDeltaOld.fields.y;
      if ( fabsf(y) >= fabsf(v18) )
        v18 = y;
      v19 = v18 * -0.2;
LABEL_53:
      *inertialSpeedY = v19;
    }
  }
  else
  {
    v20 = *inertialSpeedX;
    if ( !byte_5969AE4 )
    {
      sub_2213A60(&UnityEngine_Mathf_TypeInfo);
      byte_5969AE4 = 1;
    }
    v19 = 0.0;
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    v22 = fmaxf(fabsf(v20), 0.0) * 0.000001;
    v23 = static_fields->Epsilon * 8.0;
    v24 = vabds_f32(0.0, v20);
    if ( v22 <= v23 )
      v25 = static_fields->Epsilon * 8.0;
    else
      v25 = v22;
    if ( v24 >= v25 )
      goto LABEL_75;
    v26 = fmaxf(fabsf(*inertialSpeedY), 0.0) * 0.000001;
    if ( v26 > v23 )
      v23 = v26;
    if ( vabds_f32(0.0, *inertialSpeedY) >= v23 )
    {
LABEL_75:
      v27 = *inertialSpeedX;
      v28 = v27 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0);
      if ( fabsf(v28) < 0.004 )
        v28 = 0.0;
      *inertialSpeedX = v28;
      v29 = *inertialSpeedY;
      v30 = v29 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0);
      *inertialSpeedY = v30;
      if ( fabsf(v30) < 0.004 )
        goto LABEL_53;
    }
  }
  if ( v8->fields.isExecQuestAction )
  {
    totalAngle = v8->fields.totalAngle;
    p_totalAngle = &v8->fields.totalAngle;
    v33 = totalAngle;
    v34 = totalAngle + *inertialSpeedY;
    if ( v34 > 180.0 )
    {
      v35 = 180.0 - v33;
      *inertialSpeedY = 180.0 - v33;
      v33 = *p_totalAngle;
      v34 = v35 + *p_totalAngle;
    }
    if ( v34 < -180.0 )
    {
      v36 = 180.0;
      v37 = p_totalAngle;
LABEL_62:
      v40 = (float)-v36 - v33;
      *inertialSpeedY = v40;
      v34 = *v37 + v40;
      goto LABEL_64;
    }
    v37 = p_totalAngle;
  }
  else
  {
    v38 = *inertialSpeedY;
    v33 = v8->fields.totalAngle;
    maxAngle = v8->fields.maxAngle;
    v37 = &v8->fields.totalAngle;
    if ( maxAngle < (float)(v33 + *inertialSpeedY) )
    {
      v38 = maxAngle - v33;
      *inertialSpeedY = maxAngle - v33;
      v33 = *v37;
    }
    v36 = v8->fields.maxAngle;
    v34 = v33 + v38;
    if ( v34 < (float)-v36 )
      goto LABEL_62;
  }
LABEL_64:
  this = (BlankEarth_o *)that->fields.blankEarth;
  *v37 = v34;
  if ( !this )
    goto LABEL_72;
  this = (BlankEarth_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !that->fields.blankEarth )
    goto LABEL_72;
  v41 = this;
  this = (BlankEarth_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)that->fields.blankEarth, 0);
  if ( !this )
    goto LABEL_72;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  v42 = position.fields.x;
  v43 = position.fields.y;
  z = position.fields.z;
  if ( !byte_5969AE7 )
  {
    this = (BlankEarth_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE7 = 1;
  }
  if ( !v41 )
    goto LABEL_72;
  v46.fields.y = v43;
  v46.fields.z = z;
  v46.fields.x = v42;
  UnityEngine_Transform__RotateAround(
    (UnityEngine_Transform_o *)v41,
    v46,
    UnityEngine_Vector3_TypeInfo->static_fields->rightVector,
    -*inertialSpeedY,
    0);
  this = (BlankEarth_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_72;
  v47.fields.y = *inertialSpeedX;
  v47.fields.x = 0.0;
  v47.fields.z = 0.0;
  UnityEngine_Transform__Rotate_83494216((UnityEngine_Transform_o *)this, v47, 0);
}


UnityEngine_Vector3_o BlankEarth__CalcPosFromLatLong(
        BlankEarth_o *this,
        float latitudeDegree,
        float longitudeDegree,
        float z,
        const MethodInfo *method)
{
  float v7; // s8
  float earthRadius; // s10
  float v9; // s11
  float v10; // s9
  float v11; // s1
  float v12; // s0
  float v13; // s2
  float v14; // [xsp+0h] [xbp-40h] BYREF
  float v15; // [xsp+4h] [xbp-3Ch] BYREF
  float cosx; // [xsp+8h] [xbp-38h] BYREF
  float sinx; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v7 = (float)(this->fields.greenwichOffset + longitudeDegree) * 0.017453;
  sincosf(latitudeDegree * 0.017453, &sinx, &cosx);
  earthRadius = this->fields.earthRadius;
  v9 = sinx;
  v10 = cosx * (float)(earthRadius + z);
  sincosf(v7, &v15, &v14);
  v11 = v9 * earthRadius;
  v12 = v14 * v10;
  v13 = v15 * v10;
  result.fields.z = v13;
  result.fields.y = v11;
  result.fields.x = v12;
  return result;
}


void BlankEarth__CheckTutorial(
        BlankEarth_o *this,
        TutorialCommunicateAdapter_o *adapter,
        TutorialCommunicateAdapter_o *afterActionAdapter,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x4
  System_Collections_IEnumerator_o *v11; // x1

  if ( this->fields.isTutorialAvailable
    && (BlankEarth__GetState(this, (const MethodInfo *)adapter) == 2 || BlankEarth__GetState(this, v9) == 1) )
  {
    v11 = BlankEarth__CoCheckTutorial(this, adapter, afterActionAdapter, finishCallback, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v11, 0);
  }
  else
  {
    ActionExtensions__Call(finishCallback, 0);
  }
}


System_Collections_IEnumerator_o *BlankEarth__CoCheckTutorial(
        BlankEarth_o *this,
        TutorialCommunicateAdapter_o *adapter,
        TutorialCommunicateAdapter_o *afterActionAdapter,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  if ( (byte_596CDC1 & 1) == 0 )
  {
    sub_2213A60(&BlankEarth__CoCheckTutorial_d__118_TypeInfo);
    byte_596CDC1 = 1;
  }
  v9 = sub_2213CCC(BlankEarth__CoCheckTutorial_d__118_TypeInfo);
  BlankEarth__CoCheckTutorial_d__118___ctor((BlankEarth__CoCheckTutorial_d__118_o *)v9, 0, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 56) = adapter;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 56), (int32_t)adapter, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 64) = afterActionAdapter;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 64), (int32_t)afterActionAdapter, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v9 + 32) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)finishCallback, v30, v31, v32, v33, v34, v35);
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *BlankEarth__CoStandByChangeState(
        BlankEarth_o *this,
        int32_t state,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_596CDC2 & 1) == 0 )
  {
    sub_2213A60(&BlankEarth__CoStandByChangeState_d__120_TypeInfo);
    byte_596CDC2 = 1;
  }
  v7 = sub_2213CCC(BlankEarth__CoStandByChangeState_d__120_TypeInfo);
  BlankEarth__CoStandByChangeState_d__120___ctor((BlankEarth__CoStandByChangeState_d__120_o *)v7, 0, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = state;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)finishCallback, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


UnityEngine_Quaternion_o BlankEarth__ConvertLatLongToSafePointQuaternion(
        BlankEarth_o *this,
        UnityEngine_Vector2_o latLongVector,
        const MethodInfo *method)
{
  float maxAngle; // s2
  float v5; // s3
  float v6; // s1
  float v7; // s8
  float earthRadius; // s9
  float v9; // s11
  float v10; // s10
  __int64 v11; // x1
  __int64 v12; // x2
  float v13; // s8
  float v14; // s12
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s2
  float x; // s0
  float y; // s1
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v23; // [xsp+8h] [xbp-48h] BYREF
  float v24; // [xsp+Ch] [xbp-44h] BYREF
  float cosx; // [xsp+18h] [xbp-38h] BYREF
  float sinx; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( this->fields.isExecQuestAction )
    maxAngle = 180.0;
  else
    maxAngle = this->fields.maxAngle;
  v5 = -maxAngle;
  if ( maxAngle >= latLongVector.fields.x )
    maxAngle = latLongVector.fields.x;
  v6 = latLongVector.fields.y + this->fields.greenwichOffset;
  if ( latLongVector.fields.x < v5 )
    maxAngle = v5;
  v7 = v6 * 0.017453;
  sincosf(maxAngle * 0.017453, &sinx, &cosx);
  earthRadius = this->fields.earthRadius;
  v9 = sinx;
  v10 = (float)(earthRadius + 0.0) * cosx;
  sincosf(v7, &v24, &v23);
  v13 = v23;
  v14 = v24;
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  v15 = v13 * v10;
  v16 = earthRadius * v9;
  v17 = v14 * v10;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v11, v12);
  v18 = sqrtf((float)(v17 * v17) + (float)((float)(v16 * v16) + (float)(v15 * v15)));
  if ( v18 <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v15 / v18;
    y = v16 / v18;
    z = v17 / v18;
  }
  v27.fields.x = -x;
  v27.fields.y = -y;
  v27.fields.z = -z;
  v28 = UnityEngine_Quaternion__LookRotation_83371248(v27, 0);
  return UnityEngine_Quaternion__Inverse(v28, 0);
}


void BlankEarth__CreateGimmick(
        BlankEarth_o *this,
        UnityEngine_GameObject_o *obj,
        BlankEarthGimmickEntity_o *gimmickEnt,
        float x,
        float y,
        float z,
        const MethodInfo *method)
{
  Il2CppObject *v13; // x21
  System_String_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x22
  System_String_o *v17; // x0
  UnityEngine_Transform_o *blankEarth; // x8
  UnityEngine_Transform_o *v19; // x20
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CDCB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3308/*"BlankEarthGimmick_"*/);
    byte_596CDCB = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, gimmickEnt);
  v13 = UnityEngine_Object__Instantiate_object_(
          (Il2CppObject *)obj,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_42897232((UnityEngine_GameObject_o *)v13, this->fields.earthGimmickRoot, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  GameObjectExtensions__SetLocalScale(
    (UnityEngine_GameObject_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  if ( !v13 )
    goto LABEL_14;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
  if ( !gimmickEnt )
    goto LABEL_14;
  v16 = (UnityEngine_Object_o *)transform;
  v17 = System_Int32__ToString((int)gimmickEnt + 16, 0);
  transform = System_String__Concat_75651716((System_String_o *)StringLiteral_3308/*"BlankEarthGimmick_"*/, v17, 0);
  if ( !v16 )
    goto LABEL_14;
  UnityEngine_Object__set_name(v16, transform, 0);
  GameObjectExtensions__SetLocalPosition_42891620((UnityEngine_GameObject_o *)v13, x, y, z, 0);
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
  blankEarth = this->fields.blankEarth;
  if ( !blankEarth
    || (v19 = (UnityEngine_Transform_o *)transform, position = UnityEngine_Transform__get_position(blankEarth, 0), !v19)
    || (UnityEngine_Transform__LookAt_83495412(v19, position, 0),
        (transform = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v13,
                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___)) == 0) )
  {
LABEL_14:
    sub_2213CDC(transform, v15);
  }
  BlankEarthGimmickComponent__Setup((BlankEarthGimmickComponent_o *)transform, gimmickEnt, 0);
}


BlankEarthPoint_o *BlankEarth__CreateSpot(
        BlankEarth_o *this,
        UnityEngine_GameObject_o *spotObj,
        BlankEarthSpotEntity_o *spotEnt,
        float x,
        float y,
        float z,
        const MethodInfo *method)
{
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  TerminalSceneComponent_c *v17; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v19; // x1
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_GameObject_o *v32; // x22
  UnityEngine_Object_o *v33; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  int32_t onObjectType; // w8
  float v36; // s11
  float v37; // s12
  float v38; // s13
  UnityEngine_GameObject_o *klass; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  Il2CppObject *v42; // x24
  UnityEngine_Object_o *transform; // x23
  System_String_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CDD2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&StringLiteral_3309/*"BlankEarthPoint_"*/);
    byte_596CDD2 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, spotObj, spotEnt);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v17 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, spotObj, spotEnt);
    v17 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v17->static_fields->mInstance;
  v19 = *p_mInstance;
  this->fields.mTerminalScene = *p_mInstance;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTerminalScene,
    (int32_t)v19,
    (System_String_o *)spotEnt,
    (System_String_o *)method,
    v7,
    v8,
    v9,
    v10);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_39;
  mTerminalList = mTerminalScene->fields.mTerminalList;
  this->fields.mTerminalList = mTerminalList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTerminalList,
    (int32_t)mTerminalList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   (Il2CppObject *)spotObj,
                                                   (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_39;
  v32 = Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
  v33 = (UnityEngine_Object_o *)Component_object;
  if ( !byte_5969AE0 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !spotEnt )
    goto LABEL_39;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  onObjectType = spotEnt->fields.onObjectType;
  v36 = static_fields->zeroVector.fields.x;
  v37 = static_fields->zeroVector.fields.y;
  v38 = static_fields->zeroVector.fields.z;
  if ( onObjectType == 1 )
  {
    Component_object = this->fields.otherObjectRoot;
    if ( !Component_object )
      goto LABEL_39;
    v42 = UnityEngine_GameObject__GetComponent_object_(
            Component_object,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v41);
    Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v42, 0, 0);
    klass = 0;
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      if ( !v42 )
        goto LABEL_39;
      klass = (UnityEngine_GameObject_o *)v42[2].klass;
      if ( !klass )
        goto LABEL_39;
      Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)v42[2].klass,
                                                       0);
      if ( !Component_object )
        goto LABEL_39;
      goto LABEL_27;
    }
  }
  else
  {
    if ( !onObjectType )
    {
      Component_object = (UnityEngine_GameObject_o *)this->fields.blankEarth;
      if ( !Component_object )
        goto LABEL_39;
      klass = this->fields.earthSpotRoot;
LABEL_27:
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)Component_object, 0);
      v36 = position.fields.x;
      v37 = position.fields.y;
      v38 = position.fields.z;
      goto LABEL_29;
    }
    klass = 0;
  }
LABEL_29:
  GameObjectExtensions__SetParent_42897232(v32, klass, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  GameObjectExtensions__SetLocalScale(v32, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v32, 0);
  v44 = System_Int32__ToString((int)spotEnt + 16, 0);
  Component_object = (UnityEngine_GameObject_o *)System_String__Concat_75651716(
                                                   (System_String_o *)StringLiteral_3309/*"BlankEarthPoint_"*/,
                                                   v44,
                                                   0);
  if ( !transform )
    goto LABEL_39;
  UnityEngine_Object__set_name(transform, (System_String_o *)Component_object, 0);
  GameObjectExtensions__SetLocalPosition_42891620(v32, x, y, z, 0);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v32, 0);
  if ( !Component_object )
    goto LABEL_39;
  v49.fields.x = v36;
  v49.fields.y = v37;
  v49.fields.z = v38;
  UnityEngine_Transform__LookAt_83495412((UnityEngine_Transform_o *)Component_object, v49, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45, v46);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v33, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( v33 )
    {
      BlankEarthPoint__SetEarthObj(
        (BlankEarthPoint_o *)v33,
        spotEnt,
        this,
        this->fields.mEarthCamera,
        this->fields.earthRoot,
        0);
      return (BlankEarthPoint_o *)v33;
    }
LABEL_39:
    sub_2213CDC(Component_object, v21);
  }
  return (BlankEarthPoint_o *)v33;
}


void BlankEarth__ExecuteAfterStartUpScaling(
        BlankEarth_o *this,
        System_Action_o *startupScalingEndCallback,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( BlankEarth__GetState(this, (const MethodInfo *)startupScalingEndCallback) == 1 )
  {
    this->fields.scalingEndCallback = startupScalingEndCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.scalingEndCallback,
      (int32_t)startupScalingEndCallback,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  else
  {
    ActionExtensions__Call(startupScalingEndCallback, 0);
  }
}


void BlankEarth__FocusAndSaveRotation(BlankEarth_o *this, BlankEarthSpotEntity_o *spotEnt, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *blankEarth; // x0
  const MethodInfo *v7; // x1
  float x; // s0
  float maxAngle; // s1
  float v10; // s2
  float v11; // s0
  UnityEngine_Quaternion_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( spotEnt && !spotEnt->fields.onObjectType )
  {
    v12 = BlankEarth__ConvertLatLongToSafePointQuaternion(
            this,
            *(UnityEngine_Vector2_o *)&spotEnt->fields.x,
            (const MethodInfo *)spotEnt);
    blankEarth = this->fields.blankEarth;
    if ( !blankEarth )
      sub_2213CDC(0, v5);
    UnityEngine_Transform__set_rotation(blankEarth, v12, 0);
    x = spotEnt->fields.x;
    if ( this->fields.isExecQuestAction )
      maxAngle = 180.0;
    else
      maxAngle = this->fields.maxAngle;
    v10 = -maxAngle;
    if ( maxAngle >= x )
      maxAngle = spotEnt->fields.x;
    if ( x >= v10 )
      v11 = maxAngle;
    else
      v11 = v10;
    this->fields.totalAngle = v11;
    BlankEarth__SaveEarthRotate(this, v7);
  }
}


AssetData_o *BlankEarth__GetAssetData(BlankEarth_o *this, const MethodInfo *method)
{
  AssetData_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  AssetManager_o *v7; // x19

  if ( (byte_596CDD1 & 1) == 0 )
  {
    sub_2213A60(&ScrTerminalListTop_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596CDD1 = 1;
  }
  result = this->fields.assetData;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v7 = (AssetManager_o *)Instance;
    if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v5, v6);
    if ( !v7 )
      sub_2213CDC(Instance, v5);
    return AssetManager__GetAsset_47522544(v7, ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH, 0);
  }
  return result;
}


int32_t BlankEarth__GetCurrentMapId(BlankEarth_o *this, const MethodInfo *method)
{
  struct MapEntity_o *mapEntity; // x8

  mapEntity = this->fields.mapEntity;
  if ( mapEntity )
    return mapEntity->fields.id;
  else
    return 0;
}


UnityEngine_Vector3_o BlankEarth__GetDefaultEarthScale(BlankEarth_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->oneVector.fields.x;
  y = static_fields->oneVector.fields.y;
  z = static_fields->oneVector.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


System_Single_array *BlankEarth__GetDefaultRotateData(BlankEarth_o *this, int32_t mapId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  BlankEarth_c *v7; // x8
  Il2CppObject *v8; // x19
  unsigned int monitor; // w9
  struct BlankEarth_StaticFields *static_fields; // x8
  float v11; // s0
  __int64 v12; // x0
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x20
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596CDC3 & 1) == 0 )
  {
    sub_2213A60(&BlankEarth_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&float___TypeInfo);
    sub_2213A60(&StringLiteral_3065/*"BLANK_EARTH_DEFAULT_ROTATE_DATA_{0}"*/);
    byte_596CDC3 = 1;
  }
  Master_object = (Il2CppObject *)sub_2213B20(float___TypeInfo, 4);
  v7 = BlankEarth_TypeInfo;
  v8 = Master_object;
  if ( !*(&BlankEarth_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo, v5, v6);
    v7 = BlankEarth_TypeInfo;
  }
  if ( !v8 )
    goto LABEL_15;
  monitor = (unsigned int)v8[1].monitor;
  if ( !monitor
    || (static_fields = v7->static_fields,
        *(float *)&v8[2].klass = static_fields->SOUTH_POLE_ROTATE.fields.x,
        monitor == 1)
    || (HIDWORD(v8[2].klass) = LODWORD(static_fields->SOUTH_POLE_ROTATE.fields.y), monitor <= 2)
    || (*(float *)&v8[2].monitor = static_fields->SOUTH_POLE_ROTATE.fields.z, monitor == 3) )
  {
    sub_2213CE4(Master_object);
  }
  v11 = -static_fields->SouthPoleRotateAngle;
  v18 = mapId;
  v12 = qword_5984348;
  *((float *)&v8[2].monitor + 1) = v11;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(v12, &v18);
  v16 = System_String__Format((System_String_o *)StringLiteral_3065/*"BLANK_EARTH_DEFAULT_ROTATE_DATA_{0}"*/, v13, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
LABEL_15:
    sub_2213CDC(Master_object, v5);
  return ConstantStrMaster__GetValueFloatArray((ConstantStrMaster_o *)Master_object, v16, (System_Single_array *)v8, 0);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthGimmickComponent_o *BlankEarth__GetEarthGimmick(
        BlankEarth_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent_o *result; // x0
  UnityEngine_Transform_o *transform; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *v9; // x19
  bool v10; // w8
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = gimmickId;
  if ( (byte_596CDC7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3308/*"BlankEarthGimmick_"*/);
    byte_596CDC7 = 1;
  }
  result = (BlankEarthGimmickComponent_o *)this->fields.earthGimmickRoot;
  if ( !result )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0);
  v6 = System_Int32__ToString((int32_t)&v11, 0);
  result = (BlankEarthGimmickComponent_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_3308/*"BlankEarthGimmick_"*/, v6, 0);
  if ( !transform )
    goto LABEL_12;
  v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)result, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = UnityEngine_Object__op_Inequality(v9, 0, 0);
  result = 0;
  if ( v10 )
  {
    if ( v9 )
    {
      result = (BlankEarthGimmickComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
      if ( result )
        return (BlankEarthGimmickComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)result,
                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    }
LABEL_12:
    sub_2213CDC(result, *(_QWORD *)&gimmickId);
  }
  return result;
}


System_String_o *BlankEarth__GetGimmickPrefabName(BlankEarthGimmickEntity_o *gimmick, const MethodInfo *method)
{
  BlankEarthGimmickEntity_o *v2; // x19
  Il2CppObject *v3; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = gimmick;
  if ( (byte_596CDCA & 1) == 0 )
  {
    gimmick = (BlankEarthGimmickEntity_o *)sub_2213A60(&StringLiteral_6090/*"EarthGimmick_{0:00000}"*/);
    byte_596CDCA = 1;
  }
  if ( !v2 )
    sub_2213CDC(gimmick, method);
  objectId = v2->fields.objectId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_6090/*"EarthGimmick_{0:00000}"*/, v3, 0);
}


System_String_o *BlankEarth__GetObjPrefabName(BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  BlankEarthSpotEntity_o *v2; // x19
  Il2CppObject *v3; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = spot;
  if ( (byte_596CDD0 & 1) == 0 )
  {
    spot = (BlankEarthSpotEntity_o *)sub_2213A60(&StringLiteral_6092/*"EarthPoint_{0:00000}"*/);
    byte_596CDD0 = 1;
  }
  if ( !v2 )
    sub_2213CDC(spot, method);
  objectId = v2->fields.objectId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_6092/*"EarthPoint_{0:00000}"*/, v3, 0);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthOtherObject_o *BlankEarth__GetOtherObject(BlankEarth_o *this, int32_t objId, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  UnityEngine_GameObject_o *earthRoot; // x19
  int v9; // w20
  System_String_o *BlankEarthOtherObjectFromScript; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x19

  if ( (byte_596CDC6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_712/*"(Clone)"*/);
    byte_596CDC6 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&objId, method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             objId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
  if ( Entity )
  {
    earthRoot = this->fields.earthRoot;
    v9 = (int)Entity;
    BlankEarthOtherObjectFromScript = BlankEarthGimmickEntity__GetBlankEarthOtherObjectFromScript(
                                        (BlankEarthGimmickEntity_o *)Entity,
                                        0);
    v11 = System_Int32__ToString(v9 + 28, 0);
    v12 = System_String__Concat_75696856(
            BlankEarthOtherObjectFromScript,
            (System_String_o *)StringLiteral_16746/*"_"*/,
            v11,
            (System_String_o *)StringLiteral_712/*"(Clone)"*/,
            0);
    v15 = (UnityEngine_Object_o *)GameObjectExtensions__Find(earthRoot, v12, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(v15, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( v15 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)v15,
                                                                        0);
        if ( Master_object )
          return (BlankEarthOtherObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)Master_object,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      }
LABEL_14:
      sub_2213CDC(Master_object, v6);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
BlankEarthPoint_o *BlankEarth__GetPoint(
        BlankEarth_o *this,
        int32_t spotId,
        int32_t onPointType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *otherObjectRoot; // x0
  void *Component_object; // x19
  UnityEngine_GameObject_o *earthSpotRoot; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *v13; // x20
  __int64 v14; // x2
  BlankEarthPoint_o *result; // x0
  UnityEngine_Transform_o *v16; // x19
  System_String_o *v17; // x0
  UnityEngine_Transform_o *transform; // x19
  System_String_o *v19; // x0
  bool v20; // w8
  UnityEngine_Component_o *v21; // x0
  bool v22; // w8
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  v23 = spotId;
  if ( (byte_596CDC5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3309/*"BlankEarthPoint_"*/);
    byte_596CDC5 = 1;
  }
  otherObjectRoot = this->fields.otherObjectRoot;
  if ( otherObjectRoot )
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         otherObjectRoot,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
  else
    Component_object = 0;
  if ( onPointType == 1 )
  {
    if ( Component_object )
    {
      result = (BlankEarthPoint_o *)*((_QWORD *)Component_object + 4);
      if ( !result )
        goto LABEL_34;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0);
      v19 = System_Int32__ToString((int32_t)&v23, 0);
      result = (BlankEarthPoint_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_3309/*"BlankEarthPoint_"*/, v19, 0);
      if ( !transform )
        goto LABEL_34;
      Component_object = UnityEngine_Transform__Find(transform, (System_String_o *)result, 0);
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&spotId, *(_QWORD *)&onPointType);
    v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    result = 0;
    if ( v20 )
    {
      if ( !Component_object )
        goto LABEL_34;
      v21 = (UnityEngine_Component_o *)Component_object;
LABEL_31:
      result = (BlankEarthPoint_o *)UnityEngine_Component__get_gameObject(v21, 0);
      if ( result )
        return (BlankEarthPoint_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)result,
                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
LABEL_34:
      sub_2213CDC(result, *(_QWORD *)&spotId);
    }
  }
  else
  {
    if ( onPointType )
      return 0;
    earthSpotRoot = this->fields.earthSpotRoot;
    v9 = System_Int32__ToString((int32_t)&v23, 0);
    v10 = System_String__Concat_75651716((System_String_o *)StringLiteral_3309/*"BlankEarthPoint_"*/, v9, 0);
    v13 = (UnityEngine_Object_o *)GameObjectExtensions__Find(earthSpotRoot, v10, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( UnityEngine_Object__op_Equality(v13, 0, 0) )
    {
      if ( Component_object )
      {
        result = (BlankEarthPoint_o *)*((_QWORD *)Component_object + 4);
        if ( !result )
          goto LABEL_34;
        v16 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0);
        v17 = System_Int32__ToString((int32_t)&v23, 0);
        result = (BlankEarthPoint_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_3309/*"BlankEarthPoint_"*/, v17, 0);
        if ( !v16 )
          goto LABEL_34;
        v13 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v16, (System_String_o *)result, 0);
      }
      else
      {
        v13 = 0;
      }
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&spotId, v14);
    v22 = UnityEngine_Object__op_Inequality(v13, 0, 0);
    result = 0;
    if ( v22 )
    {
      if ( !v13 )
        goto LABEL_34;
      v21 = (UnityEngine_Component_o *)v13;
      goto LABEL_31;
    }
  }
  return result;
}


System_String_o *BlankEarth__GetRotateSaveKey(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BlankEarth_c *v4; // x0
  struct MapEntity_o *mapEntity; // x8
  int v6; // w9
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *PlanetEarthRotateKeyPrefix; // x19
  System_String_o *v10; // x1

  if ( (byte_596CDB9 & 1) == 0 )
  {
    sub_2213A60(&BlankEarth_TypeInfo);
    byte_596CDB9 = 1;
  }
  v4 = BlankEarth_TypeInfo;
  mapEntity = this->fields.mapEntity;
  v6 = *(&BlankEarth_TypeInfo->_2.cctor_finished + 1);
  if ( mapEntity )
  {
    if ( !v6 )
    {
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo, method, v2);
      mapEntity = this->fields.mapEntity;
      if ( !mapEntity )
        sub_2213CDC(v7, v8);
    }
    PlanetEarthRotateKeyPrefix = BlankEarth_TypeInfo->static_fields->PlanetEarthRotateKeyPrefix;
    v10 = System_Int32__ToString((int)mapEntity + 16, 0);
    return System_String__Concat_75651716(PlanetEarthRotateKeyPrefix, v10, 0);
  }
  else
  {
    if ( !v6 )
    {
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo, method, v2);
      v4 = BlankEarth_TypeInfo;
    }
    return v4->static_fields->BLANK_EARTH_ROTATE_KEY;
  }
}


float BlankEarth__GetSafeLatitude(BlankEarth_o *this, float latitudeDegree, const MethodInfo *method)
{
  float maxAngle; // s1
  float v4; // s2

  if ( this->fields.isExecQuestAction )
    maxAngle = 180.0;
  else
    maxAngle = this->fields.maxAngle;
  v4 = -maxAngle;
  if ( maxAngle >= latitudeDegree )
    maxAngle = latitudeDegree;
  if ( v4 <= latitudeDegree )
    return maxAngle;
  else
    return v4;
}


System_String_o *BlankEarth__GetSpotPrefabName(BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  BlankEarthSpotEntity_o *v2; // x19
  Il2CppObject *v3; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = spot;
  if ( (byte_596CDCF & 1) == 0 )
  {
    spot = (BlankEarthSpotEntity_o *)sub_2213A60(&StringLiteral_6092/*"EarthPoint_{0:00000}"*/);
    byte_596CDCF = 1;
  }
  if ( !v2 )
    sub_2213CDC(spot, method);
  objectId = v2->fields.objectId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_6092/*"EarthPoint_{0:00000}"*/, v3, 0);
}


int32_t BlankEarth__GetState(BlankEarth_o *this, const MethodInfo *method)
{
  BlankEarth_o *v2; // x19
  struct CStateManager_BlankEarth__o *mFSM; // x8

  v2 = this;
  if ( (byte_596CDBE & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_2213A60(&Method_CStateManager_BlankEarth__getState__);
    byte_596CDBE = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(this, method);
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
bool BlankEarth__IsJustState(BlankEarth_o *this, int32_t state, const MethodInfo *method)
{
  return BlankEarth__GetState(this, *(const MethodInfo **)&state) == state;
}


bool BlankEarth__IsPlanetEarth(BlankEarth_o *this, const MethodInfo *method)
{
  return this->fields.mapEntity != 0;
}


bool BlankEarth__IsPlayFirstAnim(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct MapEntity_o *mapEntity; // x8
  int32_t warId; // w19
  int32_t PlanetEarthChapterStateSaveData; // w0

  if ( (byte_596CDBC & 1) == 0 )
  {
    sub_2213A60(&ScrTerminalListTop_TypeInfo);
    byte_596CDBC = 1;
  }
  mapEntity = this->fields.mapEntity;
  if ( mapEntity )
  {
    warId = mapEntity->fields.warId;
    if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, method, v2);
    PlanetEarthChapterStateSaveData = ScrTerminalListTop__GetPlanetEarthChapterStateSaveData(warId, 0);
  }
  else
  {
    if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, method, v2);
    PlanetEarthChapterStateSaveData = ScrTerminalListTop__GetWhiteEarthChapterStateSaveData(0);
  }
  return PlanetEarthChapterStateSaveData == 1;
}


UnityEngine_Quaternion_o BlankEarth__LoadEarthRotate(BlankEarth_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct MapEntity_o *mapEntity; // x8
  int32_t id; // w3
  const MethodInfo *v6; // x1
  System_String_o *RotateSaveKey; // x0
  System_String_o *String_83398240; // x0
  __int64 v9; // x1
  System_String_o *v10; // x21
  System_String_array *v11; // x20
  __int64 v12; // x0
  float v13; // s0
  int max_length; // w8
  float v15; // s0
  float v16; // s8
  float v17; // s0
  float v18; // s9
  float v19; // s0
  float maxAngleData; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Quaternion_o rotateData; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mapEntity = this->fields.mapEntity;
  *(_QWORD *)&rotateData.fields.x = 0;
  *(_QWORD *)&rotateData.fields.z = 0;
  maxAngleData = 0.0;
  if ( mapEntity )
    id = mapEntity->fields.id;
  else
    id = 0;
  BlankEarth__SetupByDefaultRotateData(this, &rotateData, &maxAngleData, id, v2);
  RotateSaveKey = BlankEarth__GetRotateSaveKey(this, v6);
  String_83398240 = UnityEngine_PlayerPrefs__GetString_83398240(RotateSaveKey, 0);
  if ( !String_83398240 )
    goto LABEL_13;
  v10 = String_83398240;
  v11 = System_String__Split(String_83398240, 0x2Cu, 0, 0);
  String_83398240 = (System_String_o *)System_String__IsNullOrEmpty(v10, 0);
  if ( ((unsigned __int8)String_83398240 & 1) != 0 )
  {
LABEL_12:
    result = rotateData;
    this->fields.totalAngle = maxAngleData;
    return result;
  }
  if ( !v11 )
LABEL_13:
    sub_2213CDC(String_83398240, v9);
  if ( LODWORD(v11->max_length) != 4 )
    goto LABEL_12;
  v13 = System_Single__Parse(v11->m_Items[3], 0);
  max_length = v11->max_length;
  this->fields.totalAngle = v13;
  if ( !max_length
    || (v15 = System_Single__Parse(v11->m_Items[0], 0), (v11->max_length & 0xFFFFFFFE) == 0)
    || (v16 = v15, v17 = System_Single__Parse(v11->m_Items[1], 0), LODWORD(v11->max_length) <= 2) )
  {
    sub_2213CE4(v12);
  }
  v18 = v17;
  v19 = System_Single__Parse(v11->m_Items[2], 0);
  v22.fields.y = v18 * 0.017453;
  v22.fields.z = v19 * 0.017453;
  v22.fields.x = v16 * 0.017453;
  return UnityEngine_Quaternion__Internal_FromEulerRad(v22, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__OnApplicationPause(BlankEarth_o *this, bool paused, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( paused && BlankEarth__GetState(this, (const MethodInfo *)paused) == 2 )
    BlankEarth__SaveEarthRotate(this, v4);
}


void BlankEarth__OnPress(BlankEarth_o *this, const MethodInfo *method)
{
  this->fields.isTouch = 1;
}


void BlankEarth__OnPressRotateBtnX(BlankEarth_o *this, bool isLeft, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_596CDDD & 1) == 0 )
  {
    sub_2213A60(&Method_BlankEarth_OnPressRotateBtnX__);
    byte_596CDDD = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnX__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnX__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_BlankEarth_OnPressRotateBtnX__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  this->fields.isLeft = isLeft;
  this->fields.isBtnTouchX = 1;
}


void BlankEarth__OnPressRotateBtnY(BlankEarth_o *this, bool isUp, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_596CDDE & 1) == 0 )
  {
    sub_2213A60(&Method_BlankEarth_OnPressRotateBtnY__);
    byte_596CDDE = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnY__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnY__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_BlankEarth_OnPressRotateBtnY__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  this->fields.isUp = isUp;
  this->fields.isBtnTouchY = 1;
}


void BlankEarth__OnRelease(BlankEarth_o *this, const MethodInfo *method)
{
  this->fields.isTouch = 0;
}


void BlankEarth__OnReleaseRotateBtn(BlankEarth_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isBtnTouchX = 0;
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__PlayOtherObjectUniqueAnim(
        BlankEarth_o *this,
        BlankEarthGimmickEntity_o *otherObjEnt,
        int32_t animIndex,
        bool isQuick,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *OtherObject; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1

  OtherObject = (UnityEngine_Object_o *)otherObjEnt;
  if ( (byte_596CDDB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CDDB = 1;
  }
  if ( OtherObject )
    OtherObject = (UnityEngine_Object_o *)BlankEarth__GetOtherObject(
                                            this,
                                            OtherObject->fields.m_CachedPtr,
                                            *(const MethodInfo **)&animIndex);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, otherObjEnt, *(_QWORD *)&animIndex);
  v11 = UnityEngine_Object__op_Equality(OtherObject, 0, 0);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0);
  }
  else
  {
    if ( !OtherObject )
      sub_2213CDC(v11, v12);
    BlankEarthOtherObject__PlayOtherObjUniqueAnim(
      (BlankEarthOtherObject_o *)OtherObject,
      animIndex,
      isQuick,
      finishCallback,
      0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__PlaySpotUniqueAnim(
        BlankEarth_o *this,
        BlankEarthSpotEntity_o *spot,
        int32_t animIndex,
        bool isQuick,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *Point; // x22
  _BOOL8 v14; // x0
  __int64 v15; // x1

  if ( (byte_596CDDA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CDDA = 1;
  }
  if ( !spot )
    goto LABEL_7;
  Point = (UnityEngine_Object_o *)BlankEarth__GetPoint(this, spot->fields.id, 0, (const MethodInfo *)isQuick);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  v14 = UnityEngine_Object__op_Equality(Point, 0, 0);
  if ( !v14 )
  {
    if ( !Point )
      sub_2213CDC(v14, v15);
    BlankEarthPoint__PlaySpotUniqueAnim((BlankEarthPoint_o *)Point, animIndex, isQuick, finishCallback, 0);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(finishCallback, 0);
  }
}


void BlankEarth__PutGimmick(
        BlankEarth_o *this,
        AssetData_o *data,
        BlankEarthGimmickEntity_o *gimmick,
        const MethodInfo *method)
{
  BlankEarth_o *v6; // x20
  float z; // s9
  float v8; // s8
  float v9; // s10
  float v10; // s12
  float earthRadius; // s11
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  float v14; // s8
  float v15; // s13
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Object_object__58532980; // x21
  const MethodInfo *v19; // x3
  float v20; // [xsp+8h] [xbp-68h] BYREF
  float v21; // [xsp+Ch] [xbp-64h] BYREF
  float cosx; // [xsp+48h] [xbp-28h] BYREF
  float sinx; // [xsp+4Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_596CDC9 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&BlankEarth_TypeInfo);
    this = (BlankEarth_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CDC9 = 1;
  }
  if ( !gimmick )
    goto LABEL_12;
  z = gimmick->fields.z;
  v8 = (float)(gimmick->fields.y + v6->fields.greenwichOffset) * 0.017453;
  sincosf(gimmick->fields.x * 0.017453, &sinx, &cosx);
  v10 = cosx;
  v9 = sinx;
  earthRadius = v6->fields.earthRadius;
  sincosf(v8, &v21, &v20);
  v15 = v20;
  v14 = v21;
  if ( !*(&BlankEarth_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo, v12, v13);
  this = (BlankEarth_o *)BlankEarth__GetGimmickPrefabName(gimmick, v12);
  if ( !data )
LABEL_12:
    sub_2213CDC(this, data);
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              data,
                              (System_String_o *)this,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
    BlankEarth__CreateGimmick(
      v6,
      (UnityEngine_GameObject_o *)Object_object__58532980,
      gimmick,
      v15 * (float)(v10 * (float)(z + earthRadius)),
      v9 * earthRadius,
      v14 * (float)(v10 * (float)(z + earthRadius)),
      v19);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__PutGimmicksByMapId(BlankEarth_o *this, AssetData_o *data, int32_t mapId, const MethodInfo *method)
{
  BlankEarthGimmickEntity_array *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  int max_length; // w8
  BlankEarthGimmickEntity_array *v11; // x21
  unsigned int v12; // w22
  BlankEarthGimmickEntity_o *v13; // x2

  if ( (byte_596CDC8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596CDC8 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, data, *(_QWORD *)&mapId);
  Master_object = (BlankEarthGimmickEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = BlankEarthGimmickMaster__GetGimmicks((BlankEarthGimmickMaster_o *)Master_object, mapId, 0);
  if ( !Master_object )
    goto LABEL_15;
  max_length = Master_object->max_length;
  v11 = Master_object;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_2213CE4(Master_object);
      v13 = v11->m_Items[v12];
      if ( !v13 )
        break;
      if ( !v13->fields.objectType )
        BlankEarth__PutGimmick(this, data, v13, v9);
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_15:
    sub_2213CDC(Master_object, v8);
  }
}


BlankEarthPoint_o *BlankEarth__PutSpot(BlankEarth_o *this, BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  BlankEarth_o *v4; // x20
  int32_t onObjectType; // w8
  float v6; // s8
  float v7; // s9
  float v8; // s11
  float earthRadius; // s10
  float v10; // s8
  float v11; // s12
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  AssetData_o *v15; // x21
  float y; // s9
  float v17; // s0
  float x; // s8
  float z; // s10
  Il2CppObject *Object_object__58532980; // x21
  UnityEngine_Object_o *otherObjectRoot; // x21
  BlankEarth_o *v22; // x21
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  __int64 v25; // x2
  AssetData_o *AssetData; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  const MethodInfo *v28; // x3
  float v30; // [xsp+0h] [xbp-60h] BYREF
  float v31; // [xsp+4h] [xbp-5Ch] BYREF
  float cosx; // [xsp+8h] [xbp-58h] BYREF
  float sinx; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596CDCE & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&BlankEarth_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    this = (BlankEarth_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CDCE = 1;
  }
  if ( !byte_5969AE0 )
  {
    this = (BlankEarth_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !spot )
    goto LABEL_27;
  onObjectType = spot->fields.onObjectType;
  if ( onObjectType == 1 )
  {
    otherObjectRoot = (UnityEngine_Object_o *)v4->fields.otherObjectRoot;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spot, method);
    if ( UnityEngine_Object__op_Equality(otherObjectRoot, 0, 0) )
      return 0;
    this = (BlankEarth_o *)v4->fields.otherObjectRoot;
    if ( !this )
      goto LABEL_27;
    this = (BlankEarth_o *)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    if ( !this )
      goto LABEL_27;
    v22 = this;
    LODWORD(x) = (unsigned int)GameObjectExtensions__GetLocalPosition(
                                 (UnityEngine_GameObject_o *)this->fields.blankEarth,
                                 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v22->fields.blankEarth, 0);
    y = LocalPosition.fields.y;
    AssetData = BlankEarth__GetAssetData(v4, v23);
    if ( !*(&BlankEarth_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo, v24, v25);
    this = (BlankEarth_o *)BlankEarth__GetObjPrefabName(spot, v24);
    if ( !AssetData )
      goto LABEL_27;
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                AssetData,
                                (System_String_o *)this,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    z = -43.0;
  }
  else
  {
    if ( !onObjectType )
    {
      v6 = (float)(spot->fields.y + v4->fields.greenwichOffset) * 0.017453;
      sincosf(spot->fields.x * 0.017453, &sinx, &cosx);
      v8 = cosx;
      v7 = sinx;
      earthRadius = v4->fields.earthRadius;
      sincosf(v6, &v31, &v30);
      v10 = v30;
      v11 = v31;
      v15 = BlankEarth__GetAssetData(v4, v12);
      if ( !*(&BlankEarth_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo, v13, v14);
      this = (BlankEarth_o *)BlankEarth__GetSpotPrefabName(spot, v13);
      if ( v15 )
      {
        y = v7 * earthRadius;
        v17 = v8 * (float)(earthRadius + 0.0);
        x = v10 * v17;
        z = v11 * v17;
        Object_object__58532980 = AssetData__GetObject_object__58532980(
                                    v15,
                                    (System_String_o *)this,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
        goto LABEL_22;
      }
LABEL_27:
      sub_2213CDC(this, spot);
    }
    Object_object__58532980 = 0;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    x = static_fields->zeroVector.fields.x;
  }
LABEL_22:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spot, method);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
    return 0;
  return BlankEarth__CreateSpot(v4, (UnityEngine_GameObject_o *)Object_object__58532980, spot, x, y, z, v28);
}


void BlankEarth__PutSpotEntities(
        BlankEarth_o *this,
        BlankEarthSpotEntity_array *blankEarthSpotList,
        const MethodInfo *method)
{
  System_Func_object__object__o *v5; // x21
  System_Collections_Generic_IEnumerable_T__o *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *v7; // x0

  if ( (byte_596CDCD & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
    sub_2213A60(&Method_BlankEarth_PutSpot__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
    sub_2213A60(&System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo);
    byte_596CDCD = 1;
  }
  v5 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo);
  System_Func_object__object____ctor(v5, (Il2CppObject *)this, Method_BlankEarth_PutSpot__, 0);
  v6 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)blankEarthSpotList,
                                                        (System_Func_TSource__TResult__o *)v5,
                                                        (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
  v7 = BasicHelper__ExcludeNull_object_(
         v6,
         (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
  System_Linq_Enumerable__ToArray_object_(
    (System_Collections_Generic_IEnumerable_TSource__o *)v7,
    (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__PutSpots(BlankEarth_o *this, int32_t mapId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  BlankEarthSpotEntity_array *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_596CDCC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596CDCC = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&mapId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v6);
  v7 = BlankEarthSpotMaster__GetByMapId((BlankEarthSpotMaster_o *)Master_object, mapId, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v7, 0) )
    BlankEarth__PutSpotEntities(this, v7, v8);
}


void BlankEarth__ResetBlankEarthSpotData(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8

  if ( (byte_596CDBB & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDBB = 1;
  }
  v4 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.mapEntity )
  {
    if ( !v4 )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    TerminalPramsManager__ResetPlanetEarthSpotInfo(0);
  }
  else
  {
    if ( !v4 )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    TerminalPramsManager__ResetBlankEarthSpotInfo(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__RevealEarthPoint(
        BlankEarth_o *this,
        BlankEarthSpotEntity_o *spot,
        int32_t dispType,
        bool isQuick,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Point; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1

  Point = (UnityEngine_Object_o *)spot;
  if ( (byte_596CDD8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CDD8 = 1;
  }
  if ( Point )
    Point = (UnityEngine_Object_o *)BlankEarth__GetPoint(
                                      this,
                                      Point->fields.m_CachedPtr,
                                      0,
                                      (const MethodInfo *)isQuick);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spot, *(_QWORD *)&dispType);
  v11 = UnityEngine_Object__op_Equality(Point, 0, 0);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0);
  }
  else
  {
    if ( !Point )
      sub_2213CDC(v11, v12);
    BlankEarthPoint__RevealOrConcealSpotAnim((BlankEarthPoint_o *)Point, dispType, isQuick, finishCallback, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__RevealOtherObject(
        BlankEarth_o *this,
        BlankEarthGimmickEntity_o *otherObjEnt,
        int32_t dispType,
        bool isQuick,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *OtherObject; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1

  OtherObject = (UnityEngine_Object_o *)otherObjEnt;
  if ( (byte_596CDD9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CDD9 = 1;
  }
  if ( OtherObject )
    OtherObject = (UnityEngine_Object_o *)BlankEarth__GetOtherObject(
                                            this,
                                            OtherObject->fields.m_CachedPtr,
                                            *(const MethodInfo **)&dispType);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, otherObjEnt, *(_QWORD *)&dispType);
  v11 = UnityEngine_Object__op_Equality(OtherObject, 0, 0);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0);
  }
  else
  {
    if ( !OtherObject )
      sub_2213CDC(v11, v12);
    BlankEarthOtherObject__RevealOrConcealOtherObjAnim(
      (BlankEarthOtherObject_o *)OtherObject,
      dispType,
      isQuick,
      finishCallback,
      0);
  }
}


void BlankEarth__RotateEarthByLatLong(
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
  __int64 v16; // x24
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  const MethodInfo *v35; // x2
  int32_t v36; // w1

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  if ( (byte_596CDD7 & 1) == 0 )
  {
    sub_2213A60(&BlankEarth_QAARotateEarthParam_TypeInfo);
    byte_596CDD7 = 1;
  }
  v16 = sub_2213CCC(BlankEarth_QAARotateEarthParam_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0);
  *(float *)(v16 + 16) = time;
  *(float *)(v16 + 20) = x;
  *(float *)(v16 + 24) = y;
  *(_DWORD *)(v16 + 28) = easeType;
  *(_QWORD *)(v16 + 32) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 32), (int32_t)finishCallback, v17, v18, v19, v20, v21, v22);
  this->fields.qaaRotateEarthParam = (struct BlankEarth_QAARotateEarthParam_o *)v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.qaaRotateEarthParam, v16, v23, v24, v25, v26, v27, v28);
  this->fields.rotateEarthTimeCalculateParam = rotateTimeCalculateParam;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rotateEarthTimeCalculateParam,
    (int32_t)rotateTimeCalculateParam,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( isShortcut )
    v36 = 6;
  else
    v36 = 5;
  BlankEarth__SetState(this, v36, v35);
}


void BlankEarth__RotateEarthTowardsGimmick(
        BlankEarth_o *this,
        BlankEarthGimmickEntity_o *blankEarthGimmickEntity,
        float time,
        int32_t easeType,
        bool isShortcut,
        System_Action_BlankEarth_QAARotateEarthResponse__o *finishCallback,
        const MethodInfo *method)
{
  __int64 v13; // x20
  const MethodInfo_36FFECC *v14; // x2

  if ( (byte_596CDD6 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_2213A60(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_596CDD6 = 1;
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
      0,
      method);
  }
  else
  {
    v13 = sub_2213CCC(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    v14 = (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___;
    *(_BYTE *)(v13 + 16) = 1;
    ActionExtensions__Call_object_((System_Action_T__o *)finishCallback, (Il2CppObject *)v13, v14);
  }
}


void BlankEarth__RotateEarthTowardsSpot(
        BlankEarth_o *this,
        BlankEarthSpotEntity_o *blankEarthSpotEntity,
        float time,
        int32_t easeType,
        bool isShortcut,
        System_Action_BlankEarth_QAARotateEarthResponse__o *finishCallback,
        BlankEarth_RotateEarthTimeCalculateParam_o *rotateTimeCalculateParam,
        const MethodInfo *method)
{
  __int64 v15; // x20
  const MethodInfo_36FFECC *v16; // x2

  if ( (byte_596CDD5 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_2213A60(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_596CDD5 = 1;
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
    v15 = sub_2213CCC(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0);
    v16 = (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___;
    *(_BYTE *)(v15 + 16) = 1;
    ActionExtensions__Call_object_((System_Action_T__o *)finishCallback, (Il2CppObject *)v15, v16);
  }
}


void BlankEarth__SaveBlankEarthSpotData(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *focusEarthPoint; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct BlankEarthPoint_o *v8; // x8
  int32_t spotId_k__BackingField; // w19
  TerminalPramsManager_c *v10; // x0
  int32_t v11; // w19
  TerminalPramsManager_c *v12; // x0

  if ( (byte_596CDBA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDBA = 1;
  }
  focusEarthPoint = (UnityEngine_Object_o *)this->fields.focusEarthPoint;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(focusEarthPoint, 0, 0);
  if ( !v5 )
  {
    v8 = this->fields.focusEarthPoint;
    if ( this->fields.mapEntity )
    {
      if ( v8 )
      {
        spotId_k__BackingField = v8->fields._spotId_k__BackingField;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
        if ( !byte_596CDEE )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596CDEE = 1;
        }
        v10 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
          v10 = TerminalPramsManager_TypeInfo;
        }
        v10->static_fields->_PlanetEarthSpotId_k__BackingField = spotId_k__BackingField;
        TerminalPramsManager__PlanetEarthSpotId_SaveData(0);
        return;
      }
LABEL_23:
      sub_2213CDC(v5, v6);
    }
    if ( !v8 )
      goto LABEL_23;
    v11 = v8->fields._spotId_k__BackingField;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
    if ( !byte_596CDEF )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDEF = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_BlankEarthSpotId_k__BackingField = v11;
    TerminalPramsManager__BlankEarthSpotId_SaveData(0);
  }
}


void BlankEarth__SaveEarthRotate(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  blankEarth = this->fields.blankEarth;
  if ( !blankEarth )
    sub_2213CDC(0, method);
  rotation = UnityEngine_Transform__get_rotation(blankEarth, 0);
  BlankEarth__SaveQuaternionAndTotalAngle(this, rotation, this->fields.totalAngle, v4);
}


void BlankEarth__SavePlayedFirstAnim(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct MapEntity_o *mapEntity; // x8
  int32_t warId; // w19

  if ( (byte_596CDBD & 1) == 0 )
  {
    sub_2213A60(&ScrTerminalListTop_TypeInfo);
    byte_596CDBD = 1;
  }
  mapEntity = this->fields.mapEntity;
  if ( mapEntity )
  {
    warId = mapEntity->fields.warId;
    if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, method, v2);
    ScrTerminalListTop__SetPlanetEarthChapterStateSaveData(warId, 0, 0);
  }
  else
  {
    if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, method, v2);
    ScrTerminalListTop__SetWhiteEarthChapterStateSaveData(0, 0);
  }
}


void BlankEarth__SaveQuaternionAndTotalAngle(
        BlankEarth_o *this,
        UnityEngine_Quaternion_o qua,
        float totalAngle,
        const MethodInfo *method)
{
  float w; // s8
  float z; // s9
  float y; // s10
  float x; // s11
  const MethodInfo *v9; // x1
  System_String_o *RotateSaveKey; // x19
  __int64 v11; // x20
  float v12; // s0
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t v27; // w1
  float v28; // s0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  float v42; // s0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  int32_t v55; // w1
  float v56; // s0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_String_o *v63; // x0
  MethodInfo v64; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  w = qua.fields.w;
  z = qua.fields.z;
  y = qua.fields.y;
  x = qua.fields.x;
  *((float *)&v64.virtualMethodPointer + 1) = totalAngle;
  if ( (byte_596CDD4 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_869/*","*/);
    byte_596CDD4 = 1;
  }
  v67.fields.x = x;
  v67.fields.y = y;
  v67.fields.z = z;
  v67.fields.w = w;
  v65 = UnityEngine_Quaternion__Internal_ToEulerRad(v67, 0);
  v65.fields.x = v65.fields.x * 57.296;
  v65.fields.y = v65.fields.y * 57.296;
  v65.fields.z = v65.fields.z * 57.296;
  Positive = UnityEngine_Quaternion__Internal_MakePositive(v65, 0);
  v64.methodPointer = *(Il2CppMethodPointer *)&Positive.fields.x;
  *(float *)&v64.virtualMethodPointer = Positive.fields.z;
  RotateSaveKey = BlankEarth__GetRotateSaveKey(this, v9);
  v11 = sub_2213B20(string___TypeInfo, 7);
  v13 = System_Single__ToString(v12, &v64);
  if ( !v11 )
    sub_2213CDC(v13, v14);
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v11 + 32) = v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)v13, v15, v16, v17, v18, v19, v20);
  if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_12;
  v27 = StringLiteral_869/*","*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_869/*","*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), v27, v21, v22, v23, v24, v25, v26);
  v13 = System_Single__ToString(v28, (const MethodInfo *)((char *)&v64.methodPointer + 4));
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_12;
  *(_QWORD *)(v11 + 48) = v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), (int32_t)v13, v29, v30, v31, v32, v33, v34);
  if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_12;
  v41 = StringLiteral_869/*","*/;
  *(_QWORD *)(v11 + 56) = StringLiteral_869/*","*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 56), v41, v35, v36, v37, v38, v39, v40);
  v13 = System_Single__ToString(v42, (const MethodInfo *)&v64.virtualMethodPointer);
  if ( *(_DWORD *)(v11 + 24) <= 4u
    || (*(_QWORD *)(v11 + 64) = v13,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 64), (int32_t)v13, v43, v44, v45, v46, v47, v48),
        *(_DWORD *)(v11 + 24) <= 5u)
    || (v55 = StringLiteral_869/*","*/,
        *(_QWORD *)(v11 + 72) = StringLiteral_869/*","*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 72), v55, v49, v50, v51, v52, v53, v54),
        v13 = System_Single__ToString(v56, (const MethodInfo *)((char *)&v64.virtualMethodPointer + 4)),
        *(_DWORD *)(v11 + 24) <= 6u) )
  {
LABEL_12:
    sub_2213CE4(v13);
  }
  *(_QWORD *)(v11 + 80) = v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 80), (int32_t)v13, v57, v58, v59, v60, v61, v62);
  v63 = System_String__Concat_75697120((System_String_array *)v11, 0);
  UnityEngine_PlayerPrefs__SetString(RotateSaveKey, v63, 0);
}


void BlankEarth__SaveSpotRotation(BlankEarth_o *this, BlankEarthSpotEntity_o *spotEnt, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  float x; // s4
  float maxAngle; // s5
  float v8; // s6
  float v9; // s4
  UnityEngine_Quaternion_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( spotEnt && !spotEnt->fields.onObjectType )
  {
    v10 = BlankEarth__ConvertLatLongToSafePointQuaternion(
            this,
            *(UnityEngine_Vector2_o *)&spotEnt->fields.x,
            (const MethodInfo *)spotEnt);
    x = spotEnt->fields.x;
    if ( this->fields.isExecQuestAction )
      maxAngle = 180.0;
    else
      maxAngle = this->fields.maxAngle;
    v8 = -maxAngle;
    if ( maxAngle >= x )
      maxAngle = spotEnt->fields.x;
    if ( x >= v8 )
      v9 = maxAngle;
    else
      v9 = v8;
    this->fields.totalAngle = v9;
    BlankEarth__SaveQuaternionAndTotalAngle(this, v10, v9, v5);
  }
}


void BlankEarth__SetActionAfterStateChange(
        BlankEarth_o *this,
        int32_t state,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BlankEarth__CoStandByChangeState(this, state, callback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


void BlankEarth__SetEarthRotate(BlankEarth_o *this, UnityEngine_Quaternion_o qua, const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0

  blankEarth = this->fields.blankEarth;
  if ( !blankEarth )
    sub_2213CDC(0, method);
  UnityEngine_Transform__set_rotation(blankEarth, qua, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__SetFocusPoint(BlankEarth_o *this, int32_t spotId, int32_t onPointType, const MethodInfo *method)
{
  UnityEngine_Component_o *TerminalListTop; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct BlankEarthPoint_o *Point; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  TerminalListTop = (UnityEngine_Component_o *)BlankEarth__get_TerminalListTop(this, *(const MethodInfo **)&spotId);
  if ( !TerminalListTop
    || (TerminalListTop = (UnityEngine_Component_o *)TerminalListTop[6].monitor) == 0
    || (TerminalListTop = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TerminalListTop, 0)) == 0 )
  {
    sub_2213CDC(TerminalListTop, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)TerminalListTop, 1, 0);
  Point = BlankEarth__GetPoint(this, spotId, onPointType, v9);
  this->fields.focusEarthPoint = Point;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.focusEarthPoint,
    (int32_t)Point,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void BlankEarth__SetIsExecQuestAction(BlankEarth_o *this, bool value, const MethodInfo *method)
{
  this->fields.isExecQuestAction = value;
}


void BlankEarth__SetMainState(BlankEarth_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BlankEarth__SetState(this, 2, v2);
}


void BlankEarth__SetOrdealCallFolder(
        BlankEarth_o *this,
        ScrTerminalListTop_CaldeaFolderInfo_o *folderInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.ordealCallFolderInfo = folderInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.ordealCallFolderInfo,
    (int32_t)folderInfo,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BlankEarth__SetOtherObjectRoot(
        BlankEarth_o *this,
        System_String_o *objName,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.otherObjectRoot = root;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.otherObjectRoot,
    (int32_t)root,
    (System_String_o *)root,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__SetState(BlankEarth_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596CDBF & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_BlankEarth__setState__);
    byte_596CDBF = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(0, *(_QWORD *)&state);
  CStateManager_object___setState(mFSM, state, (const MethodInfo_3E83E8C *)Method_CStateManager_BlankEarth__setState__);
}


void BlankEarth__SetTutorialFlag(BlankEarth_o *this, bool isAvailable, const MethodInfo *method)
{
  this->fields.isTutorialAvailable = isAvailable;
}


void BlankEarth__SetTutorialWaitSkipFlag(BlankEarth_o *this, bool isSkip, const MethodInfo *method)
{
  this->fields.isSkipTutorialWait = isSkip;
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__SetZoomEarth(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BlankEarthPoint_o **p_focusEarthPoint; // x20
  UnityEngine_Object_o *focusEarthPoint; // x21
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  int32_t BlankEarthSpotId; // w0
  const MethodInfo *v9; // x3
  struct BlankEarthPoint_o *Point; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  float x; // s9
  float y; // s10
  float z; // s11
  float zoomInScl; // s8
  UnityEngine_Object_o *v21; // x21
  __int64 earthSpotRoot; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  int8x16_t *v25; // x8
  unsigned __int32 v26; // w9
  UnityEngine_Transform_o *blankEarth; // x20
  float zoomInOffset; // s12
  float v29; // v2.s[1]
  float32x4_t v30; // q7
  float32x4_t v31; // q4
  float v32; // v2.s[2]
  float32x4_t v33; // q5
  int8x16_t v34; // q1 OVERLAPPED
  int8x16_t v35; // q4
  float32x4_t v36; // q5
  float32x4_t v37; // q3
  float32x4_t v38; // q0
  float32x4_t v39; // q2
  UnityEngine_Object_o *otherObjectRoot; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  Il2CppObject *Component_object; // x20
  int v44; // w8
  __int64 v45; // x20
  __int64 v46; // x21
  UnityEngine_Transform_o *v47; // x20
  const MethodInfo *v48; // x1
  bool IsPlanetEarthActive; // w20
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x1
  int8x16_t v53; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_596CDDC & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CDDC = 1;
  }
  p_focusEarthPoint = &this->fields.focusEarthPoint;
  focusEarthPoint = (UnityEngine_Object_o *)this->fields.focusEarthPoint;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(focusEarthPoint, 0, 0) )
  {
    BlankEarthSpotId = BlankEarth__get_BlankEarthSpotId(this, v6);
    Point = BlankEarth__GetPoint(this, BlankEarthSpotId, 0, v9);
    this->fields.focusEarthPoint = Point;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.focusEarthPoint,
      (int32_t)Point,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  x = this->fields.zoomInPos.fields.x;
  y = this->fields.zoomInPos.fields.y;
  z = this->fields.zoomInPos.fields.z;
  zoomInScl = this->fields.zoomInScl;
  v21 = (UnityEngine_Object_o *)this->fields.focusEarthPoint;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  earthSpotRoot = UnityEngine_Object__op_Inequality(v21, 0, 0);
  if ( (earthSpotRoot & 1) != 0 )
  {
    v25 = (int8x16_t *)*p_focusEarthPoint;
    if ( !*p_focusEarthPoint )
      goto LABEL_51;
    v26 = v25[19].n128_u32[1];
    if ( v26 == 1 )
    {
      otherObjectRoot = (UnityEngine_Object_o *)this->fields.otherObjectRoot;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
      if ( !UnityEngine_Object__op_Equality(otherObjectRoot, 0, 0) )
      {
        earthSpotRoot = (__int64)this->fields.otherObjectRoot;
        if ( !earthSpotRoot )
          goto LABEL_51;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)earthSpotRoot,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41, v42);
        earthSpotRoot = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( (earthSpotRoot & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_51;
          if ( LODWORD(Component_object[4].monitor) == 1 )
            zoomInScl = 1.0;
          LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.otherObjectRoot, 0);
          x = *((float *)&Component_object[4].monitor + 1) - (float)(zoomInScl * LocalPosition.fields.x);
          y = *(float *)&Component_object[5].klass - (float)(zoomInScl * LocalPosition.fields.y);
          z = *((float *)&Component_object[5].klass + 1) - (float)(zoomInScl * LocalPosition.fields.z);
          BlankEarthOtherObject__ZoomInAdjustAppearance(
            (BlankEarthOtherObject_o *)Component_object,
            0.0,
            this->fields.zoomOutEasingType,
            0);
        }
        earthSpotRoot = (__int64)this->fields.earthSpotRoot;
        if ( !earthSpotRoot
          || (earthSpotRoot = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                         (UnityEngine_GameObject_o *)earthSpotRoot,
                                         (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___)) == 0 )
        {
LABEL_51:
          sub_2213CDC(earthSpotRoot, v23);
        }
        v44 = *(_DWORD *)(earthSpotRoot + 24);
        v45 = earthSpotRoot;
        if ( v44 >= 1 )
        {
          v46 = 0;
          do
          {
            if ( (unsigned int)v46 >= v44 )
              sub_2213CE4(earthSpotRoot);
            earthSpotRoot = *(_QWORD *)(v45 + 32 + 8 * v46);
            if ( !earthSpotRoot )
              goto LABEL_51;
            BlankEarthPoint__SetDispUIDotRange(
              (BlankEarthPoint_o *)earthSpotRoot,
              this->fields.object1DispSpotUISpriteDot,
              this->fields.object1NoDispSpotUISpriteDot,
              0);
            v44 = *(_DWORD *)(v45 + 24);
          }
          while ( (int)++v46 < v44 );
        }
      }
    }
    else if ( !v26 )
    {
      blankEarth = this->fields.blankEarth;
      zoomInOffset = this->fields.zoomInOffset;
      v53 = v25[17];
      if ( !byte_5969AE8 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE8 = 1;
      }
      v57 = UnityEngine_Quaternion__AngleAxis(-zoomInOffset, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
      if ( !blankEarth )
        goto LABEL_51;
      v29 = v57.fields.x;
      v30 = v53;
      v31 = v53;
      v32 = v57.fields.y;
      v31.n128_u32[3] = v53.n128_u32[1];
      v33 = *(float32x4_t *)&v57.fields.z;
      v33.n128_u32[3] = LODWORD(v57.fields.y);
      v34 = vmulq_n_f32(v53, v57.fields.w);
      v30.n128_u32[3] = v53.n128_u32[2];
      v35 = vmulq_f32(v31, v33);
      v36 = *(float32x4_t *)&v57.fields.z;
      v36.n128_u32[3] = LODWORD(v57.fields.x);
      v37 = vmulq_f32(vextq_s8(vdupq_laneq_s32(v53, 3), v53, 4u), v36);
      v38 = vaddq_f32(
              vaddq_f32(vuzp2q_s32(vextq_s8(v34, v34, 4u), v34), v37),
              vzip2q_s32(vzip1q_s32(v35, vextq_s8(v35, v35, 0xCu)), v35));
      v38.n128_u32[3] = vsubq_f32(vsubq_f32(v34, v37), v35).n128_u32[3];
      v39 = vsubq_f32(
              v38,
              vmulq_f32(
                v30,
                vrev64q_s32(
                  vuzp1q_s32(
                    *(int32x4_t *)&v57.fields.z,
                    vzip1q_s32(*(int32x4_t *)&v57.fields.z, *(int32x4_t *)&v57.fields.z)))));
      v38.n128_u32[0] = v39.n128_u32[1];
      v37.n128_u32[0] = v39.n128_u32[3];
      v34.n128_u32[0] = v39.n128_u32[2];
      UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)((char *)&v34 - 4), 0);
    }
  }
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_51;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0);
  v47 = (UnityEngine_Transform_o *)earthSpotRoot;
  if ( !byte_5969AE6 )
  {
    earthSpotRoot = sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  if ( !v47 )
    goto LABEL_51;
  UnityEngine_Transform__set_rotation(v47, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_51;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0);
  if ( !earthSpotRoot )
    goto LABEL_51;
  v55.fields.x = x;
  v55.fields.y = y;
  v55.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)earthSpotRoot, v55, 0);
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_51;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0);
  if ( !earthSpotRoot )
    goto LABEL_51;
  v56.fields.x = zoomInScl;
  v56.fields.y = zoomInScl;
  v56.fields.z = zoomInScl;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)earthSpotRoot, v56, 0);
  earthSpotRoot = (__int64)BlankEarth__get_TerminalListTop(this, v48);
  if ( !earthSpotRoot )
    goto LABEL_51;
  IsPlanetEarthActive = ScrTerminalListTop__IsPlanetEarthActive((ScrTerminalListTop_o *)earthSpotRoot, 0);
  earthSpotRoot = (__int64)BlankEarth__get_TerminalListTop(this, v50);
  if ( !IsPlanetEarthActive )
  {
    if ( earthSpotRoot )
    {
      ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)earthSpotRoot, 0, 1, 0);
      earthSpotRoot = (__int64)BlankEarth__get_TerminalListTop(this, v52);
      if ( earthSpotRoot )
      {
        ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)earthSpotRoot, 0.0, 0, 1, 0);
        goto LABEL_50;
      }
    }
    goto LABEL_51;
  }
  if ( !earthSpotRoot )
    goto LABEL_51;
  ScrTerminalListTop__FrameInOutPlanetEarthRotateBtn((ScrTerminalListTop_o *)earthSpotRoot, 0.0, 0, 1, 0);
LABEL_50:
  BlankEarth__SetState(this, 3, v51);
}


void BlankEarth__Setup(BlankEarth_o *this, AssetData_o *data, MapEntity_o *mapEnt, const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  this->fields.mapEntity = mapEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mapEntity,
    (int32_t)mapEnt,
    (System_String_o *)mapEnt,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.assetData = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetData, (int32_t)data, v10, v11, v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__SetupByDefaultRotateData(
        BlankEarth_o *this,
        UnityEngine_Quaternion_o *rotateData,
        float *maxAngleData,
        int32_t mapId,
        const MethodInfo *method)
{
  float32x2_t *DefaultRotateData; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  float32x2_t *v11; // x21
  BlankEarth_c *v12; // x0
  float32x2_t *static_fields; // x9
  unsigned __int64 v14; // d0 OVERLAPPED
  float v15; // s2
  int v16; // s1
  BlankEarth_c *v17; // x8
  float v18; // s0
  unsigned __int64 v19; // d0 OVERLAPPED
  float v20; // s2
  int v21; // s1
  __int64 v22; // x0
  UnityEngine_Quaternion_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596CDC4 & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_2213A60(&BlankEarth_TypeInfo);
    byte_596CDC4 = 1;
  }
  DefaultRotateData = (float32x2_t *)BlankEarth__GetDefaultRotateData(this, mapId, (const MethodInfo *)maxAngleData);
  if ( !DefaultRotateData )
    sub_2213CDC(0, v9);
  v11 = DefaultRotateData;
  if ( DefaultRotateData[3].n64_i32[0] >= 4 )
  {
    v19 = vmul_f32(DefaultRotateData[4], vdup_n_s32(0x3C8EFA35u)).n64_u64[0];
    v20 = DefaultRotateData[5].n64_f32[0] * 0.017453;
    v21 = HIDWORD(v19);
    *rotateData = UnityEngine_Quaternion__Internal_FromEulerRad(*(UnityEngine_Vector3_o *)&v19, 0);
    if ( (v11[3].n64_u32[0] & 0xFFFFFFFC) == 0 )
      sub_2213CE4(v22);
    v18 = v11[5].n64_f32[1];
  }
  else
  {
    v12 = BlankEarth_TypeInfo;
    if ( !*(&BlankEarth_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo, v9, v10);
      v12 = BlankEarth_TypeInfo;
    }
    static_fields = (float32x2_t *)v12->static_fields;
    v14 = vmul_f32((float32x2_t)static_fields->n64_u64[0], vdup_n_s32(0x3C8EFA35u)).n64_u64[0];
    v15 = static_fields[1].n64_f32[0] * 0.017453;
    v16 = HIDWORD(v14);
    v23 = UnityEngine_Quaternion__Internal_FromEulerRad(*(UnityEngine_Vector3_o *)&v14, 0);
    rotateData->fields.x = v23.fields.x;
    rotateData->fields.y = v23.fields.y;
    v17 = BlankEarth_TypeInfo;
    rotateData->fields.z = v23.fields.z;
    rotateData->fields.w = v23.fields.w;
    v18 = -v17->static_fields->SouthPoleRotateAngle;
  }
  *maxAngleData = v18;
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__SwitchDispPresentBoxHideGameObject(BlankEarth_o *this, bool isDisp, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *presentBoxHideGameObjectList; // x20
  int max_length; // w8
  __int64 v6; // x21
  UnityEngine_GameObject_o *v7; // x0

  presentBoxHideGameObjectList = this->fields.presentBoxHideGameObjectList;
  if ( presentBoxHideGameObjectList )
  {
    max_length = presentBoxHideGameObjectList->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0;
      do
      {
        if ( (unsigned int)v6 >= max_length )
          sub_2213CE4(this);
        v7 = presentBoxHideGameObjectList->m_Items[v6];
        if ( !v7 )
          sub_2213CDC(0, isDisp);
        UnityEngine_GameObject__SetActive(v7, isDisp, 0);
        max_length = presentBoxHideGameObjectList->max_length;
        ++v6;
      }
      while ( (int)v6 < max_length );
    }
  }
}


void BlankEarth__Update(BlankEarth_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596CDB8 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_BlankEarth__update__);
    byte_596CDB8 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3E83E6C *)Method_CStateManager_BlankEarth__update__);
}


BlankEarthTransform_o *BlankEarth__UpdateBlankEarthTransformData(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BlankEarthTransform_o *BlankEarthTransformData; // x20
  UnityEngine_Transform_o *blankEarth; // x0
  UnityEngine_GameObject_o *v6; // x0
  const MethodInfo *v7; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  float v12; // s15
  unsigned int LocalPosition; // s0
  float totalAng; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  BlankEarthTransform_o *v16; // x0
  const MethodInfo *v17; // x5
  float earthRootRot; // [xsp+2Ch] [xbp-74h]
  float v20; // [xsp+30h] [xbp-70h]
  float v21; // [xsp+34h] [xbp-6Ch]
  float v22; // [xsp+8Ch] [xbp-14h]
  UnityEngine_Vector3_o v23; // 0:x1.12
  UnityEngine_Vector3_o v24; // 0:x3.12
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v28; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_596CDDF & 1) == 0 )
  {
    sub_2213A60(&BlankEarthTransform_TypeInfo);
    byte_596CDDF = 1;
  }
  BlankEarthTransformData = BlankEarth__get_BlankEarthTransformData(this, method);
  blankEarth = this->fields.blankEarth;
  if ( !BlankEarthTransformData )
  {
    if ( blankEarth )
    {
      rotation = UnityEngine_Transform__get_rotation(blankEarth, 0);
      blankEarth = (UnityEngine_Transform_o *)this->fields.earthRoot;
      if ( blankEarth )
      {
        x = rotation.fields.x;
        y = rotation.fields.y;
        z = rotation.fields.z;
        w = rotation.fields.w;
        blankEarth = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)blankEarth, 0);
        if ( blankEarth )
        {
          v22 = x;
          v26 = UnityEngine_Transform__get_rotation(blankEarth, 0);
          v20 = v26.fields.y;
          v21 = v26.fields.x;
          earthRootRot = v26.fields.z;
          v12 = v26.fields.w;
          LocalPosition = (unsigned int)GameObjectExtensions__GetLocalPosition(this->fields.earthRoot, 0);
          blankEarth = (UnityEngine_Transform_o *)this->fields.earthRoot;
          if ( blankEarth )
          {
            totalAng = *(float *)&LocalPosition;
            gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)blankEarth, 0);
            GameObjectExtensions__GetLocalScale(gameObject, 0);
            v16 = (BlankEarthTransform_o *)sub_2213CCC(BlankEarthTransform_TypeInfo);
            v28.fields.w = v12;
            v27.fields.y = y;
            v27.fields.x = v22;
            v27.fields.w = w;
            v27.fields.z = z;
            *(_QWORD *)&v23.fields.x = 0;
            v28.fields.y = v20;
            v28.fields.x = v21;
            BlankEarthTransformData = v16;
            v28.fields.z = earthRootRot;
            BlankEarthTransform___ctor(v16, v27, v28, v23, v24, totalAng, v17);
            goto LABEL_14;
          }
        }
      }
    }
LABEL_15:
    sub_2213CDC(blankEarth, v3);
  }
  if ( !blankEarth )
    goto LABEL_15;
  BlankEarthTransformData->fields.blankEarthRotation = UnityEngine_Transform__get_rotation(blankEarth, 0);
  blankEarth = (UnityEngine_Transform_o *)this->fields.earthRoot;
  if ( !blankEarth )
    goto LABEL_15;
  blankEarth = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)blankEarth, 0);
  if ( !blankEarth )
    goto LABEL_15;
  BlankEarthTransformData->fields.earthRootRotation = UnityEngine_Transform__get_rotation(blankEarth, 0);
  BlankEarthTransformData->fields.earthRootLocalPosition = GameObjectExtensions__GetLocalPosition(
                                                             this->fields.earthRoot,
                                                             0);
  blankEarth = (UnityEngine_Transform_o *)this->fields.earthRoot;
  if ( !blankEarth )
    goto LABEL_15;
  v6 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)blankEarth, 0);
  BlankEarthTransformData->fields.earthRootLocalScale = GameObjectExtensions__GetLocalScale(v6, 0);
  BlankEarthTransformData->fields.totalAngle = this->fields.totalAngle;
LABEL_14:
  BlankEarth__set_BlankEarthTransformData(this, BlankEarthTransformData, v7);
  return BlankEarthTransformData;
}


void BlankEarth__UpdateSpotDisp(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *earthSpotRoot; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *v7; // x0
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__59472212; // x20
  BlankEarth___c_c *v9; // x0
  struct BlankEarth___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__142_0; // x21
  Il2CppObject *v12; // x22
  struct BlankEarth___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_Object_o *otherObjectRoot; // x20
  System_Collections_Generic_IEnumerable_T__o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  BlankEarth___c_c *v24; // x0
  struct BlankEarth___c_StaticFields *v25; // x8
  System_Action_object__o *_9__142_1; // x20
  Il2CppObject *v27; // x21
  struct BlankEarth___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_596CDD3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BlankEarthPoint__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BlankEarthPoint___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BlankEarth___c__UpdateSpotDisp_b__142_0__);
    sub_2213A60(&Method_BlankEarth___c__UpdateSpotDisp_b__142_1__);
    sub_2213A60(&BlankEarth___c_TypeInfo);
    byte_596CDD3 = 1;
  }
  earthSpotRoot = (UnityEngine_Object_o *)this->fields.earthSpotRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(earthSpotRoot, 0, 0) )
  {
    v7 = this->fields.earthSpotRoot;
    if ( !v7 )
      goto LABEL_28;
    ComponentsInChildren_object__59472212 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                                                             v7,
                                                                                             (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ComponentsInChildren_object__59472212, 0) )
    {
      v9 = BlankEarth___c_TypeInfo;
      if ( !*(&BlankEarth___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo, v5, v6);
        v9 = BlankEarth___c_TypeInfo;
      }
      static_fields = v9->static_fields;
      _9__142_0 = (System_Action_object__o *)static_fields->__9__142_0;
      if ( !_9__142_0 )
      {
        if ( !*(&v9->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v9, v5, v6);
          static_fields = BlankEarth___c_TypeInfo->static_fields;
        }
        v12 = (Il2CppObject *)static_fields->__9;
        _9__142_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BlankEarthPoint__TypeInfo);
        System_Action_object____ctor(_9__142_0, v12, Method_BlankEarth___c__UpdateSpotDisp_b__142_0__, 0);
        v13 = BlankEarth___c_TypeInfo->static_fields;
        v13->__9__142_0 = (struct System_Action_BlankEarthPoint__o *)_9__142_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v13->__9__142_0,
          (int32_t)_9__142_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      BasicHelper__ForEach_object_(
        ComponentsInChildren_object__59472212,
        (System_Action_T__o *)_9__142_0,
        (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BlankEarthPoint___);
    }
  }
  otherObjectRoot = (UnityEngine_Object_o *)this->fields.otherObjectRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(otherObjectRoot, 0, 0) )
  {
    v7 = this->fields.otherObjectRoot;
    if ( v7 )
    {
      v21 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                             v7,
                                                             (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v21, 0) )
      {
        v24 = BlankEarth___c_TypeInfo;
        if ( !*(&BlankEarth___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo, v22, v23);
          v24 = BlankEarth___c_TypeInfo;
        }
        v25 = v24->static_fields;
        _9__142_1 = (System_Action_object__o *)v25->__9__142_1;
        if ( !_9__142_1 )
        {
          if ( !*(&v24->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v24, v22, v23);
            v25 = BlankEarth___c_TypeInfo->static_fields;
          }
          v27 = (Il2CppObject *)v25->__9;
          _9__142_1 = (System_Action_object__o *)sub_2213CCC(System_Action_BlankEarthPoint__TypeInfo);
          System_Action_object____ctor(_9__142_1, v27, Method_BlankEarth___c__UpdateSpotDisp_b__142_1__, 0);
          v28 = BlankEarth___c_TypeInfo->static_fields;
          v28->__9__142_1 = (struct System_Action_BlankEarthPoint__o *)_9__142_1;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v28->__9__142_1,
            (int32_t)_9__142_1,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
        }
        BasicHelper__ForEach_object_(
          v21,
          (System_Action_T__o *)_9__142_1,
          (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BlankEarthPoint___);
      }
      return;
    }
LABEL_28:
    sub_2213CDC(v7, v5);
  }
}


void BlankEarth__UpdateTotalAngle(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *blankEarth; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  blankEarth = (UnityEngine_Component_o *)this->fields.blankEarth;
  if ( !blankEarth || (blankEarth = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(blankEarth, 0)) == 0 )
    sub_2213CDC(blankEarth, method);
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0);
  v10 = UnityEngine_Quaternion__Inverse(rotation, 0);
  x = v10.fields.x;
  y = v10.fields.y;
  z = v10.fields.z;
  w = v10.fields.w;
  if ( !byte_596CDEB )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_596CDEB = 1;
  }
  v11.fields.x = x;
  v11.fields.y = y;
  v11.fields.z = z;
  v11.fields.w = w;
  v8 = UnityEngine_Quaternion__op_Multiply_83371700(v11, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  this->fields.totalAngle = asinf(v8.fields.y) * 57.296;
}


int32_t BlankEarth__get_BlankEarthSpotId(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  TerminalPramsManager_c *v5; // x0
  int32_t *p_PlanetEarthSpotId_k__BackingField; // x8
  TerminalPramsManager_c *v7; // x0

  if ( (byte_596CDB3 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDB3 = 1;
  }
  v4 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.mapEntity )
  {
    if ( !v4 )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    if ( !byte_596CDEC )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDEC = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
      v5 = TerminalPramsManager_TypeInfo;
    }
    p_PlanetEarthSpotId_k__BackingField = &v5->static_fields->_PlanetEarthSpotId_k__BackingField;
  }
  else
  {
    if ( !v4 )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    if ( !byte_596CDED )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDED = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
      v7 = TerminalPramsManager_TypeInfo;
    }
    p_PlanetEarthSpotId_k__BackingField = &v7->static_fields->_BlankEarthSpotId_k__BackingField;
  }
  return *p_PlanetEarthSpotId_k__BackingField;
}


BlankEarthTransform_o *BlankEarth__get_BlankEarthTransformData(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  TerminalPramsManager_c *v5; // x0
  BlankEarthTransform_o **p_PlanetEarthTransformData_k__BackingField; // x8
  TerminalPramsManager_c *v7; // x0

  if ( (byte_596CDB5 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDB5 = 1;
  }
  v4 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.mapEntity )
  {
    if ( !v4 )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    if ( !byte_596CDF0 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDF0 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
      v5 = TerminalPramsManager_TypeInfo;
    }
    p_PlanetEarthTransformData_k__BackingField = &v5->static_fields->_PlanetEarthTransformData_k__BackingField;
  }
  else
  {
    if ( !v4 )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    if ( !byte_596CDF1 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDF1 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
      v7 = TerminalPramsManager_TypeInfo;
    }
    p_PlanetEarthTransformData_k__BackingField = &v7->static_fields->_BlankEarthTransformData_k__BackingField;
  }
  return *p_PlanetEarthTransformData_k__BackingField;
}


float BlankEarth__get_EarthBtnMoveSpeedTime(BlankEarth_o *this, const MethodInfo *method)
{
  return this->fields.earthBtnMoveSpeedTime;
}


float BlankEarth__get_EarthRadius(BlankEarth_o *this, const MethodInfo *method)
{
  return this->fields.earthRadius;
}


UnityEngine_GameObject_o *BlankEarth__get_EarthRoot(BlankEarth_o *this, const MethodInfo *method)
{
  return this->fields.earthRoot;
}


float BlankEarth__get_GreenwichOffset(BlankEarth_o *this, const MethodInfo *method)
{
  return this->fields.greenwichOffset;
}


float BlankEarth__get_MaxAngle(BlankEarth_o *this, const MethodInfo *method)
{
  if ( this->fields.isExecQuestAction )
    return 180.0;
  else
    return this->fields.maxAngle;
}


ScrTerminalListTop_CaldeaFolderInfo_o *BlankEarth__get_OrdealCallFolderInfo(
        BlankEarth_o *this,
        const MethodInfo *method)
{
  return this->fields.ordealCallFolderInfo;
}


ScrTerminalListTop_o *BlankEarth__get_TerminalListTop(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mTerminalList; // x20
  const MethodInfo *v5; // x1
  TerminalSceneComponent_o *TerminalSceneInstance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct ScrTerminalListTop_o *v14; // x1

  if ( (byte_596CDB2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CDB2 = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mTerminalList, 0, 0) )
  {
    TerminalSceneInstance = BlankEarth__get_TerminalSceneInstance(this, v5);
    if ( !TerminalSceneInstance )
      sub_2213CDC(0, v7);
    v14 = TerminalSceneInstance->fields.mTerminalList;
    this->fields.mTerminalList = v14;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mTerminalList,
      (int32_t)v14,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return this->fields.mTerminalList;
}


TerminalSceneComponent_o *BlankEarth__get_TerminalSceneInstance(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_mTerminalScene; // x19
  UnityEngine_Object_o *v5; // x20
  struct TerminalSceneComponent_o *mTerminalScene; // t1
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  TerminalSceneComponent_c *v14; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  MissionNaviTransitionBoardItem_c *mInstance; // x1

  if ( (byte_596CDB1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596CDB1 = 1;
  }
  mTerminalScene = this->fields.mTerminalScene;
  p_mTerminalScene = (MissionNaviTransitionBoardItem_o *)&this->fields.mTerminalScene;
  v5 = (UnityEngine_Object_o *)mTerminalScene;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(v5, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v8);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v14 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v8);
      v14 = TerminalSceneComponent_TypeInfo;
    }
    static_fields = v14->static_fields;
    mInstance = (MissionNaviTransitionBoardItem_c *)static_fields->mInstance;
    p_mTerminalScene->klass = (MissionNaviTransitionBoardItem_c *)static_fields->mInstance;
    sub_2213A04(p_mTerminalScene, (int32_t)mInstance, v8, v9, v10, v11, v12, v13);
  }
  return (TerminalSceneComponent_o *)p_mTerminalScene->klass;
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__set_BlankEarthSpotId(BlankEarth_o *this, int32_t value, const MethodInfo *method)
{
  int v5; // w8
  TerminalPramsManager_c *v6; // x0
  TerminalPramsManager_c *v7; // x0

  if ( (byte_596CDB4 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDB4 = 1;
  }
  v5 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.mapEntity )
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&value, method);
    if ( !byte_596CDEE )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDEE = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&value, method);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_PlanetEarthSpotId_k__BackingField = value;
  }
  else
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&value, method);
    if ( !byte_596CDEF )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDEF = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&value, method);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v7->static_fields->_BlankEarthSpotId_k__BackingField = value;
  }
}


void BlankEarth__set_BlankEarthTransformData(
        BlankEarth_o *this,
        BlankEarthTransform_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int v10; // w8
  TerminalPramsManager_c *v11; // x0
  MissionNaviTransitionBoardItem_o *p_PlanetEarthTransformData_k__BackingField; // x0
  TerminalPramsManager_c *v13; // x0

  if ( (byte_596CDB6 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDB6 = 1;
  }
  v10 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.mapEntity )
  {
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, value, method);
    if ( !byte_596CDF2 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDF2 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, value, method);
      v11 = TerminalPramsManager_TypeInfo;
    }
    p_PlanetEarthTransformData_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v11->static_fields->_PlanetEarthTransformData_k__BackingField;
  }
  else
  {
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, value, method);
    if ( !byte_596CDF3 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDF3 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, value, method);
      v13 = TerminalPramsManager_TypeInfo;
    }
    p_PlanetEarthTransformData_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v13->static_fields->_BlankEarthTransformData_k__BackingField;
  }
  p_PlanetEarthTransformData_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)value;
  sub_2213A04(p_PlanetEarthTransformData_k__BackingField, (int32_t)value, (System_String_o *)method, v3, v4, v5, v6, v7);
}


void BlankEarth_QAARotateEarthParam___ctor(
        BlankEarth_QAARotateEarthParam_o *this,
        float time,
        UnityEngine_Vector2_o latLongVector,
        int32_t easeType,
        System_Action_BlankEarth_QAARotateEarthResponse__o *finishCallback,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._FinishCallback_k__BackingField = finishCallback;
  this->fields._Time_k__BackingField = time;
  this->fields._LatLongVector_k__BackingField.fields.x = x;
  this->fields._LatLongVector_k__BackingField.fields.y = y;
  this->fields._EaseType_k__BackingField = easeType;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FinishCallback_k__BackingField,
    (int32_t)finishCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


int32_t BlankEarth_QAARotateEarthParam__get_EaseType(BlankEarth_QAARotateEarthParam_o *this, const MethodInfo *method)
{
  return this->fields._EaseType_k__BackingField;
}


System_Action_BlankEarth_QAARotateEarthResponse__o *BlankEarth_QAARotateEarthParam__get_FinishCallback(
        BlankEarth_QAARotateEarthParam_o *this,
        const MethodInfo *method)
{
  return this->fields._FinishCallback_k__BackingField;
}


UnityEngine_Vector2_o BlankEarth_QAARotateEarthParam__get_LatLongVector(
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


float BlankEarth_QAARotateEarthParam__get_Time(BlankEarth_QAARotateEarthParam_o *this, const MethodInfo *method)
{
  return this->fields._Time_k__BackingField;
}


void BlankEarth_QAARotateEarthResponse___ctor(
        BlankEarth_QAARotateEarthResponse_o *this,
        bool isInterrupted,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._IsInterrupted_k__BackingField = isInterrupted;
}


bool BlankEarth_QAARotateEarthResponse__get_IsInterrupted(
        BlankEarth_QAARotateEarthResponse_o *this,
        const MethodInfo *method)
{
  return this->fields._IsInterrupted_k__BackingField;
}


void BlankEarth_RotateEarthTimeCalculateParam___ctor(
        BlankEarth_RotateEarthTimeCalculateParam_o *this,
        float defaultTime,
        float distanceMultipleValue,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._DefaultTime_k__BackingField = defaultTime;
  this->fields._DistanceMultipleValue_k__BackingField = distanceMultipleValue;
}


float BlankEarth_RotateEarthTimeCalculateParam__get_DefaultTime(
        BlankEarth_RotateEarthTimeCalculateParam_o *this,
        const MethodInfo *method)
{
  return this->fields._DefaultTime_k__BackingField;
}


float BlankEarth_RotateEarthTimeCalculateParam__get_DistanceMultipleValue(
        BlankEarth_RotateEarthTimeCalculateParam_o *this,
        const MethodInfo *method)
{
  return this->fields._DistanceMultipleValue_k__BackingField;
}


void BlankEarth_StateEarthAutoRotateBase___ctor(BlankEarth_StateEarthAutoRotateBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarth_StateEarthAutoRotateBase__OnRotateCompleted(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        const MethodInfo *method)
{
  BlankEarth_o *That; // x0

  That = this->fields.That;
  if ( !That )
    sub_2213CDC(0, method);
  BlankEarth__SetState(That, 2, 0);
}


void BlankEarth_StateEarthAutoRotateBase__Rotate(BlankEarth_StateEarthAutoRotateBase_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *That; // x9
  struct EasingObject_o *EasingObj; // x8
  UnityEngine_Transform_o *blankEarth; // x19
  UnityEngine_Quaternion_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  That = this->fields.That;
  if ( !That
    || (EasingObj = this->fields.EasingObj) == 0
    || (blankEarth = That->fields.blankEarth,
        v5 = UnityEngine_Quaternion__Slerp(this->fields.QuaFrom, this->fields.QuaTo, EasingObj->fields.mNow, 0),
        !blankEarth) )
  {
    sub_2213CDC(this, method);
  }
  UnityEngine_Transform__set_rotation(blankEarth, v5, 0);
}


void BlankEarth_StateEarthAutoRotateBase__StartRotate(
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
  if ( (byte_596CDF8 & 1) == 0 )
  {
    this = (BlankEarth_StateEarthAutoRotateBase_o *)sub_2213A60(&System_Action_TypeInfo);
    byte_596CDF8 = 1;
  }
  klass = v2[4].klass;
  if ( !klass
    || (monitor = (EasingObject_o *)v2[1].monitor,
        v5 = *(float *)&klass->_1.name,
        v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v6, v2, (intptr_t)v2->klass->vtable[9].method, 0),
        v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, (intptr_t)v2->klass->vtable[10].method, 0),
        (v8 = v2[4].klass) == 0)
    || !monitor )
  {
    sub_2213CDC(this, method);
  }
  EasingObject__Play(monitor, v5, v6, v7, 0.0, HIDWORD(v8->_1.namespaze), 0);
}


void BlankEarth_StateEarthAutoRotateBase__begin(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Transform_o *blankEarth; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct BlankEarth_QAARotateEarthParam_o *qaaRotateEarthParam; // x1
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596CDF7 & 1) == 0 )
  {
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    byte_596CDF7 = 1;
  }
  this->fields.That = that;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)that,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !that )
    goto LABEL_10;
  qaaRotateEarthParam = that->fields.qaaRotateEarthParam;
  this->fields.Param = qaaRotateEarthParam;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.Param,
    (int32_t)qaaRotateEarthParam,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( that->fields.qaaRotateEarthParam )
  {
    blankEarth = that->fields.blankEarth;
    if ( blankEarth )
    {
      rotation = UnityEngine_Transform__get_rotation(blankEarth, 0);
      Param = this->fields.Param;
      this->fields.QuaFrom = rotation;
      if ( Param )
      {
        this->fields.QuaTo = BlankEarth__ConvertLatLongToSafePointQuaternion(
                               that,
                               Param->fields._LatLongVector_k__BackingField,
                               0);
        blankEarth = that->fields.blankEarth;
        if ( blankEarth )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarth, 0);
          Component_object = GameObjectExtensions__SafeGetComponent_object_(
                               gameObject,
                               (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
          this->fields.EasingObj = (struct EasingObject_o *)Component_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.EasingObj,
            (int32_t)Component_object,
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
    sub_2213CDC(blankEarth, v11);
  }
}


void BlankEarth_StateEarthAutoRotateBase__end(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  EasingObject_o *EasingObj; // x0
  struct EasingObject_o *v5; // x9
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  System_Action_T__o *FinishCallback_k__BackingField; // x19
  bool v8; // w20
  BlankEarth_QAARotateEarthResponse_o *v9; // x21

  if ( (byte_596CDF9 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_2213A60(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_596CDF9 = 1;
  }
  EasingObj = this->fields.EasingObj;
  if ( !EasingObj
    || (EasingObject__Stop(EasingObj, 0), (EasingObj = (EasingObject_o *)this->fields.That) == 0)
    || (BlankEarth__UpdateTotalAngle((BlankEarth_o *)EasingObj, 0), (v5 = this->fields.EasingObj) == 0) )
  {
    sub_2213CDC(EasingObj, that);
  }
  Param = this->fields.Param;
  if ( Param )
  {
    FinishCallback_k__BackingField = (System_Action_T__o *)Param->fields._FinishCallback_k__BackingField;
    v8 = v5->fields.mNow < 1.0;
    v9 = (BlankEarth_QAARotateEarthResponse_o *)sub_2213CCC(BlankEarth_QAARotateEarthResponse_TypeInfo);
    BlankEarth_QAARotateEarthResponse___ctor(v9, v8, 0);
    ActionExtensions__Call_object_(
      FinishCallback_k__BackingField,
      (Il2CppObject *)v9,
      (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
  }
}


void BlankEarth_StateEarthAutoRotateBase__update(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  ;
}


void BlankEarth_StateGrandMain___ctor(BlankEarth_StateGrandMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarth_StateGrandMain__begin(BlankEarth_StateGrandMain_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Component_o *TerminalListTop; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *blankEarth; // x19

  this->fields.That = that;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)that,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !that )
    goto LABEL_9;
  TerminalListTop = (UnityEngine_Component_o *)BlankEarth__get_TerminalListTop(that, 0);
  if ( !TerminalListTop )
    goto LABEL_9;
  TerminalListTop = (UnityEngine_Component_o *)TerminalListTop[6].monitor;
  if ( !TerminalListTop )
    goto LABEL_9;
  TerminalListTop = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TerminalListTop, 0);
  if ( !TerminalListTop )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)TerminalListTop, 0, 0);
  blankEarth = that->fields.blankEarth;
  if ( !byte_5969AE6 )
  {
    TerminalListTop = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  if ( !blankEarth )
LABEL_9:
    sub_2213CDC(TerminalListTop, v10);
  UnityEngine_Transform__set_rotation(blankEarth, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
}


void BlankEarth_StateGrandMain__end(BlankEarth_StateGrandMain_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void BlankEarth_StateGrandMain__update(BlankEarth_StateGrandMain_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0
  __int64 v5; // x1
  float v6; // s0
  struct BlankEarth_o *v7; // x8
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  v6 = ChangedFPSUtil__CalcVelocityForCurrentFps(-0.13333, 0);
  v7 = this->fields.That;
  if ( !v7 || (blankEarth = v7->fields.blankEarth) == 0 )
    sub_2213CDC(blankEarth, v5);
  v8.fields.y = v6;
  v8.fields.x = 0.0;
  v8.fields.z = 0.0;
  UnityEngine_Transform__Rotate_83494216(blankEarth, v8, 0);
}


void BlankEarth_StateGrandStartup___ctor(BlankEarth_StateGrandStartup_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarth_StateGrandStartup__begin(
        BlankEarth_StateGrandStartup_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  struct System_Action_o *scalingEndCallback; // x8
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( !that )
    goto LABEL_9;
  this = (BlankEarth_StateGrandStartup_o *)that->fields.earthRoot;
  if ( !this
    || (this = (BlankEarth_StateGrandStartup_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0)) == 0
    || (v11.fields.x = 1.25,
        v11.fields.y = 1.25,
        v11.fields.z = 1.25,
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v11, 0),
        (this = (BlankEarth_StateGrandStartup_o *)that->fields.earthRoot) == 0)
    || (this = (BlankEarth_StateGrandStartup_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0)) == 0 )
  {
LABEL_9:
    sub_2213CDC(this, that);
  }
  v12.fields.y = 0.0;
  v12.fields.z = 0.0;
  v12.fields.x = -185.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v12, 0);
  scalingEndCallback = that->fields.scalingEndCallback;
  if ( scalingEndCallback )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))scalingEndCallback->fields.invoke_impl)(
      scalingEndCallback->fields.method_code,
      scalingEndCallback->fields.method);
    that->fields.scalingEndCallback = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&that->fields.scalingEndCallback, 0, v5, v6, v7, v8, v9, v10);
  }
  BlankEarth__SetState(that, 8, 0);
}


void BlankEarth_StateGrandStartup__end(
        BlankEarth_StateGrandStartup_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  ;
}


void BlankEarth_StateGrandStartup__update(
        BlankEarth_StateGrandStartup_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  ;
}


void BlankEarth_StateMain___ctor(BlankEarth_StateMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarth_StateMain__begin(BlankEarth_StateMain_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  BlankEarth_o *gameObject; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Vector3_o DefaultEarthScale; // 0:s0.4,4:s1.4,8:s2.4

  this->fields = 0;
  if ( !that
    || (this = (BlankEarth_StateMain_o *)that->fields.earthRoot) == 0
    || (gameObject = (BlankEarth_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0),
        DefaultEarthScale = BlankEarth__GetDefaultEarthScale(gameObject, v5),
        GameObjectExtensions__SetLocalScale((UnityEngine_GameObject_o *)gameObject, DefaultEarthScale, 0),
        (this = (BlankEarth_StateMain_o *)BlankEarth__get_TerminalListTop(that, v6)) == 0)
    || (this = (BlankEarth_StateMain_o *)this[6].monitor) == 0
    || (this = (BlankEarth_StateMain_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_2213CDC(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void BlankEarth_StateMain__end(BlankEarth_StateMain_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void BlankEarth_StateMain__update(BlankEarth_StateMain_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !that )
    sub_2213CDC(this, 0);
  BlankEarth__BlunkEarthMainOperation(that, that, (float *)&this->fields, &this->fields.inertialSpeedY, v3);
}


void BlankEarth_StateNone___ctor(BlankEarth_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarth_StateNone__begin(BlankEarth_StateNone_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void BlankEarth_StateNone__end(BlankEarth_StateNone_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void BlankEarth_StateNone__update(BlankEarth_StateNone_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void BlankEarth_StateQAARotate___ctor(BlankEarth_StateQAARotate_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarth_StateQAARotate__begin(BlankEarth_StateQAARotate_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  BlankEarth_StateEarthAutoRotateBase__begin((BlankEarth_StateEarthAutoRotateBase_o *)this, that, method);
  ((void (__fastcall *)(BlankEarth_StateQAARotate_o *, const MethodInfo *))this->klass->vtable._8_StartRotate.methodPtr)(
    this,
    this->klass->vtable._8_StartRotate.method);
}


void BlankEarth_StateShortcutRotate___ctor(BlankEarth_StateShortcutRotate_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarth_StateShortcutRotate__Rotate(BlankEarth_StateShortcutRotate_o *this, const MethodInfo *method)
{
  struct EasingObject_o *EasingObj; // x8
  struct BlankEarth_o *That; // x9
  BlankEarth_StateShortcutRotate_o *v4; // x19
  float mNow; // s11
  struct BlankEarth_o *v6; // x8
  struct BlankEarth_o *v7; // x8
  BlankEarth_StateShortcutRotate_o *v8; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  struct BlankEarth_o *v12; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  EasingObj = this->fields.EasingObj;
  if ( !EasingObj )
    goto LABEL_16;
  That = this->fields.That;
  v4 = this;
  if ( !That )
    goto LABEL_16;
  this = (BlankEarth_StateShortcutRotate_o *)That->fields.blankEarth;
  if ( !this )
    goto LABEL_16;
  mNow = EasingObj->fields.mNow;
  this = (BlankEarth_StateShortcutRotate_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_16;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v4->fields.QuaFrom, 0);
  v6 = v4->fields.That;
  if ( !v6 )
    goto LABEL_16;
  this = (BlankEarth_StateShortcutRotate_o *)v6->fields.blankEarth;
  if ( !this )
    goto LABEL_16;
  this = (BlankEarth_StateShortcutRotate_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v7 = v4->fields.That;
  if ( !v7 )
    goto LABEL_16;
  v8 = this;
  this = (BlankEarth_StateShortcutRotate_o *)v7->fields.blankEarth;
  if ( !this )
    goto LABEL_16;
  this = (BlankEarth_StateShortcutRotate_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_16;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  if ( !byte_5969AE7 )
  {
    this = (BlankEarth_StateShortcutRotate_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE7 = 1;
  }
  if ( !v8
    || (v14.fields.y = y,
        v14.fields.z = z,
        v14.fields.x = x,
        UnityEngine_Transform__RotateAround(
          (UnityEngine_Transform_o *)v8,
          v14,
          UnityEngine_Vector3_TypeInfo->static_fields->rightVector,
          mNow * v4->fields.rotAmountX,
          0),
        (v12 = v4->fields.That) == 0)
    || (this = (BlankEarth_StateShortcutRotate_o *)v12->fields.blankEarth) == 0 )
  {
LABEL_16:
    sub_2213CDC(this, method);
  }
  v15.fields.z = 0.0;
  v15.fields.y = mNow * v4->fields.rotAmountY;
  v15.fields.x = 0.0;
  UnityEngine_Transform__Rotate_83494216((UnityEngine_Transform_o *)this, v15, 0);
}


void BlankEarth_StateShortcutRotate__StartRotate(BlankEarth_StateShortcutRotate_o *this, const MethodInfo *method)
{
  EasingObject_o *EasingObj; // x19
  float rotateTime; // s8
  System_Action_o *v5; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8

  if ( (byte_596CDFA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596CDFA = 1;
  }
  EasingObj = this->fields.EasingObj;
  rotateTime = this->fields.rotateTime;
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, (intptr_t)this->klass->vtable._9_Rotate.method, 0);
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)this->klass->vtable._10_OnRotateCompleted.method, 0);
  Param = this->fields.Param;
  if ( !Param || !EasingObj )
    sub_2213CDC(v7, v8);
  EasingObject__Play(EasingObj, rotateTime, v5, v6, 0.0, Param->fields._EaseType_k__BackingField, 0);
}


void BlankEarth_StateShortcutRotate__begin(
        BlankEarth_StateShortcutRotate_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  float v9; // s10
  float v10; // s9
  float v11; // s8
  float v12; // s11
  float v13; // s12
  float v14; // s13
  float v15; // s14
  float v16; // s12
  float v17; // s11
  float v18; // s13
  float v19; // s14
  EasingObject_o *EasingObj; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  float v23; // s0
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  struct BlankEarth_RotateEarthTimeCalculateParam_o *rotateEarthTimeCalculateParam; // x8
  float rotAmountY; // s0
  float rotAmountX; // s0
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  BlankEarth_StateEarthAutoRotateBase__begin((BlankEarth_StateEarthAutoRotateBase_o *)this, that, method);
  v30 = UnityEngine_Quaternion__Inverse(this->fields.QuaFrom, 0);
  x = v30.fields.x;
  y = v30.fields.y;
  z = v30.fields.z;
  w = v30.fields.w;
  if ( !byte_596CDEB )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_596CDEB = 1;
  }
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  v31.fields.w = w;
  v28 = UnityEngine_Quaternion__op_Multiply_83371700(v31, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  v9 = v28.fields.z;
  v10 = v28.fields.x;
  v11 = v28.fields.y;
  v32 = UnityEngine_Quaternion__Inverse(this->fields.QuaTo, 0);
  v12 = v32.fields.x;
  v13 = v32.fields.y;
  v14 = v32.fields.z;
  v15 = v32.fields.w;
  if ( !byte_596CDEB )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_596CDEB = 1;
  }
  v33.fields.x = v12;
  v33.fields.y = v13;
  v33.fields.z = v14;
  v33.fields.w = v15;
  v29 = UnityEngine_Quaternion__op_Multiply_83371700(v33, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  v16 = v29.fields.x;
  v17 = v29.fields.y;
  v18 = v29.fields.z;
  if ( !byte_596C21D )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_596C21D = 1;
  }
  this->fields.rotAmountY = sub_28C3C38(0, v10, 0.0, v9, v16, 0.0, v18);
  v19 = asinf(v11);
  v23 = asinf(v17);
  Param = this->fields.Param;
  this->fields.rotAmountX = (float)(v19 - v23) * 57.296;
  if ( !Param )
    goto LABEL_23;
  this->fields.rotateTime = Param->fields._Time_k__BackingField;
  if ( !that )
    goto LABEL_23;
  if ( that->fields.rotateEarthTimeCalculateParam )
  {
    if ( !byte_5969ADE )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969ADE = 1;
    }
    EasingObj = (EasingObject_o *)System_Math_TypeInfo;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21, v22);
    rotateEarthTimeCalculateParam = that->fields.rotateEarthTimeCalculateParam;
    if ( !rotateEarthTimeCalculateParam )
      goto LABEL_23;
    this->fields.rotateTime = (float)(sqrtf(
                                        (float)((float)(v9 - v18) * (float)(v9 - v18))
                                      + (float)((float)((float)(v10 - v16) * (float)(v10 - v16))
                                              + (float)((float)(v11 - v17) * (float)(v11 - v17))))
                                    * rotateEarthTimeCalculateParam->fields._DistanceMultipleValue_k__BackingField)
                            + rotateEarthTimeCalculateParam->fields._DefaultTime_k__BackingField;
  }
  ((void (__fastcall *)(BlankEarth_StateShortcutRotate_o *, const MethodInfo *))this->klass->vtable._8_StartRotate.methodPtr)(
    this,
    this->klass->vtable._8_StartRotate.method);
  rotAmountY = this->fields.rotAmountY;
  if ( rotAmountY > -1.0 && rotAmountY < 1.0 )
  {
    rotAmountX = this->fields.rotAmountX;
    if ( rotAmountX > -1.0 && rotAmountX < 1.0 )
    {
      EasingObj = this->fields.EasingObj;
      if ( EasingObj )
      {
        EasingObject__Skip(EasingObj, 0);
        return;
      }
LABEL_23:
      sub_2213CDC(EasingObj, v21);
    }
  }
}


void BlankEarth_StateStartup___ctor(BlankEarth_StateStartup_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarth_StateStartup__begin(BlankEarth_StateStartup_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  __int64 v5; // x20
  BlankEarth_o *blankEarth; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x19
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  float tutorialWaitTime; // s0
  _BOOL4 isTutorialAvailable; // w8
  float startupFadeTime; // s1
  float startupAnimTime; // s8
  const MethodInfo *v25; // x4
  bool IsPlayFirstAnim; // w8
  struct MapEntity_o *mapEntity; // x8
  int32_t v28; // w3
  UnityEngine_Transform_o *v29; // x21
  __int64 v30; // x2
  BlankEarth_o *v31; // x8
  _QWORD *v32; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x8
  UnityEngine_GameObject_o *v42; // x0
  __int64 v43; // x8
  ScrTerminalListTop_o *TerminalListTop; // x0
  void **v45; // x21
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Action_c *v52; // x0
  EasingObject_o *v53; // x22
  System_Action_o *v54; // x23
  System_Action_o *v55; // x24
  __int64 v56; // x8
  bool IsPlanetEarthActive; // w8
  __int64 v58; // x2
  __int64 v59; // x8
  __int64 v60; // x8
  __int64 v61; // x2
  __int64 v62; // x8
  __int64 v63; // x8
  int v64; // w9
  __int64 v65; // x8
  __int64 v66; // x8
  UnityEngine_Quaternion_o v67; // [xsp+0h] [xbp-60h] BYREF
  float maxAngleData; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o DefaultEarthScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o EarthRotate; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596CDE2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_BlankEarth_StateStartup_begin__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__);
    sub_2213A60(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__);
    sub_2213A60(&BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo);
    byte_596CDE2 = 1;
  }
  *(_QWORD *)&v67.fields.x = 0;
  *(_QWORD *)&v67.fields.z = 0;
  maxAngleData = 0.0;
  v5 = sub_2213CCC(BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_71;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = that;
  v14 = v5 + 32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)that, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)&this->fields.inertialSpeedX = 0;
  blankEarth = *(BlankEarth_o **)(v5 + 32);
  if ( !blankEarth )
    goto LABEL_71;
  tutorialWaitTime = 0.0;
  isTutorialAvailable = blankEarth->fields.isTutorialAvailable;
  blankEarth->fields.totalAngle = 0.0;
  if ( isTutorialAvailable && !blankEarth->fields.isSkipTutorialWait )
    tutorialWaitTime = blankEarth->fields.tutorialWaitTime;
  startupAnimTime = blankEarth->fields.startupAnimTime;
  startupFadeTime = blankEarth->fields.startupFadeTime;
  *(float *)(v5 + 84) = tutorialWaitTime;
  blankEarth->fields.startFadeTime = startupFadeTime;
  IsPlayFirstAnim = BlankEarth__IsPlayFirstAnim(blankEarth, v7);
  blankEarth = *(BlankEarth_o **)(v5 + 32);
  *(_BYTE *)(v5 + 80) = IsPlayFirstAnim;
  if ( IsPlayFirstAnim )
  {
    if ( !blankEarth )
      goto LABEL_71;
    mapEntity = blankEarth->fields.mapEntity;
    v28 = mapEntity ? mapEntity->fields.id : 0;
    BlankEarth__SetupByDefaultRotateData(blankEarth, &v67, &maxAngleData, v28, v25);
    v31 = *(BlankEarth_o **)v14;
    if ( !*(_QWORD *)v14 )
      goto LABEL_71;
    startupAnimTime = v31->fields.firstAnimTime;
    blankEarth = (BlankEarth_o *)v31->fields.blankEarth;
    v31->fields.startFadeTime = v31->fields.firstFadeTime;
    if ( !blankEarth )
      goto LABEL_71;
    UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)blankEarth, v67, 0);
    blankEarth = *(BlankEarth_o **)v14;
    if ( !*(_QWORD *)v14 )
      goto LABEL_71;
    BlankEarth__SavePlayedFirstAnim(blankEarth, v7);
    if ( !*(_QWORD *)v14 )
      goto LABEL_71;
    *(float *)(*(_QWORD *)v14 + 228LL) = maxAngleData;
  }
  else
  {
    if ( !blankEarth )
      goto LABEL_71;
    v29 = blankEarth->fields.blankEarth;
    EarthRotate = BlankEarth__LoadEarthRotate(blankEarth, v7);
    if ( !v29 )
      goto LABEL_71;
    UnityEngine_Transform__set_rotation(v29, EarthRotate, 0);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v30);
  if ( !byte_596CDF6 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDF6 = 1;
  }
  blankEarth = (BlankEarth_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v30);
    blankEarth = (BlankEarth_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)&blankEarth->fields.zoomOutEasingType + 92LL) )
  {
    v32 = Method_BlankEarth_StateStartup_begin__;
    if ( (*((_BYTE *)Method_BlankEarth_StateStartup_begin__ + 83) & 2) != 0 )
      v32 = (_QWORD *)sub_2213A78(Method_BlankEarth_StateStartup_begin__);
    blankEarth = (BlankEarth_o *)sub_2213A44(v32, v32[4]);
    if ( !*(_QWORD *)v14 )
      goto LABEL_71;
    blankEarth = (BlankEarth_o *)OverwriteAssetSoundName__PlaySe(
                                   (System_Reflection_MethodBase_o *)blankEarth,
                                   *(System_String_o **)(*(_QWORD *)v14 + 128LL),
                                   0,
                                   0);
  }
  if ( !*(_QWORD *)v14 )
    goto LABEL_71;
  blankEarth = *(BlankEarth_o **)(*(_QWORD *)v14 + 32LL);
  if ( !blankEarth )
    goto LABEL_71;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarth, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Component_object, v35, v36, v37, v38, v39, v40);
  v41 = *(_QWORD *)(v5 + 32);
  if ( !v41 )
    goto LABEL_71;
  blankEarth = *(BlankEarth_o **)(v41 + 40);
  if ( !blankEarth )
    goto LABEL_71;
  v42 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)blankEarth, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(v42, 0);
  v43 = *(_QWORD *)(v5 + 32);
  *(UnityEngine_Vector3_o *)(v5 + 52) = LocalScale;
  if ( !v43 )
    goto LABEL_71;
  DefaultEarthScale = BlankEarth__GetDefaultEarthScale(blankEarth, v7);
  blankEarth = *(BlankEarth_o **)(v5 + 32);
  *(UnityEngine_Vector3_o *)(v5 + 40) = DefaultEarthScale;
  if ( !blankEarth )
    goto LABEL_71;
  TerminalListTop = BlankEarth__get_TerminalListTop(blankEarth, v7);
  *(_QWORD *)(v5 + 72) = TerminalListTop;
  v45 = (void **)(v5 + 72);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 72), (int32_t)TerminalListTop, v46, v47, v48, v49, v50, v51);
  v52 = System_Action_TypeInfo;
  v53 = *(EasingObject_o **)(v5 + 16);
  *(_BYTE *)(v5 + 64) = 0;
  v54 = (System_Action_o *)sub_2213CCC(v52);
  System_Action___ctor(v54, (Il2CppObject *)v5, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, 0);
  v55 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)v5, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, 0);
  v56 = *(_QWORD *)(v5 + 32);
  if ( !v56 )
    goto LABEL_71;
  if ( !v53 )
    goto LABEL_71;
  EasingObject__Play_56121168(v53, 1.0, 0.0, startupAnimTime, v54, v55, 0.0, *(_DWORD *)(v56 + 188), 0);
  blankEarth = (BlankEarth_o *)*v45;
  if ( !*v45 )
    goto LABEL_71;
  IsPlanetEarthActive = ScrTerminalListTop__IsPlanetEarthActive((ScrTerminalListTop_o *)blankEarth, 0);
  blankEarth = (BlankEarth_o *)*v45;
  if ( IsPlanetEarthActive )
  {
    if ( *(_QWORD *)v14 && blankEarth )
    {
      ScrTerminalListTop__FrameInOutPlanetEarthRotateBtn(
        (ScrTerminalListTop_o *)blankEarth,
        *(float *)(*(_QWORD *)v14 + 172LL),
        0,
        1,
        0);
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v58);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      blankEarth = (BlankEarth_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v58);
        blankEarth = (BlankEarth_o *)TerminalSceneComponent_TypeInfo;
      }
      v59 = **(_QWORD **)&blankEarth->fields.zoomOutEasingType;
      if ( v59 )
      {
        v60 = *(_QWORD *)(v59 + 256);
        if ( v60 )
        {
          *(_BYTE *)(v60 + 864) = 1;
          return;
        }
      }
    }
LABEL_71:
    sub_2213CDC(blankEarth, v7);
  }
  if ( !blankEarth )
    goto LABEL_71;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)blankEarth, 0, 1, 0);
  if ( !*(_QWORD *)v14 )
    goto LABEL_71;
  blankEarth = (BlankEarth_o *)*v45;
  if ( !*v45 )
    goto LABEL_71;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
    (ScrTerminalListTop_o *)blankEarth,
    *(float *)(*(_QWORD *)v14 + 172LL),
    0,
    1,
    0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v61);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  blankEarth = (BlankEarth_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v61);
    blankEarth = (BlankEarth_o *)TerminalSceneComponent_TypeInfo;
  }
  v62 = **(_QWORD **)&blankEarth->fields.zoomOutEasingType;
  if ( !v62 )
    goto LABEL_71;
  v63 = *(_QWORD *)(v62 + 256);
  if ( !v63 )
    goto LABEL_71;
  v64 = (unsigned __int8)byte_596A090;
  *(_BYTE *)(v63 + 490) = 1;
  if ( !v64 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    blankEarth = (BlankEarth_o *)TerminalSceneComponent_TypeInfo;
    byte_596A090 = 1;
  }
  if ( !LODWORD(blankEarth->fields.totalAngle) )
  {
    j_il2cpp_runtime_class_init_0(blankEarth, v7, v61);
    blankEarth = (BlankEarth_o *)TerminalSceneComponent_TypeInfo;
  }
  v65 = **(_QWORD **)&blankEarth->fields.zoomOutEasingType;
  if ( !v65 )
    goto LABEL_71;
  v66 = *(_QWORD *)(v65 + 256);
  if ( !v66 )
    goto LABEL_71;
  *(_BYTE *)(v66 + 491) = 1;
}


void BlankEarth_StateStartup__end(BlankEarth_StateStartup_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void BlankEarth_StateStartup__update(BlankEarth_StateStartup_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct System_Action_o *scalingEndCallback; // x8
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( !that )
    sub_2213CDC(this, 0);
  BlankEarth__BlunkEarthMainOperation(that, that, &this->fields.inertialSpeedX, &this->fields.inertialSpeedY, v3);
  scalingEndCallback = that->fields.scalingEndCallback;
  if ( scalingEndCallback )
  {
    if ( this->fields.scaleRate < 0.0001 )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))scalingEndCallback->fields.invoke_impl)(
        scalingEndCallback->fields.method_code,
        scalingEndCallback->fields.method);
      that->fields.scalingEndCallback = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&that->fields.scalingEndCallback, 0, v7, v8, v9, v10, v11, v12);
    }
  }
}


void BlankEarth_StateStartup___c__DisplayClass3_0___ctor(
        BlankEarth_StateStartup___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth_StateStartup___c__DisplayClass3_0___begin_b__0(
        BlankEarth_StateStartup___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  BlankEarth_StateStartup___c__DisplayClass3_0_o *v2; // x19
  struct EasingObject_o *eo; // x8
  float mNow; // s8
  double v5; // d0
  struct BlankEarth_StateStartup_o *_4__this; // x8
  float v7; // s9
  struct BlankEarth_o *that; // x9
  float v9; // s0
  float z; // s3
  float v11; // s4
  unsigned __int64 v12; // d0 OVERLAPPED
  float v13; // s2
  int v14; // s1
  struct BlankEarth_o *v15; // x8
  struct ScrTerminalListTop_o *terminalList; // x8
  _BOOL4 isFirstAnim; // w8
  struct BlankEarth_o *v18; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  bool IsPlanetEarthActive; // w8
  struct BlankEarth_o *v21; // x9

  v2 = this;
  if ( (byte_596CDE3 & 1) == 0 )
  {
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_596CDE3 = 1;
  }
  eo = v2->fields.eo;
  if ( !eo )
    goto LABEL_36;
  mNow = eo->fields.mNow;
  v5 = StepFunc__Acc5(mNow, 0);
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_36;
  v7 = v5;
  that = v2->fields.that;
  _4__this->fields.scaleRate = v7;
  if ( !that )
    goto LABEL_36;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)that->fields.earthRoot;
  if ( !this )
    goto LABEL_36;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_36;
  v9 = 1.0;
  if ( v7 <= 1.0 )
    v9 = v7;
  if ( v7 < 0.0 )
    v9 = 0.0;
  z = v2->fields.root_scl_to.fields.z;
  v11 = v9 * (float)(v2->fields.root_scl_from.fields.z - z);
  v12 = vadd_f32(
          *(float32x2_t *)&v2->fields.root_scl_to.fields.x,
          vmul_n_f32(
            vsub_f32(
              *(float32x2_t *)&v2->fields.root_scl_from.fields.x,
              *(float32x2_t *)&v2->fields.root_scl_to.fields.x),
            v9)).n64_u64[0];
  v13 = z + v11;
  v14 = HIDWORD(v12);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v12, 0);
  if ( !v2->fields.isStartRotateBtn )
  {
    v15 = v2->fields.that;
    if ( !v15 )
      goto LABEL_36;
    if ( mNow >= v15->fields.startupFrameInRotateBtnRate )
      return;
    if ( !v15->fields.isTutorialAvailable )
    {
      terminalList = v2->fields.terminalList;
      if ( !terminalList )
        goto LABEL_36;
      this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)terminalList->fields.mActionBgColl;
      if ( !this )
        goto LABEL_36;
      this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
      if ( !this )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    isFirstAnim = v2->fields.isFirstAnim;
    v2->fields.isStartRotateBtn = 1;
    if ( isFirstAnim )
      return;
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( this )
    {
      this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)QuestAfterAction__IsActiveCommand(
                                                                 (QuestAfterAction_o *)this,
                                                                 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        return;
      v18 = v2->fields.that;
      if ( v18 )
      {
        mTerminalList = v18->fields.mTerminalList;
        if ( mTerminalList )
        {
          if ( mTerminalList->fields.IsBlankEarthChaldeaGateWait )
            return;
          this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)v2->fields.terminalList;
          if ( this )
          {
            IsPlanetEarthActive = ScrTerminalListTop__IsPlanetEarthActive((ScrTerminalListTop_o *)this, 0);
            this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)v2->fields.terminalList;
            v21 = v2->fields.that;
            if ( IsPlanetEarthActive )
            {
              if ( v21 && this )
              {
                ScrTerminalListTop__FrameInOutPlanetEarthRotateBtn(
                  (ScrTerminalListTop_o *)this,
                  v21->fields.earthBtnMoveSpeedTime,
                  1,
                  0,
                  0);
                return;
              }
            }
            else if ( v21 )
            {
              if ( this )
              {
                ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
                  (ScrTerminalListTop_o *)this,
                  v21->fields.earthBtnMoveSpeedTime,
                  1,
                  0,
                  0);
                this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)v2->fields.terminalList;
                if ( this )
                {
                  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)this, 1, 0, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_36:
    sub_2213CDC(this, method);
  }
}


void BlankEarth_StateStartup___c__DisplayClass3_0___begin_b__1(
        BlankEarth_StateStartup___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  BlankEarth_StateStartup___c__DisplayClass3_0_o *v2; // x19
  struct BlankEarth_o *that; // x8
  Il2CppObject *v4; // x20
  void *monitor; // x8
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct BlankEarth_o *v12; // x8
  float wait_time; // s8
  System_Action_o *v14; // x21
  struct BlankEarth_o *v15; // x8

  v2 = this;
  if ( (byte_596CDE4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_2213A60(&Method_BlankEarth_SetMainState__);
    byte_596CDE4 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_13;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)that->fields.earthRoot;
  if ( !this )
    goto LABEL_13;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_13;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v2->fields.root_scl_to, 0);
  v4 = (Il2CppObject *)v2->fields.that;
  if ( !v4 )
    goto LABEL_13;
  monitor = v4[19].monitor;
  if ( monitor )
  {
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)(*((__int64 (__fastcall **)(_QWORD, _QWORD))monitor + 3))(
                                                               *((_QWORD *)monitor + 8),
                                                               *((_QWORD *)monitor + 5));
    v12 = v2->fields.that;
    if ( !v12 )
      goto LABEL_13;
    v12->fields.scalingEndCallback = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.scalingEndCallback, 0, v6, v7, v8, v9, v10, v11);
    v4 = (Il2CppObject *)v2->fields.that;
  }
  wait_time = v2->fields.wait_time;
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, v4, Method_BlankEarth_SetMainState__, 0);
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)BasicHelper__DelayCall(wait_time, v14, 1, 0);
  if ( !v4
    || (this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                                                                   (UnityEngine_MonoBehaviour_o *)v4,
                                                                   (System_Collections_IEnumerator_o *)this,
                                                                   0),
        (v15 = v2->fields.that) == 0) )
  {
LABEL_13:
    sub_2213CDC(this, method);
  }
  v15->fields.isSkipTutorialWait = 0;
}


void BlankEarth_StateZoomIn___ctor(BlankEarth_StateZoomIn_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarth_StateZoomIn__SetOtherObjectZoomInParam(
        BlankEarth_StateZoomIn_o *this,
        BlankEarthOtherObject_o *otherRoot,
        BlankEarth_o *blankEarth,
        UnityEngine_Vector3_o *rootPosTo,
        UnityEngine_Vector3_o *rootScaleTo,
        UnityEngine_Quaternion_o *rootQuaTo,
        float *zoomSpeed,
        const MethodInfo *method)
{
  BlankEarthTransform_o *updated; // x25
  __int64 v15; // x2
  float z; // w9
  float v17; // s8
  float zoomInScl; // s0
  TerminalPramsManager_c *v19; // x0
  float zoomInSpdTime; // s9
  __int64 v21; // x1
  __int64 v22; // x2
  float IntpTime_AutoResume; // s0
  UnityEngine_Object_c *v24; // x0
  unsigned __int64 v30; // d0
  int32_t zoomOutEasingType; // w1
  float y; // [xsp+0h] [xbp-70h]
  float x; // [xsp+10h] [xbp-60h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CDE6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BlankEarth_StateZoomIn_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDE6 = 1;
  }
  if ( !blankEarth )
    goto LABEL_15;
  updated = BlankEarth__UpdateBlankEarthTransformData(blankEarth, (const MethodInfo *)otherRoot);
  LocalPosition = GameObjectExtensions__GetLocalPosition(blankEarth->fields.otherObjectRoot, 0);
  z = blankEarth->fields.zoomInPos.fields.z;
  y = LocalPosition.fields.y;
  x = LocalPosition.fields.x;
  *(_QWORD *)&rootPosTo->fields.x = *(_QWORD *)&blankEarth->fields.zoomInPos.fields.x;
  rootPosTo->fields.z = z;
  if ( !updated )
    goto LABEL_15;
  v17 = LocalPosition.fields.z;
  *rootQuaTo = updated->fields.blankEarthRotation;
  zoomInScl = blankEarth->fields.zoomInScl;
  rootScaleTo->fields.x = zoomInScl;
  rootScaleTo->fields.y = zoomInScl;
  v19 = TerminalPramsManager_TypeInfo;
  rootScaleTo->fields.z = zoomInScl;
  zoomInSpdTime = blankEarth->fields.zoomInSpdTime;
  if ( !*(&v19->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v19, otherRoot, v15);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(zoomInSpdTime, 0);
  v24 = UnityEngine_Object_TypeInfo;
  *zoomSpeed = IntpTime_AutoResume;
  if ( !*(&v24->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v24, v21, v22);
  this = (BlankEarth_StateZoomIn_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)otherRoot, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( otherRoot )
    {
      if ( otherRoot->fields.zoomType == 1 )
      {
        __asm { FMOV            V0.2S, #1.0 }
        rootScaleTo->fields.z = 1.0;
        *(_QWORD *)&rootScaleTo->fields.x = _D0;
      }
      v30 = vsub_f32(
              *(float32x2_t *)&otherRoot->fields.otherObjZoomInPos.fields.x,
              (float32x2_t)__PAIR64__(LODWORD(y), LODWORD(x))).n64_u64[0];
      rootPosTo->fields.z = otherRoot->fields.otherObjZoomInPos.fields.z - v17;
      *(_QWORD *)&rootPosTo->fields.x = v30;
      *(float *)&v30 = otherRoot->fields.zoomInSpeed;
      zoomOutEasingType = blankEarth->fields.zoomOutEasingType;
      *(_DWORD *)zoomSpeed = v30;
      BlankEarthOtherObject__ZoomInAdjustAppearance(otherRoot, *(float *)&v30, zoomOutEasingType, 0);
      return;
    }
LABEL_15:
    sub_2213CDC(this, otherRoot);
  }
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth_StateZoomIn__begin(BlankEarth_StateZoomIn_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 TerminalListTop; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  BlankEarth_o **v14; // x21
  bool IsPlanetEarthActive; // w8
  __int64 v16; // x2
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x2
  __int64 v20; // x8
  __int64 v21; // x8
  int v22; // w9
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x2
  float zoomInSpdTime; // s8
  float IntpTime_AutoResume; // s0
  BlankEarth_StateZoomIn_Fields *p_fields; // x19
  __int64 v29; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x8
  float v39; // s8
  __int64 v40; // x2
  BlankEarth_o *v41; // x8
  struct BlankEarthPoint_o *focusEarthPoint; // x9
  int32x4_t v43; // q4
  int8x16_t FocusQua_k__BackingField; // q6
  float32x4_t v45; // q7
  float32x4_t v46; // q3
  int v47; // w9
  float32x4_t v48; // q5
  float32x4_t v49; // q16
  float32x4_t v50; // q2
  int8x16_t v51; // q0
  float32x4_t v52; // q1
  int8x16_t v53; // q4
  float32x4_t v54; // q2
  __int64 v55; // x10
  float z; // w10
  __int64 v57; // x10
  float zoomInScl; // s0
  struct BlankEarthPoint_o *v59; // x9
  UnityEngine_Object_o *otherObjectRoot; // x25
  Il2CppObject *v61; // x0
  const MethodInfo *v62; // x7
  UnityEngine_Object_o *v63; // x22
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  BlankEarth_o *v70; // x21
  BlankEarthPoint_o *Point; // x1
  int32_t BlankEarthSpotId; // w0
  const MethodInfo *v73; // x3
  __int64 v74; // x8
  __int64 v75; // d0
  int v76; // s1
  int v77; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v79; // x8
  float v80; // s1
  System_Object_array *ComponentsInChildren_object__59472212; // x0
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  EasingObject_o *v88; // x21
  float mSpdTime; // s8
  System_Action_o *v90; // x19
  System_Action_o *v91; // x22
  __int64 v92; // x8
  UnityEngine_Quaternion_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_596CDE5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__);
    sub_2213A60(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__);
    sub_2213A60(&BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo);
    byte_596CDE5 = 1;
  }
  v5 = sub_2213CCC(BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_85;
  *(_QWORD *)(v5 + 24) = that;
  v14 = (BlankEarth_o **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)that, v8, v9, v10, v11, v12, v13);
  TerminalListTop = *(_QWORD *)(v5 + 24);
  if ( !TerminalListTop )
    goto LABEL_85;
  TerminalListTop = (__int64)BlankEarth__get_TerminalListTop((BlankEarth_o *)TerminalListTop, v7);
  if ( !TerminalListTop )
    goto LABEL_85;
  IsPlanetEarthActive = ScrTerminalListTop__IsPlanetEarthActive((ScrTerminalListTop_o *)TerminalListTop, 0);
  TerminalListTop = (__int64)*v14;
  if ( IsPlanetEarthActive )
  {
    if ( !TerminalListTop )
      goto LABEL_85;
    TerminalListTop = (__int64)BlankEarth__get_TerminalListTop((BlankEarth_o *)TerminalListTop, v7);
    if ( !*v14 || !TerminalListTop )
      goto LABEL_85;
    ScrTerminalListTop__FrameInOutPlanetEarthRotateBtn(
      (ScrTerminalListTop_o *)TerminalListTop,
      (*v14)->fields.earthBtnMoveSpeedTime,
      0,
      0,
      0);
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v16);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    TerminalListTop = (__int64)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v16);
      TerminalListTop = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v17 = **(_QWORD **)(TerminalListTop + 184);
    if ( !v17 )
      goto LABEL_85;
    v18 = *(_QWORD *)(v17 + 256);
    if ( !v18 )
      goto LABEL_85;
    *(_BYTE *)(v18 + 864) = 1;
  }
  else
  {
    if ( !TerminalListTop )
      goto LABEL_85;
    TerminalListTop = (__int64)BlankEarth__get_TerminalListTop((BlankEarth_o *)TerminalListTop, v7);
    if ( !TerminalListTop )
      goto LABEL_85;
    ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)TerminalListTop, 0, 0, 0);
    TerminalListTop = (__int64)*v14;
    if ( !*v14 )
      goto LABEL_85;
    TerminalListTop = (__int64)BlankEarth__get_TerminalListTop((BlankEarth_o *)TerminalListTop, v7);
    if ( !*v14 || !TerminalListTop )
      goto LABEL_85;
    ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
      (ScrTerminalListTop_o *)TerminalListTop,
      (*v14)->fields.earthBtnMoveSpeedTime,
      0,
      0,
      0);
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v19);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    TerminalListTop = (__int64)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v19);
      TerminalListTop = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v20 = **(_QWORD **)(TerminalListTop + 184);
    if ( !v20 )
      goto LABEL_85;
    v21 = *(_QWORD *)(v20 + 256);
    if ( !v21 )
      goto LABEL_85;
    v22 = (unsigned __int8)byte_596A090;
    *(_BYTE *)(v21 + 490) = 1;
    if ( !v22 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      TerminalListTop = (__int64)TerminalSceneComponent_TypeInfo;
      byte_596A090 = 1;
    }
    if ( !*(_DWORD *)(TerminalListTop + 228) )
    {
      j_il2cpp_runtime_class_init_0(TerminalListTop, v7, v19);
      TerminalListTop = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v23 = **(_QWORD **)(TerminalListTop + 184);
    if ( !v23 )
      goto LABEL_85;
    v24 = *(_QWORD *)(v23 + 256);
    if ( !v24 )
      goto LABEL_85;
    *(_BYTE *)(v24 + 491) = 1;
  }
  TerminalListTop = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_85;
  if ( BlankEarth__get_BlankEarthSpotId((BlankEarth_o *)TerminalListTop, v7) )
    return;
  TerminalListTop = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_85;
  BlankEarth__SaveBlankEarthSpotData((BlankEarth_o *)TerminalListTop, v7);
  if ( !*v14 )
    goto LABEL_85;
  zoomInSpdTime = (*v14)->fields.zoomInSpdTime;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v25);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(zoomInSpdTime, 0);
  TerminalListTop = (__int64)*v14;
  this->fields.mSpdTime = IntpTime_AutoResume;
  p_fields = &this->fields;
  if ( !TerminalListTop )
    goto LABEL_85;
  TerminalListTop = (__int64)BlankEarth__get_TerminalListTop((BlankEarth_o *)TerminalListTop, v7);
  if ( !*v14 )
    goto LABEL_85;
  if ( !TerminalListTop )
    goto LABEL_85;
  ScrTerminalListTop__cbfBlankEarthQuestCreate(
    (ScrTerminalListTop_o *)TerminalListTop,
    (*v14)->fields.focusEarthPoint,
    0);
  TerminalListTop = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_85;
  BlankEarth__SaveEarthRotate((BlankEarth_o *)TerminalListTop, v7);
  TerminalListTop = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_85;
  TerminalListTop = (__int64)BlankEarth__UpdateBlankEarthTransformData((BlankEarth_o *)TerminalListTop, v7);
  if ( !*v14 )
    goto LABEL_85;
  v29 = TerminalListTop;
  TerminalListTop = (__int64)(*v14)->fields.blankEarth;
  if ( !TerminalListTop )
    goto LABEL_85;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TerminalListTop, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Component_object, v32, v33, v34, v35, v36, v37);
  if ( !v29 )
    goto LABEL_85;
  v38 = *(_QWORD *)(v5 + 24);
  *(_OWORD *)(v5 + 32) = *(_OWORD *)(v29 + 16);
  if ( !v38 )
    goto LABEL_85;
  v39 = *(float *)(v38 + 84);
  if ( !byte_5969AE8 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE8 = 1;
  }
  v93 = UnityEngine_Quaternion__AngleAxis(-v39, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
  v41 = *v14;
  if ( !*v14 )
    goto LABEL_85;
  focusEarthPoint = v41->fields.focusEarthPoint;
  if ( !focusEarthPoint )
    goto LABEL_85;
  v43 = (int32x4_t)v93;
  FocusQua_k__BackingField = (int8x16_t)focusEarthPoint->fields._FocusQua_k__BackingField;
  v45 = FocusQua_k__BackingField;
  v46 = vmulq_n_f32(FocusQua_k__BackingField, v93.fields.w);
  v47 = (unsigned __int8)byte_5969AE6;
  v43.n128_u32[1] = LODWORD(v93.fields.y);
  v45.n128_u32[3] = FocusQua_k__BackingField.n128_u32[1];
  v43.n128_u32[2] = LODWORD(v93.fields.z);
  v48 = vzip1q_s32(v43, v43);
  v49 = vuzp1q_s32(v43, v43);
  v43.n128_u32[3] = LODWORD(v93.fields.x);
  v48.n128_u32[0] = LODWORD(v93.fields.z);
  v49.n128_u32[0] = LODWORD(v93.fields.y);
  v50 = vextq_s8(vdupq_laneq_s32(FocusQua_k__BackingField, 3), FocusQua_k__BackingField, 4u);
  FocusQua_k__BackingField.n128_u32[3] = FocusQua_k__BackingField.n128_u32[2];
  v51 = vmulq_f32(v48, v45);
  v52 = vmulq_f32(v43, v50);
  v53 = vmulq_f32(v49, FocusQua_k__BackingField);
  v54 = vaddq_f32(vaddq_f32(v46, v52), vuzp2q_s32(vextq_s8(v51, v51, 4u), v51));
  v54.n128_u32[3] = vsubq_f32(vsubq_f32(v46, v52), v51).n128_u32[3];
  *(float32x4_t *)(v5 + 48) = vsubq_f32(v54, vzip2q_s32(vzip1q_s32(v53, vextq_s8(v53, v53, 0xCu)), v53));
  *(_OWORD *)(v5 + 64) = *(_OWORD *)(v29 + 32);
  if ( !v47 )
  {
    TerminalListTop = sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    v41 = *v14;
    byte_5969AE6 = 1;
  }
  *(struct UnityEngine_Quaternion_StaticFields *)(v5 + 80) = *UnityEngine_Quaternion_TypeInfo->static_fields;
  v55 = *(_QWORD *)(v29 + 48);
  *(_DWORD *)(v5 + 104) = *(_DWORD *)(v29 + 56);
  *(_QWORD *)(v5 + 96) = v55;
  if ( !v41 )
    goto LABEL_85;
  z = v41->fields.zoomInPos.fields.z;
  *(_QWORD *)(v5 + 108) = *(_QWORD *)&v41->fields.zoomInPos.fields.x;
  *(float *)(v5 + 116) = z;
  v57 = *(_QWORD *)(v29 + 60);
  *(_DWORD *)(v5 + 128) = *(_DWORD *)(v29 + 68);
  *(_QWORD *)(v5 + 120) = v57;
  zoomInScl = v41->fields.zoomInScl;
  *(float *)(v5 + 132) = zoomInScl;
  *(float *)(v5 + 136) = zoomInScl;
  *(float *)(v5 + 140) = zoomInScl;
  v59 = v41->fields.focusEarthPoint;
  *(_BYTE *)(v5 + 176) = 0;
  if ( !v59 )
    goto LABEL_85;
  if ( v59->fields._spotOnType_k__BackingField == 1 )
  {
    otherObjectRoot = (UnityEngine_Object_o *)v41->fields.otherObjectRoot;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v40);
    TerminalListTop = UnityEngine_Object__op_Inequality(otherObjectRoot, 0, 0);
    v41 = *v14;
    if ( (TerminalListTop & 1) != 0 )
    {
      if ( !v41 )
        goto LABEL_85;
      TerminalListTop = (__int64)v41->fields.otherObjectRoot;
      if ( !TerminalListTop )
        goto LABEL_85;
      v61 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)TerminalListTop,
              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      BlankEarth_StateZoomIn__SetOtherObjectZoomInParam(
        (BlankEarth_StateZoomIn_o *)v61,
        (BlankEarthOtherObject_o *)v61,
        *v14,
        (UnityEngine_Vector3_o *)(v5 + 108),
        (UnityEngine_Vector3_o *)(v5 + 132),
        (UnityEngine_Quaternion_o *)(v5 + 48),
        &p_fields->mSpdTime,
        v62);
      v41 = *v14;
    }
    if ( !v41 )
      goto LABEL_85;
  }
  v63 = (UnityEngine_Object_o *)v41->fields.focusEarthPoint;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v40);
  TerminalListTop = UnityEngine_Object__op_Inequality(v63, 0, 0);
  v70 = *v14;
  if ( (TerminalListTop & 1) != 0 )
  {
    if ( !v70 )
      goto LABEL_85;
    Point = v70->fields.focusEarthPoint;
  }
  else
  {
    if ( !v70 )
      goto LABEL_85;
    BlankEarthSpotId = BlankEarth__get_BlankEarthSpotId(v70, v7);
    Point = BlankEarth__GetPoint(v70, BlankEarthSpotId, 0, v73);
  }
  *(_QWORD *)(v5 + 144) = Point;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 144), (int32_t)Point, v64, v65, v66, v67, v68, v69);
  v74 = *(_QWORD *)(v5 + 144);
  if ( !v74 )
    goto LABEL_85;
  v75 = *(_QWORD *)(v74 + 152);
  v76 = *(_DWORD *)(v74 + 160);
  v77 = (unsigned __int8)byte_5969AE0;
  *(_QWORD *)(v5 + 152) = v75;
  *(_DWORD *)(v5 + 160) = v76;
  if ( !v77 )
  {
    TerminalListTop = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v79 = *(_QWORD *)(v5 + 24);
  v80 = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v5 + 164) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v5 + 172) = v80;
  if ( !v79 )
    goto LABEL_85;
  TerminalListTop = *(_QWORD *)(v79 + 48);
  if ( !TerminalListTop )
    goto LABEL_85;
  ComponentsInChildren_object__59472212 = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                            (UnityEngine_GameObject_o *)TerminalListTop,
                                            (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  *(_QWORD *)(v5 + 184) = ComponentsInChildren_object__59472212;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v5 + 184),
    (int32_t)ComponentsInChildren_object__59472212,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  v88 = *(EasingObject_o **)(v5 + 16);
  mSpdTime = p_fields->mSpdTime;
  v90 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v90, (Il2CppObject *)v5, Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__, 0);
  v91 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v91, (Il2CppObject *)v5, Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__, 0);
  v92 = *(_QWORD *)(v5 + 24);
  if ( !v92 || !v88 )
LABEL_85:
    sub_2213CDC(TerminalListTop, v7);
  EasingObject__Play(v88, mSpdTime, v90, v91, 0.0, *(_DWORD *)(v92 + 180), 0);
}


void BlankEarth_StateZoomIn__end(BlankEarth_StateZoomIn_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void BlankEarth_StateZoomIn__update(BlankEarth_StateZoomIn_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void BlankEarth_StateZoomIn___c__DisplayClass1_0___ctor(
        BlankEarth_StateZoomIn___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth_StateZoomIn___c__DisplayClass1_0___begin_b__0(
        BlankEarth_StateZoomIn___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  BlankEarth_StateZoomIn___c__DisplayClass1_0_o *v2; // x19
  struct EasingObject_o *eo; // x8
  float mNow; // s9
  double v5; // d0
  struct BlankEarth_o *that; // x8
  float v7; // s10
  UnityEngine_Transform_o *blankEarth; // x20
  struct BlankEarth_o *v9; // x8
  UnityEngine_Transform_o *transform; // x20
  struct BlankEarth_o *v11; // x8
  UnityEngine_Transform_o *v12; // x0
  float z; // s10
  float32x2_t v14; // d11
  float32x2_t v15; // d12
  float v16; // s13
  UnityEngine_Transform_o *v17; // x20
  double v18; // d0
  float v19; // s0
  float v20; // s1
  float v21; // s0
  float v22; // s2
  unsigned __int64 v23; // d0 OVERLAPPED
  float v24; // s2
  int v25; // s1
  struct BlankEarth_o *v26; // x8
  UnityEngine_Transform_o *v27; // x0
  float v28; // s12
  float32x2_t v29; // d13
  float32x2_t v30; // d14
  float v31; // s15
  UnityEngine_Transform_o *v32; // x20
  double v33; // d0
  float v34; // s0
  float v35; // s1
  float v36; // s0
  float v37; // s2
  unsigned __int64 v38; // d0 OVERLAPPED
  float v39; // s2
  int v40; // s1
  struct BlankEarthPoint_o *focusEarthPoint; // x20
  float v42; // s12
  float32x2_t v43; // d13
  float32x2_t v44; // d15
  float v45; // s14
  __int64 v46; // x2
  double v47; // d0
  float v48; // s0
  float v49; // s1
  bool v50; // nf
  float32x2_t v51; // d0
  struct EasingObject_o *v52; // x8
  struct BlankEarthPoint_array *spotList; // x21
  float v54; // s0
  int max_length; // w8
  float v56; // s8
  unsigned int v57; // w23
  BlankEarthPoint_o *v58; // x20
  struct BlankEarth_o *v59; // x8
  struct BlankEarth_o *v60; // x8
  UnityEngine_Quaternion_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_596CDE7 & 1) == 0 )
  {
    this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)sub_2213A60(&BlankEarth_TypeInfo);
    byte_596CDE7 = 1;
  }
  eo = v2->fields.eo;
  if ( !eo )
    goto LABEL_56;
  mNow = eo->fields.mNow;
  v5 = StepFunc__AccSig(mNow, 0);
  that = v2->fields.that;
  if ( !that )
    goto LABEL_56;
  v7 = v5;
  blankEarth = that->fields.blankEarth;
  v61 = UnityEngine_Quaternion__Slerp(v2->fields.qua_from, v2->fields.qua_to, v7, 0);
  if ( !blankEarth )
    goto LABEL_56;
  UnityEngine_Transform__set_rotation(blankEarth, v61, 0);
  v9 = v2->fields.that;
  if ( !v9 )
    goto LABEL_56;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v9->fields.earthRoot;
  if ( !this )
    goto LABEL_56;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v62 = UnityEngine_Quaternion__Slerp(v2->fields.root_qua_from, v2->fields.root_qua_to, v7, 0);
  if ( !transform )
    goto LABEL_56;
  UnityEngine_Transform__set_rotation(transform, v62, 0);
  v11 = v2->fields.that;
  if ( !v11 )
    goto LABEL_56;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v11->fields.earthRoot;
  if ( !this )
    goto LABEL_56;
  v12 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  z = v2->fields.root_pos_from.fields.z;
  v14.n64_u64[0] = *(unsigned __int64 *)&v2->fields.root_pos_from.fields.x;
  v15.n64_u64[0] = *(unsigned __int64 *)&v2->fields.root_pos_to.fields.x;
  v16 = v2->fields.root_pos_to.fields.z;
  v17 = v12;
  v18 = StepFunc__DecSin(mNow, 0);
  if ( !v17 )
    goto LABEL_56;
  v19 = v18;
  v20 = 1.0;
  if ( v19 <= 1.0 )
    v20 = v19;
  v21 = v19 >= 0.0 ? v20 : 0.0;
  v22 = (float)(v16 - z) * v21;
  v23 = vadd_f32(v14, vmul_n_f32(vsub_f32(v15, v14), v21)).n64_u64[0];
  v24 = z + v22;
  v25 = HIDWORD(v23);
  UnityEngine_Transform__set_localPosition(v17, *(UnityEngine_Vector3_o *)&v23, 0);
  v26 = v2->fields.that;
  if ( !v26 )
    goto LABEL_56;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v26->fields.earthRoot;
  if ( !this )
    goto LABEL_56;
  v27 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v28 = v2->fields.root_scl_from.fields.z;
  v29.n64_u64[0] = *(unsigned __int64 *)&v2->fields.root_scl_from.fields.x;
  v30.n64_u64[0] = *(unsigned __int64 *)&v2->fields.root_scl_to.fields.x;
  v31 = v2->fields.root_scl_to.fields.z;
  v32 = v27;
  v33 = StepFunc__Acc5(mNow, 0);
  if ( !v32 )
    goto LABEL_56;
  v34 = v33;
  v35 = v34 <= 1.0 ? v34 : 1.0;
  v36 = v34 >= 0.0 ? v35 : 0.0;
  v37 = (float)(v31 - v28) * v36;
  v38 = vadd_f32(v29, vmul_n_f32(vsub_f32(v30, v29), v36)).n64_u64[0];
  v39 = v28 + v37;
  v40 = HIDWORD(v38);
  UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)&v38, 0);
  focusEarthPoint = v2->fields.focusEarthPoint;
  v42 = v2->fields.spot_ui_root_qua_from.fields.z;
  v43.n64_u64[0] = *(unsigned __int64 *)&v2->fields.spot_ui_root_qua_from.fields.x;
  v44.n64_u64[0] = *(unsigned __int64 *)&v2->fields.spot_ui_root_qua_to.fields.x;
  v45 = v2->fields.spot_ui_root_qua_to.fields.z;
  v47 = StepFunc__Acc5(mNow, 0);
  if ( !focusEarthPoint )
    goto LABEL_56;
  v48 = v47;
  if ( v48 <= 1.0 )
    v49 = v48;
  else
    v49 = 1.0;
  v50 = v48 < 0.0;
  v51.n64_u64[0] = vsub_f32(v44, v43).n64_u64[0];
  if ( v50 )
    v49 = 0.0;
  *(float32x2_t *)&focusEarthPoint->fields.changedUiRootPosition.fields.x = vadd_f32(v43, vmul_n_f32(v51, v49));
  focusEarthPoint->fields.changedUiRootPosition.fields.z = v42 + (float)((float)(v45 - v42) * v49);
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v2->fields.that;
  if ( v2->fields.isStartSlideIn )
  {
    if ( !this )
      goto LABEL_56;
  }
  else
  {
    if ( !this )
      goto LABEL_56;
    if ( mNow > this->fields.root_pos_from.fields.z )
    {
      v2->fields.isStartSlideIn = 1;
      this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)BlankEarth__get_TerminalListTop(
                                                                (BlankEarth_o *)this,
                                                                method);
      v60 = v2->fields.that;
      if ( !v60 )
        goto LABEL_56;
      if ( !this )
        goto LABEL_56;
      ScrTerminalListTop__CallBlankEarthSpotCreateFinishEvent(
        (ScrTerminalListTop_o *)this,
        v60->fields.focusEarthPoint,
        0);
      this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v2->fields.that;
      if ( !this )
        goto LABEL_56;
    }
  }
  v52 = this[1].fields.eo;
  if ( !v52 )
    goto LABEL_56;
  if ( LODWORD(v52[3].fields.mStartTime) == 1 )
  {
    spotList = v2->fields.spotList;
    if ( !spotList )
      goto LABEL_56;
    v54 = 1.0;
    max_length = spotList->max_length;
    if ( mNow <= 1.0 )
      v54 = mNow;
    v56 = mNow >= 0.0 ? v54 : 0.0;
    if ( max_length >= 1 )
    {
      v57 = 0;
      while ( 1 )
      {
        if ( v57 >= max_length )
          sub_2213CE4(this);
        this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)BlankEarth_TypeInfo;
        v58 = spotList->m_Items[v57];
        if ( !*(&BlankEarth_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo, method, v46);
        v59 = v2->fields.that;
        if ( !v59 || !v58 )
          break;
        BlankEarthPoint__SetDispUIDotRange(
          v58,
          BlankEarth_TypeInfo->static_fields->EARTH_DISP_SPOT_UI_SPRITE_DOT
        + (float)(v56
                * (float)(v59->fields.object1DispSpotUISpriteDot
                        - BlankEarth_TypeInfo->static_fields->EARTH_DISP_SPOT_UI_SPRITE_DOT)),
          BlankEarth_TypeInfo->static_fields->EARTH_NO_DISP_SPOT_UI_SPRITE_DOT
        + (float)(v56
                * (float)(v59->fields.object1NoDispSpotUISpriteDot
                        - BlankEarth_TypeInfo->static_fields->EARTH_NO_DISP_SPOT_UI_SPRITE_DOT)),
          0);
        max_length = spotList->max_length;
        if ( (int)++v57 >= max_length )
          return;
      }
LABEL_56:
      sub_2213CDC(this, method);
    }
  }
}


void BlankEarth_StateZoomIn___c__DisplayClass1_0___begin_b__1(
        BlankEarth_StateZoomIn___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  BlankEarth_StateZoomIn___c__DisplayClass1_0_o *v2; // x19
  struct BlankEarth_o *that; // x8
  struct BlankEarth_o *v4; // x8
  struct BlankEarth_o *v5; // x8
  struct BlankEarth_o *v6; // x8
  __int64 v7; // x2
  struct BlankEarth_o *v8; // x8
  struct BlankEarthPoint_o *focusEarthPoint; // x8
  struct BlankEarthPoint_array *spotList; // x20
  int max_length; // w8
  __int64 v12; // x21
  struct BlankEarth_o *v13; // x8
  Il2CppClass *klass; // x8
  __int64 v15; // x8

  v2 = this;
  if ( (byte_596CDE8 & 1) == 0 )
  {
    this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596CDE8 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_33;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_33;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v2->fields.qua_to, 0);
  v4 = v2->fields.that;
  if ( !v4 )
    goto LABEL_33;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v4->fields.earthRoot;
  if ( !this )
    goto LABEL_33;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
  if ( !this )
    goto LABEL_33;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v2->fields.root_qua_to, 0);
  v5 = v2->fields.that;
  if ( !v5 )
    goto LABEL_33;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v5->fields.earthRoot;
  if ( !this )
    goto LABEL_33;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
  if ( !this )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v2->fields.root_pos_to, 0);
  v6 = v2->fields.that;
  if ( !v6 )
    goto LABEL_33;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v6->fields.earthRoot;
  if ( !this )
    goto LABEL_33;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
  if ( !this )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v2->fields.root_scl_to, 0);
  v8 = v2->fields.that;
  if ( !v8 )
    goto LABEL_33;
  focusEarthPoint = v8->fields.focusEarthPoint;
  if ( !focusEarthPoint )
    goto LABEL_33;
  if ( focusEarthPoint->fields._spotOnType_k__BackingField == 1 )
  {
    spotList = v2->fields.spotList;
    if ( !spotList )
      goto LABEL_33;
    max_length = spotList->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
          sub_2213CE4(this);
        v13 = v2->fields.that;
        if ( !v13 )
          break;
        this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)spotList->m_Items[v12];
        if ( !this )
          break;
        BlankEarthPoint__SetDispUIDotRange(
          (BlankEarthPoint_o *)this,
          v13->fields.object1DispSpotUISpriteDot,
          v13->fields.object1NoDispSpotUISpriteDot,
          0);
        max_length = spotList->max_length;
        if ( (int)++v12 >= max_length )
          goto LABEL_24;
      }
LABEL_33:
      sub_2213CDC(this, method);
    }
  }
LABEL_24:
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v7);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v7);
    this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = this->fields.spotList->obj.klass;
  if ( !klass )
    goto LABEL_33;
  v15 = *(_QWORD *)&klass->_2.element_size;
  if ( !v15 )
    goto LABEL_33;
  *(_BYTE *)(v15 + 106) = 0;
}


void BlankEarth_StateZoomOut___ctor(BlankEarth_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth_StateZoomOut__begin(BlankEarth_StateZoomOut_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  __int64 v4; // x20
  BlankEarth_o *blankEarth; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  BlankEarth_o **v13; // x19
  __int64 v14; // x2
  float zoomOutSpdTime; // s8
  __int64 v16; // x2
  float IntpTime_AutoResume; // s0
  float v18; // s8
  UnityEngine_Object_o *focusEarthPoint; // x21
  __int64 v20; // x2
  BlankEarth_o *v21; // x8
  struct BlankEarthPoint_o *v22; // x9
  UnityEngine_Object_o *otherObjectRoot; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x8
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  UnityEngine_GameObject_o *v39; // x0
  BlankEarthTransform_o *BlankEarthTransformData; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x2
  __int64 v48; // x8
  __int64 v49; // x10
  int v50; // w9
  __int64 v51; // x8
  float zoomInOffset; // s9
  float v53; // v0.s[1]
  BlankEarth_o *v54; // x8
  int32x4_t v55; // q5
  float32x4_t v56; // q4
  float v57; // v0.s[2]
  float v58; // v0.s[3]
  float32x4_t v59; // q6
  float v60; // v1.s[1]
  int32x4_t v61; // q16
  float32x4_t v62; // q4
  float32x4_t v63; // q6
  float32x4_t v64; // q4
  unsigned __int32 v65; // v3.s[3]
  int v66; // w9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float v68; // s1
  UnityEngine_Object_o *v69; // x21
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  BlankEarth_o *v76; // x21
  BlankEarthPoint_o *Point; // x1
  int32_t BlankEarthSpotId; // w0
  const MethodInfo *v79; // x3
  struct UnityEngine_Vector3_StaticFields *v80; // x9
  __int64 v81; // x8
  float v82; // s1
  __int64 v83; // d0
  int v84; // s1
  __int64 v85; // x8
  System_Object_array *ComponentsInChildren_object__59472212; // x0
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  System_Action_c *v93; // x0
  EasingObject_o *v94; // x21
  System_Action_o *v95; // x22
  System_Action_o *v96; // x23
  __int64 v97; // x8
  __int64 v98; // x2
  UnityEngine_Object_o *v99; // x20
  __int64 v100; // x1
  __int64 v101; // x2
  Il2CppObject *v102; // x20
  float w; // [xsp+0h] [xbp-90h]
  float z; // [xsp+10h] [xbp-80h]
  UnityEngine_Quaternion_o v105; // [xsp+20h] [xbp-70h]
  float y; // [xsp+30h] [xbp-60h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_596CDE9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__);
    sub_2213A60(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__);
    sub_2213A60(&BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo);
    byte_596CDE9 = 1;
  }
  v4 = sub_2213CCC(BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_76;
  *(_QWORD *)(v4 + 24) = that;
  v13 = (BlankEarth_o **)(v4 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)that, v7, v8, v9, v10, v11, v12);
  blankEarth = *(BlankEarth_o **)(v4 + 24);
  if ( !blankEarth )
    goto LABEL_76;
  BlankEarth__ResetBlankEarthSpotData(blankEarth, v6);
  if ( !*v13 )
    goto LABEL_76;
  zoomOutSpdTime = (*v13)->fields.zoomOutSpdTime;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v14);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(zoomOutSpdTime, 0);
  if ( !*v13 )
    goto LABEL_76;
  v18 = IntpTime_AutoResume;
  focusEarthPoint = (UnityEngine_Object_o *)(*v13)->fields.focusEarthPoint;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v16);
  blankEarth = (BlankEarth_o *)UnityEngine_Object__op_Inequality(focusEarthPoint, 0, 0);
  if ( ((unsigned __int8)blankEarth & 1) != 0 )
  {
    v21 = *v13;
    if ( !*v13 )
      goto LABEL_76;
    v22 = v21->fields.focusEarthPoint;
    if ( !v22 )
      goto LABEL_76;
    if ( v22->fields._spotOnType_k__BackingField )
    {
      otherObjectRoot = (UnityEngine_Object_o *)v21->fields.otherObjectRoot;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v20);
      blankEarth = (BlankEarth_o *)UnityEngine_Object__op_Inequality(otherObjectRoot, 0, 0);
      if ( ((unsigned __int8)blankEarth & 1) != 0 )
      {
        if ( !*v13 )
          goto LABEL_76;
        blankEarth = (BlankEarth_o *)(*v13)->fields.otherObjectRoot;
        if ( !blankEarth )
          goto LABEL_76;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)blankEarth,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
        blankEarth = (BlankEarth_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)blankEarth & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_76;
          v18 = *((float *)&Component_object[5].monitor + 1);
        }
      }
    }
  }
  if ( !*v13 )
    goto LABEL_76;
  blankEarth = (BlankEarth_o *)(*v13)->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_76;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarth, 0);
  v28 = GameObjectExtensions__SafeGetComponent_object_(
          gameObject,
          (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v4 + 16) = v28;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = *(_QWORD *)(v4 + 24);
  if ( !v35 )
    goto LABEL_76;
  blankEarth = *(BlankEarth_o **)(v35 + 32);
  if ( !blankEarth )
    goto LABEL_76;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0);
  v36 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Quaternion_o *)(v4 + 48) = rotation;
  if ( !v36 )
    goto LABEL_76;
  blankEarth = *(BlankEarth_o **)(v36 + 40);
  if ( !blankEarth )
    goto LABEL_76;
  blankEarth = (BlankEarth_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)blankEarth, 0);
  if ( !blankEarth )
    goto LABEL_76;
  v110 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0);
  v37 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Quaternion_o *)(v4 + 80) = v110;
  if ( !v37 )
    goto LABEL_76;
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v37 + 40), 0);
  v38 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Vector3_o *)(v4 + 108) = LocalPosition;
  if ( !v38 )
    goto LABEL_76;
  blankEarth = *(BlankEarth_o **)(v38 + 40);
  if ( !blankEarth )
    goto LABEL_76;
  v39 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)blankEarth, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(v39, 0);
  blankEarth = *(BlankEarth_o **)(v4 + 24);
  *(UnityEngine_Vector3_o *)(v4 + 132) = LocalScale;
  if ( !blankEarth )
    goto LABEL_76;
  BlankEarthTransformData = BlankEarth__get_BlankEarthTransformData(blankEarth, v6);
  *(_QWORD *)(v4 + 192) = BlankEarthTransformData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v4 + 192),
    (int32_t)BlankEarthTransformData,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v48 = *(_QWORD *)(v4 + 192);
  if ( v48 )
  {
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(v48 + 16);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(v48 + 32);
    v49 = *(_QWORD *)(v48 + 48);
    *(_DWORD *)(v4 + 104) = *(_DWORD *)(v48 + 56);
    *(_QWORD *)(v4 + 96) = v49;
    v50 = *(_DWORD *)(v48 + 68);
    v51 = *(_QWORD *)(v48 + 60);
    *(_DWORD *)(v4 + 128) = v50;
    *(_QWORD *)(v4 + 120) = v51;
  }
  else
  {
    if ( !*v13 )
      goto LABEL_76;
    zoomInOffset = (*v13)->fields.zoomInOffset;
    if ( !byte_5969AE8 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE8 = 1;
    }
    v111 = UnityEngine_Quaternion__AngleAxis(zoomInOffset, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
    if ( !*v13 )
      goto LABEL_76;
    blankEarth = (BlankEarth_o *)(*v13)->fields.blankEarth;
    w = v111.fields.w;
    z = v111.fields.z;
    v105 = v111;
    y = v111.fields.y;
    if ( !blankEarth )
      goto LABEL_76;
    v112 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0);
    v53 = v112.fields.w;
    v54 = *(BlankEarth_o **)(v4 + 24);
    v55 = (int32x4_t)v105;
    v55.n128_f32[1] = w;
    v56 = vextq_s8(vdupq_lane_s32(*(int32x2_t *)&v112.fields.x, 1), (int8x16_t)v112, 4u);
    v57 = v112.fields.z;
    v55.n128_f32[2] = z;
    v56.n128_u32[1] = LODWORD(v112.fields.y);
    *(UnityEngine_Quaternion_o *)&v112.fields.y = (UnityEngine_Quaternion_o)vdupq_lane_s32(
                                                                              (int32x2_t)__PAIR64__(
                                                                                           LODWORD(y),
                                                                                           LODWORD(w)),
                                                                              0);
    *(UnityEngine_Quaternion_o *)&v112.fields.z = (UnityEngine_Quaternion_o)vextq_s8(
                                                                              (int8x16_t)v112,
                                                                              (int8x16_t)v112,
                                                                              4u);
    v58 = v112.fields.w;
    v59 = v55;
    v60 = y;
    v59.n128_u32[3] = LODWORD(v105.fields.x);
    v61 = v55;
    v55.n128_f32[0] = y;
    *(UnityEngine_Quaternion_o *)&v112.fields.z = (UnityEngine_Quaternion_o)vuzp2q_s32(
                                                                              *(int32x4_t *)&v112.fields.z,
                                                                              vdupq_lane_s32(
                                                                                (int32x2_t)v56.n128_u64[0],
                                                                                1));
    v112 = (UnityEngine_Quaternion_o)vmulq_f32(*(float32x4_t *)&v112.fields.y, (float32x4_t)v112);
    v61.n128_f32[2] = y;
    v62 = vmulq_f32(v59, v56);
    *(UnityEngine_Quaternion_o *)&v112.fields.w = (UnityEngine_Quaternion_o)vuzp1q_s32(v55, v61);
    v63 = vaddq_f32((float32x4_t)v112, v62);
    v112 = (UnityEngine_Quaternion_o)vsubq_f32((float32x4_t)v112, v62);
    v64 = vmulq_f32(*(float32x4_t *)&v112.fields.w, *(float32x4_t *)&v112.fields.z);
    *(UnityEngine_Quaternion_o *)&v112.fields.y = (UnityEngine_Quaternion_o)vrev64q_s32(
                                                                              vuzp1q_s32(
                                                                                *(int32x4_t *)&v112.fields.z,
                                                                                vzip1q_s32(
                                                                                  *(int32x4_t *)&v112.fields.z,
                                                                                  *(int32x4_t *)&v112.fields.z)));
    *(UnityEngine_Quaternion_o *)&v112.fields.z = (UnityEngine_Quaternion_o)vextq_s8(
                                                                              vextq_s8(
                                                                                *(int8x16_t *)&v112.fields.w,
                                                                                *(int8x16_t *)&v112.fields.w,
                                                                                0xCu),
                                                                              *(int8x16_t *)&v112.fields.w,
                                                                              8u);
    *(UnityEngine_Quaternion_o *)&v112.fields.w = (UnityEngine_Quaternion_o)vaddq_f32(v63, v64);
    v65 = vsubq_f32(*(float32x4_t *)&v112, v64).n128_u32[3];
    *(float32x4_t *)(v4 + 32) = vsubq_f32(
                                  *(float32x4_t *)&v112.fields.w,
                                  vmulq_f32(*(float32x4_t *)&v112.fields.z, *(float32x4_t *)&v112.fields.y));
    *(_DWORD *)(v4 + 32) = 0;
    *(_DWORD *)(v4 + 40) = 0;
    if ( !v54 )
      goto LABEL_76;
    v66 = (unsigned __int8)byte_5969AE0;
    *(struct UnityEngine_Quaternion_o *)(v4 + 64) = v54->fields.mRootQua;
    if ( !v66 )
    {
      blankEarth = (BlankEarth_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      v54 = *v13;
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v68 = static_fields->zeroVector.fields.z;
    *(_QWORD *)(v4 + 96) = *(_QWORD *)&static_fields->zeroVector.fields.x;
    *(float *)(v4 + 104) = v68;
    if ( !v54 )
      goto LABEL_76;
    *(UnityEngine_Vector3_o *)(v4 + 120) = BlankEarth__GetDefaultEarthScale(blankEarth, v6);
  }
  if ( !*v13 )
    goto LABEL_76;
  v69 = (UnityEngine_Object_o *)(*v13)->fields.focusEarthPoint;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v47);
  blankEarth = (BlankEarth_o *)UnityEngine_Object__op_Inequality(v69, 0, 0);
  v76 = *v13;
  if ( ((unsigned __int8)blankEarth & 1) != 0 )
  {
    if ( !v76 )
      goto LABEL_76;
    Point = v76->fields.focusEarthPoint;
  }
  else
  {
    if ( !v76 )
      goto LABEL_76;
    BlankEarthSpotId = BlankEarth__get_BlankEarthSpotId(*v13, v6);
    Point = BlankEarth__GetPoint(v76, BlankEarthSpotId, 0, v79);
  }
  *(_QWORD *)(v4 + 144) = Point;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 144), (int32_t)Point, v70, v71, v72, v73, v74, v75);
  if ( !byte_5969AE0 )
  {
    blankEarth = (BlankEarth_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v80 = UnityEngine_Vector3_TypeInfo->static_fields;
  v81 = *(_QWORD *)(v4 + 144);
  v82 = v80->zeroVector.fields.z;
  *(_QWORD *)(v4 + 164) = *(_QWORD *)&v80->zeroVector.fields.x;
  *(float *)(v4 + 172) = v82;
  if ( !v81 )
    goto LABEL_76;
  v83 = *(_QWORD *)(v81 + 152);
  v84 = *(_DWORD *)(v81 + 160);
  v85 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(v4 + 152) = v83;
  *(_DWORD *)(v4 + 160) = v84;
  if ( !v85 )
    goto LABEL_76;
  blankEarth = *(BlankEarth_o **)(v85 + 48);
  if ( !blankEarth )
    goto LABEL_76;
  ComponentsInChildren_object__59472212 = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                            (UnityEngine_GameObject_o *)blankEarth,
                                            (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  *(_QWORD *)(v4 + 184) = ComponentsInChildren_object__59472212;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v4 + 184),
    (int32_t)ComponentsInChildren_object__59472212,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  v93 = System_Action_TypeInfo;
  v94 = *(EasingObject_o **)(v4 + 16);
  *(_BYTE *)(v4 + 176) = 0;
  v95 = (System_Action_o *)sub_2213CCC(v93);
  System_Action___ctor(v95, (Il2CppObject *)v4, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, 0);
  v96 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v96, (Il2CppObject *)v4, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, 0);
  v97 = *(_QWORD *)(v4 + 24);
  if ( !v97
    || !v94
    || (EasingObject__Play_56121168(v94, 1.0, 0.0, v18, v95, v96, 0.0, *(_DWORD *)(v97 + 184), 0), !*v13) )
  {
LABEL_76:
    sub_2213CDC(blankEarth, v6);
  }
  v99 = (UnityEngine_Object_o *)(*v13)->fields.otherObjectRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v98);
  blankEarth = (BlankEarth_o *)UnityEngine_Object__op_Inequality(v99, 0, 0);
  if ( ((unsigned __int8)blankEarth & 1) != 0 )
  {
    if ( !*v13 )
      goto LABEL_76;
    blankEarth = (BlankEarth_o *)(*v13)->fields.otherObjectRoot;
    if ( !blankEarth )
      goto LABEL_76;
    v102 = UnityEngine_GameObject__GetComponent_object_(
             (UnityEngine_GameObject_o *)blankEarth,
             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v100, v101);
    blankEarth = (BlankEarth_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v102, 0);
    if ( ((unsigned __int8)blankEarth & 1) != 0 )
    {
      if ( *v13 && v102 )
      {
        BlankEarthOtherObject__ZoomOutAdjustAppearance(
          (BlankEarthOtherObject_o *)v102,
          v18,
          (*v13)->fields.zoomOutEasingType,
          0);
        return;
      }
      goto LABEL_76;
    }
  }
}


void BlankEarth_StateZoomOut__end(BlankEarth_StateZoomOut_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void BlankEarth_StateZoomOut__update(BlankEarth_StateZoomOut_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void BlankEarth_StateZoomOut___c__DisplayClass0_0___ctor(
        BlankEarth_StateZoomOut___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth_StateZoomOut___c__DisplayClass0_0___begin_b__0(
        BlankEarth_StateZoomOut___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  float mNow; // s9
  BlankEarth_StateZoomOut___c__DisplayClass0_0_o *v4; // x19
  double v5; // d0
  struct BlankEarth_o *that; // x8
  float v7; // s10
  UnityEngine_Transform_o *blankEarth; // x20
  struct BlankEarth_o *v9; // x8
  UnityEngine_Transform_o *transform; // x20
  struct BlankEarth_o *v11; // x8
  UnityEngine_Transform_o *v12; // x0
  float z; // s10
  float32x2_t v14; // d11
  float32x2_t v15; // d12
  float v16; // s13
  UnityEngine_Transform_o *v17; // x20
  double v18; // d0
  float v19; // s0
  float v20; // s1
  float v21; // s0
  float v22; // s2
  unsigned __int64 v23; // d0 OVERLAPPED
  float v24; // s2
  int v25; // s1
  struct BlankEarth_o *v26; // x8
  UnityEngine_Transform_o *v27; // x0
  float v28; // s12
  float32x2_t v29; // d13
  float32x2_t v30; // d14
  float v31; // s15
  UnityEngine_Transform_o *v32; // x20
  double v33; // d0
  float v34; // s0
  float v35; // s1
  float v36; // s0
  float v37; // s2
  unsigned __int64 v38; // d0 OVERLAPPED
  float v39; // s2
  int v40; // s1
  struct BlankEarthPoint_o *focusEarthPoint; // x20
  float v42; // s12
  float32x2_t v43; // d13
  float32x2_t v44; // d15
  float v45; // s14
  double v46; // d0
  float v47; // s0
  float v48; // s1
  bool v49; // nf
  float32x2_t v50; // d0
  bool IsPlanetEarthActive; // w8
  struct BlankEarth_o *v52; // x8
  struct BlankEarth_o *v53; // x8
  struct BlankEarth_o *v54; // x8
  struct BlankEarthPoint_o *v55; // x8
  struct BlankEarthPoint_array *spotList; // x20
  float v57; // s0
  int max_length; // w8
  float v59; // s8
  __int64 v60; // x21
  struct BlankEarth_o *v61; // x8
  UnityEngine_Quaternion_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_61;
  mNow = eo->fields.mNow;
  v4 = this;
  v5 = StepFunc__AccSig(mNow, 0);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_61;
  v7 = v5;
  blankEarth = that->fields.blankEarth;
  v62 = UnityEngine_Quaternion__Slerp(v4->fields.qua_to, v4->fields.qua_from, v7, 0);
  if ( !blankEarth )
    goto LABEL_61;
  UnityEngine_Transform__set_rotation(blankEarth, v62, 0);
  v9 = v4->fields.that;
  if ( !v9 )
    goto LABEL_61;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v9->fields.earthRoot;
  if ( !this )
    goto LABEL_61;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v63 = UnityEngine_Quaternion__Slerp(v4->fields.root_qua_to, v4->fields.root_qua_from, v7, 0);
  if ( !transform )
    goto LABEL_61;
  UnityEngine_Transform__set_rotation(transform, v63, 0);
  v11 = v4->fields.that;
  if ( !v11 )
    goto LABEL_61;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v11->fields.earthRoot;
  if ( !this )
    goto LABEL_61;
  v12 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  z = v4->fields.root_pos_to.fields.z;
  v14.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_to.fields.x;
  v15.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_from.fields.x;
  v16 = v4->fields.root_pos_from.fields.z;
  v17 = v12;
  v18 = StepFunc__DecSin(mNow, 0);
  if ( !v17 )
    goto LABEL_61;
  v19 = v18;
  v20 = 1.0;
  if ( v19 <= 1.0 )
    v20 = v19;
  v21 = v19 >= 0.0 ? v20 : 0.0;
  v22 = (float)(v16 - z) * v21;
  v23 = vadd_f32(v14, vmul_n_f32(vsub_f32(v15, v14), v21)).n64_u64[0];
  v24 = z + v22;
  v25 = HIDWORD(v23);
  UnityEngine_Transform__set_localPosition(v17, *(UnityEngine_Vector3_o *)&v23, 0);
  v26 = v4->fields.that;
  if ( !v26 )
    goto LABEL_61;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v26->fields.earthRoot;
  if ( !this )
    goto LABEL_61;
  v27 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v28 = v4->fields.root_scl_to.fields.z;
  v29.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_to.fields.x;
  v30.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_from.fields.x;
  v31 = v4->fields.root_scl_from.fields.z;
  v32 = v27;
  v33 = StepFunc__Acc5(mNow, 0);
  if ( !v32 )
    goto LABEL_61;
  v34 = v33;
  v35 = v34 <= 1.0 ? v34 : 1.0;
  v36 = v34 >= 0.0 ? v35 : 0.0;
  v37 = (float)(v31 - v28) * v36;
  v38 = vadd_f32(v29, vmul_n_f32(vsub_f32(v30, v29), v36)).n64_u64[0];
  v39 = v28 + v37;
  v40 = HIDWORD(v38);
  UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)&v38, 0);
  focusEarthPoint = v4->fields.focusEarthPoint;
  v42 = v4->fields.spot_ui_root_qua_to.fields.z;
  v43.n64_u64[0] = *(unsigned __int64 *)&v4->fields.spot_ui_root_qua_to.fields.x;
  v44.n64_u64[0] = *(unsigned __int64 *)&v4->fields.spot_ui_root_qua_from.fields.x;
  v45 = v4->fields.spot_ui_root_qua_from.fields.z;
  v46 = StepFunc__Acc5(mNow, 0);
  if ( !focusEarthPoint )
    goto LABEL_61;
  v47 = v46;
  if ( v47 <= 1.0 )
    v48 = v47;
  else
    v48 = 1.0;
  v49 = v47 < 0.0;
  v50.n64_u64[0] = vsub_f32(v44, v43).n64_u64[0];
  if ( v49 )
    v48 = 0.0;
  *(float32x2_t *)&focusEarthPoint->fields.changedUiRootPosition.fields.x = vadd_f32(v43, vmul_n_f32(v50, v48));
  focusEarthPoint->fields.changedUiRootPosition.fields.z = v42 + (float)((float)(v45 - v42) * v48);
  if ( !v4->fields.isStartRotateBtn )
  {
    this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v4->fields.that;
    if ( !this )
      goto LABEL_61;
    if ( mNow < this->fields.root_pos_to.fields.y )
    {
      v4->fields.isStartRotateBtn = 1;
      this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)BlankEarth__get_TerminalListTop(
                                                                 (BlankEarth_o *)this,
                                                                 method);
      if ( !this )
        goto LABEL_61;
      IsPlanetEarthActive = ScrTerminalListTop__IsPlanetEarthActive((ScrTerminalListTop_o *)this, 0);
      this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v4->fields.that;
      if ( IsPlanetEarthActive )
      {
        if ( !this )
          goto LABEL_61;
        this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)BlankEarth__get_TerminalListTop(
                                                                   (BlankEarth_o *)this,
                                                                   method);
        v52 = v4->fields.that;
        if ( !v52 || !this )
          goto LABEL_61;
        ScrTerminalListTop__FrameInOutPlanetEarthRotateBtn(
          (ScrTerminalListTop_o *)this,
          v52->fields.earthBtnMoveSpeedTime,
          1,
          0,
          0);
      }
      else
      {
        if ( !this )
          goto LABEL_61;
        this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)BlankEarth__get_TerminalListTop(
                                                                   (BlankEarth_o *)this,
                                                                   method);
        v53 = v4->fields.that;
        if ( !v53 )
          goto LABEL_61;
        if ( !this )
          goto LABEL_61;
        ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
          (ScrTerminalListTop_o *)this,
          v53->fields.earthBtnMoveSpeedTime,
          1,
          0,
          0);
        this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v4->fields.that;
        if ( !this )
          goto LABEL_61;
        this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)BlankEarth__get_TerminalListTop(
                                                                   (BlankEarth_o *)this,
                                                                   method);
        if ( !this )
          goto LABEL_61;
        ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)this, 1, 0, 0);
      }
    }
  }
  v54 = v4->fields.that;
  if ( !v54 )
    goto LABEL_61;
  v55 = v54->fields.focusEarthPoint;
  if ( !v55 )
    goto LABEL_61;
  if ( v55->fields._spotOnType_k__BackingField == 1 )
  {
    spotList = v4->fields.spotList;
    if ( !spotList )
      goto LABEL_61;
    v57 = 1.0;
    max_length = spotList->max_length;
    if ( mNow <= 1.0 )
      v57 = mNow;
    v59 = mNow >= 0.0 ? v57 : 0.0;
    if ( max_length >= 1 )
    {
      v60 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v60 >= max_length )
          sub_2213CE4(this);
        this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)spotList->m_Items[v60];
        if ( !this )
          break;
        v61 = v4->fields.that;
        if ( !v61 )
          break;
        BlankEarthPoint__SetDispUIDotRange(
          (BlankEarthPoint_o *)this,
          this[1].fields.root_qua_to.fields.x
        + (float)(v59 * (float)(v61->fields.object1DispSpotUISpriteDot - this[1].fields.root_qua_to.fields.x)),
          this[1].fields.root_qua_to.fields.y
        + (float)(v59 * (float)(v61->fields.object1NoDispSpotUISpriteDot - this[1].fields.root_qua_to.fields.y)),
          0);
        max_length = spotList->max_length;
        if ( (int)++v60 >= max_length )
          return;
      }
LABEL_61:
      sub_2213CDC(this, method);
    }
  }
}


void BlankEarth_StateZoomOut___c__DisplayClass0_0___begin_b__1(
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
  const MethodInfo *v9; // x2
  _DWORD *monitor; // x8
  struct BlankEarthPoint_array *spotList; // x20
  int max_length; // w8
  __int64 v13; // x21

  v2 = this;
  if ( (byte_596CDEA & 1) == 0 )
  {
    this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)sub_2213A60(&StringLiteral_20794/*"gevINFOBAR_BACK"*/);
    byte_596CDEA = 1;
  }
  blankEarthTransform = v2->fields.blankEarthTransform;
  that = v2->fields.that;
  if ( blankEarthTransform )
  {
    totalAngle = blankEarthTransform->fields.totalAngle;
    if ( !that )
      goto LABEL_36;
  }
  else
  {
    totalAngle = 0.0;
    if ( !that )
      goto LABEL_36;
  }
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)that->fields.blankEarth;
  that->fields.totalAngle = totalAngle;
  if ( !this )
    goto LABEL_36;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v2->fields.qua_to, 0);
  v6 = v2->fields.that;
  if ( !v6 )
    goto LABEL_36;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v6->fields.earthRoot;
  if ( !this )
    goto LABEL_36;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_36;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v2->fields.root_qua_to, 0);
  v7 = v2->fields.that;
  if ( !v7 )
    goto LABEL_36;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v7->fields.earthRoot;
  if ( !this )
    goto LABEL_36;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v2->fields.root_pos_to, 0);
  v8 = v2->fields.that;
  if ( !v8 )
    goto LABEL_36;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v8->fields.earthRoot;
  if ( !this )
    goto LABEL_36;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_36;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v2->fields.root_scl_to, 0);
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v2->fields.that;
  if ( !this )
    goto LABEL_36;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)BlankEarth__get_TerminalListTop((BlankEarth_o *)this, method);
  if ( !this )
    goto LABEL_36;
  this = *(BlankEarth_StateZoomOut___c__DisplayClass0_0_o **)&this->fields.spot_ui_root_qua_to.fields.x;
  if ( !this )
    goto LABEL_36;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v2->fields.that;
  if ( !this
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)BlankEarth__get_TerminalListTop(
                                                                   (BlankEarth_o *)this,
                                                                   method)) == 0
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)ScrTerminalListTop__mfGetMyFsmP(
                                                                   (ScrTerminalListTop_o *)this,
                                                                   0)) == 0
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0)) == 0
    || (HutongGames_PlayMaker_Fsm__Event_78428956(
          (HutongGames_PlayMaker_Fsm_o *)this,
          (System_String_o *)StringLiteral_20794/*"gevINFOBAR_BACK"*/,
          0),
        (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v2->fields.that) == 0)
    || (monitor = this[1].monitor) == 0 )
  {
LABEL_36:
    sub_2213CDC(this, method);
  }
  if ( monitor[77] == 1 )
  {
    spotList = v2->fields.spotList;
    if ( !spotList )
      goto LABEL_36;
    max_length = spotList->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      do
      {
        if ( (unsigned int)v13 >= max_length )
          sub_2213CE4(this);
        this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)spotList->m_Items[v13];
        if ( !this )
          goto LABEL_36;
        BlankEarthPoint__SetDispUIDotRange(
          (BlankEarthPoint_o *)this,
          this[1].fields.root_qua_to.fields.x,
          this[1].fields.root_qua_to.fields.y,
          0);
        max_length = spotList->max_length;
      }
      while ( (int)++v13 < max_length );
    }
    this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v2->fields.that;
    if ( !this )
      goto LABEL_36;
  }
  BlankEarth__SetState((BlankEarth_o *)this, 2, v9);
}


void BlankEarth__CoCheckTutorial_d__118___ctor(
        BlankEarth__CoCheckTutorial_d__118_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BlankEarth__CoCheckTutorial_d__118__MoveNext(BlankEarth__CoCheckTutorial_d__118_o *this, const MethodInfo *method)
{
  BlankEarth__CoCheckTutorial_d__118_o *v2; // x19
  int32_t _1__state; // w8
  BlankEarth_o *_4__this; // x20
  Il2CppObject *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Action_o *finishCallback; // x1
  float time_5__2; // s1
  bool v20; // w21
  float v21; // s8
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x21
  Il2CppObject *_8__1; // x22
  System_Action_o *v31; // x23
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct TutorialCommunicateAdapter_o *adapter; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct TutorialCommunicateAdapter_o *afterActionAdapter; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_IEnumerator_o *v52; // x0

  v2 = this;
  if ( (byte_596CDFD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_BlankEarth___c__DisplayClass118_0__CoCheckTutorial_g__OnFinish_0__);
    this = (BlankEarth__CoCheckTutorial_d__118_o *)sub_2213A60(&BlankEarth___c__DisplayClass118_0_TypeInfo);
    byte_596CDFD = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    time_5__2 = v2->fields._time_5__2;
    v2->fields.__1__state = -1;
    if ( time_5__2 > 5.0 )
      goto LABEL_11;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_2213CCC(BlankEarth___c__DisplayClass118_0_TypeInfo);
    System_Object___ctor(v5, 0);
    v2->fields.__8__1 = (struct BlankEarth___c__DisplayClass118_0_o *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__8__1, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    this = (BlankEarth__CoCheckTutorial_d__118_o *)v2->fields.__8__1;
    if ( !this )
LABEL_19:
      sub_2213CDC(this, method);
    finishCallback = v2->fields.finishCallback;
    *(_QWORD *)&this->fields.__1__state = finishCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields,
      (int32_t)finishCallback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    v2->fields._time_5__2 = 0.0;
  }
  if ( !_4__this )
    goto LABEL_19;
  v20 = 1;
  if ( BlankEarth__IsJustState(_4__this, 1, 0) )
  {
    v21 = v2->fields._time_5__2;
    v2->fields._time_5__2 = v21 + UnityEngine_Time__get_deltaTime(0);
    v2->fields.__2__current = 0;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
    sub_2213A04(p__2__current, 0, v23, v24, v25, v26, v27, v28);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
    return v20;
  }
LABEL_11:
  this = (BlankEarth__CoCheckTutorial_d__118_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0);
  v29 = sub_2213CCC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v29, 0);
  if ( !v29 )
    goto LABEL_19;
  _8__1 = (Il2CppObject *)v2->fields.__8__1;
  *(_DWORD *)(v29 + 20) = 83;
  v31 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v31, _8__1, Method_BlankEarth___c__DisplayClass118_0__CoCheckTutorial_g__OnFinish_0__, 0);
  *(_QWORD *)(v29 + 32) = v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
  adapter = v2->fields.adapter;
  *(_QWORD *)(v29 + 56) = adapter;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 56), (int32_t)adapter, v39, v40, v41, v42, v43, v44);
  afterActionAdapter = v2->fields.afterActionAdapter;
  *(_QWORD *)(v29 + 64) = afterActionAdapter;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 64), (int32_t)afterActionAdapter, v46, v47, v48, v49, v50, v51);
  if ( !_4__this )
    goto LABEL_19;
  if ( BlankEarth__IsPlanetEarth(_4__this, 0) )
    *(_DWORD *)(v29 + 20) = 108;
  v52 = EventTutorialMaster__CoroutineCheckTutorial((EventTutorialMaster_EventTutorialArgs_o *)v29, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, v52, 0);
  v20 = 0;
  _4__this->fields.isTutorialAvailable = 0;
  return v20;
}


Il2CppObject *BlankEarth__CoCheckTutorial_d__118__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarth__CoCheckTutorial_d__118_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BlankEarth__CoCheckTutorial_d__118__System_Collections_IEnumerator_Reset(
        BlankEarth__CoCheckTutorial_d__118_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BlankEarth__CoCheckTutorial_d__118_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BlankEarth__CoCheckTutorial_d__118__System_Collections_IEnumerator_get_Current(
        BlankEarth__CoCheckTutorial_d__118_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BlankEarth__CoCheckTutorial_d__118__System_IDisposable_Dispose(
        BlankEarth__CoCheckTutorial_d__118_o *this,
        const MethodInfo *method)
{
  ;
}


void BlankEarth__CoStandByChangeState_d__120___ctor(
        BlankEarth__CoStandByChangeState_d__120_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BlankEarth__CoStandByChangeState_d__120__MoveNext(
        BlankEarth__CoStandByChangeState_d__120_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BlankEarth_o *_4__this; // x0
  float time_5__2; // s8
  Il2CppObject **p__2__current; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  bool result; // w0

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    this->fields._time_5__2 = 0.0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_2213CDC(0, method);
  if ( BlankEarth__IsJustState(_4__this, this->fields.state, 0) )
  {
    time_5__2 = this->fields._time_5__2;
    this->fields._time_5__2 = time_5__2 + UnityEngine_Time__get_deltaTime(0);
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v7, v8, v9, v10, v11, v12);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(this->fields.finishCallback, 0);
  return 0;
}


Il2CppObject *BlankEarth__CoStandByChangeState_d__120__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarth__CoStandByChangeState_d__120_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BlankEarth__CoStandByChangeState_d__120__System_Collections_IEnumerator_Reset(
        BlankEarth__CoStandByChangeState_d__120_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BlankEarth__CoStandByChangeState_d__120_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BlankEarth__CoStandByChangeState_d__120__System_Collections_IEnumerator_get_Current(
        BlankEarth__CoStandByChangeState_d__120_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BlankEarth__CoStandByChangeState_d__120__System_IDisposable_Dispose(
        BlankEarth__CoStandByChangeState_d__120_o *this,
        const MethodInfo *method)
{
  ;
}


void BlankEarth___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CDFB & 1) == 0 )
  {
    sub_2213A60(&BlankEarth___c_TypeInfo);
    byte_596CDFB = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BlankEarth___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BlankEarth___c_TypeInfo->static_fields->__9 = (struct BlankEarth___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BlankEarth___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BlankEarth___c___ctor(BlankEarth___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarth___c___UpdateSpotDisp_b__142_0(BlankEarth___c_o *this, BlankEarthPoint_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  BlankEarthPoint__UpdateDisp(x, 1, method);
}


void BlankEarth___c___UpdateSpotDisp_b__142_1(BlankEarth___c_o *this, BlankEarthPoint_o *x, const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  if ( !x )
    sub_2213CDC(this, 0);
  BlankEarthPoint__UpdateAreaInfoList(x, (const MethodInfo *)x);
  BlankEarthPoint__UpdateDisp(x, 1, v4);
}


void BlankEarth___c__DisplayClass118_0___ctor(BlankEarth___c__DisplayClass118_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarth___c__DisplayClass118_0___CoCheckTutorial_g__OnFinish_0(
        BlankEarth___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596CDFC & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_596CDFC = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}