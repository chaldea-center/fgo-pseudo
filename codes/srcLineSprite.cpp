void __fastcall srcLineSprite___ctor(srcLineSprite_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42E74F7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E74F7 = 1;
  }
  this->fields.mfWidth = 20.0;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.msSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.msSpriteName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall srcLineSprite__Awake(srcLineSprite_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *mcMyTrans; // x20
  UnityEngine_Object_o *mcLineSprite; // x20
  UnityEngine_Object_o *mcTweenAlphaP; // x20
  UnityEngine_Object_o *mcTweenScaleP; // x20
  struct CStateManager_srcLineSprite__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct CStateManager_srcLineSprite__o *mFSM; // x21
  srcLineSprite_StateNone_o *v42; // x22
  __int64 v43; // x0
  __int64 v44; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v45; // x21
  srcLineSprite_StateMapMain_o *v46; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v47; // x21
  srcLineSprite_StateQaaHide_o *v48; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v49; // x21
  srcLineSprite_StateQaaGray_o *v50; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v51; // x20
  srcLineSprite_StateQaaDisp_o *v52; // x21
  const MethodInfo *v53; // x3

  if ( (byte_42E74F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_srcLineSprite___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_srcLineSprite__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_srcLineSprite__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&srcLineSprite_StateMapMain_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&srcLineSprite_StateNone_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&srcLineSprite_StateQaaDisp_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&srcLineSprite_StateQaaGray_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&srcLineSprite_StateQaaHide_TypeInfo, v26, v27, v28);
    byte_42E74F1 = 1;
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
    v34 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_srcLineSprite__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v34,
      (QAASpotStateController_IMapSpot_o *)this,
      5,
      (const MethodInfo_2BB2630 *)Method_CStateManager_srcLineSprite___ctor__);
    this->fields.mFSM = (struct CStateManager_srcLineSprite__o *)v34;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    mFSM = this->fields.mFSM;
    v42 = (srcLineSprite_StateNone_o *)sub_B5D694(srcLineSprite_StateNone_TypeInfo);
    srcLineSprite_StateNone___ctor(v42, 0LL);
    if ( !mFSM )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v42,
      (const MethodInfo_2BB26FC *)Method_CStateManager_srcLineSprite__add__);
    v45 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v46 = (srcLineSprite_StateMapMain_o *)sub_B5D694(srcLineSprite_StateMapMain_TypeInfo);
    srcLineSprite_StateMapMain___ctor(v46, 0LL);
    if ( !v45 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v45,
      1,
      (IState_T__o *)v46,
      (const MethodInfo_2BB26FC *)Method_CStateManager_srcLineSprite__add__);
    v47 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v48 = (srcLineSprite_StateQaaHide_o *)sub_B5D694(srcLineSprite_StateQaaHide_TypeInfo);
    srcLineSprite_StateQaaHide___ctor(v48, 0LL);
    if ( !v47 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v47,
      2,
      (IState_T__o *)v48,
      (const MethodInfo_2BB26FC *)Method_CStateManager_srcLineSprite__add__);
    v49 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v50 = (srcLineSprite_StateQaaGray_o *)sub_B5D694(srcLineSprite_StateQaaGray_TypeInfo);
    srcLineSprite_StateQaaGray___ctor(v50, 0LL);
    if ( !v49
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v49,
            3,
            (IState_T__o *)v50,
            (const MethodInfo_2BB26FC *)Method_CStateManager_srcLineSprite__add__),
          v51 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v52 = (srcLineSprite_StateQaaDisp_o *)sub_B5D694(srcLineSprite_StateQaaDisp_TypeInfo),
          srcLineSprite_StateQaaDisp___ctor(v52, 0LL),
          !v51) )
    {
LABEL_26:
      sub_B5D69C(v43, v44);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v51,
      4,
      (IState_T__o *)v52,
      (const MethodInfo_2BB26FC *)Method_CStateManager_srcLineSprite__add__);
    srcLineSprite__SetState(this, 1, 0LL, v53);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-4h] BYREF

  v9 = id;
  if ( (byte_42E74F0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13154/*"Spot_Line_"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_982/*"00"*/, v4, v5, v6);
    byte_42E74F0 = 1;
  }
  v7 = System_Int32__ToString_39741776((int32_t)&v9, (System_String_o *)StringLiteral_982/*"00"*/, 0LL);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_13154/*"Spot_Line_"*/, v7, 0LL);
}


