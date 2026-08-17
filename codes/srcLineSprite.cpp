void srcLineSprite___ctor(srcLineSprite_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1

  if ( (byte_596D94D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D94D = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.mfWidth = 20.0;
  this->fields.msSpriteName = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.msSpriteName, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  this->fields.mQaaAnimTime = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void srcLineSprite__Awake(srcLineSprite_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mcMyTrans; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *mcLineSprite; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *mcTweenAlphaP; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *mcTweenScaleP; // x20
  struct CStateManager_srcLineSprite__o **p_mFSM; // x20
  CStateManager_T__o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v23; // x22
  __int64 v24; // x0
  __int64 v25; // x1
  CStateManager_T__o *v26; // x21
  Il2CppObject *v27; // x22
  CStateManager_T__o *v28; // x21
  Il2CppObject *v29; // x22
  CStateManager_T__o *v30; // x21
  Il2CppObject *v31; // x22
  CStateManager_T__o *v32; // x21
  Il2CppObject *v33; // x22
  CStateManager_T__o *v34; // x21
  Il2CppObject *v35; // x22
  CStateManager_T__o *v36; // x21
  Il2CppObject *v37; // x22
  CStateManager_T__o *v38; // x20
  Il2CppObject *v39; // x21
  const MethodInfo *v40; // x3

  if ( (byte_596D946 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_srcLineSprite___ctor__);
    sub_2213A60(&Method_CStateManager_srcLineSprite__add__);
    sub_2213A60(&CStateManager_srcLineSprite__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&srcLineSprite_StateMapMain_TypeInfo);
    sub_2213A60(&srcLineSprite_StateNone_TypeInfo);
    sub_2213A60(&srcLineSprite_StateQaaDispFade_TypeInfo);
    sub_2213A60(&srcLineSprite_StateQaaDisp_TypeInfo);
    sub_2213A60(&srcLineSprite_StateQaaGrayFade_TypeInfo);
    sub_2213A60(&srcLineSprite_StateQaaGray_TypeInfo);
    sub_2213A60(&srcLineSprite_StateQaaHideFade_TypeInfo);
    sub_2213A60(&srcLineSprite_StateQaaHide_TypeInfo);
    byte_596D946 = 1;
  }
  mcMyTrans = (UnityEngine_Object_o *)this->fields.mcMyTrans;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(0, mcMyTrans, 0) )
  {
    mcLineSprite = (UnityEngine_Object_o *)this->fields.mcLineSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( !UnityEngine_Object__op_Equality(0, mcLineSprite, 0) )
    {
      mcTweenAlphaP = (UnityEngine_Object_o *)this->fields.mcTweenAlphaP;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( !UnityEngine_Object__op_Equality(0, mcTweenAlphaP, 0) )
      {
        mcTweenScaleP = (UnityEngine_Object_o *)this->fields.mcTweenScaleP;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
        UnityEngine_Object__op_Equality(0, mcTweenScaleP, 0);
      }
    }
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v15 = (CStateManager_T__o *)sub_2213CCC(CStateManager_srcLineSprite__TypeInfo);
    CStateManager_object____ctor(
      v15,
      (Il2CppObject *)this,
      8,
      (const MethodInfo_3E83D54 *)Method_CStateManager_srcLineSprite___ctor__);
    this->fields.mFSM = (struct CStateManager_srcLineSprite__o *)v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v15, v16, v17, v18, v19, v20, v21);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v23 = (Il2CppObject *)sub_2213CCC(srcLineSprite_StateNone_TypeInfo);
    System_Object___ctor(v23, 0);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v23,
      (const MethodInfo_3E83E04 *)Method_CStateManager_srcLineSprite__add__);
    v26 = (CStateManager_T__o *)*p_mFSM;
    v27 = (Il2CppObject *)sub_2213CCC(srcLineSprite_StateMapMain_TypeInfo);
    System_Object___ctor(v27, 0);
    if ( !v26 )
      goto LABEL_25;
    CStateManager_object___add(
      v26,
      1,
      (IState_T__o *)v27,
      (const MethodInfo_3E83E04 *)Method_CStateManager_srcLineSprite__add__);
    v28 = (CStateManager_T__o *)*p_mFSM;
    v29 = (Il2CppObject *)sub_2213CCC(srcLineSprite_StateQaaHide_TypeInfo);
    System_Object___ctor(v29, 0);
    if ( !v28 )
      goto LABEL_25;
    CStateManager_object___add(
      v28,
      2,
      (IState_T__o *)v29,
      (const MethodInfo_3E83E04 *)Method_CStateManager_srcLineSprite__add__);
    v30 = (CStateManager_T__o *)*p_mFSM;
    v31 = (Il2CppObject *)sub_2213CCC(srcLineSprite_StateQaaGray_TypeInfo);
    System_Object___ctor(v31, 0);
    if ( !v30 )
      goto LABEL_25;
    CStateManager_object___add(
      v30,
      3,
      (IState_T__o *)v31,
      (const MethodInfo_3E83E04 *)Method_CStateManager_srcLineSprite__add__);
    v32 = (CStateManager_T__o *)*p_mFSM;
    v33 = (Il2CppObject *)sub_2213CCC(srcLineSprite_StateQaaDisp_TypeInfo);
    System_Object___ctor(v33, 0);
    if ( !v32 )
      goto LABEL_25;
    CStateManager_object___add(
      v32,
      4,
      (IState_T__o *)v33,
      (const MethodInfo_3E83E04 *)Method_CStateManager_srcLineSprite__add__);
    v34 = (CStateManager_T__o *)*p_mFSM;
    v35 = (Il2CppObject *)sub_2213CCC(srcLineSprite_StateQaaHideFade_TypeInfo);
    System_Object___ctor(v35, 0);
    if ( !v34 )
      goto LABEL_25;
    CStateManager_object___add(
      v34,
      5,
      (IState_T__o *)v35,
      (const MethodInfo_3E83E04 *)Method_CStateManager_srcLineSprite__add__);
    v36 = (CStateManager_T__o *)*p_mFSM;
    v37 = (Il2CppObject *)sub_2213CCC(srcLineSprite_StateQaaGrayFade_TypeInfo);
    System_Object___ctor(v37, 0);
    if ( !v36
      || (CStateManager_object___add(
            v36,
            6,
            (IState_T__o *)v37,
            (const MethodInfo_3E83E04 *)Method_CStateManager_srcLineSprite__add__),
          v38 = (CStateManager_T__o *)*p_mFSM,
          v39 = (Il2CppObject *)sub_2213CCC(srcLineSprite_StateQaaDispFade_TypeInfo),
          System_Object___ctor(v39, 0),
          !v38) )
    {
LABEL_25:
      sub_2213CDC(v24, v25);
    }
    CStateManager_object___add(
      v38,
      7,
      (IState_T__o *)v39,
      (const MethodInfo_3E83E04 *)Method_CStateManager_srcLineSprite__add__);
    srcLineSprite__SetState(this, 1, 0, -1.0, v40);
  }
}


