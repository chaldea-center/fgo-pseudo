void BlankEarth___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct BlankEarth_StaticFields *static_fields; // x8
  struct BlankEarth_StaticFields *v8; // x0
  int32_t v9; // w1
  int32_t v10; // w1
  struct BlankEarth_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2D05D & 1) == 0 )
  {
    sub_1C93AD4(&BlankEarth_TypeInfo);
    sub_1C93AD4(&StringLiteral_17437/*"blankEarthRotateKey"*/);
    sub_1C93AD4(&StringLiteral_10708/*"PlanetEarthRotateKey_"*/);
    byte_4D2D05D = 1;
  }
  static_fields = BlankEarth_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SOUTH_POLE_ROTATE.fields.x = 1118568448;
  static_fields->SOUTH_POLE_ROTATE.fields.z = 0.0;
  v8 = BlankEarth_TypeInfo->static_fields;
  v8->SouthPoleRotateAngle = 86.0;
  v9 = StringLiteral_17437/*"blankEarthRotateKey"*/;
  v8->BLANK_EARTH_ROTATE_KEY = (struct System_String_o *)StringLiteral_17437/*"blankEarthRotateKey"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->BLANK_EARTH_ROTATE_KEY, v9, v1, v2, v3, v4, v5, v6);
  v10 = StringLiteral_10708/*"PlanetEarthRotateKey_"*/;
  v11 = BlankEarth_TypeInfo->static_fields;
  v11->PlanetEarthRotateKeyPrefix = (struct System_String_o *)StringLiteral_10708/*"PlanetEarthRotateKey_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v11->PlanetEarthRotateKeyPrefix, v10, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)&BlankEarth_TypeInfo->static_fields->EARTH_DISP_SPOT_UI_SPRITE_DOT = 0x3E19999A3E99999ALL;
}


void BlankEarth___ctor(BlankEarth_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  BlankEarth_c *v10; // x0

  if ( (byte_4D2D05C & 1) == 0 )
  {
    sub_1C93AD4(&BlankEarth_TypeInfo);
    sub_1C93AD4(&StringLiteral_16979/*"ar223"*/);
    byte_4D2D05C = 1;
  }
  this->fields.startupFrameInRotateBtnRate = 0.125;
  *(_OWORD *)&this->fields.greenwichOffset = xmmword_D01E60;
  *(_OWORD *)&this->fields.zoomInScl = xmmword_D01750;
  *(_QWORD *)&this->fields.startupAnimTime = 0x3F00000040000000LL;
  v9 = StringLiteral_16979/*"ar223"*/;
  this->fields.startupSeName = (struct System_String_o *)StringLiteral_16979/*"ar223"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.startupSeName, v9, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields.zoomInEasingType = 0x300000003LL;
  *(_OWORD *)&this->fields.firstAnimTime = xmmword_D01B10;
  this->fields.btnSpeedRate = 3.5;
  *(_OWORD *)&this->fields.zoomInPos.fields.y = xmmword_D00550;
  *(_QWORD *)&this->fields.adjustEarthScale.fields.z = 0x3E8000003F400000LL;
  this->fields.startupEasingType = 2;
  *(_QWORD *)&this->fields.object1DispSpotUISpriteDot = 0x3ECCCCCD3F266666LL;
  v10 = BlankEarth_TypeInfo;
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v10 = BlankEarth_TypeInfo;
  }
  this->fields.maxAngle = v10->static_fields->SouthPoleRotateAngle;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BlankEarth__Awake(BlankEarth_o *this, const MethodInfo *method)
{
  struct CStateManager_BlankEarth__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
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

  if ( (byte_4D2D033 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_BlankEarth___ctor__);
    sub_1C93AD4(&Method_CStateManager_BlankEarth__add__);
    sub_1C93AD4(&CStateManager_BlankEarth__TypeInfo);
    sub_1C93AD4(&BlankEarth_StateGrandMain_TypeInfo);
    sub_1C93AD4(&BlankEarth_StateGrandStartup_TypeInfo);
    sub_1C93AD4(&BlankEarth_StateMain_TypeInfo);
    sub_1C93AD4(&BlankEarth_StateNone_TypeInfo);
    sub_1C93AD4(&BlankEarth_StateQAARotate_TypeInfo);
    sub_1C93AD4(&BlankEarth_StateShortcutRotate_TypeInfo);
    sub_1C93AD4(&BlankEarth_StateStartup_TypeInfo);
    sub_1C93AD4(&BlankEarth_StateZoomIn_TypeInfo);
    sub_1C93AD4(&BlankEarth_StateZoomOut_TypeInfo);
    byte_4D2D033 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C93D20(CStateManager_BlankEarth__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      9,
      (const MethodInfo_33EE80C *)Method_CStateManager_BlankEarth___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarth__o *)v4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_1C93D20(BlankEarth_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_17;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_BlankEarth__add__);
    v14 = (CStateManager_T__o *)*p_mFSM;
    v15 = (Il2CppObject *)sub_1C93D20(BlankEarth_StateStartup_TypeInfo);
    System_Object___ctor(v15, 0);
    if ( !v14 )
      goto LABEL_17;
    CStateManager_object___add(
      v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_BlankEarth__add__);
    v16 = (CStateManager_T__o *)*p_mFSM;
    v17 = (Il2CppObject *)sub_1C93D20(BlankEarth_StateMain_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_17;
    CStateManager_object___add(
      v16,
      2,
      (IState_T__o *)v17,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_BlankEarth__add__);
    v18 = (CStateManager_T__o *)*p_mFSM;
    v19 = (Il2CppObject *)sub_1C93D20(BlankEarth_StateZoomIn_TypeInfo);
    System_Object___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_17;
    CStateManager_object___add(
      v18,
      3,
      (IState_T__o *)v19,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_BlankEarth__add__);
    v20 = (CStateManager_T__o *)*p_mFSM;
    v21 = (Il2CppObject *)sub_1C93D20(BlankEarth_StateZoomOut_TypeInfo);
    System_Object___ctor(v21, 0);
    if ( !v20 )
      goto LABEL_17;
    CStateManager_object___add(
      v20,
      4,
      (IState_T__o *)v21,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_BlankEarth__add__);
    v22 = (CStateManager_T__o *)*p_mFSM;
    v23 = (BlankEarth_StateQAARotate_o *)sub_1C93D20(BlankEarth_StateQAARotate_TypeInfo);
    BlankEarth_StateQAARotate___ctor(v23, 0);
    if ( !v22 )
      goto LABEL_17;
    CStateManager_object___add(
      v22,
      5,
      (IState_T__o *)v23,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_BlankEarth__add__);
    v24 = (CStateManager_T__o *)*p_mFSM;
    v25 = (BlankEarth_StateShortcutRotate_o *)sub_1C93D20(BlankEarth_StateShortcutRotate_TypeInfo);
    BlankEarth_StateShortcutRotate___ctor(v25, 0);
    if ( !v24 )
      goto LABEL_17;
    CStateManager_object___add(
      v24,
      6,
      (IState_T__o *)v25,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_BlankEarth__add__);
    v26 = (CStateManager_T__o *)*p_mFSM;
    v27 = (BlankEarth_StateGrandStartup_o *)sub_1C93D20(BlankEarth_StateGrandStartup_TypeInfo);
    BlankEarth_StateGrandStartup___ctor(v27, 0);
    if ( !v26
      || (CStateManager_object___add(
            v26,
            7,
            (IState_T__o *)v27,
            (const MethodInfo_33EE8B4 *)Method_CStateManager_BlankEarth__add__),
          v28 = (CStateManager_T__o *)*p_mFSM,
          v29 = (BlankEarth_StateGrandMain_o *)sub_1C93D20(BlankEarth_StateGrandMain_TypeInfo),
          BlankEarth_StateGrandMain___ctor(v29, 0),
          !v28) )
    {
LABEL_17:
      sub_1C93D2C(earthRoot, method);
    }
    CStateManager_object___add(
      v28,
      8,
      (IState_T__o *)v29,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_BlankEarth__add__);
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
  float *v10; // x8
  CTouch_c *v11; // x0
  float x; // s9
  uint32_t cctor_finished; // w8
  float v14; // s0
  CTouch_c *v15; // x0
  float y; // s9
  float v17; // s0
  float v18; // s8
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v20; // s4
  float v21; // s1
  float v22; // s2
  float v23; // s0
  float v24; // s10
  float v25; // s0
  float v26; // s9
  float v27; // s0
  float *p_totalAngle; // x22
  float totalAngle; // t1
  float v30; // s0
  float v31; // s1
  float v32; // s1
  float v33; // s2
  float *v34; // x8
  float v35; // s1
  float maxAngle; // s2
  float v37; // s0
  BlankEarth_o *v38; // x22
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4D2D03C & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_1C93AD4(&CTouch_TypeInfo);
    byte_4D2D03C = 1;
  }
  if ( !that )
LABEL_73:
    sub_1C93D2C(this, that);
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
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__isDrag(0) )
    {
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4D2D070 )
      {
        sub_1C93AD4(&CTouch_TypeInfo);
        byte_4D2D070 = 1;
      }
      v11 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
      }
      x = v11->static_fields->mScrPosDelta.fields.x;
      if ( !byte_4D2D071 )
      {
        sub_1C93AD4(&CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
        byte_4D2D071 = 1;
      }
      cctor_finished = v11->_2.cctor_finished;
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = CTouch_TypeInfo;
        cctor_finished = CTouch_TypeInfo->_2.cctor_finished;
      }
      v14 = v11->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v14) )
        v14 = x;
      *inertialSpeedX = v14 * -0.2;
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(v11);
      if ( !byte_4D2D070 )
      {
        sub_1C93AD4(&CTouch_TypeInfo);
        byte_4D2D070 = 1;
      }
      v15 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v15 = CTouch_TypeInfo;
      }
      y = v15->static_fields->mScrPosDelta.fields.y;
      if ( !byte_4D2D071 )
      {
        sub_1C93AD4(&CTouch_TypeInfo);
        v15 = CTouch_TypeInfo;
        byte_4D2D071 = 1;
      }
      if ( !v15->_2.cctor_finished )
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
  else
  {
    v18 = *inertialSpeedX;
    if ( !byte_4D2A13D )
    {
      sub_1C93AD4(&UnityEngine_Mathf_TypeInfo);
      byte_4D2A13D = 1;
    }
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    v20 = fmaxf(fabsf(v18), 0.0) * 0.000001;
    v21 = static_fields->Epsilon * 8.0;
    if ( v20 <= v21 )
      v22 = static_fields->Epsilon * 8.0;
    else
      v22 = v20;
    if ( vabds_f32(0.0, v18) >= v22 )
      goto LABEL_51;
    v23 = fmaxf(fabsf(*inertialSpeedY), 0.0) * 0.000001;
    if ( v23 <= v21 )
      v23 = static_fields->Epsilon * 8.0;
    if ( vabds_f32(0.0, *inertialSpeedY) >= v23 )
    {
LABEL_51:
      v24 = *inertialSpeedX;
      v25 = v24 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0);
      if ( fabsf(v25) < 0.004 )
        v25 = 0.0;
      *inertialSpeedX = v25;
      v26 = *inertialSpeedY;
      v27 = v26 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0);
      *inertialSpeedY = v27;
      if ( fabsf(v27) < 0.004 )
        *inertialSpeedY = 0.0;
    }
  }
  if ( v8->fields.isExecQuestAction )
  {
    totalAngle = v8->fields.totalAngle;
    p_totalAngle = &v8->fields.totalAngle;
    v30 = totalAngle;
    v31 = totalAngle + *inertialSpeedY;
    if ( v31 > 180.0 )
    {
      v32 = 180.0 - v30;
      *inertialSpeedY = 180.0 - v30;
      v30 = *p_totalAngle;
      v31 = v32 + *p_totalAngle;
    }
    if ( v31 < -180.0 )
    {
      v33 = 180.0;
      v34 = p_totalAngle;
LABEL_63:
      v37 = (float)-v33 - v30;
      *inertialSpeedY = v37;
      v31 = *v34 + v37;
      goto LABEL_65;
    }
    v34 = p_totalAngle;
  }
  else
  {
    v34 = &v8->fields.totalAngle;
    v30 = v8->fields.totalAngle;
    v35 = *inertialSpeedY;
    maxAngle = v8->fields.maxAngle;
    if ( maxAngle < (float)(v30 + *inertialSpeedY) )
    {
      v35 = maxAngle - v30;
      *inertialSpeedY = maxAngle - v30;
      v30 = *v34;
    }
    v33 = v8->fields.maxAngle;
    v31 = v30 + v35;
    if ( v31 < (float)-v33 )
      goto LABEL_63;
  }
LABEL_65:
  *v34 = v31;
  this = (BlankEarth_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_73;
  this = (BlankEarth_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !that->fields.blankEarth )
    goto LABEL_73;
  v38 = this;
  this = (BlankEarth_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)that->fields.blankEarth, 0);
  if ( !this )
    goto LABEL_73;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  if ( !byte_4D2A140 )
  {
    this = (BlankEarth_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A140 = 1;
  }
  if ( !v38 )
    goto LABEL_73;
  UnityEngine_Transform__RotateAround(
    (UnityEngine_Transform_o *)v38,
    position,
    UnityEngine_Vector3_TypeInfo->static_fields->rightVector,
    -*inertialSpeedY,
    0);
  this = (BlankEarth_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_73;
  v40.fields.y = *inertialSpeedX;
  v40.fields.x = 0.0;
  v40.fields.z = 0.0;
  UnityEngine_Transform__Rotate_72144752((UnityEngine_Transform_o *)this, v40, 0);
}


UnityEngine_Vector3_o BlankEarth__CalcPosFromLatLong(
        BlankEarth_o *this,
        float latitudeDegree,
        float longitudeDegree,
        float z,
        const MethodInfo *method)
{
  float v7; // s9
  float earthRadius; // s10
  float v9; // s11
  float v10; // s8
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
  result.fields.y = v9 * earthRadius;
  result.fields.x = v14 * v10;
  result.fields.z = v15 * v10;
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
    UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v11, 0);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  if ( (byte_4D2D03D & 1) == 0 )
  {
    sub_1C93AD4(&BlankEarth__CoCheckTutorial_d__118_TypeInfo);
    byte_4D2D03D = 1;
  }
  v9 = sub_1C93D20(BlankEarth__CoCheckTutorial_d__118_TypeInfo);
  BlankEarth__CoCheckTutorial_d__118___ctor((BlankEarth__CoCheckTutorial_d__118_o *)v9, 0, 0);
  if ( !v9 )
    sub_1C93D2C(v10, v11);
  *(_QWORD *)(v9 + 40) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 56) = adapter;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 56), (int32_t)adapter, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 64) = afterActionAdapter;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 64), (int32_t)afterActionAdapter, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v9 + 32) = finishCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)finishCallback, v30, v31, v32, v33, v34, v35);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4D2D03E & 1) == 0 )
  {
    sub_1C93AD4(&BlankEarth__CoStandByChangeState_d__120_TypeInfo);
    byte_4D2D03E = 1;
  }
  v7 = sub_1C93D20(BlankEarth__CoStandByChangeState_d__120_TypeInfo);
  BlankEarth__CoStandByChangeState_d__120___ctor((BlankEarth__CoStandByChangeState_d__120_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = state;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)finishCallback, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


UnityEngine_Quaternion_o BlankEarth__ConvertLatLongToSafePointQuaternion(
        BlankEarth_o *this,
        UnityEngine_Vector2_o latLongVector,
        const MethodInfo *method)
{
  float maxAngle; // s2
  float v5; // s3
  float v6; // s0
  float v7; // s8
  float earthRadius; // s9
  float v9; // s10
  float v10; // s11
  float v11; // s8
  float v12; // s12
  float v13; // s12
  float v14; // s9
  float v15; // s8
  float v16; // s2
  float x; // s0
  float y; // s1
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v21; // [xsp+8h] [xbp-48h] BYREF
  float v22; // [xsp+Ch] [xbp-44h] BYREF
  float cosx; // [xsp+18h] [xbp-38h] BYREF
  float sinx; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( this->fields.isExecQuestAction )
    maxAngle = 180.0;
  else
    maxAngle = this->fields.maxAngle;
  v5 = -maxAngle;
  if ( maxAngle >= latLongVector.fields.x )
    maxAngle = latLongVector.fields.x;
  if ( latLongVector.fields.x < v5 )
    v6 = v5;
  else
    v6 = maxAngle;
  v7 = (float)(latLongVector.fields.y + this->fields.greenwichOffset) * 0.017453;
  sincosf(v6 * 0.017453, &sinx, &cosx);
  earthRadius = this->fields.earthRadius;
  v9 = sinx;
  v10 = (float)(earthRadius + 0.0) * cosx;
  sincosf(v7, &v22, &v21);
  v12 = v21;
  v11 = v22;
  if ( !byte_4D2A13C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13C = 1;
  }
  v13 = v12 * v10;
  v14 = earthRadius * v9;
  v15 = v11 * v10;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v16 = sqrtf((float)(v15 * v15) + (float)((float)(v14 * v14) + (float)(v13 * v13)));
  if ( v16 <= 0.00001 )
  {
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v13 / v16;
    y = v14 / v16;
    z = v15 / v16;
  }
  v25.fields.x = -x;
  v25.fields.y = -y;
  v25.fields.z = -z;
  v27 = UnityEngine_Quaternion__LookRotation_72058188(v25, 0);
  return UnityEngine_Quaternion__Inverse(v27, 0);
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

  if ( (byte_4D2D047 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_3195/*"BlankEarthGimmick_"*/);
    byte_4D2D047 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__Instantiate_object_(
          (Il2CppObject *)obj,
          (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_36750884((UnityEngine_GameObject_o *)v13, this->fields.earthGimmickRoot, 0);
  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
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
  transform = System_String__Concat_64425724((System_String_o *)StringLiteral_3195/*"BlankEarthGimmick_"*/, v17, 0);
  if ( !v16 )
    goto LABEL_14;
  UnityEngine_Object__set_name(v16, transform, 0);
  GameObjectExtensions__SetLocalPosition_36745272((UnityEngine_GameObject_o *)v13, x, y, z, 0);
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
  blankEarth = this->fields.blankEarth;
  if ( !blankEarth
    || (v19 = (UnityEngine_Transform_o *)transform, position = UnityEngine_Transform__get_position(blankEarth, 0), !v19)
    || (UnityEngine_Transform__LookAt_72145832(v19, position, 0),
        (transform = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v13,
                                          (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___)) == 0) )
  {
LABEL_14:
    sub_1C93D2C(transform, v15);
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
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  TerminalSceneComponent_c *v17; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v19; // x1
  __int64 Component_object; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  UnityEngine_GameObject_o *v30; // x22
  UnityEngine_Object_o *v31; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  int32_t onObjectType; // w8
  float v34; // s11
  float v35; // s12
  float v36; // s13
  UnityEngine_GameObject_o *klass; // x23
  Il2CppObject *v38; // x24
  UnityEngine_Object_o *transform; // x23
  System_String_o *v40; // x0
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2D04E & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_3196/*"BlankEarthPoint_"*/);
    byte_4D2D04E = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v17 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v17 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v17->static_fields->mInstance;
  v19 = *p_mInstance;
  this->fields.mTerminalScene = *p_mInstance;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mTerminalScene,
    (int32_t)v19,
    (int32_t)spotEnt,
    (int32_t)method,
    v7,
    v8,
    v9,
    v10);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_39;
  mTerminalList = mTerminalScene->fields.mTerminalList;
  this->fields.mTerminalList = mTerminalList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mTerminalList,
    (int32_t)mTerminalList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                (Il2CppObject *)spotObj,
                                (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_39;
  v30 = (UnityEngine_GameObject_o *)Component_object;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Component_object,
                                (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
  v31 = (UnityEngine_Object_o *)Component_object;
  if ( !byte_4D2A139 )
  {
    Component_object = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !spotEnt )
    goto LABEL_39;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  onObjectType = spotEnt->fields.onObjectType;
  v34 = static_fields->zeroVector.fields.x;
  v35 = static_fields->zeroVector.fields.y;
  v36 = static_fields->zeroVector.fields.z;
  if ( onObjectType == 1 )
  {
    Component_object = (__int64)this->fields.otherObjectRoot;
    if ( !Component_object )
      goto LABEL_39;
    v38 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)Component_object,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0, 0);
    klass = 0;
    if ( (Component_object & 1) != 0 )
    {
      if ( !v38 )
        goto LABEL_39;
      klass = (UnityEngine_GameObject_o *)v38[2].klass;
      if ( !klass )
        goto LABEL_39;
      Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v38[2].klass, 0);
      if ( !Component_object )
        goto LABEL_39;
      goto LABEL_27;
    }
  }
  else
  {
    if ( !onObjectType )
    {
      Component_object = (__int64)this->fields.blankEarth;
      if ( !Component_object )
        goto LABEL_39;
      klass = this->fields.earthSpotRoot;
LABEL_27:
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)Component_object, 0);
      v34 = position.fields.x;
      v35 = position.fields.y;
      v36 = position.fields.z;
      goto LABEL_29;
    }
    klass = 0;
  }
