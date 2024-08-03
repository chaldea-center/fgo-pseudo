void __fastcall BlankEarth___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  struct BlankEarth_StaticFields *static_fields; // x8
  int32_t v6; // w1
  struct BlankEarth_StaticFields *v7; // x0

  if ( (byte_49F8FA9 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarth_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_17270/*"blankEarthRotateKey"*/, v4);
    byte_49F8FA9 = 1;
  }
  static_fields = BlankEarth_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SOUTH_POLE_ROTATE.fields.x = 0x4292000041F80000LL;
  static_fields->SOUTH_POLE_ROTATE.fields.z = 60.0;
  v6 = StringLiteral_17270/*"blankEarthRotateKey"*/;
  v7 = BlankEarth_TypeInfo->static_fields;
  v7->BLANK_EARTH_ROTATE_KEY = (struct System_String_o *)StringLiteral_17270/*"blankEarthRotateKey"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->BLANK_EARTH_ROTATE_KEY, v6, v2, v3);
}


void __fastcall BlankEarth___ctor(BlankEarth_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_49F8FA8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16809/*"ar223"*/, method);
    byte_49F8FA8 = 1;
  }
  *(_OWORD *)&this->fields.greenwichOffset = xmmword_BA3C30;
  *(_OWORD *)&this->fields.zoomOutSpdTime = xmmword_BA3AA0;
  *(_OWORD *)&this->fields.earthRadius = xmmword_BA38F0;
  v5 = StringLiteral_16809/*"ar223"*/;
  this->fields.startupSeName = (struct System_String_o *)StringLiteral_16809/*"ar223"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.startupSeName, v5, v2, v3);
  *(_OWORD *)&this->fields.firstAnimTime = xmmword_BA3E10;
  this->fields.btnSpeedRate = 3.5;
  *(_QWORD *)&this->fields.zoomInEasingType = 0x300000003LL;
  *(_OWORD *)&this->fields.zoomInPos.fields.y = xmmword_BA2990;
  *(_QWORD *)&this->fields.adjustEarthScale.fields.z = 0x3E8000003F400000LL;
  this->fields.startupEasingType = 2;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarth__Awake(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct CStateManager_BlankEarth__o **p_mFSM; // x20
  CStateManager_T__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  CStateManager_T__o *mFSM; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x22
  UnityEngine_GameObject_o *earthRoot; // x0
  CStateManager_T__o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x22
  CStateManager_T__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *v30; // x22
  CStateManager_T__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *v34; // x22
  CStateManager_T__o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *v38; // x22
  CStateManager_T__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  Il2CppObject *v42; // x22
  CStateManager_T__o *v43; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  Il2CppObject *v46; // x21
  const MethodInfo *v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  BlankEarthSpotAnimStateManager_o *v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3

  if ( (byte_49F8F8B & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthSpotAnimStateManager_TypeInfo, method);
    sub_1B640C8(&Method_CStateManager_BlankEarth___ctor__, v4);
    sub_1B640C8(&Method_CStateManager_BlankEarth__add__, v5);
    sub_1B640C8(&CStateManager_BlankEarth__TypeInfo, v6);
    sub_1B640C8(&BlankEarth_StateMain_TypeInfo, v7);
    sub_1B640C8(&BlankEarth_StateNone_TypeInfo, v8);
    sub_1B640C8(&BlankEarth_StateQAARotate_TypeInfo, v9);
    sub_1B640C8(&BlankEarth_StateShortcutRotate_TypeInfo, v10);
    sub_1B640C8(&BlankEarth_StateStartup_TypeInfo, v11);
    sub_1B640C8(&BlankEarth_StateZoomIn_TypeInfo, v12);
    sub_1B640C8(&BlankEarth_StateZoomOut_TypeInfo, v13);
    byte_49F8F8B = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v15 = (CStateManager_T__o *)sub_1B64314(CStateManager_BlankEarth__TypeInfo, method, v2);
    CStateManager_object____ctor(
      v15,
      (Il2CppObject *)this,
      7,
      (const MethodInfo_30612BC *)Method_CStateManager_BlankEarth___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarth__o *)v15;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v15, v16, v17);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v21 = (Il2CppObject *)sub_1B64314(BlankEarth_StateNone_TypeInfo, v19, v20);
    System_Object___ctor(v21, 0LL);
    if ( !mFSM )
      goto LABEL_15;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v21,
      (const MethodInfo_3061364 *)Method_CStateManager_BlankEarth__add__);
    v23 = (CStateManager_T__o *)*p_mFSM;
    v26 = (Il2CppObject *)sub_1B64314(BlankEarth_StateStartup_TypeInfo, v24, v25);
    System_Object___ctor(v26, 0LL);
    if ( !v23 )
      goto LABEL_15;
    CStateManager_object___add(
      v23,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_3061364 *)Method_CStateManager_BlankEarth__add__);
    v27 = (CStateManager_T__o *)*p_mFSM;
    v30 = (Il2CppObject *)sub_1B64314(BlankEarth_StateMain_TypeInfo, v28, v29);
    System_Object___ctor(v30, 0LL);
    if ( !v27 )
      goto LABEL_15;
    CStateManager_object___add(
      v27,
      2,
      (IState_T__o *)v30,
      (const MethodInfo_3061364 *)Method_CStateManager_BlankEarth__add__);
    v31 = (CStateManager_T__o *)*p_mFSM;
    v34 = (Il2CppObject *)sub_1B64314(BlankEarth_StateZoomIn_TypeInfo, v32, v33);
    System_Object___ctor(v34, 0LL);
    if ( !v31 )
      goto LABEL_15;
    CStateManager_object___add(
      v31,
      3,
      (IState_T__o *)v34,
      (const MethodInfo_3061364 *)Method_CStateManager_BlankEarth__add__);
    v35 = (CStateManager_T__o *)*p_mFSM;
    v38 = (Il2CppObject *)sub_1B64314(BlankEarth_StateZoomOut_TypeInfo, v36, v37);
    System_Object___ctor(v38, 0LL);
    if ( !v35 )
      goto LABEL_15;
    CStateManager_object___add(
      v35,
      4,
      (IState_T__o *)v38,
      (const MethodInfo_3061364 *)Method_CStateManager_BlankEarth__add__);
    v39 = (CStateManager_T__o *)*p_mFSM;
    v42 = (Il2CppObject *)sub_1B64314(BlankEarth_StateQAARotate_TypeInfo, v40, v41);
    System_Object___ctor(v42, 0LL);
    if ( !v39
      || (CStateManager_object___add(
            v39,
            5,
            (IState_T__o *)v42,
            (const MethodInfo_3061364 *)Method_CStateManager_BlankEarth__add__),
          v43 = (CStateManager_T__o *)*p_mFSM,
          v46 = (Il2CppObject *)sub_1B64314(BlankEarth_StateShortcutRotate_TypeInfo, v44, v45),
          System_Object___ctor(v46, 0LL),
          !v43) )
    {
LABEL_15:
      sub_1B64324(earthRoot);
    }
    CStateManager_object___add(
      v43,
      6,
      (IState_T__o *)v46,
      (const MethodInfo_3061364 *)Method_CStateManager_BlankEarth__add__);
    BlankEarth__SetState(this, 0, v47);
  }
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_15;
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !earthRoot )
    goto LABEL_15;
  this->fields.mRootQua = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)earthRoot, 0LL);
  v50 = (BlankEarthSpotAnimStateManager_o *)sub_1B64314(BlankEarthSpotAnimStateManager_TypeInfo, v48, v49);
  BlankEarthSpotAnimStateManager___ctor(v50, 0LL);
  this->fields._SpotAnimStateManager_k__BackingField = v50;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._SpotAnimStateManager_k__BackingField,
    (int32_t)v50,
    v51,
    v52);
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
  __int64 v11; // x1
  CTouch_c *v12; // x0
  float x; // s9
  uint32_t cctor_finished; // w8
  float v15; // s0
  CTouch_c *v16; // x0
  float y; // s9
  float v18; // s0
  float v19; // s8
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v21; // s4
  float v22; // s1
  float v23; // s2
  float v24; // s0
  float v25; // s10
  float v26; // s0
  float v27; // s9
  float v28; // s0
  float totalAngle; // s0
  float maxAngle; // s2
  float v31; // s1
  float v32; // s1
  float v33; // s2
  float v34; // s0
  BlankEarth_o *v35; // x22
  __int64 v36; // x1
  float v37; // s8
  float v38; // s9
  float z; // s10
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_49F8F8F & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_1B640C8(&CTouch_TypeInfo, that);
    byte_49F8F8F = 1;
  }
  if ( !that )
LABEL_67:
    sub_1B64324(this);
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
      if ( !byte_49F9039 )
      {
        sub_1B640C8(&CTouch_TypeInfo, v11);
        byte_49F9039 = 1;
      }
      v12 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v12 = CTouch_TypeInfo;
      }
      x = v12->static_fields->mScrPosDelta.fields.x;
      if ( !byte_49F903A )
      {
        sub_1B640C8(&CTouch_TypeInfo, v11);
        v12 = CTouch_TypeInfo;
        byte_49F903A = 1;
      }
      cctor_finished = v12->_2.cctor_finished;
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = CTouch_TypeInfo;
        cctor_finished = CTouch_TypeInfo->_2.cctor_finished;
      }
      v15 = v12->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v15) )
        v15 = x;
      *inertialSpeedX = v15 * -0.2;
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(v12);
      if ( !byte_49F9039 )
      {
        sub_1B640C8(&CTouch_TypeInfo, v11);
        byte_49F9039 = 1;
      }
      v16 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v16 = CTouch_TypeInfo;
      }
      y = v16->static_fields->mScrPosDelta.fields.y;
      if ( !byte_49F903A )
      {
        sub_1B640C8(&CTouch_TypeInfo, v11);
        v16 = CTouch_TypeInfo;
        byte_49F903A = 1;
      }
      if ( !v16->_2.cctor_finished )
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
  else
  {
    v19 = *inertialSpeedX;
    if ( !byte_49F7115 )
    {
      sub_1B640C8(&UnityEngine_Mathf_TypeInfo, that);
      byte_49F7115 = 1;
    }
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    v21 = fmaxf(fabsf(v19), 0.0) * 0.000001;
    v22 = static_fields->Epsilon * 8.0;
    if ( v21 <= v22 )
      v23 = static_fields->Epsilon * 8.0;
    else
      v23 = v21;
    if ( vabds_f32(0.0, v19) >= v23 )
      goto LABEL_51;
    v24 = fmaxf(fabsf(*inertialSpeedY), 0.0) * 0.000001;
    if ( v24 <= v22 )
      v24 = static_fields->Epsilon * 8.0;
    if ( vabds_f32(0.0, *inertialSpeedY) >= v24 )
    {
LABEL_51:
      v25 = *inertialSpeedX;
      v26 = v25 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      if ( fabsf(v26) < 0.004 )
        v26 = 0.0;
      *inertialSpeedX = v26;
      v27 = *inertialSpeedY;
      v28 = v27 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      *inertialSpeedY = v28;
      if ( fabsf(v28) < 0.004 )
        *inertialSpeedY = 0.0;
    }
  }
  totalAngle = v8->fields.totalAngle;
  maxAngle = v8->fields.maxAngle;
  v31 = totalAngle + *inertialSpeedY;
  if ( maxAngle < v31 )
  {
    v32 = maxAngle - totalAngle;
    *inertialSpeedY = maxAngle - totalAngle;
    totalAngle = v8->fields.totalAngle;
    maxAngle = v8->fields.maxAngle;
    v31 = totalAngle + v32;
  }
  v33 = -maxAngle;
  if ( v31 < v33 )
  {
    v34 = v33 - totalAngle;
    *inertialSpeedY = v34;
    v31 = v8->fields.totalAngle + v34;
  }
  v8->fields.totalAngle = v31;
  this = (BlankEarth_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_67;
  this = (BlankEarth_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !that->fields.blankEarth )
    goto LABEL_67;
  v35 = this;
  this = (BlankEarth_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)that->fields.blankEarth, 0LL);
  if ( !this )
    goto LABEL_67;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  v37 = position.fields.x;
  v38 = position.fields.y;
  z = position.fields.z;
  if ( !byte_49F7118 )
  {
    this = (BlankEarth_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v36);
    byte_49F7118 = 1;
  }
  if ( !v35 )
    goto LABEL_67;
  v41.fields.y = v38;
  v41.fields.x = v37;
  v41.fields.z = z;
  UnityEngine_Transform__RotateAround(
    (UnityEngine_Transform_o *)v35,
    v41,
    UnityEngine_Vector3_TypeInfo->static_fields->rightVector,
    -*inertialSpeedY,
    0LL);
  this = (BlankEarth_o *)that->fields.blankEarth;
  if ( !this )
    goto LABEL_67;
  v42.fields.y = *inertialSpeedX;
  v42.fields.x = 0.0;
  v42.fields.z = 0.0;
  UnityEngine_Transform__Rotate_69150388((UnityEngine_Transform_o *)this, v42, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49F8F90 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarth__CoCheckTutorial_d__89_TypeInfo, adapter);
    byte_49F8F90 = 1;
  }
  v7 = sub_1B64314(BlankEarth__CoCheckTutorial_d__89_TypeInfo, adapter, finishCallback);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 56) = adapter;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 56), (int32_t)adapter, v10, v11);
  *(_QWORD *)(v7 + 32) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)finishCallback, v12, v13);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49F8F91 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarth__CoStandByChangeState_d__91_TypeInfo, *(_QWORD *)&state);
    byte_49F8F91 = 1;
  }
  v7 = sub_1B64314(BlankEarth__CoStandByChangeState_d__91_TypeInfo, *(_QWORD *)&state, finishCallback);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = state;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
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
  if ( !byte_49F7114 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v12);
    byte_49F7114 = 1;
  }
  v15 = v14 * v11;
  v16 = earthRadius * v10;
  v17 = v13 * v11;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v18 = sqrtf((float)(v17 * v17) + (float)((float)(v16 * v16) + (float)(v15 * v15)));
  if ( v18 <= 0.00001 )
  {
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v12);
      byte_49F7111 = 1;
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
  v32 = UnityEngine_Quaternion__LookRotation_69066096(v31, 0LL);
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
  UnityEngine_Object_o *v19; // x22
  System_String_o *v20; // x0
  UnityEngine_Transform_o *blankEarth; // x8
  UnityEngine_Transform_o *v22; // x20
  int v23; // s0
  const MethodInfo *v26; // x2

  if ( (byte_49F8F98 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___, obj);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_3275/*"BlankEarthGimmick_"*/, v15);
    byte_49F8F98 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__Instantiate_object_(
          (Il2CppObject *)obj,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_33381176((UnityEngine_GameObject_o *)v16, this->fields.earthGimmickRoot, 0LL);
  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F7116 = 1;
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
  v19 = (UnityEngine_Object_o *)transform;
  v20 = System_Int32__ToString((int)gimmickEnt + 16, 0LL);
  transform = System_String__Concat_61375396((System_String_o *)StringLiteral_3275/*"BlankEarthGimmick_"*/, v20, 0LL);
  if ( !v19 )
    goto LABEL_14;
  UnityEngine_Object__set_name(v19, transform, 0LL);
  GameObjectExtensions__SetLocalPosition_33375564((UnityEngine_GameObject_o *)v16, x, y, z, 0LL);
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  blankEarth = this->fields.blankEarth;
  if ( !blankEarth
    || (v22 = (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_position(blankEarth, 0LL),
        !v22)
    || (UnityEngine_Transform__LookAt_69151468(v22, *(UnityEngine_Vector3_o *)&v23, 0LL),
        (transform = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v16,
                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___)) == 0LL) )
  {
LABEL_14:
    sub_1B64324(transform);
  }
  BlankEarthGimmickComponent__Setup((BlankEarthGimmickComponent_o *)transform, gimmickEnt, v26);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  TerminalSceneComponent_c *v17; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v19; // x1
  System_String_o *transform; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  Il2CppObject *v25; // x21
  __int64 v26; // x1
  UnityEngine_Object_o *v27; // x22
  System_String_o *v28; // x0
  UnityEngine_Transform_o *v29; // x22
  int v30; // s0
  const MethodInfo *v33; // x4
  BlankEarthPoint_o *v34; // x21

  if ( (byte_49F8F9C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___, spotObj);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_3276/*"BlankEarthPoint_"*/, v16);
    byte_49F8F9C = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, spotObj);
    byte_49F76BD = 1;
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mTerminalScene,
    (int32_t)v19,
    (int32_t)spotEnt,
    (int32_t)method);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_21;
  mTerminalList = mTerminalScene->fields.mTerminalList;
  this->fields.mTerminalList = mTerminalList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mTerminalList, (int32_t)mTerminalList, v21, v22);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v25 = UnityEngine_Object__Instantiate_object_(
          (Il2CppObject *)spotObj,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_33381176((UnityEngine_GameObject_o *)v25, this->fields.earthSpotRoot, 0LL);
  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v26);
    byte_49F7116 = 1;
  }
  GameObjectExtensions__SetLocalScale(
    (UnityEngine_GameObject_o *)v25,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  if ( !v25 )
    goto LABEL_21;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0LL);
  if ( !spotEnt )
    goto LABEL_21;
  v27 = (UnityEngine_Object_o *)transform;
  v28 = System_Int32__ToString((int)spotEnt + 16, 0LL);
  transform = System_String__Concat_61375396((System_String_o *)StringLiteral_3276/*"BlankEarthPoint_"*/, v28, 0LL);
  if ( !v27
    || (UnityEngine_Object__set_name(v27, transform, 0LL),
        GameObjectExtensions__SetLocalPosition_33375564((UnityEngine_GameObject_o *)v25, x, y, z, 0LL),
        transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0LL),
        !this->fields.blankEarth)
    || (v29 = (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_position(this->fields.blankEarth, 0LL),
        !v29)
    || (UnityEngine_Transform__LookAt_69151468(v29, *(UnityEngine_Vector3_o *)&v30, 0LL),
        (transform = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v25,
                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___)) == 0LL) )
  {
LABEL_21:
    sub_1B64324(transform);
  }
  v34 = (BlankEarthPoint_o *)transform;
  BlankEarthPoint__SetEarthObj((BlankEarthPoint_o *)transform, spotEnt, this, this->fields.mEarthCamera, v33);
  return v34;
}


