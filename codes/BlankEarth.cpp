void __fastcall BlankEarth___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  struct BlankEarth_StaticFields *static_fields; // x8
  int32_t v6; // w1
  struct BlankEarth_StaticFields *v7; // x0

  if ( (byte_49B783C & 1) == 0 )
  {
    sub_1B4CF90(&BlankEarth_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_17022/*"blankEarthRotateKey"*/, v4);
    byte_49B783C = 1;
  }
  static_fields = BlankEarth_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SOUTH_POLE_ROTATE.fields.x = 0x4292000041F80000LL;
  static_fields->SOUTH_POLE_ROTATE.fields.z = 60.0;
  v6 = StringLiteral_17022/*"blankEarthRotateKey"*/;
  v7 = BlankEarth_TypeInfo->static_fields;
  v7->BLANK_EARTH_ROTATE_KEY = (struct System_String_o *)StringLiteral_17022/*"blankEarthRotateKey"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v7->BLANK_EARTH_ROTATE_KEY, v6, v2, v3);
  *(_QWORD *)&BlankEarth_TypeInfo->static_fields->EARTH_DISP_SPOT_UI_SPRITE_DOT = 0x3E19999A3E99999ALL;
}


void __fastcall BlankEarth___ctor(BlankEarth_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_49B783B & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16571/*"ar223"*/, method);
    byte_49B783B = 1;
  }
  *(_OWORD *)&this->fields.greenwichOffset = xmmword_BAAD80;
  *(_OWORD *)&this->fields.zoomOutSpdTime = xmmword_BAABE0;
  *(_OWORD *)&this->fields.earthRadius = xmmword_BAAA60;
  v5 = StringLiteral_16571/*"ar223"*/;
  this->fields.startupSeName = (struct System_String_o *)StringLiteral_16571/*"ar223"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.startupSeName, v5, v2, v3);
  *(_QWORD *)&this->fields.zoomInEasingType = 0x300000003LL;
  *(_OWORD *)&this->fields.firstAnimTime = xmmword_BAAF90;
  this->fields.btnSpeedRate = 3.5;
  *(_OWORD *)&this->fields.zoomInPos.fields.y = xmmword_BA9B60;
  *(_QWORD *)&this->fields.adjustEarthScale.fields.z = 0x3E8000003F400000LL;
  this->fields.startupEasingType = 2;
  *(_QWORD *)&this->fields.object1DispSpotUISpriteDot = 0x3ECCCCCD3F266666LL;
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
  struct CStateManager_BlankEarth__o **p_mFSM; // x20
  CStateManager_T__o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v17; // x22
  UnityEngine_GameObject_o *earthRoot; // x0
  CStateManager_T__o *v19; // x21
  Il2CppObject *v20; // x22
  CStateManager_T__o *v21; // x21
  Il2CppObject *v22; // x22
  CStateManager_T__o *v23; // x21
  Il2CppObject *v24; // x22
  CStateManager_T__o *v25; // x21
  Il2CppObject *v26; // x22
  CStateManager_T__o *v27; // x21
  Il2CppObject *v28; // x22
  CStateManager_T__o *v29; // x20
  Il2CppObject *v30; // x21
  const MethodInfo *v31; // x2

  if ( (byte_49B781A & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_BlankEarth___ctor__, method);
    sub_1B4CF90(&Method_CStateManager_BlankEarth__add__, v3);
    sub_1B4CF90(&CStateManager_BlankEarth__TypeInfo, v4);
    sub_1B4CF90(&BlankEarth_StateMain_TypeInfo, v5);
    sub_1B4CF90(&BlankEarth_StateNone_TypeInfo, v6);
    sub_1B4CF90(&BlankEarth_StateQAARotate_TypeInfo, v7);
    sub_1B4CF90(&BlankEarth_StateShortcutRotate_TypeInfo, v8);
    sub_1B4CF90(&BlankEarth_StateStartup_TypeInfo, v9);
    sub_1B4CF90(&BlankEarth_StateZoomIn_TypeInfo, v10);
    sub_1B4CF90(&BlankEarth_StateZoomOut_TypeInfo, v11);
    byte_49B781A = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v13 = (CStateManager_T__o *)sub_1B4D1DC(CStateManager_BlankEarth__TypeInfo);
    CStateManager_object____ctor(
      v13,
      (Il2CppObject *)this,
      7,
      (const MethodInfo_312D7A4 *)Method_CStateManager_BlankEarth___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarth__o *)v13;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v13, v14, v15);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v17 = (Il2CppObject *)sub_1B4D1DC(BlankEarth_StateNone_TypeInfo);
    System_Object___ctor(v17, 0LL);
    if ( !mFSM )
      goto LABEL_15;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v17,
      (const MethodInfo_312D84C *)Method_CStateManager_BlankEarth__add__);
    v19 = (CStateManager_T__o *)*p_mFSM;
    v20 = (Il2CppObject *)sub_1B4D1DC(BlankEarth_StateStartup_TypeInfo);
    System_Object___ctor(v20, 0LL);
    if ( !v19 )
      goto LABEL_15;
    CStateManager_object___add(
      v19,
      1,
      (IState_T__o *)v20,
      (const MethodInfo_312D84C *)Method_CStateManager_BlankEarth__add__);
    v21 = (CStateManager_T__o *)*p_mFSM;
    v22 = (Il2CppObject *)sub_1B4D1DC(BlankEarth_StateMain_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !v21 )
      goto LABEL_15;
    CStateManager_object___add(
      v21,
      2,
      (IState_T__o *)v22,
      (const MethodInfo_312D84C *)Method_CStateManager_BlankEarth__add__);
    v23 = (CStateManager_T__o *)*p_mFSM;
    v24 = (Il2CppObject *)sub_1B4D1DC(BlankEarth_StateZoomIn_TypeInfo);
    System_Object___ctor(v24, 0LL);
    if ( !v23 )
      goto LABEL_15;
    CStateManager_object___add(
      v23,
      3,
      (IState_T__o *)v24,
      (const MethodInfo_312D84C *)Method_CStateManager_BlankEarth__add__);
    v25 = (CStateManager_T__o *)*p_mFSM;
    v26 = (Il2CppObject *)sub_1B4D1DC(BlankEarth_StateZoomOut_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_15;
    CStateManager_object___add(
      v25,
      4,
      (IState_T__o *)v26,
      (const MethodInfo_312D84C *)Method_CStateManager_BlankEarth__add__);
    v27 = (CStateManager_T__o *)*p_mFSM;
    v28 = (Il2CppObject *)sub_1B4D1DC(BlankEarth_StateQAARotate_TypeInfo);
    System_Object___ctor(v28, 0LL);
    if ( !v27
      || (CStateManager_object___add(
            v27,
            5,
            (IState_T__o *)v28,
            (const MethodInfo_312D84C *)Method_CStateManager_BlankEarth__add__),
          v29 = (CStateManager_T__o *)*p_mFSM,
          v30 = (Il2CppObject *)sub_1B4D1DC(BlankEarth_StateShortcutRotate_TypeInfo),
          System_Object___ctor(v30, 0LL),
          !v29) )
    {
LABEL_15:
      sub_1B4D1EC(earthRoot, method);
    }
    CStateManager_object___add(
      v29,
      6,
      (IState_T__o *)v30,
      (const MethodInfo_312D84C *)Method_CStateManager_BlankEarth__add__);
    BlankEarth__SetState(this, 0, v31);
  }
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_15;
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !earthRoot )
    goto LABEL_15;
  this->fields.mRootQua = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)earthRoot, 0LL);
}


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
  float totalAngle; // s0
  float maxAngle; // s2
  float v30; // s1
  float v31; // s1
  float v32; // s2
  float v33; // s0
  BlankEarth_o *v34; // x22
  float v35; // s8
  float v36; // s9
  float z; // s10
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_49B781E & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_1B4CF90(&CTouch_TypeInfo, that);
    byte_49B781E = 1;
  }
  if ( !that )
LABEL_67:
    sub_1B4D1EC(this, that);
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
    if ( CTouch__isDrag(0LL) )
    {
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_49B7896 )
      {
        sub_1B4CF90(&CTouch_TypeInfo, that);
        byte_49B7896 = 1;
      }
      v11 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
      }
      x = v11->static_fields->mScrPosDelta.fields.x;
      if ( !byte_49B7897 )
      {
        sub_1B4CF90(&CTouch_TypeInfo, that);
        v11 = CTouch_TypeInfo;
        byte_49B7897 = 1;
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
      if ( !byte_49B7896 )
      {
        sub_1B4CF90(&CTouch_TypeInfo, that);
        byte_49B7896 = 1;
      }
      v15 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v15 = CTouch_TypeInfo;
      }
      y = v15->static_fields->mScrPosDelta.fields.y;
      if ( !byte_49B7897 )
      {
        sub_1B4CF90(&CTouch_TypeInfo, that);
        v15 = CTouch_TypeInfo;
        byte_49B7897 = 1;
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
    if ( !byte_49B5365 )
    {
      sub_1B4CF90(&UnityEngine_Mathf_TypeInfo, that);
      byte_49B5365 = 1;
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
      v25 = v24 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      if ( fabsf(v25) < 0.004 )
        v25 = 0.0;
      *inertialSpeedX = v25;
      v26 = *inertialSpeedY;
      v27 = v26 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      *inertialSpeedY = v27;
      if ( fabsf(v27) < 0.004 )
        *inertialSpeedY = 0.0;
    }
  }
  totalAngle = v8->fields.totalAngle;
  maxAngle = v8->fields.maxAngle;
  v30 = totalAngle + *inertialSpeedY;
  if ( maxAngle < v30 )
  {
    v31 = maxAngle - totalAngle;
    *inertialSpeedY = maxAngle - totalAngle;
    totalAngle = v8->fields.totalAngle;
    maxAngle = v8->fields.maxAngle;
    v30 = totalAngle + v31;
  }
  v32 = -maxAngle;
  if ( v30 < v32 )
  {
    v33 = v32 - totalAngle;
    *inertialSpeedY = v33;
    v30 = v8->fields.totalAngle + v33;
  }
  v8->fields.totalAngle = v30;
  this = (BlankEarth_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_67;
  this = (BlankEarth_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !that->fields.blankEarth )
    goto LABEL_67;
  v34 = this;
  this = (BlankEarth_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)that->fields.blankEarth, 0LL);
  if ( !this )
    goto LABEL_67;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  v35 = position.fields.x;
  v36 = position.fields.y;
  z = position.fields.z;
  if ( !byte_49B5368 )
  {
    this = (BlankEarth_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, that);
    byte_49B5368 = 1;
  }
  if ( !v34 )
    goto LABEL_67;
  v39.fields.y = v36;
  v39.fields.x = v35;
  v39.fields.z = z;
  UnityEngine_Transform__RotateAround(
    (UnityEngine_Transform_o *)v34,
    v39,
    UnityEngine_Vector3_TypeInfo->static_fields->rightVector,
    -*inertialSpeedY,
    0LL);
  this = (BlankEarth_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_67;
  v40.fields.y = *inertialSpeedX;
  v40.fields.x = 0.0;
  v40.fields.z = 0.0;
  UnityEngine_Transform__Rotate_68827268((UnityEngine_Transform_o *)this, v40, 0LL);
}


UnityEngine_Vector3_o __fastcall BlankEarth__CalcPosFromLatLong(
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


void __fastcall BlankEarth__CheckTutorial(
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
    UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
  }
  else
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BlankEarth__CoCheckTutorial(
        BlankEarth_o *this,
        TutorialCommunicateAdapter_o *adapter,
        TutorialCommunicateAdapter_o *afterActionAdapter,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_49B781F & 1) == 0 )
  {
    sub_1B4CF90(&BlankEarth__CoCheckTutorial_d__92_TypeInfo, adapter);
    byte_49B781F = 1;
  }
  v9 = sub_1B4D1DC(BlankEarth__CoCheckTutorial_d__92_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 56) = adapter;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 56), (int32_t)adapter, v12, v13);
  *(_QWORD *)(v9 + 64) = afterActionAdapter;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 64), (int32_t)afterActionAdapter, v14, v15);
  *(_QWORD *)(v9 + 32) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 32), (int32_t)finishCallback, v16, v17);
  return (System_Collections_IEnumerator_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BlankEarth__CoStandByChangeState(
        BlankEarth_o *this,
        int32_t state,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_49B7820 & 1) == 0 )
  {
    sub_1B4CF90(&BlankEarth__CoStandByChangeState_d__94_TypeInfo, *(_QWORD *)&state);
    byte_49B7820 = 1;
  }
  v7 = sub_1B4D1DC(BlankEarth__CoStandByChangeState_d__94_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = state;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Quaternion_o __fastcall BlankEarth__ConvertLatLongToSafePointQuaternion(
        BlankEarth_o *this,
        UnityEngine_Vector2_o latLongVector,
        const MethodInfo *method)
{
  float maxAngle; // s2
  float v5; // s5
  float v6; // s0
  float v7; // s1
  float v8; // s8
  float earthRadius; // s9
  float v10; // s10
  float v11; // s11
  __int64 v12; // x1
  float v13; // s8
  float v14; // s12
  float v15; // s12
  float v16; // s9
  float v17; // s8
  float v18; // s2
  float x; // s0
  float y; // s1
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v23; // s0
  float v24; // s1
  float v25; // s2
  float v26; // s3
  float cosx; // [xsp+8h] [xbp-48h] BYREF
  float sinx; // [xsp+Ch] [xbp-44h] BYREF
  float v29; // [xsp+18h] [xbp-38h] BYREF
  float v30; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  maxAngle = this->fields.maxAngle;
  v5 = -maxAngle;
  if ( maxAngle >= latLongVector.fields.x )
    maxAngle = latLongVector.fields.x;
  if ( latLongVector.fields.x < v5 )
    v6 = v5;
  else
    v6 = maxAngle;
  v8 = (float)(v7 + this->fields.greenwichOffset) * 0.017453;
  sincosf(v6 * 0.017453, &sinx, &cosx);
  earthRadius = this->fields.earthRadius;
  v10 = sinx;
  v11 = (float)(earthRadius + 0.0) * cosx;
  sincosf(v8, &v30, &v29);
  v14 = v29;
  v13 = v30;
  if ( !byte_49B5364 )
  {
    sub_1B4CF90(&System_Math_TypeInfo, v12);
    byte_49B5364 = 1;
  }
  v15 = v14 * v11;
  v16 = earthRadius * v10;
  v17 = v13 * v11;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v18 = sqrtf((float)(v17 * v17) + (float)((float)(v16 * v16) + (float)(v15 * v15)));
  if ( v18 <= 0.00001 )
  {
    if ( !byte_49B5361 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v12);
      byte_49B5361 = 1;
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
  v31.fields.x = -x;
  v31.fields.y = -y;
  v31.fields.z = -z;
  v32 = UnityEngine_Quaternion__LookRotation_68742820(v31, 0LL);
  *(UnityEngine_Quaternion_o *)&v23 = UnityEngine_Quaternion__Inverse(v32, 0LL);
  result.fields.w = v26;
  result.fields.z = v25;
  result.fields.y = v24;
  result.fields.x = v23;
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *v16; // x21
  __int64 v17; // x1
  System_String_o *transform; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x22
  System_String_o *v21; // x0
  UnityEngine_Transform_o *blankEarth; // x8
  UnityEngine_Transform_o *v23; // x20
  int v24; // s0
  const MethodInfo *v27; // x2

  if ( (byte_49B7828 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___, obj);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v14);
    sub_1B4CF90(&StringLiteral_3188/*"BlankEarthGimmick_"*/, v15);
    byte_49B7828 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__Instantiate_object_(
          (Il2CppObject *)obj,
          (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_34075384((UnityEngine_GameObject_o *)v16, this->fields.earthGimmickRoot, 0LL);
  if ( !byte_49B5366 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49B5366 = 1;
  }
  GameObjectExtensions__SetLocalScale(
    (UnityEngine_GameObject_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  if ( !v16 )
    goto LABEL_14;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  if ( !gimmickEnt )
    goto LABEL_14;
  v20 = (UnityEngine_Object_o *)transform;
  v21 = System_Int32__ToString((int)gimmickEnt + 16, 0LL);
  transform = System_String__Concat_61093468((System_String_o *)StringLiteral_3188/*"BlankEarthGimmick_"*/, v21, 0LL);
  if ( !v20 )
    goto LABEL_14;
  UnityEngine_Object__set_name(v20, transform, 0LL);
  GameObjectExtensions__SetLocalPosition_34069660((UnityEngine_GameObject_o *)v16, x, y, z, 0LL);
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  blankEarth = this->fields.blankEarth;
  if ( !blankEarth
    || (v23 = (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_position(blankEarth, 0LL),
        !v23)
    || (UnityEngine_Transform__LookAt_68828348(v23, *(UnityEngine_Vector3_o *)&v24, 0LL),
        (transform = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v16,
                                          (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___)) == 0LL) )
  {
LABEL_14:
    sub_1B4D1EC(transform, v19);
  }
  BlankEarthGimmickComponent__Setup((BlankEarthGimmickComponent_o *)transform, gimmickEnt, v27);
}


BlankEarthPoint_o *__fastcall BlankEarth__CreateSpot(
        BlankEarth_o *this,
        UnityEngine_GameObject_o *spotObj,
        BlankEarthSpotEntity_o *spotEnt,
        float x,
        float y,
        float z,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  TerminalSceneComponent_c *v18; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v20; // x1
  __int64 Component_object; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  UnityEngine_GameObject_o *v27; // x22
  UnityEngine_Object_o *v28; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  int32_t onObjectType; // w8
  float v31; // s11
  float v32; // s12
  float v33; // s13
  UnityEngine_GameObject_o *klass; // x23
  Il2CppObject *v35; // x24
  __int64 v36; // x1
  UnityEngine_Object_o *transform; // x23
  System_String_o *v38; // x0
  const MethodInfo *v39; // x5
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B782D & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___, spotObj);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___, v13);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v15);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v16);
    sub_1B4CF90(&StringLiteral_3189/*"BlankEarthPoint_"*/, v17);
    byte_49B782D = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, spotObj);
    byte_49B5933 = 1;
  }
  v18 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v18 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v18->static_fields->mInstance;
  v20 = *p_mInstance;
  this->fields.mTerminalScene = *p_mInstance;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.mTerminalScene, (int32_t)v20, (int32_t)spotEnt, method);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_39;
  mTerminalList = mTerminalScene->fields.mTerminalList;
  this->fields.mTerminalList = mTerminalList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.mTerminalList, (int32_t)mTerminalList, v23, v24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                (Il2CppObject *)spotObj,
                                (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_39;
  v27 = (UnityEngine_GameObject_o *)Component_object;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Component_object,
                                (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
  v28 = (UnityEngine_Object_o *)Component_object;
  if ( !byte_49B5361 )
  {
    Component_object = sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v22);
    byte_49B5361 = 1;
  }
  if ( !spotEnt )
    goto LABEL_39;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  onObjectType = spotEnt->fields.onObjectType;
  v31 = static_fields->zeroVector.fields.x;
  v32 = static_fields->zeroVector.fields.y;
  v33 = static_fields->zeroVector.fields.z;
  if ( onObjectType == 1 )
  {
    Component_object = (__int64)this->fields.otherObjectRoot;
    if ( !Component_object )
      goto LABEL_39;
    v35 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)Component_object,
            (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0LL, 0LL);
    klass = 0LL;
    if ( (Component_object & 1) != 0 )
    {
      if ( !v35 )
        goto LABEL_39;
      klass = (UnityEngine_GameObject_o *)v35[2].klass;
      if ( !klass )
        goto LABEL_39;
      Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v35[2].klass, 0LL);
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
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)Component_object, 0LL);
      v31 = position.fields.x;
      v32 = position.fields.y;
      v33 = position.fields.z;
      goto LABEL_29;
    }
    klass = 0LL;
  }
