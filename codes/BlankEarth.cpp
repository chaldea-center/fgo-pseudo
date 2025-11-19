void BlankEarth___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct BlankEarth_StaticFields *static_fields; // x8
  int32_t v4; // w1
  struct BlankEarth_StaticFields *v5; // x0

  if ( (byte_4CB2ABB & 1) == 0 )
  {
    sub_1C6BA08(&BlankEarth_TypeInfo);
    sub_1C6BA08(&StringLiteral_17323/*"blankEarthRotateKey"*/);
    byte_4CB2ABB = 1;
  }
  static_fields = BlankEarth_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SOUTH_POLE_ROTATE.fields.x = 0x4292000041F80000LL;
  static_fields->SOUTH_POLE_ROTATE.fields.z = 60.0;
  v4 = StringLiteral_17323/*"blankEarthRotateKey"*/;
  v5 = BlankEarth_TypeInfo->static_fields;
  v5->BLANK_EARTH_ROTATE_KEY = (struct System_String_o *)StringLiteral_17323/*"blankEarthRotateKey"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v5->BLANK_EARTH_ROTATE_KEY, v4, v1, v2);
  *(_QWORD *)&BlankEarth_TypeInfo->static_fields->EARTH_DISP_SPOT_UI_SPRITE_DOT = 0x3E19999A3E99999ALL;
}


void BlankEarth___ctor(BlankEarth_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4CB2ABA & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16870/*"ar223"*/);
    byte_4CB2ABA = 1;
  }
  *(_OWORD *)&this->fields.greenwichOffset = xmmword_CED140;
  *(_OWORD *)&this->fields.zoomOutSpdTime = xmmword_CECFC0;
  *(_OWORD *)&this->fields.earthRadius = xmmword_CECE30;
  v5 = StringLiteral_16870/*"ar223"*/;
  this->fields.startupSeName = (struct System_String_o *)StringLiteral_16870/*"ar223"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.startupSeName, v5, v2, v3);
  *(_QWORD *)&this->fields.zoomInEasingType = 0x300000003LL;
  *(_OWORD *)&this->fields.firstAnimTime = xmmword_CED390;
  this->fields.btnSpeedRate = 3.5;
  *(_OWORD *)&this->fields.zoomInPos.fields.y = xmmword_CEBE00;
  *(_QWORD *)&this->fields.adjustEarthScale.fields.z = 0x3E8000003F400000LL;
  this->fields.startupEasingType = 2;
  *(_QWORD *)&this->fields.object1DispSpotUISpriteDot = 0x3ECCCCCD3F266666LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BlankEarth__Awake(BlankEarth_o *this, const MethodInfo *method)
{
  struct CStateManager_BlankEarth__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v8; // x22
  UnityEngine_GameObject_o *earthRoot; // x0
  CStateManager_T__o *v10; // x21
  Il2CppObject *v11; // x22
  CStateManager_T__o *v12; // x21
  Il2CppObject *v13; // x22
  CStateManager_T__o *v14; // x21
  Il2CppObject *v15; // x22
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x21
  BlankEarth_StateQAARotate_o *v19; // x22
  CStateManager_T__o *v20; // x21
  BlankEarth_StateShortcutRotate_o *v21; // x22
  CStateManager_T__o *v22; // x21
  BlankEarth_StateGrandStartup_o *v23; // x22
  CStateManager_T__o *v24; // x20
  BlankEarth_StateGrandMain_o *v25; // x21
  const MethodInfo *v26; // x2

  if ( (byte_4CB2A98 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CStateManager_BlankEarth___ctor__);
    sub_1C6BA08(&Method_CStateManager_BlankEarth__add__);
    sub_1C6BA08(&CStateManager_BlankEarth__TypeInfo);
    sub_1C6BA08(&BlankEarth_StateGrandMain_TypeInfo);
    sub_1C6BA08(&BlankEarth_StateGrandStartup_TypeInfo);
    sub_1C6BA08(&BlankEarth_StateMain_TypeInfo);
    sub_1C6BA08(&BlankEarth_StateNone_TypeInfo);
    sub_1C6BA08(&BlankEarth_StateQAARotate_TypeInfo);
    sub_1C6BA08(&BlankEarth_StateShortcutRotate_TypeInfo);
    sub_1C6BA08(&BlankEarth_StateStartup_TypeInfo);
    sub_1C6BA08(&BlankEarth_StateZoomIn_TypeInfo);
    sub_1C6BA08(&BlankEarth_StateZoomOut_TypeInfo);
    byte_4CB2A98 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C6BC54(CStateManager_BlankEarth__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      9,
      (const MethodInfo_33848C4 *)Method_CStateManager_BlankEarth___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarth__o *)v4;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1C6BC54(BlankEarth_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !mFSM )
      goto LABEL_17;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_338496C *)Method_CStateManager_BlankEarth__add__);
    v10 = (CStateManager_T__o *)*p_mFSM;
    v11 = (Il2CppObject *)sub_1C6BC54(BlankEarth_StateStartup_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !v10 )
      goto LABEL_17;
    CStateManager_object___add(
      v10,
      1,
      (IState_T__o *)v11,
      (const MethodInfo_338496C *)Method_CStateManager_BlankEarth__add__);
    v12 = (CStateManager_T__o *)*p_mFSM;
    v13 = (Il2CppObject *)sub_1C6BC54(BlankEarth_StateMain_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !v12 )
      goto LABEL_17;
    CStateManager_object___add(
      v12,
      2,
      (IState_T__o *)v13,
      (const MethodInfo_338496C *)Method_CStateManager_BlankEarth__add__);
    v14 = (CStateManager_T__o *)*p_mFSM;
    v15 = (Il2CppObject *)sub_1C6BC54(BlankEarth_StateZoomIn_TypeInfo);
    System_Object___ctor(v15, 0);
    if ( !v14 )
      goto LABEL_17;
    CStateManager_object___add(
      v14,
      3,
      (IState_T__o *)v15,
      (const MethodInfo_338496C *)Method_CStateManager_BlankEarth__add__);
    v16 = (CStateManager_T__o *)*p_mFSM;
    v17 = (Il2CppObject *)sub_1C6BC54(BlankEarth_StateZoomOut_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_17;
    CStateManager_object___add(
      v16,
      4,
      (IState_T__o *)v17,
      (const MethodInfo_338496C *)Method_CStateManager_BlankEarth__add__);
    v18 = (CStateManager_T__o *)*p_mFSM;
    v19 = (BlankEarth_StateQAARotate_o *)sub_1C6BC54(BlankEarth_StateQAARotate_TypeInfo);
    BlankEarth_StateQAARotate___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_17;
    CStateManager_object___add(
      v18,
      5,
      (IState_T__o *)v19,
      (const MethodInfo_338496C *)Method_CStateManager_BlankEarth__add__);
    v20 = (CStateManager_T__o *)*p_mFSM;
    v21 = (BlankEarth_StateShortcutRotate_o *)sub_1C6BC54(BlankEarth_StateShortcutRotate_TypeInfo);
    BlankEarth_StateShortcutRotate___ctor(v21, 0);
    if ( !v20 )
      goto LABEL_17;
    CStateManager_object___add(
      v20,
      6,
      (IState_T__o *)v21,
      (const MethodInfo_338496C *)Method_CStateManager_BlankEarth__add__);
    v22 = (CStateManager_T__o *)*p_mFSM;
    v23 = (BlankEarth_StateGrandStartup_o *)sub_1C6BC54(BlankEarth_StateGrandStartup_TypeInfo);
    BlankEarth_StateGrandStartup___ctor(v23, 0);
    if ( !v22
      || (CStateManager_object___add(
            v22,
            7,
            (IState_T__o *)v23,
            (const MethodInfo_338496C *)Method_CStateManager_BlankEarth__add__),
          v24 = (CStateManager_T__o *)*p_mFSM,
          v25 = (BlankEarth_StateGrandMain_o *)sub_1C6BC54(BlankEarth_StateGrandMain_TypeInfo),
          BlankEarth_StateGrandMain___ctor(v25, 0),
          !v24) )
    {
LABEL_17:
      sub_1C6BC60(earthRoot, method);
    }
    CStateManager_object___add(
      v24,
      8,
      (IState_T__o *)v25,
      (const MethodInfo_338496C *)Method_CStateManager_BlankEarth__add__);
    BlankEarth__SetState(this, 0, v26);
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
  float v39; // s8
  float v40; // s9
  float z; // s10
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4CB2A9C & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_1C6BA08(&CTouch_TypeInfo);
    byte_4CB2A9C = 1;
  }
  if ( !that )
LABEL_73:
    sub_1C6BC60(this, that);
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
      if ( !byte_4CB2AC5 )
      {
        sub_1C6BA08(&CTouch_TypeInfo);
        byte_4CB2AC5 = 1;
      }
      v11 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
      }
      x = v11->static_fields->mScrPosDelta.fields.x;
      if ( !byte_4CB2AC6 )
      {
        sub_1C6BA08(&CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
        byte_4CB2AC6 = 1;
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
      if ( !byte_4CB2AC5 )
      {
        sub_1C6BA08(&CTouch_TypeInfo);
        byte_4CB2AC5 = 1;
      }
      v15 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v15 = CTouch_TypeInfo;
      }
      y = v15->static_fields->mScrPosDelta.fields.y;
      if ( !byte_4CB2AC6 )
      {
        sub_1C6BA08(&CTouch_TypeInfo);
        v15 = CTouch_TypeInfo;
        byte_4CB2AC6 = 1;
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
    if ( !byte_4CAFC0D )
    {
      sub_1C6BA08(&UnityEngine_Mathf_TypeInfo);
      byte_4CAFC0D = 1;
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
  v39 = position.fields.x;
  v40 = position.fields.y;
  z = position.fields.z;
  if ( !byte_4CAFC10 )
  {
    this = (BlankEarth_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC10 = 1;
  }
  if ( !v38 )
    goto LABEL_73;
  v43.fields.y = v40;
  v43.fields.x = v39;
  v43.fields.z = z;
  UnityEngine_Transform__RotateAround(
    (UnityEngine_Transform_o *)v38,
    v43,
    UnityEngine_Vector3_TypeInfo->static_fields->rightVector,
    -*inertialSpeedY,
    0);
  this = (BlankEarth_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_73;
  v44.fields.y = *inertialSpeedX;
  v44.fields.x = 0.0;
  v44.fields.z = 0.0;
  UnityEngine_Transform__Rotate_71684520((UnityEngine_Transform_o *)this, v44, 0);
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
    UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v11, 0);
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
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4CB2A9D & 1) == 0 )
  {
    sub_1C6BA08(&BlankEarth__CoCheckTutorial_d__97_TypeInfo);
    byte_4CB2A9D = 1;
  }
  v9 = sub_1C6BC54(BlankEarth__CoCheckTutorial_d__97_TypeInfo);
  BlankEarth__CoCheckTutorial_d__97___ctor((BlankEarth__CoCheckTutorial_d__97_o *)v9, 0, 0);
  if ( !v9 )
    sub_1C6BC60(v10, v11);
  *(_QWORD *)(v9 + 40) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 56) = adapter;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 56), (int32_t)adapter, v14, v15);
  *(_QWORD *)(v9 + 64) = afterActionAdapter;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 64), (int32_t)afterActionAdapter, v16, v17);
  *(_QWORD *)(v9 + 32) = finishCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)finishCallback, v18, v19);
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4CB2A9E & 1) == 0 )
  {
    sub_1C6BA08(&BlankEarth__CoStandByChangeState_d__99_TypeInfo);
    byte_4CB2A9E = 1;
  }
  v7 = sub_1C6BC54(BlankEarth__CoStandByChangeState_d__99_TypeInfo);
  BlankEarth__CoStandByChangeState_d__99___ctor((BlankEarth__CoStandByChangeState_d__99_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C6BC60(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 40) = state;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)finishCallback, v12, v13);
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
  UnityEngine_Quaternion_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
  if ( !byte_4CAFC0C )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CAFC0C = 1;
  }
  v13 = v12 * v10;
  v14 = earthRadius * v9;
  v15 = v11 * v10;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v16 = sqrtf((float)(v15 * v15) + (float)((float)(v14 * v14) + (float)(v13 * v13)));
  if ( v16 <= 0.00001 )
  {
    if ( !byte_4CAFC09 )
    {
      sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC09 = 1;
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
  v26 = UnityEngine_Quaternion__LookRotation_71597956(v25, 0);
  return UnityEngine_Quaternion__Inverse(v26, 0);
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

  if ( (byte_4CB2AA6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_3172/*"BlankEarthGimmick_"*/);
    byte_4CB2AA6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__Instantiate_object_(
          (Il2CppObject *)obj,
          (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_36361856((UnityEngine_GameObject_o *)v13, this->fields.earthGimmickRoot, 0);
  if ( !byte_4CAFC0E )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
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
  transform = System_String__Concat_63966792((System_String_o *)StringLiteral_3172/*"BlankEarthGimmick_"*/, v17, 0);
  if ( !v16 )
    goto LABEL_14;
  UnityEngine_Object__set_name(v16, transform, 0);
  GameObjectExtensions__SetLocalPosition_36356244((UnityEngine_GameObject_o *)v13, x, y, z, 0);
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
  blankEarth = this->fields.blankEarth;
  if ( !blankEarth
    || (v19 = (UnityEngine_Transform_o *)transform, position = UnityEngine_Transform__get_position(blankEarth, 0), !v19)
    || (UnityEngine_Transform__LookAt_71685600(v19, position, 0),
        (transform = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v13,
                                          (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___)) == 0) )
  {
LABEL_14:
    sub_1C6BC60(transform, v15);
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
  TerminalSceneComponent_c *v13; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v15; // x1
  __int64 Component_object; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  UnityEngine_GameObject_o *v22; // x22
  UnityEngine_Object_o *v23; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  int32_t onObjectType; // w8
  float v26; // s11
  float v27; // s12
  float v28; // s13
  UnityEngine_GameObject_o *klass; // x23
  Il2CppObject *v30; // x24
  UnityEngine_Object_o *transform; // x23
  System_String_o *v32; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB2AAC & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_3173/*"BlankEarthPoint_"*/);
    byte_4CB2AAC = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  v13 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v13 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v13->static_fields->mInstance;
  v15 = *p_mInstance;
  this->fields.mTerminalScene = *p_mInstance;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mTerminalScene, (int32_t)v15, (int32_t)spotEnt, method);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_39;
  mTerminalList = mTerminalScene->fields.mTerminalList;
  this->fields.mTerminalList = mTerminalList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mTerminalList, (int32_t)mTerminalList, v18, v19);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                (Il2CppObject *)spotObj,
                                (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_39;
  v22 = (UnityEngine_GameObject_o *)Component_object;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Component_object,
                                (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
  v23 = (UnityEngine_Object_o *)Component_object;
  if ( !byte_4CAFC09 )
  {
    Component_object = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !spotEnt )
    goto LABEL_39;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  onObjectType = spotEnt->fields.onObjectType;
  v26 = static_fields->zeroVector.fields.x;
  v27 = static_fields->zeroVector.fields.y;
  v28 = static_fields->zeroVector.fields.z;
  if ( onObjectType == 1 )
  {
    Component_object = (__int64)this->fields.otherObjectRoot;
    if ( !Component_object )
      goto LABEL_39;
    v30 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)Component_object,
            (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0, 0);
    klass = 0;
    if ( (Component_object & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_39;
      klass = (UnityEngine_GameObject_o *)v30[2].klass;
      if ( !klass )
        goto LABEL_39;
      Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30[2].klass, 0);
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
      v26 = position.fields.x;
      v27 = position.fields.y;
      v28 = position.fields.z;
      goto LABEL_29;
    }
    klass = 0;
  }
LABEL_29:
  GameObjectExtensions__SetParent_36361856(v22, klass, 0);
  if ( !byte_4CAFC0E )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  GameObjectExtensions__SetLocalScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v22, 0);
  v32 = System_Int32__ToString((int)spotEnt + 16, 0);
  Component_object = (__int64)System_String__Concat_63966792((System_String_o *)StringLiteral_3173/*"BlankEarthPoint_"*/, v32, 0);
  if ( !transform )
    goto LABEL_39;
  UnityEngine_Object__set_name(transform, (System_String_o *)Component_object, 0);
  GameObjectExtensions__SetLocalPosition_36356244(v22, x, y, z, 0);
  Component_object = (__int64)UnityEngine_GameObject__get_transform(v22, 0);
  if ( !Component_object )
    goto LABEL_39;
  v35.fields.x = v26;
  v35.fields.y = v27;
  v35.fields.z = v28;
  UnityEngine_Transform__LookAt_71685600((UnityEngine_Transform_o *)Component_object, v35, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = UnityEngine_Object__op_Inequality(v23, 0, 0);
  if ( (Component_object & 1) != 0 )
  {
    if ( v23 )
    {
      BlankEarthPoint__SetEarthObj(
        (BlankEarthPoint_o *)v23,
        spotEnt,
        this,
        this->fields.mEarthCamera,
        this->fields.earthRoot,
        0);
      return (BlankEarthPoint_o *)v23;
    }
LABEL_39:
    sub_1C6BC60(Component_object, v17);
  }
  return (BlankEarthPoint_o *)v23;
}