void __fastcall BlankEarth__ExecuteAfterStartUpScaling(
        BlankEarth_o *this,
        System_Action_o *startupScalingEndCallback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  if ( BlankEarth__GetState(this, (const MethodInfo *)startupScalingEndCallback) == 1 )
  {
    this->fields.scalingEndCallback = startupScalingEndCallback;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.scalingEndCallback,
      (int32_t)startupScalingEndCallback,
      v5,
      v6);
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
  float maxAngle; // s0
  float x; // s1
  float v13; // s2

  if ( spotEnt )
  {
    *(UnityEngine_Quaternion_o *)&v5 = BlankEarth__ConvertLatLongToSafePointQuaternion(
                                         this,
                                         *(UnityEngine_Vector2_o *)&spotEnt->fields.x,
                                         (const MethodInfo *)spotEnt);
    blankEarth = this->fields.blankEarth;
    if ( !blankEarth )
      sub_1B64324(0LL);
    UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v5, 0LL);
    maxAngle = this->fields.maxAngle;
    x = spotEnt->fields.x;
    v13 = -maxAngle;
    if ( maxAngle >= x )
      maxAngle = spotEnt->fields.x;
    if ( x < v13 )
      maxAngle = v13;
    this->fields.totalAngle = maxAngle;
    BlankEarth__SaveEarthRotate(this, v10);
  }
}


UnityEngine_Vector3_o __fastcall BlankEarth__GetDefaultEarthScale(BlankEarth_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F7116 = 1;
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
  if ( (byte_49F8F94 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___, *(_QWORD *)&gimmickId);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_3275/*"BlankEarthGimmick_"*/, v5);
    byte_49F8F94 = 1;
  }
  result = (BlankEarthGimmickComponent_o *)this->fields.earthGimmickRoot;
  if ( !result )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0LL);
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  result = (BlankEarthGimmickComponent_o *)System_String__Concat_61375396(
                                             (System_String_o *)StringLiteral_3275/*"BlankEarthGimmick_"*/,
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
                                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    }
LABEL_12:
    sub_1B64324(result);
  }
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
  if ( (byte_49F8F93 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___, *(_QWORD *)&spotId);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_3276/*"BlankEarthPoint_"*/, v5);
    byte_49F8F93 = 1;
  }
  result = (BlankEarthPoint_o *)this->fields.earthSpotRoot;
  if ( !result )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0LL);
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  result = (BlankEarthPoint_o *)System_String__Concat_61375396((System_String_o *)StringLiteral_3276/*"BlankEarthPoint_"*/, v8, 0LL);
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
      result = (BlankEarthPoint_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      if ( result )
        return (BlankEarthPoint_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)result,
                                      (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    }
LABEL_12:
    sub_1B64324(result);
  }
  return result;
}


System_String_o *__fastcall BlankEarth__GetGimmickPrefabName(
        BlankEarthGimmickEntity_o *gimmick,
        const MethodInfo *method)
{
  BlankEarthGimmickEntity_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = gimmick;
  if ( (byte_49F8F97 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    gimmick = (BlankEarthGimmickEntity_o *)sub_1B640C8(&StringLiteral_5776/*"EarthGimmick_{0:00000}"*/, v3);
    byte_49F8F97 = 1;
  }
  if ( !v2 )
    sub_1B64324(gimmick);
  objectId = v2->fields.objectId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_5776/*"EarthGimmick_{0:00000}"*/, v4, 0LL);
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
  BlankEarthSpotEntity_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = spot;
  if ( (byte_49F8F9B & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    spot = (BlankEarthSpotEntity_o *)sub_1B640C8(&StringLiteral_5778/*"EarthPoint_{0:00000}"*/, v3);
    byte_49F8F9B = 1;
  }
  if ( !v2 )
    sub_1B64324(spot);
  objectId = v2->fields.objectId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId);
  return System_String__Format((System_String_o *)StringLiteral_5778/*"EarthPoint_{0:00000}"*/, v4, 0LL);
}


int32_t __fastcall BlankEarth__GetState(BlankEarth_o *this, const MethodInfo *method)
{
  BlankEarth_o *v2; // x19
  struct CStateManager_BlankEarth__o *mFSM; // x8

  v2 = this;
  if ( (byte_49F8F8D & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_1B640C8(&Method_CStateManager_BlankEarth__getState__, method);
    byte_49F8F8D = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(this);
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
  System_String_o *String_69086012; // x0
  System_String_o *v5; // x21
  System_String_array *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  float v9; // s0
  float v10; // s8
  float v11; // s0
  float v12; // s9
  float v13; // s0
  BlankEarth_c *v14; // x0
  float *p_x; // x8
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s3
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F8F92 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarth_TypeInfo, method);
    byte_49F8F92 = 1;
  }
  v3 = BlankEarth_TypeInfo;
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v3 = BlankEarth_TypeInfo;
  }
  String_69086012 = UnityEngine_PlayerPrefs__GetString_69086012(v3->static_fields->BLANK_EARTH_ROTATE_KEY, 0LL);
  if ( !String_69086012 )
    goto LABEL_17;
  v5 = String_69086012;
  v6 = System_String__Split(String_69086012, 0x2Cu, 0, 0LL);
  String_69086012 = (System_String_o *)System_String__IsNullOrEmpty(v5, 0LL);
  if ( ((unsigned __int8)String_69086012 & 1) != 0 )
    goto LABEL_13;
  if ( !v6 )
LABEL_17:
    sub_1B64324(String_69086012);
  if ( v6->max_length == 4 )
  {
    this->fields.totalAngle = System_Single__Parse(v6->m_Items[3], 0LL);
    if ( !v6->max_length
      || (v9 = System_Single__Parse(v6->m_Items[0], 0LL), v6->max_length <= 1)
      || (v10 = v9, v11 = System_Single__Parse(v6->m_Items[1], 0LL), v6->max_length <= 2) )
    {
      sub_1B6432C(v7, v8);
    }
    v12 = v11;
    v13 = System_Single__Parse(v6->m_Items[2], 0LL);
    goto LABEL_16;
  }
LABEL_13:
  this->fields.totalAngle = -this->fields.maxAngle;
  v14 = BlankEarth_TypeInfo;
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v14 = BlankEarth_TypeInfo;
  }
  p_x = &v14->static_fields->SOUTH_POLE_ROTATE.fields.x;
  v10 = *p_x;
  v12 = p_x[1];
  v13 = p_x[2];
