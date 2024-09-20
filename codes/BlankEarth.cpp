void __fastcall BlankEarth___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct BlankEarth_StaticFields *static_fields; // x8
  int32_t v4; // w1
  struct BlankEarth_StaticFields *v5; // x0

  if ( (byte_4A57C80 & 1) == 0 )
  {
    sub_1B885B0(&BlankEarth_TypeInfo);
    sub_1B885B0(&StringLiteral_17340/*"blankEarthRotateKey"*/);
    byte_4A57C80 = 1;
  }
  static_fields = BlankEarth_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SOUTH_POLE_ROTATE.fields.x = 0x4292000041F80000LL;
  static_fields->SOUTH_POLE_ROTATE.fields.z = 60.0;
  v4 = StringLiteral_17340/*"blankEarthRotateKey"*/;
  v5 = BlankEarth_TypeInfo->static_fields;
  v5->BLANK_EARTH_ROTATE_KEY = (struct System_String_o *)StringLiteral_17340/*"blankEarthRotateKey"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->BLANK_EARTH_ROTATE_KEY, v4, v1, v2);
  *(_QWORD *)&BlankEarth_TypeInfo->static_fields->EARTH_DISP_SPOT_UI_SPRITE_DOT = 0x3E19999A3E99999ALL;
}


void __fastcall BlankEarth___ctor(BlankEarth_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A57C7F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16878/*"ar223"*/);
    byte_4A57C7F = 1;
  }
  *(_OWORD *)&this->fields.greenwichOffset = xmmword_BB5420;
  *(_OWORD *)&this->fields.zoomOutSpdTime = xmmword_BB5290;
  *(_OWORD *)&this->fields.earthRadius = xmmword_BB50E0;
  v5 = StringLiteral_16878/*"ar223"*/;
  this->fields.startupSeName = (struct System_String_o *)StringLiteral_16878/*"ar223"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.startupSeName, v5, v2, v3);
  *(_QWORD *)&this->fields.zoomInEasingType = 0x300000003LL;
  *(_OWORD *)&this->fields.firstAnimTime = xmmword_BB5620;
  this->fields.btnSpeedRate = 3.5;
  *(_OWORD *)&this->fields.zoomInPos.fields.y = xmmword_BB41A0;
  *(_QWORD *)&this->fields.adjustEarthScale.fields.z = 0x3E8000003F400000LL;
  this->fields.startupEasingType = 2;
  *(_QWORD *)&this->fields.object1DispSpotUISpriteDot = 0x3ECCCCCD3F266666LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarth__Awake(BlankEarth_o *this, const MethodInfo *method)
{
  struct CStateManager_BlankEarth__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
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
  Il2CppObject *v19; // x22
  CStateManager_T__o *v20; // x20
  Il2CppObject *v21; // x21
  const MethodInfo *v22; // x2
  BlankEarthSpotAnimStateManager_o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_4A57C5E & 1) == 0 )
  {
    sub_1B885B0(&BlankEarthSpotAnimStateManager_TypeInfo);
    sub_1B885B0(&Method_CStateManager_BlankEarth___ctor__);
    sub_1B885B0(&Method_CStateManager_BlankEarth__add__);
    sub_1B885B0(&CStateManager_BlankEarth__TypeInfo);
    sub_1B885B0(&BlankEarth_StateMain_TypeInfo);
    sub_1B885B0(&BlankEarth_StateNone_TypeInfo);
    sub_1B885B0(&BlankEarth_StateQAARotate_TypeInfo);
    sub_1B885B0(&BlankEarth_StateShortcutRotate_TypeInfo);
    sub_1B885B0(&BlankEarth_StateStartup_TypeInfo);
    sub_1B885B0(&BlankEarth_StateZoomIn_TypeInfo);
    sub_1B885B0(&BlankEarth_StateZoomOut_TypeInfo);
    byte_4A57C5E = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1B887FC(CStateManager_BlankEarth__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      7,
      (const MethodInfo_30AAD34 *)Method_CStateManager_BlankEarth___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarth__o *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1B887FC(BlankEarth_StateNone_TypeInfo);
    System_Object___ctor(v8, 0LL);
    if ( !mFSM )
      goto LABEL_15;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_30AADDC *)Method_CStateManager_BlankEarth__add__);
    v10 = (CStateManager_T__o *)*p_mFSM;
    v11 = (Il2CppObject *)sub_1B887FC(BlankEarth_StateStartup_TypeInfo);
    System_Object___ctor(v11, 0LL);
    if ( !v10 )
      goto LABEL_15;
    CStateManager_object___add(
      v10,
      1,
      (IState_T__o *)v11,
      (const MethodInfo_30AADDC *)Method_CStateManager_BlankEarth__add__);
    v12 = (CStateManager_T__o *)*p_mFSM;
    v13 = (Il2CppObject *)sub_1B887FC(BlankEarth_StateMain_TypeInfo);
    System_Object___ctor(v13, 0LL);
    if ( !v12 )
      goto LABEL_15;
    CStateManager_object___add(
      v12,
      2,
      (IState_T__o *)v13,
      (const MethodInfo_30AADDC *)Method_CStateManager_BlankEarth__add__);
    v14 = (CStateManager_T__o *)*p_mFSM;
    v15 = (Il2CppObject *)sub_1B887FC(BlankEarth_StateZoomIn_TypeInfo);
    System_Object___ctor(v15, 0LL);
    if ( !v14 )
      goto LABEL_15;
    CStateManager_object___add(
      v14,
      3,
      (IState_T__o *)v15,
      (const MethodInfo_30AADDC *)Method_CStateManager_BlankEarth__add__);
    v16 = (CStateManager_T__o *)*p_mFSM;
    v17 = (Il2CppObject *)sub_1B887FC(BlankEarth_StateZoomOut_TypeInfo);
    System_Object___ctor(v17, 0LL);
    if ( !v16 )
      goto LABEL_15;
    CStateManager_object___add(
      v16,
      4,
      (IState_T__o *)v17,
      (const MethodInfo_30AADDC *)Method_CStateManager_BlankEarth__add__);
    v18 = (CStateManager_T__o *)*p_mFSM;
    v19 = (Il2CppObject *)sub_1B887FC(BlankEarth_StateQAARotate_TypeInfo);
    System_Object___ctor(v19, 0LL);
    if ( !v18
      || (CStateManager_object___add(
            v18,
            5,
            (IState_T__o *)v19,
            (const MethodInfo_30AADDC *)Method_CStateManager_BlankEarth__add__),
          v20 = (CStateManager_T__o *)*p_mFSM,
          v21 = (Il2CppObject *)sub_1B887FC(BlankEarth_StateShortcutRotate_TypeInfo),
          System_Object___ctor(v21, 0LL),
          !v20) )
    {
LABEL_15:
      sub_1B8880C(earthRoot, method);
    }
    CStateManager_object___add(
      v20,
      6,
      (IState_T__o *)v21,
      (const MethodInfo_30AADDC *)Method_CStateManager_BlankEarth__add__);
    BlankEarth__SetState(this, 0, v22);
  }
  earthRoot = this->fields.earthRoot;
  if ( !earthRoot )
    goto LABEL_15;
  earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
  if ( !earthRoot )
    goto LABEL_15;
  this->fields.mRootQua = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)earthRoot, 0LL);
  v23 = (BlankEarthSpotAnimStateManager_o *)sub_1B887FC(BlankEarthSpotAnimStateManager_TypeInfo);
  BlankEarthSpotAnimStateManager___ctor(v23, 0LL);
  this->fields._SpotAnimStateManager_k__BackingField = v23;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._SpotAnimStateManager_k__BackingField,
    (int32_t)v23,
    v24,
    v25);
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
  if ( (byte_4A57C62 & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_1B885B0(&CTouch_TypeInfo);
    byte_4A57C62 = 1;
  }
  if ( !that )
LABEL_67:
    sub_1B8880C(this, that);
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
      if ( !byte_4A57CD9 )
      {
        sub_1B885B0(&CTouch_TypeInfo);
        byte_4A57CD9 = 1;
      }
      v11 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
      }
      x = v11->static_fields->mScrPosDelta.fields.x;
      if ( !byte_4A57CDA )
      {
        sub_1B885B0(&CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
        byte_4A57CDA = 1;
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
      if ( !byte_4A57CD9 )
      {
        sub_1B885B0(&CTouch_TypeInfo);
        byte_4A57CD9 = 1;
      }
      v15 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v15 = CTouch_TypeInfo;
      }
      y = v15->static_fields->mScrPosDelta.fields.y;
      if ( !byte_4A57CDA )
      {
        sub_1B885B0(&CTouch_TypeInfo);
        v15 = CTouch_TypeInfo;
        byte_4A57CDA = 1;
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
    if ( !byte_4A55CE5 )
    {
      sub_1B885B0(&UnityEngine_Mathf_TypeInfo);
      byte_4A55CE5 = 1;
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
  if ( !byte_4A55CE8 )
  {
    this = (BlankEarth_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE8 = 1;
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
  UnityEngine_Transform__Rotate_69482032((UnityEngine_Transform_o *)this, v40, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
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

  if ( (byte_4A57C63 & 1) == 0 )
  {
    sub_1B885B0(&BlankEarth__CoCheckTutorial_d__96_TypeInfo);
    byte_4A57C63 = 1;
  }
  v7 = sub_1B887FC(BlankEarth__CoCheckTutorial_d__96_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 56) = adapter;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 56), (int32_t)adapter, v10, v11);
  *(_QWORD *)(v7 + 32) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)finishCallback, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


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

  if ( (byte_4A57C64 & 1) == 0 )
  {
    sub_1B885B0(&BlankEarth__CoStandByChangeState_d__98_TypeInfo);
    byte_4A57C64 = 1;
  }
  v7 = sub_1B887FC(BlankEarth__CoStandByChangeState_d__98_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = state;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
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
  float v12; // s8
  float v13; // s12
  float v14; // s12
  float v15; // s9
  float v16; // s8
  float v17; // s2
  float x; // s0
  float y; // s1
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s3
  float cosx; // [xsp+8h] [xbp-48h] BYREF
  float sinx; // [xsp+Ch] [xbp-44h] BYREF
  float v28; // [xsp+18h] [xbp-38h] BYREF
  float v29; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
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
  sincosf(v8, &v29, &v28);
  v13 = v28;
  v12 = v29;
  if ( !byte_4A55CE4 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CE4 = 1;
  }
  v14 = v13 * v11;
  v15 = earthRadius * v10;
  v16 = v12 * v11;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v17 = sqrtf((float)(v16 * v16) + (float)((float)(v15 * v15) + (float)(v14 * v14)));
  if ( v17 <= 0.00001 )
  {
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v14 / v17;
    y = v15 / v17;
    z = v16 / v17;
  }
  v30.fields.x = -x;
  v30.fields.y = -y;
  v30.fields.z = -z;
  v31 = UnityEngine_Quaternion__LookRotation_69397740(v30, 0LL);
  *(UnityEngine_Quaternion_o *)&v22 = UnityEngine_Quaternion__Inverse(v31, 0LL);
  result.fields.w = v25;
  result.fields.z = v24;
  result.fields.y = v23;
  result.fields.x = v22;
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
  Il2CppObject *v13; // x21
  System_String_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x22
  System_String_o *v17; // x0
  UnityEngine_Transform_o *blankEarth; // x8
  UnityEngine_Transform_o *v19; // x20
  int v20; // s0
  const MethodInfo *v23; // x2

  if ( (byte_4A57C6C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3296/*"BlankEarthGimmick_"*/);
    byte_4A57C6C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__Instantiate_object_(
          (Il2CppObject *)obj,
          (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_33729948((UnityEngine_GameObject_o *)v13, this->fields.earthGimmickRoot, 0LL);
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  GameObjectExtensions__SetLocalScale(
    (UnityEngine_GameObject_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  if ( !v13 )
    goto LABEL_14;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0LL);
  if ( !gimmickEnt )
    goto LABEL_14;
  v16 = (UnityEngine_Object_o *)transform;
  v17 = System_Int32__ToString((int)gimmickEnt + 16, 0LL);
  transform = System_String__Concat_61707032((System_String_o *)StringLiteral_3296/*"BlankEarthGimmick_"*/, v17, 0LL);
  if ( !v16 )
    goto LABEL_14;
  UnityEngine_Object__set_name(v16, transform, 0LL);
  GameObjectExtensions__SetLocalPosition_33724224((UnityEngine_GameObject_o *)v13, x, y, z, 0LL);
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0LL);
  blankEarth = this->fields.blankEarth;
  if ( !blankEarth
    || (v19 = (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(blankEarth, 0LL),
        !v19)
    || (UnityEngine_Transform__LookAt_69483112(v19, *(UnityEngine_Vector3_o *)&v20, 0LL),
        (transform = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v13,
                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___)) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(transform, v15);
  }
  BlankEarthGimmickComponent__Setup((BlankEarthGimmickComponent_o *)transform, gimmickEnt, v23);
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
  TerminalSceneComponent_c *v13; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v15; // x1
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
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
  const MethodInfo *v33; // x5
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57C71 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_3297/*"BlankEarthPoint_"*/);
    byte_4A57C71 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mTerminalScene,
    (int32_t)v15,
    (int32_t)spotEnt,
    (int32_t)method);
  mTerminalScene = this->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_39;
  mTerminalList = mTerminalScene->fields.mTerminalList;
  this->fields.mTerminalList = mTerminalList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mTerminalList, (int32_t)mTerminalList, v18, v19);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   (Il2CppObject *)spotObj,
                                                   (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_39;
  v22 = Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
  v23 = (UnityEngine_Object_o *)Component_object;
  if ( !byte_4A55CE1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
    Component_object = this->fields.otherObjectRoot;
    if ( !Component_object )
      goto LABEL_39;
    v30 = UnityEngine_GameObject__GetComponent_object_(
            Component_object,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v30,
                                                     0LL,
                                                     0LL);
    klass = 0LL;
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_39;
      klass = (UnityEngine_GameObject_o *)v30[2].klass;
      if ( !klass )
        goto LABEL_39;
      Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)v30[2].klass,
                                                       0LL);
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
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)Component_object, 0LL);
      v26 = position.fields.x;
      v27 = position.fields.y;
      v28 = position.fields.z;
      goto LABEL_29;
    }
    klass = 0LL;
  }