void BlankEarth__ExecuteAfterStartUpScaling(
        BlankEarth_o *this,
        System_Action_o *startupScalingEndCallback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( BlankEarth__GetState(this, (const MethodInfo *)startupScalingEndCallback) == 1 )
  {
    this->fields.scalingEndCallback = startupScalingEndCallback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.scalingEndCallback, (int32_t)startupScalingEndCallback, v5, v6);
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
      sub_1C6BC60(0, v5);
    UnityEngine_Transform__set_rotation(blankEarth, v12, 0);
    x = spotEnt->fields.x;
    if ( this->fields.isExecQuestAction )
      maxAngle = 180.0;
    else
      maxAngle = this->fields.maxAngle;
    v10 = -maxAngle;
    if ( maxAngle >= x )
      maxAngle = spotEnt->fields.x;
    if ( x < v10 )
      v11 = v10;
    else
      v11 = maxAngle;
    this->fields.totalAngle = v11;
    BlankEarth__SaveEarthRotate(this, v7);
  }
}


UnityEngine_Vector3_o BlankEarth__GetDefaultEarthScale(BlankEarth_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4CAFC0E )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
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
  if ( (byte_4CB2AA2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_3172/*"BlankEarthGimmick_"*/);
    byte_4CB2AA2 = 1;
  }
  result = (BlankEarthGimmickComponent_o *)this->fields.earthGimmickRoot;
  if ( !result )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0);
  v6 = System_Int32__ToString((int32_t)&v9, 0);
  result = (BlankEarthGimmickComponent_o *)System_String__Concat_63966792((System_String_o *)StringLiteral_3172/*"BlankEarthGimmick_"*/, v6, 0);
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
                                                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    }
LABEL_12:
    sub_1C6BC60(result, *(_QWORD *)&gimmickId);
  }
  return result;
}


System_String_o *BlankEarth__GetGimmickPrefabName(BlankEarthGimmickEntity_o *gimmick, const MethodInfo *method)
{
  BlankEarthGimmickEntity_o *v2; // x19
  Il2CppObject *v3; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = gimmick;
  if ( (byte_4CB2AA5 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    gimmick = (BlankEarthGimmickEntity_o *)sub_1C6BA08(&StringLiteral_5830/*"EarthGimmick_{0:00000}"*/);
    byte_4CB2AA5 = 1;
  }
  if ( !v2 )
    sub_1C6BC60(gimmick, method);
  objectId = v2->fields.objectId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_5830/*"EarthGimmick_{0:00000}"*/, v3, 0);
}