LABEL_16:
  v20.fields.y = v12 * 0.017453;
  v20.fields.z = v13 * 0.017453;
  v20.fields.x = v10 * 0.017453;
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__Internal_FromEulerRad(v20, 0LL);
  result.fields.w = v19;
  result.fields.z = v18;
  result.fields.y = v17;
  result.fields.x = v16;
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

  if ( (byte_49F8FA5 & 1) == 0 )
  {
    sub_1B640C8(&Method_BlankEarth_OnPressRotateBtnX__, isLeft);
    byte_49F8FA5 = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnX__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnX__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_BlankEarth_OnPressRotateBtnX__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  this->fields.isLeft = isLeft;
  this->fields.isBtnTouchX = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__OnPressRotateBtnY(BlankEarth_o *this, bool isUp, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_49F8FA6 & 1) == 0 )
  {
    sub_1B640C8(&Method_BlankEarth_OnPressRotateBtnY__, isUp);
    byte_49F8FA6 = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnY__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnY__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_BlankEarth_OnPressRotateBtnY__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
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
  UnityEngine_Object_o *EarthPoint; // x22
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x4

  EarthPoint = (UnityEngine_Object_o *)spot;
  if ( (byte_49F8FA3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, spot);
    byte_49F8FA3 = 1;
  }
  if ( EarthPoint )
    EarthPoint = (UnityEngine_Object_o *)BlankEarth__GetEarthPoint(
                                           this,
                                           EarthPoint->fields.m_CachedPtr,
                                           *(const MethodInfo **)&animIndex);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(EarthPoint, 0LL, 0LL);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !EarthPoint )
      sub_1B64324(v11);
    BlankEarthPoint__PlaySpotUniqueAnim((BlankEarthPoint_o *)EarthPoint, animIndex, isQuick, finishCallback, v12);
  }
}


