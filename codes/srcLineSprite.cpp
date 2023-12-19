void __fastcall srcLineSprite___ctor(srcLineSprite_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40F9101 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F9101 = 1;
  }
  this->fields.mfWidth = 20.0;
  v9 = (System_Int32_array **)StringLiteral_1;
  this->fields.msSpriteName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.msSpriteName, v9, v2, v3, v4, v5, v6, v7);
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  UnityEngine_Object_o *mcLineSprite; // x20
  UnityEngine_Object_o *mcTweenAlphaP; // x20
  UnityEngine_Object_o *mcTweenScaleP; // x20
  struct CStateManager_srcLineSprite__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct CStateManager_srcLineSprite__o *mFSM; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  srcLineSprite_StateNone_o *v32; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  srcLineSprite_StateMapMain_o *v38; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  srcLineSprite_StateQaaHide_o *v44; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  srcLineSprite_StateQaaGray_o *v50; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v51; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  srcLineSprite_StateQaaDisp_o *v56; // x21
  const MethodInfo *v57; // x3

  if ( (byte_40F90FB & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_srcLineSprite___ctor__, method);
    sub_B16FFC(&Method_CStateManager_srcLineSprite__add__, v3);
    sub_B16FFC(&CStateManager_srcLineSprite__TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&srcLineSprite_StateMapMain_TypeInfo, v6);
    sub_B16FFC(&srcLineSprite_StateNone_TypeInfo, v7);
    sub_B16FFC(&srcLineSprite_StateQaaDisp_TypeInfo, v8);
    sub_B16FFC(&srcLineSprite_StateQaaGray_TypeInfo, v9);
    sub_B16FFC(&srcLineSprite_StateQaaHide_TypeInfo, v10);
    byte_40F90FB = 1;
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
    v20 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_srcLineSprite__TypeInfo,
                                                                v12,
                                                                v13,
                                                                v14,
                                                                v15);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v20,
      (QAASpotStateController_IMapSpot_o *)this,
      5,
      (const MethodInfo_2907EF0 *)Method_CStateManager_srcLineSprite___ctor__);
    this->fields.mFSM = (struct CStateManager_srcLineSprite__o *)v20;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    mFSM = this->fields.mFSM;
    v32 = (srcLineSprite_StateNone_o *)sub_B170CC(srcLineSprite_StateNone_TypeInfo, v28, v29, v30, v31);
    srcLineSprite_StateNone___ctor(v32, 0LL);
    if ( !mFSM )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v32,
      (const MethodInfo_2907FBC *)Method_CStateManager_srcLineSprite__add__);
    v33 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v38 = (srcLineSprite_StateMapMain_o *)sub_B170CC(srcLineSprite_StateMapMain_TypeInfo, v34, v35, v36, v37);
    srcLineSprite_StateMapMain___ctor(v38, 0LL);
    if ( !v33 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v33,
      1,
      (IState_T__o *)v38,
      (const MethodInfo_2907FBC *)Method_CStateManager_srcLineSprite__add__);
    v39 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v44 = (srcLineSprite_StateQaaHide_o *)sub_B170CC(srcLineSprite_StateQaaHide_TypeInfo, v40, v41, v42, v43);
    srcLineSprite_StateQaaHide___ctor(v44, 0LL);
    if ( !v39 )
      goto LABEL_26;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v39,
      2,
      (IState_T__o *)v44,
      (const MethodInfo_2907FBC *)Method_CStateManager_srcLineSprite__add__);
    v45 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v50 = (srcLineSprite_StateQaaGray_o *)sub_B170CC(srcLineSprite_StateQaaGray_TypeInfo, v46, v47, v48, v49);
    srcLineSprite_StateQaaGray___ctor(v50, 0LL);
    if ( !v45
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v45,
            3,
            (IState_T__o *)v50,
            (const MethodInfo_2907FBC *)Method_CStateManager_srcLineSprite__add__),
          v51 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v56 = (srcLineSprite_StateQaaDisp_o *)sub_B170CC(srcLineSprite_StateQaaDisp_TypeInfo, v52, v53, v54, v55),
          srcLineSprite_StateQaaDisp___ctor(v56, 0LL),
          !v51) )
    {
LABEL_26:
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v51,
      4,
      (IState_T__o *)v56,
      (const MethodInfo_2907FBC *)Method_CStateManager_srcLineSprite__add__);
    srcLineSprite__SetState(this, 1, 0LL, v57);
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
  if ( (byte_40F90FA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12942, method);
    sub_B16FFC(&StringLiteral_960, v2);
    byte_40F90FA = 1;
  }
  v3 = System_Int32__ToString_38275808((int32_t)&v5, (System_String_o *)StringLiteral_960, 0LL);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_12942, v3, 0LL);
}