float srcLineSprite__GetAim(
        srcLineSprite_o *this,
        UnityEngine_Vector2_o p1,
        UnityEngine_Vector2_o p2,
        const MethodInfo *method)
{
  return atan2f(p2.fields.y - p1.fields.y, p2.fields.x - p1.fields.x) * 57.296;
}


System_String_o *srcLineSprite__GetGobjName(int32_t id, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = id;
  if ( (byte_596D945 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13553/*"Spot_Line_"*/);
    sub_2213A60(&StringLiteral_1205/*"00"*/);
    byte_596D945 = 1;
  }
  v2 = System_Int32__ToString_77138656((int32_t)&v4, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
  return System_String__Concat_75651716((System_String_o *)StringLiteral_13553/*"Spot_Line_"*/, v2, 0);
}


MapControl_SpotRoadInfo_o *srcLineSprite__GetMapCtrl_SpotRoadInfo(srcLineSprite_o *this, const MethodInfo *method)
{
  return this->fields.mMapCtrl_SpotRoadInfo;
}


int32_t srcLineSprite__GetState(srcLineSprite_o *this, const MethodInfo *method)
{
  srcLineSprite_o *v2; // x19
  struct CStateManager_srcLineSprite__o *mFSM; // x8

  v2 = this;
  if ( (byte_596D948 & 1) == 0 )
  {
    this = (srcLineSprite_o *)sub_2213A60(&Method_CStateManager_srcLineSprite__getState__);
    byte_596D948 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(this, method);
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
void srcLineSprite__SetContrast(srcLineSprite_o *this, float val, float alpha, const MethodInfo *method)
{
  UIWidget_o *mcLineSprite; // x0

  mcLineSprite = (UIWidget_o *)this->fields.mcLineSprite;
  if ( !mcLineSprite )
    sub_2213CDC(0, method);
  UIWidget__set_color(mcLineSprite, *(UnityEngine_Color_o *)&val, 0);
}


void srcLineSprite__SetMapCtrl_SpotRoadInfo(
        srcLineSprite_o *this,
        MapControl_SpotRoadInfo_o *MapCtrl_SpotRoadInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mMapCtrl_SpotRoadInfo = MapCtrl_SpotRoadInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mMapCtrl_SpotRoadInfo,
    (int32_t)MapCtrl_SpotRoadInfo,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void srcLineSprite__SetQaaColorAnim(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_44088152(this, isActive, 0.5, method);
}


void srcLineSprite__SetQaaColorAnimQuick(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_44088152(this, isActive, 0.0, method);
}


void srcLineSprite__SetQaaColorAnim_44088152(srcLineSprite_o *this, bool is_disp, float time, const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Action_c *v24; // x0
  EasingObject_o *v25; // x21
  float v26; // s9
  System_Action_o *v27; // x22
  System_Action_o *v28; // x23
  float v29; // s0

  if ( (byte_596D94B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_srcLineSprite___c__DisplayClass40_0__SetQaaColorAnim_b__0__);
    sub_2213A60(&Method_srcLineSprite___c__DisplayClass40_0__SetQaaColorAnim_b__1__);
    sub_2213A60(&srcLineSprite___c__DisplayClass40_0_TypeInfo);
    byte_596D94B = 1;
  }
  v7 = sub_2213CCC(srcLineSprite___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 24) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)Component_object, v18, v19, v20, v21, v22, v23);
  v24 = System_Action_TypeInfo;
  v25 = *(EasingObject_o **)(v7 + 24);
  v26 = is_disp ? 1.0 : 0.5;
  *(float *)(v7 + 32) = v26;
  v27 = (System_Action_o *)sub_2213CCC(v24);
  System_Action___ctor(v27, (Il2CppObject *)v7, Method_srcLineSprite___c__DisplayClass40_0__SetQaaColorAnim_b__0__, 0);
  v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)v7, Method_srcLineSprite___c__DisplayClass40_0__SetQaaColorAnim_b__1__, 0);
  if ( !v25 )
LABEL_12:
    sub_2213CDC(v8, v9);
  if ( is_disp )
    v29 = 0.5;
  else
    v29 = 1.0;
  EasingObject__Play_56121168(v25, v29, v26, time, v27, v28, 0.0, 17, 0);
}