void __fastcall BlankEarth__PutAllGimmick(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BlankEarthGimmickEntity_array *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x8
  BlankEarthGimmickEntity_array *v8; // x20
  unsigned __int64 v9; // x21

  if ( (byte_49F8F95 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    byte_49F8F95 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BlankEarthGimmickEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object
    || (Master_object = BlankEarthGimmickMaster__GetAllGimmick((BlankEarthGimmickMaster_o *)Master_object, 0LL)) == 0LL )
  {
    sub_1B64324(Master_object);
  }
  v7 = *(_QWORD *)&Master_object->max_length;
  v8 = Master_object;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v7 )
        sub_1B6432C(Master_object, v5);
      BlankEarth__PutGimmick(this, v8->m_Items[v9], v6);
      LODWORD(v7) = v8->max_length;
      ++v9;
    }
    while ( (__int64)v9 < (int)v7 );
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
  System_Collections_Generic_IEnumerable_TSource__o *All; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Func_object__object__o *v14; // x21
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  System_Collections_Generic_IEnumerable_T__o *v16; // x0

  if ( (byte_49F8F99 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_BlankEarthPoint___, *(_QWORD *)&beforeClearQuestId);
    sub_1B640C8(&Method_BlankEarth_PutSpot__, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___, v8);
    sub_1B640C8(&System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo, v9);
    byte_49F8F99 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  All = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__GetAll(
                                                               (BlankEarthSpotMaster_o *)Master_object,
                                                               0LL);
  v14 = (System_Func_object__object__o *)sub_1B64314(
                                           System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo,
                                           v12,
                                           v13);
  System_Func_object__object____ctor(v14, (Il2CppObject *)this, Method_BlankEarth_PutSpot__, 0LL);
  v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         All,
                                                         (System_Func_TSource__TResult__o *)v14,
                                                         (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
  v16 = BasicHelper__ExcludeNull_object_(
          v15,
          (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
  System_Linq_Enumerable__ToArray_object_(
    (System_Collections_Generic_IEnumerable_TSource__o *)v16,
    (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
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
  AssetData_o *Asset_37501280; // x21
  Il2CppObject *Object_object__48347676; // x21
  const MethodInfo *v20; // x3
  float v21; // [xsp+8h] [xbp-68h] BYREF
  float v22; // [xsp+Ch] [xbp-64h] BYREF
  float cosx; // [xsp+48h] [xbp-28h] BYREF
  float sinx; // [xsp+4Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_49F8F96 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, gimmick);
    sub_1B640C8(&BlankEarth_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&ScrTerminalListTop_TypeInfo, v7);
    this = (BlankEarth_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    byte_49F8F96 = 1;
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
  this = (BlankEarth_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v16 = (AssetManager_o *)this;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v16 )
    goto LABEL_15;
  Asset_37501280 = AssetManager__GetAsset_37501280(
                     v16,
                     ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH,
                     0LL);
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
  this = (BlankEarth_o *)BlankEarth__GetGimmickPrefabName(gimmick, v17);
  if ( !Asset_37501280 )
LABEL_15:
    sub_1B64324(this);
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              Asset_37501280,
                              (System_String_o *)this,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
    BlankEarth__CreateGimmick(
      v4,
      (UnityEngine_GameObject_o *)Object_object__48347676,
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
  BlankEarth_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  float v9; // s8
  float v10; // s9
  float v11; // s10
  float earthRadius; // s11
  float v13; // s8
  float v14; // s12
  AssetManager_o *v15; // x21
  const MethodInfo *v16; // x1
  AssetData_o *Asset_37501280; // x21
  Il2CppObject *Object_object__48347676; // x21
  const MethodInfo *v19; // x3
  float v21; // [xsp+0h] [xbp-60h] BYREF
  float v22; // [xsp+4h] [xbp-5Ch] BYREF
  float cosx; // [xsp+8h] [xbp-58h] BYREF
  float sinx; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_49F8F9A & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, spot);
    sub_1B640C8(&BlankEarth_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&ScrTerminalListTop_TypeInfo, v7);
    this = (BlankEarth_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    byte_49F8F9A = 1;
  }
  if ( !spot )
    goto LABEL_15;
  v9 = (float)(spot->fields.y + v4->fields.greenwichOffset) * 0.017453;
  sincosf(spot->fields.x * 0.017453, &sinx, &cosx);
  v11 = cosx;
  v10 = sinx;
  earthRadius = v4->fields.earthRadius;
  sincosf(v9, &v22, &v21);
  v14 = v21;
  v13 = v22;
  this = (BlankEarth_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v15 = (AssetManager_o *)this;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v15 )
    goto LABEL_15;
  Asset_37501280 = AssetManager__GetAsset_37501280(
                     v15,
                     ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH,
                     0LL);
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
  this = (BlankEarth_o *)BlankEarth__GetSpotPrefabName(spot, v16);
  if ( !Asset_37501280 )
LABEL_15:
    sub_1B64324(this);
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              Asset_37501280,
                              (System_String_o *)this,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
    return 0LL;
  else
    return BlankEarth__CreateSpot(
             v4,
             (UnityEngine_GameObject_o *)Object_object__48347676,
             spot,
             v14 * (float)(v11 * (float)(earthRadius + 0.0)),
             v10 * earthRadius,
             v13 * (float)(v11 * (float)(earthRadius + 0.0)),
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
  UnityEngine_Object_o *EarthPoint; // x22
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x4

  EarthPoint = (UnityEngine_Object_o *)spot;
  if ( (byte_49F8FA2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, spot);
    byte_49F8FA2 = 1;
  }
  if ( EarthPoint )
    EarthPoint = (UnityEngine_Object_o *)BlankEarth__GetEarthPoint(
                                           this,
                                           EarthPoint->fields.m_CachedPtr,
                                           *(const MethodInfo **)&dispType);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(EarthPoint, 0LL, 0LL);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !EarthPoint )
      sub_1B64324(v11);
    BlankEarthPoint__RevealOrConcealSpotAnim((BlankEarthPoint_o *)EarthPoint, dispType, isQuick, finishCallback, v12);
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
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x2
  int32_t v24; // w1

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  if ( (byte_49F8FA1 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarth_QAARotateEarthParam_TypeInfo, *(_QWORD *)&easeType);
    byte_49F8FA1 = 1;
  }
  v16 = sub_1B64314(BlankEarth_QAARotateEarthParam_TypeInfo, *(_QWORD *)&easeType, isShortcut);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  *(float *)(v16 + 16) = time;
  *(float *)(v16 + 20) = x;
  *(float *)(v16 + 24) = y;
  *(_DWORD *)(v16 + 28) = easeType;
  *(_QWORD *)(v16 + 32) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)finishCallback, v17, v18);
  this->fields.qaaRotateEarthParam = (struct BlankEarth_QAARotateEarthParam_o *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.qaaRotateEarthParam, v16, v19, v20);
  this->fields.rotateEarthTimeCalculateParam = rotateTimeCalculateParam;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.rotateEarthTimeCalculateParam,
    (int32_t)rotateTimeCalculateParam,
    v21,
    v22);
  if ( isShortcut )
    v24 = 6;
  else
    v24 = 5;
  BlankEarth__SetState(this, v24, v23);
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
  __int64 v13; // x1
  __int64 v14; // x20

  if ( (byte_49F8FA0 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___, blankEarthGimmickEntity);
    sub_1B640C8(&BlankEarth_QAARotateEarthResponse_TypeInfo, v13);
    byte_49F8FA0 = 1;
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
    v14 = sub_1B64314(BlankEarth_QAARotateEarthResponse_TypeInfo, blankEarthGimmickEntity, *(_QWORD *)&easeType);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    *(_BYTE *)(v14 + 16) = 1;
    ActionExtensions__Call_object_(
      (System_Action_T__o *)finishCallback,
      (Il2CppObject *)v14,
      (const MethodInfo_2D90A78 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
  __int64 v15; // x1
  __int64 v16; // x20

  if ( (byte_49F8F9F & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___, blankEarthSpotEntity);
    sub_1B640C8(&BlankEarth_QAARotateEarthResponse_TypeInfo, v15);
    byte_49F8F9F = 1;
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
    v16 = sub_1B64314(BlankEarth_QAARotateEarthResponse_TypeInfo, blankEarthSpotEntity, *(_QWORD *)&easeType);
    System_Object___ctor((Il2CppObject *)v16, 0LL);
    *(_BYTE *)(v16 + 16) = 1;
    ActionExtensions__Call_object_(
      (System_Action_T__o *)finishCallback,
      (Il2CppObject *)v16,
      (const MethodInfo_2D90A78 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
    sub_1B64324(0LL);
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
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  float v21; // s0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  float v27; // s0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  float v33; // s0
  int32_t v34; // w2
  int32_t v35; // w3
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
  if ( (byte_49F8F9E & 1) == 0 )
  {
    sub_1B640C8(&BlankEarth_TypeInfo, method);
    sub_1B640C8(&string___TypeInfo, v8);
    sub_1B640C8(&StringLiteral_869/*","*/, v9);
    byte_49F8F9E = 1;
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
  v12 = sub_1B64170(string___TypeInfo, 7LL);
  v14 = System_Single__ToString(v13, &v37);
  if ( !v12 )
    sub_1B64324(v14);
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_14;
  *(_QWORD *)(v12 + 32) = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)v14, v16, v17);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_14;
  v20 = (int)StringLiteral_869/*","*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_869/*","*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 40), v20, v18, v19);
  v14 = System_Single__ToString(v21, (const MethodInfo *)((char *)&v37.methodPointer + 4));
  if ( *(_DWORD *)(v12 + 24) <= 2u )
    goto LABEL_14;
  *(_QWORD *)(v12 + 48) = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 48), (int32_t)v14, v22, v23);
  if ( *(_DWORD *)(v12 + 24) <= 3u )
    goto LABEL_14;
  v26 = (int)StringLiteral_869/*","*/;
  *(_QWORD *)(v12 + 56) = StringLiteral_869/*","*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 56), v26, v24, v25);
  v14 = System_Single__ToString(v27, (const MethodInfo *)&v37.virtualMethodPointer);
  if ( *(_DWORD *)(v12 + 24) <= 4u
    || (*(_QWORD *)(v12 + 64) = v14,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 64), (int32_t)v14, v28, v29),
        *(_DWORD *)(v12 + 24) <= 5u)
    || (v32 = (int)StringLiteral_869/*","*/,
        *(_QWORD *)(v12 + 72) = StringLiteral_869/*","*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 72), v32, v30, v31),
        v14 = System_Single__ToString(v33, (const MethodInfo *)((char *)&v37.methodMetadataHandle + 4)),
        *(_DWORD *)(v12 + 24) <= 6u) )
  {
LABEL_14:
    sub_1B6432C(v14, v15);
  }
  *(_QWORD *)(v12 + 80) = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 80), (int32_t)v14, v34, v35);
  v36 = System_String__Concat_61388924((System_String_array *)v12, 0LL);
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

  if ( spotEnt )
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
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetEarthRotate(BlankEarth_o *this, UnityEngine_Quaternion_o qua, const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0

  blankEarth = this->fields.blankEarth;
  if ( !blankEarth )
    sub_1B64324(0LL);
  UnityEngine_Transform__set_rotation(blankEarth, qua, 0LL);
}


void __fastcall BlankEarth__SetFocusEarthPoint(BlankEarth_o *this, int32_t spotId, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  BlankEarth_o *v4; // x19
  const MethodInfo *v6; // x2
  BlankEarthPoint_o *EarthPoint; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (v4 = this, (this = (BlankEarth_o *)mTerminalList->fields.mActionBgColl) == 0LL)
    || (this = (BlankEarth_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  EarthPoint = BlankEarth__GetEarthPoint(v4, spotId, v6);
  v4->fields.focusEarthPoint = EarthPoint;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.focusEarthPoint, (int32_t)EarthPoint, v8, v9);
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
  int32_t v3; // w3

  this->fields.ordealCallFolderInfo = folderInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.ordealCallFolderInfo,
    (int32_t)folderInfo,
    (int32_t)method,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetState(BlankEarth_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49F8F8E & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_BlankEarth__setState__, *(_QWORD *)&state);
    byte_49F8F8E = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(0LL);
  CStateManager_object___setState(mFSM, state, (const MethodInfo_30613F0 *)Method_CStateManager_BlankEarth__setState__);
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
  struct BlankEarthPoint_o **p_focusEarthPoint; // x20
  UnityEngine_Object_o *focusEarthPoint; // x21
  __int64 earthRoot; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  TerminalPramsManager_c *v9; // x0
  struct BlankEarthPoint_o *EarthPoint; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  float *v13; // x8
  float v14; // s8
  float v15; // s9
  float v16; // s11
  float v17; // s10
  UnityEngine_Transform_o *blankEarth; // x20
  float zoomInOffset; // s12
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s3
  float v24; // s18
  float v25; // s21
  float v26; // s7
  float v27; // s22
  float v28; // s24
  float v29; // s2
  float v30; // s4
  float v31; // s5
  float v32; // s0
  __int64 v33; // x1
  UnityEngine_Transform_o *v34; // x20
  const MethodInfo *v35; // x2
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F8FA4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    byte_49F8FA4 = 1;
  }
  p_focusEarthPoint = &this->fields.focusEarthPoint;
  focusEarthPoint = (UnityEngine_Object_o *)this->fields.focusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  earthRoot = UnityEngine_Object__op_Equality(focusEarthPoint, 0LL, 0LL);
  if ( (earthRoot & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F903B )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
      byte_49F903B = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    EarthPoint = BlankEarth__GetEarthPoint(this, v9->static_fields->_BlankEarthSpotId_k__BackingField, v8);
    this->fields.focusEarthPoint = EarthPoint;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.focusEarthPoint, (int32_t)EarthPoint, v11, v12);
  }
  v13 = (float *)*p_focusEarthPoint;
  if ( !*p_focusEarthPoint )
    goto LABEL_28;
  v15 = v13[62];
  v14 = v13[63];
  v16 = v13[64];
  v17 = v13[65];
  blankEarth = this->fields.blankEarth;
  zoomInOffset = this->fields.zoomInOffset;
  if ( !byte_49F7119 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v7);
    byte_49F7119 = 1;
  }
  *(UnityEngine_Quaternion_o *)&v20 = UnityEngine_Quaternion__AngleAxis(
                                        -zoomInOffset,
                                        UnityEngine_Vector3_TypeInfo->static_fields->upVector,
                                        0LL);
  if ( !blankEarth )
    goto LABEL_28;
  v24 = v17 * v22;
  v25 = v16 * v20;
  v26 = v16 * v22;
  v27 = v15 * v22;
  v28 = v14 * v22;
  v29 = (float)(v17 * v23) - (float)(v15 * v20);
  v30 = (float)(v14 * v20) + (float)((float)(v16 * v23) + v24);
  v31 = v27 + (float)((float)(v14 * v23) + (float)(v17 * v21));
  v32 = (float)(v16 * v21) + (float)((float)(v15 * v23) + (float)(v17 * v20));
  v37.fields.w = (float)(v29 - (float)(v14 * v21)) - v26;
  v37.fields.z = v30 - (float)(v15 * v21);
  v37.fields.y = v31 - v25;
  v37.fields.x = v32 - v28;
  UnityEngine_Transform__set_rotation(blankEarth, v37, 0LL);
  earthRoot = (__int64)this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_28;
  earthRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthRoot, 0LL);
  v34 = (UnityEngine_Transform_o *)earthRoot;
  if ( !byte_49F7117 )
  {
    earthRoot = sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v33);
    byte_49F7117 = 1;
  }
  if ( !v34 )
    goto LABEL_28;
  UnityEngine_Transform__set_rotation(v34, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  earthRoot = (__int64)this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_28;
  earthRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthRoot, 0LL);
  if ( !earthRoot )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)earthRoot, this->fields.zoomInPos, 0LL);
  earthRoot = (__int64)this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_28;
  earthRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthRoot, 0LL);
  if ( !earthRoot
    || (v36.fields.x = this->fields.zoomInScl,
        v36.fields.y = v36.fields.x,
        v36.fields.z = v36.fields.x,
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)earthRoot, v36, 0LL),
        (earthRoot = (__int64)this->fields.mTerminalList) == 0)
    || (ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)earthRoot, 0, 1, 0LL),
        (earthRoot = (__int64)this->fields.mTerminalList) == 0) )
  {
LABEL_28:
    sub_1B64324(earthRoot);
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
          sub_1B6432C(this, isDisp);
        v7 = presentBoxHideGameObjectList->m_Items[v5];
        if ( !v7 )
          sub_1B64324(0LL);
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

  if ( (byte_49F8F8C & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_BlankEarth__update__, method);
    byte_49F8F8C = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_30613CC *)Method_CStateManager_BlankEarth__update__);
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
  int32_t v17; // w3
  unsigned int LocalPosition; // s0
  UnityEngine_GameObject_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  BlankEarthTransform_o *v22; // x0
  const MethodInfo *v23; // x5
  TerminalPramsManager_c *v24; // x0
  ServantStatusBattleListViewItem_o *p_BlankEarthTransformData_k__BackingField; // x0
  float totalAng; // [xsp+3Ch] [xbp-74h]
  float w; // [xsp+40h] [xbp-70h]
  float earthRootRot; // [xsp+44h] [xbp-6Ch]
  float y; // [xsp+48h] [xbp-68h]
  float x; // [xsp+4Ch] [xbp-64h]
  UnityEngine_Vector3_o v32; // 0:x1.12
  UnityEngine_Vector3_o v33; // 0:x3.12
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v36; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_49F8FA7 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthTransform_TypeInfo, method);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    byte_49F8FA7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F903C )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F903C = 1;
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
    sub_1B64324(earthRoot);
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
  v22 = (BlankEarthTransform_o *)sub_1B64314(BlankEarthTransform_TypeInfo, v20, v21);
  v36.fields.y = y;
  v36.fields.x = x;
  v36.fields.z = earthRootRot;
  v35.fields.y = v11;
  v36.fields.w = w;
  v35.fields.z = v12;
  v35.fields.w = v13;
  *(_QWORD *)&v32.fields.x = 0LL;
  v35.fields.x = v10;
  v5 = v22;
  BlankEarthTransform___ctor(v22, v35, v36, v32, v33, totalAng, v23);
LABEL_19:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F903D )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
    byte_49F903D = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  p_BlankEarthTransformData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v24->static_fields->_BlankEarthTransformData_k__BackingField;
  p_BlankEarthTransformData_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v5;
  sub_1B6406C(p_BlankEarthTransformData_k__BackingField, (int32_t)v5, v16, v17);
  return v5;
}


void __fastcall BlankEarth__UpdateSpotDisp(BlankEarth_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *earthSpotRoot; // x0
  System_Object_array *ComponentsInChildren_object__48794364; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  BlankEarth___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_T__o *v12; // x19
  System_Action_object__o *_9__106_0; // x20
  Il2CppObject *v14; // x21
  struct BlankEarth___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49F8F9D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BlankEarthPoint__TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ForEach_BlankEarthPoint___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___, v4);
    sub_1B640C8(&Method_BlankEarth___c__UpdateSpotDisp_b__106_0__, v5);
    sub_1B640C8(&BlankEarth___c_TypeInfo, v6);
    byte_49F8F9D = 1;
  }
  earthSpotRoot = this->fields.earthSpotRoot;
  if ( !earthSpotRoot )
    sub_1B64324(0LL);
  ComponentsInChildren_object__48794364 = UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                            earthSpotRoot,
                                            (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  v11 = BlankEarth___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object__48794364;
  if ( !BlankEarth___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo);
    v11 = BlankEarth___c_TypeInfo;
  }
  _9__106_0 = (System_Action_object__o *)v11->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BlankEarth___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__106_0 = (System_Action_object__o *)sub_1B64314(System_Action_BlankEarthPoint__TypeInfo, v9, v10);
    System_Action_object____ctor(_9__106_0, v14, Method_BlankEarth___c__UpdateSpotDisp_b__106_0__, 0LL);
    static_fields = BlankEarth___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Action_BlankEarthPoint__o *)_9__106_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__106_0, (int32_t)_9__106_0, v16, v17);
  }
  BasicHelper__ForEach_object_(
    v12,
    (System_Action_T__o *)_9__106_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BlankEarthPoint___);
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
    sub_1B64324(blankEarth);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
  v11 = UnityEngine_Quaternion__Inverse(rotation, 0LL);
  x = v11.fields.x;
  y = v11.fields.y;
  z = v11.fields.z;
  w = v11.fields.w;
  if ( !byte_49F9038 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v4);
    byte_49F9038 = 1;
  }
  v12.fields.x = x;
  v12.fields.y = y;
  v12.fields.z = z;
  v12.fields.w = w;
  v9 = UnityEngine_Quaternion__op_Multiply_69066552(v12, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0LL);
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
  int32_t v3; // w3

  this->fields._SpotAnimStateManager_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._SpotAnimStateManager_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  ServantStatusBattleListViewItem_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  v11 = (ServantStatusBattleListViewItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11->fields.sortValue0 = (int64_t)finishCallback;
  v11 = (ServantStatusBattleListViewItem_o *)((char *)v11 + 32);
  *(float *)&v11[-1].fields.name = time;
  *((float *)&v11[-1].fields.name + 1) = x;
  *(float *)&v11[-1].fields.isMine = y;
  *((_DWORD *)&v11[-1].fields.isMine + 1) = easeType;
  sub_1B6406C(v11, (int32_t)finishCallback, v12, v13);
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
    sub_1B64324(0LL);
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
    sub_1B64324(this);
  }
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v5, 0LL);
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__StartRotate(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x20
  Il2CppClass *klass; // x8
  EasingObject_o *monitor; // x19
  float v6; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x22
  Il2CppClass *v11; // x8

  v3 = (Il2CppObject *)this;
  if ( (byte_49F8FB1 & 1) == 0 )
  {
    this = (BlankEarth_StateEarthAutoRotateBase_o *)sub_1B640C8(&System_Action_TypeInfo, method);
    byte_49F8FB1 = 1;
  }
  klass = v3[4].klass;
  if ( !klass
    || (monitor = (EasingObject_o *)v3[1].monitor,
        v6 = *(float *)&klass->_1.name,
        v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2),
        System_Action___ctor(v7, v3, (intptr_t)v3->klass->vtable[10].methodPtr, 0LL),
        v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9),
        System_Action___ctor(v10, v3, (intptr_t)v3->klass->vtable[11].methodPtr, 0LL),
        (v11 = v3[4].klass) == 0LL)
    || !monitor )
  {
    sub_1B64324(this);
  }
  EasingObject__Play(monitor, v6, v7, v10, 0.0, HIDWORD(v11->_1.namespaze), 0LL);
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__begin(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UnityEngine_Transform_o *blankEarth; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct BlankEarth_QAARotateEarthParam_o *qaaRotateEarthParam; // x1
  const MethodInfo *v10; // x1
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F8FB0 & 1) == 0 )
  {
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, that);
    byte_49F8FB0 = 1;
  }
  this->fields.That = that;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  if ( !that )
    goto LABEL_10;
  qaaRotateEarthParam = that->fields.qaaRotateEarthParam;
  this->fields.Param = qaaRotateEarthParam;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.Param, (int32_t)qaaRotateEarthParam, v7, v8);
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
                               v10);
        blankEarth = that->fields.blankEarth;
        if ( blankEarth )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarth, 0LL);
          Component_object = GameObjectExtensions__SafeGetComponent_object_(
                               gameObject,
                               (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
          this->fields.EasingObj = (struct EasingObject_o *)Component_object;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.EasingObj, (int32_t)Component_object, v14, v15);
          return;
        }
      }
    }
LABEL_10:
    sub_1B64324(blankEarth);
  }
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__end(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  EasingObject_o *EasingObj; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  struct EasingObject_o *v9; // x9
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  System_Action_T__o *FinishCallback_k__BackingField; // x19
  bool v12; // w22
  __int64 v13; // x20

  if ( (byte_49F8FB2 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___, that);
    sub_1B640C8(&BlankEarth_QAARotateEarthResponse_TypeInfo, v4);
    byte_49F8FB2 = 1;
  }
  EasingObj = this->fields.EasingObj;
  if ( !EasingObj
    || (EasingObject__Stop(EasingObj, 0LL), (EasingObj = (EasingObject_o *)this->fields.That) == 0LL)
    || (BlankEarth__UpdateTotalAngle((BlankEarth_o *)EasingObj, v6), (v9 = this->fields.EasingObj) == 0LL) )
  {
    sub_1B64324(EasingObj);
  }
  Param = this->fields.Param;
  if ( Param )
  {
    FinishCallback_k__BackingField = (System_Action_T__o *)Param->fields._FinishCallback_k__BackingField;
    v12 = v9->fields.mNow < 1.0;
    v13 = sub_1B64314(BlankEarth_QAARotateEarthResponse_TypeInfo, v7, v8);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    *(_BYTE *)(v13 + 16) = v12;
    ActionExtensions__Call_object_(
      FinishCallback_k__BackingField,
      (Il2CppObject *)v13,
      (const MethodInfo_2D90A78 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  __int64 v9; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  struct BlankEarth_o *v13; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

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
  if ( !byte_49F7118 )
  {
    this = (BlankEarth_StateShortcutRotate_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v9);
    byte_49F7118 = 1;
  }
  if ( !v8
    || (v15.fields.y = y,
        v15.fields.x = x,
        v15.fields.z = z,
        UnityEngine_Transform__RotateAround(
          (UnityEngine_Transform_o *)v8,
          v15,
          UnityEngine_Vector3_TypeInfo->static_fields->rightVector,
          mNow * v4->fields.rotAmountX,
          0LL),
        (v13 = v4->fields.That) == 0LL)
    || (this = (BlankEarth_StateShortcutRotate_o *)v13->fields.blankEarth) == 0LL )
  {
LABEL_16:
    sub_1B64324(this);
  }
  v16.fields.x = 0.0;
  v16.fields.y = mNow * v4->fields.rotAmountY;
  v16.fields.z = 0.0;
  UnityEngine_Transform__Rotate_69150388((UnityEngine_Transform_o *)this, v16, 0LL);
}


void __fastcall BlankEarth_StateShortcutRotate__StartRotate(
        BlankEarth_StateShortcutRotate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EasingObject_o *EasingObj; // x19
  float rotateTime; // s8
  System_Action_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x22
  __int64 v10; // x0
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8

  if ( (byte_49F8FB3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    byte_49F8FB3 = 1;
  }
  EasingObj = this->fields.EasingObj;
  rotateTime = this->fields.rotateTime;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)this->klass->vtable._10_OnRotateCompleted.methodPtr, 0LL);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_update.methodPtr, 0LL);
  Param = this->fields.Param;
  if ( !Param || !EasingObj )
    sub_1B64324(v10);
  EasingObject__Play(EasingObj, rotateTime, v6, v9, 0.0, Param->fields._EaseType_k__BackingField, 0LL);
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
  if ( !byte_49F9038 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v5);
    byte_49F9038 = 1;
  }
  v33.fields.x = x;
  v33.fields.y = y;
  v33.fields.z = z;
  v33.fields.w = w;
  v30 = UnityEngine_Quaternion__op_Multiply_69066552(v33, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0LL);
  v10 = *(long double *)&v30.fields.x;
  v11 = v30.fields.y;
  v12 = *(long double *)&v30.fields.z;
  v34 = UnityEngine_Quaternion__Inverse(this->fields.QuaTo, 0LL);
  v14 = v34.fields.x;
  v15 = v34.fields.y;
  v16 = v34.fields.z;
  v17 = v34.fields.w;
  if ( !byte_49F9038 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
    byte_49F9038 = 1;
  }
  v35.fields.x = v14;
  v35.fields.y = v15;
  v35.fields.z = v16;
  v35.fields.w = v17;
  v31 = UnityEngine_Quaternion__op_Multiply_69066552(v35, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0LL);
  v19 = *(long double *)&v31.fields.x;
  v20 = v31.fields.y;
  v21 = *(long double *)&v31.fields.z;
  if ( !byte_49F85C3 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v18);
    byte_49F85C3 = 1;
  }
  this->fields.rotAmountY = sub_1FB0B20(0LL, v10, 0.0, v12, v19, 0.0, v21);
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
    if ( !byte_49F710F )
    {
      sub_1B640C8(&System_Math_TypeInfo, v24);
      byte_49F710F = 1;
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
      sub_1B64324(EasingObj);
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
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x8
  int v21; // w9
  int v22; // s0
  float v23; // s8
  TerminalSceneComponent_c *v24; // x0
  const MethodInfo *v25; // x1
  __int64 v26; // x8
  UnityEngine_Transform_o *v27; // x22
  BlankEarth_c *v28; // x0
  float *p_x; // x8
  int v30; // s0
  TerminalSceneComponent_c *v34; // x0
  __int64 v35; // x1
  UnityEngine_Transform_o *v36; // x22
  int v37; // s0
  _QWORD *v41; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x8
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x1
  __int64 v49; // x8
  EasingObject_o *v50; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  System_Action_o *v53; // x23
  __int64 v54; // x1
  __int64 v55; // x2
  System_Action_o *v56; // x24
  __int64 v57; // x8
  __int64 v58; // x8
  __int64 v59; // x1
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x8
  __int64 v63; // x8
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8FAA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&BlankEarth_TypeInfo, v5);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_1B640C8(&Method_BlankEarth_StateStartup_begin__, v7);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v8);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v9);
    sub_1B640C8(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, v10);
    sub_1B640C8(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, v11);
    sub_1B640C8(&BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo, v12);
    byte_49F8FAA = 1;
  }
  v13 = sub_1B64314(BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_58;
  *(_QWORD *)(v13 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 32) = that;
  v17 = v13 + 32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)that, v18, v19);
  *(_QWORD *)&this->fields.inertialSpeedX = 0LL;
  v20 = *(_QWORD *)(v13 + 32);
  if ( !v20 )
    goto LABEL_58;
  v21 = *(unsigned __int8 *)(v20 + 216);
  v22 = 0;
  *(_DWORD *)(v20 + 220) = 0;
  if ( v21 && !*(_BYTE *)(v20 + 217) )
    v22 = *(_DWORD *)(v20 + 144);
  v23 = *(float *)(v20 + 116);
  *(_DWORD *)(v13 + 68) = v22;
  *(_DWORD *)(v20 + 304) = *(_DWORD *)(v20 + 120);
  v24 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v24 = TerminalSceneComponent_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v24->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0LL);
  v26 = *(_QWORD *)(v13 + 32);
  *(_BYTE *)(v13 + 65) = (_DWORD)Int == 1;
  if ( !v26 )
    goto LABEL_58;
  if ( (_DWORD)Int == 1 )
  {
    v23 = *(float *)(v26 + 136);
    *(_DWORD *)(v26 + 304) = *(_DWORD *)(v26 + 140);
    v27 = *(UnityEngine_Transform_o **)(v26 + 32);
    v28 = BlankEarth_TypeInfo;
    if ( !BlankEarth_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
      v28 = BlankEarth_TypeInfo;
    }
    p_x = &v28->static_fields->SOUTH_POLE_ROTATE.fields.x;
    v64.fields.x = *p_x * 0.017453;
    v64.fields.y = p_x[1] * 0.017453;
    v64.fields.z = p_x[2] * 0.017453;
    *(UnityEngine_Quaternion_o *)&v30 = UnityEngine_Quaternion__Internal_FromEulerRad(v64, 0LL);
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
    if ( !*(_QWORD *)v17 )
      goto LABEL_58;
    *(float *)(*(_QWORD *)v17 + 220LL) = -*(float *)(*(_QWORD *)v17 + 84LL);
  }
  else
  {
    v36 = *(UnityEngine_Transform_o **)(v26 + 32);
    *(UnityEngine_Quaternion_o *)&v37 = BlankEarth__LoadEarthRotate((BlankEarth_o *)v26, v25);
    if ( !v36 )
      goto LABEL_58;
    UnityEngine_Transform__set_rotation(v36, *(UnityEngine_Quaternion_o *)&v37, 0LL);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F903E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v35);
    byte_49F903E = 1;
  }
  Int = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Int = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(Int + 184) + 92LL) )
  {
    v41 = Method_BlankEarth_StateStartup_begin__;
    if ( (*((_BYTE *)Method_BlankEarth_StateStartup_begin__ + 83) & 2) != 0 )
      v41 = (_QWORD *)sub_1B640E0(Method_BlankEarth_StateStartup_begin__);
    Int = sub_1B640AC(v41, v41[4]);
    if ( *(_QWORD *)v17 )
    {
      Int = (__int64)OverwriteAssetSoundName__PlaySe(
                       (System_Reflection_MethodBase_o *)Int,
                       *(System_String_o **)(*(_QWORD *)v17 + 128LL),
                       0LL);
      goto LABEL_32;
    }
LABEL_58:
    sub_1B64324(Int);
  }
LABEL_32:
  if ( !*(_QWORD *)v17 )
    goto LABEL_58;
  Int = *(_QWORD *)(*(_QWORD *)v17 + 32LL);
  if ( !Int )
    goto LABEL_58;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Int, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)Component_object, v44, v45);
  v46 = *(_QWORD *)(v13 + 32);
  if ( !v46 )
    goto LABEL_58;
  Int = *(_QWORD *)(v46 + 40);
  if ( !Int )
    goto LABEL_58;
  v47 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Int, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v47, 0LL);
  v49 = *(_QWORD *)(v13 + 32);
  *(UnityEngine_Vector3_o *)(v13 + 52) = LocalScale;
  if ( !v49 )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)(v13 + 40) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)Int, v48);
  *(_BYTE *)(v13 + 64) = 0;
  v50 = *(EasingObject_o **)(v13 + 16);
  v53 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v51, v52);
  System_Action___ctor(v53, (Il2CppObject *)v13, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, 0LL);
  v56 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v54, v55);
  System_Action___ctor(v56, (Il2CppObject *)v13, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, 0LL);
  v57 = *(_QWORD *)(v13 + 32);
  if ( !v57 )
    goto LABEL_58;
  if ( !v50 )
    goto LABEL_58;
  EasingObject__Play_46292372(v50, 1.0, 0.0, v23, v53, v56, 0.0, *(_DWORD *)(v57 + 188), 0LL);
  if ( !*(_QWORD *)v17 )
    goto LABEL_58;
  Int = *(_QWORD *)(*(_QWORD *)v17 + 232LL);
  if ( !Int )
    goto LABEL_58;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)Int, 0, 1, 0LL);
  v58 = *(_QWORD *)v17;
  if ( !*(_QWORD *)v17 )
    goto LABEL_58;
  Int = *(_QWORD *)(v58 + 232);
  if ( !Int )
    goto LABEL_58;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)Int, *(float *)(v58 + 172), 0, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v59);
    byte_49F76BD = 1;
  }
  Int = (__int64)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v60 = **(_QWORD **)(Int + 184);
  if ( !v60 )
    goto LABEL_58;
  v61 = *(_QWORD *)(v60 + 256);
  if ( !v61 )
    goto LABEL_58;
  *(_BYTE *)(v61 + 410) = 1;
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v59);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
    byte_49F76BD = 1;
  }
  if ( !*(_DWORD *)(Int + 224) )
  {
    j_il2cpp_runtime_class_init_0(Int);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v62 = **(_QWORD **)(Int + 184);
  if ( !v62 )
    goto LABEL_58;
  v63 = *(_QWORD *)(v62 + 256);
  if ( !v63 )
    goto LABEL_58;
  *(_BYTE *)(v63 + 411) = 1;
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
  ServantStatusBattleListViewItem_o *p_scalingEndCallback; // x19
  int32_t v8; // w2
  int32_t v9; // w3

  if ( !that )
    sub_1B64324(this);
  BlankEarth__BlunkEarthMainOperation(that, that, &this->fields.inertialSpeedX, &this->fields.inertialSpeedY, v3);
  scalingEndCallback = that->fields.scalingEndCallback;
  if ( scalingEndCallback )
  {
    if ( this->fields.scaleRate < 0.0001 )
    {
      p_scalingEndCallback = (ServantStatusBattleListViewItem_o *)&that->fields.scalingEndCallback;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))scalingEndCallback->fields.m_target)(
        scalingEndCallback->fields.original_method_info,
        *(_QWORD *)&scalingEndCallback->fields.extra_arg);
      p_scalingEndCallback->klass = 0LL;
      sub_1B6406C(p_scalingEndCallback, 0, v8, v9);
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
  if ( (byte_49F8FAB & 1) == 0 )
  {
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_1B640C8(
                                                               &Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__,
                                                               method);
    byte_49F8FAB = 1;
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
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !this )
LABEL_27:
    sub_1B64324(this);
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
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  void *monitor; // x8
  int32_t v9; // w2
  int32_t v10; // w3
  struct BlankEarth_o *v11; // x8
  float wait_time; // s8
  System_Action_o *v13; // x21
  struct BlankEarth_o *v14; // x8

  v2 = this;
  if ( (byte_49F8FAC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_1B640C8(&Method_BlankEarth_SetMainState__, v3);
    byte_49F8FAC = 1;
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
  v7 = (Il2CppObject *)v2->fields.that;
  if ( !v7 )
    goto LABEL_13;
  monitor = v7[18].monitor;
  if ( monitor )
  {
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)(*((__int64 (__fastcall **)(_QWORD, _QWORD))monitor + 3))(
                                                               *((_QWORD *)monitor + 8),
                                                               *((_QWORD *)monitor + 5));
    v11 = v2->fields.that;
    if ( !v11 )
      goto LABEL_13;
    v11->fields.scalingEndCallback = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->fields.scalingEndCallback, 0, v9, v10);
    v7 = (Il2CppObject *)v2->fields.that;
  }
  wait_time = v2->fields.wait_time;
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v5, v6);
  System_Action___ctor(v13, v7, Method_BlankEarth_SetMainState__, 0LL);
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)BasicHelper__DelayCall(wait_time, v13, 0LL);
  if ( !v7
    || (this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                                                                   (UnityEngine_MonoBehaviour_o *)v7,
                                                                   (System_Collections_IEnumerator_o *)this,
                                                                   0LL),
        (v14 = v2->fields.that) == 0LL) )
  {
LABEL_13:
    sub_1B64324(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 updated; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x1
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  int32_t v24; // w22
  TerminalPramsManager_c *v25; // x0
  __int64 v26; // x8
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  __int64 v29; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  __int64 v35; // x8
  float v36; // s8
  __int64 v37; // x1
  float v38; // s0
  float v39; // s1
  float v40; // s2
  float v41; // s3
  __int64 v42; // x8
  float *v43; // x9
  float v44; // s4
  float v45; // s7
  float v46; // s5
  float v47; // s6
  __int64 v48; // x10
  __int64 v49; // x10
  __int64 v50; // x10
  int v51; // s0
  UnityEngine_Object_o *v52; // x22
  __int64 v53; // x1
  const MethodInfo *v54; // x2
  int32_t v55; // w3
  BlankEarth_o *v56; // x21
  struct BlankEarthPoint_o *focusEarthPoint; // x1
  ServantStatusBattleListViewItem_o *v58; // x21
  BlankEarthPoint_o *EarthPoint; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  ServantStatusBattleListViewItem_c *klass; // x8
  int methods; // s1
  EasingObject_o *v64; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  float mSpdTime; // s8
  System_Action_o *v68; // x19
  __int64 v69; // x1
  __int64 v70; // x2
  System_Action_o *v71; // x22
  __int64 v72; // x8

  if ( (byte_49F8FAD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v8);
    sub_1B640C8(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__, v9);
    sub_1B640C8(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__, v10);
    sub_1B640C8(&BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo, v11);
    byte_49F8FAD = 1;
  }
  v12 = sub_1B64314(BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_72;
  *(_QWORD *)(v12 + 24) = that;
  v16 = (__int64 *)(v12 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)that, v14, v15);
  if ( !*(_QWORD *)(v12 + 24) )
    goto LABEL_72;
  updated = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 232LL);
  if ( !updated )
    goto LABEL_72;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)updated, 0, 0, 0LL);
  v17 = *v16;
  if ( !*v16 )
    goto LABEL_72;
  updated = *(_QWORD *)(v17 + 232);
  if ( !updated )
    goto LABEL_72;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)updated, *(float *)(v17 + 172), 0, 0, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v18);
    byte_49F76BD = 1;
  }
  updated = (__int64)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    updated = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v19 = **(_QWORD **)(updated + 184);
  if ( !v19 )
    goto LABEL_72;
  v20 = *(_QWORD *)(v19 + 256);
  if ( !v20 )
    goto LABEL_72;
  *(_BYTE *)(v20 + 410) = 1;
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v18);
    updated = (__int64)TerminalSceneComponent_TypeInfo;
    byte_49F76BD = 1;
  }
  if ( !*(_DWORD *)(updated + 224) )
  {
    j_il2cpp_runtime_class_init_0(updated);
    updated = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v21 = **(_QWORD **)(updated + 184);
  if ( !v21 )
    goto LABEL_72;
  v22 = *(_QWORD *)(v21 + 256);
  if ( !v22 )
    goto LABEL_72;
  *(_BYTE *)(v22 + 411) = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F903B )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v18);
    byte_49F903B = 1;
  }
  updated = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    updated = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(updated + 184) + 508LL) )
  {
    if ( *v16 )
    {
      v23 = *(_QWORD *)(*v16 + 200);
      if ( v23 )
      {
        v24 = *(_DWORD *)(v23 + 268);
        if ( !*(_DWORD *)(updated + 224) )
          j_il2cpp_runtime_class_init_0(updated);
        if ( !byte_49F903F )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v18);
          byte_49F903F = 1;
        }
        v25 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v25 = TerminalPramsManager_TypeInfo;
        }
        v25->static_fields->_BlankEarthSpotId_k__BackingField = v24;
        TerminalPramsManager__BlankEarthSpotId_SaveData(0LL);
        if ( *v16 )
        {
          this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume(*(float *)(*v16 + 92), 0LL);
          v26 = *v16;
          if ( *v16 )
          {
            updated = *(_QWORD *)(v26 + 232);
            if ( updated )
            {
              ScrTerminalListTop__cbfBlankEarthQuestCreate(
                (ScrTerminalListTop_o *)updated,
                *(BlankEarthPoint_o **)(v26 + 200),
                0LL);
              updated = *v16;
              if ( *v16 )
              {
                BlankEarth__SaveEarthRotate((BlankEarth_o *)updated, v27);
                updated = *v16;
                if ( *v16 )
                {
                  updated = (__int64)BlankEarth__UpdateBlankEarthTransformData((BlankEarth_o *)updated, v28);
                  if ( *v16 )
                  {
                    v29 = updated;
                    updated = *(_QWORD *)(*v16 + 32);
                    if ( updated )
                    {
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)updated, 0LL);
                      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                                           gameObject,
                                           (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
                      *(_QWORD *)(v12 + 16) = Component_object;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)Component_object, v32, v33);
                      if ( v29 )
                      {
                        v35 = *(_QWORD *)(v12 + 24);
                        *(_OWORD *)(v12 + 32) = *(_OWORD *)(v29 + 16);
                        if ( v35 )
                        {
                          v36 = *(float *)(v35 + 88);
                          if ( !byte_49F7119 )
                          {
                            sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v34);
                            byte_49F7119 = 1;
                          }
                          *(UnityEngine_Quaternion_o *)&v38 = UnityEngine_Quaternion__AngleAxis(
                                                                -v36,
                                                                UnityEngine_Vector3_TypeInfo->static_fields->upVector,
                                                                0LL);
                          v42 = *v16;
                          if ( *v16 )
                          {
                            v43 = *(float **)(v42 + 200);
                            if ( v43 )
                            {
                              v44 = v43[62];
                              v45 = v43[63];
                              v46 = v43[65];
                              v47 = v43[64];
                              *(float *)(v12 + 48) = (float)((float)(v39 * v47)
                                                           + (float)((float)(v41 * v44) + (float)(v38 * v46)))
                                                   - (float)(v40 * v45);
                              *(float *)(v12 + 52) = (float)((float)(v40 * v44)
                                                           + (float)((float)(v41 * v45) + (float)(v39 * v46)))
                                                   - (float)(v38 * v47);
                              *(float *)(v12 + 56) = (float)((float)(v38 * v45)
                                                           + (float)((float)(v41 * v47) + (float)(v40 * v46)))
                                                   - (float)(v39 * v44);
                              *(float *)(v12 + 60) = (float)((float)((float)(v41 * v46) - (float)(v38 * v44))
                                                           - (float)(v39 * v45))
                                                   - (float)(v40 * v47);
                              *(_OWORD *)(v12 + 64) = *(_OWORD *)(v29 + 32);
                              if ( !byte_49F7117 )
                              {
                                updated = sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v37);
                                byte_49F7117 = 1;
                                v42 = *v16;
                              }
                              *(struct UnityEngine_Quaternion_StaticFields *)(v12 + 80) = *UnityEngine_Quaternion_TypeInfo->static_fields;
                              v48 = *(_QWORD *)(v29 + 48);
                              *(_DWORD *)(v12 + 104) = *(_DWORD *)(v29 + 56);
                              *(_QWORD *)(v12 + 96) = v48;
                              if ( v42 )
                              {
                                v49 = *(_QWORD *)(v42 + 148);
                                *(_DWORD *)(v12 + 116) = *(_DWORD *)(v42 + 156);
                                *(_QWORD *)(v12 + 108) = v49;
                                v50 = *(_QWORD *)(v29 + 60);
                                *(_DWORD *)(v12 + 128) = *(_DWORD *)(v29 + 68);
                                *(_QWORD *)(v12 + 120) = v50;
                                v51 = *(_DWORD *)(v42 + 100);
                                *(_BYTE *)(v12 + 176) = 0;
                                *(_DWORD *)(v12 + 132) = v51;
                                *(_DWORD *)(v12 + 136) = v51;
                                *(_DWORD *)(v12 + 140) = v51;
                                v52 = *(UnityEngine_Object_o **)(v42 + 200);
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                updated = UnityEngine_Object__op_Inequality(v52, 0LL, 0LL);
                                v56 = (BlankEarth_o *)*v16;
                                if ( (updated & 1) != 0 )
                                {
                                  if ( !v56 )
                                    goto LABEL_72;
                                  focusEarthPoint = v56->fields.focusEarthPoint;
                                  *(_QWORD *)(v12 + 144) = focusEarthPoint;
                                  v58 = (ServantStatusBattleListViewItem_o *)(v12 + 144);
                                }
                                else
                                {
                                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                  if ( !byte_49F903B )
                                  {
                                    sub_1B640C8(&TerminalPramsManager_TypeInfo, v53);
                                    byte_49F903B = 1;
                                  }
                                  updated = (__int64)TerminalPramsManager_TypeInfo;
                                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                    updated = (__int64)TerminalPramsManager_TypeInfo;
                                  }
                                  if ( !v56 )
                                    goto LABEL_72;
                                  EarthPoint = BlankEarth__GetEarthPoint(
                                                 v56,
                                                 *(_DWORD *)(*(_QWORD *)(updated + 184) + 508LL),
                                                 v54);
                                  LODWORD(focusEarthPoint) = (_DWORD)EarthPoint;
                                  *(_QWORD *)(v12 + 144) = EarthPoint;
                                  v58 = (ServantStatusBattleListViewItem_o *)(v12 + 144);
                                }
                                sub_1B6406C(v58, (int32_t)focusEarthPoint, (int32_t)v54, v55);
                                klass = v58->klass;
                                if ( v58->klass )
                                {
                                  methods = (int)klass->_1.methods;
                                  *(_QWORD *)(v12 + 152) = klass->_1.properties;
                                  *(_DWORD *)(v12 + 160) = methods;
                                  if ( !byte_49F7111 )
                                  {
                                    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v60);
                                    byte_49F7111 = 1;
                                  }
                                  v64 = *(EasingObject_o **)(v12 + 16);
                                  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                                  z = static_fields->zeroVector.fields.z;
                                  *(_QWORD *)(v12 + 164) = *(_QWORD *)&static_fields->zeroVector.fields.x;
                                  *(float *)(v12 + 172) = z;
                                  mSpdTime = this->fields.mSpdTime;
                                  v68 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v60, v61);
                                  System_Action___ctor(
                                    v68,
                                    (Il2CppObject *)v12,
                                    Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__,
                                    0LL);
                                  v71 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v69, v70);
                                  System_Action___ctor(
                                    v71,
                                    (Il2CppObject *)v12,
                                    Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__,
                                    0LL);
                                  v72 = *(_QWORD *)(v12 + 24);
                                  if ( v72 )
                                  {
                                    if ( v64 )
                                    {
                                      EasingObject__Play(v64, mSpdTime, v68, v71, 0.0, *(_DWORD *)(v72 + 180), 0LL);
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
LABEL_72:
    sub_1B64324(updated);
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
  float mNow; // s9
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
  struct BlankEarth_o *v57; // x8

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_28;
  mNow = eo->fields.mNow;
  v4 = this;
  v5 = mNow;
  v6 = StepFunc__AccSig(mNow, 0LL);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_28;
  blankEarth = that->fields.blankEarth;
  v9 = v6;
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Slerp(v4->fields.qua_from, v4->fields.qua_to, v9, 0LL);
  if ( !blankEarth )
    goto LABEL_28;
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v10, 0LL);
  v14 = v4->fields.that;
  if ( !v14 )
    goto LABEL_28;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v14->fields.earthRoot;
  if ( !this )
    goto LABEL_28;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__Slerp(
                                        v4->fields.root_qua_from,
                                        v4->fields.root_qua_to,
                                        v9,
                                        0LL);
  if ( !transform )
    goto LABEL_28;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v16, 0LL);
  v20 = v4->fields.that;
  if ( !v20 )
    goto LABEL_28;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v20->fields.earthRoot;
  if ( !this )
    goto LABEL_28;
  v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v22.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_from.fields.x;
  z = v4->fields.root_pos_from.fields.z;
  v24.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_pos_to.fields.x;
  v25 = v4->fields.root_pos_to.fields.z;
  v26 = v21;
  v27 = StepFunc__DecSin(v5, 0LL);
  v28 = fminf(v27, 1.0);
  v29 = v27 < 0.0;
  v30 = 0.0;
  if ( !v29 )
    v30 = v28;
  if ( !v26 )
    goto LABEL_28;
  v31 = (float)(v25 - z) * v30;
  v32 = vadd_f32(v22, vmul_n_f32(vsub_f32(v24, v22), v30)).n64_u64[0];
  v33 = z + v31;
  v34 = HIDWORD(v32);
  UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v32, 0LL);
  v35 = v4->fields.that;
  if ( !v35 )
    goto LABEL_28;
  this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v35->fields.earthRoot;
  if ( !this )
    goto LABEL_28;
  v36 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v37.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_from.fields.x;
  v38 = v4->fields.root_scl_from.fields.z;
  v39.n64_u64[0] = *(unsigned __int64 *)&v4->fields.root_scl_to.fields.x;
  v40 = v4->fields.root_scl_to.fields.z;
  v41 = v36;
  v42 = StepFunc__Acc5(v5, 0LL);
  v43 = fminf(v42, 1.0);
  v44 = v42 < 0.0 ? 0.0 : v43;
  if ( !v41 )
    goto LABEL_28;
  v45 = (float)(v40 - v38) * v44;
  v46 = vadd_f32(v37, vmul_n_f32(vsub_f32(v39, v37), v44)).n64_u64[0];
  v47 = v38 + v45;
  v48 = HIDWORD(v46);
  UnityEngine_Transform__set_localScale(v41, *(UnityEngine_Vector3_o *)&v46, 0LL);
  focusEarthPoint = v4->fields.focusEarthPoint;
  v50.n64_u64[0] = *(unsigned __int64 *)&v4->fields.spot_ui_root_qua_from.fields.x;
  v51 = v4->fields.spot_ui_root_qua_from.fields.z;
  v52.n64_u64[0] = *(unsigned __int64 *)&v4->fields.spot_ui_root_qua_to.fields.x;
  v53 = v4->fields.spot_ui_root_qua_to.fields.z;
  v54 = StepFunc__Acc5(v5, 0LL);
  v55 = fminf(v54, 1.0);
  v56 = v54 < 0.0 ? 0.0 : v55;
  if ( !focusEarthPoint )
    goto LABEL_28;
  *(float32x2_t *)&focusEarthPoint->fields.changedUiRootPosition.fields.x = vadd_f32(
                                                                              v50,
                                                                              vmul_n_f32(vsub_f32(v52, v50), v56));
  focusEarthPoint->fields.changedUiRootPosition.fields.z = v51 + (float)((float)(v53 - v51) * v56);
  if ( !v4->fields.isStartSlideIn )
  {
    v57 = v4->fields.that;
    if ( !v57 )
      goto LABEL_28;
    if ( mNow > v57->fields.zoomInFrameInBoardRate )
    {
      v4->fields.isStartSlideIn = 1;
      this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)v57->fields.mTerminalList;
      if ( this )
      {
        ScrTerminalListTop__CallBlankEarthSpotCreateFinishEvent(
          (ScrTerminalListTop_o *)this,
          v57->fields.focusEarthPoint,
          0LL);
        return;
      }
LABEL_28:
      sub_1B64324(this);
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
    sub_1B64324(this);
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
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 blankEarth; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  BlankEarth_o **v14; // x20
  float IntpTime_AutoResume; // s0
  float v16; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  TerminalPramsManager_c *v29; // x0
  struct BlankEarthTransform_o *BlankEarthTransformData_k__BackingField; // x1
  __int64 v31; // x1
  __int64 v32; // x8
  __int64 v33; // x10
  int v34; // w9
  __int64 v35; // x8
  float zoomInOffset; // s9
  float v37; // s0
  float v38; // s1
  float v39; // s2
  float v40; // s3
  float v41; // s11
  float v42; // s10
  float v43; // s9
  float v44; // s12
  const MethodInfo *v45; // x1
  BlankEarth_o *v46; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  UnityEngine_Object_o *focusEarthPoint; // x21
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  int32_t v52; // w3
  BlankEarth_o *v53; // x20
  BlankEarthPoint_o *EarthPoint; // x1
  __int64 v55; // x1
  __int64 v56; // x2
  struct UnityEngine_Vector3_StaticFields *v57; // x9
  __int64 v58; // x8
  float v59; // s1
  __int64 v60; // d0
  int v61; // s1
  EasingObject_o *v62; // x20
  System_Action_o *v63; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  System_Action_o *v66; // x22
  __int64 v67; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F8FAE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    sub_1B640C8(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, v7);
    sub_1B640C8(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, v8);
    sub_1B640C8(&BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo, v9);
    byte_49F8FAE = 1;
  }
  v10 = sub_1B64314(BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_53;
  *(_QWORD *)(v10 + 24) = that;
  v14 = (BlankEarth_o **)(v10 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)that, v12, v13);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ResetBlankEarthSpotInfo(0LL);
  if ( !*v14 )
    goto LABEL_53;
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume((*v14)->fields.zoomOutSpdTime, 0LL);
  if ( !*v14 )
    goto LABEL_53;
  blankEarth = (__int64)(*v14)->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_53;
  v16 = IntpTime_AutoResume;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarth, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v10 + 16) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)Component_object, v19, v20);
  v21 = *(_QWORD *)(v10 + 24);
  if ( !v21 )
    goto LABEL_53;
  blankEarth = *(_QWORD *)(v21 + 32);
  if ( !blankEarth )
    goto LABEL_53;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
  v22 = *(_QWORD *)(v10 + 24);
  *(UnityEngine_Quaternion_o *)(v10 + 48) = rotation;
  if ( !v22 )
    goto LABEL_53;
  blankEarth = *(_QWORD *)(v22 + 40);
  if ( !blankEarth )
    goto LABEL_53;
  blankEarth = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)blankEarth, 0LL);
  if ( !blankEarth )
    goto LABEL_53;
  v70 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
  v23 = *(_QWORD *)(v10 + 24);
  *(UnityEngine_Quaternion_o *)(v10 + 80) = v70;
  if ( !v23 )
    goto LABEL_53;
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v23 + 40), 0LL);
  v24 = *(_QWORD *)(v10 + 24);
  *(UnityEngine_Vector3_o *)(v10 + 108) = LocalPosition;
  if ( !v24 )
    goto LABEL_53;
  blankEarth = *(_QWORD *)(v24 + 40);
  if ( !blankEarth )
    goto LABEL_53;
  v25 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)blankEarth, 0LL);
  *(UnityEngine_Vector3_o *)(v10 + 132) = GameObjectExtensions__GetLocalScale(v25, 0LL);
  if ( !byte_49F903C )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v26);
    byte_49F903C = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  BlankEarthTransformData_k__BackingField = v29->static_fields->_BlankEarthTransformData_k__BackingField;
  *(_QWORD *)(v10 + 184) = BlankEarthTransformData_k__BackingField;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)(v10 + 184),
    (int32_t)BlankEarthTransformData_k__BackingField,
    v27,
    v28);
  v32 = *(_QWORD *)(v10 + 184);
  if ( v32 )
  {
    *(_OWORD *)(v10 + 32) = *(_OWORD *)(v32 + 16);
    *(_OWORD *)(v10 + 64) = *(_OWORD *)(v32 + 32);
    v33 = *(_QWORD *)(v32 + 48);
    *(_DWORD *)(v10 + 104) = *(_DWORD *)(v32 + 56);
    *(_QWORD *)(v10 + 96) = v33;
    v34 = *(_DWORD *)(v32 + 68);
    v35 = *(_QWORD *)(v32 + 60);
    *(_DWORD *)(v10 + 128) = v34;
    *(_QWORD *)(v10 + 120) = v35;
  }
  else
  {
    if ( !*v14 )
      goto LABEL_53;
    zoomInOffset = (*v14)->fields.zoomInOffset;
    if ( !byte_49F7119 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v31);
      byte_49F7119 = 1;
    }
    *(UnityEngine_Quaternion_o *)&v37 = UnityEngine_Quaternion__AngleAxis(
                                          zoomInOffset,
                                          UnityEngine_Vector3_TypeInfo->static_fields->upVector,
                                          0LL);
    if ( !*v14 )
      goto LABEL_53;
    blankEarth = (__int64)(*v14)->fields.blankEarth;
    if ( !blankEarth )
      goto LABEL_53;
    v41 = v37;
    v42 = v38;
    v43 = v39;
    v44 = v40;
    v71 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
    v46 = *(BlankEarth_o **)(v10 + 24);
    *(_DWORD *)(v10 + 32) = 0;
    *(float *)(v10 + 36) = (float)((float)(v43 * v71.fields.x)
                                 + (float)((float)(v44 * v71.fields.y) + (float)(v42 * v71.fields.w)))
                         - (float)(v41 * v71.fields.z);
    *(float *)(v10 + 44) = (float)((float)((float)(v44 * v71.fields.w) - (float)(v41 * v71.fields.x))
                                 - (float)(v42 * v71.fields.y))
                         - (float)(v43 * v71.fields.z);
    *(_DWORD *)(v10 + 40) = 0;
    if ( !v46 )
      goto LABEL_53;
    *(struct UnityEngine_Quaternion_o *)(v10 + 64) = v46->fields.mRootQua;
    if ( !byte_49F7111 )
    {
      blankEarth = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v45);
      byte_49F7111 = 1;
      v46 = *v14;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)(v10 + 96) = *(_QWORD *)&static_fields->zeroVector.fields.x;
    *(float *)(v10 + 104) = z;
    if ( !v46 )
      goto LABEL_53;
    *(UnityEngine_Vector3_o *)(v10 + 120) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)blankEarth, v45);
  }
  if ( !*v14 )
    goto LABEL_53;
  focusEarthPoint = (UnityEngine_Object_o *)(*v14)->fields.focusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = UnityEngine_Object__op_Inequality(focusEarthPoint, 0LL, 0LL);
  v53 = *v14;
  if ( (blankEarth & 1) == 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F903B )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v50);
      byte_49F903B = 1;
    }
    blankEarth = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      blankEarth = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( v53 )
    {
      EarthPoint = BlankEarth__GetEarthPoint(v53, *(_DWORD *)(*(_QWORD *)(blankEarth + 184) + 508LL), v51);
      goto LABEL_47;
    }
LABEL_53:
    sub_1B64324(blankEarth);
  }
  if ( !v53 )
    goto LABEL_53;
  EarthPoint = v53->fields.focusEarthPoint;
LABEL_47:
  *(_QWORD *)(v10 + 144) = EarthPoint;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 144), (int32_t)EarthPoint, (int32_t)v51, v52);
  if ( !byte_49F7111 )
  {
    blankEarth = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v55);
    byte_49F7111 = 1;
  }
  v57 = UnityEngine_Vector3_TypeInfo->static_fields;
  v58 = *(_QWORD *)(v10 + 144);
  v59 = v57->zeroVector.fields.z;
  *(_QWORD *)(v10 + 164) = *(_QWORD *)&v57->zeroVector.fields.x;
  *(float *)(v10 + 172) = v59;
  if ( !v58 )
    goto LABEL_53;
  v60 = *(_QWORD *)(v58 + 144);
  v61 = *(_DWORD *)(v58 + 152);
  *(_BYTE *)(v10 + 176) = 0;
  *(_QWORD *)(v10 + 152) = v60;
  *(_DWORD *)(v10 + 160) = v61;
  v62 = *(EasingObject_o **)(v10 + 16);
  v63 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v55, v56);
  System_Action___ctor(v63, (Il2CppObject *)v10, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, 0LL);
  v66 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v64, v65);
  System_Action___ctor(v66, (Il2CppObject *)v10, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, 0LL);
  v67 = *(_QWORD *)(v10 + 24);
  if ( !v67 || !v62 )
    goto LABEL_53;
  EasingObject__Play_46292372(v62, 1.0, 0.0, v16, v63, v66, 0.0, *(_DWORD *)(v67 + 184), 0LL);
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
  struct BlankEarth_o *v57; // x8
  struct BlankEarth_o *v58; // x8

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_30;
  mNow = eo->fields.mNow;
  v4 = this;
  v5 = mNow;
  v6 = StepFunc__AccSig(mNow, 0LL);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_30;
  blankEarth = that->fields.blankEarth;
  v9 = v6;
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Slerp(v4->fields.qua_to, v4->fields.qua_from, v9, 0LL);
  if ( !blankEarth )
    goto LABEL_30;
  UnityEngine_Transform__set_rotation(blankEarth, *(UnityEngine_Quaternion_o *)&v10, 0LL);
  v14 = v4->fields.that;
  if ( !v14 )
    goto LABEL_30;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v14->fields.earthRoot;
  if ( !this )
    goto LABEL_30;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__Slerp(
                                        v4->fields.root_qua_to,
                                        v4->fields.root_qua_from,
                                        v9,
                                        0LL);
  if ( !transform )
    goto LABEL_30;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v16, 0LL);
  v20 = v4->fields.that;
  if ( !v20 )
    goto LABEL_30;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v20->fields.earthRoot;
  if ( !this )
    goto LABEL_30;
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
    goto LABEL_30;
  v31 = (float)(v25 - z) * v30;
  v32 = vadd_f32(v22, vmul_n_f32(vsub_f32(v24, v22), v30)).n64_u64[0];
  v33 = z + v31;
  v34 = HIDWORD(v32);
  UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v32, 0LL);
  v35 = v4->fields.that;
  if ( !v35 )
    goto LABEL_30;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v35->fields.earthRoot;
  if ( !this )
    goto LABEL_30;
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
    goto LABEL_30;
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
    goto LABEL_30;
  *(float32x2_t *)&focusEarthPoint->fields.changedUiRootPosition.fields.x = vadd_f32(
                                                                              v50,
                                                                              vmul_n_f32(vsub_f32(v52, v50), v56));
  focusEarthPoint->fields.changedUiRootPosition.fields.z = v51 + (float)((float)(v53 - v51) * v56);
  if ( !v4->fields.isStartRotateBtn )
  {
    v57 = v4->fields.that;
    if ( !v57 )
      goto LABEL_30;
    if ( mNow < v57->fields.zoomOutFrameInRotateBtnRate )
    {
      v4->fields.isStartRotateBtn = 1;
      this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v57->fields.mTerminalList;
      if ( this )
      {
        ScrTerminalListTop__FrameInOutBlankEarthRotateBtn(
          (ScrTerminalListTop_o *)this,
          v57->fields.earthBtnMoveSpeedTime,
          1,
          0,
          0LL);
        v58 = v4->fields.that;
        if ( v58 )
        {
          this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v58->fields.mTerminalList;
          if ( this )
          {
            ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)this, 1, 0, 0LL);
            return;
          }
        }
      }
LABEL_30:
      sub_1B64324(this);
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

  v2 = this;
  if ( (byte_49F8FAF & 1) == 0 )
  {
    this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)sub_1B640C8(&StringLiteral_19735/*"gevINFOBAR_BACK"*/, method);
    byte_49F8FAF = 1;
  }
  blankEarthTransform = v2->fields.blankEarthTransform;
  that = v2->fields.that;
  if ( blankEarthTransform )
  {
    totalAngle = blankEarthTransform->fields.totalAngle;
    if ( !that )
      goto LABEL_27;
  }
  else
  {
    totalAngle = 0.0;
    if ( !that )
      goto LABEL_27;
  }
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)that->fields.blankEarth;
  that->fields.totalAngle = totalAngle;
  if ( !this )
    goto LABEL_27;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v2->fields.qua_to, 0LL);
  v6 = v2->fields.that;
  if ( !v6 )
    goto LABEL_27;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v6->fields.earthRoot;
  if ( !this )
    goto LABEL_27;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_27;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, v2->fields.root_qua_to, 0LL);
  v7 = v2->fields.that;
  if ( !v7 )
    goto LABEL_27;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v7->fields.earthRoot;
  if ( !this )
    goto LABEL_27;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v2->fields.root_pos_to, 0LL);
  v8 = v2->fields.that;
  if ( !v8 )
    goto LABEL_27;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v8->fields.earthRoot;
  if ( !this )
    goto LABEL_27;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
  if ( !this )
    goto LABEL_27;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v2->fields.root_scl_to, 0LL);
  v9 = v2->fields.that;
  if ( !v9 )
    goto LABEL_27;
  mTerminalList = v9->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_27;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)mTerminalList->fields.mActionBgColl;
  if ( !this )
    goto LABEL_27;
  this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL), (v11 = v2->fields.that) == 0LL)
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v11->fields.mTerminalList) == 0LL
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)ScrTerminalListTop__mfGetMyFsmP(
                                                                   (ScrTerminalListTop_o *)this,
                                                                   0LL)) == 0LL
    || (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL)) == 0LL
    || (HutongGames_PlayMaker_Fsm__Event_63389632(
          (HutongGames_PlayMaker_Fsm_o *)this,
          (System_String_o *)StringLiteral_19735/*"gevINFOBAR_BACK"*/,
          0LL),
        (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v2->fields.that) == 0LL) )
  {
LABEL_27:
    sub_1B64324(this);
  }
  BlankEarth__SetState((BlankEarth_o *)this, 2, v12);
}