MapControl_SpotRoadInfo_o *__fastcall srcLineSprite__GetMapCtrl_SpotRoadInfo(
        srcLineSprite_o *this,
        const MethodInfo *method)
{
  return this->fields.mMapCtrl_SpotRoadInfo;
}


int32_t __fastcall srcLineSprite__GetState(srcLineSprite_o *this, const MethodInfo *method)
{
  struct CStateManager_srcLineSprite__o *mFSM; // x8

  if ( (byte_40F90FD & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_srcLineSprite__getState__, method);
    byte_40F90FD = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
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
  UIWidget_o *mcLineSprite; // x0
  UnityEngine_Color_o v12; // [xsp+0h] [xbp-20h] BYREF

  v8 = 1.0;
  *(_QWORD *)&v12.fields.r = 0LL;
  UnityEngine_Color___ctor(*(UnityEngine_Color_o *)&val, v3, v4, v5, v6, (const MethodInfo *)&v12);
  mcLineSprite = (UIWidget_o *)this->fields.mcLineSprite;
  if ( !mcLineSprite )
    sub_B170D4();
  UIWidget__set_color(mcLineSprite, v12, 0LL);
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
  sub_B16F98(
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
  srcLineSprite__SetQaaColorAnim_23472856(this, isActive, 0.5, method);
}


void __fastcall srcLineSprite__SetQaaColorAnimQuick(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_23472856(this, isActive, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetQaaColorAnim_23472856(
        srcLineSprite_o *this,
        bool is_disp,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  float v32; // s9
  EasingObject_o *v33; // x21
  System_Action_o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Action_o *v39; // x23
  float v40; // s0

  if ( (byte_40F9100 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, is_disp);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_B16FFC(&Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__0__, v10);
    sub_B16FFC(&Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__1__, v11);
    sub_B16FFC(&srcLineSprite___c__DisplayClass39_0_TypeInfo, v12);
    byte_40F9100 = 1;
  }
  v13 = sub_B170CC(srcLineSprite___c__DisplayClass39_0_TypeInfo, is_disp, method, v4, v5);
  srcLineSprite___c__DisplayClass39_0___ctor((srcLineSprite___c__DisplayClass39_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_12;
  *(_QWORD *)(v13 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 24) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), Component_UIWidget, v22, v23, v24, v25, v26, v27);
  v32 = is_disp ? 1.0 : 0.5;
  *(float *)(v13 + 32) = v32;
  v33 = *(EasingObject_o **)(v13 + 24);
  v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v13,
    Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__0__,
    0LL);
  v39 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v37, v38);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v13,
    Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__1__,
    0LL);
  if ( !v33 )
LABEL_12:
    sub_B170D4();
  if ( is_disp )
    v40 = 0.5;
  else
    v40 = 1.0;
  EasingObject__Play_33167332(v33, v40, v32, time, v34, v39, 0.0, 17, 0LL);
}


void __fastcall srcLineSprite__SetQaaScaleAnim(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_23472388(this, isDisp, 0.5, method);
}


void __fastcall srcLineSprite__SetQaaScaleAnimQuick(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_23472388(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetQaaScaleAnim_23472388(
        srcLineSprite_o *this,
        bool is_disp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TweenWidth_o *v10; // x21
  int32_t v11; // s0
  int32_t v12; // s1
  int v13; // s2
  int v14; // s0
  int v15; // s1
  int v16; // s2
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *v31; // x0
  TweenWidth_o *v32; // x0
  float x; // s8
  float y; // s9
  float *v35; // x21
  float v36; // s2
  float z; // s10
  float v38; // s0
  float v39; // s1
  UnityEngine_Transform_o *mcMyTrans; // x0
  UnityEngine_Transform_o *v41; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F90FF & 1) == 0 )
  {
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, is_disp);
    sub_B16FFC(&Method_UITweener_Begin_TweenScale___, v7);
    sub_B16FFC(&StringLiteral_13009, v8);
    byte_40F90FF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10 = UITweener__Begin_TweenWidth_(gameObject, time, (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenScale___);
  if ( is_disp )
  {
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v10 )
      goto LABEL_22;
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_one(0LL);
    if ( !v10 )
      goto LABEL_22;
  }
  v10->fields.from = v11;
  v10->fields.to = v12;
  *(_DWORD *)&v10->fields.updateTable = v13;
  if ( is_disp )
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_one(0LL);
  else
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
  *((_DWORD *)&v10->fields.updateTable + 1) = v14;
  LODWORD(v10->fields.mWidget) = v15;
  HIDWORD(v10->fields.mWidget) = v16;
  v10->fields.style = 2;
  v17 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v17;
  sub_B16F98((BattleServantConfConponent_o *)&v10->fields.eventReceiver, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_13009;
  v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_13009;
  sub_B16F98((BattleServantConfConponent_o *)&v10->fields.callWhenFinished, v24, v25, v26, v27, v28, v29, v30);
  if ( time != 0.0 || is_disp )
  {
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v32 = UITweener__Begin_TweenWidth_(v31, time, (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.mcMyTrans )
      goto LABEL_22;
    x = this->fields.mcFrom.fields.x;
    y = this->fields.mcFrom.fields.y;
    v35 = (float *)v32;
    *(UnityEngine_Vector3_o *)(&v36 - 2) = UnityEngine_Transform__get_localPosition(this->fields.mcMyTrans, 0LL);
    z = v36;
    v38 = x;
    v39 = y;
    if ( !is_disp )
    {
      mcMyTrans = this->fields.mcMyTrans;
      if ( !mcMyTrans )
        goto LABEL_22;
      *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_localPosition(mcMyTrans, 0LL);
    }
    if ( !v35 )
LABEL_22:
      sub_B170D4();
    v35[30] = v38;
    v35[31] = v39;
    v35[32] = v36;
    if ( is_disp )
    {
      v41 = this->fields.mcMyTrans;
      if ( !v41 )
        goto LABEL_22;
      localPosition = UnityEngine_Transform__get_localPosition(v41, 0LL);
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      z = localPosition.fields.z;
    }
    v35[33] = x;
    v35[34] = y;
    v35[35] = z;
    *((_DWORD *)v35 + 6) = 2;
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
  CStateManager_QAASpotStateController_IMapSpot__o *v12; // x0

  if ( (byte_40F90FE & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_srcLineSprite__setState__, *(_QWORD *)&state);
    byte_40F90FE = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_mStateEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)end_act,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v12 = (CStateManager_QAASpotStateController_IMapSpot__o *)*(p_mStateEndAct - 13);
  if ( !v12 )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    v12,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_srcLineSprite__setState__);
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

  if ( (byte_40F90FC & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_srcLineSprite__update__, method);
    byte_40F90FC = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_srcLineSprite__update__);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mcAtlasP,
    (System_Int32_array **)cAtlasP,
    (System_String_array **)sSpriteName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v8->fields.maxNp = (struct UILabel_o *)sSpriteName;
  v8 = (BattleServantConfConponent_o *)((char *)v8 + 112);
  sub_B16F98(v8, (System_Int32_array **)sSpriteName, v10, v11, v12, v13, v14, v15);
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
    sub_B170D4();
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
  float v17; // s0
  UnityEngine_Transform_o *mcMyTrans; // x20
  float v19; // s9
  UnityEngine_Transform_o *v20; // x20
  int v21; // s0
  float mfWidth; // s0
  double v26; // d1
  double v27; // d0
  float v28; // s0
  double v29; // d1
  bool v30; // zf
  double v31; // d0
  MethodInfo methoda; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector2_o v33; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s1.4,4:s2.4,8:s3.4

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
  if ( !byte_40F9197 )
  {
    sub_B16FFC(&System_Math_TypeInfo, v7);
    byte_40F9197 = 1;
  }
  v33.fields.x = UnityEngine_Vector2__get_sqrMagnitude(*(UnityEngine_Vector2_o *)&v8, (const MethodInfo *)&methoda.name);
  x = v33.fields.x;
  sqrMagnitude = UnityEngine_Vector2__get_sqrMagnitude(v33, (const MethodInfo *)&methoda.invoker_method);
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
  v17 = atan2f(this->fields.mcTo.fields.y - y, this->fields.mcTo.fields.x - v15);
  mcMyTrans = this->fields.mcMyTrans;
  if ( !mcMyTrans )
    goto LABEL_19;
  v19 = v17 * 57.296;
  localPosition = UnityEngine_Transform__get_localPosition(this->fields.mcMyTrans, 0LL);
  localPosition.fields.x = v15 + (float)(*(float *)&methoda.methodPointer * 0.5);
  localPosition.fields.y = y + (float)(*((float *)&methoda.methodPointer + 1) * 0.5);
  UnityEngine_Transform__set_localPosition(mcMyTrans, localPosition, 0LL);
  v20 = this->fields.mcMyTrans;
  v35.fields.z = 1.0;
  v35.fields.x = 0.0;
  v35.fields.y = 0.0;
  *(UnityEngine_Quaternion_o *)&v21 = UnityEngine_Quaternion__AngleAxis(v19, v35, 0LL);
  if ( !v20 )
LABEL_19:
    sub_B170D4();
  UnityEngine_Transform__set_localRotation(v20, *(UnityEngine_Quaternion_o *)&v21, 0LL);
  mfWidth = this->fields.mfWidth;
  v26 = mfWidth;
  if ( mfWidth == INFINITY )
    v27 = -mfWidth;
  else
    v27 = mfWidth;
  this->fields.miLineH = (int)v27;
  v28 = ceilf(UnityEngine_Vector2__get_magnitude(*(UnityEngine_Vector2_o *)((char *)&v26 - 4), &methoda));
  v29 = v28;
  v30 = v28 == INFINITY;
  v31 = -v28;
  if ( !v30 )
    v31 = v29;
  this->fields.miLineW = (int)v31;
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
  UISprite_o *v8; // x0
  UISprite_o *v9; // x0
  UIWidget_o *v10; // x0

  if ( (byte_40F78BD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    byte_40F78BD = 1;
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
  if ( UnityEngine_Object__op_Inequality(0LL, mcLineSprite, 0LL) )
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
      v8 = that->fields.mcLineSprite;
      if ( v8 )
      {
        UISprite__set_atlas(v8, that->fields.mcAtlasP, 0LL);
        v9 = that->fields.mcLineSprite;
        if ( v9 )
        {
          UISprite__set_spriteName(v9, that->fields.msSpriteName, 0LL);
          v10 = (UIWidget_o *)that->fields.mcLineSprite;
          if ( v10 )
          {
            UIWidget__SetDimensions(v10, that->fields.miLineW, that->fields.miLineH, 0LL);
            goto LABEL_18;
          }
        }
      }
    }
LABEL_20:
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  srcLineSprite_o *_4__this; // x0

  eo = this->fields.eo;
  if ( !eo || (_4__this = this->fields.__4__this) == 0LL )
    sub_B170D4();
  srcLineSprite__SetContrast(_4__this, eo->fields.mStartTime, 0LL);
}


void __fastcall srcLineSprite___c__DisplayClass39_0___SetQaaColorAnim_b__1(
        srcLineSprite___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  srcLineSprite_o *_4__this; // x0
  srcLineSprite_o *v4; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (srcLineSprite__SetContrast(_4__this, this->fields.to, 0LL), (v4 = this->fields.__4__this) == 0LL) )
    sub_B170D4();
  srcLineSprite__StateQaaEnd(v4, 0LL);
}