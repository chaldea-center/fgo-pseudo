void srcLineSprite___ctor(srcLineSprite_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4E01C3D & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E01C3D = 1;
  }
  this->fields.mfWidth = 20.0;
  v9 = StringLiteral_1/*""*/;
  this->fields.msSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.msSpriteName, v9, v2, v3, v4, v5, v6, v7);
  this->fields.mQaaAnimTime = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void srcLineSprite__Awake(srcLineSprite_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mcMyTrans; // x20
  UnityEngine_Object_o *mcLineSprite; // x20
  UnityEngine_Object_o *mcTweenAlphaP; // x20
  UnityEngine_Object_o *mcTweenScaleP; // x20
  struct CStateManager_srcLineSprite__o **p_mFSM; // x20
  CStateManager_T__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
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
  CStateManager_T__o *v29; // x21
  Il2CppObject *v30; // x22
  CStateManager_T__o *v31; // x20
  Il2CppObject *v32; // x21
  const MethodInfo *v33; // x3

  if ( (byte_4E01C36 & 1) == 0 )
  {
    sub_1CE6700(&Method_CStateManager_srcLineSprite___ctor__);
    sub_1CE6700(&Method_CStateManager_srcLineSprite__add__);
    sub_1CE6700(&CStateManager_srcLineSprite__TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&srcLineSprite_StateMapMain_TypeInfo);
    sub_1CE6700(&srcLineSprite_StateNone_TypeInfo);
    sub_1CE6700(&srcLineSprite_StateQaaDispFade_TypeInfo);
    sub_1CE6700(&srcLineSprite_StateQaaDisp_TypeInfo);
    sub_1CE6700(&srcLineSprite_StateQaaGrayFade_TypeInfo);
    sub_1CE6700(&srcLineSprite_StateQaaGray_TypeInfo);
    sub_1CE6700(&srcLineSprite_StateQaaHideFade_TypeInfo);
    sub_1CE6700(&srcLineSprite_StateQaaHide_TypeInfo);
    byte_4E01C36 = 1;
  }
  mcMyTrans = (UnityEngine_Object_o *)this->fields.mcMyTrans;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(0, mcMyTrans, 0) )
  {
    mcLineSprite = (UnityEngine_Object_o *)this->fields.mcLineSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(0, mcLineSprite, 0) )
    {
      mcTweenAlphaP = (UnityEngine_Object_o *)this->fields.mcTweenAlphaP;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(0, mcTweenAlphaP, 0) )
      {
        mcTweenScaleP = (UnityEngine_Object_o *)this->fields.mcTweenScaleP;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__op_Equality(0, mcTweenScaleP, 0);
      }
    }
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v8 = (CStateManager_T__o *)sub_1CE694C(CStateManager_srcLineSprite__TypeInfo);
    CStateManager_object____ctor(
      v8,
      (Il2CppObject *)this,
      8,
      (const MethodInfo_3473510 *)Method_CStateManager_srcLineSprite___ctor__);
    this->fields.mFSM = (struct CStateManager_srcLineSprite__o *)v8;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v8, v9, v10, v11, v12, v13, v14);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v16 = (Il2CppObject *)sub_1CE694C(srcLineSprite_StateNone_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v16,
      (const MethodInfo_34735B8 *)Method_CStateManager_srcLineSprite__add__);
    v19 = (CStateManager_T__o *)*p_mFSM;
    v20 = (Il2CppObject *)sub_1CE694C(srcLineSprite_StateMapMain_TypeInfo);
    System_Object___ctor(v20, 0);
    if ( !v19 )
      goto LABEL_25;
    CStateManager_object___add(
      v19,
      1,
      (IState_T__o *)v20,
      (const MethodInfo_34735B8 *)Method_CStateManager_srcLineSprite__add__);
    v21 = (CStateManager_T__o *)*p_mFSM;
    v22 = (Il2CppObject *)sub_1CE694C(srcLineSprite_StateQaaHide_TypeInfo);
    System_Object___ctor(v22, 0);
    if ( !v21 )
      goto LABEL_25;
    CStateManager_object___add(
      v21,
      2,
      (IState_T__o *)v22,
      (const MethodInfo_34735B8 *)Method_CStateManager_srcLineSprite__add__);
    v23 = (CStateManager_T__o *)*p_mFSM;
    v24 = (Il2CppObject *)sub_1CE694C(srcLineSprite_StateQaaGray_TypeInfo);
    System_Object___ctor(v24, 0);
    if ( !v23 )
      goto LABEL_25;
    CStateManager_object___add(
      v23,
      3,
      (IState_T__o *)v24,
      (const MethodInfo_34735B8 *)Method_CStateManager_srcLineSprite__add__);
    v25 = (CStateManager_T__o *)*p_mFSM;
    v26 = (Il2CppObject *)sub_1CE694C(srcLineSprite_StateQaaDisp_TypeInfo);
    System_Object___ctor(v26, 0);
    if ( !v25 )
      goto LABEL_25;
    CStateManager_object___add(
      v25,
      4,
      (IState_T__o *)v26,
      (const MethodInfo_34735B8 *)Method_CStateManager_srcLineSprite__add__);
    v27 = (CStateManager_T__o *)*p_mFSM;
    v28 = (Il2CppObject *)sub_1CE694C(srcLineSprite_StateQaaHideFade_TypeInfo);
    System_Object___ctor(v28, 0);
    if ( !v27 )
      goto LABEL_25;
    CStateManager_object___add(
      v27,
      5,
      (IState_T__o *)v28,
      (const MethodInfo_34735B8 *)Method_CStateManager_srcLineSprite__add__);
    v29 = (CStateManager_T__o *)*p_mFSM;
    v30 = (Il2CppObject *)sub_1CE694C(srcLineSprite_StateQaaGrayFade_TypeInfo);
    System_Object___ctor(v30, 0);
    if ( !v29
      || (CStateManager_object___add(
            v29,
            6,
            (IState_T__o *)v30,
            (const MethodInfo_34735B8 *)Method_CStateManager_srcLineSprite__add__),
          v31 = (CStateManager_T__o *)*p_mFSM,
          v32 = (Il2CppObject *)sub_1CE694C(srcLineSprite_StateQaaDispFade_TypeInfo),
          System_Object___ctor(v32, 0),
          !v31) )
    {
LABEL_25:
      sub_1CE6958(v17, v18);
    }
    CStateManager_object___add(
      v31,
      7,
      (IState_T__o *)v32,
      (const MethodInfo_34735B8 *)Method_CStateManager_srcLineSprite__add__);
    srcLineSprite__SetState(this, 1, 0, -1.0, v33);
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
  if ( (byte_4E01C35 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_13141/*"Spot_Line_"*/);
    sub_1CE6700(&StringLiteral_1124/*"00"*/);
    byte_4E01C35 = 1;
  }
  v2 = System_Int32__ToString_66631324((int32_t)&v4, (System_String_o *)StringLiteral_1124/*"00"*/, 0);
  return System_String__Concat_65122828((System_String_o *)StringLiteral_13141/*"Spot_Line_"*/, v2, 0);
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
  if ( (byte_4E01C38 & 1) == 0 )
  {
    this = (srcLineSprite_o *)sub_1CE6700(&Method_CStateManager_srcLineSprite__getState__);
    byte_4E01C38 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1CE6958(this, method);
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
void srcLineSprite__SetContrast(srcLineSprite_o *this, float val, float alpha, const MethodInfo *method)
{
  UIWidget_o *mcLineSprite; // x0

  mcLineSprite = (UIWidget_o *)this->fields.mcLineSprite;
  if ( !mcLineSprite )
    sub_1CE6958(0, method);
  UIWidget__set_color(mcLineSprite, *(UnityEngine_Color_o *)&val, 0);
}


void srcLineSprite__SetMapCtrl_SpotRoadInfo(
        srcLineSprite_o *this,
        MapControl_SpotRoadInfo_o *MapCtrl_SpotRoadInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.mMapCtrl_SpotRoadInfo = MapCtrl_SpotRoadInfo;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.mMapCtrl_SpotRoadInfo,
    (int32_t)MapCtrl_SpotRoadInfo,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void srcLineSprite__SetQaaColorAnim(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_38305044(this, isActive, 0.5, method);
}


void srcLineSprite__SetQaaColorAnimQuick(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_38305044(this, isActive, 0.0, method);
}


void srcLineSprite__SetQaaColorAnim_38305044(srcLineSprite_o *this, bool is_disp, float time, const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  float v24; // s9
  EasingObject_o *v25; // x21
  System_Action_o *v26; // x22
  System_Action_o *v27; // x23
  float v28; // s0

  if ( (byte_4E01C3B & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1CE6700(&Method_srcLineSprite___c__DisplayClass40_0__SetQaaColorAnim_b__0__);
    sub_1CE6700(&Method_srcLineSprite___c__DisplayClass40_0__SetQaaColorAnim_b__1__);
    sub_1CE6700(&srcLineSprite___c__DisplayClass40_0_TypeInfo);
    byte_4E01C3B = 1;
  }
  v7 = sub_1CE694C(srcLineSprite___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_325D924 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 24) = Component_object;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)Component_object, v18, v19, v20, v21, v22, v23);
  v24 = is_disp ? 1.0 : 0.5;
  *(float *)(v7 + 32) = v24;
  v25 = *(EasingObject_o **)(v7 + 24);
  v26 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)v7, Method_srcLineSprite___c__DisplayClass40_0__SetQaaColorAnim_b__0__, 0);
  v27 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v7, Method_srcLineSprite___c__DisplayClass40_0__SetQaaColorAnim_b__1__, 0);
  if ( !v25 )