void __fastcall BlankEarth__CoCheckTutorial_d__89___ctor(
        BlankEarth__CoCheckTutorial_d__89_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarth__CoCheckTutorial_d__89__MoveNext(
        BlankEarth__CoCheckTutorial_d__89_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BlankEarth__CoCheckTutorial_d__89_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  BlankEarth_o *_4__this; // x20
  Il2CppObject *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Action_o *finishCallback; // x1
  float time_5__2; // s0
  float v17; // s8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  bool result; // w0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *_8__1; // x22
  System_Action_o *v28; // x23
  int32_t v29; // w2
  int32_t v30; // w3
  struct TutorialCommunicateAdapter_o *adapter; // x1
  int32_t v32; // w2
  int32_t v33; // w3

  v3 = this;
  if ( (byte_49F8FB6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1B640C8(&Method_BlankEarth___c__DisplayClass89_0__CoCheckTutorial_g__OnFinish_0__, v6);
    this = (BlankEarth__CoCheckTutorial_d__89_o *)sub_1B640C8(&BlankEarth___c__DisplayClass89_0_TypeInfo, v7);
    byte_49F8FB6 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    time_5__2 = v3->fields._time_5__2;
    v3->fields.__1__state = -1;
    if ( time_5__2 > 5.0 )
      goto LABEL_11;
    goto LABEL_8;
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v10 = (Il2CppObject *)sub_1B64314(BlankEarth___c__DisplayClass89_0_TypeInfo, method, v2);
    System_Object___ctor(v10, 0LL);
    v3->fields.__8__1 = (struct BlankEarth___c__DisplayClass89_0_o *)v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__8__1, (int32_t)v10, v11, v12);
    this = (BlankEarth__CoCheckTutorial_d__89_o *)v3->fields.__8__1;
    if ( !this )
      goto LABEL_16;
    finishCallback = v3->fields.finishCallback;
    *(_QWORD *)&this->fields.__1__state = finishCallback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)finishCallback, v13, v14);
    v3->fields._time_5__2 = 0.0;
LABEL_8:
    if ( !_4__this )
      goto LABEL_16;
    if ( BlankEarth__GetState(_4__this, method) == 1 )
    {
      v17 = v3->fields._time_5__2;
      v3->fields._time_5__2 = v17 + UnityEngine_Time__get_deltaTime(0LL);
      v3->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B6406C(p__2__current, 0, v19, v20);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
LABEL_11:
    this = (BlankEarth__CoCheckTutorial_d__89_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0LL);
      v24 = sub_1B64314(EventTutorialMaster_EventTutorialArgs_TypeInfo, v22, v23);
      EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v24, 0LL);
      if ( v24 )
      {
        *(_DWORD *)(v24 + 20) = 83;
        _8__1 = (Il2CppObject *)v3->fields.__8__1;
        v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
        System_Action___ctor(v28, _8__1, Method_BlankEarth___c__DisplayClass89_0__CoCheckTutorial_g__OnFinish_0__, 0LL);
        *(_QWORD *)(v24 + 24) = v28;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 24), (int32_t)v28, v29, v30);
        adapter = v3->fields.adapter;
        *(_QWORD *)(v24 + 48) = adapter;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 48), (int32_t)adapter, v32, v33);
        this = (BlankEarth__CoCheckTutorial_d__89_o *)EventTutorialMaster__CoroutineCheckTutorial(
                                                        (EventTutorialMaster_EventTutorialArgs_o *)v24,
                                                        0LL);
        if ( _4__this )
        {
          UnityEngine_MonoBehaviour__StartCoroutine_69113008(
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
    sub_1B64324(this);
  }
  return 0;
}


