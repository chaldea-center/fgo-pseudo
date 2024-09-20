void __fastcall srcLineSprite___ctor(srcLineSprite_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A58613 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58613 = 1;
  }
  this->fields.mfWidth = 20.0;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.msSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.msSpriteName, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall srcLineSprite__Awake(srcLineSprite_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mcMyTrans; // x20
  UnityEngine_Object_o *mcLineSprite; // x20
  UnityEngine_Object_o *mcTweenAlphaP; // x20
  UnityEngine_Object_o *mcTweenScaleP; // x20
  struct CStateManager_srcLineSprite__o **p_mFSM; // x20
  CStateManager_T__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  CStateManager_T__o *mFSM; // x21
  srcLineSprite_StateNone_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  srcLineSprite_StateMapMain_o *v16; // x22
  CStateManager_T__o *v17; // x21
  srcLineSprite_StateQaaHide_o *v18; // x22
  CStateManager_T__o *v19; // x21
  srcLineSprite_StateQaaGray_o *v20; // x22
  CStateManager_T__o *v21; // x20
  srcLineSprite_StateQaaDisp_o *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_4A5860D & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_srcLineSprite___ctor__);
    sub_1B885B0(&Method_CStateManager_srcLineSprite__add__);
    sub_1B885B0(&CStateManager_srcLineSprite__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&srcLineSprite_StateMapMain_TypeInfo);
    sub_1B885B0(&srcLineSprite_StateNone_TypeInfo);
    sub_1B885B0(&srcLineSprite_StateQaaDisp_TypeInfo);
    sub_1B885B0(&srcLineSprite_StateQaaGray_TypeInfo);
    sub_1B885B0(&srcLineSprite_StateQaaHide_TypeInfo);
    byte_4A5860D = 1;
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
    v8 = (CStateManager_T__o *)sub_1B887FC(CStateManager_srcLineSprite__TypeInfo);
    CStateManager_object____ctor(
      v8,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_30AAD34 *)Method_CStateManager_srcLineSprite___ctor__);
    this->fields.mFSM = (struct CStateManager_srcLineSprite__o *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (srcLineSprite_StateNone_o *)sub_1B887FC(srcLineSprite_StateNone_TypeInfo);
    srcLineSprite_StateNone___ctor(v12, 0LL);
    if ( !mFSM )
      goto LABEL_22;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_30AADDC *)Method_CStateManager_srcLineSprite__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (srcLineSprite_StateMapMain_o *)sub_1B887FC(srcLineSprite_StateMapMain_TypeInfo);
    srcLineSprite_StateMapMain___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_22;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_30AADDC *)Method_CStateManager_srcLineSprite__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (srcLineSprite_StateQaaHide_o *)sub_1B887FC(srcLineSprite_StateQaaHide_TypeInfo);
    srcLineSprite_StateQaaHide___ctor(v18, 0LL);
    if ( !v17 )
      goto LABEL_22;
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_30AADDC *)Method_CStateManager_srcLineSprite__add__);
    v19 = (CStateManager_T__o *)*p_mFSM;
    v20 = (srcLineSprite_StateQaaGray_o *)sub_1B887FC(srcLineSprite_StateQaaGray_TypeInfo);
    srcLineSprite_StateQaaGray___ctor(v20, 0LL);
    if ( !v19
      || (CStateManager_object___add(
            v19,
            3,
            (IState_T__o *)v20,
            (const MethodInfo_30AADDC *)Method_CStateManager_srcLineSprite__add__),
          v21 = (CStateManager_T__o *)*p_mFSM,
          v22 = (srcLineSprite_StateQaaDisp_o *)sub_1B887FC(srcLineSprite_StateQaaDisp_TypeInfo),
          srcLineSprite_StateQaaDisp___ctor(v22, 0LL),
          !v21) )
    {
LABEL_22:
      sub_1B8880C(v13, v14);
    }
    CStateManager_object___add(
      v21,
      4,
      (IState_T__o *)v22,
      (const MethodInfo_30AADDC *)Method_CStateManager_srcLineSprite__add__);
    srcLineSprite__SetState(this, 1, 0LL, v23);
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
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = id;
  if ( (byte_4A5860C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12906/*"Spot_Line_"*/);
    sub_1B885B0(&StringLiteral_1221/*"00"*/);
    byte_4A5860C = 1;
  }
  v2 = System_Int32__ToString_62512312((int32_t)&v4, (System_String_o *)StringLiteral_1221/*"00"*/, 0LL);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_12906/*"Spot_Line_"*/, v2, 0LL);
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
  if ( (byte_4A5860F & 1) == 0 )
  {
    this = (srcLineSprite_o *)sub_1B885B0(&Method_CStateManager_srcLineSprite__getState__);
    byte_4A5860F = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(this, method);
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetContrast(srcLineSprite_o *this, float val, const MethodInfo *method)
{
  UIWidget_o *mcLineSprite; // x0
  float v4; // s3

  mcLineSprite = (UIWidget_o *)this->fields.mcLineSprite;
  if ( !mcLineSprite )
    sub_1B8880C(0LL, method);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mMapCtrl_SpotRoadInfo,
    (int32_t)MapCtrl_SpotRoadInfo,
    (int32_t)method,
    v3);
}