LABEL_29:
  GameObjectExtensions__SetParent_33729948(v22, klass, 0LL);
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v22, 0LL);
  v32 = System_Int32__ToString((int)spotEnt + 16, 0LL);
  Component_object = (UnityEngine_GameObject_o *)System_String__Concat_61707032(
                                                   (System_String_o *)StringLiteral_3297/*"BlankEarthPoint_"*/,
                                                   v32,
                                                   0LL);
  if ( !transform )
    goto LABEL_39;
  UnityEngine_Object__set_name(transform, (System_String_o *)Component_object, 0LL);
  GameObjectExtensions__SetLocalPosition_33724224(v22, x, y, z, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v22, 0LL);
  if ( !Component_object )
    goto LABEL_39;
  v36.fields.x = v26;
  v36.fields.y = v27;
  v36.fields.z = v28;
  UnityEngine_Transform__LookAt_69483112((UnityEngine_Transform_o *)Component_object, v36, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( v23 )
    {
      BlankEarthPoint__SetEarthObj(
        (BlankEarthPoint_o *)v23,
        spotEnt,
        this,
        this->fields.mEarthCamera,
        this->fields.earthRoot,
        v33);
      return (BlankEarthPoint_o *)v23;
    }
LABEL_39:
    sub_1B8880C(Component_object, v17);
  }
  return (BlankEarthPoint_o *)v23;
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
    sub_1B88554(
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
      sub_1B8880C(0LL, v5);
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

  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
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
  BlankEarthGimmickComponent_o *result; // x0
  UnityEngine_Transform_o *transform; // x19
  System_String_o *v6; // x0
  UnityEngine_Object_o *v7; // x19
  bool v8; // w8
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = gimmickId;
  if ( (byte_4A57C68 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3296/*"BlankEarthGimmick_"*/);
    byte_4A57C68 = 1;
  }
  result = (BlankEarthGimmickComponent_o *)this->fields.earthGimmickRoot;
  if ( !result )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0LL);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  result = (BlankEarthGimmickComponent_o *)System_String__Concat_61707032(
                                             (System_String_o *)StringLiteral_3296/*"BlankEarthGimmick_"*/,
                                             v6,
                                             0LL);
  if ( !transform )
    goto LABEL_12;
  v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)result, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  result = 0LL;
  if ( v8 )
  {
    if ( v7 )
    {
      result = (BlankEarthGimmickComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
      if ( result )
        return (BlankEarthGimmickComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)result,
                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthGimmickComponent___);
    }
LABEL_12:
    sub_1B8880C(result, *(_QWORD *)&gimmickId);
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
  Il2CppObject *v6; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v5 = gimmick;
  if ( (byte_4A57C6B & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    gimmick = (BlankEarthGimmickEntity_o *)sub_1B885B0(&StringLiteral_5802/*"EarthGimmick_{0:00000}"*/);
    byte_4A57C6B = 1;
  }
  if ( !v5 )
    sub_1B8880C(gimmick, method);
  objectId = v5->fields.objectId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_5802/*"EarthGimmick_{0:00000}"*/, v6, 0LL);
}


System_String_o *__fastcall BlankEarth__GetObjPrefabName(BlankEarthSpotEntity_o *spot, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BlankEarthSpotEntity_o *v5; // x19
  Il2CppObject *v6; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v5 = spot;
  if ( (byte_4A57C70 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    spot = (BlankEarthSpotEntity_o *)sub_1B885B0(&StringLiteral_5804/*"EarthPoint_{0:00000}"*/);
    byte_4A57C70 = 1;
  }
  if ( !v5 )
    sub_1B8880C(spot, method);
  objectId = v5->fields.objectId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_5804/*"EarthPoint_{0:00000}"*/, v6, 0LL);
}


BlankEarthOtherObject_o *__fastcall BlankEarth__GetOtherObject(
        BlankEarth_o *this,
        int32_t objId,
        const MethodInfo *method)
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

  if ( (byte_4A57C67 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    sub_1B885B0(&StringLiteral_731/*"(Clone)"*/);
    byte_4A57C67 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             objId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
  if ( Entity )
  {
    earthRoot = this->fields.earthRoot;
    v9 = (int)Entity;
    BlankEarthOtherObjectFromScript = BlankEarthGimmickEntity__GetBlankEarthOtherObjectFromScript(
                                        (BlankEarthGimmickEntity_o *)Entity,
                                        0LL);
    v11 = System_Int32__ToString(v9 + 28, 0LL);
    v12 = System_String__Concat_61720296(
            BlankEarthOtherObjectFromScript,
            (System_String_o *)StringLiteral_16123/*"_"*/,
            v11,
            (System_String_o *)StringLiteral_731/*"(Clone)"*/,
            0LL);
    v13 = (UnityEngine_Object_o *)GameObjectExtensions__Find(earthRoot, v12, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( v13 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)v13,
                                                                        0LL);
        if ( Master_object )
          return (BlankEarthOtherObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)Master_object,
                                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      }
LABEL_14:
      sub_1B8880C(Master_object, v6);
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
  if ( (byte_4A57C66 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3297/*"BlankEarthPoint_"*/);
    byte_4A57C66 = 1;
  }
  otherObjectRoot = this->fields.otherObjectRoot;
  if ( otherObjectRoot )
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         otherObjectRoot,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
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
      v16 = System_Int32__ToString((int32_t)&v20, 0LL);
      result = (BlankEarthPoint_o *)System_String__Concat_61707032((System_String_o *)StringLiteral_3297/*"BlankEarthPoint_"*/, v16, 0LL);
      if ( !transform )
        goto LABEL_34;
      Component_object = UnityEngine_Transform__Find(transform, (System_String_o *)result, 0LL);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    result = 0LL;
    if ( v17 )
    {
      if ( !Component_object )
        goto LABEL_34;
      v18 = (UnityEngine_Component_o *)Component_object;
LABEL_31:
      result = (BlankEarthPoint_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
      if ( result )
        return (BlankEarthPoint_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)result,
                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthPoint___);
LABEL_34:
      sub_1B8880C(result, *(_QWORD *)&spotId);
    }
  }
  else
  {
    if ( onPointType )
      return 0LL;
    earthSpotRoot = this->fields.earthSpotRoot;
    v9 = System_Int32__ToString((int32_t)&v20, 0LL);
    v10 = System_String__Concat_61707032((System_String_o *)StringLiteral_3297/*"BlankEarthPoint_"*/, v9, 0LL);
    v11 = (UnityEngine_Object_o *)GameObjectExtensions__Find(earthSpotRoot, v10, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      if ( Component_object )
      {
        result = (BlankEarthPoint_o *)*((_QWORD *)Component_object + 4);
        if ( !result )
          goto LABEL_34;
        v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)result, 0LL);
        v14 = System_Int32__ToString((int32_t)&v20, 0LL);
        result = (BlankEarthPoint_o *)System_String__Concat_61707032((System_String_o *)StringLiteral_3297/*"BlankEarthPoint_"*/, v14, 0LL);
        if ( !v13 )
          goto LABEL_34;
        v11 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v13, (System_String_o *)result, 0LL);
      }
      else
      {
        v11 = 0LL;
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
    result = 0LL;
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
  Il2CppObject *v6; // x0
  int32_t objectId; // [xsp+Ch] [xbp-14h] BYREF

  v5 = spot;
  if ( (byte_4A57C6F & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    spot = (BlankEarthSpotEntity_o *)sub_1B885B0(&StringLiteral_5804/*"EarthPoint_{0:00000}"*/);
    byte_4A57C6F = 1;
  }
  if ( !v5 )
    sub_1B8880C(spot, method);
  objectId = v5->fields.objectId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &objectId, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_5804/*"EarthPoint_{0:00000}"*/, v6, 0LL);
}


