void srcLineSprite___ctor(srcLineSprite_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C40226 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C40226 = 1;
  }
  this->fields.mfWidth = 20.0;
  v5 = StringLiteral_1/*""*/;
  this->fields.msSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.msSpriteName, v5, v2, v3);
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
  const MethodInfo *v10; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  CStateManager_T__o *v14; // x21
  Il2CppObject *v15; // x22
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x21
  Il2CppObject *v19; // x22
  CStateManager_T__o *v20; // x20
  Il2CppObject *v21; // x21
  const MethodInfo *v22; // x3

  if ( (byte_4C40220 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_srcLineSprite___ctor__);
    sub_1C37058(&Method_CStateManager_srcLineSprite__add__);
    sub_1C37058(&CStateManager_srcLineSprite__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&srcLineSprite_StateMapMain_TypeInfo);
    sub_1C37058(&srcLineSprite_StateNone_TypeInfo);
    sub_1C37058(&srcLineSprite_StateQaaDisp_TypeInfo);
    sub_1C37058(&srcLineSprite_StateQaaGray_TypeInfo);
    sub_1C37058(&srcLineSprite_StateQaaHide_TypeInfo);
    byte_4C40220 = 1;
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
    v8 = (CStateManager_T__o *)sub_1C372A4(CStateManager_srcLineSprite__TypeInfo);
    CStateManager_object____ctor(
      v8,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_332CF70 *)Method_CStateManager_srcLineSprite___ctor__);
    this->fields.mFSM = (struct CStateManager_srcLineSprite__o *)v8;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_1C372A4(srcLineSprite_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_22;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_332D018 *)Method_CStateManager_srcLineSprite__add__);
    v14 = (CStateManager_T__o *)*p_mFSM;
    v15 = (Il2CppObject *)sub_1C372A4(srcLineSprite_StateMapMain_TypeInfo);
    System_Object___ctor(v15, 0);
    if ( !v14 )
      goto LABEL_22;
    CStateManager_object___add(
      v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_332D018 *)Method_CStateManager_srcLineSprite__add__);
    v16 = (CStateManager_T__o *)*p_mFSM;
    v17 = (Il2CppObject *)sub_1C372A4(srcLineSprite_StateQaaHide_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_22;
    CStateManager_object___add(
      v16,
      2,
      (IState_T__o *)v17,
      (const MethodInfo_332D018 *)Method_CStateManager_srcLineSprite__add__);
    v18 = (CStateManager_T__o *)*p_mFSM;
    v19 = (Il2CppObject *)sub_1C372A4(srcLineSprite_StateQaaGray_TypeInfo);
    System_Object___ctor(v19, 0);
    if ( !v18
      || (CStateManager_object___add(
            v18,
            3,
            (IState_T__o *)v19,
            (const MethodInfo_332D018 *)Method_CStateManager_srcLineSprite__add__),
          v20 = (CStateManager_T__o *)*p_mFSM,
          v21 = (Il2CppObject *)sub_1C372A4(srcLineSprite_StateQaaDisp_TypeInfo),
          System_Object___ctor(v21, 0),
          !v20) )
    {
LABEL_22:
      sub_1C372B4(v13);
    }
    CStateManager_object___add(
      v20,
      4,
      (IState_T__o *)v21,
      (const MethodInfo_332D018 *)Method_CStateManager_srcLineSprite__add__);
    srcLineSprite__SetState(this, 1, 0, v22);
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
  if ( (byte_4C4021F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_13004/*"Spot_Line_"*/);
    sub_1C37058(&StringLiteral_1129/*"00"*/);
    byte_4C4021F = 1;
  }
  v2 = System_Int32__ToString_65071764((int32_t)&v4, (System_String_o *)StringLiteral_1129/*"00"*/, 0);
  return System_String__Concat_63561656((System_String_o *)StringLiteral_13004/*"Spot_Line_"*/, v2, 0);
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
  if ( (byte_4C40222 & 1) == 0 )
  {
    this = (srcLineSprite_o *)sub_1C37058(&Method_CStateManager_srcLineSprite__getState__);
    byte_4C40222 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(this);
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
void srcLineSprite__SetContrast(srcLineSprite_o *this, float val, const MethodInfo *method)
{
  UIWidget_o *mcLineSprite; // x0
  float v4; // s3

  mcLineSprite = (UIWidget_o *)this->fields.mcLineSprite;
  if ( !mcLineSprite )
    sub_1C372B4(0);
  v4 = 1.0;
  UIWidget__set_color(mcLineSprite, *(UnityEngine_Color_o *)&val, 0);
}


void srcLineSprite__SetMapCtrl_SpotRoadInfo(
        srcLineSprite_o *this,
        MapControl_SpotRoadInfo_o *MapCtrl_SpotRoadInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mMapCtrl_SpotRoadInfo = MapCtrl_SpotRoadInfo;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.mMapCtrl_SpotRoadInfo,
    (int32_t)MapCtrl_SpotRoadInfo,
    (int32_t)method,
    v3);
}


void srcLineSprite__SetQaaColorAnim(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_37206860(this, isActive, 0.5, method);
}


void srcLineSprite__SetQaaColorAnimQuick(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_37206860(this, isActive, 0.0, method);
}


void srcLineSprite__SetQaaColorAnim_37206860(srcLineSprite_o *this, bool is_disp, float time, const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  float v15; // s9
  EasingObject_o *v16; // x21
  System_Action_o *v17; // x22
  System_Action_o *v18; // x23
  float v19; // s0

  if ( (byte_4C40225 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C37058(&Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__0__);
    sub_1C37058(&Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__1__);
    sub_1C37058(&srcLineSprite___c__DisplayClass39_0_TypeInfo);
    byte_4C40225 = 1;
  }
  v7 = sub_1C372A4(srcLineSprite___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 24) = Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)Component_object, v13, v14);
  v15 = is_disp ? 1.0 : 0.5;
  *(float *)(v7 + 32) = v15;
  v16 = *(EasingObject_o **)(v7 + 24);
  v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v7, Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__0__, 0);
  v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)v7, Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__1__, 0);
  if ( !v16 )