LABEL_29:
  GameObjectExtensions__SetParent_36750884(v30, klass, 0);
  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  GameObjectExtensions__SetLocalScale(v30, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v30, 0);
  v40 = System_Int32__ToString((int)spotEnt + 16, 0);
  Component_object = (__int64)System_String__Concat_64425724((System_String_o *)StringLiteral_3196/*"BlankEarthPoint_"*/, v40, 0);
  if ( !transform )
    goto LABEL_39;
  UnityEngine_Object__set_name(transform, (System_String_o *)Component_object, 0);
  GameObjectExtensions__SetLocalPosition_36745272(v30, x, y, z, 0);
  Component_object = (__int64)UnityEngine_GameObject__get_transform(v30, 0);
  if ( !Component_object )
    goto LABEL_39;
  v43.fields.x = v34;
  v43.fields.y = v35;
  v43.fields.z = v36;
  UnityEngine_Transform__LookAt_72145832((UnityEngine_Transform_o *)Component_object, v43, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = UnityEngine_Object__op_Inequality(v31, 0, 0);
  if ( (Component_object & 1) != 0 )
  {
    if ( v31 )
    {
      BlankEarthPoint__SetEarthObj(
        (BlankEarthPoint_o *)v31,
        spotEnt,
        this,
        this->fields.mEarthCamera,
        this->fields.earthRoot,
        0);
      return (BlankEarthPoint_o *)v31;
    }
LABEL_39:
    sub_1C93D2C(Component_object, v21);
  }
  return (BlankEarthPoint_o *)v31;
}


void BlankEarth__ExecuteAfterStartUpScaling(
        BlankEarth_o *this,
        System_Action_o *startupScalingEndCallback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( BlankEarth__GetState(this, (const MethodInfo *)startupScalingEndCallback) == 1 )
  {
    this->fields.scalingEndCallback = startupScalingEndCallback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.scalingEndCallback,
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
  UnityEngine_Transform_o *blankEarth; // x0
  const MethodInfo *v6; // x1
  float x; // s0
  float maxAngle; // s1
  float v9; // s2
  float v10; // s0
  __int64 v11; // x1
  UnityEngine_Quaternion_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( spotEnt && !spotEnt->fields.onObjectType )
  {
    v12 = BlankEarth__ConvertLatLongToSafePointQuaternion(
            this,
            *(UnityEngine_Vector2_o *)&spotEnt->fields.x,
            (const MethodInfo *)spotEnt);
    blankEarth = this->fields.blankEarth;
    if ( !blankEarth )
      sub_1C93D2C(0, v11);
    UnityEngine_Transform__set_rotation(blankEarth, v12, 0);
    x = spotEnt->fields.x;
    if ( this->fields.isExecQuestAction )
      maxAngle = 180.0;
    else
      maxAngle = this->fields.maxAngle;
    v9 = -maxAngle;
    if ( maxAngle >= x )
      maxAngle = spotEnt->fields.x;
    if ( x < v9 )
      v10 = v9;
    else
      v10 = maxAngle;
    this->fields.totalAngle = v10;
    BlankEarth__SaveEarthRotate(this, v6);
  }
}


AssetData_o *BlankEarth__GetAssetData(BlankEarth_o *this, const MethodInfo *method)
{
  AssetData_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  AssetManager_o *v6; // x19

  if ( (byte_4D2D04D & 1) == 0 )
  {
    sub_1C93AD4(&ScrTerminalListTop_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2D04D = 1;
  }
  result = this->fields.assetData;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v6 = (AssetManager_o *)Instance;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( !v6 )
      sub_1C93D2C(Instance, v5);
    return AssetManager__GetAsset_41273228(v6, ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH, 0);
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
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  result.fields.x = static_fields->oneVector.fields.x;
  result.fields.y = static_fields->oneVector.fields.y;
  result.fields.z = static_fields->oneVector.fields.z;
  return result;
}


System_Single_array *BlankEarth__GetDefaultRotateData(BlankEarth_o *this, int32_t mapId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  BlankEarth_c *v6; // x8
  Il2CppObject *v7; // x20
  unsigned int monitor; // w9
  struct BlankEarth_StaticFields *static_fields; // x8
  Il2CppObject *v10; // x0
  System_String_o *v11; // x19
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2D03F & 1) == 0 )
  {
    sub_1C93AD4(&BlankEarth_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&float___TypeInfo);
    sub_1C93AD4(&StringLiteral_2957/*"BLANK_EARTH_DEFAULT_ROTATE_DATA_{0}"*/);
    byte_4D2D03F = 1;
  }
  Master_object = (Il2CppObject *)sub_1C93B7C(float___TypeInfo, 4);
  v6 = BlankEarth_TypeInfo;
  v7 = Master_object;
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v6 = BlankEarth_TypeInfo;
  }
  if ( !v7 )
    goto LABEL_15;
  monitor = (unsigned int)v7[1].monitor;
  if ( !monitor
    || (static_fields = v6->static_fields,
        *(float *)&v7[2].klass = static_fields->SOUTH_POLE_ROTATE.fields.x,
        monitor == 1)
    || (HIDWORD(v7[2].klass) = LODWORD(static_fields->SOUTH_POLE_ROTATE.fields.y), monitor <= 2)
    || (*(float *)&v7[2].monitor = static_fields->SOUTH_POLE_ROTATE.fields.z, monitor == 3) )
  {
    sub_1C93D34(Master_object);
  }
  *((float *)&v7[2].monitor + 1) = -static_fields->SouthPoleRotateAngle;
  v13 = mapId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v11 = System_String__Format((System_String_o *)StringLiteral_2957/*"BLANK_EARTH_DEFAULT_ROTATE_DATA_{0}"*/, v10, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
LABEL_15:
    sub_1C93D2C(Master_object, v5);
  return ConstantStrMaster__GetValueFloatArray((ConstantStrMaster_o *)Master_object, v11, (System_Single_array *)v7, 0);
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
  UnityEngine_Object_o *v7; // x19
  bool v8; // w8
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = gimmickId;
  if ( (byte_4D2D043 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_3195/*"BlankEarthGimmick_"*/);
    byte_4D2D043 = 1;
  }
  result = (BlankEarthGimmickComponent_o *)this->fields.earthGimmickRoot;
  if ( !result )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0);
  v6 = System_Int32__ToString((int32_t)&v9, 0);
  result = (BlankEarthGimmickComponent_o *)System_String__Concat_64425724((System_String_o *)StringLiteral_3195/*"BlankEarthGimmick_"*/, v6, 0);
  if ( !transform )
    goto LABEL_12;
  v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)result, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(v7, 0, 0);
  result = 0;
  if ( v8 )
  {
    if ( v7 )
    {
      result = (BlankEarthGimmickComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
      if ( result )
        return (BlankEarthGimmickComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)result,
                                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    }
LABEL_12:
    sub_1C93D2C(result, *(_QWORD *)&gimmickId);
  }
  return result;
}


System_String_o *BlankEarth__GetGimmickPrefabName(BlankEarthGimmickEntity_o *gimmick, const MethodInfo *method)
{
  BlankEarthGimmickEntity_o *v2; // x19
  Il2CppObject *v3; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = gimmick;
  if ( (byte_4D2D046 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    gimmick = (BlankEarthGimmickEntity_o *)sub_1C93AD4(&StringLiteral_5867/*"EarthGimmick_{0:00000}"*/);
    byte_4D2D046 = 1;
  }
  if ( !v2 )
    sub_1C93D2C(gimmick, method);
  objectId = v2->fields.objectId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_5867/*"EarthGimmick_{0:00000}"*/, v3, 0);
}


System_String_o *BlankEarth__GetObjPrefabName(BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  BlankEarthSpotEntity_o *v2; // x19
  Il2CppObject *v3; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = spot;
  if ( (byte_4D2D04C & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    spot = (BlankEarthSpotEntity_o *)sub_1C93AD4(&StringLiteral_5869/*"EarthPoint_{0:00000}"*/);
    byte_4D2D04C = 1;
  }
  if ( !v2 )
    sub_1C93D2C(spot, method);
  objectId = v2->fields.objectId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_5869/*"EarthPoint_{0:00000}"*/, v3, 0);
}


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
  UnityEngine_Object_o *v13; // x19

  if ( (byte_4D2D042 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    sub_1C93AD4(&StringLiteral_682/*"(Clone)"*/);
    byte_4D2D042 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             objId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
  if ( Entity )
  {
    earthRoot = this->fields.earthRoot;
    v9 = (int)Entity;
    BlankEarthOtherObjectFromScript = BlankEarthGimmickEntity__GetBlankEarthOtherObjectFromScript(
                                        (BlankEarthGimmickEntity_o *)Entity,
                                        0);
    v11 = System_Int32__ToString(v9 + 28, 0);
    v12 = System_String__Concat_64465992(
            BlankEarthOtherObjectFromScript,
            (System_String_o *)StringLiteral_16207/*"_"*/,
            v11,
            (System_String_o *)StringLiteral_682/*"(Clone)"*/,
            0);
    v13 = (UnityEngine_Object_o *)GameObjectExtensions__Find(earthRoot, v12, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( v13 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)v13,
                                                                        0);
        if ( Master_object )
          return (BlankEarthOtherObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)Master_object,
                                              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      }
LABEL_14:
      sub_1C93D2C(Master_object, v6);
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
  UnityEngine_Object_o *Component_object; // x19
  UnityEngine_GameObject_o *earthSpotRoot; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  UnityEngine_Object_o *v11; // x20
  BlankEarthPoint_o *result; // x0
  UnityEngine_Transform_o *v13; // x19
  System_String_o *v14; // x0
  UnityEngine_Transform_o *transform; // x19
  System_String_o *v16; // x0
  bool v17; // w8
  UnityEngine_Component_o *v18; // x0
  bool v19; // w8
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v20 = spotId;
  if ( (byte_4D2D041 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_3196/*"BlankEarthPoint_"*/);
    byte_4D2D041 = 1;
  }
  otherObjectRoot = this->fields.otherObjectRoot;
  if ( otherObjectRoot )
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 otherObjectRoot,
                                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
  else
    Component_object = 0;
  if ( onPointType == 1 )
  {
    if ( Component_object )
    {
      result = (BlankEarthPoint_o *)Component_object[1].monitor;
      if ( !result )
        goto LABEL_34;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0);
      v16 = System_Int32__ToString((int32_t)&v20, 0);
      result = (BlankEarthPoint_o *)System_String__Concat_64425724((System_String_o *)StringLiteral_3196/*"BlankEarthPoint_"*/, v16, 0);
      if ( !transform )
        goto LABEL_34;
      Component_object = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)result, 0);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
    result = 0;
    if ( v17 )
    {
      if ( !Component_object )
        goto LABEL_34;
      v18 = (UnityEngine_Component_o *)Component_object;
LABEL_31:
      result = (BlankEarthPoint_o *)UnityEngine_Component__get_gameObject(v18, 0);
      if ( result )
        return (BlankEarthPoint_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)result,
                                      (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
LABEL_34:
      sub_1C93D2C(result, *(_QWORD *)&spotId);
    }
  }
  else
  {
    if ( onPointType )
      return 0;
    earthSpotRoot = this->fields.earthSpotRoot;
    v9 = System_Int32__ToString((int32_t)&v20, 0);
    v10 = System_String__Concat_64425724((System_String_o *)StringLiteral_3196/*"BlankEarthPoint_"*/, v9, 0);
    v11 = (UnityEngine_Object_o *)GameObjectExtensions__Find(earthSpotRoot, v10, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0, 0) )
    {
      if ( Component_object )
      {
        result = (BlankEarthPoint_o *)Component_object[1].monitor;
        if ( !result )
          goto LABEL_34;
        v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0);
        v14 = System_Int32__ToString((int32_t)&v20, 0);
        result = (BlankEarthPoint_o *)System_String__Concat_64425724((System_String_o *)StringLiteral_3196/*"BlankEarthPoint_"*/, v14, 0);
        if ( !v13 )
          goto LABEL_34;
        v11 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v13, (System_String_o *)result, 0);
      }
      else
      {
        v11 = 0;
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__op_Inequality(v11, 0, 0);
    result = 0;
    if ( v19 )
    {
      if ( !v11 )
        goto LABEL_34;
      v18 = (UnityEngine_Component_o *)v11;
      goto LABEL_31;
    }
  }
  return result;
}


System_String_o *BlankEarth__GetRotateSaveKey(BlankEarth_o *this, const MethodInfo *method)
{
  BlankEarth_c *v3; // x0
  struct MapEntity_o *mapEntity; // x21
  struct BlankEarth_StaticFields *static_fields; // x8
  struct MapEntity_o *v6; // x9
  System_String_o *PlanetEarthRotateKeyPrefix; // x19
  System_String_o *v8; // x1

  if ( (byte_4D2D035 & 1) == 0 )
  {
    sub_1C93AD4(&BlankEarth_TypeInfo);
    byte_4D2D035 = 1;
  }
  v3 = BlankEarth_TypeInfo;
  mapEntity = this->fields.mapEntity;
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v3 = BlankEarth_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( !mapEntity )
    return static_fields->BLANK_EARTH_ROTATE_KEY;
  v6 = this->fields.mapEntity;
  if ( !v6 )
    sub_1C93D2C(v3, method);
  PlanetEarthRotateKeyPrefix = static_fields->PlanetEarthRotateKeyPrefix;
  v8 = System_Int32__ToString((int)v6 + 16, 0);
  return System_String__Concat_64425724(PlanetEarthRotateKeyPrefix, v8, 0);
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
  if ( v4 > latitudeDegree )
    return v4;
  else
    return maxAngle;
}


System_String_o *BlankEarth__GetSpotPrefabName(BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  BlankEarthSpotEntity_o *v2; // x19
  Il2CppObject *v3; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = spot;
  if ( (byte_4D2D04B & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    spot = (BlankEarthSpotEntity_o *)sub_1C93AD4(&StringLiteral_5869/*"EarthPoint_{0:00000}"*/);
    byte_4D2D04B = 1;
  }
  if ( !v2 )
    sub_1C93D2C(spot, method);
  objectId = v2->fields.objectId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_5869/*"EarthPoint_{0:00000}"*/, v3, 0);
}


