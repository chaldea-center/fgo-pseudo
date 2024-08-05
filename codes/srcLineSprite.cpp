void __fastcall srcLineSprite___ctor(srcLineSprite_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_49FB9FE & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, method);
    byte_49FB9FE = 1;
  }
  this->fields.mfWidth = 20.0;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.msSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.msSpriteName, v5, v2, v3);
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
  CStateManager_T__o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  CStateManager_T__o *v23; // x21
  Il2CppObject *v24; // x22
  CStateManager_T__o *v25; // x21
  Il2CppObject *v26; // x22
  CStateManager_T__o *v27; // x21
  Il2CppObject *v28; // x22
  CStateManager_T__o *v29; // x20
  Il2CppObject *v30; // x21
  const MethodInfo *v31; // x3

  if ( (byte_49FB9F8 & 1) == 0 )
  {
    sub_1B64870(&Method_CStateManager_srcLineSprite___ctor__, method);
    sub_1B64870(&Method_CStateManager_srcLineSprite__add__, v3);
    sub_1B64870(&CStateManager_srcLineSprite__TypeInfo, v4);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    sub_1B64870(&srcLineSprite_StateMapMain_TypeInfo, v6);
    sub_1B64870(&srcLineSprite_StateNone_TypeInfo, v7);
    sub_1B64870(&srcLineSprite_StateQaaDisp_TypeInfo, v8);
    sub_1B64870(&srcLineSprite_StateQaaGray_TypeInfo, v9);
    sub_1B64870(&srcLineSprite_StateQaaHide_TypeInfo, v10);
    byte_49FB9F8 = 1;
  }
  mcMyTrans = (UnityEngine_Object_o *)this->fields.mcMyTrans;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(0LL, mcMyTrans, 0LL) )
  {
    mcLineSprite = (UnityEngine_Object_o *)this->fields.mcLineSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(0LL, mcLineSprite, 0LL) )
    {
      mcTweenAlphaP = (UnityEngine_Object_o *)this->fields.mcTweenAlphaP;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(0LL, mcTweenAlphaP, 0LL) )
      {
        mcTweenScaleP = (UnityEngine_Object_o *)this->fields.mcTweenScaleP;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__op_Equality(0LL, mcTweenScaleP, 0LL);
      }
    }
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v16 = (CStateManager_T__o *)sub_1B64ABC(CStateManager_srcLineSprite__TypeInfo);
    CStateManager_object____ctor(
      v16,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_3063598 *)Method_CStateManager_srcLineSprite___ctor__);
    this->fields.mFSM = (struct CStateManager_srcLineSprite__o *)v16;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v16, v17, v18);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v20 = (Il2CppObject *)sub_1B64ABC(srcLineSprite_StateNone_TypeInfo);
    System_Object___ctor(v20, 0LL);
    if ( !mFSM )
      goto LABEL_22;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v20,
      (const MethodInfo_3063640 *)Method_CStateManager_srcLineSprite__add__);
    v23 = (CStateManager_T__o *)*p_mFSM;
    v24 = (Il2CppObject *)sub_1B64ABC(srcLineSprite_StateMapMain_TypeInfo);
    System_Object___ctor(v24, 0LL);
    if ( !v23 )
      goto LABEL_22;
    CStateManager_object___add(
      v23,
      1,
      (IState_T__o *)v24,
      (const MethodInfo_3063640 *)Method_CStateManager_srcLineSprite__add__);
    v25 = (CStateManager_T__o *)*p_mFSM;
    v26 = (Il2CppObject *)sub_1B64ABC(srcLineSprite_StateQaaHide_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_22;
    CStateManager_object___add(
      v25,
      2,
      (IState_T__o *)v26,
      (const MethodInfo_3063640 *)Method_CStateManager_srcLineSprite__add__);
    v27 = (CStateManager_T__o *)*p_mFSM;
    v28 = (Il2CppObject *)sub_1B64ABC(srcLineSprite_StateQaaGray_TypeInfo);
    System_Object___ctor(v28, 0LL);
    if ( !v27
      || (CStateManager_object___add(
            v27,
            3,
            (IState_T__o *)v28,
            (const MethodInfo_3063640 *)Method_CStateManager_srcLineSprite__add__),
          v29 = (CStateManager_T__o *)*p_mFSM,
          v30 = (Il2CppObject *)sub_1B64ABC(srcLineSprite_StateQaaDisp_TypeInfo),
          System_Object___ctor(v30, 0LL),
          !v29) )
    {
LABEL_22:
      sub_1B64ACC(v21, v22);
    }
    CStateManager_object___add(
      v29,
      4,
      (IState_T__o *)v30,
      (const MethodInfo_3063640 *)Method_CStateManager_srcLineSprite__add__);
    srcLineSprite__SetState(this, 1, 0LL, v31);
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
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = id;
  if ( (byte_49FB9F7 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_12846/*"Spot_Line_"*/, method);
    sub_1B64870(&StringLiteral_1222/*"00"*/, v2);
    byte_49FB9F7 = 1;
  }
  v3 = System_Int32__ToString_62188848((int32_t)&v5, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
  return System_String__Concat_61383576((System_String_o *)StringLiteral_12846/*"Spot_Line_"*/, v3, 0LL);
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
  if ( (byte_49FB9FA & 1) == 0 )
  {
    this = (srcLineSprite_o *)sub_1B64870(&Method_CStateManager_srcLineSprite__getState__, method);
    byte_49FB9FA = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B64ACC(this, method);
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetContrast(srcLineSprite_o *this, float val, const MethodInfo *method)
{
  UIWidget_o *mcLineSprite; // x0
  float v4; // s3

  mcLineSprite = (UIWidget_o *)this->fields.mcLineSprite;
  if ( !mcLineSprite )
    sub_1B64ACC(0LL, method);
  v4 = 1.0;
  UIWidget__set_color(mcLineSprite, *(UnityEngine_Color_o *)&val, 0LL);
}


void __fastcall srcLineSprite__SetMapCtrl_SpotRoadInfo(
        srcLineSprite_o *this,
        MapControl_SpotRoadInfo_o *MapCtrl_SpotRoadInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.mMapCtrl_SpotRoadInfo = MapCtrl_SpotRoadInfo;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.mMapCtrl_SpotRoadInfo,
    (int32_t)MapCtrl_SpotRoadInfo,
    (int32_t)method,
    v3);
}


void __fastcall srcLineSprite__SetQaaColorAnim(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_34328384(this, isActive, 0.5, method);
}


void __fastcall srcLineSprite__SetQaaColorAnimQuick(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_34328384(this, isActive, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetQaaColorAnim_34328384(
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
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  float v20; // s9
  EasingObject_o *v21; // x21
  System_Action_o *v22; // x22
  System_Action_o *v23; // x23
  float v24; // s0

  if ( (byte_49FB9FD & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, is_disp);
    sub_1B64870(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1B64870(&Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__0__, v8);
    sub_1B64870(&Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__1__, v9);
    sub_1B64870(&srcLineSprite___c__DisplayClass39_0_TypeInfo, v10);
    byte_49FB9FD = 1;
  }
  v11 = sub_1B64ABC(srcLineSprite___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E8BC9C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 24) = Component_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)Component_object, v18, v19);
  v20 = is_disp ? 1.0 : 0.5;
  *(float *)(v11 + 32) = v20;
  v21 = *(EasingObject_o **)(v11 + 24);
  v22 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__0__,
    0LL);
  v23 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v11,
    Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__1__,
    0LL);
  if ( !v21 )
LABEL_12:
    sub_1B64ACC(v12, v13);
  if ( is_disp )
    v24 = 0.5;
  else
    v24 = 1.0;
  EasingObject__Play_46301296(v21, v24, v20, time, v22, v23, 0.0, 17, 0LL);
}


void __fastcall srcLineSprite__SetQaaScaleAnim(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_34327692(this, isDisp, 0.5, method);
}


void __fastcall srcLineSprite__SetQaaScaleAnimQuick(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_34327692(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetQaaScaleAnim_34327692(
        srcLineSprite_o *this,
        bool is_disp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *mcMyTrans; // x0
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Vector3_c *v13; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  int *p_y; // x10
  intptr_t *p_z; // x11
  struct UnityEngine_Vector3_StaticFields *v17; // x11
  int v18; // s1
  intptr_t v19; // s2
  struct UnityEngine_Vector3_StaticFields *v20; // x10
  _DWORD *p_x; // x8
  int *v22; // x9
  int *v23; // x10
  int v24; // s1
  int v25; // s2
  UnityEngine_GameObject_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  UnityEngine_GameObject_o *v32; // x0
  float x; // s8
  float y; // s9
  float *v35; // x21
  float v36; // s2
  float z; // s10
  float v38; // s1
  float v39; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB9FC & 1) == 0 )
  {
    sub_1B64870(&Method_UITweener_Begin_TweenPosition___, is_disp);
    sub_1B64870(&Method_UITweener_Begin_TweenScale___, v7);
    sub_1B64870(&StringLiteral_12920/*"StateQaaEnd"*/, v8);
    byte_49FB9FC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  mcMyTrans = (UnityEngine_Transform_o *)UITweener__Begin_object_(
                                           gameObject,
                                           time,
                                           (const MethodInfo_2EED0A8 *)Method_UITweener_Begin_TweenScale___);
  v12 = mcMyTrans;
  if ( is_disp )
  {
    if ( !byte_49F9201 )
    {
      mcMyTrans = (UnityEngine_Transform_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, v11);
      byte_49F9201 = 1;
    }
    v13 = UnityEngine_Vector3_TypeInfo;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = (int *)&static_fields->zeroVector.fields.y;
    p_z = (intptr_t *)&static_fields->zeroVector.fields.z;
  }
  else
  {
    if ( !byte_49F9206 )
    {
      mcMyTrans = (UnityEngine_Transform_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, v11);
      byte_49F9206 = 1;
    }
    v13 = UnityEngine_Vector3_TypeInfo;
    v17 = UnityEngine_Vector3_TypeInfo->static_fields;
    static_fields = (struct UnityEngine_Vector3_StaticFields *)&v17->oneVector;
    p_y = (int *)&v17->oneVector.fields.y;
    p_z = (intptr_t *)&v17->oneVector.fields.z;
  }
  if ( !v12 )
    goto LABEL_30;
  v18 = *p_y;
  v19 = *p_z;
  *(float *)&v12[5].monitor = static_fields->zeroVector.fields.x;
  HIDWORD(v12[5].monitor) = v18;
  v12[5].fields.m_CachedPtr = v19;
  if ( is_disp )
  {
    if ( !byte_49F9206 )
    {
      sub_1B64870(&UnityEngine_Vector3_TypeInfo, v11);
      v13 = UnityEngine_Vector3_TypeInfo;
      byte_49F9206 = 1;
    }
    v20 = v13->static_fields;
    p_x = (_DWORD *)&v20->oneVector.fields.x;
    v22 = (int *)&v20->oneVector.fields.y;
    v23 = (int *)&v20->oneVector.fields.z;
  }
  else
  {
    if ( !byte_49F9201 )
    {
      sub_1B64870(&UnityEngine_Vector3_TypeInfo, v11);
      v13 = UnityEngine_Vector3_TypeInfo;
      byte_49F9201 = 1;
    }
    p_x = (_DWORD *)&v13->static_fields->zeroVector.fields.x;
    v22 = p_x + 1;
    v23 = p_x + 2;
  }
  v24 = *v22;
  v25 = *v23;
  *((_DWORD *)&v12[5].fields + 1) = *p_x;
  LODWORD(v12[6].klass) = v24;
  HIDWORD(v12[6].klass) = v25;
  LODWORD(v12[1].monitor) = 2;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12[3].monitor = v26;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v12[3].monitor, (int32_t)v26, v27, v28);
  v29 = StringLiteral_12920/*"StateQaaEnd"*/;
  *(_QWORD *)&v12[3].fields.m_CachedPtr = StringLiteral_12920/*"StateQaaEnd"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v12[3].fields, v29, v30, v31);
  if ( time != 0.0 || is_disp )
  {
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    mcMyTrans = (UnityEngine_Transform_o *)UITweener__Begin_object_(
                                             v32,
                                             time,
                                             (const MethodInfo_2EED0A8 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.mcMyTrans )
      goto LABEL_30;
    x = this->fields.mcFrom.fields.x;
    y = this->fields.mcFrom.fields.y;
    v35 = (float *)mcMyTrans;
    *(UnityEngine_Vector3_o *)(&v36 - 2) = UnityEngine_Transform__get_localPosition(this->fields.mcMyTrans, 0LL);
    z = v36;
    v38 = y;
    v39 = x;
    if ( !is_disp )
    {
      mcMyTrans = this->fields.mcMyTrans;
      if ( !mcMyTrans )
        goto LABEL_30;
      *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_localPosition(mcMyTrans, 0LL);
    }
    if ( v35 )
    {
      v35[32] = v39;
      v35[33] = v38;
      v35[34] = v36;
      if ( !is_disp )
      {
LABEL_28:
        v35[35] = x;
        v35[36] = y;
        v35[37] = z;
        *((_DWORD *)v35 + 8) = 2;
        return;
      }
      mcMyTrans = this->fields.mcMyTrans;
      if ( mcMyTrans )
      {
        localPosition = UnityEngine_Transform__get_localPosition(mcMyTrans, 0LL);
        x = localPosition.fields.x;
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        goto LABEL_28;
      }
    }
LABEL_30:
    sub_1B64ACC(mcMyTrans, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetState(
        srcLineSprite_o *this,
        int32_t state,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v8; // x1
  CStateManager_T__o *v9; // x0

  if ( (byte_49FB9FB & 1) == 0 )
  {
    sub_1B64870(&Method_CStateManager_srcLineSprite__setState__, *(_QWORD *)&state);
    byte_49FB9FB = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1B64814((ServantStatusBattleListViewItem_o *)p_mStateEndAct, (int32_t)end_act, (int32_t)end_act, (int32_t)method);
  v9 = (CStateManager_T__o *)*(p_mStateEndAct - 13);
  if ( !v9 )
    sub_1B64ACC(0LL, v8);
  CStateManager_object___setState(v9, state, (const MethodInfo_30636CC *)Method_CStateManager_srcLineSprite__setState__);
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
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49FB9F9 & 1) == 0 )
  {
    sub_1B64870(&Method_CStateManager_srcLineSprite__update__, method);
    byte_49FB9F9 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_30636A8 *)Method_CStateManager_srcLineSprite__update__);
}


void __fastcall srcLineSprite__mfSetAtlas(
        srcLineSprite_o *this,
        UIAtlas_o *cAtlasP,
        System_String_o *sSpriteName,
        const MethodInfo *method)
{
  srcLineSprite_o *v4; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  v4 = this;
  this->fields.mcAtlasP = cAtlasP;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.mcAtlasP,
    (int32_t)cAtlasP,
    (int32_t)sSpriteName,
    (int32_t)method);
  v4->fields.msSpriteName = sSpriteName;
  v4 = (srcLineSprite_o *)((char *)v4 + 120);
  sub_1B64814((ServantStatusBattleListViewItem_o *)v4, (int32_t)sSpriteName, v6, v7);
  LOBYTE(v4[-1].fields.mcTweenAlphaP) = 1;
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
        (v7 = this->fields.mcTweenScaleP) == 0LL)
    || (v7->fields.duration = fTime, (mcTweenAlphaP = this->fields.mcTweenAlphaP) == 0LL) )
  {
LABEL_6:
    sub_1B64ACC(this, method);
  }
  mcTweenAlphaP->fields.duration = fTime;
  *(_QWORD *)&mcTweenAlphaP->fields.from = 0x3F80000000000000LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__mfSetPos2(
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
  int v24; // s0
  __int64 v28; // x1
  float mfWidth; // s0
  int32_t v30; // w8
  float v31; // s0
  unsigned int v32; // w11
  int32_t v33; // w8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s1.4,4:s2.4,8:s3.4

  this->fields.mcFrom = cFrom;
  this->fields.mcTo = cTo;
  y = cTo.fields.y;
  x = cTo.fields.x;
  v6 = cFrom.fields.y;
  v7 = cFrom.fields.x;
  if ( !byte_49F90FA )
  {
    sub_1B64870(&UnityEngine_Vector2_TypeInfo, method);
    byte_49F90FA = 1;
  }
  v9 = x - v7;
  v10 = y - v6;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v12 = static_fields->zeroVector.fields.x;
  v13 = static_fields->zeroVector.fields.y;
  if ( !byte_49FBBA4 )
  {
    sub_1B64870(&System_Math_TypeInfo, method);
    byte_49FBBA4 = 1;
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
  localPosition = UnityEngine_Transform__get_localPosition(mcMyTrans, 0LL);
  localPosition.fields.x = v22;
  localPosition.fields.y = (float)(v10 * 0.5) + v18;
  UnityEngine_Transform__set_localPosition(mcMyTrans, localPosition, 0LL);
  v23 = this->fields.mcMyTrans;
  v35.fields.x = 0.0;
  v35.fields.y = 0.0;
  v35.fields.z = 1.0;
  *(UnityEngine_Quaternion_o *)&v24 = UnityEngine_Quaternion__AngleAxis(v21, v35, 0LL);
  if ( !v23 )
LABEL_22:
    sub_1B64ACC(v14, method);
  UnityEngine_Transform__set_localRotation(v23, *(UnityEngine_Quaternion_o *)&v24, 0LL);
  mfWidth = this->fields.mfWidth;
  v30 = (int)mfWidth;
  if ( mfWidth == INFINITY )
    v30 = 0x80000000;
  this->fields.miLineH = v30;
  if ( !byte_49F9202 )
  {
    sub_1B64870(&System_Math_TypeInfo, v28);
    byte_49F9202 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v31 = sqrtf(v15);
  v32 = vcvtps_s32_f32(v31);
  if ( ceilf(v31) == INFINITY )
    v33 = 0x80000000;
  else
    v33 = v32;
  this->fields.miLineW = v33;
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

  if ( (byte_49FB9FF & 1) == 0 )
  {
    this = (srcLineSprite_StateMapMain_o *)sub_1B64870(&UnityEngine_Object_TypeInfo, that);
    byte_49FB9FF = 1;
  }
  if ( !that )
    goto LABEL_18;
  if ( !that->fields.mtIsUpdate )
    return;
  mcLineSprite = (UnityEngine_Object_o *)that->fields.mcLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (srcLineSprite_StateMapMain_o *)UnityEngine_Object__op_Inequality(0LL, mcLineSprite, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mcLineSprite;
    if ( v5 )
    {
      mAtlas = (UnityEngine_Object_o *)v5->fields.mAtlas;
      mcAtlasP = (UnityEngine_Object_o *)that->fields.mcAtlasP;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(mAtlas, mcAtlasP, 0LL) )
        goto LABEL_16;
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
            goto LABEL_16;
          }
        }
      }
    }
LABEL_18:
    sub_1B64ACC(this, that);
  }
LABEL_16:
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
      srcLineSprite__SetQaaColorAnim_34328384(that, 1, 0.5, method);
      break;
    case 1:
      ActionExtensions__Call(that->fields.mStateEndAct, 0LL);
      srcLineSprite__SetState(that, 1, 0LL, v7);
      break;
    case 0:
      this = (srcLineSprite_StateQaaDisp_o *)that->fields.mcLineSprite;
      if ( this )
      {
        v8.fields.r = 1.0;
        v8.fields.g = 1.0;
        v8.fields.b = 1.0;
        v8.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v8, 0LL);
        srcLineSprite__SetQaaScaleAnim_34327692(that, 1, 0.5, v6);
        return;
      }
LABEL_11:
      sub_1B64ACC(this, that);
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
      ActionExtensions__Call(that->fields.mStateEndAct, 0LL);
      srcLineSprite__SetState(that, 1, 0LL, v7);
      break;
    case 1:
      srcLineSprite__SetQaaColorAnim_34328384(that, 0, 0.5, method);
      break;
    case 0:
      this = (srcLineSprite_StateQaaGray_o *)that->fields.mcLineSprite;
      if ( this )
      {
        v8.fields.r = 0.5;
        v8.fields.g = 0.5;
        v8.fields.b = 0.5;
        v8.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v8, 0LL);
        srcLineSprite__SetQaaScaleAnim_34327692(that, 1, 0.5, v6);
        return;
      }
LABEL_11:
      sub_1B64ACC(this, that);
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
  const MethodInfo *v6; // x3

  if ( !that || (mMapCtrl_SpotRoadInfo = that->fields.mMapCtrl_SpotRoadInfo) == 0LL )
    sub_1B64ACC(this, that);
  dispType = mMapCtrl_SpotRoadInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
      srcLineSprite__SetQaaScaleAnim_34327692(that, 0, 0.5, method);
  }
  else
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0LL);
    srcLineSprite__SetState(that, 1, 0LL, v6);
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
    sub_1B64ACC(this, method);
  srcLineSprite__SetContrast((srcLineSprite_o *)this, eo->fields.mNow, method);
}


void __fastcall srcLineSprite___c__DisplayClass39_0___SetQaaColorAnim_b__1(
        srcLineSprite___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  srcLineSprite_o *_4__this; // x0
  struct srcLineSprite_o *v4; // x19
  const MethodInfo *v5; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (srcLineSprite__SetContrast(_4__this, this->fields.to, method), (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_1B64ACC(_4__this, method);
  }
  ActionExtensions__Call(v4->fields.mStateEndAct, 0LL);
  srcLineSprite__SetState(v4, 1, 0LL, v5);
}