System_String_o *BlankEarth__GetObjPrefabName(BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  BlankEarthSpotEntity_o *v2; // x19
  Il2CppObject *v3; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = spot;
  if ( (byte_4CB2AAB & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    spot = (BlankEarthSpotEntity_o *)sub_1C6BA08(&StringLiteral_5832/*"EarthPoint_{0:00000}"*/);
    byte_4CB2AAB = 1;
  }
  if ( !v2 )
    sub_1C6BC60(spot, method);
  objectId = v2->fields.objectId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_5832/*"EarthPoint_{0:00000}"*/, v3, 0);
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

  if ( (byte_4CB2AA1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    sub_1C6BA08(&StringLiteral_681/*"(Clone)"*/);
    byte_4CB2AA1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             objId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
  if ( Entity )
  {
    earthRoot = this->fields.earthRoot;
    v9 = (int)Entity;
    BlankEarthOtherObjectFromScript = BlankEarthGimmickEntity__GetBlankEarthOtherObjectFromScript(
                                        (BlankEarthGimmickEntity_o *)Entity,
                                        0);
    v11 = System_Int32__ToString(v9 + 28, 0);
    v12 = System_String__Concat_64007060(
            BlankEarthOtherObjectFromScript,
            (System_String_o *)StringLiteral_16102/*"_"*/,
            v11,
            (System_String_o *)StringLiteral_681/*"(Clone)"*/,
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
                                              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      }
LABEL_14:
      sub_1C6BC60(Master_object, v6);
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
  if ( (byte_4CB2AA0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_3173/*"BlankEarthPoint_"*/);
    byte_4CB2AA0 = 1;
  }
  otherObjectRoot = this->fields.otherObjectRoot;
  if ( otherObjectRoot )
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         otherObjectRoot,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
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
      v16 = System_Int32__ToString((int32_t)&v20, 0);
      result = (BlankEarthPoint_o *)System_String__Concat_63966792((System_String_o *)StringLiteral_3173/*"BlankEarthPoint_"*/, v16, 0);
      if ( !transform )
        goto LABEL_34;
      Component_object = UnityEngine_Transform__Find(transform, (System_String_o *)result, 0);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
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
                                      (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
LABEL_34:
      sub_1C6BC60(result, *(_QWORD *)&spotId);
    }
  }
  else
  {
    if ( onPointType )
      return 0;
    earthSpotRoot = this->fields.earthSpotRoot;
    v9 = System_Int32__ToString((int32_t)&v20, 0);
    v10 = System_String__Concat_63966792((System_String_o *)StringLiteral_3173/*"BlankEarthPoint_"*/, v9, 0);
    v11 = (UnityEngine_Object_o *)GameObjectExtensions__Find(earthSpotRoot, v10, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0, 0) )
    {
      if ( Component_object )
      {
        result = (BlankEarthPoint_o *)*((_QWORD *)Component_object + 4);
        if ( !result )
          goto LABEL_34;
        v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0);
        v14 = System_Int32__ToString((int32_t)&v20, 0);
        result = (BlankEarthPoint_o *)System_String__Concat_63966792((System_String_o *)StringLiteral_3173/*"BlankEarthPoint_"*/, v14, 0);
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
  if ( (byte_4CB2AAA & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    spot = (BlankEarthSpotEntity_o *)sub_1C6BA08(&StringLiteral_5832/*"EarthPoint_{0:00000}"*/);
    byte_4CB2AAA = 1;
  }
  if ( !v2 )
    sub_1C6BC60(spot, method);
  objectId = v2->fields.objectId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_5832/*"EarthPoint_{0:00000}"*/, v3, 0);
}


int32_t BlankEarth__GetState(BlankEarth_o *this, const MethodInfo *method)
{
  BlankEarth_o *v2; // x19
  struct CStateManager_BlankEarth__o *mFSM; // x8

  v2 = this;
  if ( (byte_4CB2A9A & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_1C6BA08(&Method_CStateManager_BlankEarth__getState__);
    byte_4CB2A9A = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C6BC60(this, method);
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
bool BlankEarth__IsJustState(BlankEarth_o *this, int32_t state, const MethodInfo *method)
{
  return BlankEarth__GetState(this, *(const MethodInfo **)&state) == state;
}


UnityEngine_Quaternion_o BlankEarth__LoadEarthRotate(BlankEarth_o *this, const MethodInfo *method)
{
  BlankEarth_c *v3; // x0
  System_String_o *String_71617980; // x0
  __int64 v5; // x1
  System_String_o *v6; // x21
  System_String_array *v7; // x20
  __int64 v8; // x0
  float v9; // s0
  float v10; // s8
  float v11; // s0
  float v12; // s9
  float v13; // s0
  float maxAngle; // s0
  BlankEarth_c *v15; // x0
  float *p_x; // x8
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB2A9F & 1) == 0 )
  {
    sub_1C6BA08(&BlankEarth_TypeInfo);
    byte_4CB2A9F = 1;
  }
  v3 = BlankEarth_TypeInfo;
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v3 = BlankEarth_TypeInfo;
  }
  String_71617980 = UnityEngine_PlayerPrefs__GetString_71617980(v3->static_fields->BLANK_EARTH_ROTATE_KEY, 0);
  if ( !String_71617980 )
    goto LABEL_20;
  v6 = String_71617980;
  v7 = System_String__Split(String_71617980, 0x2Cu, 0, 0);
  String_71617980 = (System_String_o *)System_String__IsNullOrEmpty(v6, 0);
  if ( ((unsigned __int8)String_71617980 & 1) != 0 )
    goto LABEL_13;
  if ( !v7 )
LABEL_20:
    sub_1C6BC60(String_71617980, v5);
  if ( LODWORD(v7->max_length) == 4 )
  {
    this->fields.totalAngle = System_Single__Parse(v7->m_Items[3], 0);
    if ( !LODWORD(v7->max_length)
      || (v9 = System_Single__Parse(v7->m_Items[0], 0), LODWORD(v7->max_length) <= 1)
      || (v10 = v9, v11 = System_Single__Parse(v7->m_Items[1], 0), LODWORD(v7->max_length) <= 2) )
    {
      sub_1C6BC68(v8);
    }
    v12 = v11;
    v13 = System_Single__Parse(v7->m_Items[2], 0);
    goto LABEL_19;
  }
LABEL_13:
  if ( this->fields.isExecQuestAction )
    maxAngle = 180.0;
  else
    maxAngle = this->fields.maxAngle;
  this->fields.totalAngle = -maxAngle;
  v15 = BlankEarth_TypeInfo;
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v15 = BlankEarth_TypeInfo;
  }
  p_x = &v15->static_fields->SOUTH_POLE_ROTATE.fields.x;
  v10 = *p_x;
  v12 = p_x[1];
  v13 = p_x[2];
LABEL_19:
  v17.fields.y = v12 * 0.017453;
  v17.fields.z = v13 * 0.017453;
  v17.fields.x = v10 * 0.017453;
  return UnityEngine_Quaternion__Internal_FromEulerRad(v17, 0);
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

  if ( (byte_4CB2AB7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BlankEarth_OnPressRotateBtnX__);
    byte_4CB2AB7 = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnX__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnX__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C6BA20(Method_BlankEarth_OnPressRotateBtnX__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  this->fields.isLeft = isLeft;
  this->fields.isBtnTouchX = 1;
}


void BlankEarth__OnPressRotateBtnY(BlankEarth_o *this, bool isUp, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4CB2AB8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BlankEarth_OnPressRotateBtnY__);
    byte_4CB2AB8 = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnY__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnY__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C6BA20(Method_BlankEarth_OnPressRotateBtnY__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
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

  if ( (byte_4CB2AB5 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2AB5 = 1;
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
      sub_1C6BC60(v11, v12);
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

  if ( (byte_4CB2AB4 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2AB4 = 1;
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
      sub_1C6BC60(v12, v13);
    BlankEarthPoint__PlaySpotUniqueAnim((BlankEarthPoint_o *)Point, animIndex, isQuick, finishCallback, 0);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(finishCallback, 0);
  }
}


void BlankEarth__PutAllGimmick(BlankEarth_o *this, const MethodInfo *method)
{
  BlankEarthGimmickEntity_array *Master_object; // x0
  BlankEarthGimmickEntity_o *v4; // x1
  const MethodInfo *v5; // x2
  int max_length; // w8
  BlankEarthGimmickEntity_array *v7; // x20
  unsigned int v8; // w21

  if ( (byte_4CB2AA3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB2AA3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BlankEarthGimmickEntity_array *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = BlankEarthGimmickMaster__GetAllGimmick((BlankEarthGimmickMaster_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_16;
  max_length = Master_object->max_length;
  v7 = Master_object;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C6BC68(Master_object);
      v4 = v7->m_Items[v8];
      if ( !v4 )
        break;
      if ( !v4->fields.objectType )
        BlankEarth__PutGimmick(this, v4, v5);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_16:
    sub_1C6BC60(Master_object, v4);
  }
}


void BlankEarth__PutAllSpots(
        BlankEarth_o *this,
        int32_t beforeClearQuestId,
        bool isBlankEarth,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  BlankEarthSpotEntity_array *All; // x0
  BlankEarth___c_c *v9; // x8
  System_Object_array *v10; // x21
  struct BlankEarth___c_StaticFields *static_fields; // x9
  System_Predicate_object__o *_9__110_0; // x22
  Il2CppObject *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct BlankEarth___c_StaticFields *v16; // x0
  CGThumbnailListItem_o *p__9__110_0; // x0
  Il2CppObject *v18; // x23
  struct BlankEarth___c_StaticFields *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *All_object; // x0
  System_Object_array *v21; // x0
  const MethodInfo *v22; // x3

  if ( (byte_4CB2AA7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_FindAll_BlankEarthSpotEntity___);
    sub_1C6BA08(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
    sub_1C6BA08(&System_Predicate_BlankEarthSpotEntity__TypeInfo);
    sub_1C6BA08(&Method_BlankEarth___c__PutAllSpots_b__110_0__);
    sub_1C6BA08(&Method_BlankEarth___c__PutAllSpots_b__110_1__);
    sub_1C6BA08(&BlankEarth___c_TypeInfo);
    byte_4CB2AA7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1C6BC60(0, v7);
  All = BlankEarthSpotMaster__GetAll((BlankEarthSpotMaster_o *)Master_object, 0);
  v9 = BlankEarth___c_TypeInfo;
  v10 = (System_Object_array *)All;
  if ( !BlankEarth___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo);
    v9 = BlankEarth___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  if ( isBlankEarth )
  {
    _9__110_0 = (System_Predicate_object__o *)static_fields->__9__110_0;
    if ( !_9__110_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BlankEarth___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v9->static_fields->__9;
      _9__110_0 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_BlankEarthSpotEntity__TypeInfo);
      System_Predicate_object____ctor(_9__110_0, v13, Method_BlankEarth___c__PutAllSpots_b__110_0__, 0);
      v16 = BlankEarth___c_TypeInfo->static_fields;
      v16->__9__110_0 = (struct System_Predicate_BlankEarthSpotEntity__o *)_9__110_0;
      p__9__110_0 = (CGThumbnailListItem_o *)&v16->__9__110_0;
LABEL_17:
      sub_1C6B9AC(p__9__110_0, (int32_t)_9__110_0, v14, v15);
    }
  }
  else
  {
    _9__110_0 = (System_Predicate_object__o *)static_fields->__9__110_1;
    if ( !_9__110_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BlankEarth___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v9->static_fields->__9;
      _9__110_0 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_BlankEarthSpotEntity__TypeInfo);
      System_Predicate_object____ctor(_9__110_0, v18, Method_BlankEarth___c__PutAllSpots_b__110_1__, 0);
      v19 = BlankEarth___c_TypeInfo->static_fields;
      v19->__9__110_1 = (struct System_Predicate_BlankEarthSpotEntity__o *)_9__110_0;
      p__9__110_0 = (CGThumbnailListItem_o *)&v19->__9__110_1;
      goto LABEL_17;
    }
  }
  All_object = (System_Collections_Generic_IEnumerable_TSource__o *)System_Array__FindAll_object_(
                                                                      v10,
                                                                      (System_Predicate_T__o *)_9__110_0,
                                                                      (const MethodInfo_3241770 *)Method_System_Array_FindAll_BlankEarthSpotEntity___);
  v21 = System_Linq_Enumerable__ToArray_object_(
          All_object,
          (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotEntity___);
  BlankEarth__PutSpotEntities(this, (BlankEarthSpotEntity_array *)v21, isBlankEarth, v22);
}


void BlankEarth__PutGimmick(BlankEarth_o *this, BlankEarthGimmickEntity_o *gimmick, const MethodInfo *method)
{
  BlankEarth_o *v4; // x20
  float z; // s9
  float v6; // s8
  float v7; // s10
  float v8; // s11
  float earthRadius; // s12
  float v10; // s8
  float v11; // s13
  AssetManager_o *v12; // x21
  const MethodInfo *v13; // x1
  AssetData_o *Asset_40790812; // x21
  Il2CppObject *Object_object__51495936; // x21
  const MethodInfo *v16; // x3
  float v17; // [xsp+8h] [xbp-68h] BYREF
  float v18; // [xsp+Ch] [xbp-64h] BYREF
  float cosx; // [xsp+48h] [xbp-28h] BYREF
  float sinx; // [xsp+4Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4CB2AA4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&BlankEarth_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&ScrTerminalListTop_TypeInfo);
    this = (BlankEarth_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB2AA4 = 1;
  }
  if ( !gimmick )
    goto LABEL_15;
  z = gimmick->fields.z;
  v6 = (float)(gimmick->fields.y + v4->fields.greenwichOffset) * 0.017453;
  sincosf(gimmick->fields.x * 0.017453, &sinx, &cosx);
  v8 = cosx;
  v7 = sinx;
  earthRadius = v4->fields.earthRadius;
  sincosf(v6, &v18, &v17);
  v11 = v17;
  v10 = v18;
  this = (BlankEarth_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v12 = (AssetManager_o *)this;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v12 )
    goto LABEL_15;
  Asset_40790812 = AssetManager__GetAsset_40790812(
                     v12,
                     ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH,
                     0);
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
  this = (BlankEarth_o *)BlankEarth__GetGimmickPrefabName(gimmick, v13);
  if ( !Asset_40790812 )
LABEL_15:
    sub_1C6BC60(this, gimmick);
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              Asset_40790812,
                              (System_String_o *)this,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51495936, 0, 0) )
    BlankEarth__CreateGimmick(
      v4,
      (UnityEngine_GameObject_o *)Object_object__51495936,
      gimmick,
      v11 * (float)(v8 * (float)(z + earthRadius)),
      v7 * earthRadius,
      v10 * (float)(v8 * (float)(z + earthRadius)),
      v16);
}


BlankEarthPoint_o *BlankEarth__PutSpot(BlankEarth_o *this, BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v10; // x1
  AssetManager_o *v11; // x21
  int32_t onObjectType; // w8
  AssetData_o *v13; // x21
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float earthRadius; // s11
  const MethodInfo *v18; // x1
  float v19; // s8
  float v20; // s12
  float v21; // s0
  System_String_o *v22; // x1
  UnityEngine_Object_o *otherObjectRoot; // x22
  UnityEngine_GameObject_o *v24; // x22
  const MethodInfo *v25; // x1
  Il2CppObject *Object_object__51495936; // x21
  const MethodInfo *v27; // x3
  float v29; // [xsp+8h] [xbp-68h] BYREF
  float v30; // [xsp+Ch] [xbp-64h] BYREF
  float cosx; // [xsp+18h] [xbp-58h] BYREF
  float sinx; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB2AA9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&BlankEarth_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&ScrTerminalListTop_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB2AA9 = 1;
  }
  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v11 = (AssetManager_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v11 )
    goto LABEL_31;
  Instance = (UnityEngine_GameObject_o *)AssetManager__GetAsset_40790812(
                                           v11,
                                           ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH,
                                           0);
  if ( !spot )
    goto LABEL_31;
  onObjectType = spot->fields.onObjectType;
  v13 = (AssetData_o *)Instance;
  if ( onObjectType == 1 )
  {
    otherObjectRoot = (UnityEngine_Object_o *)this->fields.otherObjectRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(otherObjectRoot, 0, 0) )
      return 0;
    Instance = this->fields.otherObjectRoot;
    if ( Instance )
    {
      Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               Instance,
                                               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      if ( Instance )
      {
        v24 = Instance;
        LODWORD(x) = (unsigned int)GameObjectExtensions__GetLocalPosition(
                                     (UnityEngine_GameObject_o *)Instance[1].monitor,
                                     0);
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v24[1].monitor, 0);
        y = LocalPosition.fields.y;
        if ( !BlankEarth_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
        Instance = (UnityEngine_GameObject_o *)BlankEarth__GetObjPrefabName(spot, v25);
        if ( v13 )
        {
          v22 = (System_String_o *)Instance;
          z = -43.0;
          goto LABEL_24;
        }
      }
    }
LABEL_31:
    sub_1C6BC60(Instance, v10);
  }
  if ( !onObjectType )
  {
    v14 = (float)(spot->fields.y + this->fields.greenwichOffset) * 0.017453;
    sincosf(spot->fields.x * 0.017453, &sinx, &cosx);
    v16 = cosx;
    v15 = sinx;
    earthRadius = this->fields.earthRadius;
    sincosf(v14, &v30, &v29);
    v19 = v29;
    v20 = v30;
    if ( !BlankEarth_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    Instance = (UnityEngine_GameObject_o *)BlankEarth__GetSpotPrefabName(spot, v18);
    if ( v13 )
    {
      v21 = v16 * (float)(earthRadius + 0.0);
      v22 = (System_String_o *)Instance;
      y = v15 * earthRadius;
      x = v19 * v21;
      z = v20 * v21;
LABEL_24:
      Object_object__51495936 = AssetData__GetObject_object__51495936(
                                  v13,
                                  v22,
                                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
      goto LABEL_26;
    }
    goto LABEL_31;
  }
  Object_object__51495936 = 0;
LABEL_26:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51495936, 0, 0) )
    return 0;
  return BlankEarth__CreateSpot(this, (UnityEngine_GameObject_o *)Object_object__51495936, spot, x, y, z, v27);
}


void BlankEarth__PutSpotEntities(
        BlankEarth_o *this,
        BlankEarthSpotEntity_array *blankEarthSpotList,
        bool isBlankEarth,
        const MethodInfo *method)
{
  System_Func_object__object__o *v7; // x22
  System_Collections_Generic_IEnumerable_T__o *v8; // x0
  System_Collections_Generic_IEnumerable_T__o *v9; // x0
  System_Object_array *v10; // x0
  __int64 v11; // x1
  System_Object_array *v12; // x20
  int max_length; // w8
  unsigned int v14; // w19

  if ( (byte_4CB2AA8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
    sub_1C6BA08(&Method_BlankEarth_PutSpot__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
    sub_1C6BA08(&System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo);
    byte_4CB2AA8 = 1;
  }
  v7 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo);
  System_Func_object__object____ctor(v7, (Il2CppObject *)this, Method_BlankEarth_PutSpot__, 0);
  v8 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)blankEarthSpotList,
                                                        (System_Func_TSource__TResult__o *)v7,
                                                        (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
  v9 = BasicHelper__ExcludeNull_object_(
         v8,
         (const MethodInfo_3124D84 *)Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
  v10 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v9,
          (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
  if ( !isBlankEarth )
  {
    v12 = v10;
    if ( !v10 )
      goto LABEL_12;
    max_length = v10->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          sub_1C6BC68(v10);
        v10 = (System_Object_array *)v12->m_Items[v14];
        if ( !v10 )
          break;
        BlankEarthPoint__SetGrandSetting((BlankEarthPoint_o *)v10, 0);
        max_length = v12->max_length;
        if ( (int)++v14 >= max_length )
          return;
      }
LABEL_12:
      sub_1C6BC60(v10, v11);
    }
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
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_4CB2AB2 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2AB2 = 1;
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
      sub_1C6BC60(v11, v12);
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

  if ( (byte_4CB2AB3 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2AB3 = 1;
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
      sub_1C6BC60(v11, v12);
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
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  int32_t v24; // w1

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  if ( (byte_4CB2AB1 & 1) == 0 )
  {
    sub_1C6BA08(&BlankEarth_QAARotateEarthParam_TypeInfo);
    byte_4CB2AB1 = 1;
  }
  v16 = sub_1C6BC54(BlankEarth_QAARotateEarthParam_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0);
  *(float *)(v16 + 16) = time;
  *(float *)(v16 + 20) = x;
  *(float *)(v16 + 24) = y;
  *(_DWORD *)(v16 + 28) = easeType;
  *(_QWORD *)(v16 + 32) = finishCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 32), (int32_t)finishCallback, v17, v18);
  this->fields.qaaRotateEarthParam = (struct BlankEarth_QAARotateEarthParam_o *)v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.qaaRotateEarthParam, v16, v19, v20);
  this->fields.rotateEarthTimeCalculateParam = rotateTimeCalculateParam;
  sub_1C6B9AC(
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

  if ( (byte_4CB2AB0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_1C6BA08(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_4CB2AB0 = 1;
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
    v13 = sub_1C6BC54(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    *(_BYTE *)(v13 + 16) = 1;
    ActionExtensions__Call_object_(
      (System_Action_T__o *)finishCallback,
      (Il2CppObject *)v13,
      (const MethodInfo_3085F64 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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

  if ( (byte_4CB2AAF & 1) == 0 )
  {
    sub_1C6BA08(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_1C6BA08(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_4CB2AAF = 1;
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
    v15 = sub_1C6BC54(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0);
    *(_BYTE *)(v15 + 16) = 1;
    ActionExtensions__Call_object_(
      (System_Action_T__o *)finishCallback,
      (Il2CppObject *)v15,
      (const MethodInfo_3085F64 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
  }
}


void BlankEarth__SaveEarthRotate(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0
  BlankEarth_o *v4; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  blankEarth = this->fields.blankEarth;
  if ( !blankEarth )
    sub_1C6BC60(0, method);
  rotation = UnityEngine_Transform__get_rotation(blankEarth, 0);
  BlankEarth__SaveQuaternionAndTotalAngle(v4, rotation, this->fields.totalAngle, v5);
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
  BlankEarth_c *v8; // x0
  System_String_o *BLANK_EARTH_ROTATE_KEY; // x19
  __int64 v10; // x20
  float v11; // s0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  float v19; // s0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  float v25; // s0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  float v31; // s0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_String_o *v34; // x0
  MethodInfo v35; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  *((float *)&v35.methodMetadataHandle + 1) = totalAngle;
  w = qua.fields.w;
  z = qua.fields.z;
  y = qua.fields.y;
  x = qua.fields.x;
  if ( (byte_4CB2AAE & 1) == 0 )
  {
    sub_1C6BA08(&BlankEarth_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_808/*","*/);
    byte_4CB2AAE = 1;
  }
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v38.fields.w = w;
  v36 = UnityEngine_Quaternion__Internal_ToEulerRad(v38, 0);
  v36.fields.x = v36.fields.x * 57.296;
  v36.fields.y = v36.fields.y * 57.296;
  v36.fields.z = v36.fields.z * 57.296;
  Positive = UnityEngine_Quaternion__Internal_MakePositive(v36, 0);
  v8 = BlankEarth_TypeInfo;
  v35.methodPointer = *(Il2CppMethodPointer *)&Positive.fields.x;
  *(float *)&v35.virtualMethodPointer = Positive.fields.z;
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v8 = BlankEarth_TypeInfo;
  }
  BLANK_EARTH_ROTATE_KEY = v8->static_fields->BLANK_EARTH_ROTATE_KEY;
  v10 = sub_1C6BAB0(string___TypeInfo, 7);
  v12 = System_Single__ToString(v11, &v35);
  if ( !v10 )
    sub_1C6BC60(v12, v13);
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_14;
  *(_QWORD *)(v10 + 32) = v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v12, v14, v15);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_14;
  v18 = StringLiteral_808/*","*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_808/*","*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 40), v18, v16, v17);
  v12 = System_Single__ToString(v19, (const MethodInfo *)((char *)&v35.methodPointer + 4));
  if ( *(_DWORD *)(v10 + 24) <= 2u )
    goto LABEL_14;
  *(_QWORD *)(v10 + 48) = v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 48), (int32_t)v12, v20, v21);
  if ( *(_DWORD *)(v10 + 24) <= 3u )
    goto LABEL_14;
  v24 = StringLiteral_808/*","*/;
  *(_QWORD *)(v10 + 56) = StringLiteral_808/*","*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 56), v24, v22, v23);
  v12 = System_Single__ToString(v25, (const MethodInfo *)&v35.virtualMethodPointer);
  if ( *(_DWORD *)(v10 + 24) <= 4u
    || (*(_QWORD *)(v10 + 64) = v12,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 64), (int32_t)v12, v26, v27),
        *(_DWORD *)(v10 + 24) <= 5u)
    || (v30 = StringLiteral_808/*","*/,
        *(_QWORD *)(v10 + 72) = StringLiteral_808/*","*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 72), v30, v28, v29),
        v12 = System_Single__ToString(v31, (const MethodInfo *)((char *)&v35.methodMetadataHandle + 4)),
        *(_DWORD *)(v10 + 24) <= 6u) )
  {
LABEL_14:
    sub_1C6BC68(v12);
  }
  *(_QWORD *)(v10 + 80) = v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 80), (int32_t)v12, v32, v33);
  v34 = System_String__Concat_64007324((System_String_array *)v10, 0);
  UnityEngine_PlayerPrefs__SetString(BLANK_EARTH_ROTATE_KEY, v34, 0);
}


void BlankEarth__SaveSpotRotation(BlankEarth_o *this, BlankEarthSpotEntity_o *spotEnt, const MethodInfo *method)
{
  BlankEarth_o *v5; // x0
  const MethodInfo *v6; // x1
  float x; // s4
  float maxAngle; // s5
  float v9; // s6
  float v10; // s4
  UnityEngine_Quaternion_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( spotEnt && !spotEnt->fields.onObjectType )
  {
    v11 = BlankEarth__ConvertLatLongToSafePointQuaternion(
            this,
            *(UnityEngine_Vector2_o *)&spotEnt->fields.x,
            (const MethodInfo *)spotEnt);
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
    BlankEarth__SaveQuaternionAndTotalAngle(v5, v11, v10, v6);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


void BlankEarth__SetEarthRotate(BlankEarth_o *this, UnityEngine_Quaternion_o qua, const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0

  blankEarth = this->fields.blankEarth;
  if ( !blankEarth )
    sub_1C6BC60(0, method);
  UnityEngine_Transform__set_rotation(blankEarth, qua, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__SetFocusPoint(BlankEarth_o *this, int32_t spotId, int32_t onPointType, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  BlankEarth_o *v5; // x19
  const MethodInfo *v8; // x3
  BlankEarthPoint_o *Point; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (v5 = this, (this = (BlankEarth_o *)mTerminalList->fields.mActionBgColl) == 0)
    || (this = (BlankEarth_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_1C6BC60(this, *(_QWORD *)&spotId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  Point = BlankEarth__GetPoint(v5, spotId, onPointType, v8);
  v5->fields.focusEarthPoint = Point;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.focusEarthPoint, (int32_t)Point, v10, v11);
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
  const MethodInfo *v3; // x3

  this->fields.ordealCallFolderInfo = folderInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.ordealCallFolderInfo, (int32_t)folderInfo, (int32_t)method, v3);
}


void BlankEarth__SetOtherObjectRoot(
        BlankEarth_o *this,
        System_String_o *objName,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  this->fields.otherObjectRoot = root;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.otherObjectRoot, (int32_t)root, (int32_t)root, method);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth__SetState(BlankEarth_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4CB2A9B & 1) == 0 )
  {
    sub_1C6BA08(&Method_CStateManager_BlankEarth__setState__);
    byte_4CB2A9B = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C6BC60(0, *(_QWORD *)&state);
  CStateManager_object___setState(mFSM, state, (const MethodInfo_33849F8 *)Method_CStateManager_BlankEarth__setState__);
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
  UnityEngine_Object_o *focusEarthPoint; // x21
  __int64 earthSpotRoot; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  TerminalPramsManager_c *v7; // x0
  struct BlankEarthPoint_o *Point; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct BlankEarthPoint_o *v11; // x8
  int32_t spotOnType_k__BackingField; // w9
  float x; // s9
  float y; // s10
  float z; // s11
  float zoomInScl; // s8
  float v17; // s11
  float v18; // s10
  float v19; // s13
  float v20; // s12
  float v21; // s15
  float w; // s14
  UnityEngine_Transform_o *blankEarth; // x20
  float zoomInOffset; // s9
  float v25; // s18
  float v26; // s21
  float v27; // s7
  float v28; // s22
  float v29; // s24
  float v30; // s2
  float v31; // s4
  float v32; // s5
  float v33; // s0
  UnityEngine_Object_o *otherObjectRoot; // x20
  Il2CppObject *Component_object; // x20
  int v36; // w8
  __int64 v37; // x20
  unsigned int v38; // w21
  UnityEngine_Transform_o *v39; // x20
  const MethodInfo *v40; // x2
  float v41; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB2AB6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2AB6 = 1;
  }
  focusEarthPoint = (UnityEngine_Object_o *)this->fields.focusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  earthSpotRoot = UnityEngine_Object__op_Equality(focusEarthPoint, 0, 0);
  if ( (earthSpotRoot & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CB2AC7 )
    {
      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
      byte_4CB2AC7 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    Point = BlankEarth__GetPoint(this, v7->static_fields->_BlankEarthSpotId_k__BackingField, 0, v6);
    this->fields.focusEarthPoint = Point;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.focusEarthPoint, (int32_t)Point, v9, v10);
  }
  v11 = this->fields.focusEarthPoint;
  if ( !v11 )
    goto LABEL_49;
  spotOnType_k__BackingField = v11->fields._spotOnType_k__BackingField;
  x = this->fields.zoomInPos.fields.x;
  y = this->fields.zoomInPos.fields.y;
  z = this->fields.zoomInPos.fields.z;
  zoomInScl = this->fields.zoomInScl;
  if ( spotOnType_k__BackingField == 1 )
  {
    otherObjectRoot = (UnityEngine_Object_o *)this->fields.otherObjectRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(otherObjectRoot, 0, 0) )
    {
      earthSpotRoot = (__int64)this->fields.otherObjectRoot;
      if ( !earthSpotRoot )
        goto LABEL_49;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)earthSpotRoot,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      earthSpotRoot = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( (earthSpotRoot & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_49;
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
      if ( earthSpotRoot )
      {
        earthSpotRoot = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__51985744(
                                   (UnityEngine_GameObject_o *)earthSpotRoot,
                                   (const MethodInfo_3193D50 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
        if ( earthSpotRoot )
        {
          v36 = *(_DWORD *)(earthSpotRoot + 24);
          v37 = earthSpotRoot;
          if ( v36 < 1 )
            goto LABEL_38;
          v38 = 0;
          while ( 1 )
          {
            if ( v38 >= v36 )
              sub_1C6BC68(earthSpotRoot);
            earthSpotRoot = *(_QWORD *)(v37 + 8LL * (int)v38 + 32);
            if ( !earthSpotRoot )
              break;
            BlankEarthPoint__SetDispUIDotRange(
              (BlankEarthPoint_o *)earthSpotRoot,
              this->fields.object1DispSpotUISpriteDot,
              this->fields.object1NoDispSpotUISpriteDot,
              0);
            v36 = *(_DWORD *)(v37 + 24);
            if ( (int)++v38 >= v36 )
              goto LABEL_38;
          }
        }
      }
      goto LABEL_49;
    }
  }
  else if ( !spotOnType_k__BackingField )
  {
    v41 = this->fields.zoomInPos.fields.z;
    v17 = this->fields.zoomInPos.fields.y;
    v18 = this->fields.zoomInPos.fields.x;
    v19 = v11->fields._FocusQua_k__BackingField.fields.x;
    v20 = v11->fields._FocusQua_k__BackingField.fields.y;
    v21 = v11->fields._FocusQua_k__BackingField.fields.z;
    w = v11->fields._FocusQua_k__BackingField.fields.w;
    blankEarth = this->fields.blankEarth;
    zoomInOffset = this->fields.zoomInOffset;
    if ( !byte_4CAFC11 )
    {
      sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC11 = 1;
    }
    v45 = UnityEngine_Quaternion__AngleAxis(-zoomInOffset, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
    if ( blankEarth )
    {
      v25 = w * v45.fields.z;
      v26 = v21 * v45.fields.x;
      v27 = v21 * v45.fields.z;
      v28 = v19 * v45.fields.z;
      v29 = v20 * v45.fields.z;
      v30 = (float)(w * v45.fields.w) - (float)(v19 * v45.fields.x);
      v31 = (float)(v20 * v45.fields.x) + (float)((float)(v21 * v45.fields.w) + v25);
      v32 = v28 + (float)((float)(v20 * v45.fields.w) + (float)(w * v45.fields.y));
      v33 = (float)(v21 * v45.fields.y) + (float)((float)(v19 * v45.fields.w) + (float)(w * v45.fields.x));
      v46.fields.w = (float)(v30 - (float)(v20 * v45.fields.y)) - v27;
      v46.fields.z = v31 - (float)(v19 * v45.fields.y);
      v46.fields.y = v32 - v26;
      v46.fields.x = v33 - v29;
      UnityEngine_Transform__set_rotation(blankEarth, v46, 0);
      x = v18;
      y = v17;
      z = v41;
      goto LABEL_38;
    }
LABEL_49:
    sub_1C6BC60(earthSpotRoot, v5);
  }
LABEL_38:
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_49;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0);
  v39 = (UnityEngine_Transform_o *)earthSpotRoot;
  if ( !byte_4CAFC0F )
  {
    earthSpotRoot = sub_1C6BA08(&UnityEngine_Quaternion_TypeInfo);
    byte_4CAFC0F = 1;
  }
  if ( !v39 )
    goto LABEL_49;
  UnityEngine_Transform__set_rotation(v39, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_49;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0);
  if ( !earthSpotRoot )
    goto LABEL_49;
  v43.fields.x = x;
  v43.fields.y = y;
  v43.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)earthSpotRoot, v43, 0);
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_49;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0);
  if ( !earthSpotRoot )
    goto LABEL_49;
  v44.fields.x = zoomInScl;
  v44.fields.y = zoomInScl;
  v44.fields.z = zoomInScl;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)earthSpotRoot, v44, 0);
  earthSpotRoot = (__int64)this->fields.mTerminalList;
  if ( !earthSpotRoot )
    goto LABEL_49;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)earthSpotRoot, 0, 1, 0);
  earthSpotRoot = (__int64)this->fields.mTerminalList;
  if ( !earthSpotRoot )
    goto LABEL_49;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)earthSpotRoot, 0.0, 0, 1, 0);
  BlankEarth__SetState(this, 3, v40);
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
          sub_1C6BC68(this);
        v7 = presentBoxHideGameObjectList->m_Items[v5];
        if ( !v7 )
          sub_1C6BC60(0, isDisp);
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

  if ( (byte_4CB2A99 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CStateManager_BlankEarth__update__);
    byte_4CB2A99 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_33849D4 *)Method_CStateManager_BlankEarth__update__);
}


BlankEarthTransform_o *BlankEarth__UpdateBlankEarthTransformData(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *earthRoot; // x0
  BlankEarthTransform_o *v4; // x20
  float x; // s11
  float y; // s10
  float z; // s9
  float w; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  unsigned int LocalPosition; // s0
  UnityEngine_GameObject_o *v13; // x0
  BlankEarthTransform_o *v14; // x0
  const MethodInfo *v15; // x5
  TerminalPramsManager_c *v16; // x0
  CGThumbnailListItem_o *p_BlankEarthTransformData_k__BackingField; // x0
  float totalAng; // [xsp+3Ch] [xbp-74h]
  float v20; // [xsp+40h] [xbp-70h]
  float earthRootRot; // [xsp+44h] [xbp-6Ch]
  float v22; // [xsp+48h] [xbp-68h]
  float v23; // [xsp+4Ch] [xbp-64h]
  UnityEngine_Vector3_o v24; // 0:x1.12
  UnityEngine_Vector3_o v25; // 0:x3.12
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v29; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4CB2AB9 & 1) == 0 )
  {
    sub_1C6BA08(&BlankEarthTransform_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2AB9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB2AC8 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2AC8 = 1;
  }
  earthRoot = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    earthRoot = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !this->fields.blankEarth )
    goto LABEL_26;
  v4 = *(BlankEarthTransform_o **)(earthRoot[7].fields.m_CachedPtr + 520);
  rotation = UnityEngine_Transform__get_rotation(this->fields.blankEarth, 0);
  x = rotation.fields.x;
  y = rotation.fields.y;
  z = rotation.fields.z;
  w = rotation.fields.w;
  if ( v4 )
  {
    v4->fields.blankEarthRotation = rotation;
    earthRoot = this->fields.earthRoot;
    if ( earthRoot )
    {
      earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0);
      if ( earthRoot )
      {
        v4->fields.earthRootRotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)earthRoot, 0);
        v4->fields.earthRootLocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.earthRoot, 0);
        earthRoot = this->fields.earthRoot;
        if ( earthRoot )
        {
          gameObject = UnityEngine_GameObject__get_gameObject(earthRoot, 0);
          v4->fields.earthRootLocalScale = GameObjectExtensions__GetLocalScale(gameObject, 0);
          v4->fields.totalAngle = this->fields.totalAngle;
          goto LABEL_19;
        }
      }
    }
LABEL_26:
    sub_1C6BC60(earthRoot, method);
  }
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_26;
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0);
  if ( !earthRoot )
    goto LABEL_26;
  v27 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)earthRoot, 0);
  v22 = v27.fields.y;
  v23 = v27.fields.x;
  v20 = v27.fields.w;
  earthRootRot = v27.fields.z;
  LocalPosition = (unsigned int)GameObjectExtensions__GetLocalPosition(this->fields.earthRoot, 0);
  earthRoot = this->fields.earthRoot;
  totalAng = *(float *)&LocalPosition;
  if ( !earthRoot )
    goto LABEL_26;
  v13 = UnityEngine_GameObject__get_gameObject(earthRoot, 0);
  GameObjectExtensions__GetLocalScale(v13, 0);
  v14 = (BlankEarthTransform_o *)sub_1C6BC54(BlankEarthTransform_TypeInfo);
  v29.fields.y = v22;
  v29.fields.x = v23;
  v29.fields.z = earthRootRot;
  v28.fields.y = y;
  v29.fields.w = v20;
  v28.fields.z = z;
  v28.fields.w = w;
  *(_QWORD *)&v24.fields.x = 0;
  v28.fields.x = x;
  v4 = v14;
  BlankEarthTransform___ctor(v14, v28, v29, v24, v25, totalAng, v15);
LABEL_19:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB2AC9 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2AC9 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  p_BlankEarthTransformData_k__BackingField = (CGThumbnailListItem_o *)&v16->static_fields->_BlankEarthTransformData_k__BackingField;
  p_BlankEarthTransformData_k__BackingField->klass = (CGThumbnailListItem_c *)v4;
  sub_1C6B9AC(p_BlankEarthTransformData_k__BackingField, (int32_t)v4, v10, v11);
  return v4;
}


void BlankEarth__UpdateSpotDisp(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *earthSpotRoot; // x0
  System_Object_array *ComponentsInChildren_object__51985744; // x0
  BlankEarth___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_T__o *v6; // x20
  System_Action_object__o *_9__117_0; // x21
  Il2CppObject *v8; // x22
  struct BlankEarth___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_T__o *v12; // x19
  BlankEarth___c_c *v13; // x0
  System_Action_object__o *_9__117_1; // x20
  Il2CppObject *v15; // x21
  struct BlankEarth___c_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4CB2AAD & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_BlankEarthPoint__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_BlankEarthPoint___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_1C6BA08(&Method_BlankEarth___c__UpdateSpotDisp_b__117_0__);
    sub_1C6BA08(&Method_BlankEarth___c__UpdateSpotDisp_b__117_1__);
    sub_1C6BA08(&BlankEarth___c_TypeInfo);
    byte_4CB2AAD = 1;
  }
  earthSpotRoot = this->fields.earthSpotRoot;
  if ( !earthSpotRoot )
    goto LABEL_19;
  ComponentsInChildren_object__51985744 = UnityEngine_GameObject__GetComponentsInChildren_object__51985744(
                                            earthSpotRoot,
                                            (const MethodInfo_3193D50 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  v5 = BlankEarth___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object__51985744;
  if ( !BlankEarth___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo);
    v5 = BlankEarth___c_TypeInfo;
  }
  _9__117_0 = (System_Action_object__o *)v5->static_fields->__9__117_0;
  if ( !_9__117_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BlankEarth___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__117_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_BlankEarthPoint__TypeInfo);
    System_Action_object____ctor(_9__117_0, v8, Method_BlankEarth___c__UpdateSpotDisp_b__117_0__, 0);
    static_fields = BlankEarth___c_TypeInfo->static_fields;
    static_fields->__9__117_0 = (struct System_Action_BlankEarthPoint__o *)_9__117_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__117_0, (int32_t)_9__117_0, v10, v11);
  }
  BasicHelper__ForEach_object_(
    v6,
    (System_Action_T__o *)_9__117_0,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_BlankEarthPoint___);
  earthSpotRoot = this->fields.otherObjectRoot;
  if ( !earthSpotRoot )
LABEL_19:
    sub_1C6BC60(earthSpotRoot, method);
  v12 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__51985744(
                                                         earthSpotRoot,
                                                         (const MethodInfo_3193D50 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12, 0) )
  {
    v13 = BlankEarth___c_TypeInfo;
    if ( !BlankEarth___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo);
      v13 = BlankEarth___c_TypeInfo;
    }
    _9__117_1 = (System_Action_object__o *)v13->static_fields->__9__117_1;
    if ( !_9__117_1 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = BlankEarth___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__117_1 = (System_Action_object__o *)sub_1C6BC54(System_Action_BlankEarthPoint__TypeInfo);
      System_Action_object____ctor(_9__117_1, v15, Method_BlankEarth___c__UpdateSpotDisp_b__117_1__, 0);
      v16 = BlankEarth___c_TypeInfo->static_fields;
      v16->__9__117_1 = (struct System_Action_BlankEarthPoint__o *)_9__117_1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v16->__9__117_1, (int32_t)_9__117_1, v17, v18);
    }
    BasicHelper__ForEach_object_(
      v12,
      (System_Action_T__o *)_9__117_1,
      (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_BlankEarthPoint___);
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
    sub_1C6BC60(blankEarth, method);
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0);
  v10 = UnityEngine_Quaternion__Inverse(rotation, 0);
  x = v10.fields.x;
  y = v10.fields.y;
  z = v10.fields.z;
  w = v10.fields.w;
  if ( !byte_4CB2AC4 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CB2AC4 = 1;
  }
  v11.fields.x = x;
  v11.fields.y = y;
  v11.fields.z = z;
  v11.fields.w = w;
  v8 = UnityEngine_Quaternion__op_Multiply_71598412(v11, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  this->fields.totalAngle = asinf(v8.fields.y) * 57.296;
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
  CGThumbnailListItem_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  v11 = (CGThumbnailListItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v11->fields.sortValue0 = (int64_t)finishCallback;
  v11 = (CGThumbnailListItem_o *)((char *)v11 + 32);
  *(float *)&v11[-1].fields._Type_k__BackingField = time;
  *(float *)&v11[-1].fields._HaveDifferenceCG_k__BackingField = x;
  *(float *)&v11[-1].fields._ThumbnailSpritePath_k__BackingField = y;
  HIDWORD(v11[-1].fields._ThumbnailSpritePath_k__BackingField) = easeType;
  sub_1C6B9AC(v11, (int32_t)finishCallback, v12, v13);
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
    sub_1C6BC60(0, method);
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
    sub_1C6BC60(this, method);
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
  if ( (byte_4CB2ACD & 1) == 0 )
  {
    this = (BlankEarth_StateEarthAutoRotateBase_o *)sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB2ACD = 1;
  }
  klass = v2[4].klass;
  if ( !klass
    || (monitor = (EasingObject_o *)v2[1].monitor,
        v5 = *(float *)&klass->_1.name,
        v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v6, v2, (intptr_t)v2->klass->vtable[9].method, 0),
        v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, (intptr_t)v2->klass->vtable[10].method, 0),
        (v8 = v2[4].klass) == 0)
    || !monitor )
  {
    sub_1C6BC60(this, method);
  }
  EasingObject__Play(monitor, v5, v6, v7, 0.0, HIDWORD(v8->_1.namespaze), 0);
}


void BlankEarth_StateEarthAutoRotateBase__begin(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Transform_o *blankEarth; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BlankEarth_QAARotateEarthParam_o *qaaRotateEarthParam; // x1
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB2ACC & 1) == 0 )
  {
    sub_1C6BA08(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    byte_4CB2ACC = 1;
  }
  this->fields.That = that;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  if ( !that )
    goto LABEL_10;
  qaaRotateEarthParam = that->fields.qaaRotateEarthParam;
  this->fields.Param = qaaRotateEarthParam;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.Param, (int32_t)qaaRotateEarthParam, v8, v9);
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
                               (const MethodInfo_3194C14 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
          this->fields.EasingObj = (struct EasingObject_o *)Component_object;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.EasingObj, (int32_t)Component_object, v14, v15);
          return;
        }
      }
    }
LABEL_10:
    sub_1C6BC60(blankEarth, v7);
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

  if ( (byte_4CB2ACE & 1) == 0 )
  {
    sub_1C6BA08(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_1C6BA08(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_4CB2ACE = 1;
  }
  EasingObj = this->fields.EasingObj;
  if ( !EasingObj
    || (EasingObject__Stop(EasingObj, 0), (EasingObj = (EasingObject_o *)this->fields.That) == 0)
    || (BlankEarth__UpdateTotalAngle((BlankEarth_o *)EasingObj, 0), (v5 = this->fields.EasingObj) == 0) )
  {
    sub_1C6BC60(EasingObj, that);
  }
  Param = this->fields.Param;
  if ( Param )
  {
    FinishCallback_k__BackingField = (System_Action_T__o *)Param->fields._FinishCallback_k__BackingField;
    v8 = v5->fields.mNow < 1.0;
    v9 = (BlankEarth_QAARotateEarthResponse_o *)sub_1C6BC54(BlankEarth_QAARotateEarthResponse_TypeInfo);
    BlankEarth_QAARotateEarthResponse___ctor(v9, v8, 0);
    ActionExtensions__Call_object_(
      FinishCallback_k__BackingField,
      (Il2CppObject *)v9,
      (const MethodInfo_3085F64 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_fields; // x19
  __int64 klass; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v10; // x8
  UnityEngine_Transform_o *data; // x19

  if ( (byte_4CB2AD0 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB2AD0 = 1;
  }
  this->fields.That = that;
  p_fields = (CGThumbnailListItem_o *)&this->fields;
  sub_1C6B9AC(p_fields, (int32_t)that, (int32_t)method, v3);
  if ( !that )
    goto LABEL_23;
  mTerminalList = (UnityEngine_Object_o *)that->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  klass = UnityEngine_Object__op_Equality(mTerminalList, 0, 0);
  if ( (klass & 1) != 0 )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CB01CE )
    {
      sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
      byte_4CB01CE = 1;
    }
    klass = (__int64)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      klass = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v10 = **(_QWORD **)(klass + 184);
    if ( v10 )
    {
      mTerminalList = *(UnityEngine_Object_o **)(v10 + 256);
      goto LABEL_15;
    }
LABEL_23:
    sub_1C6BC60(klass, v8);
  }
LABEL_15:
  if ( !mTerminalList )
    goto LABEL_23;
  klass = (__int64)mTerminalList[6].klass;
  if ( !klass )
    goto LABEL_23;
  klass = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
  if ( !klass )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 0, 0);
  if ( !p_fields->klass )
    goto LABEL_23;
  data = (UnityEngine_Transform_o *)p_fields->klass->_1.byval_arg.data;
  if ( !byte_4CAFC0F )
  {
    klass = sub_1C6BA08(&UnityEngine_Quaternion_TypeInfo);
    byte_4CAFC0F = 1;
  }
  if ( !data )
    goto LABEL_23;
  UnityEngine_Transform__set_rotation(data, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
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
    sub_1C6BC60(blankEarth, v5);
  v8.fields.y = v6;
  v8.fields.x = 0.0;
  v8.fields.z = 0.0;
  UnityEngine_Transform__Rotate_71684520(blankEarth, v8, 0);
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
  const MethodInfo *v6; // x3
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( !that )
    goto LABEL_9;
  this = (BlankEarth_StateGrandStartup_o *)that->fields.earthRoot;
  if ( !this
    || (this = (BlankEarth_StateGrandStartup_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0)) == 0
    || (v7.fields.x = 1.25,
        v7.fields.y = 1.25,
        v7.fields.z = 1.25,
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v7, 0),
        (this = (BlankEarth_StateGrandStartup_o *)that->fields.earthRoot) == 0)
    || (this = (BlankEarth_StateGrandStartup_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0)) == 0 )
  {
LABEL_9:
    sub_1C6BC60(this, that);
  }
  v8.fields.y = 0.0;
  v8.fields.z = 0.0;
  v8.fields.x = -185.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v8, 0);
  scalingEndCallback = that->fields.scalingEndCallback;
  if ( scalingEndCallback )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))scalingEndCallback->fields.invoke_impl)(
      scalingEndCallback->fields.method_code,
      scalingEndCallback->fields.method);
    that->fields.scalingEndCallback = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&that->fields.scalingEndCallback, 0, v5, v6);
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
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_Vector3_o DefaultEarthScale; // 0:s0.4,4:s1.4,8:s2.4

  this->fields = 0;
  if ( !that
    || (this = (BlankEarth_StateMain_o *)that->fields.earthRoot) == 0
    || (gameObject = (BlankEarth_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0),
        DefaultEarthScale = BlankEarth__GetDefaultEarthScale(gameObject, v5),
        GameObjectExtensions__SetLocalScale((UnityEngine_GameObject_o *)gameObject, DefaultEarthScale, 0),
        (mTerminalList = that->fields.mTerminalList) == 0)
    || (this = (BlankEarth_StateMain_o *)mTerminalList->fields.mActionBgColl) == 0
    || (this = (BlankEarth_StateMain_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_1C6BC60(this, that);
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
    sub_1C6BC60(this, 0);
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
  if ( !byte_4CAFC10 )
  {
    this = (BlankEarth_StateShortcutRotate_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC10 = 1;
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
          0),
        (v12 = v4->fields.That) == 0)
    || (this = (BlankEarth_StateShortcutRotate_o *)v12->fields.blankEarth) == 0 )
  {
LABEL_16:
    sub_1C6BC60(this, method);
  }
  v15.fields.x = 0.0;
  v15.fields.y = mNow * v4->fields.rotAmountY;
  v15.fields.z = 0.0;
  UnityEngine_Transform__Rotate_71684520((UnityEngine_Transform_o *)this, v15, 0);
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

  if ( (byte_4CB2ACF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB2ACF = 1;
  }
  EasingObj = this->fields.EasingObj;
  rotateTime = this->fields.rotateTime;
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, (intptr_t)this->klass->vtable._9_Rotate.method, 0);
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)this->klass->vtable._10_OnRotateCompleted.method, 0);
  Param = this->fields.Param;
  if ( !Param || !EasingObj )
    sub_1C6BC60(v7, v8);
  EasingObject__Play(EasingObj, rotateTime, v5, v6, 0.0, Param->fields._EaseType_k__BackingField, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarth_StateShortcutRotate__begin(
        BlankEarth_StateShortcutRotate_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  long double v9; // q8
  float v10; // s9
  long double v11; // q10
  float v12; // s11
  float v13; // s12
  float v14; // s13
  float v15; // s14
  long double v16; // q11
  float v17; // s12
  long double v18; // q13
  float v19; // s14
  EasingObject_o *EasingObj; // x0
  __int64 v21; // x1
  float v22; // s0
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  struct BlankEarth_RotateEarthTimeCalculateParam_o *rotateEarthTimeCalculateParam; // x8
  float rotAmountY; // s0
  float rotAmountX; // s0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Quaternion_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  BlankEarth_StateEarthAutoRotateBase__begin((BlankEarth_StateEarthAutoRotateBase_o *)this, that, method);
  v29 = UnityEngine_Quaternion__Inverse(this->fields.QuaFrom, 0);
  x = v29.fields.x;
  y = v29.fields.y;
  z = v29.fields.z;
  w = v29.fields.w;
  if ( !byte_4CB2AC4 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CB2AC4 = 1;
  }
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  v30.fields.w = w;
  v27 = UnityEngine_Quaternion__op_Multiply_71598412(v30, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  v9 = *(long double *)&v27.fields.x;
  v10 = v27.fields.y;
  v11 = *(long double *)&v27.fields.z;
  v31 = UnityEngine_Quaternion__Inverse(this->fields.QuaTo, 0);
  v12 = v31.fields.x;
  v13 = v31.fields.y;
  v14 = v31.fields.z;
  v15 = v31.fields.w;
  if ( !byte_4CB2AC4 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CB2AC4 = 1;
  }
  v32.fields.x = v12;
  v32.fields.y = v13;
  v32.fields.z = v14;
  v32.fields.w = v15;
  v28 = UnityEngine_Quaternion__op_Multiply_71598412(v32, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  v16 = *(long double *)&v28.fields.x;
  v17 = v28.fields.y;
  v18 = *(long double *)&v28.fields.z;
  if ( !byte_4CB1FCD )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CB1FCD = 1;
  }
  this->fields.rotAmountY = sub_22888B8(0, v9, 0.0, v11, v16, 0.0, v18);
  v19 = asinf(v10);
  v22 = asinf(v17);
  Param = this->fields.Param;
  this->fields.rotAmountX = (float)(v19 - v22) * 57.296;
  if ( !Param )
    goto LABEL_23;
  this->fields.rotateTime = Param->fields._Time_k__BackingField;
  if ( !that )
    goto LABEL_23;
  if ( that->fields.rotateEarthTimeCalculateParam )
  {
    if ( !byte_4CAFC07 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CAFC07 = 1;
    }
    EasingObj = (EasingObject_o *)System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    rotateEarthTimeCalculateParam = that->fields.rotateEarthTimeCalculateParam;
    if ( !rotateEarthTimeCalculateParam )
      goto LABEL_23;
    this->fields.rotateTime = (float)(sqrtf(
                                        (float)((float)(*(float *)&v11 - *(float *)&v18)
                                              * (float)(*(float *)&v11 - *(float *)&v18))
                                      + (float)((float)((float)(*(float *)&v9 - *(float *)&v16)
                                                      * (float)(*(float *)&v9 - *(float *)&v16))
                                              + (float)((float)(v10 - v17) * (float)(v10 - v17))))
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
      sub_1C6BC60(EasingObj, v21);
    }
  }
}


void BlankEarth_StateStartup___ctor(BlankEarth_StateStartup_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarth_StateStartup__begin(BlankEarth_StateStartup_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 Int; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x8
  int v14; // w9
  int v15; // s0
  float v16; // s8
  TerminalSceneComponent_c *v17; // x0
  __int64 v18; // x8
  UnityEngine_Transform_o *v19; // x22
  BlankEarth_c *v20; // x0
  float *p_x; // x8
  TerminalSceneComponent_c *v22; // x0
  __int64 v23; // x8
  float v24; // s0
  UnityEngine_Transform_o *v25; // x22
  _QWORD *v26; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  UnityEngine_GameObject_o *v32; // x0
  __int64 v33; // x8
  EasingObject_o *v34; // x22
  System_Action_o *v35; // x23
  System_Action_o *v36; // x24
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x8
  __int64 v40; // x8
  __int64 v41; // x8
  __int64 v42; // x8
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o EarthRotate; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB2ABC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&BlankEarth_TypeInfo);
    sub_1C6BA08(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C6BA08(&Method_BlankEarth_StateStartup_begin__);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__);
    sub_1C6BA08(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__);
    sub_1C6BA08(&BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo);
    byte_4CB2ABC = 1;
  }
  v5 = sub_1C6BC54(BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_61;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 32) = that;
  v10 = v5 + 32;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)that, v11, v12);
  *(_QWORD *)&this->fields.inertialSpeedX = 0;
  v13 = *(_QWORD *)(v5 + 32);
  if ( !v13 )
    goto LABEL_61;
  v14 = *(unsigned __int8 *)(v13 + 224);
  v15 = 0;
  *(_DWORD *)(v13 + 228) = 0;
  if ( v14 && !*(_BYTE *)(v13 + 225) )
    v15 = *(_DWORD *)(v13 + 144);
  v16 = *(float *)(v13 + 116);
  *(_DWORD *)(v5 + 68) = v15;
  *(_DWORD *)(v13 + 320) = *(_DWORD *)(v13 + 120);
  v17 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v17 = TerminalSceneComponent_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v17->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0);
  v18 = *(_QWORD *)(v5 + 32);
  *(_BYTE *)(v5 + 65) = (_DWORD)Int == 1;
  if ( !v18 )
    goto LABEL_61;
  if ( (_DWORD)Int == 1 )
  {
    v16 = *(float *)(v18 + 136);
    *(_DWORD *)(v18 + 320) = *(_DWORD *)(v18 + 140);
    v19 = *(UnityEngine_Transform_o **)(v18 + 32);
    v20 = BlankEarth_TypeInfo;
    if ( !BlankEarth_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
      v20 = BlankEarth_TypeInfo;
    }
    p_x = &v20->static_fields->SOUTH_POLE_ROTATE.fields.x;
    v43.fields.x = *p_x * 0.017453;
    v43.fields.y = p_x[1] * 0.017453;
    v43.fields.z = p_x[2] * 0.017453;
    v45 = UnityEngine_Quaternion__Internal_FromEulerRad(v43, 0);
    if ( !v19 )
      goto LABEL_61;
    UnityEngine_Transform__set_rotation(v19, v45, 0);
    v22 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v22 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v22->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0);
    v23 = *(_QWORD *)v10;
    if ( !*(_QWORD *)v10 )
      goto LABEL_61;
    if ( *(_BYTE *)(v23 + 232) )
      v24 = 180.0;
    else
      v24 = *(float *)(v23 + 84);
    *(float *)(v23 + 228) = -v24;
  }
  else
  {
    v25 = *(UnityEngine_Transform_o **)(v18 + 32);
    EarthRotate = BlankEarth__LoadEarthRotate((BlankEarth_o *)v18, v7);
    if ( !v25 )
      goto LABEL_61;
    UnityEngine_Transform__set_rotation(v25, EarthRotate, 0);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB2ACA )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2ACA = 1;
  }
  Int = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Int = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(Int + 184) + 92LL) )
  {
    v26 = Method_BlankEarth_StateStartup_begin__;
    if ( (*((_BYTE *)Method_BlankEarth_StateStartup_begin__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1C6BA20(Method_BlankEarth_StateStartup_begin__);
    Int = sub_1C6B9EC(v26, v26[4]);
    if ( *(_QWORD *)v10 )
    {
      Int = (__int64)OverwriteAssetSoundName__PlaySe(
                       (System_Reflection_MethodBase_o *)Int,
                       *(System_String_o **)(*(_QWORD *)v10 + 128LL),
                       0,
                       0);
      goto LABEL_35;
    }
LABEL_61:
    sub_1C6BC60(Int, v7);
  }
LABEL_35:
  if ( !*(_QWORD *)v10 )
    goto LABEL_61;
  Int = *(_QWORD *)(*(_QWORD *)v10 + 32LL);
  if ( !Int )
    goto LABEL_61;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Int, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3194C14 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Component_object, v29, v30);
  v31 = *(_QWORD *)(v5 + 32);
  if ( !v31 )
    goto LABEL_61;
  Int = *(_QWORD *)(v31 + 40);
  if ( !Int )
    goto LABEL_61;
  v32 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Int, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(v32, 0);
  v33 = *(_QWORD *)(v5 + 32);
  *(UnityEngine_Vector3_o *)(v5 + 52) = LocalScale;
  if ( !v33 )
    goto LABEL_61;
  *(UnityEngine_Vector3_o *)(v5 + 40) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)Int, v7);
  *(_BYTE *)(v5 + 64) = 0;
  v34 = *(EasingObject_o **)(v5 + 16);
  v35 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v5, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, 0);
  v36 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)v5, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, 0);
  v37 = *(_QWORD *)(v5 + 32);
  if ( !v37 )
    goto LABEL_61;
  if ( !v34 )
    goto LABEL_61;
  EasingObject__Play_49357376(v34, 1.0, 0.0, v16, v35, v36, 0.0, *(_DWORD *)(v37 + 188), 0);
  if ( !*(_QWORD *)v10 )
    goto LABEL_61;
  Int = *(_QWORD *)(*(_QWORD *)v10 + 256LL);
  if ( !Int )
    goto LABEL_61;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)Int, 0, 1, 0);
  v38 = *(_QWORD *)v10;
  if ( !*(_QWORD *)v10 )
    goto LABEL_61;
  Int = *(_QWORD *)(v38 + 256);
  if ( !Int )
    goto LABEL_61;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)Int, *(float *)(v38 + 172), 0, 1, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  Int = (__int64)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v39 = **(_QWORD **)(Int + 184);
  if ( !v39 )
    goto LABEL_61;
  v40 = *(_QWORD *)(v39 + 256);
  if ( !v40 )
    goto LABEL_61;
  *(_BYTE *)(v40 + 450) = 1;
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
    byte_4CB01CE = 1;
  }
  if ( !*(_DWORD *)(Int + 224) )
  {
    j_il2cpp_runtime_class_init_0(Int);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v41 = **(_QWORD **)(Int + 184);
  if ( !v41 )
    goto LABEL_61;
  v42 = *(_QWORD *)(v41 + 256);
  if ( !v42 )
    goto LABEL_61;
  *(_BYTE *)(v42 + 451) = 1;
}


void BlankEarth_StateStartup__end(BlankEarth_StateStartup_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  ;
}


void BlankEarth_StateStartup__update(BlankEarth_StateStartup_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct System_Action_o *scalingEndCallback; // x8
  CGThumbnailListItem_o *p_scalingEndCallback; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( !that )
    sub_1C6BC60(this, 0);
  BlankEarth__BlunkEarthMainOperation(that, that, &this->fields.inertialSpeedX, &this->fields.inertialSpeedY, v3);
  scalingEndCallback = that->fields.scalingEndCallback;
  if ( scalingEndCallback )
  {
    if ( this->fields.scaleRate < 0.0001 )
    {
      p_scalingEndCallback = (CGThumbnailListItem_o *)&that->fields.scalingEndCallback;
      ((void (__fastcall *)(intptr_t, intptr_t))scalingEndCallback->fields.invoke_impl)(
        scalingEndCallback->fields.method_code,
        scalingEndCallback->fields.method);
      p_scalingEndCallback->klass = 0;
      sub_1C6B9AC(p_scalingEndCallback, 0, v8, v9);
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
  if ( (byte_4CB2ABD & 1) == 0 )
  {
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4CB2ABD = 1;
  }
  eo = v2->fields.eo;
  if ( !eo )
    goto LABEL_27;
  mNow = eo->fields.mNow;
  v5 = StepFunc__Acc5(mNow, 0);
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
                                                             0);
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
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v12, 0);
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
                                                               0);
    if ( !this )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  isFirstAnim = v2->fields.isFirstAnim;
  v2->fields.isStartRotateBtn = 1;
  if ( isFirstAnim )
    return;
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !this )
LABEL_27:
    sub_1C6BC60(this, method);
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)QuestAfterAction__IsActiveCommand(
                                                             (QuestAfterAction_o *)this,
                                                             0);
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
          0);
        v19 = v2->fields.that;
        if ( v19 )
        {
          this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)v19->fields.mTerminalList;
          if ( this )
          {
            ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)this, 1, 0, 0);
            return;
          }
        }
      }
    }
    goto LABEL_27;
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
  const MethodInfo *v7; // x3
  struct BlankEarth_o *v8; // x8
  float wait_time; // s8
  System_Action_o *v10; // x21
  struct BlankEarth_o *v11; // x8

  v2 = this;
  if ( (byte_4CB2ABE & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_1C6BA08(&Method_BlankEarth_SetMainState__);
    byte_4CB2ABE = 1;
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
    v8 = v2->fields.that;
    if ( !v8 )
      goto LABEL_13;
    v8->fields.scalingEndCallback = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v8->fields.scalingEndCallback, 0, v6, v7);
    v4 = (Il2CppObject *)v2->fields.that;
  }
  wait_time = v2->fields.wait_time;
  v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v10, v4, Method_BlankEarth_SetMainState__, 0);
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)BasicHelper__DelayCall(wait_time, v10, 1, 0);
  if ( !v4
    || (this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_MonoBehaviour__StartCoroutine_71644868(
                                                                   (UnityEngine_MonoBehaviour_o *)v4,
                                                                   (System_Collections_IEnumerator_o *)this,
                                                                   0),
        (v11 = v2->fields.that) == 0) )
  {
LABEL_13:
    sub_1C6BC60(this, method);
  }
  v11->fields.isSkipTutorialWait = 0;
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
  float v16; // s8
  float zoomInScl; // s0
  float zoomInSpdTime; // s9
  float v24; // s1
  float y; // [xsp+0h] [xbp-70h]
  float x; // [xsp+10h] [xbp-60h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB2AC0 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    this = (BlankEarth_StateZoomIn_o *)sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2AC0 = 1;
  }
  if ( !blankEarth )
    goto LABEL_15;
  updated = BlankEarth__UpdateBlankEarthTransformData(blankEarth, (const MethodInfo *)otherRoot);
  LocalPosition = GameObjectExtensions__GetLocalPosition(blankEarth->fields.otherObjectRoot, 0);
  z = blankEarth->fields.zoomInPos.fields.z;
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  *(_QWORD *)&rootPosTo->fields.x = *(_QWORD *)&blankEarth->fields.zoomInPos.fields.x;
  rootPosTo->fields.z = z;
  if ( !updated )
    goto LABEL_15;
  v16 = LocalPosition.fields.z;
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
      v24 = otherRoot->fields.otherObjZoomInPos.fields.z - v16;
      *(float32x2_t *)&rootPosTo->fields.x = vsub_f32(
                                               *(float32x2_t *)&otherRoot->fields.otherObjZoomInPos.fields.x,
                                               (float32x2_t)__PAIR64__(LODWORD(y), LODWORD(x)));
      rootPosTo->fields.z = v24;
      *zoomSpeed = otherRoot->fields.zoomInSpeed;
      BlankEarthOtherObject__ZoomInAdjustAppearance(
        otherRoot,
        otherRoot->fields.zoomInSpeed,
        blankEarth->fields.zoomOutEasingType,
        0);
      return;
    }
LABEL_15:
    sub_1C6BC60(this, otherRoot);
  }
}


void BlankEarth_StateZoomIn__begin(BlankEarth_StateZoomIn_o *this, BlankEarth_o *that, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 mTerminalList; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  BlankEarth_o **v10; // x21
  BlankEarth_o *v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  struct BlankEarthPoint_o *focusEarthPoint; // x8
  int32_t spotId_k__BackingField; // w22
  TerminalPramsManager_c *v18; // x0
  BlankEarth_StateZoomIn_Fields *p_fields; // x19
  BlankEarth_o *v20; // x8
  __int64 v21; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  float v27; // s8
  BlankEarth_o *v28; // x8
  float *v29; // x9
  float v30; // s4
  float v31; // s5
  float v32; // s6
  float v33; // s7
  __int64 v34; // x10
  float z; // w10
  __int64 v36; // x10
  float zoomInScl; // s0
  struct BlankEarthPoint_o *v38; // x9
  UnityEngine_Object_o *otherObjectRoot; // x25
  Il2CppObject *v40; // x0
  const MethodInfo *v41; // x7
  UnityEngine_Object_o *v42; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  BlankEarth_o *v45; // x21
  struct BlankEarthPoint_o *v46; // x1
  CGThumbnailListItem_o *v47; // x21
  BlankEarthPoint_o *Point; // x0
  CGThumbnailListItem_c *klass; // x8
  int nestedTypes; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v52; // x8
  float v53; // s1
  System_Object_array *ComponentsInChildren_object__51985744; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  EasingObject_o *v57; // x21
  float mSpdTime; // s8
  System_Action_o *v59; // x19
  System_Action_o *v60; // x22
  __int64 v61; // x8
  UnityEngine_Quaternion_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB2ABF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__);
    sub_1C6BA08(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__);
    sub_1C6BA08(&BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo);
    byte_4CB2ABF = 1;
  }
  v5 = sub_1C6BC54(BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_83;
  *(_QWORD *)(v5 + 24) = that;
  v10 = (BlankEarth_o **)(v5 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)that, v8, v9);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_83;
  mTerminalList = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 256LL);
  if ( !mTerminalList )
    goto LABEL_83;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)mTerminalList, 0, 0, 0);
  v11 = *v10;
  if ( !*v10 )
    goto LABEL_83;
  mTerminalList = (__int64)v11->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_83;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
    (ScrTerminalListTop_o *)mTerminalList,
    v11->fields.earthBtnMoveSpeedTime,
    0,
    0,
    0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  mTerminalList = (__int64)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalList = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v12 = **(_QWORD **)(mTerminalList + 184);
  if ( !v12 )
    goto LABEL_83;
  v13 = *(_QWORD *)(v12 + 256);
  if ( !v13 )
    goto LABEL_83;
  *(_BYTE *)(v13 + 450) = 1;
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    mTerminalList = (__int64)TerminalSceneComponent_TypeInfo;
    byte_4CB01CE = 1;
  }
  if ( !*(_DWORD *)(mTerminalList + 224) )
  {
    j_il2cpp_runtime_class_init_0(mTerminalList);
    mTerminalList = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v14 = **(_QWORD **)(mTerminalList + 184);
  if ( !v14 )
    goto LABEL_83;
  v15 = *(_QWORD *)(v14 + 256);
  if ( !v15 )
    goto LABEL_83;
  *(_BYTE *)(v15 + 451) = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB2AC7 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2AC7 = 1;
  }
  mTerminalList = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    mTerminalList = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(mTerminalList + 184) + 508LL) )
  {
    if ( *v10 )
    {
      focusEarthPoint = (*v10)->fields.focusEarthPoint;
      if ( focusEarthPoint )
      {
        spotId_k__BackingField = focusEarthPoint->fields._spotId_k__BackingField;
        if ( !*(_DWORD *)(mTerminalList + 224) )
          j_il2cpp_runtime_class_init_0(mTerminalList);
        if ( !byte_4CB2ACB )
        {
          sub_1C6BA08(&TerminalPramsManager_TypeInfo);
          byte_4CB2ACB = 1;
        }
        v18 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v18 = TerminalPramsManager_TypeInfo;
        }
        v18->static_fields->_BlankEarthSpotId_k__BackingField = spotId_k__BackingField;
        TerminalPramsManager__BlankEarthSpotId_SaveData(0);
        if ( *v10 )
        {
          this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume((*v10)->fields.zoomInSpdTime, 0);
          p_fields = &this->fields;
          v20 = *v10;
          if ( *v10 )
          {
            mTerminalList = (__int64)v20->fields.mTerminalList;
            if ( mTerminalList )
            {
              ScrTerminalListTop__cbfBlankEarthQuestCreate(
                (ScrTerminalListTop_o *)mTerminalList,
                v20->fields.focusEarthPoint,
                0);
              mTerminalList = (__int64)*v10;
              if ( *v10 )
              {
                BlankEarth__SaveEarthRotate((BlankEarth_o *)mTerminalList, v7);
                mTerminalList = (__int64)*v10;
                if ( *v10 )
                {
                  mTerminalList = (__int64)BlankEarth__UpdateBlankEarthTransformData((BlankEarth_o *)mTerminalList, v7);
                  if ( *v10 )
                  {
                    v21 = mTerminalList;
                    mTerminalList = (__int64)(*v10)->fields.blankEarth;
                    if ( mTerminalList )
                    {
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0);
                      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                                           gameObject,
                                           (const MethodInfo_3194C14 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
                      *(_QWORD *)(v5 + 16) = Component_object;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Component_object, v24, v25);
                      if ( v21 )
                      {
                        v26 = *(_QWORD *)(v5 + 24);
                        *(_OWORD *)(v5 + 32) = *(_OWORD *)(v21 + 16);
                        if ( v26 )
                        {
                          v27 = *(float *)(v26 + 88);
                          if ( !byte_4CAFC11 )
                          {
                            sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
                            byte_4CAFC11 = 1;
                          }
                          v62 = UnityEngine_Quaternion__AngleAxis(
                                  -v27,
                                  UnityEngine_Vector3_TypeInfo->static_fields->upVector,
                                  0);
                          v28 = *v10;
                          if ( *v10 )
                          {
                            v29 = (float *)v28->fields.focusEarthPoint;
                            if ( v29 )
                            {
                              v30 = v29[68];
                              v31 = v29[71];
                              v32 = v29[70];
                              v33 = v29[69];
                              *(float *)(v5 + 48) = (float)((float)(v62.fields.y * v32)
                                                          + (float)((float)(v62.fields.w * v30)
                                                                  + (float)(v62.fields.x * v31)))
                                                  - (float)(v62.fields.z * v33);
                              *(float *)(v5 + 52) = (float)((float)(v62.fields.z * v30)
                                                          + (float)((float)(v62.fields.w * v33)
                                                                  + (float)(v62.fields.y * v31)))
                                                  - (float)(v62.fields.x * v32);
                              *(float *)(v5 + 56) = (float)((float)(v62.fields.x * v33)
                                                          + (float)((float)(v62.fields.w * v32)
                                                                  + (float)(v62.fields.z * v31)))
                                                  - (float)(v62.fields.y * v30);
                              *(float *)(v5 + 60) = (float)((float)((float)(v62.fields.w * v31)
                                                                  - (float)(v62.fields.x * v30))
                                                          - (float)(v62.fields.y * v33))
                                                  - (float)(v62.fields.z * v32);
                              *(_OWORD *)(v5 + 64) = *(_OWORD *)(v21 + 32);
                              if ( !byte_4CAFC0F )
                              {
                                mTerminalList = sub_1C6BA08(&UnityEngine_Quaternion_TypeInfo);
                                byte_4CAFC0F = 1;
                                v28 = *v10;
                              }
                              *(struct UnityEngine_Quaternion_StaticFields *)(v5 + 80) = *UnityEngine_Quaternion_TypeInfo->static_fields;
                              v34 = *(_QWORD *)(v21 + 48);
                              *(_DWORD *)(v5 + 104) = *(_DWORD *)(v21 + 56);
                              *(_QWORD *)(v5 + 96) = v34;
                              if ( v28 )
                              {
                                z = v28->fields.zoomInPos.fields.z;
                                *(_QWORD *)(v5 + 108) = *(_QWORD *)&v28->fields.zoomInPos.fields.x;
                                *(float *)(v5 + 116) = z;
                                v36 = *(_QWORD *)(v21 + 60);
                                *(_DWORD *)(v5 + 128) = *(_DWORD *)(v21 + 68);
                                *(_QWORD *)(v5 + 120) = v36;
                                zoomInScl = v28->fields.zoomInScl;
                                *(float *)(v5 + 132) = zoomInScl;
                                *(float *)(v5 + 136) = zoomInScl;
                                *(float *)(v5 + 140) = zoomInScl;
                                *(_BYTE *)(v5 + 176) = 0;
                                v38 = v28->fields.focusEarthPoint;
                                if ( v38 )
                                {
                                  if ( v38->fields._spotOnType_k__BackingField == 1 )
                                  {
                                    otherObjectRoot = (UnityEngine_Object_o *)v28->fields.otherObjectRoot;
                                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                    mTerminalList = UnityEngine_Object__op_Inequality(otherObjectRoot, 0, 0);
                                    if ( (mTerminalList & 1) != 0 )
                                    {
                                      if ( !*v10 )
                                        goto LABEL_83;
                                      mTerminalList = (__int64)(*v10)->fields.otherObjectRoot;
                                      if ( !mTerminalList )
                                        goto LABEL_83;
                                      v40 = UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)mTerminalList,
                                              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
                                      BlankEarth_StateZoomIn__SetOtherObjectZoomInParam(
                                        (BlankEarth_StateZoomIn_o *)v40,
                                        (BlankEarthOtherObject_o *)v40,
                                        *v10,
                                        (UnityEngine_Vector3_o *)(v5 + 108),
                                        (UnityEngine_Vector3_o *)(v5 + 132),
                                        (UnityEngine_Quaternion_o *)(v5 + 48),
                                        &p_fields->mSpdTime,
                                        v41);
                                    }
                                  }
                                  if ( !*v10 )
                                    goto LABEL_83;
                                  v42 = (UnityEngine_Object_o *)(*v10)->fields.focusEarthPoint;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  mTerminalList = UnityEngine_Object__op_Inequality(v42, 0, 0);
                                  v45 = *v10;
                                  if ( (mTerminalList & 1) != 0 )
                                  {
                                    if ( !v45 )
                                      goto LABEL_83;
                                    v46 = v45->fields.focusEarthPoint;
                                    *(_QWORD *)(v5 + 144) = v46;
                                    v47 = (CGThumbnailListItem_o *)(v5 + 144);
                                  }
                                  else
                                  {
                                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                    if ( !byte_4CB2AC7 )
                                    {
                                      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
                                      byte_4CB2AC7 = 1;
                                    }
                                    mTerminalList = (__int64)TerminalPramsManager_TypeInfo;
                                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      mTerminalList = (__int64)TerminalPramsManager_TypeInfo;
                                    }
                                    if ( !v45 )
                                      goto LABEL_83;
                                    Point = BlankEarth__GetPoint(
                                              v45,
                                              *(_DWORD *)(*(_QWORD *)(mTerminalList + 184) + 508LL),
                                              0,
                                              v44);
                                    LODWORD(v46) = (_DWORD)Point;
                                    *(_QWORD *)(v5 + 144) = Point;
                                    v47 = (CGThumbnailListItem_o *)(v5 + 144);
                                  }
                                  sub_1C6B9AC(v47, (int32_t)v46, v43, v44);
                                  klass = v47->klass;
                                  if ( v47->klass )
                                  {
                                    nestedTypes = (int)klass->_1.nestedTypes;
                                    *(_QWORD *)(v5 + 152) = klass->_1.methods;
                                    *(_DWORD *)(v5 + 160) = nestedTypes;
                                    if ( !byte_4CAFC09 )
                                    {
                                      mTerminalList = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
                                      byte_4CAFC09 = 1;
                                    }
                                    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                                    v52 = *(_QWORD *)(v5 + 24);
                                    v53 = static_fields->zeroVector.fields.z;
                                    *(_QWORD *)(v5 + 164) = *(_QWORD *)&static_fields->zeroVector.fields.x;
                                    *(float *)(v5 + 172) = v53;
                                    if ( v52 )
                                    {
                                      mTerminalList = *(_QWORD *)(v52 + 48);
                                      if ( mTerminalList )
                                      {
                                        ComponentsInChildren_object__51985744 = UnityEngine_GameObject__GetComponentsInChildren_object__51985744(
                                                                                  (UnityEngine_GameObject_o *)mTerminalList,
                                                                                  (const MethodInfo_3193D50 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
                                        *(_QWORD *)(v5 + 184) = ComponentsInChildren_object__51985744;
                                        sub_1C6B9AC(
                                          (CGThumbnailListItem_o *)(v5 + 184),
                                          (int32_t)ComponentsInChildren_object__51985744,
                                          v55,
                                          v56);
                                        v57 = *(EasingObject_o **)(v5 + 16);
                                        mSpdTime = p_fields->mSpdTime;
                                        v59 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v59,
                                          (Il2CppObject *)v5,
                                          Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__,
                                          0);
                                        v60 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v60,
                                          (Il2CppObject *)v5,
                                          Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__,
                                          0);
                                        v61 = *(_QWORD *)(v5 + 24);
                                        if ( v61 )
                                        {
                                          if ( v57 )
                                          {
                                            EasingObject__Play(v57, mSpdTime, v59, v60, 0.0, *(_DWORD *)(v61 + 180), 0);
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
    sub_1C6BC60(mTerminalList, v7);
  }
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
  float v23; // s1
  unsigned __int64 v24; // d0 OVERLAPPED
  float v25; // s2
  int v26; // s1
  struct BlankEarth_o *v27; // x8
  UnityEngine_Transform_o *v28; // x0
  float32x2_t v29; // d12
  float v30; // s13
  float32x2_t v31; // d14
  float v32; // s15
  UnityEngine_Transform_o *v33; // x20
  float v34; // s0
  float v35; // s1
  float v36; // s0
  float v37; // s1
  unsigned __int64 v38; // d0 OVERLAPPED
  float v39; // s2
  int v40; // s1
  struct BlankEarthPoint_o *focusEarthPoint; // x20
  float32x2_t v42; // d12
  float v43; // s13
  float32x2_t v44; // d14
  float v45; // s15
  float v46; // s0
  float v47; // s1
  float v48; // s0
  struct BlankEarth_o *v49; // x8
  struct BlankEarth_o *v50; // x8
  struct BlankEarthPoint_o *v51; // x8
  struct BlankEarthPoint_array *spotList; // x21
  int max_length; // w8
  float v54; // s0
  float v55; // s8
  unsigned int v56; // w22
  BlankEarthPoint_o *v57; // x20
  struct BlankEarth_o *v58; // x8
  UnityEngine_Quaternion_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4CB2AC1 & 1) == 0 )
  {
    this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)sub_1C6BA08(&BlankEarth_TypeInfo);
    byte_4CB2AC1 = 1;
  }
  eo = v2->fields.eo;
  if ( !eo )
    goto LABEL_45;
  mNow = eo->fields.mNow;
  v5 = mNow;
  v6 = StepFunc__AccSig(mNow, 0);
  that = v2->fields.that;
  if ( !that )
    goto LABEL_45;
  blankEarth = that->fields.blankEarth;
  v9 = v6;
  v59 = UnityEngine_Quaternion__Slerp(v2->fields.qua_from, v2->fields.qua_to, v9, 0);
  if ( !blankEarth )
    goto LABEL_45;
  UnityEngine_Transform__set_rotation(blankEarth, v59, 0);
  v10 = v2->fields.that;
  if ( !v10 )
    goto LABEL_45;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v10->fields.earthRoot;
  if ( !this )
    goto LABEL_45;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v60 = UnityEngine_Quaternion__Slerp(v2->fields.root_qua_from, v2->fields.root_qua_to, v9, 0);
  if ( !transform )
    goto LABEL_45;
  UnityEngine_Transform__set_rotation(transform, v60, 0);
  v12 = v2->fields.that;
  if ( !v12 )
    goto LABEL_45;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v12->fields.earthRoot;
  if ( !this )
    goto LABEL_45;
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
    goto LABEL_45;
  v23 = (float)(v17 - z) * v22;
  v24 = vadd_f32(v14, vmul_n_f32(vsub_f32(v16, v14), v22)).n64_u64[0];
  v25 = z + v23;
  v26 = HIDWORD(v24);
  UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&v24, 0);
  v27 = v2->fields.that;
  if ( !v27 )
    goto LABEL_45;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v27->fields.earthRoot;
  if ( !this )
    goto LABEL_45;
  v28 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v29.n64_u64[0] = *(unsigned __int64 *)&v2->fields.root_scl_from.fields.x;
  v30 = v2->fields.root_scl_from.fields.z;
  v31.n64_u64[0] = *(unsigned __int64 *)&v2->fields.root_scl_to.fields.x;
  v32 = v2->fields.root_scl_to.fields.z;
  v33 = v28;
  v34 = StepFunc__Acc5(v5, 0);
  v35 = fminf(v34, 1.0);
  v36 = v34 < 0.0 ? 0.0 : v35;
  if ( !v33 )
    goto LABEL_45;
  v37 = (float)(v32 - v30) * v36;
  v38 = vadd_f32(v29, vmul_n_f32(vsub_f32(v31, v29), v36)).n64_u64[0];
  v39 = v30 + v37;
  v40 = HIDWORD(v38);
  UnityEngine_Transform__set_localScale(v33, *(UnityEngine_Vector3_o *)&v38, 0);
  focusEarthPoint = v2->fields.focusEarthPoint;
  v42.n64_u64[0] = *(unsigned __int64 *)&v2->fields.spot_ui_root_qua_from.fields.x;
  v43 = v2->fields.spot_ui_root_qua_from.fields.z;
  v44.n64_u64[0] = *(unsigned __int64 *)&v2->fields.spot_ui_root_qua_to.fields.x;
  v45 = v2->fields.spot_ui_root_qua_to.fields.z;
  v46 = StepFunc__Acc5(v5, 0);
  v47 = fminf(v46, 1.0);
  v48 = v46 < 0.0 ? 0.0 : v47;
  if ( !focusEarthPoint )
    goto LABEL_45;
  *(float32x2_t *)&focusEarthPoint->fields.changedUiRootPosition.fields.x = vadd_f32(
                                                                              v42,
                                                                              vmul_n_f32(vsub_f32(v44, v42), v48));
  focusEarthPoint->fields.changedUiRootPosition.fields.z = v43 + (float)((float)(v45 - v43) * v48);
  if ( !v2->fields.isStartSlideIn )
  {
    v49 = v2->fields.that;
    if ( !v49 )
      goto LABEL_45;
    if ( mNow > v49->fields.zoomInFrameInBoardRate )
    {
      v2->fields.isStartSlideIn = 1;
      this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v49->fields.mTerminalList;
      if ( !this )
        goto LABEL_45;
      ScrTerminalListTop__CallBlankEarthSpotCreateFinishEvent(
        (ScrTerminalListTop_o *)this,
        v49->fields.focusEarthPoint,
        0);
    }
  }
  v50 = v2->fields.that;
  if ( !v50 || (v51 = v50->fields.focusEarthPoint) == 0 )
LABEL_45:
    sub_1C6BC60(this, method);
  if ( v51->fields._spotOnType_k__BackingField == 1 )
  {
    spotList = v2->fields.spotList;
    if ( !spotList )
      goto LABEL_45;
    max_length = spotList->max_length;
    v54 = fminf(mNow, 1.0);
    v55 = mNow < 0.0 ? 0.0 : v54;
    if ( max_length >= 1 )
    {
      v56 = 0;
      while ( 1 )
      {
        if ( v56 >= max_length )
          sub_1C6BC68(this);
        this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)BlankEarth_TypeInfo;
        v57 = spotList->m_Items[v56];
        if ( !BlankEarth_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
          this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)BlankEarth_TypeInfo;
        }
        v58 = v2->fields.that;
        if ( !v58 || !v57 )
          break;
        BlankEarthPoint__SetDispUIDotRange(
          v57,
          *(float *)&this->fields.spotList->max_length
        + (float)(v55 * (float)(v58->fields.object1DispSpotUISpriteDot - *(float *)&this->fields.spotList->max_length)),
          *((float *)&this->fields.spotList->max_length + 1)
        + (float)(v55
                * (float)(v58->fields.object1NoDispSpotUISpriteDot - *((float *)&this->fields.spotList->max_length + 1))),
          0);
        max_length = spotList->max_length;
        if ( (int)++v56 >= max_length )
          return;
      }
      goto LABEL_45;
    }
  }
}


void BlankEarth_StateZoomIn___c__DisplayClass1_0___begin_b__1(
        BlankEarth_StateZoomIn___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct BlankEarth_o *that; // x8
  BlankEarth_StateZoomIn___c__DisplayClass1_0_o *v3; // x19
  struct BlankEarth_o *v4; // x8
  struct BlankEarth_o *v5; // x8
  struct BlankEarth_o *v6; // x8
  struct BlankEarth_o *v7; // x8
  struct BlankEarthPoint_o *focusEarthPoint; // x8
  struct BlankEarthPoint_array *spotList; // x20
  int max_length; // w8
  unsigned int v11; // w21
  struct BlankEarth_o *v12; // x8

  that = this->fields.that;
  if ( !that )
    goto LABEL_23;
  v3 = this;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_23;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v3->fields.qua_to, 0);
  v4 = v3->fields.that;
  if ( !v4 )
    goto LABEL_23;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v4->fields.earthRoot;
  if ( !this )
    goto LABEL_23;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
  if ( !this )
    goto LABEL_23;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v3->fields.root_qua_to, 0);
  v5 = v3->fields.that;
  if ( !v5 )
    goto LABEL_23;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v5->fields.earthRoot;
  if ( !this )
    goto LABEL_23;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
  if ( !this )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v3->fields.root_pos_to, 0);
  v6 = v3->fields.that;
  if ( !v6 )
    goto LABEL_23;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v6->fields.earthRoot;
  if ( !this )
    goto LABEL_23;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
  if ( !this )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v3->fields.root_scl_to, 0);
  v7 = v3->fields.that;
  if ( !v7 )
    goto LABEL_23;
  focusEarthPoint = v7->fields.focusEarthPoint;
  if ( !focusEarthPoint )
    goto LABEL_23;
  if ( focusEarthPoint->fields._spotOnType_k__BackingField == 1 )
  {
    spotList = v3->fields.spotList;
    if ( !spotList )
      goto LABEL_23;
    max_length = spotList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= max_length )
          sub_1C6BC68(this);
        v12 = v3->fields.that;
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
          return;
      }
LABEL_23:
      sub_1C6BC60(this, method);
    }
  }
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
  const MethodInfo *v8; // x3
  BlankEarth_o **v9; // x19
  float IntpTime_AutoResume; // s0
  BlankEarth_o *v11; // x8
  struct BlankEarthPoint_o *focusEarthPoint; // x9
  float v13; // s8
  UnityEngine_Object_o *otherObjectRoot; // x21
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  UnityEngine_GameObject_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  TerminalPramsManager_c *v27; // x0
  struct BlankEarthTransform_o *BlankEarthTransformData_k__BackingField; // x1
  __int64 v29; // x8
  __int64 v30; // x10
  int v31; // w9
  __int64 v32; // x8
  float zoomInOffset; // s9
  float x; // s11
  float y; // s10
  float z; // s9
  float w; // s12
  BlankEarth_o *v38; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float v40; // s1
  UnityEngine_Object_o *v41; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  BlankEarth_o *v44; // x21
  BlankEarthPoint_o *Point; // x1
  struct UnityEngine_Vector3_StaticFields *v46; // x9
  __int64 v47; // x8
  float v48; // s1
  __int64 v49; // d0
  int v50; // s1
  __int64 v51; // x8
  System_Object_array *ComponentsInChildren_object__51985744; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  EasingObject_o *v55; // x21
  System_Action_o *v56; // x22
  System_Action_o *v57; // x23
  __int64 v58; // x8
  UnityEngine_Object_o *v59; // x20
  Il2CppObject *v60; // x20
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB2AC2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__);
    sub_1C6BA08(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__);
    sub_1C6BA08(&BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo);
    byte_4CB2AC2 = 1;
  }
  v4 = sub_1C6BC54(BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_82;
  *(_QWORD *)(v4 + 24) = that;
  v9 = (BlankEarth_o **)(v4 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 24), (int32_t)that, v7, v8);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ResetBlankEarthSpotInfo(0);
  if ( !*v9 )
    goto LABEL_82;
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume((*v9)->fields.zoomOutSpdTime, 0);
  v11 = *v9;
  if ( !*v9 )
    goto LABEL_82;
  focusEarthPoint = v11->fields.focusEarthPoint;
  if ( !focusEarthPoint )
    goto LABEL_82;
  v13 = IntpTime_AutoResume;
  if ( focusEarthPoint->fields._spotOnType_k__BackingField )
  {
    otherObjectRoot = (UnityEngine_Object_o *)v11->fields.otherObjectRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    blankEarth = UnityEngine_Object__op_Inequality(otherObjectRoot, 0, 0);
    if ( (blankEarth & 1) != 0 )
    {
      if ( !*v9 )
        goto LABEL_82;
      blankEarth = (__int64)(*v9)->fields.otherObjectRoot;
      if ( !blankEarth )
        goto LABEL_82;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)blankEarth,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      blankEarth = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( (blankEarth & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_82;
        v13 = *((float *)&Component_object[5].monitor + 1);
      }
    }
  }
  if ( !*v9 )
    goto LABEL_82;
  blankEarth = (__int64)(*v9)->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_82;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarth, 0);
  v17 = GameObjectExtensions__SafeGetComponent_object_(
          gameObject,
          (const MethodInfo_3194C14 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v4 + 16) = v17;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)v17, v18, v19);
  v20 = *(_QWORD *)(v4 + 24);
  if ( !v20 )
    goto LABEL_82;
  blankEarth = *(_QWORD *)(v20 + 32);
  if ( !blankEarth )
    goto LABEL_82;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0);
  v21 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Quaternion_o *)(v4 + 48) = rotation;
  if ( !v21 )
    goto LABEL_82;
  blankEarth = *(_QWORD *)(v21 + 40);
  if ( !blankEarth )
    goto LABEL_82;
  blankEarth = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)blankEarth, 0);
  if ( !blankEarth )
    goto LABEL_82;
  v63 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0);
  v22 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Quaternion_o *)(v4 + 80) = v63;
  if ( !v22 )
    goto LABEL_82;
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v22 + 40), 0);
  v23 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Vector3_o *)(v4 + 108) = LocalPosition;
  if ( !v23 )
    goto LABEL_82;
  blankEarth = *(_QWORD *)(v23 + 40);
  if ( !blankEarth )
    goto LABEL_82;
  v24 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)blankEarth, 0);
  *(UnityEngine_Vector3_o *)(v4 + 132) = GameObjectExtensions__GetLocalScale(v24, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB2AC8 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2AC8 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  BlankEarthTransformData_k__BackingField = v27->static_fields->_BlankEarthTransformData_k__BackingField;
  *(_QWORD *)(v4 + 192) = BlankEarthTransformData_k__BackingField;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 192), (int32_t)BlankEarthTransformData_k__BackingField, v25, v26);
  v29 = *(_QWORD *)(v4 + 192);
  if ( v29 )
  {
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(v29 + 16);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(v29 + 32);
    v30 = *(_QWORD *)(v29 + 48);
    *(_DWORD *)(v4 + 104) = *(_DWORD *)(v29 + 56);
    *(_QWORD *)(v4 + 96) = v30;
    v31 = *(_DWORD *)(v29 + 68);
    v32 = *(_QWORD *)(v29 + 60);
    *(_DWORD *)(v4 + 128) = v31;
    *(_QWORD *)(v4 + 120) = v32;
  }
  else
  {
    if ( !*v9 )
      goto LABEL_82;
    zoomInOffset = (*v9)->fields.zoomInOffset;
    if ( !byte_4CAFC11 )
    {
      sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC11 = 1;
    }
    v64 = UnityEngine_Quaternion__AngleAxis(zoomInOffset, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
    if ( !*v9 )
      goto LABEL_82;
    blankEarth = (__int64)(*v9)->fields.blankEarth;
    if ( !blankEarth )
      goto LABEL_82;
    x = v64.fields.x;
    y = v64.fields.y;
    z = v64.fields.z;
    w = v64.fields.w;
    v65 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0);
    v38 = *(BlankEarth_o **)(v4 + 24);
    *(_DWORD *)(v4 + 32) = 0;
    *(float *)(v4 + 36) = (float)((float)(z * v65.fields.x)
                                + (float)((float)(w * v65.fields.y) + (float)(y * v65.fields.w)))
                        - (float)(x * v65.fields.z);
    *(float *)(v4 + 44) = (float)((float)((float)(w * v65.fields.w) - (float)(x * v65.fields.x))
                                - (float)(y * v65.fields.y))
                        - (float)(z * v65.fields.z);
    *(_DWORD *)(v4 + 40) = 0;
    if ( !v38 )
      goto LABEL_82;
    *(struct UnityEngine_Quaternion_o *)(v4 + 64) = v38->fields.mRootQua;
    if ( !byte_4CAFC09 )
    {
      blankEarth = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC09 = 1;
      v38 = *v9;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v40 = static_fields->zeroVector.fields.z;
    *(_QWORD *)(v4 + 96) = *(_QWORD *)&static_fields->zeroVector.fields.x;
    *(float *)(v4 + 104) = v40;
    if ( !v38 )
      goto LABEL_82;
    *(UnityEngine_Vector3_o *)(v4 + 120) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)blankEarth, v6);
  }
  if ( !*v9 )
    goto LABEL_82;
  v41 = (UnityEngine_Object_o *)(*v9)->fields.focusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = UnityEngine_Object__op_Inequality(v41, 0, 0);
  v44 = *v9;
  if ( (blankEarth & 1) != 0 )
  {
    if ( !v44 )
      goto LABEL_82;
    Point = v44->fields.focusEarthPoint;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CB2AC7 )
    {
      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
      byte_4CB2AC7 = 1;
    }
    blankEarth = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      blankEarth = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v44 )
      goto LABEL_82;
    Point = BlankEarth__GetPoint(v44, *(_DWORD *)(*(_QWORD *)(blankEarth + 184) + 508LL), 0, v43);
  }
  *(_QWORD *)(v4 + 144) = Point;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 144), (int32_t)Point, v42, v43);
  if ( !byte_4CAFC09 )
  {
    blankEarth = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  v46 = UnityEngine_Vector3_TypeInfo->static_fields;
  v47 = *(_QWORD *)(v4 + 144);
  v48 = v46->zeroVector.fields.z;
  *(_QWORD *)(v4 + 164) = *(_QWORD *)&v46->zeroVector.fields.x;
  *(float *)(v4 + 172) = v48;
  if ( !v47 )
    goto LABEL_82;
  v49 = *(_QWORD *)(v47 + 152);
  v50 = *(_DWORD *)(v47 + 160);
  v51 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(v4 + 152) = v49;
  *(_DWORD *)(v4 + 160) = v50;
  if ( !v51 )
    goto LABEL_82;
  blankEarth = *(_QWORD *)(v51 + 48);
  if ( !blankEarth )
    goto LABEL_82;
  ComponentsInChildren_object__51985744 = UnityEngine_GameObject__GetComponentsInChildren_object__51985744(
                                            (UnityEngine_GameObject_o *)blankEarth,
                                            (const MethodInfo_3193D50 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  *(_QWORD *)(v4 + 184) = ComponentsInChildren_object__51985744;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 184), (int32_t)ComponentsInChildren_object__51985744, v53, v54);
  *(_BYTE *)(v4 + 176) = 0;
  v55 = *(EasingObject_o **)(v4 + 16);
  v56 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v56, (Il2CppObject *)v4, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, 0);
  v57 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)v4, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, 0);
  v58 = *(_QWORD *)(v4 + 24);
  if ( !v58 )
    goto LABEL_82;
  if ( !v55 )
    goto LABEL_82;
  EasingObject__Play_49357376(v55, 1.0, 0.0, v13, v56, v57, 0.0, *(_DWORD *)(v58 + 184), 0);
  if ( !*v9 )
    goto LABEL_82;
  v59 = (UnityEngine_Object_o *)(*v9)->fields.otherObjectRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = UnityEngine_Object__op_Inequality(v59, 0, 0);
  if ( (blankEarth & 1) != 0 )
  {
    if ( !*v9 )
      goto LABEL_82;
    blankEarth = (__int64)(*v9)->fields.otherObjectRoot;
    if ( !blankEarth )
      goto LABEL_82;
    v60 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)blankEarth,
            (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    blankEarth = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v60, 0);
    if ( (blankEarth & 1) != 0 )
    {
      if ( *v9 && v60 )
      {
        BlankEarthOtherObject__ZoomOutAdjustAppearance(
          (BlankEarthOtherObject_o *)v60,
          v13,
          (*v9)->fields.zoomOutEasingType,
          0);
        return;
      }
LABEL_82:
      sub_1C6BC60(blankEarth, v6);
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
  float v23; // s1
  unsigned __int64 v24; // d0 OVERLAPPED
  float v25; // s2
  int v26; // s1
  struct BlankEarth_o *v27; // x8
  UnityEngine_Transform_o *v28; // x0
  float32x2_t v29; // d12
  float v30; // s13
  float32x2_t v31; // d14
  float v32; // s15
  UnityEngine_Transform_o *v33; // x20
  float v34; // s0
  float v35; // s1
  float v36; // s0
  float v37; // s1
  unsigned __int64 v38; // d0 OVERLAPPED
  float v39; // s2
  int v40; // s1
  struct BlankEarthPoint_o *focusEarthPoint; // x20
  float32x2_t v42; // d12
  float v43; // s13
  float32x2_t v44; // d14
  float v45; // s15
  float v46; // s0
  float v47; // s1
  float v48; // s0
  struct BlankEarth_o *v49; // x8
  struct BlankEarth_o *v50; // x8
  struct BlankEarth_o *v51; // x8
  struct BlankEarthPoint_o *v52; // x8
  struct BlankEarthPoint_array *spotList; // x20
  int max_length; // w8
  float v55; // s0
  float v56; // s8
  unsigned int v57; // w21
  struct BlankEarth_o *v58; // x8
  UnityEngine_Quaternion_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_43;
  mNow = eo->fields.mNow;
  v4 = this;
  v5 = mNow;
  v6 = StepFunc__AccSig(mNow, 0);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_43;
  blankEarth = that->fields.blankEarth;
  v9 = v6;
  v59 = UnityEngine_Quaternion__Slerp(v4->fields.qua_to, v4->fields.qua_from, v9, 0);
  if ( !blankEarth )
    goto LABEL_43;
  UnityEngine_Transform__set_rotation(blankEarth, v59, 0);
  v10 = v4->fields.that;
  if ( !v10 )
    goto LABEL_43;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v10->fields.earthRoot;
  if ( !this )
    goto LABEL_43;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v60 = UnityEngine_Quaternion__Slerp(v4->fields.root_qua_to, v4->fields.root_qua_from, v9, 0);
  if ( !transform )
    goto LABEL_43;
  UnityEngine_Transform__set_rotation(transform, v60, 0);
  v12 = v4->fields.that;
  if ( !v12 )
    goto LABEL_43;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v12->fields.earthRoot;
  if ( !this )
    goto LABEL_43;
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
    goto LABEL_43;
  v23 = (float)(v17 - z) * v22;
  v24 = vadd_f32(v14, vmul_n_f32(vsub_f32(v16, v14), v22)).n64_u64[0];
  v25 = z + v23;
  v26 = HIDWORD(v24);
  UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&v24, 0);
  v27 = v4->fields.that;
  if ( !v27 )
    goto LABEL_43;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v27->fields.earthRoot;
  if ( !this )
    goto LABEL_43;
  v28 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v29.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_to.fields.x;
  v30 = v4->fields.root_scl_to.fields.z;
  v31.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_from.fields.x;
  v32 = v4->fields.root_scl_from.fields.z;
  v33 = v28;
  v34 = StepFunc__Acc5(v5, 0);
  v35 = fminf(v34, 1.0);
  v36 = v34 < 0.0 ? 0.0 : v35;
  if ( !v33 )
    goto LABEL_43;
  v37 = (float)(v32 - v30) * v36;
  v38 = vadd_f32(v29, vmul_n_f32(vsub_f32(v31, v29), v36)).n64_u64[0];
  v39 = v30 + v37;
  v40 = HIDWORD(v38);
  UnityEngine_Transform__set_localScale(v33, *(UnityEngine_Vector3_o *)&v38, 0);
  focusEarthPoint = v4->fields.focusEarthPoint;
  v42.n64_u64[0] = *(unsigned __int64 *)&v4->fields.spot_ui_root_qua_to.fields.x;
  v43 = v4->fields.spot_ui_root_qua_to.fields.z;
  v44.n64_u64[0] = *(unsigned __int64 *)&v4->fields.spot_ui_root_qua_from.fields.x;
  v45 = v4->fields.spot_ui_root_qua_from.fields.z;
  v46 = StepFunc__Acc5(v5, 0);
  v47 = fminf(v46, 1.0);
  v48 = v46 < 0.0 ? 0.0 : v47;
  if ( !focusEarthPoint )
    goto LABEL_43;
  *(float32x2_t *)&focusEarthPoint->fields.changedUiRootPosition.fields.x = vadd_f32(
                                                                              v42,
                                                                              vmul_n_f32(vsub_f32(v44, v42), v48));
  focusEarthPoint->fields.changedUiRootPosition.fields.z = v43 + (float)((float)(v45 - v43) * v48);
  if ( !v4->fields.isStartRotateBtn )
  {
    v49 = v4->fields.that;
    if ( !v49 )
      goto LABEL_43;
    if ( mNow < v49->fields.zoomOutFrameInRotateBtnRate )
    {
      v4->fields.isStartRotateBtn = 1;
      this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v49->fields.mTerminalList;
      if ( !this )
        goto LABEL_43;
      ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
        (ScrTerminalListTop_o *)this,
        v49->fields.earthBtnMoveSpeedTime,
        1,
        0,
        0);
      v50 = v4->fields.that;
      if ( !v50 )
        goto LABEL_43;
      this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v50->fields.mTerminalList;
      if ( !this )
        goto LABEL_43;
      ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)this, 1, 0, 0);
    }
  }
  v51 = v4->fields.that;
  if ( !v51 )
    goto LABEL_43;
  v52 = v51->fields.focusEarthPoint;
  if ( !v52 )
    goto LABEL_43;
  if ( v52->fields._spotOnType_k__BackingField == 1 )
  {
    spotList = v4->fields.spotList;
    if ( !spotList )
      goto LABEL_43;
    max_length = spotList->max_length;
    v55 = fminf(mNow, 1.0);
    v56 = mNow < 0.0 ? 0.0 : v55;
    if ( max_length >= 1 )
    {
      v57 = 0;
      while ( 1 )
      {
        if ( v57 >= max_length )
          sub_1C6BC68(this);
        this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)spotList->m_Items[v57];
        if ( !this )
          break;
        v58 = v4->fields.that;
        if ( !v58 )
          break;
        BlankEarthPoint__SetDispUIDotRange(
          (BlankEarthPoint_o *)this,
          this[1].fields.root_qua_to.fields.x
        + (float)(v56 * (float)(v58->fields.object1DispSpotUISpriteDot - this[1].fields.root_qua_to.fields.x)),
          this[1].fields.root_qua_to.fields.y
        + (float)(v56 * (float)(v58->fields.object1NoDispSpotUISpriteDot - this[1].fields.root_qua_to.fields.y)),
          0);
        max_length = spotList->max_length;
        if ( (int)++v57 >= max_length )
          return;
      }
LABEL_43:
      sub_1C6BC60(this, method);
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
  struct BlankEarth_o *v9; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct BlankEarth_o *v11; // x8
  const MethodInfo *v12; // x2
  _DWORD *monitor; // x8
  struct BlankEarthPoint_array *spotList; // x20
  int max_length; // w8
  unsigned int v16; // w21

  v2 = this;
  if ( (byte_4CB2AC3 & 1) == 0 )
  {
    this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)sub_1C6BA08(&StringLiteral_19928/*"gevINFOBAR_BACK"*/);
    byte_4CB2AC3 = 1;
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
  v9 = v2->fields.that;
  if ( !v9 )
    goto LABEL_36;
  mTerminalList = v9->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_36;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)mTerminalList->fields.mActionBgColl;
  if ( !this )
    goto LABEL_36;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v11 = v2->fields.that;
  if ( !v11
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v11->fields.mTerminalList) == 0
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)ScrTerminalListTop__mfGetMyFsmP(
                                                                   (ScrTerminalListTop_o *)this,
                                                                   0)) == 0
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0)) == 0
    || (HutongGames_PlayMaker_Fsm__Event_66788428(
          (HutongGames_PlayMaker_Fsm_o *)this,
          (System_String_o *)StringLiteral_19928/*"gevINFOBAR_BACK"*/,
          0),
        (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v2->fields.that) == 0)
    || (monitor = this[1].monitor) == 0 )
  {
LABEL_36:
    sub_1C6BC60(this, method);
  }
  if ( monitor[76] == 1 )
  {
    spotList = v2->fields.spotList;
    if ( !spotList )
      goto LABEL_36;
    max_length = spotList->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0;
      do
      {
        if ( v16 >= max_length )
          sub_1C6BC68(this);
        this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)spotList->m_Items[v16];
        if ( !this )
          goto LABEL_36;
        BlankEarthPoint__SetDispUIDotRange(
          (BlankEarthPoint_o *)this,
          this[1].fields.root_qua_to.fields.x,
          this[1].fields.root_qua_to.fields.y,
          0);
        max_length = spotList->max_length;
      }
      while ( (int)++v16 < max_length );
    }
    this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v2->fields.that;
    if ( !this )
      goto LABEL_36;
  }
  BlankEarth__SetState((BlankEarth_o *)this, 2, v12);
}


void BlankEarth__CoCheckTutorial_d__97___ctor(
        BlankEarth__CoCheckTutorial_d__97_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BlankEarth__CoCheckTutorial_d__97__MoveNext(BlankEarth__CoCheckTutorial_d__97_o *this, const MethodInfo *method)
{
  BlankEarth__CoCheckTutorial_d__97_o *v2; // x19
  int32_t _1__state; // w8
  struct BlankEarth_o *_4__this; // x20
  Il2CppObject *v5; // x22
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Action_o *finishCallback; // x1
  float time_5__2; // s0
  bool v12; // w21
  float v13; // s8
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x21
  Il2CppObject *_8__1; // x22
  System_Action_o *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct TutorialCommunicateAdapter_o *adapter; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct TutorialCommunicateAdapter_o *afterActionAdapter; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  v2 = this;
  if ( (byte_4CB2AD3 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C6BA08(&Method_BlankEarth___c__DisplayClass97_0__CoCheckTutorial_g__OnFinish_0__);
    this = (BlankEarth__CoCheckTutorial_d__97_o *)sub_1C6BA08(&BlankEarth___c__DisplayClass97_0_TypeInfo);
    byte_4CB2AD3 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    time_5__2 = v2->fields._time_5__2;
    v2->fields.__1__state = -1;
    if ( time_5__2 > 5.0 )
    {
LABEL_11:
      this = (BlankEarth__CoCheckTutorial_d__97_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( this )
      {
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0);
        v17 = sub_1C6BC54(EventTutorialMaster_EventTutorialArgs_TypeInfo);
        EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v17, 0);
        if ( v17 )
        {
          *(_DWORD *)(v17 + 20) = 83;
          _8__1 = (Il2CppObject *)v2->fields.__8__1;
          v19 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
          System_Action___ctor(v19, _8__1, Method_BlankEarth___c__DisplayClass97_0__CoCheckTutorial_g__OnFinish_0__, 0);
          *(_QWORD *)(v17 + 32) = v19;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v19, v20, v21);
          adapter = v2->fields.adapter;
          *(_QWORD *)(v17 + 56) = adapter;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 56), (int32_t)adapter, v23, v24);
          afterActionAdapter = v2->fields.afterActionAdapter;
          *(_QWORD *)(v17 + 64) = afterActionAdapter;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 64), (int32_t)afterActionAdapter, v26, v27);
          this = (BlankEarth__CoCheckTutorial_d__97_o *)EventTutorialMaster__CoroutineCheckTutorial(
                                                          (EventTutorialMaster_EventTutorialArgs_o *)v17,
                                                          0);
          if ( _4__this )
          {
            UnityEngine_MonoBehaviour__StartCoroutine_71644868(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (System_Collections_IEnumerator_o *)this,
              0);
            v12 = 0;
            _4__this->fields.isTutorialAvailable = 0;
            return v12;
          }
        }
      }
LABEL_17:
      sub_1C6BC60(this, method);
    }
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_1C6BC54(BlankEarth___c__DisplayClass97_0_TypeInfo);
    System_Object___ctor(v5, 0);
    v2->fields.__8__1 = (struct BlankEarth___c__DisplayClass97_0_o *)v5;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.__8__1, (int32_t)v5, v6, v7);
    this = (BlankEarth__CoCheckTutorial_d__97_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_17;
    finishCallback = v2->fields.finishCallback;
    *(_QWORD *)&this->fields.__1__state = finishCallback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)finishCallback, v8, v9);
    v2->fields._time_5__2 = 0.0;
  }
  if ( !_4__this )
    goto LABEL_17;
  v12 = 1;
  if ( !BlankEarth__IsJustState(_4__this, 1, 0) )
    goto LABEL_11;
  v13 = v2->fields._time_5__2;
  v2->fields._time_5__2 = v13 + UnityEngine_Time__get_deltaTime(0);
  v2->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C6B9AC(p__2__current, 0, v15, v16);
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return v12;
}


Il2CppObject *BlankEarth__CoCheckTutorial_d__97__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarth__CoCheckTutorial_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BlankEarth__CoCheckTutorial_d__97__System_Collections_IEnumerator_Reset(
        BlankEarth__CoCheckTutorial_d__97_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_BlankEarth__CoCheckTutorial_d__97_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *BlankEarth__CoCheckTutorial_d__97__System_Collections_IEnumerator_get_Current(
        BlankEarth__CoCheckTutorial_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BlankEarth__CoCheckTutorial_d__97__System_IDisposable_Dispose(
        BlankEarth__CoCheckTutorial_d__97_o *this,
        const MethodInfo *method)
{
  ;
}


void BlankEarth__CoStandByChangeState_d__99___ctor(
        BlankEarth__CoStandByChangeState_d__99_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BlankEarth__CoStandByChangeState_d__99__MoveNext(
        BlankEarth__CoStandByChangeState_d__99_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BlankEarth_o *_4__this; // x0
  float time_5__2; // s8
  Il2CppObject **p__2__current; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
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
    sub_1C6BC60(0, method);
  if ( BlankEarth__IsJustState(_4__this, this->fields.state, 0) )
  {
    time_5__2 = this->fields._time_5__2;
    this->fields._time_5__2 = time_5__2 + UnityEngine_Time__get_deltaTime(0);
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, 0, v7, v8);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(this->fields.finishCallback, 0);
  return 0;
}


Il2CppObject *BlankEarth__CoStandByChangeState_d__99__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarth__CoStandByChangeState_d__99_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BlankEarth__CoStandByChangeState_d__99__System_Collections_IEnumerator_Reset(
        BlankEarth__CoStandByChangeState_d__99_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_BlankEarth__CoStandByChangeState_d__99_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *BlankEarth__CoStandByChangeState_d__99__System_Collections_IEnumerator_get_Current(
        BlankEarth__CoStandByChangeState_d__99_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BlankEarth__CoStandByChangeState_d__99__System_IDisposable_Dispose(
        BlankEarth__CoStandByChangeState_d__99_o *this,
        const MethodInfo *method)
{
  ;
}


void BlankEarth___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB2AD1 & 1) == 0 )
  {
    sub_1C6BA08(&BlankEarth___c_TypeInfo);
    byte_4CB2AD1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BlankEarth___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BlankEarth___c_TypeInfo->static_fields->__9 = (struct BlankEarth___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BlankEarth___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BlankEarth___c___ctor(BlankEarth___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BlankEarth___c___PutAllSpots_b__110_0(BlankEarth___c_o *this, BlankEarthSpotEntity_o *e, const MethodInfo *method)
{
  if ( !e )
    sub_1C6BC60(this, 0);
  return !BlankEarthSpotEntity__IsHiddenOnBlankEarth(e, 0);
}


bool BlankEarth___c___PutAllSpots_b__110_1(BlankEarth___c_o *this, BlankEarthSpotEntity_o *e, const MethodInfo *method)
{
  if ( !e )
    sub_1C6BC60(this, 0);
  return BlankEarthSpotEntity__IsHiddenOnBlankEarth(e, 0);
}


void BlankEarth___c___UpdateSpotDisp_b__117_0(BlankEarth___c_o *this, BlankEarthPoint_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  BlankEarthPoint__UpdateDisp(x, 1, method);
}


void BlankEarth___c___UpdateSpotDisp_b__117_1(BlankEarth___c_o *this, BlankEarthPoint_o *x, const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  if ( !x )
    sub_1C6BC60(this, 0);
  BlankEarthPoint__UpdateAreaInfoList(x, (const MethodInfo *)x);
  BlankEarthPoint__UpdateDisp(x, 1, v4);
}


void BlankEarth___c__DisplayClass97_0___ctor(BlankEarth___c__DisplayClass97_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarth___c__DisplayClass97_0___CoCheckTutorial_g__OnFinish_0(
        BlankEarth___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CB2AD2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CB2AD2 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}