LABEL_29:
  GameObjectExtensions__SetParent_34075384(v27, klass, 0LL);
  if ( !byte_49B5366 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v36);
    byte_49B5366 = 1;
  }
  GameObjectExtensions__SetLocalScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v27, 0LL);
  v38 = System_Int32__ToString((int)spotEnt + 16, 0LL);
  Component_object = (__int64)System_String__Concat_61093468((System_String_o *)StringLiteral_3189/*"BlankEarthPoint_"*/, v38, 0LL);
  if ( !transform )
    goto LABEL_39;
  UnityEngine_Object__set_name(transform, (System_String_o *)Component_object, 0LL);
  GameObjectExtensions__SetLocalPosition_34069660(v27, x, y, z, 0LL);
  Component_object = (__int64)UnityEngine_GameObject__get_transform(v27, 0LL);
  if ( !Component_object )
    goto LABEL_39;
  v42.fields.x = v31;
  v42.fields.y = v32;
  v42.fields.z = v33;
  UnityEngine_Transform__LookAt_68828348((UnityEngine_Transform_o *)Component_object, v42, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
  if ( (Component_object & 1) != 0 )
  {
    if ( v28 )
    {
      BlankEarthPoint__SetEarthObj(
        (BlankEarthPoint_o *)v28,
        spotEnt,
        this,
        this->fields.mEarthCamera,
        this->fields.earthRoot,
        v39);
      return (BlankEarthPoint_o *)v28;
    }
LABEL_39:
    sub_1B4D1EC(Component_object, v22);
  }
  return (BlankEarthPoint_o *)v28;
}


void __fastcall BlankEarth__ExecuteAfterStartUpScaling(
        BlankEarth_o *this,
        System_Action_o *startupScalingEndCallback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( BlankEarth__GetState(this, (const MethodInfo *)startupScalingEndCallback) == 1 )
  {
    this->fields.scalingEndCallback = startupScalingEndCallback;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.scalingEndCallback, (int32_t)startupScalingEndCallback, v5, v6);
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
  float maxAngle; // s0
  float x; // s1
  float v14; // s2

  if ( spotEnt && !spotEnt->fields.onObjectType )
  {
    *(UnityEngine_Quaternion_o *)&v6 = BlankEarth__ConvertLatLongToSafePointQuaternion(
                                         this,
                                         *(UnityEngine_Vector2_o *)&spotEnt->fields.x,
                                         (const MethodInfo *)spotEnt);
    blankEarth = this->fields.blankEarth;
    if ( !blankEarth )
      sub_1B4D1EC(0LL, v5);
    UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v6, 0LL);
    maxAngle = this->fields.maxAngle;
    x = spotEnt->fields.x;
    v14 = -maxAngle;
    if ( maxAngle >= x )
      maxAngle = spotEnt->fields.x;
    if ( x < v14 )
      maxAngle = v14;
    this->fields.totalAngle = maxAngle;
    BlankEarth__SaveEarthRotate(this, v11);
  }
}


UnityEngine_Vector3_o __fastcall BlankEarth__GetDefaultEarthScale(BlankEarth_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_49B5366 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, method);
    byte_49B5366 = 1;
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


// local variable allocation has failed, the output may be wrong!
BlankEarthGimmickComponent_o *__fastcall BlankEarth__GetEarthGimmick(
        BlankEarth_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  BlankEarthGimmickComponent_o *result; // x0
  UnityEngine_Transform_o *transform; // x19
  System_String_o *v8; // x0
  UnityEngine_Object_o *v9; // x19
  bool v10; // w8
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = gimmickId;
  if ( (byte_49B7824 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___, *(_QWORD *)&gimmickId);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_3188/*"BlankEarthGimmick_"*/, v5);
    byte_49B7824 = 1;
  }
  result = (BlankEarthGimmickComponent_o *)this->fields.earthGimmickRoot;
  if ( !result )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0LL);
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  result = (BlankEarthGimmickComponent_o *)System_String__Concat_61093468(
                                             (System_String_o *)StringLiteral_3188/*"BlankEarthGimmick_"*/,
                                             v8,
                                             0LL);
  if ( !transform )
    goto LABEL_12;
  v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)result, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  result = 0LL;
  if ( v10 )
  {
    if ( v9 )
    {
      result = (BlankEarthGimmickComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      if ( result )
        return (BlankEarthGimmickComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)result,
                                                 (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    }
LABEL_12:
    sub_1B4D1EC(result, *(_QWORD *)&gimmickId);
  }
  return result;
}


System_String_o *__fastcall BlankEarth__GetGimmickPrefabName(
        BlankEarthGimmickEntity_o *gimmick,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BlankEarthGimmickEntity_o *v5; // x19
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v5 = gimmick;
  if ( (byte_49B7827 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, method);
    gimmick = (BlankEarthGimmickEntity_o *)sub_1B4CF90(&StringLiteral_5734/*"EarthGimmick_{0:00000}"*/, v6);
    byte_49B7827 = 1;
  }
  if ( !v5 )
    sub_1B4D1EC(gimmick, method);
  objectId = v5->fields.objectId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_5734/*"EarthGimmick_{0:00000}"*/, v7, 0LL);
}


System_String_o *__fastcall BlankEarth__GetObjPrefabName(BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BlankEarthSpotEntity_o *v5; // x19
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v5 = spot;
  if ( (byte_49B782C & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, method);
    spot = (BlankEarthSpotEntity_o *)sub_1B4CF90(&StringLiteral_5736/*"EarthPoint_{0:00000}"*/, v6);
    byte_49B782C = 1;
  }
  if ( !v5 )
    sub_1B4D1EC(spot, method);
  objectId = v5->fields.objectId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_5736/*"EarthPoint_{0:00000}"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthOtherObject_o *__fastcall BlankEarth__GetOtherObject(
        BlankEarth_o *this,
        int32_t objId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x0
  UnityEngine_GameObject_o *earthRoot; // x19
  int v15; // w20
  System_String_o *BlankEarthOtherObjectFromScript; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  UnityEngine_Object_o *v19; // x19

  if ( (byte_49B7823 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___, *(_QWORD *)&objId);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__, v6);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___, v7);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v8);
    sub_1B4CF90(&StringLiteral_15813/*"_"*/, v9);
    sub_1B4CF90(&StringLiteral_683/*"(Clone)"*/, v10);
    byte_49B7823 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             objId,
             (const MethodInfo_319D99C *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
  if ( Entity )
  {
    earthRoot = this->fields.earthRoot;
    v15 = (int)Entity;
    BlankEarthOtherObjectFromScript = BlankEarthGimmickEntity__GetBlankEarthOtherObjectFromScript(
                                        (BlankEarthGimmickEntity_o *)Entity,
                                        0LL);
    v17 = System_Int32__ToString(v15 + 28, 0LL);
    v18 = System_String__Concat_61133720(
            BlankEarthOtherObjectFromScript,
            (System_String_o *)StringLiteral_15813/*"_"*/,
            v17,
            (System_String_o *)StringLiteral_683/*"(Clone)"*/,
            0LL);
    v19 = (UnityEngine_Object_o *)GameObjectExtensions__Find(earthRoot, v18, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( v19 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)v19,
                                                                        0LL);
        if ( Master_object )
          return (BlankEarthOtherObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)Master_object,
                                              (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      }
LABEL_14:
      sub_1B4D1EC(Master_object, v12);
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
BlankEarthPoint_o *__fastcall BlankEarth__GetPoint(
        BlankEarth_o *this,
        int32_t spotId,
        int32_t onPointType,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *otherObjectRoot; // x0
  void *Component_object; // x19
  UnityEngine_GameObject_o *earthSpotRoot; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  UnityEngine_Object_o *v14; // x20
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
  if ( (byte_49B7822 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___, *(_QWORD *)&spotId);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_3189/*"BlankEarthPoint_"*/, v8);
    byte_49B7822 = 1;
  }
  otherObjectRoot = this->fields.otherObjectRoot;
  if ( otherObjectRoot )
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         otherObjectRoot,
                         (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
  else
    Component_object = 0LL;
  if ( onPointType == 1 )
  {
    if ( Component_object )
    {
      result = (BlankEarthPoint_o *)*((_QWORD *)Component_object + 4);
      if ( !result )
        goto LABEL_34;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0LL);
      v19 = System_Int32__ToString((int32_t)&v23, 0LL);
      result = (BlankEarthPoint_o *)System_String__Concat_61093468((System_String_o *)StringLiteral_3189/*"BlankEarthPoint_"*/, v19, 0LL);
      if ( !transform )
        goto LABEL_34;
      Component_object = UnityEngine_Transform__Find(transform, (System_String_o *)result, 0LL);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    result = 0LL;
    if ( v20 )
    {
      if ( !Component_object )
        goto LABEL_34;
      v21 = (UnityEngine_Component_o *)Component_object;
LABEL_31:
      result = (BlankEarthPoint_o *)UnityEngine_Component__get_gameObject(v21, 0LL);
      if ( result )
        return (BlankEarthPoint_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)result,
                                      (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
LABEL_34:
      sub_1B4D1EC(result, *(_QWORD *)&spotId);
    }
  }
  else
  {
    if ( onPointType )
      return 0LL;
    earthSpotRoot = this->fields.earthSpotRoot;
    v12 = System_Int32__ToString((int32_t)&v23, 0LL);
    v13 = System_String__Concat_61093468((System_String_o *)StringLiteral_3189/*"BlankEarthPoint_"*/, v12, 0LL);
    v14 = (UnityEngine_Object_o *)GameObjectExtensions__Find(earthSpotRoot, v13, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v14, 0LL, 0LL) )
    {
      if ( Component_object )
      {
        result = (BlankEarthPoint_o *)*((_QWORD *)Component_object + 4);
        if ( !result )
          goto LABEL_34;
        v16 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0LL);
        v17 = System_Int32__ToString((int32_t)&v23, 0LL);
        result = (BlankEarthPoint_o *)System_String__Concat_61093468((System_String_o *)StringLiteral_3189/*"BlankEarthPoint_"*/, v17, 0LL);
        if ( !v16 )
          goto LABEL_34;
        v14 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v16, (System_String_o *)result, 0LL);
      }
      else
      {
        v14 = 0LL;
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
    result = 0LL;
    if ( v22 )
    {
      if ( !v14 )
        goto LABEL_34;
      v21 = (UnityEngine_Component_o *)v14;
      goto LABEL_31;
    }
  }
  return result;
}


float __fastcall BlankEarth__GetSafeLatitude(BlankEarth_o *this, float latitudeDegree, const MethodInfo *method)
{
  float maxAngle; // s1
  float v4; // s2

  maxAngle = this->fields.maxAngle;
  v4 = -maxAngle;
  if ( maxAngle >= latitudeDegree )
    maxAngle = latitudeDegree;
  if ( v4 > latitudeDegree )
    return v4;
  else
    return maxAngle;
}


System_String_o *__fastcall BlankEarth__GetSpotPrefabName(BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BlankEarthSpotEntity_o *v5; // x19
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v5 = spot;
  if ( (byte_49B782B & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, method);
    spot = (BlankEarthSpotEntity_o *)sub_1B4CF90(&StringLiteral_5736/*"EarthPoint_{0:00000}"*/, v6);
    byte_49B782B = 1;
  }
  if ( !v5 )
    sub_1B4D1EC(spot, method);
  objectId = v5->fields.objectId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_5736/*"EarthPoint_{0:00000}"*/, v7, 0LL);
}


int32_t __fastcall BlankEarth__GetState(BlankEarth_o *this, const MethodInfo *method)
{
  BlankEarth_o *v2; // x19
  struct CStateManager_BlankEarth__o *mFSM; // x8

  v2 = this;
  if ( (byte_49B781C & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_1B4CF90(&Method_CStateManager_BlankEarth__getState__, method);
    byte_49B781C = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B4D1EC(this, method);
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
  System_String_o *String_68762736; // x0
  __int64 v5; // x1
  System_String_o *v6; // x21
  System_String_array *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  float v10; // s0
  float v11; // s8
  float v12; // s0
  float v13; // s9
  float v14; // s0
  BlankEarth_c *v15; // x0
  float *p_x; // x8
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49B7821 & 1) == 0 )
  {
    sub_1B4CF90(&BlankEarth_TypeInfo, method);
    byte_49B7821 = 1;
  }
  v3 = BlankEarth_TypeInfo;
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v3 = BlankEarth_TypeInfo;
  }
  String_68762736 = UnityEngine_PlayerPrefs__GetString_68762736(v3->static_fields->BLANK_EARTH_ROTATE_KEY, 0LL);
  if ( !String_68762736 )
    goto LABEL_17;
  v6 = String_68762736;
  v7 = System_String__Split(String_68762736, 0x2Cu, 0, 0LL);
  String_68762736 = (System_String_o *)System_String__IsNullOrEmpty(v6, 0LL);
  if ( ((unsigned __int8)String_68762736 & 1) != 0 )
    goto LABEL_13;
  if ( !v7 )
LABEL_17:
    sub_1B4D1EC(String_68762736, v5);
  if ( v7->max_length == 4 )
  {
    this->fields.totalAngle = System_Single__Parse(v7->m_Items[3], 0LL);
    if ( !v7->max_length
      || (v10 = System_Single__Parse(v7->m_Items[0], 0LL), v7->max_length <= 1)
      || (v11 = v10, v12 = System_Single__Parse(v7->m_Items[1], 0LL), v7->max_length <= 2) )
    {
      sub_1B4D1F4(v8, v9);
    }
    v13 = v12;
    v14 = System_Single__Parse(v7->m_Items[2], 0LL);
    goto LABEL_16;
  }
LABEL_13:
  this->fields.totalAngle = -this->fields.maxAngle;
  v15 = BlankEarth_TypeInfo;
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v15 = BlankEarth_TypeInfo;
  }
  p_x = &v15->static_fields->SOUTH_POLE_ROTATE.fields.x;
  v11 = *p_x;
  v13 = p_x[1];
  v14 = p_x[2];
