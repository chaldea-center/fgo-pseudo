void __fastcall srcLineSprite___ctor(srcLineSprite_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4186B8B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4186B8B = 1;
  }
  this->fields.mfWidth = 20.0;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.msSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.msSpriteName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall srcLineSprite__Awake(srcLineSprite_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *mcMyTrans; // x20
  UnityEngine_Object_o *mcLineSprite; // x20
  UnityEngine_Object_o *mcTweenAlphaP; // x20
  UnityEngine_Object_o *mcTweenScaleP; // x20
  struct CStateManager_srcLineSprite__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct CStateManager_srcLineSprite__o *mFSM; // x21
  srcLineSprite_StateNone_o *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v27; // x21
  srcLineSprite_StateMapMain_o *v28; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v29; // x21
  srcLineSprite_StateQaaHide_o *v30; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v31; // x21
  srcLineSprite_StateQaaGray_o *v32; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v33; // x20
  srcLineSprite_StateQaaDisp_o *v34; // x21
  const MethodInfo *v35; // x3

  if ( (byte_4186B85 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_srcLineSprite___ctor__, method);
    sub_B2C35C(&Method_CStateManager_srcLineSprite__add__, v3);
    sub_B2C35C(&CStateManager_srcLineSprite__TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&srcLineSprite_StateMapMain_TypeInfo, v6);
    sub_B2C35C(&srcLineSprite_StateNone_TypeInfo, v7);
    sub_B2C35C(&srcLineSprite_StateQaaDisp_TypeInfo, v8);
    sub_B2C35C(&srcLineSprite_StateQaaGray_TypeInfo, v9);
    sub_B2C35C(&srcLineSprite_StateQaaHide_TypeInfo, v10);
    byte_4186B85 = 1;
  }
  mcMyTrans = (UnityEngine_Object_o *)this->fields.mcMyTrans;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(0LL, mcMyTrans, 0LL) )
  {
    mcLineSprite = (UnityEngine_Object_o *)this->fields.mcLineSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(0LL, mcLineSprite, 0LL) )
    {
      mcTweenAlphaP = (UnityEngine_Object_o *)this->fields.mcTweenAlphaP;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(0LL, mcTweenAlphaP, 0LL) )
      {
        mcTweenScaleP = (UnityEngine_Object_o *)this->fields.mcTweenScaleP;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__op_Equality(0LL, mcTweenScaleP, 0LL);
      }
    }
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v16 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_srcLineSprite__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v16,
      (QAASpotStateController_IMapSpot_o *)this,
      5,
      (const MethodInfo_2A08354 *)Method_CStateManager_srcLineSprite___ctor__);
    this->fields.mFSM = (struct CStateManager_srcLineSprite__o *)v16;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    mFSM = this->fields.mFSM;
    v24 = (srcLineSprite_StateNone_o *)sub_B2C42C(srcLineSprite_StateNone_TypeInfo);
    srcLineSprite_StateNone___ctor(v24, 0LL);
    if ( !mFSM )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v24,
      (const MethodInfo_2A08420 *)Method_CStateManager_srcLineSprite__add__);
    v27 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v28 = (srcLineSprite_StateMapMain_o *)sub_B2C42C(srcLineSprite_StateMapMain_TypeInfo);
    srcLineSprite_StateMapMain___ctor(v28, 0LL);
    if ( !v27 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v27,
      1,
      (IState_T__o *)v28,
      (const MethodInfo_2A08420 *)Method_CStateManager_srcLineSprite__add__);
    v29 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v30 = (srcLineSprite_StateQaaHide_o *)sub_B2C42C(srcLineSprite_StateQaaHide_TypeInfo);
    srcLineSprite_StateQaaHide___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v29,
      2,
      (IState_T__o *)v30,
      (const MethodInfo_2A08420 *)Method_CStateManager_srcLineSprite__add__);
    v31 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v32 = (srcLineSprite_StateQaaGray_o *)sub_B2C42C(srcLineSprite_StateQaaGray_TypeInfo);
    srcLineSprite_StateQaaGray___ctor(v32, 0LL);
    if ( !v31
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v31,
            3,
            (IState_T__o *)v32,
            (const MethodInfo_2A08420 *)Method_CStateManager_srcLineSprite__add__),
          v33 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v34 = (srcLineSprite_StateQaaDisp_o *)sub_B2C42C(srcLineSprite_StateQaaDisp_TypeInfo),
          srcLineSprite_StateQaaDisp___ctor(v34, 0LL),
          !v33) )
    {
LABEL_26:
      sub_B2C434(v25, v26);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v33,
      4,
      (IState_T__o *)v34,
      (const MethodInfo_2A08420 *)Method_CStateManager_srcLineSprite__add__);
    srcLineSprite__SetState(this, 1, 0LL, v35);
  }
}