void __fastcall srcLineSprite__SetQaaColorAnim(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_34622124(this, isActive, 0.5, method);
}


void __fastcall srcLineSprite__SetQaaColorAnimQuick(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_34622124(this, isActive, 0.0, method);
}


void __fastcall srcLineSprite__SetQaaColorAnim_34622124(
        srcLineSprite_o *this,
        bool is_disp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  float v16; // s9
  EasingObject_o *v17; // x21
  System_Action_o *v18; // x22
  System_Action_o *v19; // x23
  float v20; // s0

  if ( (byte_4A58612 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__0__);
    sub_1B885B0(&Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__1__);
    sub_1B885B0(&srcLineSprite___c__DisplayClass39_0_TypeInfo);
    byte_4A58612 = 1;
  }
  v7 = sub_1B887FC(srcLineSprite___c__DisplayClass39_0_TypeInfo);
  srcLineSprite___c__DisplayClass39_0___ctor((srcLineSprite___c__DisplayClass39_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 24) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)Component_object, v14, v15);
  v16 = is_disp ? 1.0 : 0.5;
  *(float *)(v7 + 32) = v16;
  v17 = *(EasingObject_o **)(v7 + 24);
  v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)v7, Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__0__, 0LL);
  v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)v7, Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__1__, 0LL);
  if ( !v17 )
LABEL_12:
    sub_1B8880C(v8, v9);
  if ( is_disp )
    v20 = 0.5;
  else
    v20 = 1.0;
  EasingObject__Play_46570564(v17, v20, v16, time, v18, v19, 0.0, 17, 0LL);
}


void __fastcall srcLineSprite__SetQaaScaleAnim(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_34621432(this, isDisp, 0.5, method);
}