LABEL_16:
  v21.fields.y = v13 * 0.017453;
  v21.fields.z = v14 * 0.017453;
  v21.fields.x = v11 * 0.017453;
  *(UnityEngine_Quaternion_o *)&v17 = UnityEngine_Quaternion__Internal_FromEulerRad(v21, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__OnPressRotateBtnX(BlankEarth_o *this, bool isLeft, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_49B7838 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BlankEarth_OnPressRotateBtnX__, isLeft);
    byte_49B7838 = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnX__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnX__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B4CFA8(Method_BlankEarth_OnPressRotateBtnX__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  this->fields.isLeft = isLeft;
  this->fields.isBtnTouchX = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__OnPressRotateBtnY(BlankEarth_o *this, bool isUp, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_49B7839 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BlankEarth_OnPressRotateBtnY__, isUp);
    byte_49B7839 = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnY__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnY__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B4CFA8(Method_BlankEarth_OnPressRotateBtnY__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
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
void __fastcall BlankEarth__PlayOtherObjectUniqueAnim(
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
  const MethodInfo *v13; // x4

  OtherObject = (UnityEngine_Object_o *)otherObjEnt;
  if ( (byte_49B7836 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, otherObjEnt);
    byte_49B7836 = 1;
  }
  if ( OtherObject )
    OtherObject = (UnityEngine_Object_o *)BlankEarth__GetOtherObject(
                                            this,
                                            OtherObject->fields.m_CachedPtr,
                                            *(const MethodInfo **)&animIndex);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(OtherObject, 0LL, 0LL);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !OtherObject )
      sub_1B4D1EC(v11, v12);
    BlankEarthOtherObject__PlayOtherObjUniqueAnim(
      (BlankEarthOtherObject_o *)OtherObject,
      animIndex,
      isQuick,
      finishCallback,
      v13);
  }
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
  UnityEngine_Object_o *Point; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4

  if ( (byte_49B7835 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, spot);
    byte_49B7835 = 1;
  }
  if ( !spot )
    goto LABEL_7;
  Point = (UnityEngine_Object_o *)BlankEarth__GetPoint(this, spot->fields.id, 0, (const MethodInfo *)isQuick);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality(Point, 0LL, 0LL);
  if ( !v12 )
  {
    if ( !Point )
      sub_1B4D1EC(v12, v13);
    BlankEarthPoint__PlaySpotUniqueAnim((BlankEarthPoint_o *)Point, animIndex, isQuick, finishCallback, v14);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(finishCallback, 0LL);
  }
}


void __fastcall BlankEarth__PutAllGimmick(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BlankEarthGimmickEntity_array *Master_object; // x0
  BlankEarthGimmickEntity_o *v5; // x1
  const MethodInfo *v6; // x2
  int max_length; // w8
  BlankEarthGimmickEntity_array *v8; // x20
  unsigned int v9; // w21

  if ( (byte_49B7825 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    byte_49B7825 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BlankEarthGimmickEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = BlankEarthGimmickMaster__GetAllGimmick((BlankEarthGimmickMaster_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_16;
  max_length = Master_object->max_length;
  v8 = Master_object;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1B4D1F4(Master_object, v5);
      v5 = v8->m_Items[v9];
      if ( !v5 )
        break;
      if ( !v5->fields.objectType )
        BlankEarth__PutGimmick(this, v5, v6);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_16:
    sub_1B4D1EC(Master_object, v5);
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
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *All; // x20
  System_Func_object__object__o *v13; // x21
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  System_Collections_Generic_IEnumerable_T__o *v15; // x0

  if ( (byte_49B7829 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_ExcludeNull_BlankEarthPoint___, *(_QWORD *)&beforeClearQuestId);
    sub_1B4CF90(&Method_BlankEarth_PutSpot__, v4);
    sub_1B4CF90(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v5);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___, v8);
    sub_1B4CF90(&System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo, v9);
    byte_49B7829 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1B4D1EC(0LL, v11);
  All = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__GetAll(
                                                               (BlankEarthSpotMaster_o *)Master_object,
                                                               0LL);
  v13 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo);
  System_Func_object__object____ctor(v13, (Il2CppObject *)this, Method_BlankEarth_PutSpot__, 0LL);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         All,
                                                         (System_Func_TSource__TResult__o *)v13,
                                                         (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
  v15 = BasicHelper__ExcludeNull_object_(
          v14,
          (const MethodInfo_2EECDE8 *)Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
  System_Linq_Enumerable__ToArray_object_(
    (System_Collections_Generic_IEnumerable_TSource__o *)v15,
    (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
}


void __fastcall BlankEarth__PutGimmick(
        BlankEarth_o *this,
        BlankEarthGimmickEntity_o *gimmick,
        const MethodInfo *method)
{
  BlankEarth_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  float z; // s9
  float v10; // s8
  float v11; // s10
  float v12; // s11
  float earthRadius; // s12
  float v14; // s8
  float v15; // s13
  AssetManager_o *v16; // x21
  const MethodInfo *v17; // x1
  AssetData_o *Asset_38352992; // x21
  Il2CppObject *Object_object__49169892; // x21
  const MethodInfo *v20; // x3
  float v21; // [xsp+8h] [xbp-68h] BYREF
  float v22; // [xsp+Ch] [xbp-64h] BYREF
  float cosx; // [xsp+48h] [xbp-28h] BYREF
  float sinx; // [xsp+4Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_49B7826 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, gimmick);
    sub_1B4CF90(&BlankEarth_TypeInfo, v5);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v6);
    sub_1B4CF90(&ScrTerminalListTop_TypeInfo, v7);
    this = (BlankEarth_o *)sub_1B4CF90(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    byte_49B7826 = 1;
  }
  if ( !gimmick )
    goto LABEL_15;
  z = gimmick->fields.z;
  v10 = (float)(gimmick->fields.y + v4->fields.greenwichOffset) * 0.017453;
  sincosf(gimmick->fields.x * 0.017453, &sinx, &cosx);
  v12 = cosx;
  v11 = sinx;
  earthRadius = v4->fields.earthRadius;
  sincosf(v10, &v22, &v21);
  v15 = v21;
  v14 = v22;
  this = (BlankEarth_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v16 = (AssetManager_o *)this;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v16 )
    goto LABEL_15;
  Asset_38352992 = AssetManager__GetAsset_38352992(
                     v16,
                     ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH,
                     0LL);
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
  this = (BlankEarth_o *)BlankEarth__GetGimmickPrefabName(gimmick, v17);
  if ( !Asset_38352992 )
LABEL_15:
    sub_1B4D1EC(this, gimmick);
  Object_object__49169892 = AssetData__GetObject_object__49169892(
                              Asset_38352992,
                              (System_String_o *)this,
                              (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49169892, 0LL, 0LL) )
    BlankEarth__CreateGimmick(
      v4,
      (UnityEngine_GameObject_o *)Object_object__49169892,
      gimmick,
      v15 * (float)(v12 * (float)(z + earthRadius)),
      v11 * earthRadius,
      v14 * (float)(v12 * (float)(z + earthRadius)),
      v20);
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
  __int64 v9; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v15; // x1
  AssetManager_o *v16; // x21
  int32_t onObjectType; // w8
  AssetData_o *v18; // x21
  float v19; // s8
  float v20; // s9
  float v21; // s10
  float earthRadius; // s11
  const MethodInfo *v23; // x1
  float v24; // s8
  float v25; // s12
  float v26; // s0
  System_String_o *v27; // x1
  UnityEngine_Object_o *otherObjectRoot; // x22
  UnityEngine_GameObject_o *v29; // x22
  const MethodInfo *v30; // x1
  Il2CppObject *Object_object__49169892; // x21
  const MethodInfo *v32; // x3
  float v34; // [xsp+8h] [xbp-68h] BYREF
  float v35; // [xsp+Ch] [xbp-64h] BYREF
  float cosx; // [xsp+18h] [xbp-58h] BYREF
  float sinx; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B782A & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, spot);
    sub_1B4CF90(&BlankEarth_TypeInfo, v5);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&ScrTerminalListTop_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    byte_49B782A = 1;
  }
  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, spot);
    byte_49B5361 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v16 = (AssetManager_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v16 )
    goto LABEL_31;
  Instance = (UnityEngine_GameObject_o *)AssetManager__GetAsset_38352992(
                                           v16,
                                           ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH,
                                           0LL);
  if ( !spot )
    goto LABEL_31;
  onObjectType = spot->fields.onObjectType;
  v18 = (AssetData_o *)Instance;
  if ( onObjectType == 1 )
  {
    otherObjectRoot = (UnityEngine_Object_o *)this->fields.otherObjectRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(otherObjectRoot, 0LL, 0LL) )
      return 0LL;
    Instance = this->fields.otherObjectRoot;
    if ( Instance )
    {
      Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               Instance,
                                               (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      if ( Instance )
      {
        v29 = Instance;
        LODWORD(x) = (unsigned int)GameObjectExtensions__GetLocalPosition(
                                     (UnityEngine_GameObject_o *)Instance[1].monitor,
                                     0LL);
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v29[1].monitor, 0LL);
        y = LocalPosition.fields.y;
        if ( !BlankEarth_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
        Instance = (UnityEngine_GameObject_o *)BlankEarth__GetObjPrefabName(spot, v30);
        if ( v18 )
        {
          v27 = (System_String_o *)Instance;
          z = -43.0;
          goto LABEL_24;
        }
      }
    }
LABEL_31:
    sub_1B4D1EC(Instance, v15);
  }
  if ( !onObjectType )
  {
    v19 = (float)(spot->fields.y + this->fields.greenwichOffset) * 0.017453;
    sincosf(spot->fields.x * 0.017453, &sinx, &cosx);
    v21 = cosx;
    v20 = sinx;
    earthRadius = this->fields.earthRadius;
    sincosf(v19, &v35, &v34);
    v24 = v34;
    v25 = v35;
    if ( !BlankEarth_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    Instance = (UnityEngine_GameObject_o *)BlankEarth__GetSpotPrefabName(spot, v23);
    if ( v18 )
    {
      v26 = v21 * (float)(earthRadius + 0.0);
      v27 = (System_String_o *)Instance;
      y = v20 * earthRadius;
      x = v24 * v26;
      z = v25 * v26;
LABEL_24:
      Object_object__49169892 = AssetData__GetObject_object__49169892(
                                  v18,
                                  v27,
                                  (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
      goto LABEL_26;
    }
    goto LABEL_31;
  }
  Object_object__49169892 = 0LL;
LABEL_26:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49169892, 0LL, 0LL) )
    return 0LL;
  return BlankEarth__CreateSpot(this, (UnityEngine_GameObject_o *)Object_object__49169892, spot, x, y, z, v32);
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
  UnityEngine_Object_o *Point; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  Point = (UnityEngine_Object_o *)spot;
  if ( (byte_49B7833 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, spot);
    byte_49B7833 = 1;
  }
  if ( Point )
    Point = (UnityEngine_Object_o *)BlankEarth__GetPoint(
                                      this,
                                      Point->fields.m_CachedPtr,
                                      0,
                                      (const MethodInfo *)isQuick);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(Point, 0LL, 0LL);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !Point )
      sub_1B4D1EC(v11, v12);
    BlankEarthPoint__RevealOrConcealSpotAnim((BlankEarthPoint_o *)Point, dispType, isQuick, finishCallback, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__RevealOtherObject(
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
  const MethodInfo *v13; // x4

  OtherObject = (UnityEngine_Object_o *)otherObjEnt;
  if ( (byte_49B7834 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, otherObjEnt);
    byte_49B7834 = 1;
  }
  if ( OtherObject )
    OtherObject = (UnityEngine_Object_o *)BlankEarth__GetOtherObject(
                                            this,
                                            OtherObject->fields.m_CachedPtr,
                                            *(const MethodInfo **)&dispType);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(OtherObject, 0LL, 0LL);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !OtherObject )
      sub_1B4D1EC(v11, v12);
    BlankEarthOtherObject__RevealOrConcealOtherObjAnim(
      (BlankEarthOtherObject_o *)OtherObject,
      dispType,
      isQuick,
      finishCallback,
      v13);
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
  __int64 v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  int32_t v24; // w1

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  if ( (byte_49B7832 & 1) == 0 )
  {
    sub_1B4CF90(&BlankEarth_QAARotateEarthParam_TypeInfo, *(_QWORD *)&easeType);
    byte_49B7832 = 1;
  }
  v16 = sub_1B4D1DC(BlankEarth_QAARotateEarthParam_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  *(float *)(v16 + 16) = time;
  *(float *)(v16 + 20) = x;
  *(float *)(v16 + 24) = y;
  *(_DWORD *)(v16 + 28) = easeType;
  *(_QWORD *)(v16 + 32) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 32), (int32_t)finishCallback, v17, v18);
  this->fields.qaaRotateEarthParam = (struct BlankEarth_QAARotateEarthParam_o *)v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.qaaRotateEarthParam, v16, v19, v20);
  this->fields.rotateEarthTimeCalculateParam = rotateTimeCalculateParam;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.rotateEarthTimeCalculateParam,
    (int32_t)rotateTimeCalculateParam,
    v21,
    v22);
  if ( isShortcut )
    v24 = 6;
  else
    v24 = 5;
  BlankEarth__SetState(this, v24, v23);
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
  __int64 v13; // x1
  __int64 v14; // x20

  if ( (byte_49B7831 & 1) == 0 )
  {
    sub_1B4CF90(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___, blankEarthGimmickEntity);
    sub_1B4CF90(&BlankEarth_QAARotateEarthResponse_TypeInfo, v13);
    byte_49B7831 = 1;
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
    v14 = sub_1B4D1DC(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    *(_BYTE *)(v14 + 16) = 1;
    ActionExtensions__Call_object_(
      (System_Action_T__o *)finishCallback,
      (Il2CppObject *)v14,
      (const MethodInfo_2E57CDC *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
  __int64 v15; // x1
  __int64 v16; // x20

  if ( (byte_49B7830 & 1) == 0 )
  {
    sub_1B4CF90(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___, blankEarthSpotEntity);
    sub_1B4CF90(&BlankEarth_QAARotateEarthResponse_TypeInfo, v15);
    byte_49B7830 = 1;
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
    v16 = sub_1B4D1DC(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v16, 0LL);
    *(_BYTE *)(v16 + 16) = 1;
    ActionExtensions__Call_object_(
      (System_Action_T__o *)finishCallback,
      (Il2CppObject *)v16,
      (const MethodInfo_2E57CDC *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
    sub_1B4D1EC(0LL, method);
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
  float w; // s8
  float z; // s9
  float y; // s10
  float x; // s11
  __int64 v8; // x1
  __int64 v9; // x1
  BlankEarth_c *v10; // x0
  System_String_o *BLANK_EARTH_ROTATE_KEY; // x19
  __int64 v12; // x20
  float v13; // s0
  System_String_o *v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  float v21; // s0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  float v27; // s0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  float v33; // s0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_String_o *v36; // x0
  MethodInfo v37; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  *((float *)&v37.methodMetadataHandle + 1) = totalAngle;
  w = qua.fields.w;
  z = qua.fields.z;
  y = qua.fields.y;
  x = qua.fields.x;
  if ( (byte_49B782F & 1) == 0 )
  {
    sub_1B4CF90(&BlankEarth_TypeInfo, method);
    sub_1B4CF90(&string___TypeInfo, v8);
    sub_1B4CF90(&StringLiteral_816/*","*/, v9);
    byte_49B782F = 1;
  }
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  v40.fields.w = w;
  v38 = UnityEngine_Quaternion__Internal_ToEulerRad(v40, 0LL);
  v38.fields.x = v38.fields.x * 57.296;
  v38.fields.y = v38.fields.y * 57.296;
  v38.fields.z = v38.fields.z * 57.296;
  Positive = UnityEngine_Quaternion__Internal_MakePositive(v38, 0LL);
  v10 = BlankEarth_TypeInfo;
  v37.methodPointer = *(Il2CppMethodPointer *)&Positive.fields.x;
  *(float *)&v37.virtualMethodPointer = Positive.fields.z;
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v10 = BlankEarth_TypeInfo;
  }
  BLANK_EARTH_ROTATE_KEY = v10->static_fields->BLANK_EARTH_ROTATE_KEY;
  v12 = sub_1B4D038(string___TypeInfo, 7LL);
  v14 = System_Single__ToString(v13, &v37);
  if ( !v12 )
    sub_1B4D1EC(v14, v15);
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_14;
  *(_QWORD *)(v12 + 32) = v14;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 32), (int32_t)v14, v16, v17);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_14;
  v20 = (int)StringLiteral_816/*","*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_816/*","*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 40), v20, v18, v19);
  v14 = System_Single__ToString(v21, (const MethodInfo *)((char *)&v37.methodPointer + 4));
  if ( *(_DWORD *)(v12 + 24) <= 2u )
    goto LABEL_14;
  *(_QWORD *)(v12 + 48) = v14;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 48), (int32_t)v14, v22, v23);
  if ( *(_DWORD *)(v12 + 24) <= 3u )
    goto LABEL_14;
  v26 = (int)StringLiteral_816/*","*/;
  *(_QWORD *)(v12 + 56) = StringLiteral_816/*","*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 56), v26, v24, v25);
  v14 = System_Single__ToString(v27, (const MethodInfo *)&v37.virtualMethodPointer);
  if ( *(_DWORD *)(v12 + 24) <= 4u
    || (*(_QWORD *)(v12 + 64) = v14,
        sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 64), (int32_t)v14, v28, v29),
        *(_DWORD *)(v12 + 24) <= 5u)
    || (v32 = (int)StringLiteral_816/*","*/,
        *(_QWORD *)(v12 + 72) = StringLiteral_816/*","*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 72), v32, v30, v31),
        v14 = System_Single__ToString(v33, (const MethodInfo *)((char *)&v37.methodMetadataHandle + 4)),
        *(_DWORD *)(v12 + 24) <= 6u) )
  {
LABEL_14:
    sub_1B4D1F4(v14, v15);
  }
  *(_QWORD *)(v12 + 80) = v14;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 80), (int32_t)v14, v34, v35);
  v36 = System_String__Concat_61133984((System_String_array *)v12, 0LL);
  UnityEngine_PlayerPrefs__SetString(BLANK_EARTH_ROTATE_KEY, v36, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SaveSpotRotation(
        BlankEarth_o *this,
        BlankEarthSpotEntity_o *spotEnt,
        const MethodInfo *method)
{
  BlankEarth_o *v5; // x0
  const MethodInfo *v6; // x1
  int v7; // s0
  float maxAngle; // s4
  float x; // s5
  float v13; // s6

  if ( spotEnt && !spotEnt->fields.onObjectType )
  {
    *(UnityEngine_Quaternion_o *)&v7 = BlankEarth__ConvertLatLongToSafePointQuaternion(
                                         this,
                                         *(UnityEngine_Vector2_o *)&spotEnt->fields.x,
                                         (const MethodInfo *)spotEnt);
    maxAngle = this->fields.maxAngle;
    x = spotEnt->fields.x;
    v13 = -maxAngle;
    if ( maxAngle >= x )
      maxAngle = spotEnt->fields.x;
    if ( x < v13 )
      maxAngle = v13;
    this->fields.totalAngle = maxAngle;
    BlankEarth__SaveQuaternionAndTotalAngle(v5, *(UnityEngine_Quaternion_o *)&v7, maxAngle, v6);
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
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetEarthRotate(BlankEarth_o *this, UnityEngine_Quaternion_o qua, const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0

  blankEarth = this->fields.blankEarth;
  if ( !blankEarth )
    sub_1B4D1EC(0LL, method);
  UnityEngine_Transform__set_rotation(blankEarth, qua, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetFocusPoint(
        BlankEarth_o *this,
        int32_t spotId,
        int32_t onPointType,
        const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  BlankEarth_o *v5; // x19
  const MethodInfo *v8; // x3
  BlankEarthPoint_o *Point; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (v5 = this, (this = (BlankEarth_o *)mTerminalList->fields.mActionBgColl) == 0LL)
    || (this = (BlankEarth_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_1B4D1EC(this, *(_QWORD *)&spotId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  Point = BlankEarth__GetPoint(v5, spotId, onPointType, v8);
  v5->fields.focusEarthPoint = Point;
  sub_1B4CF34((CGThumbnailListItem_o *)&v5->fields.focusEarthPoint, (int32_t)Point, v10, v11);
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
  const MethodInfo *v3; // x3

  this->fields.ordealCallFolderInfo = folderInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.ordealCallFolderInfo, (int32_t)folderInfo, (int32_t)method, v3);
}


void __fastcall BlankEarth__SetOtherObjectRoot(
        BlankEarth_o *this,
        System_String_o *objName,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  this->fields.otherObjectRoot = root;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.otherObjectRoot, (int32_t)root, (int32_t)root, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetState(BlankEarth_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49B781D & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_BlankEarth__setState__, *(_QWORD *)&state);
    byte_49B781D = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B4D1EC(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(mFSM, state, (const MethodInfo_312D8D8 *)Method_CStateManager_BlankEarth__setState__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *focusEarthPoint; // x21
  __int64 earthSpotRoot; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  TerminalPramsManager_c *v10; // x0
  struct BlankEarthPoint_o *Point; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct BlankEarthPoint_o *v14; // x8
  int32_t spotOnType_k__BackingField; // w9
  float x; // s9
  float y; // s10
  float z; // s11
  float zoomInScl; // s8
  float v20; // s10
  float v21; // s13
  float v22; // s12
  float v23; // s15
  float w; // s14
  UnityEngine_Transform_o *blankEarth; // x20
  float zoomInOffset; // s9
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s3
  float v31; // s18
  float v32; // s21
  float v33; // s7
  float v34; // s22
  float v35; // s24
  float v36; // s2
  float v37; // s4
  float v38; // s5
  float v39; // s0
  UnityEngine_Object_o *otherObjectRoot; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v42; // x2
  int v43; // w8
  int v44; // w9
  __int64 v45; // x10
  UnityEngine_Transform_o *v46; // x20
  const MethodInfo *v47; // x2
  float v48; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49B7837 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___, method);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v5);
    byte_49B7837 = 1;
  }
  focusEarthPoint = (UnityEngine_Object_o *)this->fields.focusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  earthSpotRoot = UnityEngine_Object__op_Equality(focusEarthPoint, 0LL, 0LL);
  if ( (earthSpotRoot & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49B7898 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v8);
      byte_49B7898 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    Point = BlankEarth__GetPoint(this, v10->static_fields->_BlankEarthSpotId_k__BackingField, 0, v9);
    this->fields.focusEarthPoint = Point;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.focusEarthPoint, (int32_t)Point, v12, v13);
  }
  v14 = this->fields.focusEarthPoint;
  if ( !v14 )
    goto LABEL_49;
  spotOnType_k__BackingField = v14->fields._spotOnType_k__BackingField;
  x = this->fields.zoomInPos.fields.x;
  y = this->fields.zoomInPos.fields.y;
  z = this->fields.zoomInPos.fields.z;
  zoomInScl = this->fields.zoomInScl;
  if ( spotOnType_k__BackingField == 1 )
  {
    otherObjectRoot = (UnityEngine_Object_o *)this->fields.otherObjectRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(otherObjectRoot, 0LL, 0LL) )
    {
      earthSpotRoot = (__int64)this->fields.otherObjectRoot;
      if ( !earthSpotRoot )
        goto LABEL_49;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)earthSpotRoot,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      earthSpotRoot = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( (earthSpotRoot & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_49;
        if ( LODWORD(Component_object[4].monitor) == 1 )
          zoomInScl = 1.0;
        LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.otherObjectRoot, 0LL);
        x = *((float *)&Component_object[4].monitor + 1) - (float)(zoomInScl * LocalPosition.fields.x);
        y = *(float *)&Component_object[5].klass - (float)(zoomInScl * LocalPosition.fields.y);
        z = *((float *)&Component_object[5].klass + 1) - (float)(zoomInScl * LocalPosition.fields.z);
        BlankEarthOtherObject__ZoomInAdjustAppearance(
          (BlankEarthOtherObject_o *)Component_object,
          0.0,
          this->fields.zoomOutEasingType,
          v42);
      }
      earthSpotRoot = (__int64)this->fields.earthSpotRoot;
      if ( earthSpotRoot )
      {
        earthSpotRoot = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49627240(
                                   (UnityEngine_GameObject_o *)earthSpotRoot,
                                   (const MethodInfo_2F54068 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
        if ( earthSpotRoot )
        {
          v43 = *(_DWORD *)(earthSpotRoot + 24);
          if ( v43 < 1 )
            goto LABEL_38;
          v44 = 0;
          while ( 1 )
          {
            if ( v43 == v44 )
              sub_1B4D1F4(earthSpotRoot, v8);
            v45 = *(_QWORD *)(earthSpotRoot + 8LL * v44 + 32);
            if ( !v45 )
              break;
            ++v44;
            *(_QWORD *)(v45 + 104) = *(_QWORD *)&this->fields.object1DispSpotUISpriteDot;
            if ( v43 == v44 )
              goto LABEL_38;
          }
        }
      }
      goto LABEL_49;
    }
  }
  else if ( !spotOnType_k__BackingField )
  {
    v48 = this->fields.zoomInPos.fields.y;
    v20 = this->fields.zoomInPos.fields.x;
    v21 = v14->fields._FocusQua_k__BackingField.fields.x;
    v22 = v14->fields._FocusQua_k__BackingField.fields.y;
    v23 = v14->fields._FocusQua_k__BackingField.fields.z;
    w = v14->fields._FocusQua_k__BackingField.fields.w;
    blankEarth = this->fields.blankEarth;
    zoomInOffset = this->fields.zoomInOffset;
    if ( !byte_49B5369 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v8);
      byte_49B5369 = 1;
    }
    *(UnityEngine_Quaternion_o *)&v27 = UnityEngine_Quaternion__AngleAxis(
                                          -zoomInOffset,
                                          UnityEngine_Vector3_TypeInfo->static_fields->upVector,
                                          0LL);
    if ( blankEarth )
    {
      v31 = w * v29;
      v32 = v23 * v27;
      v33 = v23 * v29;
      v34 = v21 * v29;
      v35 = v22 * v29;
      v36 = (float)(w * v30) - (float)(v21 * v27);
      v37 = (float)(v22 * v27) + (float)((float)(v23 * v30) + v31);
      v38 = v34 + (float)((float)(v22 * v30) + (float)(w * v28));
      v39 = (float)(v23 * v28) + (float)((float)(v21 * v30) + (float)(w * v27));
      v52.fields.w = (float)(v36 - (float)(v22 * v28)) - v33;
      v52.fields.z = v37 - (float)(v21 * v28);
      v52.fields.y = v38 - v32;
      v52.fields.x = v39 - v35;
      UnityEngine_Transform__set_rotation(blankEarth, v52, 0LL);
      x = v20;
      y = v48;
      goto LABEL_38;
    }
LABEL_49:
    sub_1B4D1EC(earthSpotRoot, v8);
  }
LABEL_38:
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_49;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0LL);
  v46 = (UnityEngine_Transform_o *)earthSpotRoot;
  if ( !byte_49B5367 )
  {
    earthSpotRoot = sub_1B4CF90(&UnityEngine_Quaternion_TypeInfo, v8);
    byte_49B5367 = 1;
  }
  if ( !v46 )
    goto LABEL_49;
  UnityEngine_Transform__set_rotation(v46, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_49;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0LL);
  if ( !earthSpotRoot )
    goto LABEL_49;
  v50.fields.x = x;
  v50.fields.y = y;
  v50.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)earthSpotRoot, v50, 0LL);
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_49;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0LL);
  if ( !earthSpotRoot )
    goto LABEL_49;
  v51.fields.x = zoomInScl;
  v51.fields.y = zoomInScl;
  v51.fields.z = zoomInScl;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)earthSpotRoot, v51, 0LL);
  earthSpotRoot = (__int64)this->fields.mTerminalList;
  if ( !earthSpotRoot )
    goto LABEL_49;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)earthSpotRoot, 0, 1, 0LL);
  earthSpotRoot = (__int64)this->fields.mTerminalList;
  if ( !earthSpotRoot )
    goto LABEL_49;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)earthSpotRoot, 0.0, 0, 1, 0LL);
  BlankEarth__SetState(this, 3, v47);
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
          sub_1B4D1F4(this, isDisp);
        v7 = presentBoxHideGameObjectList->m_Items[v5];
        if ( !v7 )
          sub_1B4D1EC(0LL, isDisp);
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
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49B781B & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_BlankEarth__update__, method);
    byte_49B781B = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_312D8B4 *)Method_CStateManager_BlankEarth__update__);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  unsigned int LocalPosition; // s0
  UnityEngine_GameObject_o *v19; // x0
  BlankEarthTransform_o *v20; // x0
  const MethodInfo *v21; // x5
  TerminalPramsManager_c *v22; // x0
  CGThumbnailListItem_o *p_BlankEarthTransformData_k__BackingField; // x0
  float totalAng; // [xsp+3Ch] [xbp-74h]
  float w; // [xsp+40h] [xbp-70h]
  float earthRootRot; // [xsp+44h] [xbp-6Ch]
  float y; // [xsp+48h] [xbp-68h]
  float x; // [xsp+4Ch] [xbp-64h]
  UnityEngine_Vector3_o v30; // 0:x1.12
  UnityEngine_Vector3_o v31; // 0:x3.12
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v34; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_49B783A & 1) == 0 )
  {
    sub_1B4CF90(&BlankEarthTransform_TypeInfo, method);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v3);
    byte_49B783A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B7899 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B7899 = 1;
  }
  earthRoot = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    earthRoot = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !this->fields.blankEarth )
    goto LABEL_26;
  v5 = *(BlankEarthTransform_o **)(*(_QWORD *)&earthRoot[7].fields.m_CachedPtr + 520LL);
  *(UnityEngine_Quaternion_o *)&v6 = UnityEngine_Transform__get_rotation(this->fields.blankEarth, 0LL);
  v10 = v6;
  v11 = v7;
  v12 = v8;
  v13 = v9;
  if ( v5 )
  {
    v5->fields.blankEarthRotation.fields.x = v6;
    v5->fields.blankEarthRotation.fields.y = v7;
    v5->fields.blankEarthRotation.fields.z = v8;
    v5->fields.blankEarthRotation.fields.w = v9;
    earthRoot = this->fields.earthRoot;
    if ( earthRoot )
    {
      earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
      if ( earthRoot )
      {
        v5->fields.earthRootRotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)earthRoot, 0LL);
        v5->fields.earthRootLocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.earthRoot, 0LL);
        earthRoot = this->fields.earthRoot;
        if ( earthRoot )
        {
          gameObject = UnityEngine_GameObject__get_gameObject(earthRoot, 0LL);
          v5->fields.earthRootLocalScale = GameObjectExtensions__GetLocalScale(gameObject, 0LL);
          v5->fields.totalAngle = this->fields.totalAngle;
          goto LABEL_19;
        }
      }
    }
LABEL_26:
    sub_1B4D1EC(earthRoot, method);
  }
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_26;
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !earthRoot )
    goto LABEL_26;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)earthRoot, 0LL);
  y = rotation.fields.y;
  x = rotation.fields.x;
  w = rotation.fields.w;
  earthRootRot = rotation.fields.z;
  LocalPosition = (unsigned int)GameObjectExtensions__GetLocalPosition(this->fields.earthRoot, 0LL);
  earthRoot = this->fields.earthRoot;
  totalAng = *(float *)&LocalPosition;
  if ( !earthRoot )
    goto LABEL_26;
  v19 = UnityEngine_GameObject__get_gameObject(earthRoot, 0LL);
  GameObjectExtensions__GetLocalScale(v19, 0LL);
  v20 = (BlankEarthTransform_o *)sub_1B4D1DC(BlankEarthTransform_TypeInfo);
  v34.fields.y = y;
  v34.fields.x = x;
  v34.fields.z = earthRootRot;
  v33.fields.y = v11;
  v34.fields.w = w;
  v33.fields.z = v12;
  v33.fields.w = v13;
  *(_QWORD *)&v30.fields.x = 0LL;
  v33.fields.x = v10;
  v5 = v20;
  BlankEarthTransform___ctor(v20, v33, v34, v30, v31, totalAng, v21);
LABEL_19:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B789A )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v15);
    byte_49B789A = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  p_BlankEarthTransformData_k__BackingField = (CGThumbnailListItem_o *)&v22->static_fields->_BlankEarthTransformData_k__BackingField;
  p_BlankEarthTransformData_k__BackingField->klass = (CGThumbnailListItem_c *)v5;
  sub_1B4CF34(p_BlankEarthTransformData_k__BackingField, (int32_t)v5, v16, v17);
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
  System_Object_array *ComponentsInChildren_object__49627240; // x0
  BlankEarth___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_T__o *v11; // x20
  System_Action_object__o *_9__111_0; // x21
  Il2CppObject *v13; // x22
  struct BlankEarth___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_T__o *v17; // x19
  BlankEarth___c_c *v18; // x0
  System_Action_object__o *_9__111_1; // x20
  Il2CppObject *v20; // x21
  struct BlankEarth___c_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_49B782E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_BlankEarthPoint__TypeInfo, method);
    sub_1B4CF90(&Method_BasicHelper_ForEach_BlankEarthPoint___, v3);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___, v4);
    sub_1B4CF90(&Method_BlankEarth___c__UpdateSpotDisp_b__111_0__, v5);
    sub_1B4CF90(&Method_BlankEarth___c__UpdateSpotDisp_b__111_1__, v6);
    sub_1B4CF90(&BlankEarth___c_TypeInfo, v7);
    byte_49B782E = 1;
  }
  earthSpotRoot = this->fields.earthSpotRoot;
  if ( !earthSpotRoot )
    goto LABEL_19;
  ComponentsInChildren_object__49627240 = UnityEngine_GameObject__GetComponentsInChildren_object__49627240(
                                            earthSpotRoot,
                                            (const MethodInfo_2F54068 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  v10 = BlankEarth___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object__49627240;
  if ( !BlankEarth___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo);
    v10 = BlankEarth___c_TypeInfo;
  }
  _9__111_0 = (System_Action_object__o *)v10->static_fields->__9__111_0;
  if ( !_9__111_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BlankEarth___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__111_0 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BlankEarthPoint__TypeInfo);
    System_Action_object____ctor(_9__111_0, v13, Method_BlankEarth___c__UpdateSpotDisp_b__111_0__, 0LL);
    static_fields = BlankEarth___c_TypeInfo->static_fields;
    static_fields->__9__111_0 = (struct System_Action_BlankEarthPoint__o *)_9__111_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__111_0, (int32_t)_9__111_0, v15, v16);
  }
  BasicHelper__ForEach_object_(
    v11,
    (System_Action_T__o *)_9__111_0,
    (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_BlankEarthPoint___);
  earthSpotRoot = this->fields.otherObjectRoot;
  if ( !earthSpotRoot )
LABEL_19:
    sub_1B4D1EC(earthSpotRoot, method);
  v17 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49627240(
                                                         earthSpotRoot,
                                                         (const MethodInfo_2F54068 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v17, 0LL) )
  {
    v18 = BlankEarth___c_TypeInfo;
    if ( !BlankEarth___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo);
      v18 = BlankEarth___c_TypeInfo;
    }
    _9__111_1 = (System_Action_object__o *)v18->static_fields->__9__111_1;
    if ( !_9__111_1 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = BlankEarth___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__111_1 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BlankEarthPoint__TypeInfo);
      System_Action_object____ctor(_9__111_1, v20, Method_BlankEarth___c__UpdateSpotDisp_b__111_1__, 0LL);
      v21 = BlankEarth___c_TypeInfo->static_fields;
      v21->__9__111_1 = (struct System_Action_BlankEarthPoint__o *)_9__111_1;
      sub_1B4CF34((CGThumbnailListItem_o *)&v21->__9__111_1, (int32_t)_9__111_1, v22, v23);
    }
    BasicHelper__ForEach_object_(
      v17,
      (System_Action_T__o *)_9__111_1,
      (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_BlankEarthPoint___);
  }
}


void __fastcall BlankEarth__UpdateTotalAngle(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *blankEarth; // x0
  __int64 v4; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  blankEarth = (UnityEngine_Component_o *)this->fields.blankEarth;
  if ( !blankEarth
    || (blankEarth = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(blankEarth, 0LL)) == 0LL )
  {
    sub_1B4D1EC(blankEarth, method);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
  v11 = UnityEngine_Quaternion__Inverse(rotation, 0LL);
  x = v11.fields.x;
  y = v11.fields.y;
  z = v11.fields.z;
  w = v11.fields.w;
  if ( !byte_49B7895 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v4);
    byte_49B7895 = 1;
  }
  v12.fields.x = x;
  v12.fields.y = y;
  v12.fields.z = z;
  v12.fields.w = w;
  v9 = UnityEngine_Quaternion__op_Multiply_68743276(v12, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0LL);
  this->fields.totalAngle = asinf(v9.fields.y) * 57.296;
}


float __fastcall BlankEarth__get_EarthBtnMoveSpeedTime(BlankEarth_o *this, const MethodInfo *method)
{
  return this->fields.earthBtnMoveSpeedTime;
}


float __fastcall BlankEarth__get_EarthRadius(BlankEarth_o *this, const MethodInfo *method)
{
  return this->fields.earthRadius;
}


UnityEngine_GameObject_o *__fastcall BlankEarth__get_EarthRoot(BlankEarth_o *this, const MethodInfo *method)
{
  return this->fields.earthRoot;
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
  CGThumbnailListItem_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  v11 = (CGThumbnailListItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11->fields.sortValue0 = (int64_t)finishCallback;
  v11 = (CGThumbnailListItem_o *)((char *)v11 + 32);
  *(float *)&v11[-1].fields._Type_k__BackingField = time;
  *(float *)&v11[-1].fields._HaveDifferenceCG_k__BackingField = x;
  *(float *)&v11[-1].fields._ThumbnailSpritePath_k__BackingField = y;
  HIDWORD(v11[-1].fields._ThumbnailSpritePath_k__BackingField) = easeType;
  sub_1B4CF34(v11, (int32_t)finishCallback, v12, v13);
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
  bool v3; // w20

  v3 = isInterrupted;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._IsInterrupted_k__BackingField = v3;
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
  const MethodInfo *v2; // x2
  BlankEarth_o *That; // x0

  That = this->fields.That;
  if ( !That )
    sub_1B4D1EC(0LL, method);
  BlankEarth__SetState(That, 2, v2);
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
                                             EasingObj->fields.mNow,
                                             0LL),
        !blankEarth) )
  {
    sub_1B4D1EC(this, method);
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
  if ( (byte_49B7846 & 1) == 0 )
  {
    this = (BlankEarth_StateEarthAutoRotateBase_o *)sub_1B4CF90(&System_Action_TypeInfo, method);
    byte_49B7846 = 1;
  }
  klass = v2[4].klass;
  if ( !klass
    || (monitor = (EasingObject_o *)v2[1].monitor,
        v5 = *(float *)&klass->_1.name,
        v6 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
        System_Action___ctor(v6, v2, (intptr_t)v2->klass->vtable[10].methodPtr, 0LL),
        v7 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, (intptr_t)v2->klass->vtable[11].methodPtr, 0LL),
        (v8 = v2[4].klass) == 0LL)
    || !monitor )
  {
    sub_1B4D1EC(this, method);
  }
  EasingObject__Play(monitor, v5, v6, v7, 0.0, HIDWORD(v8->_1.namespaze), 0LL);
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__begin(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Transform_o *blankEarth; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BlankEarth_QAARotateEarthParam_o *qaaRotateEarthParam; // x1
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49B7845 & 1) == 0 )
  {
    sub_1B4CF90(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, that);
    byte_49B7845 = 1;
  }
  this->fields.That = that;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  if ( !that )
    goto LABEL_10;
  qaaRotateEarthParam = that->fields.qaaRotateEarthParam;
  this->fields.Param = qaaRotateEarthParam;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.Param, (int32_t)qaaRotateEarthParam, v8, v9);
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
                               v7);
        blankEarth = that->fields.blankEarth;
        if ( blankEarth )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarth, 0LL);
          Component_object = GameObjectExtensions__SafeGetComponent_object_(
                               gameObject,
                               (const MethodInfo_2F54F2C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
          this->fields.EasingObj = (struct EasingObject_o *)Component_object;
          sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.EasingObj, (int32_t)Component_object, v14, v15);
          return;
        }
      }
    }
LABEL_10:
    sub_1B4D1EC(blankEarth, v7);
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
  bool v9; // w22
  __int64 v10; // x20

  if ( (byte_49B7847 & 1) == 0 )
  {
    sub_1B4CF90(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___, that);
    sub_1B4CF90(&BlankEarth_QAARotateEarthResponse_TypeInfo, v4);
    byte_49B7847 = 1;
  }
  EasingObj = this->fields.EasingObj;
  if ( !EasingObj
    || (EasingObject__Stop(EasingObj, 0LL), (EasingObj = (EasingObject_o *)this->fields.That) == 0LL)
    || (BlankEarth__UpdateTotalAngle((BlankEarth_o *)EasingObj, (const MethodInfo *)that),
        (v6 = this->fields.EasingObj) == 0LL) )
  {
    sub_1B4D1EC(EasingObj, that);
  }
  Param = this->fields.Param;
  if ( Param )
  {
    FinishCallback_k__BackingField = (System_Action_T__o *)Param->fields._FinishCallback_k__BackingField;
    v9 = v6->fields.mNow < 1.0;
    v10 = sub_1B4D1DC(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    *(_BYTE *)(v10 + 16) = v9;
    ActionExtensions__Call_object_(
      FinishCallback_k__BackingField,
      (Il2CppObject *)v10,
      (const MethodInfo_2E57CDC *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
  BlankEarth_o *gameObject; // x20
  const MethodInfo *v5; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_Vector3_o DefaultEarthScale; // 0:s0.4,4:s1.4,8:s2.4

  this->fields = 0LL;
  if ( !that
    || (this = (BlankEarth_StateMain_o *)that->fields.earthRoot) == 0LL
    || (gameObject = (BlankEarth_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        DefaultEarthScale = BlankEarth__GetDefaultEarthScale(gameObject, v5),
        GameObjectExtensions__SetLocalScale((UnityEngine_GameObject_o *)gameObject, DefaultEarthScale, 0LL),
        (mTerminalList = that->fields.mTerminalList) == 0LL)
    || (this = (BlankEarth_StateMain_o *)mTerminalList->fields.mActionBgColl) == 0LL
    || (this = (BlankEarth_StateMain_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_1B4D1EC(this, that);
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
  const MethodInfo *v3; // x4

  if ( !that )
    sub_1B4D1EC(this, 0LL);
  BlankEarth__BlunkEarthMainOperation(that, that, (float *)&this->fields, &this->fields.inertialSpeedY, v3);
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


void __fastcall BlankEarth_StateShortcutRotate__Rotate(
        BlankEarth_StateShortcutRotate_o *this,
        const MethodInfo *method)
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
  this = (BlankEarth_StateShortcutRotate_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_16;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v4->fields.QuaFrom, 0LL);
  v6 = v4->fields.That;
  if ( !v6 )
    goto LABEL_16;
  this = (BlankEarth_StateShortcutRotate_o *)v6->fields.blankEarth;
  if ( !this )
    goto LABEL_16;
  this = (BlankEarth_StateShortcutRotate_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v7 = v4->fields.That;
  if ( !v7 )
    goto LABEL_16;
  v8 = this;
  this = (BlankEarth_StateShortcutRotate_o *)v7->fields.blankEarth;
  if ( !this )
    goto LABEL_16;
  this = (BlankEarth_StateShortcutRotate_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_16;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  if ( !byte_49B5368 )
  {
    this = (BlankEarth_StateShortcutRotate_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, method);
    byte_49B5368 = 1;
  }
  if ( !v8
    || (v14.fields.y = y,
        v14.fields.x = x,
        v14.fields.z = z,
        UnityEngine_Transform__RotateAround(
          (UnityEngine_Transform_o *)v8,
          v14,
          UnityEngine_Vector3_TypeInfo->static_fields->rightVector,
          mNow * v4->fields.rotAmountX,
          0LL),
        (v12 = v4->fields.That) == 0LL)
    || (this = (BlankEarth_StateShortcutRotate_o *)v12->fields.blankEarth) == 0LL )
  {
LABEL_16:
    sub_1B4D1EC(this, method);
  }
  v15.fields.x = 0.0;
  v15.fields.y = mNow * v4->fields.rotAmountY;
  v15.fields.z = 0.0;
  UnityEngine_Transform__Rotate_68827268((UnityEngine_Transform_o *)this, v15, 0LL);
}


void __fastcall BlankEarth_StateShortcutRotate__StartRotate(
        BlankEarth_StateShortcutRotate_o *this,
        const MethodInfo *method)
{
  EasingObject_o *EasingObj; // x19
  float rotateTime; // s8
  System_Action_o *v5; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8

  if ( (byte_49B7848 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    byte_49B7848 = 1;
  }
  EasingObj = this->fields.EasingObj;
  rotateTime = this->fields.rotateTime;
  v5 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, (intptr_t)this->klass->vtable._10_OnRotateCompleted.methodPtr, 0LL);
  v6 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_update.methodPtr, 0LL);
  Param = this->fields.Param;
  if ( !Param || !EasingObj )
    sub_1B4D1EC(v7, v8);
  EasingObject__Play(EasingObj, rotateTime, v5, v6, 0.0, Param->fields._EaseType_k__BackingField, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth_StateShortcutRotate__begin(
        BlankEarth_StateShortcutRotate_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  long double v10; // q8
  float v11; // s9
  long double v12; // q10
  __int64 v13; // x1
  float v14; // s11
  float v15; // s12
  float v16; // s13
  float v17; // s14
  __int64 v18; // x1
  long double v19; // q11
  float v20; // s12
  long double v21; // q13
  float v22; // s14
  EasingObject_o *EasingObj; // x0
  __int64 v24; // x1
  float v25; // s0
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  struct BlankEarth_RotateEarthTimeCalculateParam_o *rotateEarthTimeCalculateParam; // x8
  float rotAmountY; // s0
  float rotAmountX; // s0
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Quaternion_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  BlankEarth_StateEarthAutoRotateBase__begin((BlankEarth_StateEarthAutoRotateBase_o *)this, that, method);
  v32 = UnityEngine_Quaternion__Inverse(this->fields.QuaFrom, 0LL);
  x = v32.fields.x;
  y = v32.fields.y;
  z = v32.fields.z;
  w = v32.fields.w;
  if ( !byte_49B7895 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v5);
    byte_49B7895 = 1;
  }
  v33.fields.x = x;
  v33.fields.y = y;
  v33.fields.z = z;
  v33.fields.w = w;
  v30 = UnityEngine_Quaternion__op_Multiply_68743276(v33, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0LL);
  v10 = *(long double *)&v30.fields.x;
  v11 = v30.fields.y;
  v12 = *(long double *)&v30.fields.z;
  v34 = UnityEngine_Quaternion__Inverse(this->fields.QuaTo, 0LL);
  v14 = v34.fields.x;
  v15 = v34.fields.y;
  v16 = v34.fields.z;
  v17 = v34.fields.w;
  if ( !byte_49B7895 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v13);
    byte_49B7895 = 1;
  }
  v35.fields.x = v14;
  v35.fields.y = v15;
  v35.fields.z = v16;
  v35.fields.w = v17;
  v31 = UnityEngine_Quaternion__op_Multiply_68743276(v35, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0LL);
  v19 = *(long double *)&v31.fields.x;
  v20 = v31.fields.y;
  v21 = *(long double *)&v31.fields.z;
  if ( !byte_49B6DA4 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v18);
    byte_49B6DA4 = 1;
  }
  this->fields.rotAmountY = sub_204FD70(0LL, v10, 0.0, v12, v19, 0.0, v21);
  v22 = asinf(v11);
  v25 = asinf(v20);
  Param = this->fields.Param;
  this->fields.rotAmountX = (float)(v22 - v25) * 57.296;
  if ( !Param )
    goto LABEL_23;
  this->fields.rotateTime = Param->fields._Time_k__BackingField;
  if ( !that )
    goto LABEL_23;
  if ( that->fields.rotateEarthTimeCalculateParam )
  {
    if ( !byte_49B535F )
    {
      sub_1B4CF90(&System_Math_TypeInfo, v24);
      byte_49B535F = 1;
    }
    EasingObj = (EasingObject_o *)System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    rotateEarthTimeCalculateParam = that->fields.rotateEarthTimeCalculateParam;
    if ( !rotateEarthTimeCalculateParam )
      goto LABEL_23;
    this->fields.rotateTime = (float)(sqrtf(
                                        (float)((float)(*(float *)&v12 - *(float *)&v21)
                                              * (float)(*(float *)&v12 - *(float *)&v21))
                                      + (float)((float)((float)(*(float *)&v10 - *(float *)&v19)
                                                      * (float)(*(float *)&v10 - *(float *)&v19))
                                              + (float)((float)(v11 - v20) * (float)(v11 - v20))))
                                    * rotateEarthTimeCalculateParam->fields._DistanceMultipleValue_k__BackingField)
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
LABEL_23:
      sub_1B4D1EC(EasingObj, v24);
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
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 Int; // x0
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  int v22; // w9
  int v23; // s0
  float v24; // s8
  TerminalSceneComponent_c *v25; // x0
  __int64 v26; // x8
  UnityEngine_Transform_o *v27; // x22
  BlankEarth_c *v28; // x0
  float *p_x; // x8
  int v30; // s0
  TerminalSceneComponent_c *v34; // x0
  UnityEngine_Transform_o *v35; // x22
  int v36; // s0
  _QWORD *v40; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x8
  UnityEngine_GameObject_o *v46; // x0
  __int64 v47; // x8
  EasingObject_o *v48; // x22
  System_Action_o *v49; // x23
  System_Action_o *v50; // x24
  __int64 v51; // x8
  __int64 v52; // x8
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x8
  __int64 v56; // x8
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B783D & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, that);
    sub_1B4CF90(&BlankEarth_TypeInfo, v5);
    sub_1B4CF90(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_1B4CF90(&Method_BlankEarth_StateStartup_begin__, v7);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v8);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v9);
    sub_1B4CF90(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, v10);
    sub_1B4CF90(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, v11);
    sub_1B4CF90(&BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo, v12);
    byte_49B783D = 1;
  }
  v13 = sub_1B4D1DC(BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_58;
  *(_QWORD *)(v13 + 24) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 24), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 32) = that;
  v18 = v13 + 32;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 32), (int32_t)that, v19, v20);
  *(_QWORD *)&this->fields.inertialSpeedX = 0LL;
  v21 = *(_QWORD *)(v13 + 32);
  if ( !v21 )
    goto LABEL_58;
  v22 = *(unsigned __int8 *)(v21 + 224);
  v23 = 0;
  *(_DWORD *)(v21 + 228) = 0;
  if ( v22 && !*(_BYTE *)(v21 + 225) )
    v23 = *(_DWORD *)(v21 + 144);
  v24 = *(float *)(v21 + 116);
  *(_DWORD *)(v13 + 68) = v23;
  *(_DWORD *)(v21 + 312) = *(_DWORD *)(v21 + 120);
  v25 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v25 = TerminalSceneComponent_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v25->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0LL);
  v26 = *(_QWORD *)(v13 + 32);
  *(_BYTE *)(v13 + 65) = (_DWORD)Int == 1;
  if ( !v26 )
    goto LABEL_58;
  if ( (_DWORD)Int == 1 )
  {
    v24 = *(float *)(v26 + 136);
    *(_DWORD *)(v26 + 312) = *(_DWORD *)(v26 + 140);
    v27 = *(UnityEngine_Transform_o **)(v26 + 32);
    v28 = BlankEarth_TypeInfo;
    if ( !BlankEarth_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
      v28 = BlankEarth_TypeInfo;
    }
    p_x = &v28->static_fields->SOUTH_POLE_ROTATE.fields.x;
    v57.fields.x = *p_x * 0.017453;
    v57.fields.y = p_x[1] * 0.017453;
    v57.fields.z = p_x[2] * 0.017453;
    *(UnityEngine_Quaternion_o *)&v30 = UnityEngine_Quaternion__Internal_FromEulerRad(v57, 0LL);
    if ( !v27 )
      goto LABEL_58;
    UnityEngine_Transform__set_rotation(v27, *(UnityEngine_Quaternion_o *)&v30, 0LL);
    v34 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v34 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v34->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0LL);
    if ( !*(_QWORD *)v18 )
      goto LABEL_58;
    *(float *)(*(_QWORD *)v18 + 228LL) = -*(float *)(*(_QWORD *)v18 + 84LL);
  }
  else
  {
    v35 = *(UnityEngine_Transform_o **)(v26 + 32);
    *(UnityEngine_Quaternion_o *)&v36 = BlankEarth__LoadEarthRotate((BlankEarth_o *)v26, v15);
    if ( !v35 )
      goto LABEL_58;
    UnityEngine_Transform__set_rotation(v35, *(UnityEngine_Quaternion_o *)&v36, 0LL);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B789B )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v15);
    byte_49B789B = 1;
  }
  Int = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Int = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(Int + 184) + 92LL) )
  {
    v40 = Method_BlankEarth_StateStartup_begin__;
    if ( (*((_BYTE *)Method_BlankEarth_StateStartup_begin__ + 83) & 2) != 0 )
      v40 = (_QWORD *)sub_1B4CFA8(Method_BlankEarth_StateStartup_begin__);
    Int = sub_1B4CF74(v40, v40[4]);
    if ( *(_QWORD *)v18 )
    {
      Int = (__int64)OverwriteAssetSoundName__PlaySe(
                       (System_Reflection_MethodBase_o *)Int,
                       *(System_String_o **)(*(_QWORD *)v18 + 128LL),
                       0,
                       0LL);
      goto LABEL_32;
    }
LABEL_58:
    sub_1B4D1EC(Int, v15);
  }
LABEL_32:
  if ( !*(_QWORD *)v18 )
    goto LABEL_58;
  Int = *(_QWORD *)(*(_QWORD *)v18 + 32LL);
  if ( !Int )
    goto LABEL_58;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Int, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F54F2C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 16), (int32_t)Component_object, v43, v44);
  v45 = *(_QWORD *)(v13 + 32);
  if ( !v45 )
    goto LABEL_58;
  Int = *(_QWORD *)(v45 + 40);
  if ( !Int )
    goto LABEL_58;
  v46 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Int, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v46, 0LL);
  v47 = *(_QWORD *)(v13 + 32);
  *(UnityEngine_Vector3_o *)(v13 + 52) = LocalScale;
  if ( !v47 )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)(v13 + 40) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)Int, v15);
  *(_BYTE *)(v13 + 64) = 0;
  v48 = *(EasingObject_o **)(v13 + 16);
  v49 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)v13, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, 0LL);
  v50 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)v13, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, 0LL);
  v51 = *(_QWORD *)(v13 + 32);
  if ( !v51 )
    goto LABEL_58;
  if ( !v48 )
    goto LABEL_58;
  EasingObject__Play_47132360(v48, 1.0, 0.0, v24, v49, v50, 0.0, *(_DWORD *)(v51 + 188), 0LL);
  if ( !*(_QWORD *)v18 )
    goto LABEL_58;
  Int = *(_QWORD *)(*(_QWORD *)v18 + 248LL);
  if ( !Int )
    goto LABEL_58;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)Int, 0, 1, 0LL);
  v52 = *(_QWORD *)v18;
  if ( !*(_QWORD *)v18 )
    goto LABEL_58;
  Int = *(_QWORD *)(v52 + 248);
  if ( !Int )
    goto LABEL_58;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)Int, *(float *)(v52 + 172), 0, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v15);
    byte_49B5933 = 1;
  }
  Int = (__int64)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v53 = **(_QWORD **)(Int + 184);
  if ( !v53 )
    goto LABEL_58;
  v54 = *(_QWORD *)(v53 + 256);
  if ( !v54 )
    goto LABEL_58;
  *(_BYTE *)(v54 + 410) = 1;
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v15);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
    byte_49B5933 = 1;
  }
  if ( !*(_DWORD *)(Int + 224) )
  {
    j_il2cpp_runtime_class_init_0(Int);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v55 = **(_QWORD **)(Int + 184);
  if ( !v55 )
    goto LABEL_58;
  v56 = *(_QWORD *)(v55 + 256);
  if ( !v56 )
    goto LABEL_58;
  *(_BYTE *)(v56 + 411) = 1;
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
  const MethodInfo *v3; // x4
  struct System_Action_o *scalingEndCallback; // x8
  CGThumbnailListItem_o *p_scalingEndCallback; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( !that )
    sub_1B4D1EC(this, 0LL);
  BlankEarth__BlunkEarthMainOperation(that, that, &this->fields.inertialSpeedX, &this->fields.inertialSpeedY, v3);
  scalingEndCallback = that->fields.scalingEndCallback;
  if ( scalingEndCallback )
  {
    if ( this->fields.scaleRate < 0.0001 )
    {
      p_scalingEndCallback = (CGThumbnailListItem_o *)&that->fields.scalingEndCallback;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))scalingEndCallback->fields.m_target)(
        scalingEndCallback->fields.original_method_info,
        *(_QWORD *)&scalingEndCallback->fields.extra_arg);
      p_scalingEndCallback->klass = 0LL;
      sub_1B4CF34(p_scalingEndCallback, 0, v8, v9);
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
  BlankEarth_StateStartup___c__DisplayClass3_0_o *v2; // x19
  struct EasingObject_o *eo; // x8
  float mNow; // s8
  double v5; // d0
  struct BlankEarth_StateStartup_o *_4__this; // x8
  float v7; // s9
  struct BlankEarth_o *that; // x8
  float v9; // s0
  float z; // s2
  float v11; // s3
  unsigned __int64 v12; // d0 OVERLAPPED
  float v13; // s2
  int v14; // s1
  struct BlankEarth_o *v15; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  _BOOL4 isFirstAnim; // w8
  struct BlankEarth_o *v18; // x8
  struct BlankEarth_o *v19; // x8

  v2 = this;
  if ( (byte_49B783E & 1) == 0 )
  {
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_1B4CF90(
                                                               &Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__,
                                                               method);
    byte_49B783E = 1;
  }
  eo = v2->fields.eo;
  if ( !eo )
    goto LABEL_27;
  mNow = eo->fields.mNow;
  v5 = StepFunc__Acc5(mNow, 0LL);
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  v7 = v5;
  _4__this->fields.scaleRate = v7;
  that = v2->fields.that;
  if ( !that )
    goto LABEL_27;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)that->fields.earthRoot;
  if ( !this )
    goto LABEL_27;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  v9 = fminf(v7, 1.0);
  if ( v7 < 0.0 )
    v9 = 0.0;
  if ( !this )
    goto LABEL_27;
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
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v12, 0LL);
  if ( v2->fields.isStartRotateBtn )
    return;
  v15 = v2->fields.that;
  if ( !v15 )
    goto LABEL_27;
  if ( mNow >= v15->fields.startupFrameInRotateBtnRate )
    return;
  if ( !v15->fields.isTutorialAvailable )
  {
    mTerminalList = v15->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_27;
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)mTerminalList->fields.mActionBgColl;
    if ( !this )
      goto LABEL_27;
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
    if ( !this )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  isFirstAnim = v2->fields.isFirstAnim;
  v2->fields.isStartRotateBtn = 1;
  if ( isFirstAnim )
    return;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !this )
LABEL_27:
    sub_1B4D1EC(this, method);
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)QuestAfterAction__IsActiveCommand(
                                                             (QuestAfterAction_o *)this,
                                                             0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v18 = v2->fields.that;
    if ( v18 )
    {
      this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)v18->fields.mTerminalList;
      if ( this )
      {
        ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
          (ScrTerminalListTop_o *)this,
          v18->fields.earthBtnMoveSpeedTime,
          1,
          0,
          0LL);
        v19 = v2->fields.that;
        if ( v19 )
        {
          this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)v19->fields.mTerminalList;
          if ( this )
          {
            ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)this, 1, 0, 0LL);
            return;
          }
        }
      }
    }
    goto LABEL_27;
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
  Il2CppClass *klass; // x8
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BlankEarth_o *v9; // x8
  float wait_time; // s8
  System_Action_o *v11; // x21
  struct BlankEarth_o *v12; // x8

  v2 = this;
  if ( (byte_49B783F & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_1B4CF90(&Method_BlankEarth_SetMainState__, v3);
    byte_49B783F = 1;
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
  v5 = (Il2CppObject *)v2->fields.that;
  if ( !v5 )
    goto LABEL_13;
  klass = v5[19].klass;
  if ( klass )
  {
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)((__int64 (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
                                                               klass->_1.element_class,
                                                               *(_QWORD *)&klass->_1.byval_arg.bits);
    v9 = v2->fields.that;
    if ( !v9 )
      goto LABEL_13;
    v9->fields.scalingEndCallback = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&v9->fields.scalingEndCallback, 0, v7, v8);
    v5 = (Il2CppObject *)v2->fields.that;
  }
  wait_time = v2->fields.wait_time;
  v11 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v11, v5, Method_BlankEarth_SetMainState__, 0LL);
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)BasicHelper__DelayCall(wait_time, v11, 1, 0LL);
  if ( !v5
    || (this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_MonoBehaviour__StartCoroutine_68789728(
                                                                   (UnityEngine_MonoBehaviour_o *)v5,
                                                                   (System_Collections_IEnumerator_o *)this,
                                                                   0LL),
        (v12 = v2->fields.that) == 0LL) )
  {
LABEL_13:
    sub_1B4D1EC(this, method);
  }
  v12->fields.isSkipTutorialWait = 0;
}


void __fastcall BlankEarth_StateZoomIn___ctor(BlankEarth_StateZoomIn_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth_StateZoomIn__SetOtherObjectZoomInParam(
        BlankEarth_StateZoomIn_o *this,
        BlankEarthOtherObject_o *otherRoot,
        BlankEarth_o *blankEarth,
        UnityEngine_Vector3_o *rootPosTo,
        UnityEngine_Vector3_o *rootScaleTo,
        UnityEngine_Quaternion_o *rootQuaTo,
        float *zoomSpeed,
        const MethodInfo *method)
{
  __int64 v14; // x1
  BlankEarthTransform_o *updated; // x25
  float v16; // s2
  float z; // w9
  unsigned int v18; // s0
  unsigned int v19; // s1
  float v20; // s8
  float zoomInScl; // s0
  float zoomInSpdTime; // s9
  const MethodInfo *v23; // x2
  float v29; // s1
  unsigned int v30; // [xsp+0h] [xbp-70h]
  unsigned int v31; // [xsp+10h] [xbp-60h]

  if ( (byte_49B7841 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, otherRoot);
    this = (BlankEarth_StateZoomIn_o *)sub_1B4CF90(&TerminalPramsManager_TypeInfo, v14);
    byte_49B7841 = 1;
  }
  if ( !blankEarth )
    goto LABEL_15;
  updated = BlankEarth__UpdateBlankEarthTransformData(blankEarth, (const MethodInfo *)otherRoot);
  *(UnityEngine_Vector3_o *)(&v16 - 2) = GameObjectExtensions__GetLocalPosition(blankEarth->fields.otherObjectRoot, 0LL);
  z = blankEarth->fields.zoomInPos.fields.z;
  v31 = v18;
  v30 = v19;
  *(_QWORD *)&rootPosTo->fields.x = *(_QWORD *)&blankEarth->fields.zoomInPos.fields.x;
  rootPosTo->fields.z = z;
  if ( !updated )
    goto LABEL_15;
  v20 = v16;
  *rootQuaTo = updated->fields.blankEarthRotation;
  zoomInScl = blankEarth->fields.zoomInScl;
  rootScaleTo->fields.x = zoomInScl;
  rootScaleTo->fields.y = zoomInScl;
  rootScaleTo->fields.z = zoomInScl;
  zoomInSpdTime = blankEarth->fields.zoomInSpdTime;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  *zoomSpeed = TerminalPramsManager__GetIntpTime_AutoResume(zoomInSpdTime, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BlankEarth_StateZoomIn_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)otherRoot, 0LL, 0LL);
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
      v29 = otherRoot->fields.otherObjZoomInPos.fields.z - v20;
      *(float32x2_t *)&rootPosTo->fields.x = vsub_f32(
                                               *(float32x2_t *)&otherRoot->fields.otherObjZoomInPos.fields.x,
                                               (float32x2_t)__PAIR64__(v30, v31));
      rootPosTo->fields.z = v29;
      *zoomSpeed = otherRoot->fields.zoomInSpeed;
      BlankEarthOtherObject__ZoomInAdjustAppearance(
        otherRoot,
        otherRoot->fields.zoomInSpeed,
        blankEarth->fields.zoomOutEasingType,
        v23);
      return;
    }
LABEL_15:
    sub_1B4D1EC(this, otherRoot);
  }
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 mTerminalList; // x0
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  BlankEarth_o **v19; // x21
  BlankEarth_o *v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  struct BlankEarthPoint_o *focusEarthPoint; // x8
  int32_t spotId_k__BackingField; // w22
  TerminalPramsManager_c *v27; // x0
  BlankEarth_StateZoomIn_Fields *p_fields; // x19
  BlankEarth_o *v29; // x8
  __int64 v30; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  float v36; // s8
  float v37; // s0
  float v38; // s1
  float v39; // s2
  float v40; // s3
  BlankEarth_o *v41; // x8
  float *v42; // x9
  float v43; // s4
  float v44; // s5
  float v45; // s6
  float v46; // s7
  __int64 v47; // x10
  float z; // w10
  __int64 v49; // x10
  float zoomInScl; // s0
  struct BlankEarthPoint_o *v51; // x9
  UnityEngine_Object_o *otherObjectRoot; // x25
  Il2CppObject *v53; // x0
  const MethodInfo *v54; // x7
  UnityEngine_Object_o *v55; // x22
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  BlankEarth_o *v58; // x21
  struct BlankEarthPoint_o *v59; // x1
  CGThumbnailListItem_o *v60; // x21
  BlankEarthPoint_o *Point; // x0
  CGThumbnailListItem_c *klass; // x8
  int methods; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v65; // x8
  float v66; // s1
  System_Object_array *ComponentsInChildren_object__49627240; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  EasingObject_o *v70; // x21
  float mSpdTime; // s8
  System_Action_o *v72; // x19
  System_Action_o *v73; // x22
  __int64 v74; // x8

  if ( (byte_49B7840 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, that);
    sub_1B4CF90(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___, v6);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___, v7);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v8);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v9);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v10);
    sub_1B4CF90(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__, v11);
    sub_1B4CF90(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__, v12);
    sub_1B4CF90(&BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo, v13);
    byte_49B7840 = 1;
  }
  v14 = sub_1B4D1DC(BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_83;
  *(_QWORD *)(v14 + 24) = that;
  v19 = (BlankEarth_o **)(v14 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v14 + 24), (int32_t)that, v17, v18);
  if ( !*(_QWORD *)(v14 + 24) )
    goto LABEL_83;
  mTerminalList = *(_QWORD *)(*(_QWORD *)(v14 + 24) + 248LL);
  if ( !mTerminalList )
    goto LABEL_83;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)mTerminalList, 0, 0, 0LL);
  v20 = *v19;
  if ( !*v19 )
    goto LABEL_83;
  mTerminalList = (__int64)v20->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_83;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
    (ScrTerminalListTop_o *)mTerminalList,
    v20->fields.earthBtnMoveSpeedTime,
    0,
    0,
    0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v16);
    byte_49B5933 = 1;
  }
  mTerminalList = (__int64)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalList = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v21 = **(_QWORD **)(mTerminalList + 184);
  if ( !v21 )
    goto LABEL_83;
  v22 = *(_QWORD *)(v21 + 256);
  if ( !v22 )
    goto LABEL_83;
  *(_BYTE *)(v22 + 410) = 1;
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v16);
    mTerminalList = (__int64)TerminalSceneComponent_TypeInfo;
    byte_49B5933 = 1;
  }
  if ( !*(_DWORD *)(mTerminalList + 224) )
  {
    j_il2cpp_runtime_class_init_0(mTerminalList);
    mTerminalList = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v23 = **(_QWORD **)(mTerminalList + 184);
  if ( !v23 )
    goto LABEL_83;
  v24 = *(_QWORD *)(v23 + 256);
  if ( !v24 )
    goto LABEL_83;
  *(_BYTE *)(v24 + 411) = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B7898 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v16);
    byte_49B7898 = 1;
  }
  mTerminalList = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    mTerminalList = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(mTerminalList + 184) + 508LL) )
  {
    if ( *v19 )
    {
      focusEarthPoint = (*v19)->fields.focusEarthPoint;
      if ( focusEarthPoint )
      {
        spotId_k__BackingField = focusEarthPoint->fields._spotId_k__BackingField;
        if ( !*(_DWORD *)(mTerminalList + 224) )
          j_il2cpp_runtime_class_init_0(mTerminalList);
        if ( !byte_49B789C )
        {
          sub_1B4CF90(&TerminalPramsManager_TypeInfo, v16);
          byte_49B789C = 1;
        }
        v27 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v27 = TerminalPramsManager_TypeInfo;
        }
        v27->static_fields->_BlankEarthSpotId_k__BackingField = spotId_k__BackingField;
        TerminalPramsManager__BlankEarthSpotId_SaveData(0LL);
        if ( *v19 )
        {
          this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume((*v19)->fields.zoomInSpdTime, 0LL);
          p_fields = &this->fields;
          v29 = *v19;
          if ( *v19 )
          {
            mTerminalList = (__int64)v29->fields.mTerminalList;
            if ( mTerminalList )
            {
              ScrTerminalListTop__cbfBlankEarthQuestCreate(
                (ScrTerminalListTop_o *)mTerminalList,
                v29->fields.focusEarthPoint,
                0LL);
              mTerminalList = (__int64)*v19;
              if ( *v19 )
              {
                BlankEarth__SaveEarthRotate((BlankEarth_o *)mTerminalList, v16);
                mTerminalList = (__int64)*v19;
                if ( *v19 )
                {
                  mTerminalList = (__int64)BlankEarth__UpdateBlankEarthTransformData((BlankEarth_o *)mTerminalList, v16);
                  if ( *v19 )
                  {
                    v30 = mTerminalList;
                    mTerminalList = (__int64)(*v19)->fields.blankEarth;
                    if ( mTerminalList )
                    {
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
                      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                                           gameObject,
                                           (const MethodInfo_2F54F2C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
                      *(_QWORD *)(v14 + 16) = Component_object;
                      sub_1B4CF34((CGThumbnailListItem_o *)(v14 + 16), (int32_t)Component_object, v33, v34);
                      if ( v30 )
                      {
                        v35 = *(_QWORD *)(v14 + 24);
                        *(_OWORD *)(v14 + 32) = *(_OWORD *)(v30 + 16);
                        if ( v35 )
                        {
                          v36 = *(float *)(v35 + 88);
                          if ( !byte_49B5369 )
                          {
                            sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v16);
                            byte_49B5369 = 1;
                          }
                          *(UnityEngine_Quaternion_o *)&v37 = UnityEngine_Quaternion__AngleAxis(
                                                                -v36,
                                                                UnityEngine_Vector3_TypeInfo->static_fields->upVector,
                                                                0LL);
                          v41 = *v19;
                          if ( *v19 )
                          {
                            v42 = (float *)v41->fields.focusEarthPoint;
                            if ( v42 )
                            {
                              v43 = v42[66];
                              v44 = v42[69];
                              v45 = v42[68];
                              v46 = v42[67];
                              *(float *)(v14 + 48) = (float)((float)(v38 * v45)
                                                           + (float)((float)(v40 * v43) + (float)(v37 * v44)))
                                                   - (float)(v39 * v46);
                              *(float *)(v14 + 52) = (float)((float)(v39 * v43)
                                                           + (float)((float)(v40 * v46) + (float)(v38 * v44)))
                                                   - (float)(v37 * v45);
                              *(float *)(v14 + 56) = (float)((float)(v37 * v46)
                                                           + (float)((float)(v40 * v45) + (float)(v39 * v44)))
                                                   - (float)(v38 * v43);
                              *(float *)(v14 + 60) = (float)((float)((float)(v40 * v44) - (float)(v37 * v43))
                                                           - (float)(v38 * v46))
                                                   - (float)(v39 * v45);
                              *(_OWORD *)(v14 + 64) = *(_OWORD *)(v30 + 32);
                              if ( !byte_49B5367 )
                              {
                                mTerminalList = sub_1B4CF90(&UnityEngine_Quaternion_TypeInfo, v16);
                                byte_49B5367 = 1;
                                v41 = *v19;
                              }
                              *(struct UnityEngine_Quaternion_StaticFields *)(v14 + 80) = *UnityEngine_Quaternion_TypeInfo->static_fields;
                              v47 = *(_QWORD *)(v30 + 48);
                              *(_DWORD *)(v14 + 104) = *(_DWORD *)(v30 + 56);
                              *(_QWORD *)(v14 + 96) = v47;
                              if ( v41 )
                              {
                                z = v41->fields.zoomInPos.fields.z;
                                *(_QWORD *)(v14 + 108) = *(_QWORD *)&v41->fields.zoomInPos.fields.x;
                                *(float *)(v14 + 116) = z;
                                v49 = *(_QWORD *)(v30 + 60);
                                *(_DWORD *)(v14 + 128) = *(_DWORD *)(v30 + 68);
                                *(_QWORD *)(v14 + 120) = v49;
                                zoomInScl = v41->fields.zoomInScl;
                                *(float *)(v14 + 132) = zoomInScl;
                                *(float *)(v14 + 136) = zoomInScl;
                                *(float *)(v14 + 140) = zoomInScl;
                                *(_BYTE *)(v14 + 176) = 0;
                                v51 = v41->fields.focusEarthPoint;
                                if ( v51 )
                                {
                                  if ( v51->fields._spotOnType_k__BackingField == 1 )
                                  {
                                    otherObjectRoot = (UnityEngine_Object_o *)v41->fields.otherObjectRoot;
                                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                    mTerminalList = UnityEngine_Object__op_Inequality(otherObjectRoot, 0LL, 0LL);
                                    if ( (mTerminalList & 1) != 0 )
                                    {
                                      if ( !*v19 )
                                        goto LABEL_83;
                                      mTerminalList = (__int64)(*v19)->fields.otherObjectRoot;
                                      if ( !mTerminalList )
                                        goto LABEL_83;
                                      v53 = UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)mTerminalList,
                                              (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
                                      BlankEarth_StateZoomIn__SetOtherObjectZoomInParam(
                                        (BlankEarth_StateZoomIn_o *)v53,
                                        (BlankEarthOtherObject_o *)v53,
                                        *v19,
                                        (UnityEngine_Vector3_o *)(v14 + 108),
                                        (UnityEngine_Vector3_o *)(v14 + 132),
                                        (UnityEngine_Quaternion_o *)(v14 + 48),
                                        &p_fields->mSpdTime,
                                        v54);
                                    }
                                  }
                                  if ( !*v19 )
                                    goto LABEL_83;
                                  v55 = (UnityEngine_Object_o *)(*v19)->fields.focusEarthPoint;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  mTerminalList = UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
                                  v58 = *v19;
                                  if ( (mTerminalList & 1) != 0 )
                                  {
                                    if ( !v58 )
                                      goto LABEL_83;
                                    v59 = v58->fields.focusEarthPoint;
                                    *(_QWORD *)(v14 + 144) = v59;
                                    v60 = (CGThumbnailListItem_o *)(v14 + 144);
                                  }
                                  else
                                  {
                                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                    if ( !byte_49B7898 )
                                    {
                                      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v16);
                                      byte_49B7898 = 1;
                                    }
                                    mTerminalList = (__int64)TerminalPramsManager_TypeInfo;
                                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      mTerminalList = (__int64)TerminalPramsManager_TypeInfo;
                                    }
                                    if ( !v58 )
                                      goto LABEL_83;
                                    Point = BlankEarth__GetPoint(
                                              v58,
                                              *(_DWORD *)(*(_QWORD *)(mTerminalList + 184) + 508LL),
                                              0,
                                              v57);
                                    LODWORD(v59) = (_DWORD)Point;
                                    *(_QWORD *)(v14 + 144) = Point;
                                    v60 = (CGThumbnailListItem_o *)(v14 + 144);
                                  }
                                  sub_1B4CF34(v60, (int32_t)v59, v56, v57);
                                  klass = v60->klass;
                                  if ( v60->klass )
                                  {
                                    methods = (int)klass->_1.methods;
                                    *(_QWORD *)(v14 + 152) = klass->_1.properties;
                                    *(_DWORD *)(v14 + 160) = methods;
                                    if ( !byte_49B5361 )
                                    {
                                      mTerminalList = sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v16);
                                      byte_49B5361 = 1;
                                    }
                                    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                                    v65 = *(_QWORD *)(v14 + 24);
                                    v66 = static_fields->zeroVector.fields.z;
                                    *(_QWORD *)(v14 + 164) = *(_QWORD *)&static_fields->zeroVector.fields.x;
                                    *(float *)(v14 + 172) = v66;
                                    if ( v65 )
                                    {
                                      mTerminalList = *(_QWORD *)(v65 + 48);
                                      if ( mTerminalList )
                                      {
                                        ComponentsInChildren_object__49627240 = UnityEngine_GameObject__GetComponentsInChildren_object__49627240(
                                                                                  (UnityEngine_GameObject_o *)mTerminalList,
                                                                                  (const MethodInfo_2F54068 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
                                        *(_QWORD *)(v14 + 184) = ComponentsInChildren_object__49627240;
                                        sub_1B4CF34(
                                          (CGThumbnailListItem_o *)(v14 + 184),
                                          (int32_t)ComponentsInChildren_object__49627240,
                                          v68,
                                          v69);
                                        v70 = *(EasingObject_o **)(v14 + 16);
                                        mSpdTime = p_fields->mSpdTime;
                                        v72 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v72,
                                          (Il2CppObject *)v14,
                                          Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__,
                                          0LL);
                                        v73 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v73,
                                          (Il2CppObject *)v14,
                                          Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__,
                                          0LL);
                                        v74 = *(_QWORD *)(v14 + 24);
                                        if ( v74 )
                                        {
                                          if ( v70 )
                                          {
                                            EasingObject__Play(
                                              v70,
                                              mSpdTime,
                                              v72,
                                              v73,
                                              0.0,
                                              *(_DWORD *)(v74 + 180),
                                              0LL);
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
        }
      }
    }
LABEL_83:
    sub_1B4D1EC(mTerminalList, v16);
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
  BlankEarth_StateZoomIn___c__DisplayClass1_0_o *v2; // x19
  struct EasingObject_o *eo; // x8
  float mNow; // s9
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
  float32x2_t v24; // d12
  float v25; // s13
  UnityEngine_Transform_o *v26; // x20
  float v27; // s0
  float v28; // s1
  bool v29; // nf
  float v30; // s0
  float v31; // s1
  unsigned __int64 v32; // d0 OVERLAPPED
  float v33; // s2
  int v34; // s1
  struct BlankEarth_o *v35; // x8
  UnityEngine_Transform_o *v36; // x0
  float32x2_t v37; // d12
  float v38; // s13
  float32x2_t v39; // d14
  float v40; // s15
  UnityEngine_Transform_o *v41; // x20
  float v42; // s0
  float v43; // s1
  float v44; // s0
  float v45; // s1
  unsigned __int64 v46; // d0 OVERLAPPED
  float v47; // s2
  int v48; // s1
  struct BlankEarthPoint_o *focusEarthPoint; // x20
  float32x2_t v50; // d12
  float v51; // s13
  float32x2_t v52; // d14
  float v53; // s15
  float v54; // s0
  float v55; // s1
  float v56; // s0
  float v57; // s1
  int32x2_t v58; // d0
  struct BlankEarth_o *v59; // x8
  float32x2_t *v60; // x8
  unsigned __int64 v61; // x9
  struct BlankEarthPoint_array *spotList; // x20
  int max_length; // w9
  int v64; // w21
  float32x2_t v65; // d8
  float32x2_t *v66; // x23

  v2 = this;
  if ( (byte_49B7842 & 1) == 0 )
  {
    this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)sub_1B4CF90(&BlankEarth_TypeInfo, method);
    byte_49B7842 = 1;
  }
  eo = v2->fields.eo;
  if ( !eo )
    goto LABEL_44;
  mNow = eo->fields.mNow;
  v5 = mNow;
  v6 = StepFunc__AccSig(mNow, 0LL);
  that = v2->fields.that;
  if ( !that )
    goto LABEL_44;
  blankEarth = that->fields.blankEarth;
  v9 = v6;
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Slerp(v2->fields.qua_from, v2->fields.qua_to, v9, 0LL);
  if ( !blankEarth )
    goto LABEL_44;
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v10, 0LL);
  v14 = v2->fields.that;
  if ( !v14 )
    goto LABEL_44;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v14->fields.earthRoot;
  if ( !this )
    goto LABEL_44;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__Slerp(
                                        v2->fields.root_qua_from,
                                        v2->fields.root_qua_to,
                                        v9,
                                        0LL);
  if ( !transform )
    goto LABEL_44;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v16, 0LL);
  v20 = v2->fields.that;
  if ( !v20 )
    goto LABEL_44;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v20->fields.earthRoot;
  if ( !this )
    goto LABEL_44;
  v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v22.n64_u64[0] = *(unsigned __int64 *)&v2->fields.root_pos_from.fields.x;
  z = v2->fields.root_pos_from.fields.z;
  v24.n64_u64[0] = *(unsigned __int64 *)&v2->fields.root_pos_to.fields.x;
  v25 = v2->fields.root_pos_to.fields.z;
  v26 = v21;
  v27 = StepFunc__DecSin(v5, 0LL);
  v28 = fminf(v27, 1.0);
  v29 = v27 < 0.0;
  v30 = 0.0;
  if ( !v29 )
    v30 = v28;
  if ( !v26 )
    goto LABEL_44;
  v31 = (float)(v25 - z) * v30;
  v32 = vadd_f32(v22, vmul_n_f32(vsub_f32(v24, v22), v30)).n64_u64[0];
  v33 = z + v31;
  v34 = HIDWORD(v32);
  UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v32, 0LL);
  v35 = v2->fields.that;
  if ( !v35 )
    goto LABEL_44;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v35->fields.earthRoot;
  if ( !this )
    goto LABEL_44;
  v36 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v37.n64_u64[0] = *(unsigned __int64 *)&v2->fields.root_scl_from.fields.x;
  v38 = v2->fields.root_scl_from.fields.z;
  v39.n64_u64[0] = *(unsigned __int64 *)&v2->fields.root_scl_to.fields.x;
  v40 = v2->fields.root_scl_to.fields.z;
  v41 = v36;
  v42 = StepFunc__Acc5(v5, 0LL);
  v43 = fminf(v42, 1.0);
  v44 = v42 < 0.0 ? 0.0 : v43;
  if ( !v41 )
    goto LABEL_44;
  v45 = (float)(v40 - v38) * v44;
  v46 = vadd_f32(v37, vmul_n_f32(vsub_f32(v39, v37), v44)).n64_u64[0];
  v47 = v38 + v45;
  v48 = HIDWORD(v46);
  UnityEngine_Transform__set_localScale(v41, *(UnityEngine_Vector3_o *)&v46, 0LL);
  focusEarthPoint = v2->fields.focusEarthPoint;
  v50.n64_u64[0] = *(unsigned __int64 *)&v2->fields.spot_ui_root_qua_from.fields.x;
  v51 = v2->fields.spot_ui_root_qua_from.fields.z;
  v52.n64_u64[0] = *(unsigned __int64 *)&v2->fields.spot_ui_root_qua_to.fields.x;
  v53 = v2->fields.spot_ui_root_qua_to.fields.z;
  v54 = StepFunc__Acc5(v5, 0LL);
  v55 = fminf(v54, 1.0);
  v56 = v54 < 0.0 ? 0.0 : v55;
  if ( !focusEarthPoint )
    goto LABEL_44;
  v57 = (float)(v53 - v51) * v56;
  v58.n64_u64[0] = vadd_f32(v50, vmul_n_f32(vsub_f32(v52, v50), v56)).n64_u64[0];
  *(int32x2_t *)&focusEarthPoint->fields.changedUiRootPosition.fields.x = v58;
  focusEarthPoint->fields.changedUiRootPosition.fields.z = v51 + v57;
  if ( !v2->fields.isStartSlideIn )
  {
    v59 = v2->fields.that;
    if ( !v59 )
      goto LABEL_44;
    if ( mNow > v59->fields.zoomInFrameInBoardRate )
    {
      v2->fields.isStartSlideIn = 1;
      this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v59->fields.mTerminalList;
      if ( !this )
        goto LABEL_44;
      ScrTerminalListTop__CallBlankEarthSpotCreateFinishEvent(
        (ScrTerminalListTop_o *)this,
        v59->fields.focusEarthPoint,
        0LL);
    }
  }
  v60 = (float32x2_t *)v2->fields.that;
  if ( !v60 || (v61 = v60[26].n64_u64[0]) == 0 )
LABEL_44:
    sub_1B4D1EC(this, method);
  if ( *(_DWORD *)(v61 + 296) == 1 )
  {
    spotList = v2->fields.spotList;
    if ( !spotList )
      goto LABEL_44;
    max_length = spotList->max_length;
    v58.n64_f32[0] = fminf(mNow, 1.0);
    if ( mNow < 0.0 )
      v58.n64_f32[0] = 0.0;
    if ( max_length >= 1 )
    {
      v64 = 0;
      v65.n64_u64[0] = vdup_lane_s32(v58, 0).n64_u64[0];
      while ( 1 )
      {
        if ( v64 >= (unsigned int)max_length )
          sub_1B4D1F4(this, method);
        this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)BlankEarth_TypeInfo;
        v66 = (float32x2_t *)spotList->m_Items[v64];
        if ( !BlankEarth_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
          v60 = (float32x2_t *)v2->fields.that;
          if ( !v60 )
            goto LABEL_44;
          this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)BlankEarth_TypeInfo;
        }
        if ( !v66 )
          goto LABEL_44;
        ++v64;
        v66[13].n64_u64[0] = vadd_f32(
                               *(float32x2_t *)&this->fields.spotList->max_length,
                               vmul_f32(v65, vsub_f32(v60[24], *(float32x2_t *)&this->fields.spotList->max_length))).n64_u64[0];
        max_length = spotList->max_length;
        if ( v64 >= max_length )
          return;
      }
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
  struct BlankEarth_o *v7; // x8
  struct BlankEarthPoint_o *focusEarthPoint; // x9
  struct BlankEarthPoint_array *spotList; // x9
  int max_length; // w10
  int v11; // w11
  BlankEarthPoint_o *v12; // x12

  that = this->fields.that;
  if ( !that )
    goto LABEL_22;
  v3 = this;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_22;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v3->fields.qua_to, 0LL);
  v4 = v3->fields.that;
  if ( !v4 )
    goto LABEL_22;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v4->fields.earthRoot;
  if ( !this )
    goto LABEL_22;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
  if ( !this )
    goto LABEL_22;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v3->fields.root_qua_to, 0LL);
  v5 = v3->fields.that;
  if ( !v5 )
    goto LABEL_22;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v5->fields.earthRoot;
  if ( !this )
    goto LABEL_22;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
  if ( !this )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v3->fields.root_pos_to, 0LL);
  v6 = v3->fields.that;
  if ( !v6 )
    goto LABEL_22;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v6->fields.earthRoot;
  if ( !this )
    goto LABEL_22;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
  if ( !this )
    goto LABEL_22;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v3->fields.root_scl_to, 0LL);
  v7 = v3->fields.that;
  if ( !v7 )
    goto LABEL_22;
  focusEarthPoint = v7->fields.focusEarthPoint;
  if ( !focusEarthPoint )
    goto LABEL_22;
  if ( focusEarthPoint->fields._spotOnType_k__BackingField == 1 )
  {
    spotList = v3->fields.spotList;
    if ( !spotList )
      goto LABEL_22;
    max_length = spotList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( max_length == v11 )
          sub_1B4D1F4(this, method);
        v12 = spotList->m_Items[v11];
        if ( !v12 )
          break;
        ++v11;
        *(_QWORD *)&v12->fields.dispSpriteDot = *(_QWORD *)&v7->fields.object1DispSpotUISpriteDot;
        if ( max_length == v11 )
          return;
      }
LABEL_22:
      sub_1B4D1EC(this, method);
    }
  }
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 blankEarth; // x0
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BlankEarth_o **v17; // x19
  float IntpTime_AutoResume; // s0
  BlankEarth_o *v19; // x8
  struct BlankEarthPoint_o *focusEarthPoint; // x9
  float v21; // s8
  UnityEngine_Object_o *otherObjectRoot; // x21
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x8
  UnityEngine_GameObject_o *v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  TerminalPramsManager_c *v36; // x0
  struct BlankEarthTransform_o *BlankEarthTransformData_k__BackingField; // x1
  __int64 v38; // x8
  __int64 v39; // x10
  int v40; // w9
  __int64 v41; // x8
  float zoomInOffset; // s9
  float v43; // s0
  float v44; // s1
  float v45; // s2
  float v46; // s3
  float v47; // s11
  float v48; // s10
  float v49; // s9
  float v50; // s12
  BlankEarth_o *v51; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  UnityEngine_Object_o *v54; // x21
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  BlankEarth_o *v57; // x21
  BlankEarthPoint_o *Point; // x1
  struct UnityEngine_Vector3_StaticFields *v59; // x9
  __int64 v60; // x8
  float v61; // s1
  __int64 v62; // d0
  int v63; // s1
  __int64 v64; // x8
  System_Object_array *ComponentsInChildren_object__49627240; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  EasingObject_o *v68; // x21
  System_Action_o *v69; // x22
  System_Action_o *v70; // x23
  __int64 v71; // x8
  UnityEngine_Object_o *v72; // x20
  Il2CppObject *v73; // x20
  const MethodInfo *v74; // x2
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49B7843 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, that);
    sub_1B4CF90(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v4);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___, v5);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v8);
    sub_1B4CF90(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, v9);
    sub_1B4CF90(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, v10);
    sub_1B4CF90(&BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo, v11);
    byte_49B7843 = 1;
  }
  v12 = sub_1B4D1DC(BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_82;
  *(_QWORD *)(v12 + 24) = that;
  v17 = (BlankEarth_o **)(v12 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 24), (int32_t)that, v15, v16);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ResetBlankEarthSpotInfo(0LL);
  if ( !*v17 )
    goto LABEL_82;
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume((*v17)->fields.zoomOutSpdTime, 0LL);
  v19 = *v17;
  if ( !*v17 )
    goto LABEL_82;
  focusEarthPoint = v19->fields.focusEarthPoint;
  if ( !focusEarthPoint )
    goto LABEL_82;
  v21 = IntpTime_AutoResume;
  if ( focusEarthPoint->fields._spotOnType_k__BackingField )
  {
    otherObjectRoot = (UnityEngine_Object_o *)v19->fields.otherObjectRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    blankEarth = UnityEngine_Object__op_Inequality(otherObjectRoot, 0LL, 0LL);
    if ( (blankEarth & 1) != 0 )
    {
      if ( !*v17 )
        goto LABEL_82;
      blankEarth = (__int64)(*v17)->fields.otherObjectRoot;
      if ( !blankEarth )
        goto LABEL_82;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)blankEarth,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      blankEarth = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( (blankEarth & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_82;
        v21 = *((float *)&Component_object[5].monitor + 1);
      }
    }
  }
  if ( !*v17 )
    goto LABEL_82;
  blankEarth = (__int64)(*v17)->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_82;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarth, 0LL);
  v25 = GameObjectExtensions__SafeGetComponent_object_(
          gameObject,
          (const MethodInfo_2F54F2C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v12 + 16) = v25;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 16), (int32_t)v25, v26, v27);
  v28 = *(_QWORD *)(v12 + 24);
  if ( !v28 )
    goto LABEL_82;
  blankEarth = *(_QWORD *)(v28 + 32);
  if ( !blankEarth )
    goto LABEL_82;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
  v29 = *(_QWORD *)(v12 + 24);
  *(UnityEngine_Quaternion_o *)(v12 + 48) = rotation;
  if ( !v29 )
    goto LABEL_82;
  blankEarth = *(_QWORD *)(v29 + 40);
  if ( !blankEarth )
    goto LABEL_82;
  blankEarth = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)blankEarth, 0LL);
  if ( !blankEarth )
    goto LABEL_82;
  v77 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
  v30 = *(_QWORD *)(v12 + 24);
  *(UnityEngine_Quaternion_o *)(v12 + 80) = v77;
  if ( !v30 )
    goto LABEL_82;
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v30 + 40), 0LL);
  v31 = *(_QWORD *)(v12 + 24);
  *(UnityEngine_Vector3_o *)(v12 + 108) = LocalPosition;
  if ( !v31 )
    goto LABEL_82;
  blankEarth = *(_QWORD *)(v31 + 40);
  if ( !blankEarth )
    goto LABEL_82;
  v32 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)blankEarth, 0LL);
  *(UnityEngine_Vector3_o *)(v12 + 132) = GameObjectExtensions__GetLocalScale(v32, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B7899 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v33);
    byte_49B7899 = 1;
  }
  v36 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  BlankEarthTransformData_k__BackingField = v36->static_fields->_BlankEarthTransformData_k__BackingField;
  *(_QWORD *)(v12 + 192) = BlankEarthTransformData_k__BackingField;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 192), (int32_t)BlankEarthTransformData_k__BackingField, v34, v35);
  v38 = *(_QWORD *)(v12 + 192);
  if ( v38 )
  {
    *(_OWORD *)(v12 + 32) = *(_OWORD *)(v38 + 16);
    *(_OWORD *)(v12 + 64) = *(_OWORD *)(v38 + 32);
    v39 = *(_QWORD *)(v38 + 48);
    *(_DWORD *)(v12 + 104) = *(_DWORD *)(v38 + 56);
    *(_QWORD *)(v12 + 96) = v39;
    v40 = *(_DWORD *)(v38 + 68);
    v41 = *(_QWORD *)(v38 + 60);
    *(_DWORD *)(v12 + 128) = v40;
    *(_QWORD *)(v12 + 120) = v41;
  }
  else
  {
    if ( !*v17 )
      goto LABEL_82;
    zoomInOffset = (*v17)->fields.zoomInOffset;
    if ( !byte_49B5369 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v14);
      byte_49B5369 = 1;
    }
    *(UnityEngine_Quaternion_o *)&v43 = UnityEngine_Quaternion__AngleAxis(
                                          zoomInOffset,
                                          UnityEngine_Vector3_TypeInfo->static_fields->upVector,
                                          0LL);
    if ( !*v17 )
      goto LABEL_82;
    blankEarth = (__int64)(*v17)->fields.blankEarth;
    if ( !blankEarth )
      goto LABEL_82;
    v47 = v43;
    v48 = v44;
    v49 = v45;
    v50 = v46;
    v78 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
    v51 = *(BlankEarth_o **)(v12 + 24);
    *(_DWORD *)(v12 + 32) = 0;
    *(float *)(v12 + 36) = (float)((float)(v49 * v78.fields.x)
                                 + (float)((float)(v50 * v78.fields.y) + (float)(v48 * v78.fields.w)))
                         - (float)(v47 * v78.fields.z);
    *(float *)(v12 + 44) = (float)((float)((float)(v50 * v78.fields.w) - (float)(v47 * v78.fields.x))
                                 - (float)(v48 * v78.fields.y))
                         - (float)(v49 * v78.fields.z);
    *(_DWORD *)(v12 + 40) = 0;
    if ( !v51 )
      goto LABEL_82;
    *(struct UnityEngine_Quaternion_o *)(v12 + 64) = v51->fields.mRootQua;
    if ( !byte_49B5361 )
    {
      blankEarth = sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v14);
      byte_49B5361 = 1;
      v51 = *v17;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)(v12 + 96) = *(_QWORD *)&static_fields->zeroVector.fields.x;
    *(float *)(v12 + 104) = z;
    if ( !v51 )
      goto LABEL_82;
    *(UnityEngine_Vector3_o *)(v12 + 120) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)blankEarth, v14);
  }
  if ( !*v17 )
    goto LABEL_82;
  v54 = (UnityEngine_Object_o *)(*v17)->fields.focusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = UnityEngine_Object__op_Inequality(v54, 0LL, 0LL);
  v57 = *v17;
  if ( (blankEarth & 1) != 0 )
  {
    if ( !v57 )
      goto LABEL_82;
    Point = v57->fields.focusEarthPoint;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49B7898 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v14);
      byte_49B7898 = 1;
    }
    blankEarth = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      blankEarth = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v57 )
      goto LABEL_82;
    Point = BlankEarth__GetPoint(v57, *(_DWORD *)(*(_QWORD *)(blankEarth + 184) + 508LL), 0, v56);
  }
  *(_QWORD *)(v12 + 144) = Point;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 144), (int32_t)Point, v55, v56);
  if ( !byte_49B5361 )
  {
    blankEarth = sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v14);
    byte_49B5361 = 1;
  }
  v59 = UnityEngine_Vector3_TypeInfo->static_fields;
  v60 = *(_QWORD *)(v12 + 144);
  v61 = v59->zeroVector.fields.z;
  *(_QWORD *)(v12 + 164) = *(_QWORD *)&v59->zeroVector.fields.x;
  *(float *)(v12 + 172) = v61;
  if ( !v60 )
    goto LABEL_82;
  v62 = *(_QWORD *)(v60 + 144);
  v63 = *(_DWORD *)(v60 + 152);
  v64 = *(_QWORD *)(v12 + 24);
  *(_QWORD *)(v12 + 152) = v62;
  *(_DWORD *)(v12 + 160) = v63;
  if ( !v64 )
    goto LABEL_82;
  blankEarth = *(_QWORD *)(v64 + 48);
  if ( !blankEarth )
    goto LABEL_82;
  ComponentsInChildren_object__49627240 = UnityEngine_GameObject__GetComponentsInChildren_object__49627240(
                                            (UnityEngine_GameObject_o *)blankEarth,
                                            (const MethodInfo_2F54068 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  *(_QWORD *)(v12 + 184) = ComponentsInChildren_object__49627240;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 184), (int32_t)ComponentsInChildren_object__49627240, v66, v67);
  *(_BYTE *)(v12 + 176) = 0;
  v68 = *(EasingObject_o **)(v12 + 16);
  v69 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v69, (Il2CppObject *)v12, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, 0LL);
  v70 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v70, (Il2CppObject *)v12, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, 0LL);
  v71 = *(_QWORD *)(v12 + 24);
  if ( !v71 )
    goto LABEL_82;
  if ( !v68 )
    goto LABEL_82;
  EasingObject__Play_47132360(v68, 1.0, 0.0, v21, v69, v70, 0.0, *(_DWORD *)(v71 + 184), 0LL);
  if ( !*v17 )
    goto LABEL_82;
  v72 = (UnityEngine_Object_o *)(*v17)->fields.otherObjectRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = UnityEngine_Object__op_Inequality(v72, 0LL, 0LL);
  if ( (blankEarth & 1) != 0 )
  {
    if ( !*v17 )
      goto LABEL_82;
    blankEarth = (__int64)(*v17)->fields.otherObjectRoot;
    if ( !blankEarth )
      goto LABEL_82;
    v73 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)blankEarth,
            (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    blankEarth = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v73, 0LL);
    if ( (blankEarth & 1) != 0 )
    {
      if ( *v17 && v73 )
      {
        BlankEarthOtherObject__ZoomOutAdjustAppearance(
          (BlankEarthOtherObject_o *)v73,
          v21,
          (*v17)->fields.zoomOutEasingType,
          v74);
        return;
      }
LABEL_82:
      sub_1B4D1EC(blankEarth, v14);
    }
  }
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
  float mNow; // s9
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
  float32x2_t v24; // d12
  float v25; // s13
  UnityEngine_Transform_o *v26; // x20
  float v27; // s0
  float v28; // s1
  bool v29; // nf
  float v30; // s0
  float v31; // s1
  unsigned __int64 v32; // d0 OVERLAPPED
  float v33; // s2
  int v34; // s1
  struct BlankEarth_o *v35; // x8
  UnityEngine_Transform_o *v36; // x0
  float32x2_t v37; // d12
  float v38; // s13
  float32x2_t v39; // d14
  float v40; // s15
  UnityEngine_Transform_o *v41; // x20
  float v42; // s0
  float v43; // s1
  float v44; // s0
  float v45; // s1
  unsigned __int64 v46; // d0 OVERLAPPED
  float v47; // s2
  int v48; // s1
  struct BlankEarthPoint_o *focusEarthPoint; // x20
  float32x2_t v50; // d12
  float v51; // s13
  float32x2_t v52; // d14
  float v53; // s15
  float v54; // s0
  float v55; // s1
  float v56; // s0
  float v57; // s1
  int32x2_t v58; // d0
  struct BlankEarth_o *v59; // x8
  struct BlankEarth_o *v60; // x8
  float32x2_t *v61; // x8
  unsigned __int64 v62; // x9
  struct BlankEarthPoint_array *spotList; // x9
  int max_length; // w10
  int v65; // w11
  float32x2_t v66; // d0
  float32x2_t *v67; // x12

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_41;
  mNow = eo->fields.mNow;
  v4 = this;
  v5 = mNow;
  v6 = StepFunc__AccSig(mNow, 0LL);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_41;
  blankEarth = that->fields.blankEarth;
  v9 = v6;
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Slerp(v4->fields.qua_to, v4->fields.qua_from, v9, 0LL);
  if ( !blankEarth )
    goto LABEL_41;
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v10, 0LL);
  v14 = v4->fields.that;
  if ( !v14 )
    goto LABEL_41;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v14->fields.earthRoot;
  if ( !this )
    goto LABEL_41;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__Slerp(
                                        v4->fields.root_qua_to,
                                        v4->fields.root_qua_from,
                                        v9,
                                        0LL);
  if ( !transform )
    goto LABEL_41;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v16, 0LL);
  v20 = v4->fields.that;
  if ( !v20 )
    goto LABEL_41;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v20->fields.earthRoot;
  if ( !this )
    goto LABEL_41;
  v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v22.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_to.fields.x;
  z = v4->fields.root_pos_to.fields.z;
  v24.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_from.fields.x;
  v25 = v4->fields.root_pos_from.fields.z;
  v26 = v21;
  v27 = StepFunc__DecSin(v5, 0LL);
  v28 = fminf(v27, 1.0);
  v29 = v27 < 0.0;
  v30 = 0.0;
  if ( !v29 )
    v30 = v28;
  if ( !v26 )
    goto LABEL_41;
  v31 = (float)(v25 - z) * v30;
  v32 = vadd_f32(v22, vmul_n_f32(vsub_f32(v24, v22), v30)).n64_u64[0];
  v33 = z + v31;
  v34 = HIDWORD(v32);
  UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v32, 0LL);
  v35 = v4->fields.that;
  if ( !v35 )
    goto LABEL_41;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v35->fields.earthRoot;
  if ( !this )
    goto LABEL_41;
  v36 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v37.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_to.fields.x;
  v38 = v4->fields.root_scl_to.fields.z;
  v39.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_from.fields.x;
  v40 = v4->fields.root_scl_from.fields.z;
  v41 = v36;
  v42 = StepFunc__Acc5(v5, 0LL);
  v43 = fminf(v42, 1.0);
  v44 = v42 < 0.0 ? 0.0 : v43;
  if ( !v41 )
    goto LABEL_41;
  v45 = (float)(v40 - v38) * v44;
  v46 = vadd_f32(v37, vmul_n_f32(vsub_f32(v39, v37), v44)).n64_u64[0];
  v47 = v38 + v45;
  v48 = HIDWORD(v46);
  UnityEngine_Transform__set_localScale(v41, *(UnityEngine_Vector3_o *)&v46, 0LL);
  focusEarthPoint = v4->fields.focusEarthPoint;
  v50.n64_u64[0] = *(unsigned __int64 *)&v4->fields.spot_ui_root_qua_to.fields.x;
  v51 = v4->fields.spot_ui_root_qua_to.fields.z;
  v52.n64_u64[0] = *(unsigned __int64 *)&v4->fields.spot_ui_root_qua_from.fields.x;
  v53 = v4->fields.spot_ui_root_qua_from.fields.z;
  v54 = StepFunc__Acc5(v5, 0LL);
  v55 = fminf(v54, 1.0);
  v56 = v54 < 0.0 ? 0.0 : v55;
  if ( !focusEarthPoint )
    goto LABEL_41;
  v57 = (float)(v53 - v51) * v56;
  v58.n64_u64[0] = vadd_f32(v50, vmul_n_f32(vsub_f32(v52, v50), v56)).n64_u64[0];
  *(int32x2_t *)&focusEarthPoint->fields.changedUiRootPosition.fields.x = v58;
  focusEarthPoint->fields.changedUiRootPosition.fields.z = v51 + v57;
  if ( !v4->fields.isStartRotateBtn )
  {
    v59 = v4->fields.that;
    if ( !v59 )
      goto LABEL_41;
    if ( mNow < v59->fields.zoomOutFrameInRotateBtnRate )
    {
      v4->fields.isStartRotateBtn = 1;
      this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v59->fields.mTerminalList;
      if ( !this )
        goto LABEL_41;
      ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
        (ScrTerminalListTop_o *)this,
        v59->fields.earthBtnMoveSpeedTime,
        1,
        0,
        0LL);
      v60 = v4->fields.that;
      if ( !v60 )
        goto LABEL_41;
      this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v60->fields.mTerminalList;
      if ( !this )
        goto LABEL_41;
      ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)this, 1, 0, 0LL);
    }
  }
  v61 = (float32x2_t *)v4->fields.that;
  if ( !v61 )
    goto LABEL_41;
  v62 = v61[26].n64_u64[0];
  if ( !v62 )
    goto LABEL_41;
  if ( *(_DWORD *)(v62 + 296) == 1 )
  {
    spotList = v4->fields.spotList;
    if ( !spotList )
      goto LABEL_41;
    max_length = spotList->max_length;
    v58.n64_f32[0] = fminf(mNow, 1.0);
    if ( mNow < 0.0 )
      v58.n64_f32[0] = 0.0;
    if ( max_length >= 1 )
    {
      v65 = 0;
      v66.n64_u64[0] = vdup_lane_s32(v58, 0).n64_u64[0];
      while ( 1 )
      {
        if ( max_length == v65 )
          sub_1B4D1F4(this, method);
        v67 = (float32x2_t *)spotList->m_Items[v65];
        if ( !v67 )
          break;
        ++v65;
        v67[13].n64_u64[0] = vadd_f32(v67[32], vmul_f32(v66, vsub_f32(v61[24], v67[32]))).n64_u64[0];
        if ( max_length == v65 )
          return;
      }
LABEL_41:
      sub_1B4D1EC(this, method);
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
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct BlankEarth_o *v11; // x8
  const MethodInfo *v12; // x2
  _DWORD *monitor; // x8
  struct BlankEarthPoint_array *spotList; // x8
  int max_length; // w9
  int i; // w10
  BlankEarthPoint_o *v17; // x11

  v2 = this;
  if ( (byte_49B7844 & 1) == 0 )
  {
    this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)sub_1B4CF90(&StringLiteral_19517/*"gevINFOBAR_BACK"*/, method);
    byte_49B7844 = 1;
  }
  blankEarthTransform = v2->fields.blankEarthTransform;
  that = v2->fields.that;
  if ( blankEarthTransform )
  {
    totalAngle = blankEarthTransform->fields.totalAngle;
    if ( !that )
      goto LABEL_35;
  }
  else
  {
    totalAngle = 0.0;
    if ( !that )
      goto LABEL_35;
  }
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)that->fields.blankEarth;
  that->fields.totalAngle = totalAngle;
  if ( !this )
    goto LABEL_35;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v2->fields.qua_to, 0LL);
  v6 = v2->fields.that;
  if ( !v6 )
    goto LABEL_35;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v6->fields.earthRoot;
  if ( !this )
    goto LABEL_35;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_35;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v2->fields.root_qua_to, 0LL);
  v7 = v2->fields.that;
  if ( !v7 )
    goto LABEL_35;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v7->fields.earthRoot;
  if ( !this )
    goto LABEL_35;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_35;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v2->fields.root_pos_to, 0LL);
  v8 = v2->fields.that;
  if ( !v8 )
    goto LABEL_35;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v8->fields.earthRoot;
  if ( !this )
    goto LABEL_35;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_35;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v2->fields.root_scl_to, 0LL);
  v9 = v2->fields.that;
  if ( !v9 )
    goto LABEL_35;
  mTerminalList = v9->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_35;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)mTerminalList->fields.mActionBgColl;
  if ( !this )
    goto LABEL_35;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v11 = v2->fields.that;
  if ( !v11
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v11->fields.mTerminalList) == 0LL
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)ScrTerminalListTop__mfGetMyFsmP(
                                                                   (ScrTerminalListTop_o *)this,
                                                                   0LL)) == 0LL
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL)) == 0LL
    || (HutongGames_PlayMaker_Fsm__Event_63921020(
          (HutongGames_PlayMaker_Fsm_o *)this,
          (System_String_o *)StringLiteral_19517/*"gevINFOBAR_BACK"*/,
          0LL),
        (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v2->fields.that) == 0LL)
    || (monitor = this[1].monitor) == 0LL )
  {
LABEL_35:
    sub_1B4D1EC(this, method);
  }
  if ( monitor[74] == 1 )
  {
    spotList = v2->fields.spotList;
    if ( !spotList )
      goto LABEL_35;
    max_length = spotList->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i != max_length; ++i )
      {
        if ( max_length == i )
          sub_1B4D1F4(this, method);
        v17 = spotList->m_Items[i];
        if ( !v17 )
          goto LABEL_35;
        *(_QWORD *)&v17->fields.dispSpriteDot = *(_QWORD *)&v17->fields._DefaultDispSpriteDot_k__BackingField;
      }
    }
  }
  BlankEarth__SetState((BlankEarth_o *)this, 2, v12);
}