// local variable allocation has failed, the output may be wrong!
float __fastcall srcLineSprite__GetAim(
        srcLineSprite_o *this,
        UnityEngine_Vector2_o p1,
        UnityEngine_Vector2_o p2,
        const MethodInfo *method)
{
  return atan2f(p2.fields.y - p1.fields.y, p2.fields.x - p1.fields.x) * 57.296;
}


System_String_o *__fastcall srcLineSprite__GetGobjName(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = id;
  if ( (byte_4186B84 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12998/*"Spot_Line_"*/, method);
    sub_B2C35C(&StringLiteral_962/*"00"*/, v2);
    byte_4186B84 = 1;
  }
  v3 = System_Int32__ToString_38381416((int32_t)&v5, (System_String_o *)StringLiteral_962/*"00"*/, 0LL);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_12998/*"Spot_Line_"*/, v3, 0LL);
}


MapControl_SpotRoadInfo_o *__fastcall srcLineSprite__GetMapCtrl_SpotRoadInfo(
        srcLineSprite_o *this,
        const MethodInfo *method)
{
  return this->fields.mMapCtrl_SpotRoadInfo;
}


int32_t __fastcall srcLineSprite__GetState(srcLineSprite_o *this, const MethodInfo *method)
{
  srcLineSprite_o *v2; // x19
  struct CStateManager_srcLineSprite__o *mFSM; // x8

  v2 = this;
  if ( (byte_4186B87 & 1) == 0 )
  {
    this = (srcLineSprite_o *)sub_B2C35C(&Method_CStateManager_srcLineSprite__getState__, method);
    byte_4186B87 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetContrast(srcLineSprite_o *this, float val, const MethodInfo *method)
{
  float v3; // s4
  float v4; // s5
  float v5; // s6
  float v6; // s7
  float v8; // s3
  __int64 v11; // x1
  UIWidget_o *mcLineSprite; // x0
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-20h] BYREF

  v8 = 1.0;
  *(_QWORD *)&v13.fields.r = 0LL;
  UnityEngine_Color___ctor(*(UnityEngine_Color_o *)&val, v3, v4, v5, v6, (const MethodInfo *)&v13);
  mcLineSprite = (UIWidget_o *)this->fields.mcLineSprite;
  if ( !mcLineSprite )
    sub_B2C434(0LL, v11);
  UIWidget__set_color(mcLineSprite, v13, 0LL);
}


void __fastcall srcLineSprite__SetMapCtrl_SpotRoadInfo(
        srcLineSprite_o *this,
        MapControl_SpotRoadInfo_o *MapCtrl_SpotRoadInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.mMapCtrl_SpotRoadInfo = MapCtrl_SpotRoadInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mMapCtrl_SpotRoadInfo,
    (System_Int32_array **)MapCtrl_SpotRoadInfo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall srcLineSprite__SetQaaColorAnim(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_23538332(this, isActive, 0.5, method);
}


void __fastcall srcLineSprite__SetQaaColorAnimQuick(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_23538332(this, isActive, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetQaaColorAnim_23538332(
        srcLineSprite_o *this,
        bool is_disp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  float v28; // s9
  EasingObject_o *v29; // x21
  System_Action_o *v30; // x22
  System_Action_o *v31; // x23
  float v32; // s0

  if ( (byte_4186B8A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, is_disp);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_B2C35C(&Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__0__, v8);
    sub_B2C35C(&Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__1__, v9);
    sub_B2C35C(&srcLineSprite___c__DisplayClass39_0_TypeInfo, v10);
    byte_4186B8A = 1;
  }
  v11 = sub_B2C42C(srcLineSprite___c__DisplayClass39_0_TypeInfo);
  srcLineSprite___c__DisplayClass39_0___ctor((srcLineSprite___c__DisplayClass39_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 24) = Component_UIWidget;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), Component_UIWidget, v22, v23, v24, v25, v26, v27);
  v28 = is_disp ? 1.0 : 0.5;
  *(float *)(v11 + 32) = v28;
  v29 = *(EasingObject_o **)(v11 + 24);
  v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v11,
    Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__0__,
    0LL);
  v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__1__,
    0LL);
  if ( !v29 )
LABEL_12:
    sub_B2C434(v12, v13);
  if ( is_disp )
    v32 = 0.5;
  else
    v32 = 1.0;
  EasingObject__Play_33149296(v29, v32, v28, time, v30, v31, 0.0, 17, 0LL);
}


void __fastcall srcLineSprite__SetQaaScaleAnim(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_23537864(this, isDisp, 0.5, method);
}


void __fastcall srcLineSprite__SetQaaScaleAnimQuick(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_23537864(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetQaaScaleAnim_23537864(
        srcLineSprite_o *this,
        bool is_disp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TweenWidth_o *v10; // x21
  UnityEngine_Transform_o *mcMyTrans; // x0
  __int64 v12; // x1
  int32_t v13; // s0
  int32_t v14; // s1
  int v15; // s2
  int v16; // s0
  int v17; // s1
  int v18; // s2
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *v33; // x0
  float x; // s8
  float y; // s9
  float *v36; // x21
  float v37; // s2
  float z; // s10
  float v39; // s0
  float v40; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4186B89 & 1) == 0 )
  {
    sub_B2C35C(&Method_UITweener_Begin_TweenPosition___, is_disp);
    sub_B2C35C(&Method_UITweener_Begin_TweenScale___, v7);
    sub_B2C35C(&StringLiteral_13065/*"StateQaaEnd"*/, v8);
    byte_4186B89 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10 = UITweener__Begin_TweenWidth_(gameObject, time, (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenScale___);
  if ( is_disp )
  {
    *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v10 )
      goto LABEL_22;
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL);
    if ( !v10 )
      goto LABEL_22;
  }
  v10->fields.from = v13;
  v10->fields.to = v14;
  *(_DWORD *)&v10->fields.updateTable = v15;
  if ( is_disp )
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL);
  else
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL);
  *((_DWORD *)&v10->fields.updateTable + 1) = v16;
  LODWORD(v10->fields.mWidget) = v17;
  HIDWORD(v10->fields.mWidget) = v18;
  v10->fields.style = 2;
  v19 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v19;
  sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.eventReceiver, v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_13065/*"StateQaaEnd"*/;
  v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_13065/*"StateQaaEnd"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.callWhenFinished, v26, v27, v28, v29, v30, v31, v32);
  if ( time != 0.0 || is_disp )
  {
    v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    mcMyTrans = (UnityEngine_Transform_o *)UITweener__Begin_TweenWidth_(
                                             v33,
                                             time,
                                             (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.mcMyTrans )
      goto LABEL_22;
    x = this->fields.mcFrom.fields.x;
    y = this->fields.mcFrom.fields.y;
    v36 = (float *)mcMyTrans;
    *(UnityEngine_Vector3_o *)(&v37 - 2) = UnityEngine_Transform__get_localPosition(this->fields.mcMyTrans, 0LL);
    z = v37;
    v39 = x;
    v40 = y;
    if ( !is_disp )
    {
      mcMyTrans = this->fields.mcMyTrans;
      if ( !mcMyTrans )
        goto LABEL_22;
      *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_localPosition(mcMyTrans, 0LL);
    }
    if ( !v36 )
LABEL_22:
      sub_B2C434(mcMyTrans, v12);
    v36[30] = v39;
    v36[31] = v40;
    v36[32] = v37;
    if ( is_disp )
    {
      mcMyTrans = this->fields.mcMyTrans;
      if ( !mcMyTrans )
        goto LABEL_22;
      localPosition = UnityEngine_Transform__get_localPosition(mcMyTrans, 0LL);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
    }
    v36[33] = x;
    v36[34] = y;
    v36[35] = z;
    *((_DWORD *)v36 + 6) = 2;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetState(
        srcLineSprite_o *this,
        int32_t state,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v12; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v13; // x0

  if ( (byte_4186B88 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_srcLineSprite__setState__, *(_QWORD *)&state);
    byte_4186B88 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_mStateEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)end_act,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v13 = (CStateManager_QAASpotStateController_IMapSpot__o *)*(p_mStateEndAct - 13);
  if ( !v13 )
    sub_B2C434(0LL, v12);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    v13,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_srcLineSprite__setState__);
}


void __fastcall srcLineSprite__Start(srcLineSprite_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall srcLineSprite__StateQaaEnd(srcLineSprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ActionExtensions__Call(this->fields.mStateEndAct, 0LL);
  srcLineSprite__SetState(this, 1, 0LL, v3);
}


void __fastcall srcLineSprite__Update(srcLineSprite_o *this, const MethodInfo *method)
{
  struct CStateManager_srcLineSprite__o *mFSM; // x0

  if ( (byte_4186B86 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_srcLineSprite__update__, method);
    byte_4186B86 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_srcLineSprite__update__);
}


void __fastcall srcLineSprite__mfSetAtlas(
        srcLineSprite_o *this,
        UIAtlas_o *cAtlasP,
        System_String_o *sSpriteName,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *v8; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v8 = (BattleServantConfConponent_o *)this;
  this->fields.mcAtlasP = cAtlasP;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mcAtlasP,
    (System_Int32_array **)cAtlasP,
    (System_String_array **)sSpriteName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v8->fields.commandCard = (struct BattleCommandComponent_o *)sSpriteName;
  v8 = (BattleServantConfConponent_o *)((char *)v8 + 112);
  sub_B2C2F8(v8, (System_Int32_array **)sSpriteName, v10, v11, v12, v13, v14, v15);
  LOBYTE(v8[-1].fields.AppendSkillTitle) = 1;
}


void __fastcall srcLineSprite__mfSetITweenSize(
        srcLineSprite_o *this,
        float fSrcW,
        float fDstW,
        float fTime,
        const MethodInfo *method)
{
  struct TweenScale_o *mcTweenScaleP; // x9
  struct TweenScale_o *v6; // x9
  struct TweenScale_o *v7; // x8
  struct TweenAlpha_o *mcTweenAlphaP; // x8
  struct TweenAlpha_o *v9; // x8
  struct TweenAlpha_o *v10; // x8

  mcTweenScaleP = this->fields.mcTweenScaleP;
  if ( !mcTweenScaleP )
    goto LABEL_8;
  mcTweenScaleP->fields.from.fields.y = fSrcW;
  mcTweenScaleP->fields.from.fields.x = 1.0;
  mcTweenScaleP->fields.from.fields.z = 1.0;
  v6 = this->fields.mcTweenScaleP;
  if ( !v6 )
    goto LABEL_8;
  v6->fields.to.fields.x = 1.0;
  v6->fields.to.fields.y = fDstW;
  v6->fields.to.fields.z = 1.0;
  v7 = this->fields.mcTweenScaleP;
  if ( !v7
    || (v7->fields.duration = fTime, (mcTweenAlphaP = this->fields.mcTweenAlphaP) == 0LL)
    || (mcTweenAlphaP->fields.from = 0.0, (v9 = this->fields.mcTweenAlphaP) == 0LL)
    || (v9->fields.to = 1.0, (v10 = this->fields.mcTweenAlphaP) == 0LL) )
  {
LABEL_8:
    sub_B2C434(this, method);
  }
  v10->fields.duration = fTime;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__mfSetPos2(
        srcLineSprite_o *this,
        UnityEngine_Vector2_o cFrom,
        UnityEngine_Vector2_o cTo,
        const MethodInfo *method)
{
  unsigned int v5; // s8
  unsigned int v6; // s9
  UnityEngine_Vector2_o v7; // x1
  int v8; // s0
  int v9; // s1
  const char *zero; // kr00_8
  float x; // s8
  float sqrMagnitude; // s9
  float v13; // s0
  float v14; // s8
  float v15; // s8
  float y; // s10
  __int64 v17; // x0
  __int64 v18; // x1
  float v19; // s0
  UnityEngine_Transform_o *mcMyTrans; // x20
  float v21; // s9
  UnityEngine_Transform_o *v22; // x20
  int v23; // s0
  float mfWidth; // s0
  double v28; // d1
  double v29; // d0
  float v30; // s0
  double v31; // d1
  bool v32; // zf
  double v33; // d0
  MethodInfo methoda; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector2_o v35; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s1.4,4:s2.4,8:s3.4

  this->fields.mcFrom = cFrom;
  this->fields.mcTo = cTo;
  *(float *)&v5 = cTo.fields.x - cFrom.fields.x;
  *(float *)&v6 = cTo.fields.y - cFrom.fields.y;
  *(float *)&methoda.methodPointer = cTo.fields.x - cFrom.fields.x;
  *((float *)&methoda.methodPointer + 1) = cTo.fields.y - cFrom.fields.y;
  zero = (const char *)UnityEngine_Vector2__get_zero(0LL);
  v9 = HIDWORD(zero);
  v8 = (int)zero;
  methoda.name = zero;
  methoda.invoker_method = (void *)__PAIR64__(v6, v5);
  if ( !byte_4186C20 )
  {
    sub_B2C35C(&System_Math_TypeInfo, v7);
    byte_4186C20 = 1;
  }
  v35.fields.x = UnityEngine_Vector2__get_sqrMagnitude(*(UnityEngine_Vector2_o *)&v8, (const MethodInfo *)&methoda.name);
  x = v35.fields.x;
  sqrMagnitude = UnityEngine_Vector2__get_sqrMagnitude(v35, (const MethodInfo *)&methoda.invoker_method);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = sqrtf(x * sqrMagnitude);
  if ( v13 >= 1.0e-15 )
  {
    v14 = UnityEngine_Mathf__Clamp(
            (float)((float)(*(float *)&methoda.name * *(float *)&methoda.invoker_method)
                  + (float)(*((float *)&methoda.name + 1) * *((float *)&methoda.invoker_method + 1)))
          / v13,
            -1.0,
            1.0,
            0LL);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    acos(v14);
  }
  v15 = this->fields.mcFrom.fields.x;
  y = this->fields.mcFrom.fields.y;
  v19 = atan2f(this->fields.mcTo.fields.y - y, this->fields.mcTo.fields.x - v15);
  mcMyTrans = this->fields.mcMyTrans;
  if ( !mcMyTrans )
    goto LABEL_19;
  v21 = v19 * 57.296;
  localPosition = UnityEngine_Transform__get_localPosition(this->fields.mcMyTrans, 0LL);
  localPosition.fields.x = v15 + (float)(*(float *)&methoda.methodPointer * 0.5);
  localPosition.fields.y = y + (float)(*((float *)&methoda.methodPointer + 1) * 0.5);
  UnityEngine_Transform__set_localPosition(mcMyTrans, localPosition, 0LL);
  v22 = this->fields.mcMyTrans;
  v37.fields.z = 1.0;
  v37.fields.x = 0.0;
  v37.fields.y = 0.0;
  *(UnityEngine_Quaternion_o *)&v23 = UnityEngine_Quaternion__AngleAxis(v21, v37, 0LL);
  if ( !v22 )
LABEL_19:
    sub_B2C434(v17, v18);
  UnityEngine_Transform__set_localRotation(v22, *(UnityEngine_Quaternion_o *)&v23, 0LL);
  mfWidth = this->fields.mfWidth;
  v28 = mfWidth;
  if ( mfWidth == INFINITY )
    v29 = -mfWidth;
  else
    v29 = mfWidth;
  this->fields.miLineH = (int)v29;
  v30 = ceilf(UnityEngine_Vector2__get_magnitude(*(UnityEngine_Vector2_o *)((char *)&v28 - 4), &methoda));
  v31 = v30;
  v32 = v30 == INFINITY;
  v33 = -v30;
  if ( !v32 )
    v33 = v31;
  this->fields.miLineW = (int)v33;
  this->fields.mtIsUpdate = 1;
}


void __fastcall srcLineSprite_StateMapMain___ctor(srcLineSprite_StateMapMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall srcLineSprite_StateMapMain__begin(
        srcLineSprite_StateMapMain_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall srcLineSprite_StateMapMain__end(
        srcLineSprite_StateMapMain_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall srcLineSprite_StateMapMain__update(
        srcLineSprite_StateMapMain_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mcLineSprite; // x20
  struct UISprite_o *v5; // x8
  UnityEngine_Object_o *mAtlas; // x20
  UnityEngine_Object_o *mcAtlasP; // x21

  if ( (byte_4185583 & 1) == 0 )
  {
    this = (srcLineSprite_StateMapMain_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    byte_4185583 = 1;
  }
  if ( !that )
    goto LABEL_20;
  if ( !that->fields.mtIsUpdate )
    return;
  mcLineSprite = (UnityEngine_Object_o *)that->fields.mcLineSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (srcLineSprite_StateMapMain_o *)UnityEngine_Object__op_Inequality(0LL, mcLineSprite, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mcLineSprite;
    if ( v5 )
    {
      mAtlas = (UnityEngine_Object_o *)v5->fields.mAtlas;
      mcAtlasP = (UnityEngine_Object_o *)that->fields.mcAtlasP;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(mAtlas, mcAtlasP, 0LL) )
        goto LABEL_18;
      this = (srcLineSprite_StateMapMain_o *)that->fields.mcLineSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, that->fields.mcAtlasP, 0LL);
        this = (srcLineSprite_StateMapMain_o *)that->fields.mcLineSprite;
        if ( this )
        {
          UISprite__set_spriteName((UISprite_o *)this, that->fields.msSpriteName, 0LL);
          this = (srcLineSprite_StateMapMain_o *)that->fields.mcLineSprite;
          if ( this )
          {
            UIWidget__SetDimensions((UIWidget_o *)this, that->fields.miLineW, that->fields.miLineH, 0LL);
            goto LABEL_18;
          }
        }
      }
    }
LABEL_20:
    sub_B2C434(this, that);
  }
LABEL_18:
  that->fields.mtIsUpdate = 0;
}


void __fastcall srcLineSprite_StateNone___ctor(srcLineSprite_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall srcLineSprite_StateNone__begin(
        srcLineSprite_StateNone_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall srcLineSprite_StateNone__end(
        srcLineSprite_StateNone_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall srcLineSprite_StateNone__update(
        srcLineSprite_StateNone_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall srcLineSprite_StateQaaDisp___ctor(srcLineSprite_StateQaaDisp_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall srcLineSprite_StateQaaDisp__begin(
        srcLineSprite_StateQaaDisp_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  int32_t dispType; // w8

  if ( !that || (mMapCtrl_SpotRoadInfo = that->fields.mMapCtrl_SpotRoadInfo) == 0LL )
    sub_B2C434(this, that);
  dispType = mMapCtrl_SpotRoadInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      srcLineSprite__SetQaaColorAnim(that, 1, 0LL);
      break;
    case 1:
      srcLineSprite__StateQaaEnd(that, 0LL);
      break;
    case 0:
      srcLineSprite__SetContrast(that, 1.0, 0LL);
      srcLineSprite__SetQaaScaleAnim(that, 1, 0LL);
      break;
  }
}


void __fastcall srcLineSprite_StateQaaDisp__end(
        srcLineSprite_StateQaaDisp_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall srcLineSprite_StateQaaDisp__update(
        srcLineSprite_StateQaaDisp_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall srcLineSprite_StateQaaGray___ctor(srcLineSprite_StateQaaGray_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall srcLineSprite_StateQaaGray__begin(
        srcLineSprite_StateQaaGray_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  int32_t dispType; // w8

  if ( !that || (mMapCtrl_SpotRoadInfo = that->fields.mMapCtrl_SpotRoadInfo) == 0LL )
    sub_B2C434(this, that);
  dispType = mMapCtrl_SpotRoadInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      srcLineSprite__StateQaaEnd(that, 0LL);
      break;
    case 1:
      srcLineSprite__SetQaaColorAnim(that, 0, 0LL);
      break;
    case 0:
      srcLineSprite__SetContrast(that, 0.5, 0LL);
      srcLineSprite__SetQaaScaleAnim(that, 1, 0LL);
      break;
  }
}


void __fastcall srcLineSprite_StateQaaGray__end(
        srcLineSprite_StateQaaGray_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall srcLineSprite_StateQaaGray__update(
        srcLineSprite_StateQaaGray_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall srcLineSprite_StateQaaHide___ctor(srcLineSprite_StateQaaHide_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall srcLineSprite_StateQaaHide__begin(
        srcLineSprite_StateQaaHide_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  int32_t dispType; // w8

  if ( !that || (mMapCtrl_SpotRoadInfo = that->fields.mMapCtrl_SpotRoadInfo) == 0LL )
    sub_B2C434(this, that);
  dispType = mMapCtrl_SpotRoadInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
      srcLineSprite__SetQaaScaleAnim(that, 0, 0LL);
  }
  else
  {
    srcLineSprite__StateQaaEnd(that, 0LL);
  }
}


void __fastcall srcLineSprite_StateQaaHide__end(
        srcLineSprite_StateQaaHide_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall srcLineSprite_StateQaaHide__update(
        srcLineSprite_StateQaaHide_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall srcLineSprite___c__DisplayClass39_0___ctor(
        srcLineSprite___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall srcLineSprite___c__DisplayClass39_0___SetQaaColorAnim_b__0(
        srcLineSprite___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8

  eo = this->fields.eo;
  if ( !eo || (this = (srcLineSprite___c__DisplayClass39_0_o *)this->fields.__4__this) == 0LL )
    sub_B2C434(this, method);
  srcLineSprite__SetContrast((srcLineSprite_o *)this, eo->fields.mStartTime, 0LL);
}


void __fastcall srcLineSprite___c__DisplayClass39_0___SetQaaColorAnim_b__1(
        srcLineSprite___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  srcLineSprite_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (srcLineSprite__SetContrast(_4__this, this->fields.to, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(_4__this, method);
  }
  srcLineSprite__StateQaaEnd(_4__this, 0LL);
}