Il2CppObject *__fastcall BlankEarth__CoCheckTutorial_d__89__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarth__CoCheckTutorial_d__89_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarth__CoCheckTutorial_d__89__System_Collections_IEnumerator_Reset(
        BlankEarth__CoCheckTutorial_d__89_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BlankEarth__CoCheckTutorial_d__89_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BlankEarth__CoCheckTutorial_d__89__System_Collections_IEnumerator_get_Current(
        BlankEarth__CoCheckTutorial_d__89_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarth__CoCheckTutorial_d__89__System_IDisposable_Dispose(
        BlankEarth__CoCheckTutorial_d__89_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth__CoStandByChangeState_d__91___ctor(
        BlankEarth__CoStandByChangeState_d__91_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarth__CoStandByChangeState_d__91__MoveNext(
        BlankEarth__CoStandByChangeState_d__91_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BlankEarth_o *_4__this; // x0
  int32_t state; // w20
  float time_5__2; // s8
  Il2CppObject **p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3
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
    sub_1B64324(0LL);
  state = this->fields.state;
  if ( BlankEarth__GetState(_4__this, method) == state )
  {
    time_5__2 = this->fields._time_5__2;
    this->fields._time_5__2 = time_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v8, v9);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
  return 0;
}


Il2CppObject *__fastcall BlankEarth__CoStandByChangeState_d__91__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarth__CoStandByChangeState_d__91_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarth__CoStandByChangeState_d__91__System_Collections_IEnumerator_Reset(
        BlankEarth__CoStandByChangeState_d__91_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BlankEarth__CoStandByChangeState_d__91_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BlankEarth__CoStandByChangeState_d__91__System_Collections_IEnumerator_get_Current(
        BlankEarth__CoStandByChangeState_d__91_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarth__CoStandByChangeState_d__91__System_IDisposable_Dispose(
        BlankEarth__CoStandByChangeState_d__91_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8FB4 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarth___c_TypeInfo, v1);
    byte_49F8FB4 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BlankEarth___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BlankEarth___c_TypeInfo->static_fields->__9 = (struct BlankEarth___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BlankEarth___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall BlankEarth___c___ctor(BlankEarth___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarth___c___UpdateSpotDisp_b__106_0(
        BlankEarth___c_o *this,
        BlankEarthPoint_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  BlankEarthPoint__UpdateDisp(x, 1, method);
}


void __fastcall BlankEarth___c__DisplayClass89_0___ctor(
        BlankEarth___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarth___c__DisplayClass89_0___CoCheckTutorial_g__OnFinish_0(
        BlankEarth___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F8FB5 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49F8FB5 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}