MapControl_SpotRoadInfo_o *__fastcall srcLineSprite__GetMapCtrl_SpotRoadInfo(
        srcLineSprite_o *this,
        const MethodInfo *method)
{
  return this->fields.mMapCtrl_SpotRoadInfo;
}


int32_t __fastcall srcLineSprite__GetState(srcLineSprite_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  srcLineSprite_o *v4; // x19
  struct CStateManager_srcLineSprite__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E74F3 & 1) == 0 )
  {
    this = (srcLineSprite_o *)sub_B5D5C4(&Method_CStateManager_srcLineSprite__getState__, (_DWORD)method, v2, v3);
    byte_42E74F3 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, v11);
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
  sub_B5D560(
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
  srcLineSprite__SetQaaColorAnim_22883644(this, isActive, 0.5, method);
}


void __fastcall srcLineSprite__SetQaaColorAnimQuick(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_22883644(this, isActive, 0.0, method);
}


void __fastcall srcLineSprite__SetQaaColorAnim_22883644(
        srcLineSprite_o *this,
        bool is_disp,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  float v37; // s9
  EasingObject_o *v38; // x21
  System_Action_o *v39; // x22
  System_Action_o *v40; // x23
  float v41; // s0

  if ( (byte_42E74F6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, is_disp, (_DWORD)method, v4);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8, v9, v10);
    sub_B5D5C4(&Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__0__, v11, v12, v13);
    sub_B5D5C4(&Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__1__, v14, v15, v16);
    sub_B5D5C4(&srcLineSprite___c__DisplayClass39_0_TypeInfo, v17, v18, v19);
    byte_42E74F6 = 1;
  }
  v20 = sub_B5D694(srcLineSprite___c__DisplayClass39_0_TypeInfo);
  srcLineSprite___c__DisplayClass39_0___ctor((srcLineSprite___c__DisplayClass39_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_12;
  *(_QWORD *)(v20 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v20 + 24) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 24), Component_UIWidget, v31, v32, v33, v34, v35, v36);
  v37 = is_disp ? 1.0 : 0.5;
  *(float *)(v20 + 32) = v37;
  v38 = *(EasingObject_o **)(v20 + 24);
  v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v20,
    Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__0__,
    0LL);
  v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v20,
    Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__1__,
    0LL);
  if ( !v38 )
LABEL_12:
    sub_B5D69C(v21, v22);
  if ( is_disp )
    v41 = 0.5;
  else
    v41 = 1.0;
  EasingObject__Play_33961128(v38, v41, v37, time, v39, v40, 0.0, 17, 0LL);
}


void __fastcall srcLineSprite__SetQaaScaleAnim(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_22883176(this, isDisp, 0.5, method);
}