void __fastcall srcLineSprite__SetQaaScaleAnimQuick(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_34621432(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetQaaScaleAnim_34621432(
        srcLineSprite_o *this,
        bool is_disp,
        float time,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *mcMyTrans; // x0
  __int64 v9; // x1
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Vector3_c *v11; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  int *p_y; // x10
  intptr_t *p_z; // x11
  struct UnityEngine_Vector3_StaticFields *v15; // x11
  int v16; // s1
  intptr_t v17; // s2
  struct UnityEngine_Vector3_StaticFields *v18; // x10
  _DWORD *p_x; // x8
  int *v20; // x9
  int *v21; // x10
  int v22; // s1
  int v23; // s2
  UnityEngine_GameObject_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  UnityEngine_GameObject_o *v30; // x0
  float x; // s8
  float y; // s9
  float *v33; // x21
  float v34; // s2
  float z; // s10
  float v36; // s1
  float v37; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A58611 & 1) == 0 )
  {
    sub_1B885B0(&Method_UITweener_Begin_TweenPosition___);
    sub_1B885B0(&Method_UITweener_Begin_TweenScale___);
    sub_1B885B0(&StringLiteral_12980/*"StateQaaEnd"*/);
    byte_4A58611 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  mcMyTrans = (UnityEngine_Transform_o *)UITweener__Begin_object_(
                                           gameObject,
                                           time,
                                           (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenScale___);
  v10 = mcMyTrans;
  if ( is_disp )
  {
    if ( !byte_4A55CE1 )
    {
      mcMyTrans = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    v11 = UnityEngine_Vector3_TypeInfo;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = (int *)&static_fields->zeroVector.fields.y;
    p_z = (intptr_t *)&static_fields->zeroVector.fields.z;
  }
  else
  {
    if ( !byte_4A55CE6 )
    {
      mcMyTrans = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    v11 = UnityEngine_Vector3_TypeInfo;
    v15 = UnityEngine_Vector3_TypeInfo->static_fields;
    static_fields = (struct UnityEngine_Vector3_StaticFields *)&v15->oneVector;
    p_y = (int *)&v15->oneVector.fields.y;
    p_z = (intptr_t *)&v15->oneVector.fields.z;
  }
  if ( !v10 )
    goto LABEL_30;
  v16 = *p_y;
  v17 = *p_z;
  *(float *)&v10[5].monitor = static_fields->zeroVector.fields.x;
  HIDWORD(v10[5].monitor) = v16;
  v10[5].fields.m_CachedPtr = v17;
  if ( is_disp )
  {
    if ( !byte_4A55CE6 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      v11 = UnityEngine_Vector3_TypeInfo;
      byte_4A55CE6 = 1;
    }
    v18 = v11->static_fields;
    p_x = (_DWORD *)&v18->oneVector.fields.x;
    v20 = (int *)&v18->oneVector.fields.y;
    v21 = (int *)&v18->oneVector.fields.z;
  }
  else
  {
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      v11 = UnityEngine_Vector3_TypeInfo;
      byte_4A55CE1 = 1;
    }
    p_x = (_DWORD *)&v11->static_fields->zeroVector.fields.x;
    v20 = p_x + 1;
    v21 = p_x + 2;
  }
  v22 = *v20;
  v23 = *v21;
  *((_DWORD *)&v10[5].fields + 1) = *p_x;
  LODWORD(v10[6].klass) = v22;
  HIDWORD(v10[6].klass) = v23;
  LODWORD(v10[1].monitor) = 2;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10[3].monitor = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10[3].monitor, (int32_t)v24, v25, v26);
  v27 = StringLiteral_12980/*"StateQaaEnd"*/;
  *(_QWORD *)&v10[3].fields.m_CachedPtr = StringLiteral_12980/*"StateQaaEnd"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10[3].fields, v27, v28, v29);
  if ( time != 0.0 || is_disp )
  {
    v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    mcMyTrans = (UnityEngine_Transform_o *)UITweener__Begin_object_(
                                             v30,
                                             time,
                                             (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.mcMyTrans )
      goto LABEL_30;
    x = this->fields.mcFrom.fields.x;
    y = this->fields.mcFrom.fields.y;
    v33 = (float *)mcMyTrans;
    *(UnityEngine_Vector3_o *)(&v34 - 2) = UnityEngine_Transform__get_localPosition(this->fields.mcMyTrans, 0LL);
    z = v34;
    v36 = y;
    v37 = x;
    if ( !is_disp )
    {
      mcMyTrans = this->fields.mcMyTrans;
      if ( !mcMyTrans )
        goto LABEL_30;
      *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Transform__get_localPosition(mcMyTrans, 0LL);
    }
    if ( v33 )
    {
      v33[32] = v37;
      v33[33] = v36;
      v33[34] = v34;
      if ( !is_disp )
      {
LABEL_28:
        v33[35] = x;
        v33[36] = y;
        v33[37] = z;
        *((_DWORD *)v33 + 8) = 2;
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
    sub_1B8880C(mcMyTrans, v9);
  }
}


void __fastcall srcLineSprite__SetState(
        srcLineSprite_o *this,
        int32_t state,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v8; // x1
  CStateManager_T__o *v9; // x0

  if ( (byte_4A58610 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_srcLineSprite__setState__);
    byte_4A58610 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_mStateEndAct, (int32_t)end_act, (int32_t)end_act, (int32_t)method);
  v9 = (CStateManager_T__o *)*(p_mStateEndAct - 13);
  if ( !v9 )
    sub_1B8880C(0LL, v8);
  CStateManager_object___setState(v9, state, (const MethodInfo_30AAE68 *)Method_CStateManager_srcLineSprite__setState__);
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

  if ( (byte_4A5860E & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_srcLineSprite__update__);
    byte_4A5860E = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_30AAE44 *)Method_CStateManager_srcLineSprite__update__);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mcAtlasP,
    (int32_t)cAtlasP,
    (int32_t)sSpriteName,
    (int32_t)method);
  v4->fields.msSpriteName = sSpriteName;
  v4 = (srcLineSprite_o *)((char *)v4 + 120);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v4, (int32_t)sSpriteName, v6, v7);
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
    sub_1B8880C(this, method);
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
  float mfWidth; // s0
  int32_t v29; // w8
  float v30; // s0
  unsigned int v31; // w11
  int32_t v32; // w8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4

  this->fields.mcFrom = cFrom;
  this->fields.mcTo = cTo;
  y = cTo.fields.y;
  x = cTo.fields.x;
  v6 = cFrom.fields.y;
  v7 = cFrom.fields.x;
  if ( !byte_4A55BDA )
  {
    sub_1B885B0(&UnityEngine_Vector2_TypeInfo);
    byte_4A55BDA = 1;
  }
  v9 = x - v7;
  v10 = y - v6;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v12 = static_fields->zeroVector.fields.x;
  v13 = static_fields->zeroVector.fields.y;
  if ( !byte_4A5861B )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5861B = 1;
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
  v34.fields.x = 0.0;
  v34.fields.y = 0.0;
  v34.fields.z = 1.0;
  *(UnityEngine_Quaternion_o *)&v24 = UnityEngine_Quaternion__AngleAxis(v21, v34, 0LL);
  if ( !v23 )
LABEL_22:
    sub_1B8880C(v14, method);
  UnityEngine_Transform__set_localRotation(v23, *(UnityEngine_Quaternion_o *)&v24, 0LL);
  mfWidth = this->fields.mfWidth;
  v29 = (int)mfWidth;
  if ( mfWidth == INFINITY )
    v29 = 0x80000000;
  this->fields.miLineH = v29;
  if ( !byte_4A55CE2 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CE2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v30 = sqrtf(v15);
  v31 = vcvtps_s32_f32(v30);
  if ( ceilf(v30) == INFINITY )
    v32 = 0x80000000;
  else
    v32 = v31;
  this->fields.miLineW = v32;
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

  if ( (byte_4A586F2 & 1) == 0 )
  {
    this = (srcLineSprite_StateMapMain_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A586F2 = 1;
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
    sub_1B8880C(this, that);
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

  if ( !that || (mMapCtrl_SpotRoadInfo = that->fields.mMapCtrl_SpotRoadInfo) == 0LL )
    sub_1B8880C(this, that);
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
    sub_1B8880C(this, that);
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
    sub_1B8880C(this, that);
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
    sub_1B8880C(this, method);
  srcLineSprite__SetContrast((srcLineSprite_o *)this, eo->fields.mNow, 0LL);
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
    sub_1B8880C(_4__this, method);
  }
  srcLineSprite__StateQaaEnd(_4__this, 0LL);
}