void __fastcall BlankEarth__CoCheckTutorial_d__92___ctor(
        BlankEarth__CoCheckTutorial_d__92_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarth__CoCheckTutorial_d__92__MoveNext(
        BlankEarth__CoCheckTutorial_d__92_o *this,
        const MethodInfo *method)
{
  BlankEarth__CoCheckTutorial_d__92_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  BlankEarth_o *_4__this; // x20
  Il2CppObject *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Action_o *finishCallback; // x1
  float time_5__2; // s0
  float v16; // s8
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  bool result; // w0
  __int64 v21; // x21
  Il2CppObject *_8__1; // x22
  System_Action_o *v23; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct TutorialCommunicateAdapter_o *adapter; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct TutorialCommunicateAdapter_o *afterActionAdapter; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  v2 = this;
  if ( (byte_49B784B & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1B4CF90(&Method_BlankEarth___c__DisplayClass92_0__CoCheckTutorial_g__OnFinish_0__, v5);
    this = (BlankEarth__CoCheckTutorial_d__92_o *)sub_1B4CF90(&BlankEarth___c__DisplayClass92_0_TypeInfo, v6);
    byte_49B784B = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    time_5__2 = v2->fields._time_5__2;
    v2->fields.__1__state = -1;
    if ( time_5__2 > 5.0 )
      goto LABEL_11;
    goto LABEL_8;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v9 = (Il2CppObject *)sub_1B4D1DC(BlankEarth___c__DisplayClass92_0_TypeInfo);
    System_Object___ctor(v9, 0LL);
    v2->fields.__8__1 = (struct BlankEarth___c__DisplayClass92_0_o *)v9;
    sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.__8__1, (int32_t)v9, v10, v11);
    this = (BlankEarth__CoCheckTutorial_d__92_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_16;
    finishCallback = v2->fields.finishCallback;
    *(_QWORD *)&this->fields.__1__state = finishCallback;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)finishCallback, v12, v13);
    v2->fields._time_5__2 = 0.0;
LABEL_8:
    if ( !_4__this )
      goto LABEL_16;
    if ( BlankEarth__GetState(_4__this, method) == 1 )
    {
      v16 = v2->fields._time_5__2;
      v2->fields._time_5__2 = v16 + UnityEngine_Time__get_deltaTime(0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1B4CF34(p__2__current, 0, v18, v19);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_11:
    this = (BlankEarth__CoCheckTutorial_d__92_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0LL);
      v21 = sub_1B4D1DC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
      EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v21, 0LL);
      if ( v21 )
      {
        *(_DWORD *)(v21 + 20) = 83;
        _8__1 = (Il2CppObject *)v2->fields.__8__1;
        v23 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
        System_Action___ctor(v23, _8__1, Method_BlankEarth___c__DisplayClass92_0__CoCheckTutorial_g__OnFinish_0__, 0LL);
        *(_QWORD *)(v21 + 24) = v23;
        sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 24), (int32_t)v23, v24, v25);
        adapter = v2->fields.adapter;
        *(_QWORD *)(v21 + 48) = adapter;
        sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 48), (int32_t)adapter, v27, v28);
        afterActionAdapter = v2->fields.afterActionAdapter;
        *(_QWORD *)(v21 + 56) = afterActionAdapter;
        sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 56), (int32_t)afterActionAdapter, v30, v31);
        this = (BlankEarth__CoCheckTutorial_d__92_o *)EventTutorialMaster__CoroutineCheckTutorial(
                                                        (EventTutorialMaster_EventTutorialArgs_o *)v21,
                                                        0LL);
        if ( _4__this )
        {
          UnityEngine_MonoBehaviour__StartCoroutine_68789728(
            (UnityEngine_MonoBehaviour_o *)_4__this,
            (System_Collections_IEnumerator_o *)this,
            0LL);
          result = 0;
          _4__this->fields.isTutorialAvailable = 0;
          return result;
        }
      }
    }