void srcLineSprite__SetQaaFadeAnim(srcLineSprite_o *this, bool isDisp, float time, const MethodInfo *method)
{
  __int64 v7; // x20
  int8x8_t *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  int8x8_t *v17; // x21
  unsigned int v18; // w8
  UnityEngine_GameObject_o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  unsigned __int64 v33; // x22
  int32_t v34; // w2
  int v35; // w8
  EventDelegate_Callback_o *v36; // x23
  EventDelegate_o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  float x; // s8
  float y; // s10
  float v42; // s9
  float v43; // s11
  UnityEngine_GameObject_o *v44; // x20
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D94C & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_2213A60(&Method_srcLineSprite___c__DisplayClass41_0__SetQaaFadeAnim_b__0__);
    sub_2213A60(&srcLineSprite___c__DisplayClass41_0_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenAlpha___);
    sub_2213A60(&StringLiteral_13623/*"StateQaaEnd"*/);
    byte_596D94C = 1;
  }
  v7 = sub_2213CCC(srcLineSprite___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  *(_BYTE *)(v7 + 16) = isDisp;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = (int8x8_t *)UITweener__Begin_object_(
                     gameObject,
                     time,
                     (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v8 )
    goto LABEL_14;
  v17 = v8;
  v18 = *(_BYTE *)(v7 + 16) == 0;
  v8[4].n64_u32[0] = 2;
  v8[16].n64_u64[0] = vbsl_s8(
                        vcltz_s32(vshl_n_s32(vdup_n_s32(v18), 0x1Fu)),
                        (int8x8_t)1065353216LL,
                        (int8x8_t)0x3F80000000000000LL).n64_u64[0];
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v17[10].n64_u64[0] = (unsigned __int64)v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17[10], (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_13623/*"StateQaaEnd"*/;
  v17[11].n64_u64[0] = StringLiteral_13623/*"StateQaaEnd"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17[11], v26, v27, v28, v29, v30, v31, v32);
  v33 = v17[9].n64_u64[0];
  if ( !v33 )
    goto LABEL_14;
  v34 = *(_DWORD *)(v33 + 24);
  v35 = *(_DWORD *)(v33 + 28) + 1;
  *(_DWORD *)(v33 + 24) = 0;
  *(_DWORD *)(v33 + 28) = v35;
  if ( v34 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v33 + 16), 0, v34, 0);
    v33 = v17[9].n64_u64[0];
  }
  v36 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v36,
    (Il2CppObject *)v7,
    Method_srcLineSprite___c__DisplayClass41_0__SetQaaFadeAnim_b__0__,
    0);
  v37 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56337280(v37, v36, 0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v38, v39);
  EventDelegate__Add_56342192((System_Collections_Generic_List_EventDelegate__o *)v33, v37, 0);
  if ( *(_BYTE *)(v7 + 16) )
  {
    x = this->fields.mcFrom.fields.x;
    y = this->fields.mcFrom.fields.y;
    v42 = this->fields.mcTo.fields.x;
    v43 = this->fields.mcTo.fields.y;
    v8 = (int8x8_t *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( this->fields.mcMyTrans )
    {
      v44 = (UnityEngine_GameObject_o *)v8;
      localPosition = UnityEngine_Transform__get_localPosition(this->fields.mcMyTrans, 0);
      GameObjectExtensions__SetLocalPosition_42891620(
        v44,
        (float)(x + v42) * 0.5,
        (float)(y + v43) * 0.5,
        localPosition.fields.z,
        0);
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__ResetLocalScale(v45, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v8, v9);
  }
}


void srcLineSprite__SetQaaScaleAnim(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_44087500(this, isDisp, 0.5, method);
}


void srcLineSprite__SetQaaScaleAnimQuick(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_44087500(this, isDisp, 0.0, method);
}


void srcLineSprite__SetQaaScaleAnim_44087500(srcLineSprite_o *this, bool is_disp, float time, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *mcMyTrans; // x0
  __int64 v9; // x1
  UnityEngine_Transform_o *v10; // x21
  int v11; // w10
  UnityEngine_Vector3_c *v12; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v15; // x10
  _DWORD *p_x; // x8
  int *p_y; // x9
  int *p_z; // x10
  int v19; // w10
  UnityEngine_Vector3_c *v20; // x8
  struct UnityEngine_Vector3_StaticFields *v21; // x9
  float v22; // s1
  int v23; // s1
  int v24; // s2
  UnityEngine_GameObject_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  UnityEngine_GameObject_o *v39; // x0
  float x; // s8
  float y; // s9
  UnityEngine_Transform_o *v42; // x21
  float v43; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D94A & 1) == 0 )
  {
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    sub_2213A60(&Method_UITweener_Begin_TweenScale___);
    sub_2213A60(&StringLiteral_13623/*"StateQaaEnd"*/);
    byte_596D94A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  mcMyTrans = (UnityEngine_Transform_o *)UITweener__Begin_object_(
                                           gameObject,
                                           time,
                                           (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenScale___);
  v10 = mcMyTrans;
  if ( is_disp )
  {
    if ( !byte_5969AE0 )
    {
      mcMyTrans = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v10 )
      goto LABEL_28;
    v11 = (unsigned __int8)byte_5969AE5;
    v12 = UnityEngine_Vector3_TypeInfo;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    v10[5].monitor = *(void **)&static_fields->zeroVector.fields.x;
    *(float *)&v10[5].fields.m_CachedPtr = z;
    if ( !v11 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      v12 = UnityEngine_Vector3_TypeInfo;
      byte_5969AE5 = 1;
    }
    v15 = v12->static_fields;
    p_x = (_DWORD *)&v15->oneVector.fields.x;
    p_y = (int *)&v15->oneVector.fields.y;
    p_z = (int *)&v15->oneVector.fields.z;
  }
  else
  {
    if ( !byte_5969AE5 )
    {
      mcMyTrans = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v10 )
      goto LABEL_28;
    v19 = (unsigned __int8)byte_5969AE0;
    v20 = UnityEngine_Vector3_TypeInfo;
    v21 = UnityEngine_Vector3_TypeInfo->static_fields;
    v22 = v21->oneVector.fields.z;
    v10[5].monitor = *(void **)&v21->oneVector.fields.x;
    *(float *)&v10[5].fields.m_CachedPtr = v22;
    if ( !v19 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      v20 = UnityEngine_Vector3_TypeInfo;
      byte_5969AE0 = 1;
    }
    p_x = (_DWORD *)&v20->static_fields->zeroVector.fields.x;
    p_y = p_x + 1;
    p_z = p_x + 2;
  }
  v23 = *p_y;
  v24 = *p_z;
  HIDWORD(v10[5].fields.m_CachedPtr) = *p_x;
  LODWORD(v10[6].klass) = v23;
  HIDWORD(v10[6].klass) = v24;
  LODWORD(v10[1].monitor) = 2;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10[3].monitor = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10[3].monitor, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_13623/*"StateQaaEnd"*/;
  v10[3].fields.m_CachedPtr = StringLiteral_13623/*"StateQaaEnd"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10[3].fields, v32, v33, v34, v35, v36, v37, v38);
  if ( time != 0.0 || is_disp )
  {
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    mcMyTrans = (UnityEngine_Transform_o *)UITweener__Begin_object_(
                                             v39,
                                             time,
                                             (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
    if ( this->fields.mcMyTrans )
    {
      x = this->fields.mcFrom.fields.x;
      y = this->fields.mcFrom.fields.y;
      v42 = mcMyTrans;
      localPosition = UnityEngine_Transform__get_localPosition(this->fields.mcMyTrans, 0);
      v43 = localPosition.fields.z;
      if ( is_disp )
      {
        if ( v42 )
        {
          *(float *)&v42[5].monitor = x;
          *((float *)&v42[5].monitor + 1) = y;
          *(float *)&v42[5].fields.m_CachedPtr = localPosition.fields.z;
          mcMyTrans = this->fields.mcMyTrans;
          if ( mcMyTrans )
          {
            v45 = UnityEngine_Transform__get_localPosition(mcMyTrans, 0);
            x = v45.fields.x;
            y = v45.fields.y;
            v43 = v45.fields.z;
LABEL_26:
            *((float *)&v42[5].fields.m_CachedPtr + 1) = x;
            *(float *)&v42[6].klass = y;
            *((float *)&v42[6].klass + 1) = v43;
            LODWORD(v42[1].monitor) = 2;
            return;
          }
        }
      }
      else
      {
        mcMyTrans = this->fields.mcMyTrans;
        if ( mcMyTrans )
        {
          v46 = UnityEngine_Transform__get_localPosition(mcMyTrans, 0);
          if ( v42 )
          {
            *(UnityEngine_Vector3_o *)&v42[5].monitor = v46;
            goto LABEL_26;
          }
        }
      }
    }
LABEL_28:
    sub_2213CDC(mcMyTrans, v9);
  }
}


void srcLineSprite__SetState(
        srcLineSprite_o *this,
        int32_t state,
        System_Action_o *end_act,
        float qaaAnimTime,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o **p_mStateEndAct; // x20
  __int64 v14; // x1
  float v15; // s0
  CStateManager_T__o *v16; // x0

  if ( (byte_596D949 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_srcLineSprite__setState__);
    byte_596D949 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_mStateEndAct,
    (int32_t)end_act,
    (System_String_o *)end_act,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  v15 = 0.5;
  v16 = (CStateManager_T__o *)*(p_mStateEndAct - 14);
  if ( qaaAnimTime >= 0.0 )
    v15 = qaaAnimTime;
  *((float *)p_mStateEndAct - 4) = v15;
  if ( !v16 )
    sub_2213CDC(0, v14);
  CStateManager_object___setState(
    v16,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_srcLineSprite__setState__);
}


void srcLineSprite__Start(srcLineSprite_o *this, const MethodInfo *method)
{
  ;
}


void srcLineSprite__StateQaaEnd(srcLineSprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ActionExtensions__Call(this->fields.mStateEndAct, 0);
  srcLineSprite__SetState(this, 1, 0, -1.0, v3);
}


void srcLineSprite__Update(srcLineSprite_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596D947 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_srcLineSprite__update__);
    byte_596D947 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3E83E6C *)Method_CStateManager_srcLineSprite__update__);
}


void srcLineSprite__mfSetAtlas(
        srcLineSprite_o *this,
        UIAtlas_o *cAtlasP,
        System_String_o *sSpriteName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v9 = (MissionNaviTransitionBoardItem_o *)this;
  this->fields.mcAtlasP = cAtlasP;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mcAtlasP,
    (int32_t)cAtlasP,
    sSpriteName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v9->fields._IconName_k__BackingField = sSpriteName;
  v9 = (MissionNaviTransitionBoardItem_o *)((char *)v9 + 120);
  sub_2213A04(v9, (int32_t)sSpriteName, v10, v11, v12, v13, v14, v15);
  LOBYTE(v9[-1].fields.sortValueLast) = 1;
}


void srcLineSprite__mfSetITweenSize(
        srcLineSprite_o *this,
        float fSrcW,
        float fDstW,
        float fTime,
        const MethodInfo *method)
{
  struct TweenScale_o *mcTweenScaleP; // x9
  struct TweenScale_o *v6; // x9
  struct TweenScale_o *v7; // x9
  struct TweenAlpha_o *mcTweenAlphaP; // x8

  mcTweenScaleP = this->fields.mcTweenScaleP;
  if ( !mcTweenScaleP )
    goto LABEL_6;
  mcTweenScaleP->fields.from.fields.y = fSrcW;
  mcTweenScaleP->fields.from.fields.x = 1.0;
  mcTweenScaleP->fields.from.fields.z = 1.0;
  v6 = this->fields.mcTweenScaleP;
  if ( !v6
    || (v6->fields.to.fields.x = 1.0,
        v6->fields.to.fields.y = fDstW,
        v6->fields.to.fields.z = 1.0,
        (v7 = this->fields.mcTweenScaleP) == 0)
    || (mcTweenAlphaP = this->fields.mcTweenAlphaP, v7->fields.duration = fTime, !mcTweenAlphaP) )
  {
LABEL_6:
    sub_2213CDC(this, method);
  }
  mcTweenAlphaP->fields.duration = fTime;
  *(_QWORD *)&mcTweenAlphaP->fields.from = 0x3F80000000000000LL;
}


void srcLineSprite__mfSetPos2(
        srcLineSprite_o *this,
        UnityEngine_Vector2_o cFrom,
        UnityEngine_Vector2_o cTo,
        const MethodInfo *method)
{
  __int64 v4; // x2
  float y; // s8
  float x; // s10
  float v7; // s9
  float v8; // s11
  int v9; // w8
  float v11; // s10
  float v12; // s8
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v14; // s9
  float v15; // s11
  System_Math_c *v16; // x0
  float v17; // s9
  float v18; // s11
  UnityEngine_Transform_o *mcMyTrans; // x20
  float v20; // s9
  float v21; // s12
  float v22; // s0
  float v23; // s2
  float v24; // s8
  float v25; // s9
  UnityEngine_Transform_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  float mfWidth; // s0
  int v30; // w10
  int32_t v31; // w8
  float v32; // s0
  unsigned int v33; // w9
  int32_t v34; // w8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = cTo.fields.y;
  x = cTo.fields.x;
  v7 = cFrom.fields.y;
  v8 = cFrom.fields.x;
  v9 = (unsigned __int8)byte_59699C0;
  this->fields.mcFrom = cFrom;
  this->fields.mcTo = cTo;
  if ( !v9 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  v11 = x - v8;
  v12 = y - v7;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v14 = static_fields->zeroVector.fields.x;
  v15 = static_fields->zeroVector.fields.y;
  if ( !byte_596A92C )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A92C = 1;
  }
  v16 = System_Math_TypeInfo;
  v17 = (float)(v14 * v14) + (float)(v15 * v15);
  v18 = (float)(v11 * v11) + (float)(v12 * v12);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v4);
  if ( sqrtf(v18 * v17) >= 1.0e-15 )
  {
    v16 = System_Math_TypeInfo;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v4);
  }
  mcMyTrans = this->fields.mcMyTrans;
  if ( !mcMyTrans )
    goto LABEL_23;
  v21 = this->fields.mcFrom.fields.x;
  v20 = this->fields.mcFrom.fields.y;
  v22 = atan2f(this->fields.mcTo.fields.y - v20, this->fields.mcTo.fields.x - v21);
  v23 = v12 * 0.5;
  v24 = v22 * 57.296;
  v25 = v23 + v20;
  localPosition = UnityEngine_Transform__get_localPosition(mcMyTrans, 0);
  localPosition.fields.x = (float)(v11 * 0.5) + v21;
  localPosition.fields.y = v25;
  UnityEngine_Transform__set_localPosition(mcMyTrans, localPosition, 0);
  v36.fields.x = 0.0;
  v36.fields.y = 0.0;
  v26 = this->fields.mcMyTrans;
  v36.fields.z = 1.0;
  v37 = UnityEngine_Quaternion__AngleAxis(v24, v36, 0);
  if ( !v26 )
LABEL_23:
    sub_2213CDC(v16, method);
  UnityEngine_Transform__set_localRotation(v26, v37, 0);
  mfWidth = this->fields.mfWidth;
  v30 = (unsigned __int8)byte_5969AE1;
  if ( mfWidth == INFINITY )
    v31 = 0x80000000;
  else
    v31 = (int)mfWidth;
  this->fields.miLineH = v31;
  if ( !v30 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE1 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v27, v28);
  v32 = sqrtf(v18);
  v33 = vcvtps_s32_f32(v32);
  if ( ceilf(v32) == INFINITY )
    v34 = 0x80000000;
  else
    v34 = v33;
  this->fields.miLineW = v34;
  this->fields.mtIsUpdate = 1;
}


void srcLineSprite_StateMapMain___ctor(srcLineSprite_StateMapMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void srcLineSprite_StateMapMain__begin(
        srcLineSprite_StateMapMain_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateMapMain__end(
        srcLineSprite_StateMapMain_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateMapMain__update(
        srcLineSprite_StateMapMain_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mcLineSprite; // x20
  __int64 v5; // x2
  struct UISprite_o *v6; // x8
  UnityEngine_Object_o *mAtlas; // x20
  UnityEngine_Object_o *mcAtlasP; // x21

  if ( (byte_596D94E & 1) == 0 )
  {
    this = (srcLineSprite_StateMapMain_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D94E = 1;
  }
  if ( !that )
    goto LABEL_18;
  if ( !that->fields.mtIsUpdate )
    return;
  mcLineSprite = (UnityEngine_Object_o *)that->fields.mcLineSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  this = (srcLineSprite_StateMapMain_o *)UnityEngine_Object__op_Inequality(0, mcLineSprite, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = that->fields.mcLineSprite;
    if ( v6 )
    {
      mAtlas = (UnityEngine_Object_o *)v6->fields.mAtlas;
      mcAtlasP = (UnityEngine_Object_o *)that->fields.mcAtlasP;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v5);
      if ( !UnityEngine_Object__op_Inequality(mAtlas, mcAtlasP, 0) )
        goto LABEL_16;
      this = (srcLineSprite_StateMapMain_o *)that->fields.mcLineSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, that->fields.mcAtlasP, 0);
        this = (srcLineSprite_StateMapMain_o *)that->fields.mcLineSprite;
        if ( this )
        {
          UISprite__set_spriteName((UISprite_o *)this, that->fields.msSpriteName, 0);
          this = (srcLineSprite_StateMapMain_o *)that->fields.mcLineSprite;
          if ( this )
          {
            UIWidget__SetDimensions((UIWidget_o *)this, that->fields.miLineW, that->fields.miLineH, 0);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_18:
    sub_2213CDC(this, that);
  }
LABEL_16:
  that->fields.mtIsUpdate = 0;
}


void srcLineSprite_StateNone___ctor(srcLineSprite_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void srcLineSprite_StateNone__begin(srcLineSprite_StateNone_o *this, srcLineSprite_o *that, const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateNone__end(srcLineSprite_StateNone_o *this, srcLineSprite_o *that, const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateNone__update(srcLineSprite_StateNone_o *this, srcLineSprite_o *that, const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateQaaDisp___ctor(srcLineSprite_StateQaaDisp_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void srcLineSprite_StateQaaDisp__begin(
        srcLineSprite_StateQaaDisp_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  int32_t dispType; // w8
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !that )
    goto LABEL_11;
  mMapCtrl_SpotRoadInfo = that->fields.mMapCtrl_SpotRoadInfo;
  if ( !mMapCtrl_SpotRoadInfo )
    goto LABEL_11;
  dispType = mMapCtrl_SpotRoadInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      srcLineSprite__SetQaaColorAnim_44088152(that, 1, 0.5, method);
      break;
    case 1:
      ActionExtensions__Call(that->fields.mStateEndAct, 0);
      srcLineSprite__SetState(that, 1, 0, -1.0, v7);
      break;
    case 0:
      this = (srcLineSprite_StateQaaDisp_o *)that->fields.mcLineSprite;
      if ( this )
      {
        v8.fields.r = 1.0;
        v8.fields.g = 1.0;
        v8.fields.b = 1.0;
        v8.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v8, 0);
        srcLineSprite__SetQaaScaleAnim_44087500(that, 1, 0.5, v6);
        return;
      }
LABEL_11:
      sub_2213CDC(this, that);
  }
}


void srcLineSprite_StateQaaDisp__end(
        srcLineSprite_StateQaaDisp_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateQaaDisp__update(
        srcLineSprite_StateQaaDisp_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateQaaDispFade___ctor(srcLineSprite_StateQaaDispFade_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void srcLineSprite_StateQaaDispFade__begin(
        srcLineSprite_StateQaaDispFade_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  int32_t dispType; // w8
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !that )
    goto LABEL_11;
  mMapCtrl_SpotRoadInfo = that->fields.mMapCtrl_SpotRoadInfo;
  if ( !mMapCtrl_SpotRoadInfo )
    goto LABEL_11;
  dispType = mMapCtrl_SpotRoadInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      srcLineSprite__SetQaaColorAnim_44088152(that, 1, that->fields.mQaaAnimTime, method);
      break;
    case 1:
      ActionExtensions__Call(that->fields.mStateEndAct, 0);
      srcLineSprite__SetState(that, 1, 0, -1.0, v7);
      break;
    case 0:
      this = (srcLineSprite_StateQaaDispFade_o *)that->fields.mcLineSprite;
      if ( this )
      {
        v8.fields.a = 0.0;
        v8.fields.r = 1.0;
        v8.fields.g = 1.0;
        v8.fields.b = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v8, 0);
        srcLineSprite__SetQaaFadeAnim(that, 1, that->fields.mQaaAnimTime, v6);
        return;
      }
LABEL_11:
      sub_2213CDC(this, that);
  }
}


void srcLineSprite_StateQaaDispFade__end(
        srcLineSprite_StateQaaDispFade_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateQaaDispFade__update(
        srcLineSprite_StateQaaDispFade_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateQaaGray___ctor(srcLineSprite_StateQaaGray_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void srcLineSprite_StateQaaGray__begin(
        srcLineSprite_StateQaaGray_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  int32_t dispType; // w8
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !that )
    goto LABEL_11;
  mMapCtrl_SpotRoadInfo = that->fields.mMapCtrl_SpotRoadInfo;
  if ( !mMapCtrl_SpotRoadInfo )
    goto LABEL_11;
  dispType = mMapCtrl_SpotRoadInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      ActionExtensions__Call(that->fields.mStateEndAct, 0);
      srcLineSprite__SetState(that, 1, 0, -1.0, v7);
      break;
    case 1:
      srcLineSprite__SetQaaColorAnim_44088152(that, 0, 0.5, method);
      break;
    case 0:
      this = (srcLineSprite_StateQaaGray_o *)that->fields.mcLineSprite;
      if ( this )
      {
        v8.fields.r = 0.5;
        v8.fields.g = 0.5;
        v8.fields.b = 0.5;
        v8.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v8, 0);
        srcLineSprite__SetQaaScaleAnim_44087500(that, 1, 0.5, v6);
        return;
      }
LABEL_11:
      sub_2213CDC(this, that);
  }
}


void srcLineSprite_StateQaaGray__end(
        srcLineSprite_StateQaaGray_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateQaaGray__update(
        srcLineSprite_StateQaaGray_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateQaaGrayFade___ctor(srcLineSprite_StateQaaGrayFade_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void srcLineSprite_StateQaaGrayFade__begin(
        srcLineSprite_StateQaaGrayFade_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  int32_t dispType; // w8
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !that )
    goto LABEL_11;
  mMapCtrl_SpotRoadInfo = that->fields.mMapCtrl_SpotRoadInfo;
  if ( !mMapCtrl_SpotRoadInfo )
    goto LABEL_11;
  dispType = mMapCtrl_SpotRoadInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      ActionExtensions__Call(that->fields.mStateEndAct, 0);
      srcLineSprite__SetState(that, 1, 0, -1.0, v7);
      break;
    case 1:
      srcLineSprite__SetQaaColorAnim_44088152(that, 0, that->fields.mQaaAnimTime, method);
      break;
    case 0:
      this = (srcLineSprite_StateQaaGrayFade_o *)that->fields.mcLineSprite;
      if ( this )
      {
        v8.fields.a = 0.0;
        v8.fields.r = 0.5;
        v8.fields.g = 0.5;
        v8.fields.b = 0.5;
        UIWidget__set_color((UIWidget_o *)this, v8, 0);
        srcLineSprite__SetQaaFadeAnim(that, 1, that->fields.mQaaAnimTime, v6);
        return;
      }
LABEL_11:
      sub_2213CDC(this, that);
  }
}


void srcLineSprite_StateQaaGrayFade__end(
        srcLineSprite_StateQaaGrayFade_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateQaaGrayFade__update(
        srcLineSprite_StateQaaGrayFade_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateQaaHide___ctor(srcLineSprite_StateQaaHide_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void srcLineSprite_StateQaaHide__begin(
        srcLineSprite_StateQaaHide_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  unsigned int dispType; // w8
  const MethodInfo *v6; // x3

  if ( !that || (mMapCtrl_SpotRoadInfo = that->fields.mMapCtrl_SpotRoadInfo) == 0 )
    sub_2213CDC(this, that);
  dispType = mMapCtrl_SpotRoadInfo->fields.dispType;
  if ( dispType )
  {
    if ( dispType < 3 )
      srcLineSprite__SetQaaScaleAnim_44087500(that, 0, 0.5, method);
  }
  else
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0);
    srcLineSprite__SetState(that, 1, 0, -1.0, v6);
  }
}


void srcLineSprite_StateQaaHide__end(
        srcLineSprite_StateQaaHide_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateQaaHide__update(
        srcLineSprite_StateQaaHide_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateQaaHideFade___ctor(srcLineSprite_StateQaaHideFade_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void srcLineSprite_StateQaaHideFade__begin(
        srcLineSprite_StateQaaHideFade_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  unsigned int dispType; // w8
  const MethodInfo *v6; // x3

  if ( !that || (mMapCtrl_SpotRoadInfo = that->fields.mMapCtrl_SpotRoadInfo) == 0 )
    sub_2213CDC(this, that);
  dispType = mMapCtrl_SpotRoadInfo->fields.dispType;
  if ( dispType )
  {
    if ( dispType < 3 )
      srcLineSprite__SetQaaFadeAnim(that, 0, that->fields.mQaaAnimTime, method);
  }
  else
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0);
    srcLineSprite__SetState(that, 1, 0, -1.0, v6);
  }
}


void srcLineSprite_StateQaaHideFade__end(
        srcLineSprite_StateQaaHideFade_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void srcLineSprite_StateQaaHideFade__update(
        srcLineSprite_StateQaaHideFade_o *this,
        srcLineSprite_o *that,
        const MethodInfo *method)
{
  ;
}


void srcLineSprite___c__DisplayClass40_0___ctor(srcLineSprite___c__DisplayClass40_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void srcLineSprite___c__DisplayClass40_0___SetQaaColorAnim_b__0(
        srcLineSprite___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8

  eo = this->fields.eo;
  if ( !eo || (this = (srcLineSprite___c__DisplayClass40_0_o *)this->fields.__4__this) == 0 )
    sub_2213CDC(this, method);
  srcLineSprite__SetContrast((srcLineSprite_o *)this, eo->fields.mNow, 1.0, method);
}


void srcLineSprite___c__DisplayClass40_0___SetQaaColorAnim_b__1(
        srcLineSprite___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  srcLineSprite_o *_4__this; // x0
  struct srcLineSprite_o *v4; // x19
  const MethodInfo *v5; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (srcLineSprite__SetContrast(_4__this, this->fields.to, 1.0, method), (v4 = this->fields.__4__this) == 0) )
  {
    sub_2213CDC(_4__this, method);
  }
  ActionExtensions__Call(v4->fields.mStateEndAct, 0);
  srcLineSprite__SetState(v4, 1, 0, -1.0, v5);
}


void srcLineSprite___c__DisplayClass41_0___ctor(srcLineSprite___c__DisplayClass41_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void srcLineSprite___c__DisplayClass41_0___SetQaaFadeAnim_b__0(
        srcLineSprite___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *v3; // x19

  if ( !this->fields.isDisp )
  {
    _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_8;
    _4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0);
    if ( !_4__this )
      goto LABEL_8;
    _4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
    v3 = (UnityEngine_Transform_o *)_4__this;
    if ( !byte_5969AE0 )
    {
      _4__this = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v3 )
LABEL_8:
      sub_2213CDC(_4__this, method);
    UnityEngine_Transform__set_localScale(v3, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
}