void __fastcall srcLineSprite__SetQaaScaleAnimQuick(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_22883176(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetQaaScaleAnim_22883176(
        srcLineSprite_o *this,
        bool is_disp,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  TweenWidth_o *v15; // x21
  UnityEngine_Transform_o *mcMyTrans; // x0
  __int64 v17; // x1
  int32_t v18; // s0
  int32_t v19; // s1
  int v20; // s2
  int v21; // s0
  int v22; // s1
  int v23; // s2
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_GameObject_o *v38; // x0
  float x; // s8
  float y; // s9
  float *v41; // x21
  float v42; // s2
  float z; // s10
  float v44; // s0
  float v45; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E74F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, is_disp, (_DWORD)method, v4);
    sub_B5D5C4(&Method_UITweener_Begin_TweenScale___, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_13221/*"StateQaaEnd"*/, v11, v12, v13);
    byte_42E74F5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = UITweener__Begin_TweenWidth_(gameObject, time, (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenScale___);
  if ( is_disp )
  {
    *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v15 )
      goto LABEL_22;
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL);
    if ( !v15 )
      goto LABEL_22;
  }
  v15->fields.from = v18;
  v15->fields.to = v19;
  *(_DWORD *)&v15->fields.updateTable = v20;
  if ( is_disp )
    *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL);
  else
    *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_zero(0LL);
  *((_DWORD *)&v15->fields.updateTable + 1) = v21;
  LODWORD(v15->fields.mWidget) = v22;
  HIDWORD(v15->fields.mWidget) = v23;
  v15->fields.style = 2;
  v24 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v24;
  sub_B5D560((BattleServantConfConponent_o *)&v15->fields.eventReceiver, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_13221/*"StateQaaEnd"*/;
  v15->fields.callWhenFinished = (struct System_String_o *)StringLiteral_13221/*"StateQaaEnd"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v15->fields.callWhenFinished, v31, v32, v33, v34, v35, v36, v37);
  if ( time != 0.0 || is_disp )
  {
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    mcMyTrans = (UnityEngine_Transform_o *)UITweener__Begin_TweenWidth_(
                                             v38,
                                             time,
                                             (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.mcMyTrans )
      goto LABEL_22;
    x = this->fields.mcFrom.fields.x;
    y = this->fields.mcFrom.fields.y;
    v41 = (float *)mcMyTrans;
    *(UnityEngine_Vector3_o *)(&v42 - 2) = UnityEngine_Transform__get_localPosition(this->fields.mcMyTrans, 0LL);
    z = v42;
    v44 = x;
    v45 = y;
    if ( !is_disp )
    {
      mcMyTrans = this->fields.mcMyTrans;
      if ( !mcMyTrans )
        goto LABEL_22;
      *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Transform__get_localPosition(mcMyTrans, 0LL);
    }
    if ( !v41 )
LABEL_22:
      sub_B5D69C(mcMyTrans, v17);
    v41[30] = v44;
    v41[31] = v45;
    v41[32] = v42;
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
    v41[33] = x;
    v41[34] = y;
    v41[35] = z;
    *((_DWORD *)v41 + 6) = 2;
  }
}


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

  if ( (byte_42E74F4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_srcLineSprite__setState__, state, (_DWORD)end_act, method);
    byte_42E74F4 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_B5D560(
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
    sub_B5D69C(0LL, v12);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    v13,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_srcLineSprite__setState__);
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
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_srcLineSprite__o *mFSM; // x0

  if ( (byte_42E74F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_srcLineSprite__update__, (_DWORD)method, v2, v3);
    byte_42E74F2 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_srcLineSprite__update__);
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
  sub_B5D560(
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
  sub_B5D560(v8, (System_Int32_array **)sSpriteName, v10, v11, v12, v13, v14, v15);
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
    sub_B5D69C(this, method);
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
  int v7; // w1
  int v8; // w2
  UnityEngine_Vector2_o v9; // x3
  int v10; // s0
  int v11; // s1
  const char *zero; // kr00_8
  float x; // s8
  float sqrMagnitude; // s9
  float v15; // s0
  float v16; // s8
  float v17; // s8
  float y; // s10
  __int64 v19; // x0
  __int64 v20; // x1
  float v21; // s0
  UnityEngine_Transform_o *mcMyTrans; // x20
  float v23; // s9
  UnityEngine_Transform_o *v24; // x20
  int v25; // s0
  float mfWidth; // s0
  double v30; // d1
  double v31; // d0
  float v32; // s0
  double v33; // d1
  bool v34; // zf
  double v35; // d0
  MethodInfo methoda; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector2_o v37; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s1.4,4:s2.4,8:s3.4

  this->fields.mcFrom = cFrom;
  this->fields.mcTo = cTo;
  *(float *)&v5 = cTo.fields.x - cFrom.fields.x;
  *(float *)&v6 = cTo.fields.y - cFrom.fields.y;
  *(float *)&methoda.methodPointer = cTo.fields.x - cFrom.fields.x;
  *((float *)&methoda.methodPointer + 1) = cTo.fields.y - cFrom.fields.y;
  zero = (const char *)UnityEngine_Vector2__get_zero(0LL);
  v11 = HIDWORD(zero);
  v10 = (int)zero;
  methoda.name = zero;
  methoda.invoker_method = (void *)__PAIR64__(v6, v5);
  if ( !byte_42E7592 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, v7, v8, v9);
    byte_42E7592 = 1;
  }
  v37.fields.x = UnityEngine_Vector2__get_sqrMagnitude(
                   *(UnityEngine_Vector2_o *)&v10,
                   (const MethodInfo *)&methoda.name);
  x = v37.fields.x;
  sqrMagnitude = UnityEngine_Vector2__get_sqrMagnitude(v37, (const MethodInfo *)&methoda.invoker_method);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v15 = sqrtf(x * sqrMagnitude);
  if ( v15 >= 1.0e-15 )
  {
    v16 = UnityEngine_Mathf__Clamp(
            (float)((float)(*(float *)&methoda.name * *(float *)&methoda.invoker_method)
                  + (float)(*((float *)&methoda.name + 1) * *((float *)&methoda.invoker_method + 1)))
          / v15,
            -1.0,
            1.0,
            0LL);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    acos(v16);
  }
  v17 = this->fields.mcFrom.fields.x;
  y = this->fields.mcFrom.fields.y;
  v21 = atan2f(this->fields.mcTo.fields.y - y, this->fields.mcTo.fields.x - v17);
  mcMyTrans = this->fields.mcMyTrans;
  if ( !mcMyTrans )
    goto LABEL_19;
  v23 = v21 * 57.296;
  localPosition = UnityEngine_Transform__get_localPosition(this->fields.mcMyTrans, 0LL);
  localPosition.fields.x = v17 + (float)(*(float *)&methoda.methodPointer * 0.5);
  localPosition.fields.y = y + (float)(*((float *)&methoda.methodPointer + 1) * 0.5);
  UnityEngine_Transform__set_localPosition(mcMyTrans, localPosition, 0LL);
  v24 = this->fields.mcMyTrans;
  v39.fields.z = 1.0;
  v39.fields.x = 0.0;
  v39.fields.y = 0.0;
  *(UnityEngine_Quaternion_o *)&v25 = UnityEngine_Quaternion__AngleAxis(v23, v39, 0LL);
  if ( !v24 )
LABEL_19:
    sub_B5D69C(v19, v20);
  UnityEngine_Transform__set_localRotation(v24, *(UnityEngine_Quaternion_o *)&v25, 0LL);
  mfWidth = this->fields.mfWidth;
  v30 = mfWidth;
  if ( mfWidth == INFINITY )
    v31 = -mfWidth;
  else
    v31 = mfWidth;
  this->fields.miLineH = (int)v31;
  v32 = ceilf(UnityEngine_Vector2__get_magnitude(*(UnityEngine_Vector2_o *)((char *)&v30 - 4), &methoda));
  v33 = v32;
  v34 = v32 == INFINITY;
  v35 = -v32;
  if ( !v34 )
    v35 = v33;
  this->fields.miLineW = (int)v35;
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
  __int64 v3; // x3
  UnityEngine_Object_o *mcLineSprite; // x20
  struct UISprite_o *v6; // x8
  UnityEngine_Object_o *mAtlas; // x20
  UnityEngine_Object_o *mcAtlasP; // x21

  if ( (byte_42E6022 & 1) == 0 )
  {
    this = (srcLineSprite_StateMapMain_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    byte_42E6022 = 1;
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
    v6 = that->fields.mcLineSprite;
    if ( v6 )
    {
      mAtlas = (UnityEngine_Object_o *)v6->fields.mAtlas;
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
    sub_B5D69C(this, that);
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
    sub_B5D69C(this, that);
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
    sub_B5D69C(this, that);
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
    sub_B5D69C(this, that);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(_4__this, method);
  }
  srcLineSprite__StateQaaEnd(_4__this, 0LL);
}