LABEL_16:
    sub_1B4D1EC(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BlankEarth__CoCheckTutorial_d__92__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarth__CoCheckTutorial_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarth__CoCheckTutorial_d__92__System_Collections_IEnumerator_Reset(
        BlankEarth__CoCheckTutorial_d__92_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_BlankEarth__CoCheckTutorial_d__92_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall BlankEarth__CoCheckTutorial_d__92__System_Collections_IEnumerator_get_Current(
        BlankEarth__CoCheckTutorial_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarth__CoCheckTutorial_d__92__System_IDisposable_Dispose(
        BlankEarth__CoCheckTutorial_d__92_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth__CoStandByChangeState_d__94___ctor(
        BlankEarth__CoStandByChangeState_d__94_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarth__CoStandByChangeState_d__94__MoveNext(
        BlankEarth__CoStandByChangeState_d__94_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BlankEarth_o *_4__this; // x0
  int32_t state; // w20
  float time_5__2; // s8
  Il2CppObject **p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0

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
    sub_1B4D1EC(0LL, method);
  state = this->fields.state;
  if ( BlankEarth__GetState(_4__this, method) == state )
  {
    time_5__2 = this->fields._time_5__2;
    this->fields._time_5__2 = time_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_1B4CF34((CGThumbnailListItem_o *)p__2__current, 0, v8, v9);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
  return 0;
}


Il2CppObject *__fastcall BlankEarth__CoStandByChangeState_d__94__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarth__CoStandByChangeState_d__94_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarth__CoStandByChangeState_d__94__System_Collections_IEnumerator_Reset(
        BlankEarth__CoStandByChangeState_d__94_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_BlankEarth__CoStandByChangeState_d__94_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall BlankEarth__CoStandByChangeState_d__94__System_Collections_IEnumerator_get_Current(
        BlankEarth__CoStandByChangeState_d__94_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarth__CoStandByChangeState_d__94__System_IDisposable_Dispose(
        BlankEarth__CoStandByChangeState_d__94_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B7849 & 1) == 0 )
  {
    sub_1B4CF90(&BlankEarth___c_TypeInfo, v1);
    byte_49B7849 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(BlankEarth___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BlankEarth___c_TypeInfo->static_fields->__9 = (struct BlankEarth___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)BlankEarth___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BlankEarth___c___ctor(BlankEarth___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarth___c___UpdateSpotDisp_b__111_0(
        BlankEarth___c_o *this,
        BlankEarthPoint_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  BlankEarthPoint__UpdateDisp(x, 1, method);
}


void __fastcall BlankEarth___c___UpdateSpotDisp_b__111_1(
        BlankEarth___c_o *this,
        BlankEarthPoint_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  if ( !x )
    sub_1B4D1EC(this, 0LL);
  BlankEarthPoint__UpdateAreaInfoList(x, (const MethodInfo *)x);
  BlankEarthPoint__UpdateDisp(x, 1, v4);
}


void __fastcall BlankEarth___c__DisplayClass92_0___ctor(
        BlankEarth___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarth___c__DisplayClass92_0___CoCheckTutorial_g__OnFinish_0(
        BlankEarth___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49B784A & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49B784A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}