LABEL_12:
    sub_1C372B4(v8);
  if ( is_disp )
    v19 = 0.5;
  else
    v19 = 1.0;
  EasingObject__Play_49055252(v16, v19, v15, time, v17, v18, 0.0, 17, 0);
}


void srcLineSprite__SetQaaScaleAnim(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_37206168(this, isDisp, 0.5, method);
}


void srcLineSprite__SetQaaScaleAnimQuick(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_37206168(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void srcLineSprite__SetQaaScaleAnim_37206168(srcLineSprite_o *this, bool is_disp, float time, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *mcMyTrans; // x0
  UnityEngine_Transform_o *v9; // x21
  UnityEngine_Vector3_c *v10; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  int *p_y; // x10
  int *p_z; // x11
  struct UnityEngine_Vector3_StaticFields *v14; // x11
  int v15; // s1
  int v16; // s2
  struct UnityEngine_Vector3_StaticFields *v17; // x10
  _DWORD *p_x; // x8
  int *v19; // x9
  int *v20; // x10
  int v21; // s1
  int v22; // s2
  UnityEngine_GameObject_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_GameObject_o *v29; // x0
  float x; // s8
  float y; // s9
  UnityEngine_Transform_o *v32; // x21
  float z; // s10
  float v34; // s1
  float v35; // s0 OVERLAPPED
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40224 & 1) == 0 )
  {
    sub_1C37058(&Method_UITweener_Begin_TweenPosition___);
    sub_1C37058(&Method_UITweener_Begin_TweenScale___);
    sub_1C37058(&StringLiteral_13077/*"StateQaaEnd"*/);
    byte_4C40224 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  mcMyTrans = (UnityEngine_Transform_o *)UITweener__Begin_object_(
                                           gameObject,
                                           time,
                                           (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenScale___);
  v9 = mcMyTrans;
  if ( is_disp )
  {
    if ( !byte_4C3C921 )
    {
      mcMyTrans = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    v10 = UnityEngine_Vector3_TypeInfo;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = (int *)&static_fields->zeroVector.fields.y;
    p_z = (int *)&static_fields->zeroVector.fields.z;
  }
  else
  {
    if ( !byte_4C3C926 )
    {
      mcMyTrans = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    v10 = UnityEngine_Vector3_TypeInfo;
    v14 = UnityEngine_Vector3_TypeInfo->static_fields;
    static_fields = (struct UnityEngine_Vector3_StaticFields *)&v14->oneVector;
    p_y = (int *)&v14->oneVector.fields.y;
    p_z = (int *)&v14->oneVector.fields.z;
  }
  if ( !v9 )
    goto LABEL_30;
  v15 = *p_y;
  v16 = *p_z;
  *(float *)&v9[5].monitor = static_fields->zeroVector.fields.x;
  HIDWORD(v9[5].monitor) = v15;
  LODWORD(v9[5].fields.m_CachedPtr) = v16;
  if ( is_disp )
  {
    if ( !byte_4C3C926 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      v10 = UnityEngine_Vector3_TypeInfo;
      byte_4C3C926 = 1;
    }
    v17 = v10->static_fields;
    p_x = (_DWORD *)&v17->oneVector.fields.x;
    v19 = (int *)&v17->oneVector.fields.y;
    v20 = (int *)&v17->oneVector.fields.z;
  }
  else
  {
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      v10 = UnityEngine_Vector3_TypeInfo;
      byte_4C3C921 = 1;
    }
    p_x = (_DWORD *)&v10->static_fields->zeroVector.fields.x;
    v19 = p_x + 1;
    v20 = p_x + 2;
  }
  v21 = *v19;
  v22 = *v20;
  HIDWORD(v9[5].fields.m_CachedPtr) = *p_x;
  LODWORD(v9[6].klass) = v21;
  HIDWORD(v9[6].klass) = v22;
  LODWORD(v9[1].monitor) = 2;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v9[3].monitor = v23;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9[3].monitor, (int32_t)v23, v24, v25);
  v26 = StringLiteral_13077/*"StateQaaEnd"*/;
  v9[3].fields.m_CachedPtr = StringLiteral_13077/*"StateQaaEnd"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9[3].fields, v26, v27, v28);
  if ( time != 0.0 || is_disp )
  {
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    mcMyTrans = (UnityEngine_Transform_o *)UITweener__Begin_object_(
                                             v29,
                                             time,
                                             (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.mcMyTrans )
      goto LABEL_30;
    x = this->fields.mcFrom.fields.x;
    y = this->fields.mcFrom.fields.y;
    v32 = mcMyTrans;
    localPosition = UnityEngine_Transform__get_localPosition(this->fields.mcMyTrans, 0);
    z = localPosition.fields.z;
    v34 = y;
    v35 = x;
    if ( !is_disp )
    {
      mcMyTrans = this->fields.mcMyTrans;
      if ( !mcMyTrans )
        goto LABEL_30;
      *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Transform__get_localPosition(mcMyTrans, 0);
    }
    if ( v32 )
    {
      *(float *)&v32[5].monitor = v35;
      *((float *)&v32[5].monitor + 1) = v34;
      *(float *)&v32[5].fields.m_CachedPtr = localPosition.fields.z;
      if ( !is_disp )
      {
LABEL_28:
        *((float *)&v32[5].fields.m_CachedPtr + 1) = x;
        *(float *)&v32[6].klass = y;
        *((float *)&v32[6].klass + 1) = z;
        LODWORD(v32[1].monitor) = 2;
        return;
      }
      mcMyTrans = this->fields.mcMyTrans;
      if ( mcMyTrans )
      {
        v37 = UnityEngine_Transform__get_localPosition(mcMyTrans, 0);
        x = v37.fields.x;
        y = v37.fields.y;
        z = v37.fields.z;
        goto LABEL_28;
      }
    }
LABEL_30:
    sub_1C372B4(mcMyTrans);
  }
}


void srcLineSprite__SetState(srcLineSprite_o *this, int32_t state, System_Action_o *end_act, const MethodInfo *method)
{
  struct System_Action_o **p_mStateEndAct; // x21
  CStateManager_T__o *v8; // x0

  if ( (byte_4C40223 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_srcLineSprite__setState__);
    byte_4C40223 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1C36FFC((CGThumbnailListItem_o *)p_mStateEndAct, (int32_t)end_act, (int32_t)end_act, method);
  v8 = (CStateManager_T__o *)*(p_mStateEndAct - 13);
  if ( !v8 )
    sub_1C372B4(0);
  CStateManager_object___setState(v8, state, (const MethodInfo_332D0A4 *)Method_CStateManager_srcLineSprite__setState__);
}


void srcLineSprite__Start(srcLineSprite_o *this, const MethodInfo *method)
{
  ;
}


void srcLineSprite__StateQaaEnd(srcLineSprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ActionExtensions__Call(this->fields.mStateEndAct, 0);
  srcLineSprite__SetState(this, 1, 0, v3);
}


void srcLineSprite__Update(srcLineSprite_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C40221 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_srcLineSprite__update__);
    byte_4C40221 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_332D080 *)Method_CStateManager_srcLineSprite__update__);
}


void srcLineSprite__mfSetAtlas(
        srcLineSprite_o *this,
        UIAtlas_o *cAtlasP,
        System_String_o *sSpriteName,
        const MethodInfo *method)
{
  srcLineSprite_o *v4; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v4 = this;
  this->fields.mcAtlasP = cAtlasP;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mcAtlasP, (int32_t)cAtlasP, (int32_t)sSpriteName, method);
  v4->fields.msSpriteName = sSpriteName;
  v4 = (srcLineSprite_o *)((char *)v4 + 120);
  sub_1C36FFC((CGThumbnailListItem_o *)v4, (int32_t)sSpriteName, v6, v7);
  LOBYTE(v4[-1].fields.mcTweenAlphaP) = 1;
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
    sub_1C372B4(this);
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
  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C3C81A = 1;
  }
  v9 = x - v7;
  v10 = y - v6;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v12 = static_fields->zeroVector.fields.x;
  v13 = static_fields->zeroVector.fields.y;
  if ( !byte_4C3CFE5 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3CFE5 = 1;
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
    sub_1C372B4(v14);
  UnityEngine_Transform__set_localRotation(v23, v31, 0);
  mfWidth = this->fields.mfWidth;
  v25 = (int)mfWidth;
  if ( mfWidth == INFINITY )
    v25 = 0x80000000;
  this->fields.miLineH = v25;
  if ( !byte_4C3C922 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C922 = 1;
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

  if ( (byte_4C40227 & 1) == 0 )
  {
    this = (srcLineSprite_StateMapMain_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40227 = 1;
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
    sub_1C372B4(this);
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
      srcLineSprite__SetQaaColorAnim_37206860(that, 1, 0.5, method);
      break;
    case 1:
      ActionExtensions__Call(that->fields.mStateEndAct, 0);
      srcLineSprite__SetState(that, 1, 0, v7);
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
        srcLineSprite__SetQaaScaleAnim_37206168(that, 1, 0.5, v6);
        return;
      }
LABEL_11:
      sub_1C372B4(this);
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
      srcLineSprite__SetState(that, 1, 0, v7);
      break;
    case 1:
      srcLineSprite__SetQaaColorAnim_37206860(that, 0, 0.5, method);
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
        srcLineSprite__SetQaaScaleAnim_37206168(that, 1, 0.5, v6);
        return;
      }
LABEL_11:
      sub_1C372B4(this);
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
    sub_1C372B4(this);
  dispType = mMapCtrl_SpotRoadInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
      srcLineSprite__SetQaaScaleAnim_37206168(that, 0, 0.5, method);
  }
  else
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0);
    srcLineSprite__SetState(that, 1, 0, v6);
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


void srcLineSprite___c__DisplayClass39_0___ctor(srcLineSprite___c__DisplayClass39_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void srcLineSprite___c__DisplayClass39_0___SetQaaColorAnim_b__0(
        srcLineSprite___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8

  eo = this->fields.eo;
  if ( !eo || (this = (srcLineSprite___c__DisplayClass39_0_o *)this->fields.__4__this) == 0 )
    sub_1C372B4(this);
  srcLineSprite__SetContrast((srcLineSprite_o *)this, eo->fields.mNow, method);
}


void srcLineSprite___c__DisplayClass39_0___SetQaaColorAnim_b__1(
        srcLineSprite___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  srcLineSprite_o *_4__this; // x0
  struct srcLineSprite_o *v4; // x19
  const MethodInfo *v5; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this || (srcLineSprite__SetContrast(_4__this, this->fields.to, method), (v4 = this->fields.__4__this) == 0) )
    sub_1C372B4(_4__this);
  ActionExtensions__Call(v4->fields.mStateEndAct, 0);
  srcLineSprite__SetState(v4, 1, 0, v5);
}