int32_t BlankEarth__GetState(BlankEarth_o *this, const MethodInfo *method)
{
  BlankEarth_o *v2; // x19
  struct CStateManager_BlankEarth__o *mFSM; // x8

  v2 = this;
  if ( (byte_4D2D03A & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_1C93AD4(&Method_CStateManager_BlankEarth__getState__);
    byte_4D2D03A = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C93D2C(this, method);
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
  struct MapEntity_o *mapEntity; // x8
  int32_t warId; // w19
  int32_t PlanetEarthChapterStateSaveData; // w0

  if ( (byte_4D2D038 & 1) == 0 )
  {
    sub_1C93AD4(&ScrTerminalListTop_TypeInfo);
    byte_4D2D038 = 1;
  }
  mapEntity = this->fields.mapEntity;
  if ( mapEntity )
  {
    warId = mapEntity->fields.warId;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    PlanetEarthChapterStateSaveData = ScrTerminalListTop__GetPlanetEarthChapterStateSaveData(warId, 0);
  }
  else
  {
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
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
  System_String_o *String_72078212; // x0
  __int64 v9; // x1
  System_String_o *v10; // x21
  System_String_array *v11; // x20
  __int64 v12; // x0
  float v13; // s0
  float v14; // s8
  float v15; // s0
  float v16; // s9
  float v17; // s0
  float maxAngleData; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Quaternion_o rotateData; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Quaternion_o v24; // 0:kr00_16.16
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  *(_QWORD *)&rotateData.fields.x = 0;
  *(_QWORD *)&rotateData.fields.z = 0;
  maxAngleData = 0.0;
  mapEntity = this->fields.mapEntity;
  if ( mapEntity )
    id = mapEntity->fields.id;
  else
    id = 0;
  BlankEarth__SetupByDefaultRotateData(this, &rotateData, &maxAngleData, id, v2);
  RotateSaveKey = BlankEarth__GetRotateSaveKey(this, v6);
  String_72078212 = UnityEngine_PlayerPrefs__GetString_72078212(RotateSaveKey, 0);
  if ( !String_72078212 )
    goto LABEL_13;
  v10 = String_72078212;
  v11 = System_String__Split(String_72078212, 0x2Cu, 0, 0);
  String_72078212 = (System_String_o *)System_String__IsNullOrEmpty(v10, 0);
  if ( ((unsigned __int8)String_72078212 & 1) != 0 )
  {
LABEL_12:
    this->fields.totalAngle = maxAngleData;
    result.fields.x = rotateData.fields.x;
    result.fields.y = rotateData.fields.y;
    result.fields.z = rotateData.fields.z;
    result.fields.w = rotateData.fields.w;
    return result;
  }
  if ( !v11 )
LABEL_13:
    sub_1C93D2C(String_72078212, v9);
  if ( LODWORD(v11->max_length) != 4 )
    goto LABEL_12;
  this->fields.totalAngle = System_Single__Parse(v11->m_Items[3], 0);
  if ( !LODWORD(v11->max_length)
    || (v13 = System_Single__Parse(v11->m_Items[0], 0), LODWORD(v11->max_length) <= 1)
    || (v14 = v13, v15 = System_Single__Parse(v11->m_Items[1], 0), LODWORD(v11->max_length) <= 2) )
  {
    sub_1C93D34(v12);
  }
  v16 = v15;
  v17 = System_Single__Parse(v11->m_Items[2], 0);
  v25.fields.y = v16 * 0.017453;
  v25.fields.z = v17 * 0.017453;
  v25.fields.x = v14 * 0.017453;
  v24 = UnityEngine_Quaternion__Internal_FromEulerRad(v25, 0);
  result.fields.x = v24.fields.x;
  result.fields.y = v24.fields.y;
  result.fields.z = v24.fields.z;
  result.fields.w = v24.fields.w;
  return result;
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

  if ( (byte_4D2D059 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BlankEarth_OnPressRotateBtnX__);
    byte_4D2D059 = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnX__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnX__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C93AEC(Method_BlankEarth_OnPressRotateBtnX__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  this->fields.isLeft = isLeft;
  this->fields.isBtnTouchX = 1;
}


void BlankEarth__OnPressRotateBtnY(BlankEarth_o *this, bool isUp, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4D2D05A & 1) == 0 )
  {
    sub_1C93AD4(&Method_BlankEarth_OnPressRotateBtnY__);
    byte_4D2D05A = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnY__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnY__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C93AEC(Method_BlankEarth_OnPressRotateBtnY__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
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
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_4D2D057 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D057 = 1;
  }
  if ( otherObjEnt )
    otherObjEnt = (BlankEarthGimmickEntity_o *)BlankEarth__GetOtherObject(
                                                 this,
                                                 otherObjEnt->fields.id,
                                                 *(const MethodInfo **)&animIndex);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)otherObjEnt, 0, 0);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0);
  }
  else
  {
    if ( !otherObjEnt )
      sub_1C93D2C(v11, v12);
    BlankEarthOtherObject__PlayOtherObjUniqueAnim(
      (BlankEarthOtherObject_o *)otherObjEnt,
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
  UnityEngine_Object_o *Point; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1

  if ( (byte_4D2D056 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D056 = 1;
  }
  if ( !spot )
    goto LABEL_7;
  Point = (UnityEngine_Object_o *)BlankEarth__GetPoint(this, spot->fields.id, 0, (const MethodInfo *)isQuick);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality(Point, 0, 0);
  if ( !v12 )
  {
    if ( !Point )
      sub_1C93D2C(v12, v13);
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
  float v10; // s11
  float earthRadius; // s12
  const MethodInfo *v12; // x1
  float v13; // s8
  float v14; // s13
  Il2CppObject *Object_object__51927708; // x21
  const MethodInfo *v16; // x3
  float v17; // [xsp+8h] [xbp-68h] BYREF
  float v18; // [xsp+Ch] [xbp-64h] BYREF
  float cosx; // [xsp+48h] [xbp-28h] BYREF
  float sinx; // [xsp+4Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4D2D045 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&BlankEarth_TypeInfo);
    this = (BlankEarth_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D045 = 1;
  }
  if ( !gimmick )
    goto LABEL_12;
  z = gimmick->fields.z;
  v8 = (float)(gimmick->fields.y + v6->fields.greenwichOffset) * 0.017453;
  sincosf(gimmick->fields.x * 0.017453, &sinx, &cosx);
  v10 = cosx;
  v9 = sinx;
  earthRadius = v6->fields.earthRadius;
  sincosf(v8, &v18, &v17);
  v14 = v17;
  v13 = v18;
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
  this = (BlankEarth_o *)BlankEarth__GetGimmickPrefabName(gimmick, v12);
  if ( !data )
LABEL_12:
    sub_1C93D2C(this, data);
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              data,
                              (System_String_o *)this,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51927708, 0, 0) )
    BlankEarth__CreateGimmick(
      v6,
      (UnityEngine_GameObject_o *)Object_object__51927708,
      gimmick,
      v14 * (float)(v10 * (float)(z + earthRadius)),
      v9 * earthRadius,
      v13 * (float)(v10 * (float)(z + earthRadius)),
      v16);
}


void BlankEarth__PutGimmicksByMapId(BlankEarth_o *this, AssetData_o *data, int32_t mapId, const MethodInfo *method)
{
  BlankEarthGimmickEntity_array *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  int max_length; // w8
  BlankEarthGimmickEntity_array *v11; // x21
  unsigned int v12; // w22
  BlankEarthGimmickEntity_o *v13; // x2

  if ( (byte_4D2D044 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D2D044 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BlankEarthGimmickEntity_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = BlankEarthGimmickMaster__GetGimmicks((BlankEarthGimmickMaster_o *)Master_object, mapId, 0);
  if ( !Master_object )
    goto LABEL_16;
  max_length = Master_object->max_length;
  v11 = Master_object;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C93D34(Master_object);
      v13 = v11->m_Items[v12];
      if ( !v13 )
        break;
      if ( !v13->fields.objectType )
        BlankEarth__PutGimmick(this, data, v13, v9);
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_16:
    sub_1C93D2C(Master_object, v8);
  }
}


BlankEarthPoint_o *BlankEarth__PutSpot(BlankEarth_o *this, BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  BlankEarth_o *v4; // x20
  int32_t onObjectType; // w8
  float v6; // s8
  float v7; // s9
  float v8; // s10
  float earthRadius; // s11
  float v10; // s8
  float v11; // s12
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  AssetData_o *v14; // x21
  float v15; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  Il2CppObject *Object_object__51927708; // x21
  UnityEngine_Object_o *otherObjectRoot; // x21
  BlankEarth_o *v21; // x21
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  AssetData_o *AssetData; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  const MethodInfo *v26; // x3
  float v28; // [xsp+0h] [xbp-60h] BYREF
  float v29; // [xsp+4h] [xbp-5Ch] BYREF
  float cosx; // [xsp+8h] [xbp-58h] BYREF
  float sinx; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4D2D04A & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&BlankEarth_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    this = (BlankEarth_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D04A = 1;
  }
  if ( !byte_4D2A139 )
  {
    this = (BlankEarth_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !spot )
    goto LABEL_27;
  onObjectType = spot->fields.onObjectType;
  if ( onObjectType == 1 )
  {
    otherObjectRoot = (UnityEngine_Object_o *)v4->fields.otherObjectRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(otherObjectRoot, 0, 0) )
      return 0;
    this = (BlankEarth_o *)v4->fields.otherObjectRoot;
    if ( !this )
      goto LABEL_27;
    this = (BlankEarth_o *)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    if ( !this )
      goto LABEL_27;
    v21 = this;
    LODWORD(x) = (unsigned int)GameObjectExtensions__GetLocalPosition(
                                 (UnityEngine_GameObject_o *)this->fields.blankEarth,
                                 0);
    y = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v21->fields.blankEarth, 0).fields.y;
    AssetData = BlankEarth__GetAssetData(v4, v22);
    if ( !BlankEarth_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    this = (BlankEarth_o *)BlankEarth__GetObjPrefabName(spot, v23);
    if ( !AssetData )
      goto LABEL_27;
    Object_object__51927708 = AssetData__GetObject_object__51927708(
                                AssetData,
                                (System_String_o *)this,
                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
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
      sincosf(v6, &v29, &v28);
      v10 = v28;
      v11 = v29;
      v14 = BlankEarth__GetAssetData(v4, v12);
      if ( !BlankEarth_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
      this = (BlankEarth_o *)BlankEarth__GetSpotPrefabName(spot, v13);
      if ( v14 )
      {
        v15 = v8 * (float)(earthRadius + 0.0);
        x = v10 * v15;
        y = v7 * earthRadius;
        z = v11 * v15;
        Object_object__51927708 = AssetData__GetObject_object__51927708(
                                    v14,
                                    (System_String_o *)this,
                                    (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
        goto LABEL_22;
      }
LABEL_27:
      sub_1C93D2C(this, spot);
    }
    Object_object__51927708 = 0;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    x = static_fields->zeroVector.fields.x;
  }
LABEL_22:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51927708, 0, 0) )
    return 0;
  return BlankEarth__CreateSpot(v4, (UnityEngine_GameObject_o *)Object_object__51927708, spot, x, y, z, v26);
}


void BlankEarth__PutSpotEntities(
        BlankEarth_o *this,
        BlankEarthSpotEntity_array *blankEarthSpotList,
        const MethodInfo *method)
{
  System_Func_object__object__o *v5; // x21
  System_Collections_Generic_IEnumerable_T__o *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *v7; // x0

  if ( (byte_4D2D049 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
    sub_1C93AD4(&Method_BlankEarth_PutSpot__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
    sub_1C93AD4(&System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo);
    byte_4D2D049 = 1;
  }
  v5 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo);
  System_Func_object__object____ctor(v5, (Il2CppObject *)this, Method_BlankEarth_PutSpot__, 0);
  v6 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)blankEarthSpotList,
                                                        (System_Func_TSource__TResult__o *)v5,
                                                        (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
  v7 = BasicHelper__ExcludeNull_object_(
         v6,
         (const MethodInfo_318E4CC *)Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
  System_Linq_Enumerable__ToArray_object_(
    (System_Collections_Generic_IEnumerable_TSource__o *)v7,
    (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
}


void BlankEarth__PutSpots(BlankEarth_o *this, int32_t mapId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  BlankEarthSpotEntity_array *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4D2D048 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D2D048 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1C93D2C(0, v6);
  v7 = BlankEarthSpotMaster__GetByMapId((BlankEarthSpotMaster_o *)Master_object, mapId, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v7, 0) )
    BlankEarth__PutSpotEntities(this, v7, v8);
}


void BlankEarth__ResetBlankEarthSpotData(BlankEarth_o *this, const MethodInfo *method)
{
  struct MapEntity_o *mapEntity; // x19

  if ( (byte_4D2D037 & 1) == 0 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D037 = 1;
  }
  mapEntity = this->fields.mapEntity;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( mapEntity )
    TerminalPramsManager__ResetPlanetEarthSpotInfo(0);
  else
    TerminalPramsManager__ResetBlankEarthSpotInfo(0);
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
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_4D2D054 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D054 = 1;
  }
  if ( spot )
    spot = (BlankEarthSpotEntity_o *)BlankEarth__GetPoint(this, spot->fields.id, 0, (const MethodInfo *)isQuick);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)spot, 0, 0);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0);
  }
  else
  {
    if ( !spot )
      sub_1C93D2C(v11, v12);
    BlankEarthPoint__RevealOrConcealSpotAnim((BlankEarthPoint_o *)spot, dispType, isQuick, finishCallback, 0);
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
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_4D2D055 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D055 = 1;
  }
  if ( otherObjEnt )
    otherObjEnt = (BlankEarthGimmickEntity_o *)BlankEarth__GetOtherObject(
                                                 this,
                                                 otherObjEnt->fields.id,
                                                 *(const MethodInfo **)&dispType);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)otherObjEnt, 0, 0);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0);
  }
  else
  {
    if ( !otherObjEnt )
      sub_1C93D2C(v11, v12);
    BlankEarthOtherObject__RevealOrConcealOtherObjAnim(
      (BlankEarthOtherObject_o *)otherObjEnt,
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  const MethodInfo *v35; // x2
  int32_t v36; // w1

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  if ( (byte_4D2D053 & 1) == 0 )
  {
    sub_1C93AD4(&BlankEarth_QAARotateEarthParam_TypeInfo);
    byte_4D2D053 = 1;
  }
  v16 = sub_1C93D20(BlankEarth_QAARotateEarthParam_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0);
  *(float *)(v16 + 16) = time;
  *(float *)(v16 + 20) = x;
  *(float *)(v16 + 24) = y;
  *(_DWORD *)(v16 + 28) = easeType;
  *(_QWORD *)(v16 + 32) = finishCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v16 + 32), (int32_t)finishCallback, v17, v18, v19, v20, v21, v22);
  this->fields.qaaRotateEarthParam = (struct BlankEarth_QAARotateEarthParam_o *)v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.qaaRotateEarthParam, v16, v23, v24, v25, v26, v27, v28);
  this->fields.rotateEarthTimeCalculateParam = rotateTimeCalculateParam;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.rotateEarthTimeCalculateParam,
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

  if ( (byte_4D2D052 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_1C93AD4(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_4D2D052 = 1;
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
    v13 = sub_1C93D20(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    *(_BYTE *)(v13 + 16) = 1;
    ActionExtensions__Call_object_(
      (System_Action_T__o *)finishCallback,
      (Il2CppObject *)v13,
      (const MethodInfo_30EBC54 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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

  if ( (byte_4D2D051 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_1C93AD4(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_4D2D051 = 1;
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
    v15 = sub_1C93D20(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0);
    *(_BYTE *)(v15 + 16) = 1;
    ActionExtensions__Call_object_(
      (System_Action_T__o *)finishCallback,
      (Il2CppObject *)v15,
      (const MethodInfo_30EBC54 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
  }
}


void BlankEarth__SaveBlankEarthSpotData(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *focusEarthPoint; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BlankEarthPoint_o *v6; // x8
  struct MapEntity_o *mapEntity; // x21
  int32_t spotId_k__BackingField; // w19
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4D2D036 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D036 = 1;
  }
  focusEarthPoint = (UnityEngine_Object_o *)this->fields.focusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(focusEarthPoint, 0, 0);
  if ( !v4 )
  {
    v6 = this->fields.focusEarthPoint;
    if ( !v6 )
      sub_1C93D2C(v4, v5);
    mapEntity = this->fields.mapEntity;
    spotId_k__BackingField = v6->fields._spotId_k__BackingField;
    if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      if ( mapEntity )
      {
LABEL_9:
        if ( !byte_4D2D06A )
        {
          sub_1C93AD4(&TerminalPramsManager_TypeInfo);
          byte_4D2D06A = 1;
        }
        v9 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v9 = TerminalPramsManager_TypeInfo;
        }
        v9->static_fields->_PlanetEarthSpotId_k__BackingField = spotId_k__BackingField;
        TerminalPramsManager__PlanetEarthSpotId_SaveData(0);
        return;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( mapEntity )
        goto LABEL_9;
    }
    if ( !byte_4D2D06B )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D06B = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_BlankEarthSpotId_k__BackingField = spotId_k__BackingField;
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
    sub_1C93D2C(0, method);
  rotation = UnityEngine_Transform__get_rotation(blankEarth, 0);
  BlankEarth__SaveQuaternionAndTotalAngle(this, rotation, this->fields.totalAngle, v4);
}


void BlankEarth__SavePlayedFirstAnim(BlankEarth_o *this, const MethodInfo *method)
{
  struct MapEntity_o *mapEntity; // x8
  int32_t warId; // w19

  if ( (byte_4D2D039 & 1) == 0 )
  {
    sub_1C93AD4(&ScrTerminalListTop_TypeInfo);
    byte_4D2D039 = 1;
  }
  mapEntity = this->fields.mapEntity;
  if ( mapEntity )
  {
    warId = mapEntity->fields.warId;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    ScrTerminalListTop__SetPlanetEarthChapterStateSaveData(warId, 0, 0);
  }
  else
  {
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w1
  float v28; // s0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  float v42; // s0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w1
  float v56; // s0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  System_String_o *v63; // x0
  MethodInfo v64; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v65; // 0:kr00_12.12
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  *((float *)&v64.methodMetadataHandle + 1) = totalAngle;
  w = qua.fields.w;
  z = qua.fields.z;
  y = qua.fields.y;
  x = qua.fields.x;
  if ( (byte_4D2D050 & 1) == 0 )
  {
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_809/*","*/);
    byte_4D2D050 = 1;
  }
  v67.fields.x = x;
  v67.fields.y = y;
  v67.fields.z = z;
  v67.fields.w = w;
  v65 = UnityEngine_Quaternion__Internal_ToEulerRad(v67, 0);
  v66.fields.x = v65.fields.x * 57.296;
  v66.fields.y = v65.fields.y * 57.296;
  v66.fields.z = v65.fields.z * 57.296;
  *(UnityEngine_Vector3_o *)&v64.methodPointer = UnityEngine_Quaternion__Internal_MakePositive(v66, 0);
  RotateSaveKey = BlankEarth__GetRotateSaveKey(this, v9);
  v11 = sub_1C93B7C(string___TypeInfo, 7);
  v13 = System_Single__ToString(v12, &v64);
  if ( !v11 )
    sub_1C93D2C(v13, v14);
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v11 + 32) = v13;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)v13, v15, v16, v17, v18, v19, v20);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_12;
  v27 = StringLiteral_809/*","*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_809/*","*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 40), v27, v21, v22, v23, v24, v25, v26);
  v13 = System_Single__ToString(v28, (const MethodInfo *)((char *)&v64.methodPointer + 4));
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_12;
  *(_QWORD *)(v11 + 48) = v13;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 48), (int32_t)v13, v29, v30, v31, v32, v33, v34);
  if ( *(_DWORD *)(v11 + 24) <= 3u )
    goto LABEL_12;
  v41 = StringLiteral_809/*","*/;
  *(_QWORD *)(v11 + 56) = StringLiteral_809/*","*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 56), v41, v35, v36, v37, v38, v39, v40);
  v13 = System_Single__ToString(v42, (const MethodInfo *)&v64.virtualMethodPointer);
  if ( *(_DWORD *)(v11 + 24) <= 4u
    || (*(_QWORD *)(v11 + 64) = v13,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 64), (int32_t)v13, v43, v44, v45, v46, v47, v48),
        *(_DWORD *)(v11 + 24) <= 5u)
    || (v55 = StringLiteral_809/*","*/,
        *(_QWORD *)(v11 + 72) = StringLiteral_809/*","*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 72), v55, v49, v50, v51, v52, v53, v54),
        v13 = System_Single__ToString(v56, (const MethodInfo *)((char *)&v64.methodMetadataHandle + 4)),
        *(_DWORD *)(v11 + 24) <= 6u) )
  {
LABEL_12:
    sub_1C93D34(v13);
  }
  *(_QWORD *)(v11 + 80) = v13;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 80), (int32_t)v13, v57, v58, v59, v60, v61, v62);
  v63 = System_String__Concat_64466256((System_String_array *)v11, 0);
  UnityEngine_PlayerPrefs__SetString(RotateSaveKey, v63, 0);
}


void BlankEarth__SaveSpotRotation(BlankEarth_o *this, BlankEarthSpotEntity_o *spotEnt, const MethodInfo *method)
{
  float x; // s4
  float maxAngle; // s5
  float v7; // s6
  float v8; // s4
  const MethodInfo *v9; // x1
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
    v7 = -maxAngle;
    if ( maxAngle >= x )
      maxAngle = spotEnt->fields.x;
    if ( x < v7 )
      v8 = v7;
    else
      v8 = maxAngle;
    this->fields.totalAngle = v8;
    BlankEarth__SaveQuaternionAndTotalAngle(this, v10, v8, v9);
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
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


void BlankEarth__SetEarthRotate(BlankEarth_o *this, UnityEngine_Quaternion_o qua, const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0

  blankEarth = this->fields.blankEarth;
  if ( !blankEarth )
    sub_1C93D2C(0, method);
  UnityEngine_Transform__set_rotation(blankEarth, qua, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__SetFocusPoint(BlankEarth_o *this, int32_t spotId, int32_t onPointType, const MethodInfo *method)
{
  UnityEngine_Component_o *TerminalListTop; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct BlankEarthPoint_o *Point; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  TerminalListTop = (UnityEngine_Component_o *)BlankEarth__get_TerminalListTop(this, *(const MethodInfo **)&spotId);
  if ( !TerminalListTop
    || (TerminalListTop = (UnityEngine_Component_o *)TerminalListTop[6].klass) == 0
    || (TerminalListTop = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TerminalListTop, 0)) == 0 )
  {
    sub_1C93D2C(TerminalListTop, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)TerminalListTop, 1, 0);
  Point = BlankEarth__GetPoint(this, spotId, onPointType, v9);
  this->fields.focusEarthPoint = Point;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.focusEarthPoint,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.ordealCallFolderInfo = folderInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.ordealCallFolderInfo,
    (int32_t)folderInfo,
    (int32_t)method,
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.otherObjectRoot = root;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.otherObjectRoot,
    (int32_t)root,
    (int32_t)root,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__SetState(BlankEarth_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4D2D03B & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_BlankEarth__setState__);
    byte_4D2D03B = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C93D2C(0, *(_QWORD *)&state);
  CStateManager_object___setState(mFSM, state, (const MethodInfo_33EE940 *)Method_CStateManager_BlankEarth__setState__);
}


void BlankEarth__SetTutorialFlag(BlankEarth_o *this, bool isAvailable, const MethodInfo *method)
{
  this->fields.isTutorialAvailable = isAvailable;
}


void BlankEarth__SetTutorialWaitSkipFlag(BlankEarth_o *this, bool isSkip, const MethodInfo *method)
{
  this->fields.isSkipTutorialWait = isSkip;
}


void BlankEarth__SetZoomEarth(BlankEarth_o *this, const MethodInfo *method)
{
  struct BlankEarthPoint_o **p_focusEarthPoint; // x20
  UnityEngine_Object_o *focusEarthPoint; // x21
  const MethodInfo *v5; // x1
  int32_t BlankEarthSpotId; // w0
  const MethodInfo *v7; // x3
  struct BlankEarthPoint_o *Point; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  float y; // s10
  float x; // s11
  float z; // s9
  float zoomInScl; // s8
  UnityEngine_Object_o *v19; // x21
  __int64 earthSpotRoot; // x0
  __int64 v21; // x1
  struct BlankEarthPoint_o *v22; // x8
  int32_t spotOnType_k__BackingField; // w9
  float v24; // s13
  float v25; // s12
  float v26; // s15
  float w; // s14
  UnityEngine_Transform_o *blankEarth; // x20
  float zoomInOffset; // s9
  UnityEngine_Object_o *otherObjectRoot; // x20
  Il2CppObject *Component_object; // x20
  int v32; // w8
  __int64 v33; // x20
  unsigned int v34; // w21
  UnityEngine_Transform_o *v35; // x20
  const MethodInfo *v36; // x1
  bool IsPlanetEarthActive; // w20
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1
  float v41; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o LocalPosition; // 0:kr10_12.12
  UnityEngine_Quaternion_o v43; // 0:kr00_16.16
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2D058 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D058 = 1;
  }
  p_focusEarthPoint = &this->fields.focusEarthPoint;
  focusEarthPoint = (UnityEngine_Object_o *)this->fields.focusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(focusEarthPoint, 0, 0) )
  {
    BlankEarthSpotId = BlankEarth__get_BlankEarthSpotId(this, v5);
    Point = BlankEarth__GetPoint(this, BlankEarthSpotId, 0, v7);
    this->fields.focusEarthPoint = Point;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.focusEarthPoint,
      (int32_t)Point,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  x = this->fields.zoomInPos.fields.x;
  y = this->fields.zoomInPos.fields.y;
  z = this->fields.zoomInPos.fields.z;
  zoomInScl = this->fields.zoomInScl;
  v19 = (UnityEngine_Object_o *)this->fields.focusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  earthSpotRoot = UnityEngine_Object__op_Inequality(v19, 0, 0);
  if ( (earthSpotRoot & 1) != 0 )
  {
    v22 = *p_focusEarthPoint;
    if ( !*p_focusEarthPoint )
      goto LABEL_50;
    spotOnType_k__BackingField = v22->fields._spotOnType_k__BackingField;
    if ( spotOnType_k__BackingField == 1 )
    {
      otherObjectRoot = (UnityEngine_Object_o *)this->fields.otherObjectRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(otherObjectRoot, 0, 0) )
      {
        earthSpotRoot = (__int64)this->fields.otherObjectRoot;
        if ( !earthSpotRoot )
          goto LABEL_50;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)earthSpotRoot,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        earthSpotRoot = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( (earthSpotRoot & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_50;
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
          || (earthSpotRoot = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                                         (UnityEngine_GameObject_o *)earthSpotRoot,
                                         (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___)) == 0 )
        {
LABEL_50:
          sub_1C93D2C(earthSpotRoot, v21);
        }
        v32 = *(_DWORD *)(earthSpotRoot + 24);
        v33 = earthSpotRoot;
        if ( v32 >= 1 )
        {
          v34 = 0;
          do
          {
            if ( v34 >= v32 )
              sub_1C93D34(earthSpotRoot);
            earthSpotRoot = *(_QWORD *)(v33 + 8LL * (int)v34 + 32);
            if ( !earthSpotRoot )
              goto LABEL_50;
            BlankEarthPoint__SetDispUIDotRange(
              (BlankEarthPoint_o *)earthSpotRoot,
              this->fields.object1DispSpotUISpriteDot,
              this->fields.object1NoDispSpotUISpriteDot,
              0);
            v32 = *(_DWORD *)(v33 + 24);
          }
          while ( (int)++v34 < v32 );
        }
      }
    }
    else if ( !spotOnType_k__BackingField )
    {
      v41 = z;
      v24 = v22->fields._FocusQua_k__BackingField.fields.x;
      v25 = v22->fields._FocusQua_k__BackingField.fields.y;
      v26 = v22->fields._FocusQua_k__BackingField.fields.z;
      w = v22->fields._FocusQua_k__BackingField.fields.w;
      blankEarth = this->fields.blankEarth;
      zoomInOffset = this->fields.zoomInOffset;
      if ( !byte_4D2A141 )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A141 = 1;
      }
      v43 = UnityEngine_Quaternion__AngleAxis(-zoomInOffset, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
      if ( !blankEarth )
        goto LABEL_50;
      v46.fields.w = (float)((float)((float)(w * v43.fields.w) - (float)(v24 * v43.fields.x))
                           - (float)(v25 * v43.fields.y))
                   - (float)(v26 * v43.fields.z);
      v46.fields.z = (float)((float)(v25 * v43.fields.x)
                           + (float)((float)(v26 * v43.fields.w) + (float)(w * v43.fields.z)))
                   - (float)(v24 * v43.fields.y);
      v46.fields.y = (float)((float)(v24 * v43.fields.z)
                           + (float)((float)(v25 * v43.fields.w) + (float)(w * v43.fields.y)))
                   - (float)(v26 * v43.fields.x);
      v46.fields.x = (float)((float)(v26 * v43.fields.y)
                           + (float)((float)(v24 * v43.fields.w) + (float)(w * v43.fields.x)))
                   - (float)(v25 * v43.fields.z);
      UnityEngine_Transform__set_rotation(blankEarth, v46, 0);
      z = v41;
    }
  }
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_50;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0);
  v35 = (UnityEngine_Transform_o *)earthSpotRoot;
  if ( !byte_4D2A13F )
  {
    earthSpotRoot = sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
    byte_4D2A13F = 1;
  }
  if ( !v35 )
    goto LABEL_50;
  UnityEngine_Transform__set_rotation(v35, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_50;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0);
  if ( !earthSpotRoot )
    goto LABEL_50;
  v44.fields.x = x;
  v44.fields.y = y;
  v44.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)earthSpotRoot, v44, 0);
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_50;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0);
  if ( !earthSpotRoot )
    goto LABEL_50;
  v45.fields.x = zoomInScl;
  v45.fields.y = zoomInScl;
  v45.fields.z = zoomInScl;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)earthSpotRoot, v45, 0);
  earthSpotRoot = (__int64)BlankEarth__get_TerminalListTop(this, v36);
  if ( !earthSpotRoot )
    goto LABEL_50;
  IsPlanetEarthActive = ScrTerminalListTop__IsPlanetEarthActive((ScrTerminalListTop_o *)earthSpotRoot, 0);
  earthSpotRoot = (__int64)BlankEarth__get_TerminalListTop(this, v38);
  if ( !earthSpotRoot )
    goto LABEL_50;
  if ( !IsPlanetEarthActive )
  {
    ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)earthSpotRoot, 0, 1, 0);
    earthSpotRoot = (__int64)BlankEarth__get_TerminalListTop(this, v40);
    if ( earthSpotRoot )
    {
      ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)earthSpotRoot, 0.0, 0, 1, 0);
      goto LABEL_49;
    }
    goto LABEL_50;
  }
  ScrTerminalListTop__FrameInOutPlanetEarthRotateBtn((ScrTerminalListTop_o *)earthSpotRoot, 0.0, 0, 1, 0);
LABEL_49:
  BlankEarth__SetState(this, 3, v39);
}


void BlankEarth__Setup(BlankEarth_o *this, AssetData_o *data, MapEntity_o *mapEnt, const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  this->fields.mapEntity = mapEnt;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mapEntity,
    (int32_t)mapEnt,
    (int32_t)mapEnt,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.assetData = data;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.assetData, (int32_t)data, v10, v11, v12, v13, v14, v15);
}


void BlankEarth__SetupByDefaultRotateData(
        BlankEarth_o *this,
        UnityEngine_Quaternion_o *rotateData,
        float *maxAngleData,
        int32_t mapId,
        const MethodInfo *method)
{
  System_Single_array *DefaultRotateData; // x0
  __int64 v9; // x1
  System_Single_array *v10; // x21
  BlankEarth_c *v11; // x0
  float *p_x; // x8
  float v13; // s0
  __int64 v14; // x0
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2D040 & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_1C93AD4(&BlankEarth_TypeInfo);
    byte_4D2D040 = 1;
  }
  DefaultRotateData = BlankEarth__GetDefaultRotateData(this, mapId, (const MethodInfo *)maxAngleData);
  if ( !DefaultRotateData )
    sub_1C93D2C(0, v9);
  v10 = DefaultRotateData;
  if ( SLODWORD(DefaultRotateData->max_length) >= 4 )
  {
    v16.fields.x = DefaultRotateData->m_Items[0] * 0.017453;
    v16.fields.y = DefaultRotateData->m_Items[1] * 0.017453;
    v16.fields.z = DefaultRotateData->m_Items[2] * 0.017453;
    *rotateData = UnityEngine_Quaternion__Internal_FromEulerRad(v16, 0);
    if ( LODWORD(v10->max_length) <= 3 )
      sub_1C93D34(v14);
    v13 = v10->m_Items[3];
  }
  else
  {
    v11 = BlankEarth_TypeInfo;
    if ( !BlankEarth_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
      v11 = BlankEarth_TypeInfo;
    }
    p_x = &v11->static_fields->SOUTH_POLE_ROTATE.fields.x;
    v15.fields.x = *p_x * 0.017453;
    v15.fields.y = p_x[1] * 0.017453;
    v15.fields.z = p_x[2] * 0.017453;
    *rotateData = UnityEngine_Quaternion__Internal_FromEulerRad(v15, 0);
    v13 = -BlankEarth_TypeInfo->static_fields->SouthPoleRotateAngle;
  }
  *maxAngleData = v13;
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__SwitchDispPresentBoxHideGameObject(BlankEarth_o *this, bool isDisp, const MethodInfo *method)
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
      v5 = 0;
      v6 = isDisp;
      do
      {
        if ( (unsigned int)v5 >= max_length )
          sub_1C93D34(this);
        v7 = presentBoxHideGameObjectList->m_Items[v5];
        if ( !v7 )
          sub_1C93D2C(0, isDisp);
        UnityEngine_GameObject__SetActive(v7, v6, 0);
        max_length = presentBoxHideGameObjectList->max_length;
        ++v5;
      }
      while ( (int)v5 < max_length );
    }
  }
}


void BlankEarth__Update(BlankEarth_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4D2D034 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_BlankEarth__update__);
    byte_4D2D034 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_33EE91C *)Method_CStateManager_BlankEarth__update__);
}


BlankEarthTransform_o *BlankEarth__UpdateBlankEarthTransformData(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *BlankEarthTransformData; // x0
  __int64 v4; // x1
  BlankEarthTransform_o *v5; // x20
  UnityEngine_GameObject_o *v6; // x0
  const MethodInfo *v7; // x2
  float totalAng; // kr50_4
  UnityEngine_GameObject_o *gameObject; // x0
  BlankEarthTransform_o *v10; // x0
  const MethodInfo *v11; // x5
  UnityEngine_Vector3_o v13; // 0:x1.12
  UnityEngine_Vector3_o v14; // 0:x3.12
  UnityEngine_Quaternion_o rotation; // 0:kr00_16.16
  UnityEngine_Quaternion_o v16; // 0:kr40_16.16

  if ( (byte_4D2D05B & 1) == 0 )
  {
    sub_1C93AD4(&BlankEarthTransform_TypeInfo);
    byte_4D2D05B = 1;
  }
  BlankEarthTransformData = (UnityEngine_GameObject_o *)BlankEarth__get_BlankEarthTransformData(this, method);
  if ( !this->fields.blankEarth )
    goto LABEL_14;
  v5 = (BlankEarthTransform_o *)BlankEarthTransformData;
  rotation = UnityEngine_Transform__get_rotation(this->fields.blankEarth, 0);
  if ( !v5 )
  {
    BlankEarthTransformData = this->fields.earthRoot;
    if ( BlankEarthTransformData )
    {
      BlankEarthTransformData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                              BlankEarthTransformData,
                                                              0);
      if ( BlankEarthTransformData )
      {
        v16 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)BlankEarthTransformData, 0);
        LODWORD(totalAng) = (unsigned int)GameObjectExtensions__GetLocalPosition(this->fields.earthRoot, 0);
        BlankEarthTransformData = this->fields.earthRoot;
        if ( BlankEarthTransformData )
        {
          gameObject = UnityEngine_GameObject__get_gameObject(BlankEarthTransformData, 0);
          GameObjectExtensions__GetLocalScale(gameObject, 0);
          v10 = (BlankEarthTransform_o *)sub_1C93D20(BlankEarthTransform_TypeInfo);
          *(_QWORD *)&v13.fields.x = 0;
          v5 = v10;
          BlankEarthTransform___ctor(v10, rotation, v16, v13, v14, totalAng, v11);
          goto LABEL_13;
        }
      }
    }
LABEL_14:
    sub_1C93D2C(BlankEarthTransformData, v4);
  }
  v5->fields.blankEarthRotation = rotation;
  BlankEarthTransformData = this->fields.earthRoot;
  if ( !BlankEarthTransformData )
    goto LABEL_14;
  BlankEarthTransformData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                          BlankEarthTransformData,
                                                          0);
  if ( !BlankEarthTransformData )
    goto LABEL_14;
  v5->fields.earthRootRotation = UnityEngine_Transform__get_rotation(
                                   (UnityEngine_Transform_o *)BlankEarthTransformData,
                                   0);
  v5->fields.earthRootLocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.earthRoot, 0);
  BlankEarthTransformData = this->fields.earthRoot;
  if ( !BlankEarthTransformData )
    goto LABEL_14;
  v6 = UnityEngine_GameObject__get_gameObject(BlankEarthTransformData, 0);
  v5->fields.earthRootLocalScale = GameObjectExtensions__GetLocalScale(v6, 0);
  v5->fields.totalAngle = this->fields.totalAngle;
LABEL_13:
  BlankEarth__set_BlankEarthTransformData(this, v5, v7);
  return v5;
}


void BlankEarth__UpdateSpotDisp(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *earthSpotRoot; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__52415656; // x20
  BlankEarth___c_c *v7; // x0
  System_Action_object__o *_9__142_0; // x21
  Il2CppObject *v9; // x22
  struct BlankEarth___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_Object_o *otherObjectRoot; // x20
  System_Collections_Generic_IEnumerable_T__o *v18; // x19
  BlankEarth___c_c *v19; // x0
  System_Action_object__o *_9__142_1; // x20
  Il2CppObject *v21; // x21
  struct BlankEarth___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4D2D04F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_BlankEarthPoint__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_BlankEarthPoint___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_BlankEarth___c__UpdateSpotDisp_b__142_0__);
    sub_1C93AD4(&Method_BlankEarth___c__UpdateSpotDisp_b__142_1__);
    sub_1C93AD4(&BlankEarth___c_TypeInfo);
    byte_4D2D04F = 1;
  }
  earthSpotRoot = (UnityEngine_Object_o *)this->fields.earthSpotRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(earthSpotRoot, 0, 0) )
  {
    v5 = this->fields.earthSpotRoot;
    if ( !v5 )
      goto LABEL_28;
    ComponentsInChildren_object__52415656 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                                                                                             v5,
                                                                                             (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ComponentsInChildren_object__52415656, 0) )
    {
      v7 = BlankEarth___c_TypeInfo;
      if ( !BlankEarth___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo);
        v7 = BlankEarth___c_TypeInfo;
      }
      _9__142_0 = (System_Action_object__o *)v7->static_fields->__9__142_0;
      if ( !_9__142_0 )
      {
        if ( !v7->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v7);
          v7 = BlankEarth___c_TypeInfo;
        }
        v9 = (Il2CppObject *)v7->static_fields->__9;
        _9__142_0 = (System_Action_object__o *)sub_1C93D20(System_Action_BlankEarthPoint__TypeInfo);
        System_Action_object____ctor(_9__142_0, v9, Method_BlankEarth___c__UpdateSpotDisp_b__142_0__, 0);
        static_fields = BlankEarth___c_TypeInfo->static_fields;
        static_fields->__9__142_0 = (struct System_Action_BlankEarthPoint__o *)_9__142_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__142_0,
          (int32_t)_9__142_0,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      BasicHelper__ForEach_object_(
        ComponentsInChildren_object__52415656,
        (System_Action_T__o *)_9__142_0,
        (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_BlankEarthPoint___);
    }
  }
  otherObjectRoot = (UnityEngine_Object_o *)this->fields.otherObjectRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(otherObjectRoot, 0, 0) )
  {
    v5 = this->fields.otherObjectRoot;
    if ( v5 )
    {
      v18 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                                                             v5,
                                                             (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v18, 0) )
      {
        v19 = BlankEarth___c_TypeInfo;
        if ( !BlankEarth___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo);
          v19 = BlankEarth___c_TypeInfo;
        }
        _9__142_1 = (System_Action_object__o *)v19->static_fields->__9__142_1;
        if ( !_9__142_1 )
        {
          if ( !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19);
            v19 = BlankEarth___c_TypeInfo;
          }
          v21 = (Il2CppObject *)v19->static_fields->__9;
          _9__142_1 = (System_Action_object__o *)sub_1C93D20(System_Action_BlankEarthPoint__TypeInfo);
          System_Action_object____ctor(_9__142_1, v21, Method_BlankEarth___c__UpdateSpotDisp_b__142_1__, 0);
          v22 = BlankEarth___c_TypeInfo->static_fields;
          v22->__9__142_1 = (struct System_Action_BlankEarthPoint__o *)_9__142_1;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v22->__9__142_1, (int32_t)_9__142_1, v23, v24, v25, v26, v27, v28);
        }
        BasicHelper__ForEach_object_(
          v18,
          (System_Action_T__o *)_9__142_1,
          (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_BlankEarthPoint___);
      }
      return;
    }
LABEL_28:
    sub_1C93D2C(v5, v4);
  }
}


void BlankEarth__UpdateTotalAngle(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *blankEarth; // x0
  float y; // s1
  UnityEngine_Quaternion_o v5; // 0:kr10_16.16
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  blankEarth = (UnityEngine_Component_o *)this->fields.blankEarth;
  if ( !blankEarth || (blankEarth = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(blankEarth, 0)) == 0 )
    sub_1C93D2C(blankEarth, method);
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0);
  v5 = UnityEngine_Quaternion__Inverse(rotation, 0);
  if ( !byte_4D2D067 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2D067 = 1;
  }
  y = UnityEngine_Quaternion__op_Multiply_72058644(v5, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0).fields.y;
  this->fields.totalAngle = asinf(y) * 57.296;
}


int32_t BlankEarth__get_BlankEarthSpotId(BlankEarth_o *this, const MethodInfo *method)
{
  struct MapEntity_o *mapEntity; // x19
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x8

  if ( (byte_4D2D02F & 1) == 0 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D02F = 1;
  }
  mapEntity = this->fields.mapEntity;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( mapEntity )
    {
LABEL_5:
      if ( !byte_4D2D068 )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2D068 = 1;
      }
      v4 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v4 = TerminalPramsManager_TypeInfo;
      }
      v5 = 544;
      return *(int32_t *)((char *)&v4->static_fields->_DispState_k__BackingField + v5);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( mapEntity )
      goto LABEL_5;
  }
  if ( !byte_4D2D069 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D069 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v5 = 516;
  return *(int32_t *)((char *)&v4->static_fields->_DispState_k__BackingField + v5);
}


BlankEarthTransform_o *BlankEarth__get_BlankEarthTransformData(BlankEarth_o *this, const MethodInfo *method)
{
  struct MapEntity_o *mapEntity; // x19
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x8

  if ( (byte_4D2D031 & 1) == 0 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D031 = 1;
  }
  mapEntity = this->fields.mapEntity;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( mapEntity )
    {
LABEL_5:
      if ( !byte_4D2D06C )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2D06C = 1;
      }
      v4 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v4 = TerminalPramsManager_TypeInfo;
      }
      v5 = 552;
      return *(BlankEarthTransform_o **)((char *)&v4->static_fields->_DispState_k__BackingField + v5);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( mapEntity )
      goto LABEL_5;
  }
  if ( !byte_4D2D06D )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D06D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v5 = 528;
  return *(BlankEarthTransform_o **)((char *)&v4->static_fields->_DispState_k__BackingField + v5);
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
  UnityEngine_Object_o *mTerminalList; // x21
  ScrTerminalListTop_o **p_mTerminalList; // x20
  const MethodInfo *v5; // x1
  TerminalSceneComponent_o *TerminalSceneInstance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  ScrTerminalListTop_o *v14; // x1

  if ( (byte_4D2D02E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D02E = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_mTerminalList = &this->fields.mTerminalList;
  if ( UnityEngine_Object__op_Equality(mTerminalList, 0, 0) )
  {
    TerminalSceneInstance = BlankEarth__get_TerminalSceneInstance(this, v5);
    if ( !TerminalSceneInstance )
      sub_1C93D2C(0, v7);
    v14 = TerminalSceneInstance->fields.mTerminalList;
    *p_mTerminalList = v14;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTerminalList, (int32_t)v14, v8, v9, v10, v11, v12, v13);
  }
  return *p_mTerminalList;
}


TerminalSceneComponent_o *BlankEarth__get_TerminalSceneInstance(BlankEarth_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_mTerminalScene; // x19
  UnityEngine_Object_o *v4; // x20
  struct TerminalSceneComponent_o *mTerminalScene; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  TerminalSceneComponent_c *v12; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  GrandQuestFolderBoardItem_c *mInstance; // x1

  if ( (byte_4D2D02D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D02D = 1;
  }
  mTerminalScene = this->fields.mTerminalScene;
  p_mTerminalScene = (GrandQuestFolderBoardItem_o *)&this->fields.mTerminalScene;
  v4 = (UnityEngine_Object_o *)mTerminalScene;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    v12 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v12 = TerminalSceneComponent_TypeInfo;
    }
    static_fields = v12->static_fields;
    mInstance = (GrandQuestFolderBoardItem_c *)static_fields->mInstance;
    p_mTerminalScene->klass = (GrandQuestFolderBoardItem_c *)static_fields->mInstance;
    sub_1C93A78(p_mTerminalScene, (int32_t)mInstance, v6, v7, v8, v9, v10, v11);
  }
  return (TerminalSceneComponent_o *)p_mTerminalScene->klass;
}


void BlankEarth__set_BlankEarthSpotId(BlankEarth_o *this, int32_t value, const MethodInfo *method)
{
  struct MapEntity_o *mapEntity; // x20
  TerminalPramsManager_c *v6; // x0
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4D2D030 & 1) == 0 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D030 = 1;
  }
  mapEntity = this->fields.mapEntity;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( mapEntity )
    {
LABEL_5:
      if ( !byte_4D2D06A )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2D06A = 1;
      }
      v6 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v6 = TerminalPramsManager_TypeInfo;
      }
      v6->static_fields->_PlanetEarthSpotId_k__BackingField = value;
      return;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( mapEntity )
      goto LABEL_5;
  }
  if ( !byte_4D2D06B )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D06B = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_BlankEarthSpotId_k__BackingField = value;
}


void BlankEarth__set_BlankEarthTransformData(
        BlankEarth_o *this,
        BlankEarthTransform_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct MapEntity_o *mapEntity; // x20
  TerminalPramsManager_c *v11; // x0
  __int64 v12; // x8
  GrandQuestFolderBoardItem_o *v13; // x0

  if ( (byte_4D2D032 & 1) == 0 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D032 = 1;
  }
  mapEntity = this->fields.mapEntity;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( mapEntity )
    {
LABEL_5:
      if ( !byte_4D2D06E )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2D06E = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v11 = TerminalPramsManager_TypeInfo;
      }
      v12 = 552;
      goto LABEL_16;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( mapEntity )
      goto LABEL_5;
  }
  if ( !byte_4D2D06F )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D06F = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v12 = 528;
LABEL_16:
  v13 = (GrandQuestFolderBoardItem_o *)((char *)v11->static_fields + v12);
  v13->klass = (GrandQuestFolderBoardItem_c *)value;
  sub_1C93A78(v13, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
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
  GrandQuestFolderBoardItem_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  v11 = (GrandQuestFolderBoardItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v11->fields.sortValue0 = (int64_t)finishCallback;
  v11 = (GrandQuestFolderBoardItem_o *)((char *)v11 + 32);
  *(float *)&v11[-1].fields._ListCreatedTime_k__BackingField = time;
  *((float *)&v11[-1].fields._ListCreatedTime_k__BackingField + 1) = x;
  *(float *)&v11[-1].fields._ClosedMessage_k__BackingField = y;
  HIDWORD(v11[-1].fields._ClosedMessage_k__BackingField) = easeType;
  sub_1C93A78(v11, (int32_t)finishCallback, v12, v13, v14, v15, v16, v17);
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
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  result.fields.x = this->fields._LatLongVector_k__BackingField.fields.x;
  result.fields.y = this->fields._LatLongVector_k__BackingField.fields.y;
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
  bool v3; // w20

  v3 = isInterrupted;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._IsInterrupted_k__BackingField = v3;
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
    sub_1C93D2C(0, method);
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
    sub_1C93D2C(this, method);
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
  if ( (byte_4D2D074 & 1) == 0 )
  {
    this = (BlankEarth_StateEarthAutoRotateBase_o *)sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2D074 = 1;
  }
  klass = v2[4].klass;
  if ( !klass
    || (monitor = (EasingObject_o *)v2[1].monitor,
        v5 = *(float *)&klass->_1.name,
        v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v6, v2, (intptr_t)v2->klass->vtable[9].method, 0),
        v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, (intptr_t)v2->klass->vtable[10].method, 0),
        (v8 = v2[4].klass) == 0)
    || !monitor )
  {
    sub_1C93D2C(this, method);
  }
  EasingObject__Play(monitor, v5, v6, v7, 0.0, HIDWORD(v8->_1.namespaze), 0);
}


void BlankEarth_StateEarthAutoRotateBase__begin(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Transform_o *blankEarth; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct BlankEarth_QAARotateEarthParam_o *qaaRotateEarthParam; // x1
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UnityEngine_Quaternion_o rotation; // 0:kr00_16.16

  if ( (byte_4D2D073 & 1) == 0 )
  {
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    byte_4D2D073 = 1;
  }
  this->fields.That = that;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3, v4, v5, v6, v7);
  if ( !that )
    goto LABEL_10;
  qaaRotateEarthParam = that->fields.qaaRotateEarthParam;
  this->fields.Param = qaaRotateEarthParam;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.Param,
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
                               (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
          this->fields.EasingObj = (struct EasingObject_o *)Component_object;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.EasingObj,
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
    sub_1C93D2C(blankEarth, v11);
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

  if ( (byte_4D2D075 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_1C93AD4(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_4D2D075 = 1;
  }
  EasingObj = this->fields.EasingObj;
  if ( !EasingObj
    || (EasingObject__Stop(EasingObj, 0), (EasingObj = (EasingObject_o *)this->fields.That) == 0)
    || (BlankEarth__UpdateTotalAngle((BlankEarth_o *)EasingObj, 0), (v5 = this->fields.EasingObj) == 0) )
  {
    sub_1C93D2C(EasingObj, that);
  }
  Param = this->fields.Param;
  if ( Param )
  {
    FinishCallback_k__BackingField = (System_Action_T__o *)Param->fields._FinishCallback_k__BackingField;
    v8 = v5->fields.mNow < 1.0;
    v9 = (BlankEarth_QAARotateEarthResponse_o *)sub_1C93D20(BlankEarth_QAARotateEarthResponse_TypeInfo);
    BlankEarth_QAARotateEarthResponse___ctor(v9, v8, 0);
    ActionExtensions__Call_object_(
      FinishCallback_k__BackingField,
      (Il2CppObject *)v9,
      (const MethodInfo_30EBC54 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Component_o *TerminalListTop; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *blankEarth; // x19

  this->fields.That = that;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3, v4, v5, v6, v7);
  if ( !that )
    goto LABEL_9;
  TerminalListTop = (UnityEngine_Component_o *)BlankEarth__get_TerminalListTop(that, 0);
  if ( !TerminalListTop )
    goto LABEL_9;
  TerminalListTop = (UnityEngine_Component_o *)TerminalListTop[6].klass;
  if ( !TerminalListTop )
    goto LABEL_9;
  TerminalListTop = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(TerminalListTop, 0);
  if ( !TerminalListTop )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)TerminalListTop, 0, 0);
  blankEarth = that->fields.blankEarth;
  if ( !byte_4D2A13F )
  {
    TerminalListTop = (UnityEngine_Component_o *)sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
    byte_4D2A13F = 1;
  }
  if ( !blankEarth )
LABEL_9:
    sub_1C93D2C(TerminalListTop, v10);
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
    sub_1C93D2C(blankEarth, v5);
  v8.fields.y = v6;
  v8.fields.x = 0.0;
  v8.fields.z = 0.0;
  UnityEngine_Transform__Rotate_72144752(blankEarth, v8, 0);
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
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
    sub_1C93D2C(this, that);
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
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&that->fields.scalingEndCallback, 0, v5, v6, v7, v8, v9, v10);
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
    || (this = (BlankEarth_StateMain_o *)*((_QWORD *)this + 18)) == 0
    || (this = (BlankEarth_StateMain_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_1C93D2C(this, that);
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
    sub_1C93D2C(this, 0);
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
  struct BlankEarth_o *v9; // x8
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

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
  if ( !byte_4D2A140 )
  {
    this = (BlankEarth_StateShortcutRotate_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A140 = 1;
  }
  if ( !v8
    || (UnityEngine_Transform__RotateAround(
          (UnityEngine_Transform_o *)v8,
          position,
          UnityEngine_Vector3_TypeInfo->static_fields->rightVector,
          mNow * v4->fields.rotAmountX,
          0),
        (v9 = v4->fields.That) == 0)
    || (this = (BlankEarth_StateShortcutRotate_o *)v9->fields.blankEarth) == 0 )
  {
LABEL_16:
    sub_1C93D2C(this, method);
  }
  v11.fields.x = 0.0;
  v11.fields.y = mNow * v4->fields.rotAmountY;
  v11.fields.z = 0.0;
  UnityEngine_Transform__Rotate_72144752((UnityEngine_Transform_o *)this, v11, 0);
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

  if ( (byte_4D2D076 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2D076 = 1;
  }
  EasingObj = this->fields.EasingObj;
  rotateTime = this->fields.rotateTime;
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, (intptr_t)this->klass->vtable._9_Rotate.method, 0);
  v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)this->klass->vtable._10_OnRotateCompleted.method, 0);
  Param = this->fields.Param;
  if ( !Param || !EasingObj )
    sub_1C93D2C(v7, v8);
  EasingObject__Play(EasingObj, rotateTime, v5, v6, 0.0, Param->fields._EaseType_k__BackingField, 0);
}


void BlankEarth_StateShortcutRotate__begin(
        BlankEarth_StateShortcutRotate_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  long double v5; // q8
  long double v6; // q10
  long double v7; // q11
  long double v8; // q13
  float v9; // s14
  EasingObject_o *EasingObj; // x0
  __int64 v11; // x1
  float v12; // s0
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  struct BlankEarth_RotateEarthTimeCalculateParam_o *rotateEarthTimeCalculateParam; // x8
  float rotAmountY; // s0
  float rotAmountX; // s0
  long double v17; // q0
  long double v18; // q2
  long double v19; // q0
  long double v20; // q2
  UnityEngine_Vector3_o v21; // 0:kr10_12.12
  UnityEngine_Vector3_o v22; // 0:kr30_12.12
  UnityEngine_Quaternion_o v23; // 0:kr00_16.16
  UnityEngine_Quaternion_o v24; // 0:kr20_16.16

  BlankEarth_StateEarthAutoRotateBase__begin((BlankEarth_StateEarthAutoRotateBase_o *)this, that, method);
  v23 = UnityEngine_Quaternion__Inverse(this->fields.QuaFrom, 0);
  if ( !byte_4D2D067 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2D067 = 1;
  }
  v21 = UnityEngine_Quaternion__op_Multiply_72058644(v23, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  *(float *)&v17 = v21.fields.x;
  *(float *)&v18 = v21.fields.z;
  v5 = v17;
  v6 = v18;
  v24 = UnityEngine_Quaternion__Inverse(this->fields.QuaTo, 0);
  if ( !byte_4D2D067 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2D067 = 1;
  }
  v22 = UnityEngine_Quaternion__op_Multiply_72058644(v24, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  *(float *)&v19 = v22.fields.x;
  *(float *)&v20 = v22.fields.z;
  v7 = v19;
  v8 = v20;
  if ( !byte_4D2C578 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2C578 = 1;
  }
  this->fields.rotAmountY = sub_22CE4A4(0, v5, 0.0, v6, v7, 0.0, v8);
  v9 = asinf(v21.fields.y);
  v12 = asinf(v22.fields.y);
  Param = this->fields.Param;
  this->fields.rotAmountX = (float)(v9 - v12) * 57.296;
  if ( !Param )
    goto LABEL_23;
  this->fields.rotateTime = Param->fields._Time_k__BackingField;
  if ( !that )
    goto LABEL_23;
  if ( that->fields.rotateEarthTimeCalculateParam )
  {
    if ( !byte_4D2A137 )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A137 = 1;
    }
    EasingObj = (EasingObject_o *)System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    rotateEarthTimeCalculateParam = that->fields.rotateEarthTimeCalculateParam;
    if ( !rotateEarthTimeCalculateParam )
      goto LABEL_23;
    this->fields.rotateTime = (float)(sqrtf(
                                        (float)((float)(*(float *)&v6 - *(float *)&v8)
                                              * (float)(*(float *)&v6 - *(float *)&v8))
                                      + (float)((float)((float)(*(float *)&v5 - *(float *)&v7)
                                                      * (float)(*(float *)&v5 - *(float *)&v7))
                                              + (float)((float)(v21.fields.y - v22.fields.y)
                                                      * (float)(v21.fields.y - v22.fields.y))))
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
      sub_1C93D2C(EasingObj, v11);
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
  BlankEarth_o *IsPlayFirstAnim; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  _BOOL4 isTutorialAvailable; // w8
  float tutorialWaitTime; // s0
  float startupAnimTime; // s8
  const MethodInfo *v24; // x4
  __int64 v25; // x8
  int32_t v26; // w3
  UnityEngine_Transform_o *blankEarth; // x21
  __int64 v28; // x8
  _QWORD *v29; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  __int64 v38; // x8
  UnityEngine_GameObject_o *v39; // x0
  __int64 v40; // x8
  ScrTerminalListTop_o *TerminalListTop; // x0
  ScrTerminalListTop_o **v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  EasingObject_o *v49; // x22
  System_Action_o *v50; // x23
  System_Action_o *v51; // x24
  __int64 v52; // x8
  ScrTerminalListTop_o *v53; // x8
  QuestRewardItemAction_c *v54; // x8
  __int64 v55; // x8
  QuestRewardItemAction_c *v56; // x8
  __int64 v57; // x8
  QuestRewardItemAction_c *v58; // x8
  __int64 v59; // x8
  UnityEngine_Quaternion_o v60; // [xsp+0h] [xbp-60h] BYREF
  float maxAngleData; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:kr10_12.12
  UnityEngine_Vector3_o DefaultEarthScale; // 0:kr24_12.12
  UnityEngine_Quaternion_o EarthRotate; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2D05E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C93AD4(&Method_BlankEarth_StateStartup_begin__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__);
    sub_1C93AD4(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__);
    sub_1C93AD4(&BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo);
    byte_4D2D05E = 1;
  }
  *(_QWORD *)&v60.fields.x = 0;
  *(_QWORD *)&v60.fields.z = 0;
  maxAngleData = 0.0;
  v5 = sub_1C93D20(BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_71;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = that;
  v14 = v5 + 32;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)that, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)&this->fields.inertialSpeedX = 0;
  IsPlayFirstAnim = *(BlankEarth_o **)(v5 + 32);
  if ( !IsPlayFirstAnim )
    goto LABEL_71;
  isTutorialAvailable = IsPlayFirstAnim->fields.isTutorialAvailable;
  tutorialWaitTime = 0.0;
  IsPlayFirstAnim->fields.totalAngle = 0.0;
  if ( isTutorialAvailable && !IsPlayFirstAnim->fields.isSkipTutorialWait )
    tutorialWaitTime = IsPlayFirstAnim->fields.tutorialWaitTime;
  startupAnimTime = IsPlayFirstAnim->fields.startupAnimTime;
  *(float *)(v5 + 84) = tutorialWaitTime;
  IsPlayFirstAnim->fields.startFadeTime = IsPlayFirstAnim->fields.startupFadeTime;
  IsPlayFirstAnim = (BlankEarth_o *)BlankEarth__IsPlayFirstAnim(IsPlayFirstAnim, v7);
  *(_BYTE *)(v5 + 80) = (unsigned __int8)IsPlayFirstAnim & 1;
  if ( ((unsigned __int8)IsPlayFirstAnim & 1) != 0 )
  {
    if ( !*(_QWORD *)v14 )
      goto LABEL_71;
    v25 = *(_QWORD *)(*(_QWORD *)v14 + 336LL);
    v26 = v25 ? *(_DWORD *)(v25 + 16) : 0;
    BlankEarth__SetupByDefaultRotateData(IsPlayFirstAnim, &v60, &maxAngleData, v26, v24);
    v28 = *(_QWORD *)v14;
    if ( !*(_QWORD *)v14 )
      goto LABEL_71;
    startupAnimTime = *(float *)(v28 + 136);
    IsPlayFirstAnim = *(BlankEarth_o **)(v28 + 32);
    *(_DWORD *)(v28 + 320) = *(_DWORD *)(v28 + 140);
    if ( !IsPlayFirstAnim )
      goto LABEL_71;
    UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)IsPlayFirstAnim, v60, 0);
    IsPlayFirstAnim = *(BlankEarth_o **)v14;
    if ( !*(_QWORD *)v14 )
      goto LABEL_71;
    BlankEarth__SavePlayedFirstAnim(IsPlayFirstAnim, v7);
    if ( !*(_QWORD *)v14 )
      goto LABEL_71;
    *(float *)(*(_QWORD *)v14 + 228LL) = maxAngleData;
  }
  else
  {
    IsPlayFirstAnim = *(BlankEarth_o **)v14;
    if ( !*(_QWORD *)v14 )
      goto LABEL_71;
    blankEarth = IsPlayFirstAnim->fields.blankEarth;
    EarthRotate = BlankEarth__LoadEarthRotate(IsPlayFirstAnim, v7);
    if ( !blankEarth )
      goto LABEL_71;
    UnityEngine_Transform__set_rotation(blankEarth, EarthRotate, 0);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2D072 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D072 = 1;
  }
  IsPlayFirstAnim = (BlankEarth_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsPlayFirstAnim = (BlankEarth_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)&IsPlayFirstAnim->fields.zoomOutEasingType + 92LL) )
  {
    v29 = Method_BlankEarth_StateStartup_begin__;
    if ( (*((_BYTE *)Method_BlankEarth_StateStartup_begin__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_1C93AEC(Method_BlankEarth_StateStartup_begin__);
    IsPlayFirstAnim = (BlankEarth_o *)sub_1C93AB8(v29, v29[4]);
    if ( !*(_QWORD *)v14 )
      goto LABEL_71;
    IsPlayFirstAnim = (BlankEarth_o *)OverwriteAssetSoundName__PlaySe(
                                        (System_Reflection_MethodBase_o *)IsPlayFirstAnim,
                                        *(System_String_o **)(*(_QWORD *)v14 + 128LL),
                                        0,
                                        0);
  }
  if ( !*(_QWORD *)v14 )
    goto LABEL_71;
  IsPlayFirstAnim = *(BlankEarth_o **)(*(_QWORD *)v14 + 32LL);
  if ( !IsPlayFirstAnim )
    goto LABEL_71;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsPlayFirstAnim, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Component_object, v32, v33, v34, v35, v36, v37);
  v38 = *(_QWORD *)(v5 + 32);
  if ( !v38 )
    goto LABEL_71;
  IsPlayFirstAnim = *(BlankEarth_o **)(v38 + 40);
  if ( !IsPlayFirstAnim )
    goto LABEL_71;
  v39 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)IsPlayFirstAnim, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(v39, 0);
  v40 = *(_QWORD *)(v5 + 32);
  *(UnityEngine_Vector3_o *)(v5 + 52) = LocalScale;
  if ( !v40 )
    goto LABEL_71;
  DefaultEarthScale = BlankEarth__GetDefaultEarthScale(IsPlayFirstAnim, v7);
  IsPlayFirstAnim = *(BlankEarth_o **)(v5 + 32);
  *(UnityEngine_Vector3_o *)(v5 + 40) = DefaultEarthScale;
  if ( !IsPlayFirstAnim )
    goto LABEL_71;
  TerminalListTop = BlankEarth__get_TerminalListTop(IsPlayFirstAnim, v7);
  *(_QWORD *)(v5 + 72) = TerminalListTop;
  v42 = (ScrTerminalListTop_o **)(v5 + 72);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 72), (int32_t)TerminalListTop, v43, v44, v45, v46, v47, v48);
  *(_BYTE *)(v5 + 64) = 0;
  v49 = *(EasingObject_o **)(v5 + 16);
  v50 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)v5, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, 0);
  v51 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)v5, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, 0);
  v52 = *(_QWORD *)(v5 + 32);
  if ( !v52 )
    goto LABEL_71;
  if ( !v49 )
    goto LABEL_71;
  EasingObject__Play_49778384(v49, 1.0, 0.0, startupAnimTime, v50, v51, 0.0, *(_DWORD *)(v52 + 188), 0);
  IsPlayFirstAnim = (BlankEarth_o *)*v42;
  if ( !*v42 )
    goto LABEL_71;
  IsPlayFirstAnim = (BlankEarth_o *)ScrTerminalListTop__IsPlanetEarthActive((ScrTerminalListTop_o *)IsPlayFirstAnim, 0);
  v53 = *v42;
  if ( ((unsigned __int8)IsPlayFirstAnim & 1) != 0 )
  {
    if ( *(_QWORD *)v14 && v53 )
    {
      ScrTerminalListTop__FrameInOutPlanetEarthRotateBtn(*v42, *(float *)(*(_QWORD *)v14 + 172LL), 0, 1, 0);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4D2A6EE )
      {
        sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
        byte_4D2A6EE = 1;
      }
      IsPlayFirstAnim = (BlankEarth_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        IsPlayFirstAnim = (BlankEarth_o *)TerminalSceneComponent_TypeInfo;
      }
      v54 = **(QuestRewardItemAction_c ***)&IsPlayFirstAnim->fields.zoomOutEasingType;
      if ( v54 )
      {
        v55 = *(_QWORD *)&v54->_2.element_size;
        if ( v55 )
        {
          *(_BYTE *)(v55 + 840) = 1;
          return;
        }
      }
    }
LABEL_71:
    sub_1C93D2C(IsPlayFirstAnim, v7);
  }
  if ( !v53 )
    goto LABEL_71;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn(*v42, 0, 1, 0);
  if ( !*(_QWORD *)v14 )
    goto LABEL_71;
  IsPlayFirstAnim = (BlankEarth_o *)*v42;
  if ( !*v42 )
    goto LABEL_71;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
    (ScrTerminalListTop_o *)IsPlayFirstAnim,
    *(float *)(*(_QWORD *)v14 + 172LL),
    0,
    1,
    0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  IsPlayFirstAnim = (BlankEarth_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    IsPlayFirstAnim = (BlankEarth_o *)TerminalSceneComponent_TypeInfo;
  }
  v56 = **(QuestRewardItemAction_c ***)&IsPlayFirstAnim->fields.zoomOutEasingType;
  if ( !v56 )
    goto LABEL_71;
  v57 = *(_QWORD *)&v56->_2.element_size;
  if ( !v57 )
    goto LABEL_71;
  *(_BYTE *)(v57 + 482) = 1;
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    IsPlayFirstAnim = (BlankEarth_o *)TerminalSceneComponent_TypeInfo;
    byte_4D2A6EE = 1;
  }
  if ( !*(_DWORD *)&IsPlayFirstAnim->fields.isTutorialAvailable )
  {
    j_il2cpp_runtime_class_init_0(IsPlayFirstAnim);
    IsPlayFirstAnim = (BlankEarth_o *)TerminalSceneComponent_TypeInfo;
  }
  v58 = **(QuestRewardItemAction_c ***)&IsPlayFirstAnim->fields.zoomOutEasingType;
  if ( !v58 )
    goto LABEL_71;
  v59 = *(_QWORD *)&v58->_2.element_size;
  if ( !v59 )
    goto LABEL_71;
  *(_BYTE *)(v59 + 483) = 1;
}


void BlankEarth_StateStartup__end(BlankEarth_StateStartup_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void BlankEarth_StateStartup__update(BlankEarth_StateStartup_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct System_Action_o *scalingEndCallback; // x8
  GrandQuestFolderBoardItem_o *p_scalingEndCallback; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( !that )
    sub_1C93D2C(this, 0);
  BlankEarth__BlunkEarthMainOperation(that, that, &this->fields.inertialSpeedX, &this->fields.inertialSpeedY, v3);
  scalingEndCallback = that->fields.scalingEndCallback;
  if ( scalingEndCallback )
  {
    if ( this->fields.scaleRate < 0.0001 )
    {
      p_scalingEndCallback = (GrandQuestFolderBoardItem_o *)&that->fields.scalingEndCallback;
      ((void (__fastcall *)(intptr_t, intptr_t))scalingEndCallback->fields.invoke_impl)(
        scalingEndCallback->fields.method_code,
        scalingEndCallback->fields.method);
      p_scalingEndCallback->klass = 0;
      sub_1C93A78(p_scalingEndCallback, 0, v8, v9, v10, v11, v12, v13);
    }
  }
}


void BlankEarth_StateStartup___c__DisplayClass3_0___ctor(
        BlankEarth_StateStartup___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


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
  struct BlankEarth_o *that; // x8
  float v9; // s0
  struct BlankEarth_o *v10; // x8
  struct ScrTerminalListTop_o *terminalList; // x8
  _BOOL4 isFirstAnim; // w8
  struct BlankEarth_o *v13; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct BlankEarth_o *v15; // x9
  char v16; // w8
  float earthBtnMoveSpeedTime; // s0
  UnityEngine_Vector3_o v18; // 0:kr00_12.12

  v2 = this;
  if ( (byte_4D2D05F & 1) == 0 )
  {
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4D2D05F = 1;
  }
  eo = v2->fields.eo;
  if ( !eo )
    goto LABEL_32;
  mNow = eo->fields.mNow;
  v5 = StepFunc__Acc5(mNow, 0);
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_32;
  v7 = v5;
  _4__this->fields.scaleRate = v7;
  that = v2->fields.that;
  if ( !that )
    goto LABEL_32;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)that->fields.earthRoot;
  if ( !this )
    goto LABEL_32;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0);
  v9 = fminf(v7, 1.0);
  if ( v7 < 0.0 )
    v9 = 0.0;
  if ( !this )
    goto LABEL_32;
  *(float32x2_t *)&v18.fields.x = vadd_f32(
                                    *(float32x2_t *)&v2->fields.root_scl_to.fields.x,
                                    vmul_n_f32(
                                      vsub_f32(
                                        *(float32x2_t *)&v2->fields.root_scl_from.fields.x,
                                        *(float32x2_t *)&v2->fields.root_scl_to.fields.x),
                                      v9));
  v18.fields.z = v2->fields.root_scl_to.fields.z
               + (float)(v9 * (float)(v2->fields.root_scl_from.fields.z - v2->fields.root_scl_to.fields.z));
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v18, 0);
  if ( v2->fields.isStartRotateBtn )
    return;
  v10 = v2->fields.that;
  if ( !v10 )
    goto LABEL_32;
  if ( mNow >= v10->fields.startupFrameInRotateBtnRate )
    return;
  if ( !v10->fields.isTutorialAvailable )
  {
    terminalList = v2->fields.terminalList;
    if ( !terminalList )
      goto LABEL_32;
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)terminalList->fields.mActionBgColl;
    if ( !this )
      goto LABEL_32;
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
    if ( !this )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  isFirstAnim = v2->fields.isFirstAnim;
  v2->fields.isStartRotateBtn = 1;
  if ( isFirstAnim )
    return;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !this )
    goto LABEL_32;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)QuestAfterAction__IsActiveCommand(
                                                             (QuestAfterAction_o *)this,
                                                             0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  v13 = v2->fields.that;
  if ( !v13 || (mTerminalList = v13->fields.mTerminalList) == 0 )
LABEL_32:
    sub_1C93D2C(this, method);
  if ( !mTerminalList->fields.IsBlankEarthChaldeaGateWait )
  {
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)v2->fields.terminalList;
    if ( this )
    {
      this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)ScrTerminalListTop__IsPlanetEarthActive(
                                                                 (ScrTerminalListTop_o *)this,
                                                                 0);
      v15 = v2->fields.that;
      if ( v15 )
      {
        v16 = (char)this;
        this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)v2->fields.terminalList;
        if ( this )
        {
          earthBtnMoveSpeedTime = v15->fields.earthBtnMoveSpeedTime;
          if ( (v16 & 1) != 0 )
          {
            ScrTerminalListTop__FrameInOutPlanetEarthRotateBtn(
              (ScrTerminalListTop_o *)this,
              earthBtnMoveSpeedTime,
              1,
              0,
              0);
            return;
          }
          ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
            (ScrTerminalListTop_o *)this,
            earthBtnMoveSpeedTime,
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
    goto LABEL_32;
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct BlankEarth_o *v12; // x8
  float wait_time; // s8
  System_Action_o *v14; // x21
  struct BlankEarth_o *v15; // x8

  v2 = this;
  if ( (byte_4D2D060 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_1C93AD4(&Method_BlankEarth_SetMainState__);
    byte_4D2D060 = 1;
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
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v12->fields.scalingEndCallback, 0, v6, v7, v8, v9, v10, v11);
    v4 = (Il2CppObject *)v2->fields.that;
  }
  wait_time = v2->fields.wait_time;
  v14 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v14, v4, Method_BlankEarth_SetMainState__, 0);
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)BasicHelper__DelayCall(wait_time, v14, 1, 0);
  if ( !v4
    || (this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_MonoBehaviour__StartCoroutine_72105100(
                                                                   (UnityEngine_MonoBehaviour_o *)v4,
                                                                   (System_Collections_IEnumerator_o *)this,
                                                                   0),
        (v15 = v2->fields.that) == 0) )
  {
LABEL_13:
    sub_1C93D2C(this, method);
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
  float z; // w9
  float zoomInScl; // s0
  float zoomInSpdTime; // s9
  float v23; // s1
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12

  if ( (byte_4D2D062 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (BlankEarth_StateZoomIn_o *)sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D062 = 1;
  }
  if ( !blankEarth )
    goto LABEL_15;
  updated = BlankEarth__UpdateBlankEarthTransformData(blankEarth, (const MethodInfo *)otherRoot);
  LocalPosition = GameObjectExtensions__GetLocalPosition(blankEarth->fields.otherObjectRoot, 0);
  z = blankEarth->fields.zoomInPos.fields.z;
  *(_QWORD *)&rootPosTo->fields.x = *(_QWORD *)&blankEarth->fields.zoomInPos.fields.x;
  rootPosTo->fields.z = z;
  if ( !updated )
    goto LABEL_15;
  *rootQuaTo = updated->fields.blankEarthRotation;
  zoomInScl = blankEarth->fields.zoomInScl;
  rootScaleTo->fields.x = zoomInScl;
  rootScaleTo->fields.y = zoomInScl;
  rootScaleTo->fields.z = zoomInScl;
  zoomInSpdTime = blankEarth->fields.zoomInSpdTime;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  *zoomSpeed = TerminalPramsManager__GetIntpTime_AutoResume(zoomInSpdTime, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BlankEarth_StateZoomIn_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)otherRoot, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( otherRoot )
    {
      if ( otherRoot->fields.zoomType == 1 )
      {
        __asm { FMOV            V0.2S, #1.0 }
        *(_QWORD *)&rootScaleTo->fields.x = _D0;
        rootScaleTo->fields.z = 1.0;
      }
      v23 = otherRoot->fields.otherObjZoomInPos.fields.z - LocalPosition.fields.z;
      *(float32x2_t *)&rootPosTo->fields.x = vsub_f32(
                                               *(float32x2_t *)&otherRoot->fields.otherObjZoomInPos.fields.x,
                                               *(float32x2_t *)&LocalPosition.fields.x);
      rootPosTo->fields.z = v23;
      *zoomSpeed = otherRoot->fields.zoomInSpeed;
      BlankEarthOtherObject__ZoomInAdjustAppearance(
        otherRoot,
        otherRoot->fields.zoomInSpeed,
        blankEarth->fields.zoomOutEasingType,
        0);
      return;
    }
LABEL_15:
    sub_1C93D2C(this, otherRoot);
  }
}


void BlankEarth_StateZoomIn__begin(BlankEarth_StateZoomIn_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 TerminalListTop; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  BlankEarth_o **v14; // x21
  char v15; // w22
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  float zoomInSpdTime; // s8
  BlankEarth_StateZoomIn_Fields *p_fields; // x19
  __int64 v24; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 v33; // x8
  float v34; // s8
  BlankEarth_o *v35; // x8
  float *focusEarthPoint; // x9
  float v37; // s4
  float v38; // s5
  float v39; // s6
  float v40; // s7
  __int64 v41; // x10
  float z; // w10
  __int64 v43; // x10
  float zoomInScl; // s0
  struct BlankEarthPoint_o *v45; // x9
  UnityEngine_Object_o *otherObjectRoot; // x25
  Il2CppObject *v47; // x0
  const MethodInfo *v48; // x7
  UnityEngine_Object_o *v49; // x22
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  BlankEarth_o *v56; // x21
  struct BlankEarthPoint_o *v57; // x1
  GrandQuestFolderBoardItem_o *v58; // x21
  int32_t BlankEarthSpotId; // w0
  const MethodInfo *v60; // x3
  BlankEarthPoint_o *Point; // x0
  GrandQuestFolderBoardItem_c *klass; // x8
  int nestedTypes; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v65; // x8
  float v66; // s1
  System_Object_array *ComponentsInChildren_object__52415656; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  EasingObject_o *v74; // x21
  float mSpdTime; // s8
  System_Action_o *v76; // x19
  System_Action_o *v77; // x22
  __int64 v78; // x8
  UnityEngine_Quaternion_o v79; // 0:kr00_16.16

  if ( (byte_4D2D061 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__);
    sub_1C93AD4(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__);
    sub_1C93AD4(&BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo);
    byte_4D2D061 = 1;
  }
  v5 = sub_1C93D20(BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_84;
  *(_QWORD *)(v5 + 24) = that;
  v14 = (BlankEarth_o **)(v5 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)that, v8, v9, v10, v11, v12, v13);
  TerminalListTop = *(_QWORD *)(v5 + 24);
  if ( !TerminalListTop )
    goto LABEL_84;
  TerminalListTop = (__int64)BlankEarth__get_TerminalListTop((BlankEarth_o *)TerminalListTop, v7);
  if ( !TerminalListTop )
    goto LABEL_84;
  TerminalListTop = ScrTerminalListTop__IsPlanetEarthActive((ScrTerminalListTop_o *)TerminalListTop, 0);
  if ( !*v14 )
    goto LABEL_84;
  v15 = TerminalListTop;
  TerminalListTop = (__int64)BlankEarth__get_TerminalListTop(*v14, v7);
  if ( (v15 & 1) != 0 )
  {
    if ( !*v14 || !TerminalListTop )
      goto LABEL_84;
    ScrTerminalListTop__FrameInOutPlanetEarthRotateBtn(
      (ScrTerminalListTop_o *)TerminalListTop,
      (*v14)->fields.earthBtnMoveSpeedTime,
      0,
      0,
      0);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    TerminalListTop = (__int64)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      TerminalListTop = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v16 = **(_QWORD **)(TerminalListTop + 184);
    if ( !v16 )
      goto LABEL_84;
    v17 = *(_QWORD *)(v16 + 256);
    if ( !v17 )
      goto LABEL_84;
    *(_BYTE *)(v17 + 840) = 1;
  }
  else
  {
    if ( !TerminalListTop )
      goto LABEL_84;
    ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)TerminalListTop, 0, 0, 0);
    TerminalListTop = (__int64)*v14;
    if ( !*v14 )
      goto LABEL_84;
    TerminalListTop = (__int64)BlankEarth__get_TerminalListTop((BlankEarth_o *)TerminalListTop, v7);
    if ( !*v14 || !TerminalListTop )
      goto LABEL_84;
    ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
      (ScrTerminalListTop_o *)TerminalListTop,
      (*v14)->fields.earthBtnMoveSpeedTime,
      0,
      0,
      0);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    TerminalListTop = (__int64)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      TerminalListTop = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v18 = **(_QWORD **)(TerminalListTop + 184);
    if ( !v18 )
      goto LABEL_84;
    v19 = *(_QWORD *)(v18 + 256);
    if ( !v19 )
      goto LABEL_84;
    *(_BYTE *)(v19 + 482) = 1;
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      TerminalListTop = (__int64)TerminalSceneComponent_TypeInfo;
      byte_4D2A6EE = 1;
    }
    if ( !*(_DWORD *)(TerminalListTop + 224) )
    {
      j_il2cpp_runtime_class_init_0(TerminalListTop);
      TerminalListTop = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v20 = **(_QWORD **)(TerminalListTop + 184);
    if ( !v20 )
      goto LABEL_84;
    v21 = *(_QWORD *)(v20 + 256);
    if ( !v21 )
      goto LABEL_84;
    *(_BYTE *)(v21 + 483) = 1;
  }
  TerminalListTop = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_84;
  if ( BlankEarth__get_BlankEarthSpotId((BlankEarth_o *)TerminalListTop, v7) )
    return;
  TerminalListTop = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_84;
  BlankEarth__SaveBlankEarthSpotData((BlankEarth_o *)TerminalListTop, v7);
  if ( !*v14 )
    goto LABEL_84;
  zoomInSpdTime = (*v14)->fields.zoomInSpdTime;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume(zoomInSpdTime, 0);
  p_fields = &this->fields;
  TerminalListTop = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_84;
  TerminalListTop = (__int64)BlankEarth__get_TerminalListTop((BlankEarth_o *)TerminalListTop, v7);
  if ( !*v14 )
    goto LABEL_84;
  if ( !TerminalListTop )
    goto LABEL_84;
  ScrTerminalListTop__cbfBlankEarthQuestCreate(
    (ScrTerminalListTop_o *)TerminalListTop,
    (*v14)->fields.focusEarthPoint,
    0);
  TerminalListTop = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_84;
  BlankEarth__SaveEarthRotate((BlankEarth_o *)TerminalListTop, v7);
  TerminalListTop = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_84;
  TerminalListTop = (__int64)BlankEarth__UpdateBlankEarthTransformData((BlankEarth_o *)TerminalListTop, v7);
  if ( !*v14 )
    goto LABEL_84;
  v24 = TerminalListTop;
  TerminalListTop = (__int64)(*v14)->fields.blankEarth;
  if ( !TerminalListTop )
    goto LABEL_84;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TerminalListTop, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Component_object, v27, v28, v29, v30, v31, v32);
  if ( !v24 )
    goto LABEL_84;
  v33 = *(_QWORD *)(v5 + 24);
  *(_OWORD *)(v5 + 32) = *(_OWORD *)(v24 + 16);
  if ( !v33 )
    goto LABEL_84;
  v34 = *(float *)(v33 + 84);
  if ( !byte_4D2A141 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A141 = 1;
  }
  v79 = UnityEngine_Quaternion__AngleAxis(-v34, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
  v35 = *v14;
  if ( !*v14 )
    goto LABEL_84;
  focusEarthPoint = (float *)v35->fields.focusEarthPoint;
  if ( !focusEarthPoint )
    goto LABEL_84;
  v37 = focusEarthPoint[68];
  v38 = focusEarthPoint[71];
  v39 = focusEarthPoint[70];
  v40 = focusEarthPoint[69];
  *(float *)(v5 + 48) = (float)((float)(v79.fields.y * v39)
                              + (float)((float)(v79.fields.w * v37) + (float)(v79.fields.x * v38)))
                      - (float)(v79.fields.z * v40);
  *(float *)(v5 + 52) = (float)((float)(v79.fields.z * v37)
                              + (float)((float)(v79.fields.w * v40) + (float)(v79.fields.y * v38)))
                      - (float)(v79.fields.x * v39);
  *(float *)(v5 + 56) = (float)((float)(v79.fields.x * v40)
                              + (float)((float)(v79.fields.w * v39) + (float)(v79.fields.z * v38)))
                      - (float)(v79.fields.y * v37);
  *(float *)(v5 + 60) = (float)((float)((float)(v79.fields.w * v38) - (float)(v79.fields.x * v37))
                              - (float)(v79.fields.y * v40))
                      - (float)(v79.fields.z * v39);
  *(_OWORD *)(v5 + 64) = *(_OWORD *)(v24 + 32);
  if ( !byte_4D2A13F )
  {
    TerminalListTop = sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
    byte_4D2A13F = 1;
    v35 = *v14;
  }
  *(struct UnityEngine_Quaternion_StaticFields *)(v5 + 80) = *UnityEngine_Quaternion_TypeInfo->static_fields;
  v41 = *(_QWORD *)(v24 + 48);
  *(_DWORD *)(v5 + 104) = *(_DWORD *)(v24 + 56);
  *(_QWORD *)(v5 + 96) = v41;
  if ( !v35 )
    goto LABEL_84;
  z = v35->fields.zoomInPos.fields.z;
  *(_QWORD *)(v5 + 108) = *(_QWORD *)&v35->fields.zoomInPos.fields.x;
  *(float *)(v5 + 116) = z;
  v43 = *(_QWORD *)(v24 + 60);
  *(_DWORD *)(v5 + 128) = *(_DWORD *)(v24 + 68);
  *(_QWORD *)(v5 + 120) = v43;
  zoomInScl = v35->fields.zoomInScl;
  *(float *)(v5 + 132) = zoomInScl;
  *(float *)(v5 + 136) = zoomInScl;
  *(float *)(v5 + 140) = zoomInScl;
  *(_BYTE *)(v5 + 176) = 0;
  v45 = v35->fields.focusEarthPoint;
  if ( !v45 )
    goto LABEL_84;
  if ( v45->fields._spotOnType_k__BackingField == 1 )
  {
    otherObjectRoot = (UnityEngine_Object_o *)v35->fields.otherObjectRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    TerminalListTop = UnityEngine_Object__op_Inequality(otherObjectRoot, 0, 0);
    if ( (TerminalListTop & 1) != 0 )
    {
      if ( !*v14 )
        goto LABEL_84;
      TerminalListTop = (__int64)(*v14)->fields.otherObjectRoot;
      if ( !TerminalListTop )
        goto LABEL_84;
      v47 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)TerminalListTop,
              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      BlankEarth_StateZoomIn__SetOtherObjectZoomInParam(
        (BlankEarth_StateZoomIn_o *)v47,
        (BlankEarthOtherObject_o *)v47,
        *v14,
        (UnityEngine_Vector3_o *)(v5 + 108),
        (UnityEngine_Vector3_o *)(v5 + 132),
        (UnityEngine_Quaternion_o *)(v5 + 48),
        &p_fields->mSpdTime,
        v48);
    }
  }
  if ( !*v14 )
    goto LABEL_84;
  v49 = (UnityEngine_Object_o *)(*v14)->fields.focusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  TerminalListTop = UnityEngine_Object__op_Inequality(v49, 0, 0);
  v56 = *v14;
  if ( (TerminalListTop & 1) != 0 )
  {
    if ( !v56 )
      goto LABEL_84;
    v57 = v56->fields.focusEarthPoint;
    *(_QWORD *)(v5 + 144) = v57;
    v58 = (GrandQuestFolderBoardItem_o *)(v5 + 144);
  }
  else
  {
    if ( !v56 )
      goto LABEL_84;
    BlankEarthSpotId = BlankEarth__get_BlankEarthSpotId(v56, v7);
    Point = BlankEarth__GetPoint(v56, BlankEarthSpotId, 0, v60);
    LODWORD(v57) = (_DWORD)Point;
    *(_QWORD *)(v5 + 144) = Point;
    v58 = (GrandQuestFolderBoardItem_o *)(v5 + 144);
  }
  sub_1C93A78(v58, (int32_t)v57, v50, v51, v52, v53, v54, v55);
  klass = v58->klass;
  if ( !v58->klass )
    goto LABEL_84;
  nestedTypes = (int)klass->_1.nestedTypes;
  *(_QWORD *)(v5 + 152) = klass->_1.methods;
  *(_DWORD *)(v5 + 160) = nestedTypes;
  if ( !byte_4D2A139 )
  {
    TerminalListTop = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v65 = *(_QWORD *)(v5 + 24);
  v66 = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v5 + 164) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v5 + 172) = v66;
  if ( !v65 )
    goto LABEL_84;
  TerminalListTop = *(_QWORD *)(v65 + 48);
  if ( !TerminalListTop )
    goto LABEL_84;
  ComponentsInChildren_object__52415656 = UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                                            (UnityEngine_GameObject_o *)TerminalListTop,
                                            (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  *(_QWORD *)(v5 + 184) = ComponentsInChildren_object__52415656;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)(v5 + 184),
    (int32_t)ComponentsInChildren_object__52415656,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v74 = *(EasingObject_o **)(v5 + 16);
  mSpdTime = p_fields->mSpdTime;
  v76 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v76, (Il2CppObject *)v5, Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__, 0);
  v77 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v77, (Il2CppObject *)v5, Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__, 0);
  v78 = *(_QWORD *)(v5 + 24);
  if ( !v78 || !v74 )
LABEL_84:
    sub_1C93D2C(TerminalListTop, v7);
  EasingObject__Play(v74, mSpdTime, v76, v77, 0.0, *(_DWORD *)(v78 + 180), 0);
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


void BlankEarth_StateZoomIn___c__DisplayClass1_0___begin_b__0(
        BlankEarth_StateZoomIn___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  BlankEarth_StateZoomIn___c__DisplayClass1_0_o *v2; // x19
  struct EasingObject_o *eo; // x8
  float mNow; // s9
  double v5; // d8
  double v6; // d0
  struct BlankEarth_o *that; // x8
  UnityEngine_Transform_o *blankEarth; // x20
  float v9; // s10
  struct BlankEarth_o *v10; // x8
  UnityEngine_Transform_o *transform; // x20
  struct BlankEarth_o *v12; // x8
  UnityEngine_Transform_o *v13; // x0
  float32x2_t v14; // d10
  float z; // s11
  float32x2_t v16; // d12
  float v17; // s13
  UnityEngine_Transform_o *v18; // x20
  float v19; // s0
  float v20; // s1
  bool v21; // nf
  float v22; // s0
  struct BlankEarth_o *v23; // x8
  UnityEngine_Transform_o *v24; // x0
  float32x2_t v25; // d12
  float v26; // s13
  float32x2_t v27; // d14
  float v28; // s15
  UnityEngine_Transform_o *v29; // x20
  float v30; // s0
  float v31; // s1
  float v32; // s0
  struct BlankEarthPoint_o *focusEarthPoint; // x20
  float32x2_t v34; // d12
  float v35; // s13
  float32x2_t v36; // d14
  float v37; // s15
  float v38; // s0
  float v39; // s1
  float v40; // s0
  struct BlankEarth_o *v41; // x8
  struct BlankEarth_o *v42; // x8
  struct BlankEarthPoint_o *v43; // x8
  struct BlankEarthPoint_array *spotList; // x21
  int max_length; // w8
  float v46; // s0
  float v47; // s8
  unsigned int v48; // w22
  BlankEarthPoint_o *v49; // x20
  struct BlankEarth_o *v50; // x8
  UnityEngine_Vector3_o v51; // 0:kr20_12.12
  UnityEngine_Vector3_o v52; // 0:kr34_12.12
  UnityEngine_Quaternion_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4D2D063 & 1) == 0 )
  {
    this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)sub_1C93AD4(&BlankEarth_TypeInfo);
    byte_4D2D063 = 1;
  }
  eo = v2->fields.eo;
  if ( !eo )
    goto LABEL_46;
  mNow = eo->fields.mNow;
  v5 = mNow;
  v6 = StepFunc__AccSig(mNow, 0);
  that = v2->fields.that;
  if ( !that )
    goto LABEL_46;
  blankEarth = that->fields.blankEarth;
  v9 = v6;
  v53 = UnityEngine_Quaternion__Slerp(v2->fields.qua_from, v2->fields.qua_to, v9, 0);
  if ( !blankEarth )
    goto LABEL_46;
  UnityEngine_Transform__set_rotation(blankEarth, v53, 0);
  v10 = v2->fields.that;
  if ( !v10 )
    goto LABEL_46;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v10->fields.earthRoot;
  if ( !this )
    goto LABEL_46;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v54 = UnityEngine_Quaternion__Slerp(v2->fields.root_qua_from, v2->fields.root_qua_to, v9, 0);
  if ( !transform )
    goto LABEL_46;
  UnityEngine_Transform__set_rotation(transform, v54, 0);
  v12 = v2->fields.that;
  if ( !v12 )
    goto LABEL_46;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v12->fields.earthRoot;
  if ( !this )
    goto LABEL_46;
  v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v14.n64_u64[0] = *(unsigned __int64 *)&v2->fields.root_pos_from.fields.x;
  z = v2->fields.root_pos_from.fields.z;
  v16.n64_u64[0] = *(unsigned __int64 *)&v2->fields.root_pos_to.fields.x;
  v17 = v2->fields.root_pos_to.fields.z;
  v18 = v13;
  v19 = StepFunc__DecSin(v5, 0);
  v20 = fminf(v19, 1.0);
  v21 = v19 < 0.0;
  v22 = 0.0;
  if ( !v21 )
    v22 = v20;
  if ( !v18 )
    goto LABEL_46;
  *(float32x2_t *)&v51.fields.x = vadd_f32(v14, vmul_n_f32(vsub_f32(v16, v14), v22));
  v51.fields.z = z + (float)((float)(v17 - z) * v22);
  UnityEngine_Transform__set_localPosition(v18, v51, 0);
  v23 = v2->fields.that;
  if ( !v23 )
    goto LABEL_46;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v23->fields.earthRoot;
  if ( !this )
    goto LABEL_46;
  v24 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v25.n64_u64[0] = *(unsigned __int64 *)&v2->fields.root_scl_from.fields.x;
  v26 = v2->fields.root_scl_from.fields.z;
  v27.n64_u64[0] = *(unsigned __int64 *)&v2->fields.root_scl_to.fields.x;
  v28 = v2->fields.root_scl_to.fields.z;
  v29 = v24;
  v30 = StepFunc__Acc5(v5, 0);
  v31 = fminf(v30, 1.0);
  v32 = v30 < 0.0 ? 0.0 : v31;
  if ( !v29 )
    goto LABEL_46;
  *(float32x2_t *)&v52.fields.x = vadd_f32(v25, vmul_n_f32(vsub_f32(v27, v25), v32));
  v52.fields.z = v26 + (float)((float)(v28 - v26) * v32);
  UnityEngine_Transform__set_localScale(v29, v52, 0);
  focusEarthPoint = v2->fields.focusEarthPoint;
  v34.n64_u64[0] = *(unsigned __int64 *)&v2->fields.spot_ui_root_qua_from.fields.x;
  v35 = v2->fields.spot_ui_root_qua_from.fields.z;
  v36.n64_u64[0] = *(unsigned __int64 *)&v2->fields.spot_ui_root_qua_to.fields.x;
  v37 = v2->fields.spot_ui_root_qua_to.fields.z;
  v38 = StepFunc__Acc5(v5, 0);
  v39 = fminf(v38, 1.0);
  v40 = v38 < 0.0 ? 0.0 : v39;
  if ( !focusEarthPoint )
    goto LABEL_46;
  *(float32x2_t *)&focusEarthPoint->fields.changedUiRootPosition.fields.x = vadd_f32(
                                                                              v34,
                                                                              vmul_n_f32(vsub_f32(v36, v34), v40));
  focusEarthPoint->fields.changedUiRootPosition.fields.z = v35 + (float)((float)(v37 - v35) * v40);
  if ( !v2->fields.isStartSlideIn )
  {
    this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v2->fields.that;
    if ( !this )
      goto LABEL_46;
    if ( mNow > this->fields.root_pos_from.fields.z )
    {
      v2->fields.isStartSlideIn = 1;
      this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)BlankEarth__get_TerminalListTop(
                                                                (BlankEarth_o *)this,
                                                                method);
      v41 = v2->fields.that;
      if ( !v41 || !this )
        goto LABEL_46;
      ScrTerminalListTop__CallBlankEarthSpotCreateFinishEvent(
        (ScrTerminalListTop_o *)this,
        v41->fields.focusEarthPoint,
        0);
    }
  }
  v42 = v2->fields.that;
  if ( !v42 )
    goto LABEL_46;
  v43 = v42->fields.focusEarthPoint;
  if ( !v43 )
    goto LABEL_46;
  if ( v43->fields._spotOnType_k__BackingField == 1 )
  {
    spotList = v2->fields.spotList;
    if ( !spotList )
      goto LABEL_46;
    max_length = spotList->max_length;
    v46 = fminf(mNow, 1.0);
    v47 = mNow < 0.0 ? 0.0 : v46;
    if ( max_length >= 1 )
    {
      v48 = 0;
      while ( 1 )
      {
        if ( v48 >= max_length )
          sub_1C93D34(this);
        this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)BlankEarth_TypeInfo;
        v49 = spotList->m_Items[v48];
        if ( !BlankEarth_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
          this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)BlankEarth_TypeInfo;
        }
        v50 = v2->fields.that;
        if ( !v50 || !v49 )
          break;
        BlankEarthPoint__SetDispUIDotRange(
          v49,
          *(float *)this->fields.spotList->m_Items
        + (float)(v47 * (float)(v50->fields.object1DispSpotUISpriteDot - *(float *)this->fields.spotList->m_Items)),
          *((float *)this->fields.spotList->m_Items + 1)
        + (float)(v47
                * (float)(v50->fields.object1NoDispSpotUISpriteDot - *((float *)this->fields.spotList->m_Items + 1))),
          0);
        max_length = spotList->max_length;
        if ( (int)++v48 >= max_length )
          return;
      }
LABEL_46:
      sub_1C93D2C(this, method);
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
  struct BlankEarth_o *v7; // x8
  struct BlankEarthPoint_o *focusEarthPoint; // x8
  struct BlankEarthPoint_array *spotList; // x20
  int max_length; // w8
  unsigned int v11; // w21
  struct BlankEarth_o *v12; // x8
  Il2CppClass *klass; // x8
  __int64 v14; // x8

  v2 = this;
  if ( (byte_4D2D064 & 1) == 0 )
  {
    this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D064 = 1;
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
  v7 = v2->fields.that;
  if ( !v7 )
    goto LABEL_33;
  focusEarthPoint = v7->fields.focusEarthPoint;
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
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= max_length )
          sub_1C93D34(this);
        v12 = v2->fields.that;
        if ( !v12 )
          break;
        this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)spotList->m_Items[v11];
        if ( !this )
          break;
        BlankEarthPoint__SetDispUIDotRange(
          (BlankEarthPoint_o *)this,
          v12->fields.object1DispSpotUISpriteDot,
          v12->fields.object1NoDispSpotUISpriteDot,
          0);
        max_length = spotList->max_length;
        if ( (int)++v11 >= max_length )
          goto LABEL_24;
      }
LABEL_33:
      sub_1C93D2C(this, method);
    }
  }
LABEL_24:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = this->fields.spotList->obj.klass;
  if ( !klass )
    goto LABEL_33;
  v14 = *(_QWORD *)&klass->_2.element_size;
  if ( !v14 )
    goto LABEL_33;
  *(_BYTE *)(v14 + 98) = 0;
}


void BlankEarth_StateZoomOut___ctor(BlankEarth_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarth_StateZoomOut__begin(BlankEarth_StateZoomOut_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 blankEarth; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  BlankEarth_o **v13; // x19
  float zoomOutSpdTime; // s8
  float IntpTime_AutoResume; // s0
  UnityEngine_Object_o *focusEarthPoint; // x21
  float v17; // s8
  BlankEarth_o *v18; // x8
  struct BlankEarthPoint_o *v19; // x9
  UnityEngine_Object_o *otherObjectRoot; // x21
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x8
  __int64 v31; // x8
  __int64 v32; // x8
  __int64 v33; // x8
  UnityEngine_GameObject_o *v34; // x0
  BlankEarthTransform_o *BlankEarthTransformData; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x8
  __int64 v43; // x10
  int v44; // w9
  __int64 v45; // x8
  float zoomInOffset; // s9
  BlankEarth_o *v47; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  UnityEngine_Object_o *v50; // x21
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  BlankEarth_o *v57; // x21
  BlankEarthPoint_o *Point; // x1
  int32_t BlankEarthSpotId; // w0
  const MethodInfo *v60; // x3
  struct UnityEngine_Vector3_StaticFields *v61; // x9
  __int64 v62; // x8
  float v63; // s1
  __int64 v64; // d0
  int v65; // s1
  __int64 v66; // x8
  System_Object_array *ComponentsInChildren_object__52415656; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  EasingObject_o *v74; // x21
  System_Action_o *v75; // x22
  System_Action_o *v76; // x23
  __int64 v77; // x8
  UnityEngine_Object_o *v78; // x20
  Il2CppObject *v79; // x20
  UnityEngine_Vector3_o LocalPosition; // 0:kr20_12.12
  UnityEngine_Vector3_o LocalScale; // 0:kr34_12.12
  UnityEngine_Quaternion_o rotation; // 0:kr00_16.16
  UnityEngine_Quaternion_o v83; // 0:kr10_16.16
  UnityEngine_Quaternion_o v84; // 0:kr40_16.16
  UnityEngine_Quaternion_o v85; // 0:kr50_16.16

  if ( (byte_4D2D065 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__);
    sub_1C93AD4(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__);
    sub_1C93AD4(&BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo);
    byte_4D2D065 = 1;
  }
  v4 = sub_1C93D20(BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_76;
  *(_QWORD *)(v4 + 24) = that;
  v13 = (BlankEarth_o **)(v4 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)that, v7, v8, v9, v10, v11, v12);
  blankEarth = *(_QWORD *)(v4 + 24);
  if ( !blankEarth )
    goto LABEL_76;
  BlankEarth__ResetBlankEarthSpotData((BlankEarth_o *)blankEarth, v6);
  if ( !*v13 )
    goto LABEL_76;
  zoomOutSpdTime = (*v13)->fields.zoomOutSpdTime;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(zoomOutSpdTime, 0);
  if ( !*v13 )
    goto LABEL_76;
  focusEarthPoint = (UnityEngine_Object_o *)(*v13)->fields.focusEarthPoint;
  v17 = IntpTime_AutoResume;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = UnityEngine_Object__op_Inequality(focusEarthPoint, 0, 0);
  if ( (blankEarth & 1) != 0 )
  {
    v18 = *v13;
    if ( !*v13 )
      goto LABEL_76;
    v19 = v18->fields.focusEarthPoint;
    if ( !v19 )
      goto LABEL_76;
    if ( v19->fields._spotOnType_k__BackingField )
    {
      otherObjectRoot = (UnityEngine_Object_o *)v18->fields.otherObjectRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      blankEarth = UnityEngine_Object__op_Inequality(otherObjectRoot, 0, 0);
      if ( (blankEarth & 1) != 0 )
      {
        if ( !*v13 )
          goto LABEL_76;
        blankEarth = (__int64)(*v13)->fields.otherObjectRoot;
        if ( !blankEarth )
          goto LABEL_76;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)blankEarth,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        blankEarth = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( (blankEarth & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_76;
          v17 = *((float *)&Component_object[5].monitor + 1);
        }
      }
    }
  }
  if ( !*v13 )
    goto LABEL_76;
  blankEarth = (__int64)(*v13)->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_76;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarth, 0);
  v23 = GameObjectExtensions__SafeGetComponent_object_(
          gameObject,
          (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v4 + 16) = v23;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = *(_QWORD *)(v4 + 24);
  if ( !v30 )
    goto LABEL_76;
  blankEarth = *(_QWORD *)(v30 + 32);
  if ( !blankEarth )
    goto LABEL_76;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0);
  v31 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Quaternion_o *)(v4 + 48) = rotation;
  if ( !v31 )
    goto LABEL_76;
  blankEarth = *(_QWORD *)(v31 + 40);
  if ( !blankEarth )
    goto LABEL_76;
  blankEarth = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)blankEarth, 0);
  if ( !blankEarth )
    goto LABEL_76;
  v83 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0);
  v32 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Quaternion_o *)(v4 + 80) = v83;
  if ( !v32 )
    goto LABEL_76;
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v32 + 40), 0);
  v33 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Vector3_o *)(v4 + 108) = LocalPosition;
  if ( !v33 )
    goto LABEL_76;
  blankEarth = *(_QWORD *)(v33 + 40);
  if ( !blankEarth )
    goto LABEL_76;
  v34 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)blankEarth, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(v34, 0);
  blankEarth = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Vector3_o *)(v4 + 132) = LocalScale;
  if ( !blankEarth )
    goto LABEL_76;
  BlankEarthTransformData = BlankEarth__get_BlankEarthTransformData((BlankEarth_o *)blankEarth, v6);
  *(_QWORD *)(v4 + 192) = BlankEarthTransformData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 192), (int32_t)BlankEarthTransformData, v36, v37, v38, v39, v40, v41);
  v42 = *(_QWORD *)(v4 + 192);
  if ( v42 )
  {
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(v42 + 16);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(v42 + 32);
    v43 = *(_QWORD *)(v42 + 48);
    *(_DWORD *)(v4 + 104) = *(_DWORD *)(v42 + 56);
    *(_QWORD *)(v4 + 96) = v43;
    v44 = *(_DWORD *)(v42 + 68);
    v45 = *(_QWORD *)(v42 + 60);
    *(_DWORD *)(v4 + 128) = v44;
    *(_QWORD *)(v4 + 120) = v45;
  }
  else
  {
    if ( !*v13 )
      goto LABEL_76;
    zoomInOffset = (*v13)->fields.zoomInOffset;
    if ( !byte_4D2A141 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A141 = 1;
    }
    v84 = UnityEngine_Quaternion__AngleAxis(zoomInOffset, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
    if ( !*v13 )
      goto LABEL_76;
    blankEarth = (__int64)(*v13)->fields.blankEarth;
    if ( !blankEarth )
      goto LABEL_76;
    v85 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0);
    v47 = *(BlankEarth_o **)(v4 + 24);
    *(_DWORD *)(v4 + 32) = 0;
    *(float *)(v4 + 36) = (float)((float)(v84.fields.z * v85.fields.x)
                                + (float)((float)(v84.fields.w * v85.fields.y) + (float)(v84.fields.y * v85.fields.w)))
                        - (float)(v84.fields.x * v85.fields.z);
    *(float *)(v4 + 44) = (float)((float)((float)(v84.fields.w * v85.fields.w) - (float)(v84.fields.x * v85.fields.x))
                                - (float)(v84.fields.y * v85.fields.y))
                        - (float)(v84.fields.z * v85.fields.z);
    *(_DWORD *)(v4 + 40) = 0;
    if ( !v47 )
      goto LABEL_76;
    *(struct UnityEngine_Quaternion_o *)(v4 + 64) = v47->fields.mRootQua;
    if ( !byte_4D2A139 )
    {
      blankEarth = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
      v47 = *v13;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)(v4 + 96) = *(_QWORD *)&static_fields->zeroVector.fields.x;
    *(float *)(v4 + 104) = z;
    if ( !v47 )
      goto LABEL_76;
    *(UnityEngine_Vector3_o *)(v4 + 120) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)blankEarth, v6);
  }
  if ( !*v13 )
    goto LABEL_76;
  v50 = (UnityEngine_Object_o *)(*v13)->fields.focusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = UnityEngine_Object__op_Inequality(v50, 0, 0);
  v57 = *v13;
  if ( (blankEarth & 1) != 0 )
  {
    if ( !v57 )
      goto LABEL_76;
    Point = v57->fields.focusEarthPoint;
  }
  else
  {
    if ( !v57 )
      goto LABEL_76;
    BlankEarthSpotId = BlankEarth__get_BlankEarthSpotId(*v13, v6);
    Point = BlankEarth__GetPoint(v57, BlankEarthSpotId, 0, v60);
  }
  *(_QWORD *)(v4 + 144) = Point;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 144), (int32_t)Point, v51, v52, v53, v54, v55, v56);
  if ( !byte_4D2A139 )
  {
    blankEarth = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v61 = UnityEngine_Vector3_TypeInfo->static_fields;
  v62 = *(_QWORD *)(v4 + 144);
  v63 = v61->zeroVector.fields.z;
  *(_QWORD *)(v4 + 164) = *(_QWORD *)&v61->zeroVector.fields.x;
  *(float *)(v4 + 172) = v63;
  if ( !v62 )
    goto LABEL_76;
  v64 = *(_QWORD *)(v62 + 152);
  v65 = *(_DWORD *)(v62 + 160);
  v66 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(v4 + 152) = v64;
  *(_DWORD *)(v4 + 160) = v65;
  if ( !v66 )
    goto LABEL_76;
  blankEarth = *(_QWORD *)(v66 + 48);
  if ( !blankEarth )
    goto LABEL_76;
  ComponentsInChildren_object__52415656 = UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                                            (UnityEngine_GameObject_o *)blankEarth,
                                            (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  *(_QWORD *)(v4 + 184) = ComponentsInChildren_object__52415656;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)(v4 + 184),
    (int32_t)ComponentsInChildren_object__52415656,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  *(_BYTE *)(v4 + 176) = 0;
  v74 = *(EasingObject_o **)(v4 + 16);
  v75 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v75, (Il2CppObject *)v4, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, 0);
  v76 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v76, (Il2CppObject *)v4, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, 0);
  v77 = *(_QWORD *)(v4 + 24);
  if ( !v77
    || !v74
    || (EasingObject__Play_49778384(v74, 1.0, 0.0, v17, v75, v76, 0.0, *(_DWORD *)(v77 + 184), 0), !*v13) )
  {
LABEL_76:
    sub_1C93D2C(blankEarth, v6);
  }
  v78 = (UnityEngine_Object_o *)(*v13)->fields.otherObjectRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = UnityEngine_Object__op_Inequality(v78, 0, 0);
  if ( (blankEarth & 1) != 0 )
  {
    if ( !*v13 )
      goto LABEL_76;
    blankEarth = (__int64)(*v13)->fields.otherObjectRoot;
    if ( !blankEarth )
      goto LABEL_76;
    v79 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)blankEarth,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    blankEarth = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v79, 0);
    if ( (blankEarth & 1) != 0 )
    {
      if ( *v13 && v79 )
      {
        BlankEarthOtherObject__ZoomOutAdjustAppearance(
          (BlankEarthOtherObject_o *)v79,
          v17,
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


void BlankEarth_StateZoomOut___c__DisplayClass0_0___begin_b__0(
        BlankEarth_StateZoomOut___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  float mNow; // s9
  BlankEarth_StateZoomOut___c__DisplayClass0_0_o *v4; // x19
  double v5; // d8
  double v6; // d0
  struct BlankEarth_o *that; // x8
  UnityEngine_Transform_o *blankEarth; // x20
  float v9; // s10
  struct BlankEarth_o *v10; // x8
  UnityEngine_Transform_o *transform; // x20
  struct BlankEarth_o *v12; // x8
  UnityEngine_Transform_o *v13; // x0
  float32x2_t v14; // d10
  float z; // s11
  float32x2_t v16; // d12
  float v17; // s13
  UnityEngine_Transform_o *v18; // x20
  float v19; // s0
  float v20; // s1
  bool v21; // nf
  float v22; // s0
  struct BlankEarth_o *v23; // x8
  UnityEngine_Transform_o *v24; // x0
  float32x2_t v25; // d12
  float v26; // s13
  float32x2_t v27; // d14
  float v28; // s15
  UnityEngine_Transform_o *v29; // x20
  float v30; // s0
  float v31; // s1
  float v32; // s0
  struct BlankEarthPoint_o *focusEarthPoint; // x20
  float32x2_t v34; // d12
  float v35; // s13
  float32x2_t v36; // d14
  float v37; // s15
  float v38; // s0
  float v39; // s1
  float v40; // s0
  char v41; // w20
  struct BlankEarth_o *v42; // x8
  float earthBtnMoveSpeedTime; // s0
  struct BlankEarth_o *v44; // x8
  struct BlankEarthPoint_o *v45; // x8
  struct BlankEarthPoint_array *spotList; // x20
  int max_length; // w8
  float v48; // s0
  float v49; // s8
  unsigned int v50; // w21
  struct BlankEarth_o *v51; // x8
  UnityEngine_Vector3_o v52; // 0:kr20_12.12
  UnityEngine_Vector3_o v53; // 0:kr34_12.12
  UnityEngine_Quaternion_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_48;
  mNow = eo->fields.mNow;
  v4 = this;
  v5 = mNow;
  v6 = StepFunc__AccSig(mNow, 0);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_48;
  blankEarth = that->fields.blankEarth;
  v9 = v6;
  v54 = UnityEngine_Quaternion__Slerp(v4->fields.qua_to, v4->fields.qua_from, v9, 0);
  if ( !blankEarth )
    goto LABEL_48;
  UnityEngine_Transform__set_rotation(blankEarth, v54, 0);
  v10 = v4->fields.that;
  if ( !v10 )
    goto LABEL_48;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v10->fields.earthRoot;
  if ( !this )
    goto LABEL_48;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v55 = UnityEngine_Quaternion__Slerp(v4->fields.root_qua_to, v4->fields.root_qua_from, v9, 0);
  if ( !transform )
    goto LABEL_48;
  UnityEngine_Transform__set_rotation(transform, v55, 0);
  v12 = v4->fields.that;
  if ( !v12 )
    goto LABEL_48;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v12->fields.earthRoot;
  if ( !this )
    goto LABEL_48;
  v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v14.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_to.fields.x;
  z = v4->fields.root_pos_to.fields.z;
  v16.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_from.fields.x;
  v17 = v4->fields.root_pos_from.fields.z;
  v18 = v13;
  v19 = StepFunc__DecSin(v5, 0);
  v20 = fminf(v19, 1.0);
  v21 = v19 < 0.0;
  v22 = 0.0;
  if ( !v21 )
    v22 = v20;
  if ( !v18 )
    goto LABEL_48;
  *(float32x2_t *)&v52.fields.x = vadd_f32(v14, vmul_n_f32(vsub_f32(v16, v14), v22));
  v52.fields.z = z + (float)((float)(v17 - z) * v22);
  UnityEngine_Transform__set_localPosition(v18, v52, 0);
  v23 = v4->fields.that;
  if ( !v23 )
    goto LABEL_48;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v23->fields.earthRoot;
  if ( !this )
    goto LABEL_48;
  v24 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v25.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_to.fields.x;
  v26 = v4->fields.root_scl_to.fields.z;
  v27.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_from.fields.x;
  v28 = v4->fields.root_scl_from.fields.z;
  v29 = v24;
  v30 = StepFunc__Acc5(v5, 0);
  v31 = fminf(v30, 1.0);
  v32 = v30 < 0.0 ? 0.0 : v31;
  if ( !v29 )
    goto LABEL_48;
  *(float32x2_t *)&v53.fields.x = vadd_f32(v25, vmul_n_f32(vsub_f32(v27, v25), v32));
  v53.fields.z = v26 + (float)((float)(v28 - v26) * v32);
  UnityEngine_Transform__set_localScale(v29, v53, 0);
  focusEarthPoint = v4->fields.focusEarthPoint;
  v34.n64_u64[0] = *(unsigned __int64 *)&v4->fields.spot_ui_root_qua_to.fields.x;
  v35 = v4->fields.spot_ui_root_qua_to.fields.z;
  v36.n64_u64[0] = *(unsigned __int64 *)&v4->fields.spot_ui_root_qua_from.fields.x;
  v37 = v4->fields.spot_ui_root_qua_from.fields.z;
  v38 = StepFunc__Acc5(v5, 0);
  v39 = fminf(v38, 1.0);
  v40 = v38 < 0.0 ? 0.0 : v39;
  if ( !focusEarthPoint )
    goto LABEL_48;
  *(float32x2_t *)&focusEarthPoint->fields.changedUiRootPosition.fields.x = vadd_f32(
                                                                              v34,
                                                                              vmul_n_f32(vsub_f32(v36, v34), v40));
  focusEarthPoint->fields.changedUiRootPosition.fields.z = v35 + (float)((float)(v37 - v35) * v40);
  if ( !v4->fields.isStartRotateBtn )
  {
    this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v4->fields.that;
    if ( !this )
      goto LABEL_48;
    if ( mNow < this->fields.root_pos_to.fields.y )
    {
      v4->fields.isStartRotateBtn = 1;
      this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)BlankEarth__get_TerminalListTop(
                                                                 (BlankEarth_o *)this,
                                                                 method);
      if ( !this )
        goto LABEL_48;
      this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)ScrTerminalListTop__IsPlanetEarthActive(
                                                                 (ScrTerminalListTop_o *)this,
                                                                 0);
      if ( !v4->fields.that )
        goto LABEL_48;
      v41 = (char)this;
      this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)BlankEarth__get_TerminalListTop(v4->fields.that, method);
      v42 = v4->fields.that;
      if ( !v42 || !this )
        goto LABEL_48;
      earthBtnMoveSpeedTime = v42->fields.earthBtnMoveSpeedTime;
      if ( (v41 & 1) != 0 )
      {
        ScrTerminalListTop__FrameInOutPlanetEarthRotateBtn((ScrTerminalListTop_o *)this, earthBtnMoveSpeedTime, 1, 0, 0);
      }
      else
      {
        ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)this, earthBtnMoveSpeedTime, 1, 0, 0);
        this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v4->fields.that;
        if ( !this )
          goto LABEL_48;
        this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)BlankEarth__get_TerminalListTop(
                                                                   (BlankEarth_o *)this,
                                                                   method);
        if ( !this )
          goto LABEL_48;
        ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)this, 1, 0, 0);
      }
    }
  }
  v44 = v4->fields.that;
  if ( !v44 )
    goto LABEL_48;
  v45 = v44->fields.focusEarthPoint;
  if ( !v45 )
    goto LABEL_48;
  if ( v45->fields._spotOnType_k__BackingField == 1 )
  {
    spotList = v4->fields.spotList;
    if ( !spotList )
      goto LABEL_48;
    max_length = spotList->max_length;
    v48 = fminf(mNow, 1.0);
    v49 = mNow < 0.0 ? 0.0 : v48;
    if ( max_length >= 1 )
    {
      v50 = 0;
      while ( 1 )
      {
        if ( v50 >= max_length )
          sub_1C93D34(this);
        this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)spotList->m_Items[v50];
        if ( !this )
          break;
        v51 = v4->fields.that;
        if ( !v51 )
          break;
        BlankEarthPoint__SetDispUIDotRange(
          (BlankEarthPoint_o *)this,
          *((float *)this + 66) + (float)(v49 * (float)(v51->fields.object1DispSpotUISpriteDot - *((float *)this + 66))),
          *((float *)this + 67)
        + (float)(v49 * (float)(v51->fields.object1NoDispSpotUISpriteDot - *((float *)this + 67))),
          0);
        max_length = spotList->max_length;
        if ( (int)++v50 >= max_length )
          return;
      }
LABEL_48:
      sub_1C93D2C(this, method);
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
  __int64 v10; // x8
  struct BlankEarthPoint_array *spotList; // x20
  int max_length; // w8
  unsigned int v13; // w21

  v2 = this;
  if ( (byte_4D2D066 & 1) == 0 )
  {
    this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)sub_1C93AD4(&StringLiteral_20075/*"gevINFOBAR_BACK"*/);
    byte_4D2D066 = 1;
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
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)this->fields.focusEarthPoint;
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
    || (HutongGames_PlayMaker_Fsm__Event_67247360(
          (HutongGames_PlayMaker_Fsm_o *)this,
          (System_String_o *)StringLiteral_20075/*"gevINFOBAR_BACK"*/,
          0),
        (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v2->fields.that) == 0)
    || (v10 = *((_QWORD *)this + 26)) == 0 )
  {
LABEL_36:
    sub_1C93D2C(this, method);
  }
  if ( *(_DWORD *)(v10 + 308) == 1 )
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
        if ( v13 >= max_length )
          sub_1C93D34(this);
        this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)spotList->m_Items[v13];
        if ( !this )
          goto LABEL_36;
        BlankEarthPoint__SetDispUIDotRange((BlankEarthPoint_o *)this, *((float *)this + 66), *((float *)this + 67), 0);
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
  Il2CppObject *v5; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Action_o *finishCallback; // x1
  float time_5__2; // s0
  bool v20; // w21
  float v21; // s8
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x21
  Il2CppObject *_8__1; // x22
  System_Action_o *v31; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct TutorialCommunicateAdapter_o *adapter; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct TutorialCommunicateAdapter_o *afterActionAdapter; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Collections_IEnumerator_o *v52; // x0

  v2 = this;
  if ( (byte_4D2D079 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C93AD4(&Method_BlankEarth___c__DisplayClass118_0__CoCheckTutorial_g__OnFinish_0__);
    this = (BlankEarth__CoCheckTutorial_d__118_o *)sub_1C93AD4(&BlankEarth___c__DisplayClass118_0_TypeInfo);
    byte_4D2D079 = 1;
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
    v5 = (Il2CppObject *)sub_1C93D20(BlankEarth___c__DisplayClass118_0_TypeInfo);
    System_Object___ctor(v5, 0);
    v2->fields.__8__1 = (struct BlankEarth___c__DisplayClass118_0_o *)v5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.__8__1, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    this = (BlankEarth__CoCheckTutorial_d__118_o *)v2->fields.__8__1;
    if ( !this )
LABEL_19:
      sub_1C93D2C(this, method);
    finishCallback = v2->fields.finishCallback;
    *(_QWORD *)&this->fields.__1__state = finishCallback;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)finishCallback, v12, v13, v14, v15, v16, v17);
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
    p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
    sub_1C93A78(p__2__current, 0, v23, v24, v25, v26, v27, v28);
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    return v20;
  }
LABEL_11:
  this = (BlankEarth__CoCheckTutorial_d__118_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0);
  v29 = sub_1C93D20(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v29, 0);
  if ( !v29 )
    goto LABEL_19;
  *(_DWORD *)(v29 + 20) = 83;
  _8__1 = (Il2CppObject *)v2->fields.__8__1;
  v31 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v31, _8__1, Method_BlankEarth___c__DisplayClass118_0__CoCheckTutorial_g__OnFinish_0__, 0);
  *(_QWORD *)(v29 + 32) = v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v29 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
  adapter = v2->fields.adapter;
  *(_QWORD *)(v29 + 56) = adapter;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v29 + 56), (int32_t)adapter, v39, v40, v41, v42, v43, v44);
  afterActionAdapter = v2->fields.afterActionAdapter;
  *(_QWORD *)(v29 + 64) = afterActionAdapter;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v29 + 64), (int32_t)afterActionAdapter, v46, v47, v48, v49, v50, v51);
  if ( !_4__this )
    goto LABEL_19;
  if ( BlankEarth__IsPlanetEarth(_4__this, 0) )
    *(_DWORD *)(v29 + 20) = 108;
  v52 = EventTutorialMaster__CoroutineCheckTutorial((EventTutorialMaster_EventTutorialArgs_o *)v29, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)_4__this, v52, 0);
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BlankEarth__CoCheckTutorial_d__118_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    this->fields._time_5__2 = 0.0;
  }
  if ( !_4__this )
    sub_1C93D2C(0, method);
  if ( BlankEarth__IsJustState(_4__this, this->fields.state, 0) )
  {
    time_5__2 = this->fields._time_5__2;
    this->fields._time_5__2 = time_5__2 + UnityEngine_Time__get_deltaTime(0);
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p__2__current, 0, v7, v8, v9, v10, v11, v12);
    *((_DWORD *)p__2__current - 2) = 1;
    return 1;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BlankEarth__CoStandByChangeState_d__120_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2D077 & 1) == 0 )
  {
    sub_1C93AD4(&BlankEarth___c_TypeInfo);
    byte_4D2D077 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BlankEarth___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BlankEarth___c_TypeInfo->static_fields->__9 = (struct BlankEarth___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BlankEarth___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, 0);
  BlankEarthPoint__UpdateDisp(x, 1, method);
}


void BlankEarth___c___UpdateSpotDisp_b__142_1(BlankEarth___c_o *this, BlankEarthPoint_o *x, const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  if ( !x )
    sub_1C93D2C(this, 0);
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

  if ( (byte_4D2D078 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D2D078 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}