int32_t __fastcall BlankEarth__GetState(BlankEarth_o *this, const MethodInfo *method)
{
  BlankEarth_o *v2; // x19
  struct CStateManager_BlankEarth__o *mFSM; // x8

  v2 = this;
  if ( (byte_4A57C60 & 1) == 0 )
  {
    this = (BlankEarth_o *)sub_1B885B0(&Method_CStateManager_BlankEarth__getState__);
    byte_4A57C60 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(this, method);
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
  System_String_o *String_69417656; // x0
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

  if ( (byte_4A57C65 & 1) == 0 )
  {
    sub_1B885B0(&BlankEarth_TypeInfo);
    byte_4A57C65 = 1;
  }
  v3 = BlankEarth_TypeInfo;
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v3 = BlankEarth_TypeInfo;
  }
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656(v3->static_fields->BLANK_EARTH_ROTATE_KEY, 0LL);
  if ( !String_69417656 )
    goto LABEL_17;
  v6 = String_69417656;
  v7 = System_String__Split(String_69417656, 0x2Cu, 0, 0LL);
  String_69417656 = (System_String_o *)System_String__IsNullOrEmpty(v6, 0LL);
  if ( ((unsigned __int8)String_69417656 & 1) != 0 )
    goto LABEL_13;
  if ( !v7 )
LABEL_17:
    sub_1B8880C(String_69417656, v5);
  if ( v7->max_length == 4 )
  {
    this->fields.totalAngle = System_Single__Parse(v7->m_Items[3], 0LL);
    if ( !v7->max_length
      || (v10 = System_Single__Parse(v7->m_Items[0], 0LL), v7->max_length <= 1)
      || (v11 = v10, v12 = System_Single__Parse(v7->m_Items[1], 0LL), v7->max_length <= 2) )
    {
      sub_1B88814(v8, v9);
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


void __fastcall BlankEarth__OnPressRotateBtnX(BlankEarth_o *this, bool isLeft, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4A57C7C & 1) == 0 )
  {
    sub_1B885B0(&Method_BlankEarth_OnPressRotateBtnX__);
    byte_4A57C7C = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnX__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnX__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_BlankEarth_OnPressRotateBtnX__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  this->fields.isLeft = isLeft;
  this->fields.isBtnTouchX = 1;
}


void __fastcall BlankEarth__OnPressRotateBtnY(BlankEarth_o *this, bool isUp, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4A57C7D & 1) == 0 )
  {
    sub_1B885B0(&Method_BlankEarth_OnPressRotateBtnY__);
    byte_4A57C7D = 1;
  }
  v5 = Method_BlankEarth_OnPressRotateBtnY__;
  if ( (*((_BYTE *)Method_BlankEarth_OnPressRotateBtnY__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_BlankEarth_OnPressRotateBtnY__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
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
void __fastcall BlankEarth__PlayOtherObjectUniqueAnim(
        BlankEarth_o *this,
        BlankEarthGimmickEntity_o *otherObjEnt,
        int32_t animIndex,
        bool isQuick,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4A57C7A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57C7A = 1;
  }
  if ( otherObjEnt )
    otherObjEnt = (BlankEarthGimmickEntity_o *)BlankEarth__GetOtherObject(
                                                 this,
                                                 otherObjEnt->fields.id,
                                                 *(const MethodInfo **)&animIndex);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)otherObjEnt, 0LL, 0LL);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !otherObjEnt )
      sub_1B8880C(v11, v12);
    BlankEarthOtherObject__PlayOtherObjUniqueAnim(
      (BlankEarthOtherObject_o *)otherObjEnt,
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

  if ( (byte_4A57C79 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57C79 = 1;
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
      sub_1B8880C(v12, v13);
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
  BlankEarthGimmickEntity_array *Master_object; // x0
  BlankEarthGimmickEntity_o *v4; // x1
  const MethodInfo *v5; // x2
  int max_length; // w8
  BlankEarthGimmickEntity_array *v7; // x20
  unsigned int v8; // w21

  if ( (byte_4A57C69 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A57C69 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BlankEarthGimmickEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = BlankEarthGimmickMaster__GetAllGimmick((BlankEarthGimmickMaster_o *)Master_object, 0LL);
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
        sub_1B88814(Master_object, v4);
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
    sub_1B8880C(Master_object, v4);
  }
}


void __fastcall BlankEarth__PutAllSpots(BlankEarth_o *this, int32_t beforeClearQuestId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *All; // x20
  System_Func_object__object__o *v7; // x21
  System_Collections_Generic_IEnumerable_T__o *v8; // x0
  System_Collections_Generic_IEnumerable_T__o *v9; // x0

  if ( (byte_4A57C6D & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
    sub_1B885B0(&Method_BlankEarth_PutSpot__);
    sub_1B885B0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
    sub_1B885B0(&System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo);
    byte_4A57C6D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v5);
  All = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotMaster__GetAll(
                                                               (BlankEarthSpotMaster_o *)Master_object,
                                                               0LL);
  v7 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BlankEarthSpotEntity__BlankEarthPoint__TypeInfo);
  System_Func_object__object____ctor(v7, (Il2CppObject *)this, Method_BlankEarth_PutSpot__, 0LL);
  v8 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                        All,
                                                        (System_Func_TSource__TResult__o *)v7,
                                                        (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_BlankEarthSpotEntity__BlankEarthPoint___);
  v9 = BasicHelper__ExcludeNull_object_(
         v8,
         (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_BlankEarthPoint___);
  System_Linq_Enumerable__ToArray_object_(
    (System_Collections_Generic_IEnumerable_TSource__o *)v9,
    (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BlankEarthPoint___);
}


void __fastcall BlankEarth__PutGimmick(
        BlankEarth_o *this,
        BlankEarthGimmickEntity_o *gimmick,
        const MethodInfo *method)
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
  AssetData_o *Asset_37814472; // x21
  Il2CppObject *Object_object__48635516; // x21
  const MethodInfo *v16; // x3
  float v17; // [xsp+8h] [xbp-68h] BYREF
  float v18; // [xsp+Ch] [xbp-64h] BYREF
  float cosx; // [xsp+48h] [xbp-28h] BYREF
  float sinx; // [xsp+4Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4A57C6A & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&BlankEarth_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ScrTerminalListTop_TypeInfo);
    this = (BlankEarth_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4A57C6A = 1;
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
  this = (BlankEarth_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v12 = (AssetManager_o *)this;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v12 )
    goto LABEL_15;
  Asset_37814472 = AssetManager__GetAsset_37814472(
                     v12,
                     ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH,
                     0LL);
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
  this = (BlankEarth_o *)BlankEarth__GetGimmickPrefabName(gimmick, v13);
  if ( !Asset_37814472 )
LABEL_15:
    sub_1B8880C(this, gimmick);
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              Asset_37814472,
                              (System_String_o *)this,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
    BlankEarth__CreateGimmick(
      v4,
      (UnityEngine_GameObject_o *)Object_object__48635516,
      gimmick,
      v11 * (float)(v8 * (float)(z + earthRadius)),
      v7 * earthRadius,
      v10 * (float)(v8 * (float)(z + earthRadius)),
      v16);
}


BlankEarthPoint_o *__fastcall BlankEarth__PutSpot(
        BlankEarth_o *this,
        BlankEarthSpotEntity_o *spot,
        const MethodInfo *method)
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
  Il2CppObject *Object_object__48635516; // x21
  const MethodInfo *v27; // x3
  float v29; // [xsp+8h] [xbp-68h] BYREF
  float v30; // [xsp+Ch] [xbp-64h] BYREF
  float cosx; // [xsp+18h] [xbp-58h] BYREF
  float sinx; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57C6E & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&BlankEarth_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ScrTerminalListTop_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4A57C6E = 1;
  }
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v11 = (AssetManager_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v11 )
    goto LABEL_31;
  Instance = (UnityEngine_GameObject_o *)AssetManager__GetAsset_37814472(
                                           v11,
                                           ScrTerminalListTop_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH,
                                           0LL);
  if ( !spot )
    goto LABEL_31;
  onObjectType = spot->fields.onObjectType;
  v13 = (AssetData_o *)Instance;
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
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      if ( Instance )
      {
        v24 = Instance;
        LODWORD(x) = (unsigned int)GameObjectExtensions__GetLocalPosition(
                                     (UnityEngine_GameObject_o *)Instance[1].monitor,
                                     0LL);
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v24[1].monitor, 0LL);
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
    sub_1B8880C(Instance, v10);
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
      Object_object__48635516 = AssetData__GetObject_object__48635516(
                                  v13,
                                  v22,
                                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
      goto LABEL_26;
    }
    goto LABEL_31;
  }
  Object_object__48635516 = 0LL;
LABEL_26:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
    return 0LL;
  return BlankEarth__CreateSpot(this, (UnityEngine_GameObject_o *)Object_object__48635516, spot, x, y, z, v27);
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
  const MethodInfo *v13; // x4

  if ( (byte_4A57C77 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57C77 = 1;
  }
  if ( spot )
    spot = (BlankEarthSpotEntity_o *)BlankEarth__GetPoint(this, spot->fields.id, 0, (const MethodInfo *)isQuick);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)spot, 0LL, 0LL);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !spot )
      sub_1B8880C(v11, v12);
    BlankEarthPoint__RevealOrConcealSpotAnim((BlankEarthPoint_o *)spot, dispType, isQuick, finishCallback, v13);
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
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4A57C78 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57C78 = 1;
  }
  if ( otherObjEnt )
    otherObjEnt = (BlankEarthGimmickEntity_o *)BlankEarth__GetOtherObject(
                                                 this,
                                                 otherObjEnt->fields.id,
                                                 *(const MethodInfo **)&dispType);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)otherObjEnt, 0LL, 0LL);
  if ( v11 )
  {
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    if ( !otherObjEnt )
      sub_1B8880C(v11, v12);
    BlankEarthOtherObject__RevealOrConcealOtherObjAnim(
      (BlankEarthOtherObject_o *)otherObjEnt,
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
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x2
  int32_t v24; // w1

  y = latLongVector.fields.y;
  x = latLongVector.fields.x;
  if ( (byte_4A57C76 & 1) == 0 )
  {
    sub_1B885B0(&BlankEarth_QAARotateEarthParam_TypeInfo);
    byte_4A57C76 = 1;
  }
  v16 = sub_1B887FC(BlankEarth_QAARotateEarthParam_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  *(float *)(v16 + 16) = time;
  *(float *)(v16 + 20) = x;
  *(float *)(v16 + 24) = y;
  *(_DWORD *)(v16 + 28) = easeType;
  *(_QWORD *)(v16 + 32) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)finishCallback, v17, v18);
  this->fields.qaaRotateEarthParam = (struct BlankEarth_QAARotateEarthParam_o *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.qaaRotateEarthParam, v16, v19, v20);
  this->fields.rotateEarthTimeCalculateParam = rotateTimeCalculateParam;
  sub_1B88554(
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


void __fastcall BlankEarth__RotateEarthTowardsGimmick(
        BlankEarth_o *this,
        BlankEarthGimmickEntity_o *blankEarthGimmickEntity,
        float time,
        int32_t easeType,
        bool isShortcut,
        System_Action_BlankEarth_QAARotateEarthResponse__o *finishCallback,
        const MethodInfo *method)
{
  __int64 v13; // x20

  if ( (byte_4A57C75 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_1B885B0(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_4A57C75 = 1;
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
    v13 = sub_1B887FC(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    *(_BYTE *)(v13 + 16) = 1;
    ActionExtensions__Call_object_(
      (System_Action_T__o *)finishCallback,
      (Il2CppObject *)v13,
      (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
  __int64 v15; // x20

  if ( (byte_4A57C74 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_1B885B0(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_4A57C74 = 1;
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
    v15 = sub_1B887FC(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    *(_BYTE *)(v15 + 16) = 1;
    ActionExtensions__Call_object_(
      (System_Action_T__o *)finishCallback,
      (Il2CppObject *)v15,
      (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
    sub_1B8880C(0LL, method);
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
  BlankEarth_c *v8; // x0
  System_String_o *BLANK_EARTH_ROTATE_KEY; // x19
  __int64 v10; // x20
  float v11; // s0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  float v19; // s0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  float v25; // s0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  float v31; // s0
  int32_t v32; // w2
  int32_t v33; // w3
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
  if ( (byte_4A57C73 & 1) == 0 )
  {
    sub_1B885B0(&BlankEarth_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A57C73 = 1;
  }
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v38.fields.w = w;
  v36 = UnityEngine_Quaternion__Internal_ToEulerRad(v38, 0LL);
  v36.fields.x = v36.fields.x * 57.296;
  v36.fields.y = v36.fields.y * 57.296;
  v36.fields.z = v36.fields.z * 57.296;
  Positive = UnityEngine_Quaternion__Internal_MakePositive(v36, 0LL);
  v8 = BlankEarth_TypeInfo;
  v35.methodPointer = *(Il2CppMethodPointer *)&Positive.fields.x;
  *(float *)&v35.virtualMethodPointer = Positive.fields.z;
  if ( !BlankEarth_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth_TypeInfo);
    v8 = BlankEarth_TypeInfo;
  }
  BLANK_EARTH_ROTATE_KEY = v8->static_fields->BLANK_EARTH_ROTATE_KEY;
  v10 = sub_1B88658(string___TypeInfo, 7LL);
  v12 = System_Single__ToString(v11, &v35);
  if ( !v10 )
    sub_1B8880C(v12, v13);
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_14;
  *(_QWORD *)(v10 + 32) = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)v12, v14, v15);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_14;
  v18 = (int)StringLiteral_868/*","*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_868/*","*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 40), v18, v16, v17);
  v12 = System_Single__ToString(v19, (const MethodInfo *)((char *)&v35.methodPointer + 4));
  if ( *(_DWORD *)(v10 + 24) <= 2u )
    goto LABEL_14;
  *(_QWORD *)(v10 + 48) = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 48), (int32_t)v12, v20, v21);
  if ( *(_DWORD *)(v10 + 24) <= 3u )
    goto LABEL_14;
  v24 = (int)StringLiteral_868/*","*/;
  *(_QWORD *)(v10 + 56) = StringLiteral_868/*","*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 56), v24, v22, v23);
  v12 = System_Single__ToString(v25, (const MethodInfo *)&v35.virtualMethodPointer);
  if ( *(_DWORD *)(v10 + 24) <= 4u
    || (*(_QWORD *)(v10 + 64) = v12,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 64), (int32_t)v12, v26, v27),
        *(_DWORD *)(v10 + 24) <= 5u)
    || (v30 = (int)StringLiteral_868/*","*/,
        *(_QWORD *)(v10 + 72) = StringLiteral_868/*","*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 72), v30, v28, v29),
        v12 = System_Single__ToString(v31, (const MethodInfo *)((char *)&v35.methodMetadataHandle + 4)),
        *(_DWORD *)(v10 + 24) <= 6u) )
  {
LABEL_14:
    sub_1B88814(v12, v13);
  }
  *(_QWORD *)(v10 + 80) = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 80), (int32_t)v12, v32, v33);
  v34 = System_String__Concat_61720560((System_String_array *)v10, 0LL);
  UnityEngine_PlayerPrefs__SetString(BLANK_EARTH_ROTATE_KEY, v34, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetEarthRotate(BlankEarth_o *this, UnityEngine_Quaternion_o qua, const MethodInfo *method)
{
  UnityEngine_Transform_o *blankEarth; // x0

  blankEarth = this->fields.blankEarth;
  if ( !blankEarth )
    sub_1B8880C(0LL, method);
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
  int32_t v11; // w3

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (v5 = this, (this = (BlankEarth_o *)mTerminalList->fields.mActionBgColl) == 0LL)
    || (this = (BlankEarth_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_1B8880C(this, *(_QWORD *)&spotId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  Point = BlankEarth__GetPoint(v5, spotId, onPointType, v8);
  v5->fields.focusEarthPoint = Point;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.focusEarthPoint, (int32_t)Point, v10, v11);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.ordealCallFolderInfo,
    (int32_t)folderInfo,
    (int32_t)method,
    v3);
}


void __fastcall BlankEarth__SetOtherObjectRoot(
        BlankEarth_o *this,
        System_String_o *objName,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  this->fields.otherObjectRoot = root;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.otherObjectRoot,
    (int32_t)root,
    (int32_t)root,
    (int32_t)method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth__SetState(BlankEarth_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A57C61 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_BlankEarth__setState__);
    byte_4A57C61 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(mFSM, state, (const MethodInfo_30AAE68 *)Method_CStateManager_BlankEarth__setState__);
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
  UnityEngine_Object_o *focusEarthPoint; // x21
  __int64 earthSpotRoot; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  TerminalPramsManager_c *v7; // x0
  struct BlankEarthPoint_o *Point; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct BlankEarthPoint_o *v11; // x8
  int32_t spotOnType_k__BackingField; // w9
  float x; // s9
  float y; // s10
  float z; // s11
  float zoomInScl; // s8
  float v17; // s10
  float v18; // s13
  float v19; // s12
  float v20; // s15
  float w; // s14
  UnityEngine_Transform_o *blankEarth; // x20
  float zoomInOffset; // s9
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float v27; // s3
  float v28; // s18
  float v29; // s21
  float v30; // s7
  float v31; // s22
  float v32; // s24
  float v33; // s2
  float v34; // s4
  float v35; // s5
  float v36; // s0
  UnityEngine_Object_o *otherObjectRoot; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v39; // x2
  int v40; // w8
  int v41; // w9
  __int64 v42; // x10
  UnityEngine_Transform_o *v43; // x20
  const MethodInfo *v44; // x2
  float v45; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A57C7B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57C7B = 1;
  }
  focusEarthPoint = (UnityEngine_Object_o *)this->fields.focusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  earthSpotRoot = UnityEngine_Object__op_Equality(focusEarthPoint, 0LL, 0LL);
  if ( (earthSpotRoot & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57CDB )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57CDB = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    Point = BlankEarth__GetPoint(this, v7->static_fields->_BlankEarthSpotId_k__BackingField, 0, v6);
    this->fields.focusEarthPoint = Point;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.focusEarthPoint, (int32_t)Point, v9, v10);
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
    if ( !UnityEngine_Object__op_Equality(otherObjectRoot, 0LL, 0LL) )
    {
      earthSpotRoot = (__int64)this->fields.otherObjectRoot;
      if ( !earthSpotRoot )
        goto LABEL_49;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)earthSpotRoot,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
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
          v39);
      }
      earthSpotRoot = (__int64)this->fields.earthSpotRoot;
      if ( earthSpotRoot )
      {
        earthSpotRoot = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                   (UnityEngine_GameObject_o *)earthSpotRoot,
                                   (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
        if ( earthSpotRoot )
        {
          v40 = *(_DWORD *)(earthSpotRoot + 24);
          if ( v40 < 1 )
            goto LABEL_38;
          v41 = 0;
          while ( 1 )
          {
            if ( v40 == v41 )
              sub_1B88814(earthSpotRoot, v5);
            v42 = *(_QWORD *)(earthSpotRoot + 8LL * v41 + 32);
            if ( !v42 )
              break;
            ++v41;
            *(_QWORD *)(v42 + 104) = *(_QWORD *)&this->fields.object1DispSpotUISpriteDot;
            if ( v40 == v41 )
              goto LABEL_38;
          }
        }
      }
      goto LABEL_49;
    }
  }
  else if ( !spotOnType_k__BackingField )
  {
    v45 = this->fields.zoomInPos.fields.y;
    v17 = this->fields.zoomInPos.fields.x;
    v18 = v11->fields._FocusQua_k__BackingField.fields.x;
    v19 = v11->fields._FocusQua_k__BackingField.fields.y;
    v20 = v11->fields._FocusQua_k__BackingField.fields.z;
    w = v11->fields._FocusQua_k__BackingField.fields.w;
    blankEarth = this->fields.blankEarth;
    zoomInOffset = this->fields.zoomInOffset;
    if ( !byte_4A55CE9 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE9 = 1;
    }
    *(UnityEngine_Quaternion_o *)&v24 = UnityEngine_Quaternion__AngleAxis(
                                          -zoomInOffset,
                                          UnityEngine_Vector3_TypeInfo->static_fields->upVector,
                                          0LL);
    if ( blankEarth )
    {
      v28 = w * v26;
      v29 = v20 * v24;
      v30 = v20 * v26;
      v31 = v18 * v26;
      v32 = v19 * v26;
      v33 = (float)(w * v27) - (float)(v18 * v24);
      v34 = (float)(v19 * v24) + (float)((float)(v20 * v27) + v28);
      v35 = v31 + (float)((float)(v19 * v27) + (float)(w * v25));
      v36 = (float)(v20 * v25) + (float)((float)(v18 * v27) + (float)(w * v24));
      v49.fields.w = (float)(v33 - (float)(v19 * v25)) - v30;
      v49.fields.z = v34 - (float)(v18 * v25);
      v49.fields.y = v35 - v29;
      v49.fields.x = v36 - v32;
      UnityEngine_Transform__set_rotation(blankEarth, v49, 0LL);
      x = v17;
      y = v45;
      goto LABEL_38;
    }
LABEL_49:
    sub_1B8880C(earthSpotRoot, v5);
  }
LABEL_38:
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_49;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0LL);
  v43 = (UnityEngine_Transform_o *)earthSpotRoot;
  if ( !byte_4A55CE7 )
  {
    earthSpotRoot = sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  if ( !v43 )
    goto LABEL_49;
  UnityEngine_Transform__set_rotation(v43, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_49;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0LL);
  if ( !earthSpotRoot )
    goto LABEL_49;
  v47.fields.x = x;
  v47.fields.y = y;
  v47.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)earthSpotRoot, v47, 0LL);
  earthSpotRoot = (__int64)this->fields.earthRoot;
  if ( !earthSpotRoot )
    goto LABEL_49;
  earthSpotRoot = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)earthSpotRoot, 0LL);
  if ( !earthSpotRoot )
    goto LABEL_49;
  v48.fields.x = zoomInScl;
  v48.fields.y = zoomInScl;
  v48.fields.z = zoomInScl;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)earthSpotRoot, v48, 0LL);
  earthSpotRoot = (__int64)this->fields.mTerminalList;
  if ( !earthSpotRoot )
    goto LABEL_49;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)earthSpotRoot, 0, 1, 0LL);
  earthSpotRoot = (__int64)this->fields.mTerminalList;
  if ( !earthSpotRoot )
    goto LABEL_49;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)earthSpotRoot, 0.0, 0, 1, 0LL);
  BlankEarth__SetState(this, 3, v44);
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
          sub_1B88814(this, isDisp);
        v7 = presentBoxHideGameObjectList->m_Items[v5];
        if ( !v7 )
          sub_1B8880C(0LL, isDisp);
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

  if ( (byte_4A57C5F & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_BlankEarth__update__);
    byte_4A57C5F = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_30AAE44 *)Method_CStateManager_BlankEarth__update__);
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
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  unsigned int LocalPosition; // s0
  UnityEngine_GameObject_o *v17; // x0
  BlankEarthTransform_o *v18; // x0
  const MethodInfo *v19; // x5
  TerminalPramsManager_c *v20; // x0
  ServantStatusBattleListViewItem_o *p_BlankEarthTransformData_k__BackingField; // x0
  float totalAng; // [xsp+3Ch] [xbp-74h]
  float w; // [xsp+40h] [xbp-70h]
  float earthRootRot; // [xsp+44h] [xbp-6Ch]
  float y; // [xsp+48h] [xbp-68h]
  float x; // [xsp+4Ch] [xbp-64h]
  UnityEngine_Vector3_o v28; // 0:x1.12
  UnityEngine_Vector3_o v29; // 0:x3.12
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v32; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4A57C7E & 1) == 0 )
  {
    sub_1B885B0(&BlankEarthTransform_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57C7E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57CDC )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CDC = 1;
  }
  earthRoot = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    earthRoot = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !this->fields.blankEarth )
    goto LABEL_26;
  v4 = *(BlankEarthTransform_o **)(*(_QWORD *)&earthRoot[7].fields.m_CachedPtr + 520LL);
  *(UnityEngine_Quaternion_o *)&v5 = UnityEngine_Transform__get_rotation(this->fields.blankEarth, 0LL);
  v9 = v5;
  v10 = v6;
  v11 = v7;
  v12 = v8;
  if ( v4 )
  {
    v4->fields.blankEarthRotation.fields.x = v5;
    v4->fields.blankEarthRotation.fields.y = v6;
    v4->fields.blankEarthRotation.fields.z = v7;
    v4->fields.blankEarthRotation.fields.w = v8;
    earthRoot = this->fields.earthRoot;
    if ( earthRoot )
    {
      earthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(earthRoot, 0LL);
      if ( earthRoot )
      {
        v4->fields.earthRootRotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)earthRoot, 0LL);
        v4->fields.earthRootLocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.earthRoot, 0LL);
        earthRoot = this->fields.earthRoot;
        if ( earthRoot )
        {
          gameObject = UnityEngine_GameObject__get_gameObject(earthRoot, 0LL);
          v4->fields.earthRootLocalScale = GameObjectExtensions__GetLocalScale(gameObject, 0LL);
          v4->fields.totalAngle = this->fields.totalAngle;
          goto LABEL_19;
        }
      }
    }
LABEL_26:
    sub_1B8880C(earthRoot, method);
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
  v17 = UnityEngine_GameObject__get_gameObject(earthRoot, 0LL);
  GameObjectExtensions__GetLocalScale(v17, 0LL);
  v18 = (BlankEarthTransform_o *)sub_1B887FC(BlankEarthTransform_TypeInfo);
  v32.fields.y = y;
  v32.fields.x = x;
  v32.fields.z = earthRootRot;
  v31.fields.y = v10;
  v32.fields.w = w;
  v31.fields.z = v11;
  v31.fields.w = v12;
  *(_QWORD *)&v28.fields.x = 0LL;
  v31.fields.x = v9;
  v4 = v18;
  BlankEarthTransform___ctor(v18, v31, v32, v28, v29, totalAng, v19);
LABEL_19:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57CDD )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CDD = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  p_BlankEarthTransformData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v20->static_fields->_BlankEarthTransformData_k__BackingField;
  p_BlankEarthTransformData_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v4;
  sub_1B88554(p_BlankEarthTransformData_k__BackingField, (int32_t)v4, v14, v15);
  return v4;
}


void __fastcall BlankEarth__UpdateSpotDisp(BlankEarth_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *earthSpotRoot; // x0
  System_Object_array *ComponentsInChildren_object__49085148; // x0
  BlankEarth___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_T__o *v6; // x19
  System_Action_object__o *_9__115_0; // x20
  Il2CppObject *v8; // x21
  struct BlankEarth___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A57C72 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BlankEarthPoint__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BlankEarthPoint___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_1B885B0(&Method_BlankEarth___c__UpdateSpotDisp_b__115_0__);
    sub_1B885B0(&BlankEarth___c_TypeInfo);
    byte_4A57C72 = 1;
  }
  earthSpotRoot = this->fields.earthSpotRoot;
  if ( !earthSpotRoot )
    sub_1B8880C(0LL, method);
  ComponentsInChildren_object__49085148 = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                            earthSpotRoot,
                                            (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  v5 = BlankEarth___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_T__o *)ComponentsInChildren_object__49085148;
  if ( !BlankEarth___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarth___c_TypeInfo);
    v5 = BlankEarth___c_TypeInfo;
  }
  _9__115_0 = (System_Action_object__o *)v5->static_fields->__9__115_0;
  if ( !_9__115_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BlankEarth___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__115_0 = (System_Action_object__o *)sub_1B887FC(System_Action_BlankEarthPoint__TypeInfo);
    System_Action_object____ctor(_9__115_0, v8, Method_BlankEarth___c__UpdateSpotDisp_b__115_0__, 0LL);
    static_fields = BlankEarth___c_TypeInfo->static_fields;
    static_fields->__9__115_0 = (struct System_Action_BlankEarthPoint__o *)_9__115_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__115_0, (int32_t)_9__115_0, v10, v11);
  }
  BasicHelper__ForEach_object_(
    v6,
    (System_Action_T__o *)_9__115_0,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BlankEarthPoint___);
}


void __fastcall BlankEarth__UpdateTotalAngle(BlankEarth_o *this, const MethodInfo *method)
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
  if ( !blankEarth
    || (blankEarth = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(blankEarth, 0LL)) == 0LL )
  {
    sub_1B8880C(blankEarth, method);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
  v10 = UnityEngine_Quaternion__Inverse(rotation, 0LL);
  x = v10.fields.x;
  y = v10.fields.y;
  z = v10.fields.z;
  w = v10.fields.w;
  if ( !byte_4A57CD8 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A57CD8 = 1;
  }
  v11.fields.x = x;
  v11.fields.y = y;
  v11.fields.z = z;
  v11.fields.w = w;
  v8 = UnityEngine_Quaternion__op_Multiply_69398196(v11, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0LL);
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
  sub_1B88554(
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
  sub_1B88554(v11, (int32_t)finishCallback, v12, v13);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(this, method);
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
  if ( (byte_4A57C8A & 1) == 0 )
  {
    this = (BlankEarth_StateEarthAutoRotateBase_o *)sub_1B885B0(&System_Action_TypeInfo);
    byte_4A57C8A = 1;
  }
  klass = v2[4].klass;
  if ( !klass
    || (monitor = (EasingObject_o *)v2[1].monitor,
        v5 = *(float *)&klass->_1.name,
        v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v6, v2, (intptr_t)v2->klass->vtable[10].methodPtr, 0LL),
        v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, (intptr_t)v2->klass->vtable[11].methodPtr, 0LL),
        (v8 = v2[4].klass) == 0LL)
    || !monitor )
  {
    sub_1B8880C(this, method);
  }
  EasingObject__Play(monitor, v5, v6, v7, 0.0, HIDWORD(v8->_1.namespaze), 0LL);
}


void __fastcall BlankEarth_StateEarthAutoRotateBase__begin(
        BlankEarth_StateEarthAutoRotateBase_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UnityEngine_Transform_o *blankEarth; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct BlankEarth_QAARotateEarthParam_o *qaaRotateEarthParam; // x1
  struct BlankEarth_QAARotateEarthParam_o *Param; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A57C89 & 1) == 0 )
  {
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    byte_4A57C89 = 1;
  }
  this->fields.That = that;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  if ( !that )
    goto LABEL_10;
  qaaRotateEarthParam = that->fields.qaaRotateEarthParam;
  this->fields.Param = qaaRotateEarthParam;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.Param, (int32_t)qaaRotateEarthParam, v8, v9);
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
                               (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
          this->fields.EasingObj = (struct EasingObject_o *)Component_object;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.EasingObj, (int32_t)Component_object, v14, v15);
          return;
        }
      }
    }
LABEL_10:
    sub_1B8880C(blankEarth, v7);
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
  bool v8; // w22
  __int64 v9; // x20

  if ( (byte_4A57C8B & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_1B885B0(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    byte_4A57C8B = 1;
  }
  EasingObj = this->fields.EasingObj;
  if ( !EasingObj
    || (EasingObject__Stop(EasingObj, 0LL), (EasingObj = (EasingObject_o *)this->fields.That) == 0LL)
    || (BlankEarth__UpdateTotalAngle((BlankEarth_o *)EasingObj, (const MethodInfo *)that),
        (v5 = this->fields.EasingObj) == 0LL) )
  {
    sub_1B8880C(EasingObj, that);
  }
  Param = this->fields.Param;
  if ( Param )
  {
    FinishCallback_k__BackingField = (System_Action_T__o *)Param->fields._FinishCallback_k__BackingField;
    v8 = v5->fields.mNow < 1.0;
    v9 = sub_1B887FC(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0LL);
    *(_BYTE *)(v9 + 16) = v8;
    ActionExtensions__Call_object_(
      FinishCallback_k__BackingField,
      (Il2CppObject *)v9,
      (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
    sub_1B8880C(this, that);
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
    sub_1B8880C(this, 0LL);
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
  if ( !byte_4A55CE8 )
  {
    this = (BlankEarth_StateShortcutRotate_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE8 = 1;
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
    sub_1B8880C(this, method);
  }
  v15.fields.x = 0.0;
  v15.fields.y = mNow * v4->fields.rotAmountY;
  v15.fields.z = 0.0;
  UnityEngine_Transform__Rotate_69482032((UnityEngine_Transform_o *)this, v15, 0LL);
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

  if ( (byte_4A57C8C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A57C8C = 1;
  }
  EasingObj = this->fields.EasingObj;
  rotateTime = this->fields.rotateTime;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, (intptr_t)this->klass->vtable._10_OnRotateCompleted.methodPtr, 0LL);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)this->klass->vtable._11_update.methodPtr, 0LL);
  Param = this->fields.Param;
  if ( !Param || !EasingObj )
    sub_1B8880C(v7, v8);
  EasingObject__Play(EasingObj, rotateTime, v5, v6, 0.0, Param->fields._EaseType_k__BackingField, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth_StateShortcutRotate__begin(
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
  v29 = UnityEngine_Quaternion__Inverse(this->fields.QuaFrom, 0LL);
  x = v29.fields.x;
  y = v29.fields.y;
  z = v29.fields.z;
  w = v29.fields.w;
  if ( !byte_4A57CD8 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A57CD8 = 1;
  }
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  v30.fields.w = w;
  v27 = UnityEngine_Quaternion__op_Multiply_69398196(v30, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0LL);
  v9 = *(long double *)&v27.fields.x;
  v10 = v27.fields.y;
  v11 = *(long double *)&v27.fields.z;
  v31 = UnityEngine_Quaternion__Inverse(this->fields.QuaTo, 0LL);
  v12 = v31.fields.x;
  v13 = v31.fields.y;
  v14 = v31.fields.z;
  v15 = v31.fields.w;
  if ( !byte_4A57CD8 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A57CD8 = 1;
  }
  v32.fields.x = v12;
  v32.fields.y = v13;
  v32.fields.z = v14;
  v32.fields.w = v15;
  v28 = UnityEngine_Quaternion__op_Multiply_69398196(v32, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0LL);
  v16 = *(long double *)&v28.fields.x;
  v17 = v28.fields.y;
  v18 = *(long double *)&v28.fields.z;
  if ( !byte_4A57292 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A57292 = 1;
  }
  this->fields.rotAmountY = sub_1FEB15C(0LL, v9, 0.0, v11, v16, 0.0, v18);
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
    if ( !byte_4A55CDF )
    {
      sub_1B885B0(&System_Math_TypeInfo);
      byte_4A55CDF = 1;
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
      sub_1B8880C(EasingObj, v21);
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
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x8
  int v14; // w9
  int v15; // s0
  float v16; // s8
  TerminalSceneComponent_c *v17; // x0
  __int64 v18; // x8
  UnityEngine_Transform_o *v19; // x22
  BlankEarth_c *v20; // x0
  float *p_x; // x8
  int v22; // s0
  TerminalSceneComponent_c *v26; // x0
  UnityEngine_Transform_o *v27; // x22
  int v28; // s0
  _QWORD *v32; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x8
  UnityEngine_GameObject_o *v38; // x0
  __int64 v39; // x8
  EasingObject_o *v40; // x22
  System_Action_o *v41; // x23
  System_Action_o *v42; // x24
  __int64 v43; // x8
  __int64 v44; // x8
  __int64 v45; // x8
  __int64 v46; // x8
  __int64 v47; // x8
  __int64 v48; // x8
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57C81 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BlankEarth_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&Method_BlankEarth_StateStartup_begin__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__);
    sub_1B885B0(&Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__);
    sub_1B885B0(&BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo);
    byte_4A57C81 = 1;
  }
  v5 = sub_1B887FC(BlankEarth_StateStartup___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_58;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 32) = that;
  v10 = v5 + 32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)that, v11, v12);
  *(_QWORD *)&this->fields.inertialSpeedX = 0LL;
  v13 = *(_QWORD *)(v5 + 32);
  if ( !v13 )
    goto LABEL_58;
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
  Int = UnityEngine_PlayerPrefs__GetInt(v17->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0LL);
  v18 = *(_QWORD *)(v5 + 32);
  *(_BYTE *)(v5 + 65) = (_DWORD)Int == 1;
  if ( !v18 )
    goto LABEL_58;
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
    v49.fields.x = *p_x * 0.017453;
    v49.fields.y = p_x[1] * 0.017453;
    v49.fields.z = p_x[2] * 0.017453;
    *(UnityEngine_Quaternion_o *)&v22 = UnityEngine_Quaternion__Internal_FromEulerRad(v49, 0LL);
    if ( !v19 )
      goto LABEL_58;
    UnityEngine_Transform__set_rotation(v19, *(UnityEngine_Quaternion_o *)&v22, 0LL);
    v26 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v26 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v26->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 0, 0LL);
    if ( !*(_QWORD *)v10 )
      goto LABEL_58;
    *(float *)(*(_QWORD *)v10 + 228LL) = -*(float *)(*(_QWORD *)v10 + 84LL);
  }
  else
  {
    v27 = *(UnityEngine_Transform_o **)(v18 + 32);
    *(UnityEngine_Quaternion_o *)&v28 = BlankEarth__LoadEarthRotate((BlankEarth_o *)v18, v7);
    if ( !v27 )
      goto LABEL_58;
    UnityEngine_Transform__set_rotation(v27, *(UnityEngine_Quaternion_o *)&v28, 0LL);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57CDE )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CDE = 1;
  }
  Int = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Int = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(Int + 184) + 92LL) )
  {
    v32 = Method_BlankEarth_StateStartup_begin__;
    if ( (*((_BYTE *)Method_BlankEarth_StateStartup_begin__ + 83) & 2) != 0 )
      v32 = (_QWORD *)sub_1B885C8(Method_BlankEarth_StateStartup_begin__);
    Int = sub_1B88594(v32, v32[4]);
    if ( *(_QWORD *)v10 )
    {
      Int = (__int64)OverwriteAssetSoundName__PlaySe(
                       (System_Reflection_MethodBase_o *)Int,
                       *(System_String_o **)(*(_QWORD *)v10 + 128LL),
                       0LL);
      goto LABEL_32;
    }
LABEL_58:
    sub_1B8880C(Int, v7);
  }
LABEL_32:
  if ( !*(_QWORD *)v10 )
    goto LABEL_58;
  Int = *(_QWORD *)(*(_QWORD *)v10 + 32LL);
  if ( !Int )
    goto LABEL_58;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Int, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)Component_object, v35, v36);
  v37 = *(_QWORD *)(v5 + 32);
  if ( !v37 )
    goto LABEL_58;
  Int = *(_QWORD *)(v37 + 40);
  if ( !Int )
    goto LABEL_58;
  v38 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Int, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v38, 0LL);
  v39 = *(_QWORD *)(v5 + 32);
  *(UnityEngine_Vector3_o *)(v5 + 52) = LocalScale;
  if ( !v39 )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)(v5 + 40) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)Int, v7);
  *(_BYTE *)(v5 + 64) = 0;
  v40 = *(EasingObject_o **)(v5 + 16);
  v41 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)v5, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__0__, 0LL);
  v42 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)v5, Method_BlankEarth_StateStartup___c__DisplayClass3_0__begin_b__1__, 0LL);
  v43 = *(_QWORD *)(v5 + 32);
  if ( !v43 )
    goto LABEL_58;
  if ( !v40 )
    goto LABEL_58;
  EasingObject__Play_46570564(v40, 1.0, 0.0, v16, v41, v42, 0.0, *(_DWORD *)(v43 + 188), 0LL);
  if ( !*(_QWORD *)v10 )
    goto LABEL_58;
  Int = *(_QWORD *)(*(_QWORD *)v10 + 248LL);
  if ( !Int )
    goto LABEL_58;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)Int, 0, 1, 0LL);
  v44 = *(_QWORD *)v10;
  if ( !*(_QWORD *)v10 )
    goto LABEL_58;
  Int = *(_QWORD *)(v44 + 248);
  if ( !Int )
    goto LABEL_58;
  ScrTerminalListTop__FrameInOutBlankEarthRotateBtn((ScrTerminalListTop_o *)Int, *(float *)(v44 + 172), 0, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  Int = (__int64)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v45 = **(_QWORD **)(Int + 184);
  if ( !v45 )
    goto LABEL_58;
  v46 = *(_QWORD *)(v45 + 256);
  if ( !v46 )
    goto LABEL_58;
  *(_BYTE *)(v46 + 410) = 1;
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
    byte_4A5629D = 1;
  }
  if ( !*(_DWORD *)(Int + 224) )
  {
    j_il2cpp_runtime_class_init_0(Int);
    Int = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v47 = **(_QWORD **)(Int + 184);
  if ( !v47 )
    goto LABEL_58;
  v48 = *(_QWORD *)(v47 + 256);
  if ( !v48 )
    goto LABEL_58;
  *(_BYTE *)(v48 + 411) = 1;
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
    sub_1B8880C(this, 0LL);
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
      sub_1B88554(p_scalingEndCallback, 0, v8, v9);
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
  if ( (byte_4A57C82 & 1) == 0 )
  {
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4A57C82 = 1;
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
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !this )
LABEL_27:
    sub_1B8880C(this, method);
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
  struct BlankEarth_o *that; // x8
  Il2CppObject *v4; // x20
  void *monitor; // x8
  int32_t v6; // w2
  int32_t v7; // w3
  struct BlankEarth_o *v8; // x8
  float wait_time; // s8
  System_Action_o *v10; // x21
  struct BlankEarth_o *v11; // x8

  v2 = this;
  if ( (byte_4A57C83 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)sub_1B885B0(&Method_BlankEarth_SetMainState__);
    byte_4A57C83 = 1;
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
  monitor = v4[19].monitor;
  if ( monitor )
  {
    this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)(*((__int64 (__fastcall **)(_QWORD, _QWORD))monitor + 3))(
                                                               *((_QWORD *)monitor + 8),
                                                               *((_QWORD *)monitor + 5));
    v8 = v2->fields.that;
    if ( !v8 )
      goto LABEL_13;
    v8->fields.scalingEndCallback = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.scalingEndCallback, 0, v6, v7);
    v4 = (Il2CppObject *)v2->fields.that;
  }
  wait_time = v2->fields.wait_time;
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v10, v4, Method_BlankEarth_SetMainState__, 0LL);
  this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)BasicHelper__DelayCall(wait_time, v10, 0LL);
  if ( !v4
    || (this = (BlankEarth_StateStartup___c__DisplayClass3_0_o *)UnityEngine_MonoBehaviour__StartCoroutine_69444652(
                                                                   (UnityEngine_MonoBehaviour_o *)v4,
                                                                   (System_Collections_IEnumerator_o *)this,
                                                                   0LL),
        (v11 = v2->fields.that) == 0LL) )
  {
LABEL_13:
    sub_1B8880C(this, method);
  }
  v11->fields.isSkipTutorialWait = 0;
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
  BlankEarthTransform_o *updated; // x25
  float v15; // s2
  float z; // w9
  unsigned int v17; // s0
  unsigned int v18; // s1
  float v19; // s8
  float zoomInScl; // s0
  float zoomInSpdTime; // s9
  const MethodInfo *v22; // x2
  float v28; // s1
  unsigned int v29; // [xsp+0h] [xbp-70h]
  unsigned int v30; // [xsp+10h] [xbp-60h]

  if ( (byte_4A57C85 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BlankEarth_StateZoomIn_o *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57C85 = 1;
  }
  if ( !blankEarth )
    goto LABEL_15;
  updated = BlankEarth__UpdateBlankEarthTransformData(blankEarth, (const MethodInfo *)otherRoot);
  *(UnityEngine_Vector3_o *)(&v15 - 2) = GameObjectExtensions__GetLocalPosition(blankEarth->fields.otherObjectRoot, 0LL);
  z = blankEarth->fields.zoomInPos.fields.z;
  v30 = v17;
  v29 = v18;
  *(_QWORD *)&rootPosTo->fields.x = *(_QWORD *)&blankEarth->fields.zoomInPos.fields.x;
  rootPosTo->fields.z = z;
  if ( !updated )
    goto LABEL_15;
  v19 = v15;
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
      v28 = otherRoot->fields.otherObjZoomInPos.fields.z - v19;
      *(float32x2_t *)&rootPosTo->fields.x = vsub_f32(
                                               *(float32x2_t *)&otherRoot->fields.otherObjZoomInPos.fields.x,
                                               (float32x2_t)__PAIR64__(v29, v30));
      rootPosTo->fields.z = v28;
      *zoomSpeed = otherRoot->fields.zoomInSpeed;
      BlankEarthOtherObject__ZoomInAdjustAppearance(
        otherRoot,
        otherRoot->fields.zoomInSpeed,
        blankEarth->fields.zoomOutEasingType,
        v22);
      return;
    }
LABEL_15:
    sub_1B8880C(this, otherRoot);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarth_StateZoomIn__begin(
        BlankEarth_StateZoomIn_o *this,
        BlankEarth_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 mTerminalList; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
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
  int32_t v25; // w3
  __int64 v26; // x8
  float v27; // s8
  float v28; // s0
  float v29; // s1
  float v30; // s2
  float v31; // s3
  BlankEarth_o *v32; // x8
  float *v33; // x9
  float v34; // s4
  float v35; // s5
  float v36; // s6
  float v37; // s7
  __int64 v38; // x10
  float z; // w10
  __int64 v40; // x10
  float zoomInScl; // s0
  struct BlankEarthPoint_o *v42; // x9
  UnityEngine_Object_o *otherObjectRoot; // x25
  Il2CppObject *v44; // x0
  const MethodInfo *v45; // x7
  UnityEngine_Object_o *v46; // x22
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  BlankEarth_o *v49; // x21
  struct BlankEarthPoint_o *v50; // x1
  ServantStatusBattleListViewItem_o *v51; // x21
  BlankEarthPoint_o *Point; // x0
  ServantStatusBattleListViewItem_c *klass; // x8
  int methods; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v56; // x8
  float v57; // s1
  System_Object_array *ComponentsInChildren_object__49085148; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  EasingObject_o *v61; // x21
  float mSpdTime; // s8
  System_Action_o *v63; // x19
  System_Action_o *v64; // x22
  __int64 v65; // x8

  if ( (byte_4A57C84 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__);
    sub_1B885B0(&Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__);
    sub_1B885B0(&BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo);
    byte_4A57C84 = 1;
  }
  v5 = sub_1B887FC(BlankEarth_StateZoomIn___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_83;
  *(_QWORD *)(v5 + 24) = that;
  v10 = (BlankEarth_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)that, v8, v9);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_83;
  mTerminalList = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 248LL);
  if ( !mTerminalList )
    goto LABEL_83;
  ScrTerminalListTop__FrameInOutBlankEarthShortcutBtn((ScrTerminalListTop_o *)mTerminalList, 0, 0, 0LL);
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
    0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  *(_BYTE *)(v13 + 410) = 1;
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    mTerminalList = (__int64)TerminalSceneComponent_TypeInfo;
    byte_4A5629D = 1;
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
  *(_BYTE *)(v15 + 411) = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57CDB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CDB = 1;
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
        if ( !byte_4A57CDF )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A57CDF = 1;
        }
        v18 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v18 = TerminalPramsManager_TypeInfo;
        }
        v18->static_fields->_BlankEarthSpotId_k__BackingField = spotId_k__BackingField;
        TerminalPramsManager__BlankEarthSpotId_SaveData(0LL);
        if ( *v10 )
        {
          this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume((*v10)->fields.zoomInSpdTime, 0LL);
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
                0LL);
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
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
                      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                                           gameObject,
                                           (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
                      *(_QWORD *)(v5 + 16) = Component_object;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)Component_object, v24, v25);
                      if ( v21 )
                      {
                        v26 = *(_QWORD *)(v5 + 24);
                        *(_OWORD *)(v5 + 32) = *(_OWORD *)(v21 + 16);
                        if ( v26 )
                        {
                          v27 = *(float *)(v26 + 88);
                          if ( !byte_4A55CE9 )
                          {
                            sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                            byte_4A55CE9 = 1;
                          }
                          *(UnityEngine_Quaternion_o *)&v28 = UnityEngine_Quaternion__AngleAxis(
                                                                -v27,
                                                                UnityEngine_Vector3_TypeInfo->static_fields->upVector,
                                                                0LL);
                          v32 = *v10;
                          if ( *v10 )
                          {
                            v33 = (float *)v32->fields.focusEarthPoint;
                            if ( v33 )
                            {
                              v34 = v33[66];
                              v35 = v33[69];
                              v36 = v33[68];
                              v37 = v33[67];
                              *(float *)(v5 + 48) = (float)((float)(v29 * v36)
                                                          + (float)((float)(v31 * v34) + (float)(v28 * v35)))
                                                  - (float)(v30 * v37);
                              *(float *)(v5 + 52) = (float)((float)(v30 * v34)
                                                          + (float)((float)(v31 * v37) + (float)(v29 * v35)))
                                                  - (float)(v28 * v36);
                              *(float *)(v5 + 56) = (float)((float)(v28 * v37)
                                                          + (float)((float)(v31 * v36) + (float)(v30 * v35)))
                                                  - (float)(v29 * v34);
                              *(float *)(v5 + 60) = (float)((float)((float)(v31 * v35) - (float)(v28 * v34))
                                                          - (float)(v29 * v37))
                                                  - (float)(v30 * v36);
                              *(_OWORD *)(v5 + 64) = *(_OWORD *)(v21 + 32);
                              if ( !byte_4A55CE7 )
                              {
                                mTerminalList = sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
                                byte_4A55CE7 = 1;
                                v32 = *v10;
                              }
                              *(struct UnityEngine_Quaternion_StaticFields *)(v5 + 80) = *UnityEngine_Quaternion_TypeInfo->static_fields;
                              v38 = *(_QWORD *)(v21 + 48);
                              *(_DWORD *)(v5 + 104) = *(_DWORD *)(v21 + 56);
                              *(_QWORD *)(v5 + 96) = v38;
                              if ( v32 )
                              {
                                z = v32->fields.zoomInPos.fields.z;
                                *(_QWORD *)(v5 + 108) = *(_QWORD *)&v32->fields.zoomInPos.fields.x;
                                *(float *)(v5 + 116) = z;
                                v40 = *(_QWORD *)(v21 + 60);
                                *(_DWORD *)(v5 + 128) = *(_DWORD *)(v21 + 68);
                                *(_QWORD *)(v5 + 120) = v40;
                                zoomInScl = v32->fields.zoomInScl;
                                *(float *)(v5 + 132) = zoomInScl;
                                *(float *)(v5 + 136) = zoomInScl;
                                *(float *)(v5 + 140) = zoomInScl;
                                *(_BYTE *)(v5 + 176) = 0;
                                v42 = v32->fields.focusEarthPoint;
                                if ( v42 )
                                {
                                  if ( v42->fields._spotOnType_k__BackingField == 1 )
                                  {
                                    otherObjectRoot = (UnityEngine_Object_o *)v32->fields.otherObjectRoot;
                                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                    mTerminalList = UnityEngine_Object__op_Inequality(otherObjectRoot, 0LL, 0LL);
                                    if ( (mTerminalList & 1) != 0 )
                                    {
                                      if ( !*v10 )
                                        goto LABEL_83;
                                      mTerminalList = (__int64)(*v10)->fields.otherObjectRoot;
                                      if ( !mTerminalList )
                                        goto LABEL_83;
                                      v44 = UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)mTerminalList,
                                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
                                      BlankEarth_StateZoomIn__SetOtherObjectZoomInParam(
                                        (BlankEarth_StateZoomIn_o *)v44,
                                        (BlankEarthOtherObject_o *)v44,
                                        *v10,
                                        (UnityEngine_Vector3_o *)(v5 + 108),
                                        (UnityEngine_Vector3_o *)(v5 + 132),
                                        (UnityEngine_Quaternion_o *)(v5 + 48),
                                        &p_fields->mSpdTime,
                                        v45);
                                    }
                                  }
                                  if ( !*v10 )
                                    goto LABEL_83;
                                  v46 = (UnityEngine_Object_o *)(*v10)->fields.focusEarthPoint;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  mTerminalList = UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
                                  v49 = *v10;
                                  if ( (mTerminalList & 1) != 0 )
                                  {
                                    if ( !v49 )
                                      goto LABEL_83;
                                    v50 = v49->fields.focusEarthPoint;
                                    *(_QWORD *)(v5 + 144) = v50;
                                    v51 = (ServantStatusBattleListViewItem_o *)(v5 + 144);
                                  }
                                  else
                                  {
                                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                    if ( !byte_4A57CDB )
                                    {
                                      sub_1B885B0(&TerminalPramsManager_TypeInfo);
                                      byte_4A57CDB = 1;
                                    }
                                    mTerminalList = (__int64)TerminalPramsManager_TypeInfo;
                                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      mTerminalList = (__int64)TerminalPramsManager_TypeInfo;
                                    }
                                    if ( !v49 )
                                      goto LABEL_83;
                                    Point = BlankEarth__GetPoint(
                                              v49,
                                              *(_DWORD *)(*(_QWORD *)(mTerminalList + 184) + 508LL),
                                              0,
                                              v48);
                                    LODWORD(v50) = (_DWORD)Point;
                                    *(_QWORD *)(v5 + 144) = Point;
                                    v51 = (ServantStatusBattleListViewItem_o *)(v5 + 144);
                                  }
                                  sub_1B88554(v51, (int32_t)v50, v47, (int32_t)v48);
                                  klass = v51->klass;
                                  if ( v51->klass )
                                  {
                                    methods = (int)klass->_1.methods;
                                    *(_QWORD *)(v5 + 152) = klass->_1.properties;
                                    *(_DWORD *)(v5 + 160) = methods;
                                    if ( !byte_4A55CE1 )
                                    {
                                      mTerminalList = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                                      byte_4A55CE1 = 1;
                                    }
                                    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                                    v56 = *(_QWORD *)(v5 + 24);
                                    v57 = static_fields->zeroVector.fields.z;
                                    *(_QWORD *)(v5 + 164) = *(_QWORD *)&static_fields->zeroVector.fields.x;
                                    *(float *)(v5 + 172) = v57;
                                    if ( v56 )
                                    {
                                      mTerminalList = *(_QWORD *)(v56 + 48);
                                      if ( mTerminalList )
                                      {
                                        ComponentsInChildren_object__49085148 = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                                                  (UnityEngine_GameObject_o *)mTerminalList,
                                                                                  (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
                                        *(_QWORD *)(v5 + 184) = ComponentsInChildren_object__49085148;
                                        sub_1B88554(
                                          (ServantStatusBattleListViewItem_o *)(v5 + 184),
                                          (int32_t)ComponentsInChildren_object__49085148,
                                          v59,
                                          v60);
                                        v61 = *(EasingObject_o **)(v5 + 16);
                                        mSpdTime = p_fields->mSpdTime;
                                        v63 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v63,
                                          (Il2CppObject *)v5,
                                          Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__0__,
                                          0LL);
                                        v64 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v64,
                                          (Il2CppObject *)v5,
                                          Method_BlankEarth_StateZoomIn___c__DisplayClass1_0__begin_b__1__,
                                          0LL);
                                        v65 = *(_QWORD *)(v5 + 24);
                                        if ( v65 )
                                        {
                                          if ( v61 )
                                          {
                                            EasingObject__Play(
                                              v61,
                                              mSpdTime,
                                              v63,
                                              v64,
                                              0.0,
                                              *(_DWORD *)(v65 + 180),
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
    sub_1B8880C(mTerminalList, v7);
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
  if ( (byte_4A57C86 & 1) == 0 )
  {
    this = (BlankEarth_StateZoomIn___c__DisplayClass1_0_o *)sub_1B885B0(&BlankEarth_TypeInfo);
    byte_4A57C86 = 1;
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
    sub_1B8880C(this, method);
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
          sub_1B88814(this, method);
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
          sub_1B88814(this, method);
        v12 = spotList->m_Items[v11];
        if ( !v12 )
          break;
        ++v11;
        *(_QWORD *)&v12->fields.dispSpriteDot = *(_QWORD *)&v7->fields.object1DispSpotUISpriteDot;
        if ( max_length == v11 )
          return;
      }
LABEL_22:
      sub_1B8880C(this, method);
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
  __int64 v4; // x20
  __int64 blankEarth; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
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
  int32_t v19; // w3
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  UnityEngine_GameObject_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  TerminalPramsManager_c *v27; // x0
  struct BlankEarthTransform_o *BlankEarthTransformData_k__BackingField; // x1
  __int64 v29; // x8
  __int64 v30; // x10
  int v31; // w9
  __int64 v32; // x8
  float zoomInOffset; // s9
  float v34; // s0
  float v35; // s1
  float v36; // s2
  float v37; // s3
  float v38; // s11
  float v39; // s10
  float v40; // s9
  float v41; // s12
  BlankEarth_o *v42; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  UnityEngine_Object_o *v45; // x21
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  BlankEarth_o *v48; // x21
  BlankEarthPoint_o *Point; // x1
  struct UnityEngine_Vector3_StaticFields *v50; // x9
  __int64 v51; // x8
  float v52; // s1
  __int64 v53; // d0
  int v54; // s1
  __int64 v55; // x8
  System_Object_array *ComponentsInChildren_object__49085148; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  EasingObject_o *v59; // x21
  System_Action_o *v60; // x22
  System_Action_o *v61; // x23
  __int64 v62; // x8
  UnityEngine_Object_o *v63; // x20
  Il2CppObject *v64; // x20
  const MethodInfo *v65; // x2
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A57C87 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__);
    sub_1B885B0(&Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__);
    sub_1B885B0(&BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo);
    byte_4A57C87 = 1;
  }
  v4 = sub_1B887FC(BlankEarth_StateZoomOut___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_82;
  *(_QWORD *)(v4 + 24) = that;
  v9 = (BlankEarth_o **)(v4 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)that, v7, v8);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ResetBlankEarthSpotInfo(0LL);
  if ( !*v9 )
    goto LABEL_82;
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume((*v9)->fields.zoomOutSpdTime, 0LL);
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
    blankEarth = UnityEngine_Object__op_Inequality(otherObjectRoot, 0LL, 0LL);
    if ( (blankEarth & 1) != 0 )
    {
      if ( !*v9 )
        goto LABEL_82;
      blankEarth = (__int64)(*v9)->fields.otherObjectRoot;
      if ( !blankEarth )
        goto LABEL_82;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)blankEarth,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      blankEarth = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarth, 0LL);
  v17 = GameObjectExtensions__SafeGetComponent_object_(
          gameObject,
          (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v4 + 16) = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)v17, v18, v19);
  v20 = *(_QWORD *)(v4 + 24);
  if ( !v20 )
    goto LABEL_82;
  blankEarth = *(_QWORD *)(v20 + 32);
  if ( !blankEarth )
    goto LABEL_82;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
  v21 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Quaternion_o *)(v4 + 48) = rotation;
  if ( !v21 )
    goto LABEL_82;
  blankEarth = *(_QWORD *)(v21 + 40);
  if ( !blankEarth )
    goto LABEL_82;
  blankEarth = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)blankEarth, 0LL);
  if ( !blankEarth )
    goto LABEL_82;
  v68 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
  v22 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Quaternion_o *)(v4 + 80) = v68;
  if ( !v22 )
    goto LABEL_82;
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v22 + 40), 0LL);
  v23 = *(_QWORD *)(v4 + 24);
  *(UnityEngine_Vector3_o *)(v4 + 108) = LocalPosition;
  if ( !v23 )
    goto LABEL_82;
  blankEarth = *(_QWORD *)(v23 + 40);
  if ( !blankEarth )
    goto LABEL_82;
  v24 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)blankEarth, 0LL);
  *(UnityEngine_Vector3_o *)(v4 + 132) = GameObjectExtensions__GetLocalScale(v24, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57CDC )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CDC = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  BlankEarthTransformData_k__BackingField = v27->static_fields->_BlankEarthTransformData_k__BackingField;
  *(_QWORD *)(v4 + 192) = BlankEarthTransformData_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)(v4 + 192),
    (int32_t)BlankEarthTransformData_k__BackingField,
    v25,
    v26);
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
    if ( !byte_4A55CE9 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE9 = 1;
    }
    *(UnityEngine_Quaternion_o *)&v34 = UnityEngine_Quaternion__AngleAxis(
                                          zoomInOffset,
                                          UnityEngine_Vector3_TypeInfo->static_fields->upVector,
                                          0LL);
    if ( !*v9 )
      goto LABEL_82;
    blankEarth = (__int64)(*v9)->fields.blankEarth;
    if ( !blankEarth )
      goto LABEL_82;
    v38 = v34;
    v39 = v35;
    v40 = v36;
    v41 = v37;
    v69 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)blankEarth, 0LL);
    v42 = *(BlankEarth_o **)(v4 + 24);
    *(_DWORD *)(v4 + 32) = 0;
    *(float *)(v4 + 36) = (float)((float)(v40 * v69.fields.x)
                                + (float)((float)(v41 * v69.fields.y) + (float)(v39 * v69.fields.w)))
                        - (float)(v38 * v69.fields.z);
    *(float *)(v4 + 44) = (float)((float)((float)(v41 * v69.fields.w) - (float)(v38 * v69.fields.x))
                                - (float)(v39 * v69.fields.y))
                        - (float)(v40 * v69.fields.z);
    *(_DWORD *)(v4 + 40) = 0;
    if ( !v42 )
      goto LABEL_82;
    *(struct UnityEngine_Quaternion_o *)(v4 + 64) = v42->fields.mRootQua;
    if ( !byte_4A55CE1 )
    {
      blankEarth = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
      v42 = *v9;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)(v4 + 96) = *(_QWORD *)&static_fields->zeroVector.fields.x;
    *(float *)(v4 + 104) = z;
    if ( !v42 )
      goto LABEL_82;
    *(UnityEngine_Vector3_o *)(v4 + 120) = BlankEarth__GetDefaultEarthScale((BlankEarth_o *)blankEarth, v6);
  }
  if ( !*v9 )
    goto LABEL_82;
  v45 = (UnityEngine_Object_o *)(*v9)->fields.focusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = UnityEngine_Object__op_Inequality(v45, 0LL, 0LL);
  v48 = *v9;
  if ( (blankEarth & 1) != 0 )
  {
    if ( !v48 )
      goto LABEL_82;
    Point = v48->fields.focusEarthPoint;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57CDB )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57CDB = 1;
    }
    blankEarth = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      blankEarth = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v48 )
      goto LABEL_82;
    Point = BlankEarth__GetPoint(v48, *(_DWORD *)(*(_QWORD *)(blankEarth + 184) + 508LL), 0, v47);
  }
  *(_QWORD *)(v4 + 144) = Point;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 144), (int32_t)Point, v46, (int32_t)v47);
  if ( !byte_4A55CE1 )
  {
    blankEarth = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  v50 = UnityEngine_Vector3_TypeInfo->static_fields;
  v51 = *(_QWORD *)(v4 + 144);
  v52 = v50->zeroVector.fields.z;
  *(_QWORD *)(v4 + 164) = *(_QWORD *)&v50->zeroVector.fields.x;
  *(float *)(v4 + 172) = v52;
  if ( !v51 )
    goto LABEL_82;
  v53 = *(_QWORD *)(v51 + 144);
  v54 = *(_DWORD *)(v51 + 152);
  v55 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(v4 + 152) = v53;
  *(_DWORD *)(v4 + 160) = v54;
  if ( !v55 )
    goto LABEL_82;
  blankEarth = *(_QWORD *)(v55 + 48);
  if ( !blankEarth )
    goto LABEL_82;
  ComponentsInChildren_object__49085148 = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                            (UnityEngine_GameObject_o *)blankEarth,
                                            (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BlankEarthPoint___);
  *(_QWORD *)(v4 + 184) = ComponentsInChildren_object__49085148;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 184), (int32_t)ComponentsInChildren_object__49085148, v57, v58);
  *(_BYTE *)(v4 + 176) = 0;
  v59 = *(EasingObject_o **)(v4 + 16);
  v60 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)v4, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__0__, 0LL);
  v61 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v61, (Il2CppObject *)v4, Method_BlankEarth_StateZoomOut___c__DisplayClass0_0__begin_b__1__, 0LL);
  v62 = *(_QWORD *)(v4 + 24);
  if ( !v62 )
    goto LABEL_82;
  if ( !v59 )
    goto LABEL_82;
  EasingObject__Play_46570564(v59, 1.0, 0.0, v13, v60, v61, 0.0, *(_DWORD *)(v62 + 184), 0LL);
  if ( !*v9 )
    goto LABEL_82;
  v63 = (UnityEngine_Object_o *)(*v9)->fields.otherObjectRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = UnityEngine_Object__op_Inequality(v63, 0LL, 0LL);
  if ( (blankEarth & 1) != 0 )
  {
    if ( !*v9 )
      goto LABEL_82;
    blankEarth = (__int64)(*v9)->fields.otherObjectRoot;
    if ( !blankEarth )
      goto LABEL_82;
    v64 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)blankEarth,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthOtherObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    blankEarth = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v64, 0LL);
    if ( (blankEarth & 1) != 0 )
    {
      if ( *v9 && v64 )
      {
        BlankEarthOtherObject__ZoomOutAdjustAppearance(
          (BlankEarthOtherObject_o *)v64,
          v13,
          (*v9)->fields.zoomOutEasingType,
          v65);
        return;
      }
LABEL_82:
      sub_1B8880C(blankEarth, v6);
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
          sub_1B88814(this, method);
        v67 = (float32x2_t *)spotList->m_Items[v65];
        if ( !v67 )
          break;
        ++v65;
        v67[13].n64_u64[0] = vadd_f32(v67[32], vmul_f32(v66, vsub_f32(v61[24], v67[32]))).n64_u64[0];
        if ( max_length == v65 )
          return;
      }
LABEL_41:
      sub_1B8880C(this, method);
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
  if ( (byte_4A57C88 & 1) == 0 )
  {
    this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)sub_1B885B0(&StringLiteral_19814/*"gevINFOBAR_BACK"*/);
    byte_4A57C88 = 1;
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
    || (HutongGames_PlayMaker_Fsm__Event_63721276(
          (HutongGames_PlayMaker_Fsm_o *)this,
          (System_String_o *)StringLiteral_19814/*"gevINFOBAR_BACK"*/,
          0LL),
        (this = (BlankEarth_StateZoomOut___c__DisplayClass0_0_o *)v2->fields.that) == 0LL)
    || (monitor = this[1].monitor) == 0LL )
  {
LABEL_35:
    sub_1B8880C(this, method);
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
          sub_1B88814(this, method);
        v17 = spotList->m_Items[i];
        if ( !v17 )
          goto LABEL_35;
        *(_QWORD *)&v17->fields.dispSpriteDot = *(_QWORD *)&v17->fields._DefaultDispSpriteDot_k__BackingField;
      }
    }
  }
  BlankEarth__SetState((BlankEarth_o *)this, 2, v12);
}


void __fastcall BlankEarth__CoCheckTutorial_d__96___ctor(
        BlankEarth__CoCheckTutorial_d__96_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarth__CoCheckTutorial_d__96__MoveNext(
        BlankEarth__CoCheckTutorial_d__96_o *this,
        const MethodInfo *method)
{
  BlankEarth__CoCheckTutorial_d__96_o *v2; // x19
  int32_t _1__state; // w8
  BlankEarth_o *_4__this; // x20
  Il2CppObject *v5; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Action_o *finishCallback; // x1
  float time_5__2; // s0
  float v12; // s8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  bool result; // w0
  __int64 v17; // x21
  Il2CppObject *_8__1; // x22
  System_Action_o *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  struct TutorialCommunicateAdapter_o *adapter; // x1
  int32_t v23; // w2
  int32_t v24; // w3

  v2 = this;
  if ( (byte_4A57C8F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_BlankEarth___c__DisplayClass96_0__CoCheckTutorial_g__OnFinish_0__);
    this = (BlankEarth__CoCheckTutorial_d__96_o *)sub_1B885B0(&BlankEarth___c__DisplayClass96_0_TypeInfo);
    byte_4A57C8F = 1;
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
    v5 = (Il2CppObject *)sub_1B887FC(BlankEarth___c__DisplayClass96_0_TypeInfo);
    System_Object___ctor(v5, 0LL);
    v2->fields.__8__1 = (struct BlankEarth___c__DisplayClass96_0_o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, (int32_t)v5, v6, v7);
    this = (BlankEarth__CoCheckTutorial_d__96_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_16;
    finishCallback = v2->fields.finishCallback;
    *(_QWORD *)&this->fields.__1__state = finishCallback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)finishCallback, v8, v9);
    v2->fields._time_5__2 = 0.0;
LABEL_8:
    if ( !_4__this )
      goto LABEL_16;
    if ( BlankEarth__GetState(_4__this, method) == 1 )
    {
      v12 = v2->fields._time_5__2;
      v2->fields._time_5__2 = v12 + UnityEngine_Time__get_deltaTime(0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(p__2__current, 0, v14, v15);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
LABEL_11:
    this = (BlankEarth__CoCheckTutorial_d__96_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0LL);
      v17 = sub_1B887FC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
      EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v17, 0LL);
      if ( v17 )
      {
        *(_DWORD *)(v17 + 20) = 83;
        _8__1 = (Il2CppObject *)v2->fields.__8__1;
        v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v19, _8__1, Method_BlankEarth___c__DisplayClass96_0__CoCheckTutorial_g__OnFinish_0__, 0LL);
        *(_QWORD *)(v17 + 24) = v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)v19, v20, v21);
        adapter = v2->fields.adapter;
        *(_QWORD *)(v17 + 48) = adapter;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 48), (int32_t)adapter, v23, v24);
        this = (BlankEarth__CoCheckTutorial_d__96_o *)EventTutorialMaster__CoroutineCheckTutorial(
                                                        (EventTutorialMaster_EventTutorialArgs_o *)v17,
                                                        0LL);
        if ( _4__this )
        {
          UnityEngine_MonoBehaviour__StartCoroutine_69444652(
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
    sub_1B8880C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BlankEarth__CoCheckTutorial_d__96__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarth__CoCheckTutorial_d__96_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarth__CoCheckTutorial_d__96__System_Collections_IEnumerator_Reset(
        BlankEarth__CoCheckTutorial_d__96_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BlankEarth__CoCheckTutorial_d__96_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BlankEarth__CoCheckTutorial_d__96__System_Collections_IEnumerator_get_Current(
        BlankEarth__CoCheckTutorial_d__96_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarth__CoCheckTutorial_d__96__System_IDisposable_Dispose(
        BlankEarth__CoCheckTutorial_d__96_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth__CoStandByChangeState_d__98___ctor(
        BlankEarth__CoStandByChangeState_d__98_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarth__CoStandByChangeState_d__98__MoveNext(
        BlankEarth__CoStandByChangeState_d__98_o *this,
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
    sub_1B8880C(0LL, method);
  state = this->fields.state;
  if ( BlankEarth__GetState(_4__this, method) == state )
  {
    time_5__2 = this->fields._time_5__2;
    this->fields._time_5__2 = time_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, 0, v8, v9);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
  return 0;
}


Il2CppObject *__fastcall BlankEarth__CoStandByChangeState_d__98__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarth__CoStandByChangeState_d__98_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarth__CoStandByChangeState_d__98__System_Collections_IEnumerator_Reset(
        BlankEarth__CoStandByChangeState_d__98_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BlankEarth__CoStandByChangeState_d__98_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BlankEarth__CoStandByChangeState_d__98__System_Collections_IEnumerator_get_Current(
        BlankEarth__CoStandByChangeState_d__98_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarth__CoStandByChangeState_d__98__System_IDisposable_Dispose(
        BlankEarth__CoStandByChangeState_d__98_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarth___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57C8D & 1) == 0 )
  {
    sub_1B885B0(&BlankEarth___c_TypeInfo);
    byte_4A57C8D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BlankEarth___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BlankEarth___c_TypeInfo->static_fields->__9 = (struct BlankEarth___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BlankEarth___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall BlankEarth___c___ctor(BlankEarth___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarth___c___UpdateSpotDisp_b__115_0(
        BlankEarth___c_o *this,
        BlankEarthPoint_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  BlankEarthPoint__UpdateDisp(x, 1, method);
}


void __fastcall BlankEarth___c__DisplayClass96_0___ctor(
        BlankEarth___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarth___c__DisplayClass96_0___CoCheckTutorial_g__OnFinish_0(
        BlankEarth___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A57C8E & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A57C8E = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}