LABEL_12:
    sub_1CE6958(v8, v9);
  if ( is_disp )
    v28 = 0.5;
  else
    v28 = 1.0;
  EasingObject__Play_50162364(v25, v28, v24, time, v26, v27, 0.0, 17, 0);
}


void srcLineSprite__SetQaaFadeAnim(srcLineSprite_o *this, bool isDisp, float time, const MethodInfo *method)
{
  __int64 v7; // x20
  float *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  float v17; // s0
  float v18; // s2
  float *v19; // x22
  UnityEngine_GameObject_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  __int64 v34; // x21
  int32_t v35; // w2
  int v36; // w8
  EventDelegate_Callback_o *v37; // x23
  EventDelegate_o *v38; // x22
  float x; // s8
  float y; // s10
  float v41; // s9
  float v42; // s11
  UnityEngine_GameObject_o *v43; // x20
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E01C3C & 1) == 0 )
  {
    sub_1CE6700(&EventDelegate_Callback_TypeInfo);
    sub_1CE6700(&EventDelegate_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1CE6700(&Method_srcLineSprite___c__DisplayClass41_0__SetQaaFadeAnim_b__0__);
    sub_1CE6700(&srcLineSprite___c__DisplayClass41_0_TypeInfo);
    sub_1CE6700(&Method_UITweener_Begin_TweenAlpha___);
    sub_1CE6700(&StringLiteral_13211/*"StateQaaEnd"*/);
    byte_4E01C3C = 1;
  }
  v7 = sub_1CE694C(srcLineSprite___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 24) = this;
  *(_BYTE *)(v7 + 16) = isDisp;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = (float *)UITweener__Begin_object_(
                  gameObject,
                  time,
                  (const MethodInfo_32DA710 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v8 )
    goto LABEL_19;
  v17 = 0.0;
  if ( *(_BYTE *)(v7 + 16) )
    v18 = 0.0;
  else
    v18 = 1.0;
  if ( *(_BYTE *)(v7 + 16) )
    v17 = 1.0;
  v19 = v8;
  v8[32] = v18;
  v8[33] = v17;
  *((_DWORD *)v8 + 8) = 2;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v19 + 10) = v20;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v19 + 20), (int32_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = StringLiteral_13211/*"StateQaaEnd"*/;
  *((_QWORD *)v19 + 11) = StringLiteral_13211/*"StateQaaEnd"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v19 + 22), v27, v28, v29, v30, v31, v32, v33);
  v34 = *((_QWORD *)v19 + 9);
  if ( !v34 )
    goto LABEL_19;
  v35 = *(_DWORD *)(v34 + 24);
  v36 = *(_DWORD *)(v34 + 28) + 1;
  *(_DWORD *)(v34 + 24) = 0;
  *(_DWORD *)(v34 + 28) = v36;
  if ( v35 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(v34 + 16), 0, v35, 0);
    v34 = *((_QWORD *)v19 + 9);
  }
  v37 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v37,
    (Il2CppObject *)v7,
    Method_srcLineSprite___c__DisplayClass41_0__SetQaaFadeAnim_b__0__,
    0);
  v38 = (EventDelegate_o *)sub_1CE694C(EventDelegate_TypeInfo);
  EventDelegate___ctor_50381160(v38, v37, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add_50386256((System_Collections_Generic_List_EventDelegate__o *)v34, v38, 0);
  if ( *(_BYTE *)(v7 + 16) )
  {
    x = this->fields.mcFrom.fields.x;
    y = this->fields.mcFrom.fields.y;
    v41 = this->fields.mcTo.fields.x;
    v42 = this->fields.mcTo.fields.y;
    v8 = (float *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( this->fields.mcMyTrans )
    {
      v43 = (UnityEngine_GameObject_o *)v8;
      localPosition = UnityEngine_Transform__get_localPosition(this->fields.mcMyTrans, 0);
      GameObjectExtensions__SetLocalPosition_37161272(
        v43,
        (float)(x + v41) * 0.5,
        (float)(y + v42) * 0.5,
        localPosition.fields.z,
        0);
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__ResetLocalScale(v44, 0);
      return;
    }
LABEL_19:
    sub_1CE6958(v8, v9);
  }
}


void srcLineSprite__SetQaaScaleAnim(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_38304352(this, isDisp, 0.5, method);
}


void srcLineSprite__SetQaaScaleAnimQuick(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_38304352(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void srcLineSprite__SetQaaScaleAnim_38304352(srcLineSprite_o *this, bool is_disp, float time, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *mcMyTrans; // x0
  __int64 v9; // x1
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Vector3_c *v11; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  int *p_y; // x10
  int *p_z; // x11
  struct UnityEngine_Vector3_StaticFields *v15; // x11
  int v16; // s1
  int v17; // s2
  struct UnityEngine_Vector3_StaticFields *v18; // x10
  _DWORD *p_x; // x8
  int *v20; // x9
  int *v21; // x10
  int v22; // s1
  int v23; // s2
  UnityEngine_GameObject_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  UnityEngine_GameObject_o *v38; // x0
  float x; // s8
  float y; // s9
  UnityEngine_Transform_o *v41; // x21
  float z; // s10
  float v43; // s1
  float v44; // s0 OVERLAPPED
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E01C3A & 1) == 0 )
  {
    sub_1CE6700(&Method_UITweener_Begin_TweenPosition___);
    sub_1CE6700(&Method_UITweener_Begin_TweenScale___);
    sub_1CE6700(&StringLiteral_13211/*"StateQaaEnd"*/);
    byte_4E01C3A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  mcMyTrans = (UnityEngine_Transform_o *)UITweener__Begin_object_(
                                           gameObject,
                                           time,
                                           (const MethodInfo_32DA710 *)Method_UITweener_Begin_TweenScale___);
  v10 = mcMyTrans;
  if ( is_disp )
  {
    if ( !byte_4DFE0A9 )
    {
      mcMyTrans = (UnityEngine_Transform_o *)sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
      byte_4DFE0A9 = 1;
    }
    v11 = UnityEngine_Vector3_TypeInfo;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = (int *)&static_fields->zeroVector.fields.y;
    p_z = (int *)&static_fields->zeroVector.fields.z;
  }
  else
  {
    if ( !byte_4DFE0AE )
    {
      mcMyTrans = (UnityEngine_Transform_o *)sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
      byte_4DFE0AE = 1;
    }
    v11 = UnityEngine_Vector3_TypeInfo;
    v15 = UnityEngine_Vector3_TypeInfo->static_fields;
    static_fields = (struct UnityEngine_Vector3_StaticFields *)&v15->oneVector;
    p_y = (int *)&v15->oneVector.fields.y;
    p_z = (int *)&v15->oneVector.fields.z;
  }
  if ( !v10 )
    goto LABEL_30;
  v16 = *p_y;
  v17 = *p_z;
  *(float *)&v10[5].monitor = static_fields->zeroVector.fields.x;
  HIDWORD(v10[5].monitor) = v16;
  LODWORD(v10[5].fields.m_CachedPtr) = v17;
  if ( is_disp )
  {
    if ( !byte_4DFE0AE )
    {
      sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
      v11 = UnityEngine_Vector3_TypeInfo;
      byte_4DFE0AE = 1;
    }
    v18 = v11->static_fields;
    p_x = (_DWORD *)&v18->oneVector.fields.x;
    v20 = (int *)&v18->oneVector.fields.y;
    v21 = (int *)&v18->oneVector.fields.z;
  }
  else
  {
    if ( !byte_4DFE0A9 )
    {
      sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
      v11 = UnityEngine_Vector3_TypeInfo;
      byte_4DFE0A9 = 1;
    }
    p_x = (_DWORD *)&v11->static_fields->zeroVector.fields.x;
    v20 = p_x + 1;
    v21 = p_x + 2;
  }
  v22 = *v20;
  v23 = *v21;
  HIDWORD(v10[5].fields.m_CachedPtr) = *p_x;
  LODWORD(v10[6].klass) = v22;
  HIDWORD(v10[6].klass) = v23;
  LODWORD(v10[1].monitor) = 2;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10[3].monitor = v24;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v10[3].monitor, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_13211/*"StateQaaEnd"*/;
  v10[3].fields.m_CachedPtr = StringLiteral_13211/*"StateQaaEnd"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v10[3].fields, v31, v32, v33, v34, v35, v36, v37);
  if ( time != 0.0 || is_disp )
  {
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    mcMyTrans = (UnityEngine_Transform_o *)UITweener__Begin_object_(
                                             v38,
                                             time,
                                             (const MethodInfo_32DA710 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.mcMyTrans )
      goto LABEL_30;
    x = this->fields.mcFrom.fields.x;
    y = this->fields.mcFrom.fields.y;
    v41 = mcMyTrans;
    localPosition = UnityEngine_Transform__get_localPosition(this->fields.mcMyTrans, 0);
    z = localPosition.fields.z;
    v43 = y;
    v44 = x;
    if ( !is_disp )
    {
      mcMyTrans = this->fields.mcMyTrans;
      if ( !mcMyTrans )
        goto LABEL_30;
      *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Transform__get_localPosition(mcMyTrans, 0);
    }
    if ( v41 )
    {
      *(float *)&v41[5].monitor = v44;
      *((float *)&v41[5].monitor + 1) = v43;
      *(float *)&v41[5].fields.m_CachedPtr = localPosition.fields.z;
      if ( !is_disp )
      {
LABEL_28:
        *((float *)&v41[5].fields.m_CachedPtr + 1) = x;
        *(float *)&v41[6].klass = y;
        *((float *)&v41[6].klass + 1) = z;
        LODWORD(v41[1].monitor) = 2;
        return;
      }
      mcMyTrans = this->fields.mcMyTrans;
      if ( mcMyTrans )
      {
        v46 = UnityEngine_Transform__get_localPosition(mcMyTrans, 0);
        x = v46.fields.x;
        y = v46.fields.y;
        z = v46.fields.z;
        goto LABEL_28;
      }
    }
LABEL_30:
    sub_1CE6958(mcMyTrans, v9);
  }
}


void srcLineSprite__SetState(
        srcLineSprite_o *this,
        int32_t state,
        System_Action_o *end_act,
        float qaaAnimTime,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o **p_mStateEndAct; // x20
  __int64 v14; // x1
  CStateManager_T__o *v15; // x0
  float v16; // s0

  if ( (byte_4E01C39 & 1) == 0 )
  {
    sub_1CE6700(&Method_CStateManager_srcLineSprite__setState__);
    byte_4E01C39 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)p_mStateEndAct,
    (int32_t)end_act,
    (int32_t)end_act,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  v15 = (CStateManager_T__o *)*(p_mStateEndAct - 14);
  v16 = 0.5;
  if ( qaaAnimTime >= 0.0 )
    v16 = qaaAnimTime;
  *((float *)p_mStateEndAct - 4) = v16;
  if ( !v15 )
    sub_1CE6958(0, v14);
  CStateManager_object___setState(
    v15,
    state,
    (const MethodInfo_3473644 *)Method_CStateManager_srcLineSprite__setState__);
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

  if ( (byte_4E01C37 & 1) == 0 )
  {
    sub_1CE6700(&Method_CStateManager_srcLineSprite__update__);
    byte_4E01C37 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3473620 *)Method_CStateManager_srcLineSprite__update__);
}


void srcLineSprite__mfSetAtlas(
        srcLineSprite_o *this,
        UIAtlas_o *cAtlasP,
        System_String_o *sSpriteName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  srcLineSprite_o *v8; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  v8 = this;
  this->fields.mcAtlasP = cAtlasP;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.mcAtlasP,
    (int32_t)cAtlasP,
    (int32_t)sSpriteName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v8->fields.msSpriteName = sSpriteName;
  v8 = (srcLineSprite_o *)((char *)v8 + 120);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)v8, (int32_t)sSpriteName, v10, v11, v12, v13, v14, v15);
  LOBYTE(v8[-1].fields.mcTweenScaleP) = 1;
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
  struct TweenScale_o *v7; // x8
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
    || (v7->fields.duration = fTime, (mcTweenAlphaP = this->fields.mcTweenAlphaP) == 0) )
  {
LABEL_6:
    sub_1CE6958(this, method);
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
  float y; // s8
  float x; // s9
  float v6; // s10
  float v7; // s11
  float v9; // s9
  float v10; // s8
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v12; // s12
  float v13; // s13
  System_Math_c *v14; // x0
  float v15; // s11
  UnityEngine_Transform_o *mcMyTrans; // x20
  float v17; // s10
  float v18; // s12
  float v19; // s0
  float v20; // s1
  float v21; // s9
  float v22; // s10
  UnityEngine_Transform_o *v23; // x20
  float mfWidth; // s0
  int32_t v25; // w8
  float v26; // s0
  unsigned int v27; // w11
  int32_t v28; // w8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields.mcFrom = cFrom;
  this->fields.mcTo = cTo;
  y = cTo.fields.y;
  x = cTo.fields.x;
  v6 = cFrom.fields.y;
  v7 = cFrom.fields.x;
  if ( !byte_4DFDF89 )
  {
    sub_1CE6700(&UnityEngine_Vector2_TypeInfo);
    byte_4DFDF89 = 1;
  }
  v9 = x - v7;
  v10 = y - v6;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v12 = static_fields->zeroVector.fields.x;
  v13 = static_fields->zeroVector.fields.y;
  if ( !byte_4DFE735 )
  {
    sub_1CE6700(&System_Math_TypeInfo);
    byte_4DFE735 = 1;
  }
  v14 = System_Math_TypeInfo;
  v15 = (float)(v9 * v9) + (float)(v10 * v10);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( sqrtf(v15 * (float)((float)(v12 * v12) + (float)(v13 * v13))) >= 1.0e-15 )
  {
    v14 = System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  }
  mcMyTrans = this->fields.mcMyTrans;
  if ( !mcMyTrans )
    goto LABEL_22;
  v17 = this->fields.mcFrom.fields.x;
  v18 = this->fields.mcFrom.fields.y;
  v19 = atan2f(this->fields.mcTo.fields.y - v18, this->fields.mcTo.fields.x - v17);
  v20 = v9 * 0.5;
  v21 = v19 * 57.296;
  v22 = v20 + v17;
  localPosition = UnityEngine_Transform__get_localPosition(mcMyTrans, 0);
  localPosition.fields.x = v22;
  localPosition.fields.y = (float)(v10 * 0.5) + v18;
  UnityEngine_Transform__set_localPosition(mcMyTrans, localPosition, 0);
  v23 = this->fields.mcMyTrans;
  v30.fields.x = 0.0;
  v30.fields.y = 0.0;
  v30.fields.z = 1.0;
  v31 = UnityEngine_Quaternion__AngleAxis(v21, v30, 0);
  if ( !v23 )
LABEL_22:
    sub_1CE6958(v14, method);
  UnityEngine_Transform__set_localRotation(v23, v31, 0);
  mfWidth = this->fields.mfWidth;
  v25 = (int)mfWidth;
  if ( mfWidth == INFINITY )
    v25 = 0x80000000;
  this->fields.miLineH = v25;
  if ( !byte_4DFE0AA )
  {
    sub_1CE6700(&System_Math_TypeInfo);
    byte_4DFE0AA = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v26 = sqrtf(v15);
  v27 = vcvtps_s32_f32(v26);
  if ( ceilf(v26) == INFINITY )
    v28 = 0x80000000;
  else
    v28 = v27;
  this->fields.miLineW = v28;
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
  struct UISprite_o *v5; // x8
  UnityEngine_Object_o *mAtlas; // x20
  UnityEngine_Object_o *mcAtlasP; // x21

  if ( (byte_4E01C3E & 1) == 0 )
  {
    this = (srcLineSprite_StateMapMain_o *)sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E01C3E = 1;
  }
  if ( !that )
    goto LABEL_18;
  if ( !that->fields.mtIsUpdate )
    return;
  mcLineSprite = (UnityEngine_Object_o *)that->fields.mcLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (srcLineSprite_StateMapMain_o *)UnityEngine_Object__op_Inequality(0, mcLineSprite, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mcLineSprite;
    if ( v5 )
    {
      mAtlas = (UnityEngine_Object_o *)v5->fields.mAtlas;
      mcAtlasP = (UnityEngine_Object_o *)that->fields.mcAtlasP;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1CE6958(this, that);
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
      srcLineSprite__SetQaaColorAnim_38305044(that, 1, 0.5, method);
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
        srcLineSprite__SetQaaScaleAnim_38304352(that, 1, 0.5, v6);
        return;
      }
LABEL_11:
      sub_1CE6958(this, that);
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
      srcLineSprite__SetQaaColorAnim_38305044(that, 1, that->fields.mQaaAnimTime, method);
      break;
    case 1:
      ActionExtensions__Call(that->fields.mStateEndAct, 0);
      srcLineSprite__SetState(that, 1, 0, -1.0, v7);
      break;
    case 0:
      this = (srcLineSprite_StateQaaDispFade_o *)that->fields.mcLineSprite;
      if ( this )
      {
        v8.fields.r = 1.0;
        v8.fields.g = 1.0;
        v8.fields.b = 1.0;
        v8.fields.a = 0.0;
        UIWidget__set_color((UIWidget_o *)this, v8, 0);
        srcLineSprite__SetQaaFadeAnim(that, 1, that->fields.mQaaAnimTime, v6);
        return;
      }
LABEL_11:
      sub_1CE6958(this, that);
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
      srcLineSprite__SetQaaColorAnim_38305044(that, 0, 0.5, method);
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
        srcLineSprite__SetQaaScaleAnim_38304352(that, 1, 0.5, v6);
        return;
      }
LABEL_11:
      sub_1CE6958(this, that);
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
      srcLineSprite__SetQaaColorAnim_38305044(that, 0, that->fields.mQaaAnimTime, method);
      break;
    case 0:
      this = (srcLineSprite_StateQaaGrayFade_o *)that->fields.mcLineSprite;
      if ( this )
      {
        v8.fields.r = 0.5;
        v8.fields.g = 0.5;
        v8.fields.b = 0.5;
        v8.fields.a = 0.0;
        UIWidget__set_color((UIWidget_o *)this, v8, 0);
        srcLineSprite__SetQaaFadeAnim(that, 1, that->fields.mQaaAnimTime, v6);
        return;
      }
LABEL_11:
      sub_1CE6958(this, that);
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
  int32_t dispType; // w8
  const MethodInfo *v6; // x3

  if ( !that || (mMapCtrl_SpotRoadInfo = that->fields.mMapCtrl_SpotRoadInfo) == 0 )
    sub_1CE6958(this, that);
  dispType = mMapCtrl_SpotRoadInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
      srcLineSprite__SetQaaScaleAnim_38304352(that, 0, 0.5, method);
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
  int32_t dispType; // w8
  const MethodInfo *v6; // x3

  if ( !that || (mMapCtrl_SpotRoadInfo = that->fields.mMapCtrl_SpotRoadInfo) == 0 )
    sub_1CE6958(this, that);
  dispType = mMapCtrl_SpotRoadInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(_4__this, method);
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
    if ( !byte_4DFE0A9 )
    {
      _4__this = (UnityEngine_Component_o *)sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
      byte_4DFE0A9 = 1;
    }
    if ( !v3 )
LABEL_8:
      sub_1CE6958(_4__this, method);
    UnityEngine_Transform__set_localScale(v3, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
}