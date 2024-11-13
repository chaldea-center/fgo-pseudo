void __fastcall srcLineSprite___ctor(srcLineSprite_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1

  if ( (byte_4B13643 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B13643 = 1;
  }
  this->fields.mfWidth = 20.0;
  v9 = StringLiteral_1/*""*/;
  this->fields.msSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.msSpriteName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall srcLineSprite__Awake(srcLineSprite_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *mcMyTrans; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  UnityEngine_Object_o *mcLineSprite; // x20
  UnityEngine_Object_o *mcTweenAlphaP; // x20
  UnityEngine_Object_o *mcTweenScaleP; // x20
  struct CStateManager_srcLineSprite__o **p_mFSM; // x20
  CStateManager_T__o *v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  CStateManager_T__o *mFSM; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  Il2CppObject *v39; // x22
  __int64 v40; // x0
  __int64 v41; // x1
  CStateManager_T__o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  Il2CppObject *v46; // x22
  CStateManager_T__o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  Il2CppObject *v51; // x22
  CStateManager_T__o *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  Il2CppObject *v56; // x22
  CStateManager_T__o *v57; // x20
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  Il2CppObject *v61; // x21
  const MethodInfo *v62; // x3

  if ( (byte_4B1363D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_srcLineSprite___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_srcLineSprite__add__, v4, v5);
    sub_1BCA7E0(&CStateManager_srcLineSprite__TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&srcLineSprite_StateMapMain_TypeInfo, v10, v11);
    sub_1BCA7E0(&srcLineSprite_StateNone_TypeInfo, v12, v13);
    sub_1BCA7E0(&srcLineSprite_StateQaaDisp_TypeInfo, v14, v15);
    sub_1BCA7E0(&srcLineSprite_StateQaaGray_TypeInfo, v16, v17);
    sub_1BCA7E0(&srcLineSprite_StateQaaHide_TypeInfo, v18, v19);
    byte_4B1363D = 1;
  }
  mcMyTrans = (UnityEngine_Object_o *)this->fields.mcMyTrans;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(0LL, mcMyTrans, 0LL) )
  {
    mcLineSprite = (UnityEngine_Object_o *)this->fields.mcLineSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( !UnityEngine_Object__op_Equality(0LL, mcLineSprite, 0LL) )
    {
      mcTweenAlphaP = (UnityEngine_Object_o *)this->fields.mcTweenAlphaP;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      if ( !UnityEngine_Object__op_Equality(0LL, mcTweenAlphaP, 0LL) )
      {
        mcTweenScaleP = (UnityEngine_Object_o *)this->fields.mcTweenScaleP;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
        UnityEngine_Object__op_Equality(0LL, mcTweenScaleP, 0LL);
      }
    }
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v28 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_srcLineSprite__TypeInfo, v21, v22, v23);
    CStateManager_object____ctor(
      v28,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_313FBC4 *)Method_CStateManager_srcLineSprite___ctor__);
    this->fields.mFSM = (struct CStateManager_srcLineSprite__o *)v28;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v28, v29, v30, v31, v32, v33, v34);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v39 = (Il2CppObject *)sub_1BCAA2C(srcLineSprite_StateNone_TypeInfo, v36, v37, v38);
    System_Object___ctor(v39, 0LL);
    if ( !mFSM )
      goto LABEL_22;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v39,
      (const MethodInfo_313FC6C *)Method_CStateManager_srcLineSprite__add__);
    v42 = (CStateManager_T__o *)*p_mFSM;
    v46 = (Il2CppObject *)sub_1BCAA2C(srcLineSprite_StateMapMain_TypeInfo, v43, v44, v45);
    System_Object___ctor(v46, 0LL);
    if ( !v42 )
      goto LABEL_22;
    CStateManager_object___add(
      v42,
      1,
      (IState_T__o *)v46,
      (const MethodInfo_313FC6C *)Method_CStateManager_srcLineSprite__add__);
    v47 = (CStateManager_T__o *)*p_mFSM;
    v51 = (Il2CppObject *)sub_1BCAA2C(srcLineSprite_StateQaaHide_TypeInfo, v48, v49, v50);
    System_Object___ctor(v51, 0LL);
    if ( !v47 )
      goto LABEL_22;
    CStateManager_object___add(
      v47,
      2,
      (IState_T__o *)v51,
      (const MethodInfo_313FC6C *)Method_CStateManager_srcLineSprite__add__);
    v52 = (CStateManager_T__o *)*p_mFSM;
    v56 = (Il2CppObject *)sub_1BCAA2C(srcLineSprite_StateQaaGray_TypeInfo, v53, v54, v55);
    System_Object___ctor(v56, 0LL);
    if ( !v52
      || (CStateManager_object___add(
            v52,
            3,
            (IState_T__o *)v56,
            (const MethodInfo_313FC6C *)Method_CStateManager_srcLineSprite__add__),
          v57 = (CStateManager_T__o *)*p_mFSM,
          v61 = (Il2CppObject *)sub_1BCAA2C(srcLineSprite_StateQaaDisp_TypeInfo, v58, v59, v60),
          System_Object___ctor(v61, 0LL),
          !v57) )
    {
LABEL_22:
      sub_1BCAA3C(v40, v41);
    }
    CStateManager_object___add(
      v57,
      4,
      (IState_T__o *)v61,
      (const MethodInfo_313FC6C *)Method_CStateManager_srcLineSprite__add__);
    srcLineSprite__SetState(this, 1, 0LL, v62);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = id;
  if ( (byte_4B1363C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13066/*"Spot_Line_"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1217/*"00"*/, v3, v4);
    byte_4B1363C = 1;
  }
  v5 = System_Int32__ToString_63206828((int32_t)&v7, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_13066/*"Spot_Line_"*/, v5, 0LL);
}


MapControl_SpotRoadInfo_o *__fastcall srcLineSprite__GetMapCtrl_SpotRoadInfo(
        srcLineSprite_o *this,
        const MethodInfo *method)
{
  return this->fields.mMapCtrl_SpotRoadInfo;
}


int32_t __fastcall srcLineSprite__GetState(srcLineSprite_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  srcLineSprite_o *v3; // x19
  struct CStateManager_srcLineSprite__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B1363F & 1) == 0 )
  {
    this = (srcLineSprite_o *)sub_1BCA7E0(&Method_CStateManager_srcLineSprite__getState__, method, v2);
    byte_4B1363F = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetContrast(srcLineSprite_o *this, float val, const MethodInfo *method)
{
  UIWidget_o *mcLineSprite; // x0
  float v4; // s3

  mcLineSprite = (UIWidget_o *)this->fields.mcLineSprite;
  if ( !mcLineSprite )
    sub_1BCAA3C(0LL, method);
  v4 = 1.0;
  UIWidget__set_color(mcLineSprite, *(UnityEngine_Color_o *)&val, 0LL);
}


void __fastcall srcLineSprite__SetMapCtrl_SpotRoadInfo(
        srcLineSprite_o *this,
        MapControl_SpotRoadInfo_o *MapCtrl_SpotRoadInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mMapCtrl_SpotRoadInfo = MapCtrl_SpotRoadInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mMapCtrl_SpotRoadInfo,
    (int64_t)MapCtrl_SpotRoadInfo,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall srcLineSprite__SetQaaColorAnim(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_35314988(this, isActive, 0.5, method);
}


void __fastcall srcLineSprite__SetQaaColorAnimQuick(srcLineSprite_o *this, bool isActive, const MethodInfo *method)
{
  srcLineSprite__SetQaaColorAnim_35314988(this, isActive, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetQaaColorAnim_35314988(
        srcLineSprite_o *this,
        bool is_disp,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  float v36; // s9
  EasingObject_o *v37; // x21
  System_Action_o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Action_o *v42; // x23
  float v43; // s0

  if ( (byte_4B13642 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, is_disp, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8, v9);
    sub_1BCA7E0(&Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__0__, v10, v11);
    sub_1BCA7E0(&Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__1__, v12, v13);
    sub_1BCA7E0(&srcLineSprite___c__DisplayClass39_0_TypeInfo, v14, v15);
    byte_4B13642 = 1;
  }
  v16 = sub_1BCAA2C(srcLineSprite___c__DisplayClass39_0_TypeInfo, is_disp, method, v4);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_12;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v16 + 24) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)Component_object, v27, v28, v29, v30, v31, v32);
  v36 = is_disp ? 1.0 : 0.5;
  *(float *)(v16 + 32) = v36;
  v37 = *(EasingObject_o **)(v16 + 24);
  v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v16,
    Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__0__,
    0LL);
  v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v39, v40, v41);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v16,
    Method_srcLineSprite___c__DisplayClass39_0__SetQaaColorAnim_b__1__,
    0LL);
  if ( !v37 )
LABEL_12:
    sub_1BCAA3C(v17, v18);
  if ( is_disp )
    v43 = 0.5;
  else
    v43 = 1.0;
  EasingObject__Play_47132496(v37, v43, v36, time, v38, v42, 0.0, 17, 0LL);
}


void __fastcall srcLineSprite__SetQaaScaleAnim(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_35314296(this, isDisp, 0.5, method);
}


void __fastcall srcLineSprite__SetQaaScaleAnimQuick(srcLineSprite_o *this, bool isDisp, const MethodInfo *method)
{
  srcLineSprite__SetQaaScaleAnim_35314296(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetQaaScaleAnim_35314296(
        srcLineSprite_o *this,
        bool is_disp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *mcMyTrans; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Vector3_c *v16; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  int *p_y; // x10
  intptr_t *p_z; // x11
  struct UnityEngine_Vector3_StaticFields *v20; // x11
  int v21; // s1
  intptr_t v22; // s2
  struct UnityEngine_Vector3_StaticFields *v23; // x10
  _DWORD *p_x; // x8
  int *v25; // x9
  int *v26; // x10
  int v27; // s1
  int v28; // s2
  UnityEngine_GameObject_o *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  UnityEngine_GameObject_o *v43; // x0
  float x; // s8
  float y; // s9
  float *v46; // x21
  float v47; // s2
  float z; // s10
  float v49; // s1
  float v50; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13641 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, is_disp, method);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenScale___, v7, v8);
    sub_1BCA7E0(&StringLiteral_13140/*"StateQaaEnd"*/, v9, v10);
    byte_4B13641 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  mcMyTrans = (UnityEngine_Transform_o *)UITweener__Begin_object_(
                                           gameObject,
                                           time,
                                           (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenScale___);
  v15 = mcMyTrans;
  if ( is_disp )
  {
    if ( !byte_4B109C1 )
    {
      mcMyTrans = (UnityEngine_Transform_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v14);
      byte_4B109C1 = 1;
    }
    v16 = UnityEngine_Vector3_TypeInfo;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = (int *)&static_fields->zeroVector.fields.y;
    p_z = (intptr_t *)&static_fields->zeroVector.fields.z;
  }
  else
  {
    if ( !byte_4B109C6 )
    {
      mcMyTrans = (UnityEngine_Transform_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v14);
      byte_4B109C6 = 1;
    }
    v16 = UnityEngine_Vector3_TypeInfo;
    v20 = UnityEngine_Vector3_TypeInfo->static_fields;
    static_fields = (struct UnityEngine_Vector3_StaticFields *)&v20->oneVector;
    p_y = (int *)&v20->oneVector.fields.y;
    p_z = (intptr_t *)&v20->oneVector.fields.z;
  }
  if ( !v15 )
    goto LABEL_30;
  v21 = *p_y;
  v22 = *p_z;
  *(float *)&v15[5].monitor = static_fields->zeroVector.fields.x;
  HIDWORD(v15[5].monitor) = v21;
  v15[5].fields.m_CachedPtr = v22;
  if ( is_disp )
  {
    if ( !byte_4B109C6 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v14);
      v16 = UnityEngine_Vector3_TypeInfo;
      byte_4B109C6 = 1;
    }
    v23 = v16->static_fields;
    p_x = (_DWORD *)&v23->oneVector.fields.x;
    v25 = (int *)&v23->oneVector.fields.y;
    v26 = (int *)&v23->oneVector.fields.z;
  }
  else
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v14);
      v16 = UnityEngine_Vector3_TypeInfo;
      byte_4B109C1 = 1;
    }
    p_x = (_DWORD *)&v16->static_fields->zeroVector.fields.x;
    v25 = p_x + 1;
    v26 = p_x + 2;
  }
  v27 = *v25;
  v28 = *v26;
  *((_DWORD *)&v15[5].fields + 1) = *p_x;
  LODWORD(v15[6].klass) = v27;
  HIDWORD(v15[6].klass) = v28;
  LODWORD(v15[1].monitor) = 2;
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15[3].monitor = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&v15[3].monitor, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_13140/*"StateQaaEnd"*/;
  *(_QWORD *)&v15[3].fields.m_CachedPtr = StringLiteral_13140/*"StateQaaEnd"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v15[3].fields, v36, v37, v38, v39, v40, v41, v42);
  if ( time != 0.0 || is_disp )
  {
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    mcMyTrans = (UnityEngine_Transform_o *)UITweener__Begin_object_(
                                             v43,
                                             time,
                                             (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.mcMyTrans )
      goto LABEL_30;
    x = this->fields.mcFrom.fields.x;
    y = this->fields.mcFrom.fields.y;
    v46 = (float *)mcMyTrans;
    *(UnityEngine_Vector3_o *)(&v47 - 2) = UnityEngine_Transform__get_localPosition(this->fields.mcMyTrans, 0LL);
    z = v47;
    v49 = y;
    v50 = x;
    if ( !is_disp )
    {
      mcMyTrans = this->fields.mcMyTrans;
      if ( !mcMyTrans )
        goto LABEL_30;
      *(UnityEngine_Vector3_o *)&v50 = UnityEngine_Transform__get_localPosition(mcMyTrans, 0LL);
    }
    if ( v46 )
    {
      v46[32] = v50;
      v46[33] = v49;
      v46[34] = v47;
      if ( !is_disp )
      {
LABEL_28:
        v46[35] = x;
        v46[36] = y;
        v46[37] = z;
        *((_DWORD *)v46 + 8) = 2;
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
    sub_1BCAA3C(mcMyTrans, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall srcLineSprite__SetState(
        srcLineSprite_o *this,
        int32_t state,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v12; // x1
  CStateManager_T__o *v13; // x0

  if ( (byte_4B13640 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_srcLineSprite__setState__, *(_QWORD *)&state, end_act);
    byte_4B13640 = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_mStateEndAct,
    (int64_t)end_act,
    (int64_t)end_act,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v13 = (CStateManager_T__o *)*(p_mStateEndAct - 13);
  if ( !v13 )
    sub_1BCAA3C(0LL, v12);
  CStateManager_object___setState(
    v13,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_srcLineSprite__setState__);
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
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B1363E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_srcLineSprite__update__, method, v2);
    byte_4B1363E = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_313FCD4 *)Method_CStateManager_srcLineSprite__update__);
}


void __fastcall srcLineSprite__mfSetAtlas(
        srcLineSprite_o *this,
        UIAtlas_o *cAtlasP,
        System_String_o *sSpriteName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *v8; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v8 = (PartyOrganizationUtility_o *)this;
  this->fields.mcAtlasP = cAtlasP;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mcAtlasP,
    (int64_t)cAtlasP,
    (int64_t)sSpriteName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v8->fields.temporaryPartyInfo = (struct PartyOrganizationUtility_TemporaryPartyInfo_o *)sSpriteName;
  v8 = (PartyOrganizationUtility_o *)((char *)v8 + 120);
  sub_1BCA784(v8, (int64_t)sSpriteName, v10, v11, v12, v13, v14, v15);
  LOBYTE(v8[-1].fields._BasePartyItem_k__BackingField) = 1;
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
    sub_1BCAA3C(this, method);
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
  __int64 v4; // x2
  float y; // s8
  float x; // s9
  float v7; // s10
  float v8; // s11
  float v10; // s9
  float v11; // s8
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v13; // s12
  float v14; // s13
  System_Math_c *v15; // x0
  float v16; // s11
  UnityEngine_Transform_o *mcMyTrans; // x20
  float v18; // s10
  float v19; // s12
  float v20; // s0
  float v21; // s1
  float v22; // s9
  float v23; // s10
  UnityEngine_Transform_o *v24; // x20
  int v25; // s0
  __int64 v29; // x1
  __int64 v30; // x2
  float mfWidth; // s0
  int32_t v32; // w8
  float v33; // s0
  unsigned int v34; // w11
  int32_t v35; // w8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s1.4,4:s2.4,8:s3.4

  this->fields.mcFrom = cFrom;
  this->fields.mcTo = cTo;
  y = cTo.fields.y;
  x = cTo.fields.x;
  v7 = cFrom.fields.y;
  v8 = cFrom.fields.x;
  if ( !byte_4B108BA )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, method, v4);
    byte_4B108BA = 1;
  }
  v10 = x - v8;
  v11 = y - v7;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v13 = static_fields->zeroVector.fields.x;
  v14 = static_fields->zeroVector.fields.y;
  if ( !byte_4B137F1 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v4);
    byte_4B137F1 = 1;
  }
  v15 = System_Math_TypeInfo;
  v16 = (float)(v10 * v10) + (float)(v11 * v11);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  if ( sqrtf(v16 * (float)((float)(v13 * v13) + (float)(v14 * v14))) >= 1.0e-15 )
  {
    v15 = System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  }
  mcMyTrans = this->fields.mcMyTrans;
  if ( !mcMyTrans )
    goto LABEL_22;
  v18 = this->fields.mcFrom.fields.x;
  v19 = this->fields.mcFrom.fields.y;
  v20 = atan2f(this->fields.mcTo.fields.y - v19, this->fields.mcTo.fields.x - v18);
  v21 = v10 * 0.5;
  v22 = v20 * 57.296;
  v23 = v21 + v18;
  localPosition = UnityEngine_Transform__get_localPosition(mcMyTrans, 0LL);
  localPosition.fields.x = v23;
  localPosition.fields.y = (float)(v11 * 0.5) + v19;
  UnityEngine_Transform__set_localPosition(mcMyTrans, localPosition, 0LL);
  v24 = this->fields.mcMyTrans;
  v37.fields.x = 0.0;
  v37.fields.y = 0.0;
  v37.fields.z = 1.0;
  *(UnityEngine_Quaternion_o *)&v25 = UnityEngine_Quaternion__AngleAxis(v22, v37, 0LL);
  if ( !v24 )
LABEL_22:
    sub_1BCAA3C(v15, method);
  UnityEngine_Transform__set_localRotation(v24, *(UnityEngine_Quaternion_o *)&v25, 0LL);
  mfWidth = this->fields.mfWidth;
  v32 = (int)mfWidth;
  if ( mfWidth == INFINITY )
    v32 = 0x80000000;
  this->fields.miLineH = v32;
  if ( !byte_4B109C2 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v29, v30);
    byte_4B109C2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v29);
  v33 = sqrtf(v16);
  v34 = vcvtps_s32_f32(v33);
  if ( ceilf(v33) == INFINITY )
    v35 = 0x80000000;
  else
    v35 = v34;
  this->fields.miLineW = v35;
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

  if ( (byte_4B13644 & 1) == 0 )
  {
    this = (srcLineSprite_StateMapMain_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    byte_4B13644 = 1;
  }
  if ( !that )
    goto LABEL_18;
  if ( !that->fields.mtIsUpdate )
    return;
  mcLineSprite = (UnityEngine_Object_o *)that->fields.mcLineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (srcLineSprite_StateMapMain_o *)UnityEngine_Object__op_Inequality(0LL, mcLineSprite, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mcLineSprite;
    if ( v5 )
    {
      mAtlas = (UnityEngine_Object_o *)v5->fields.mAtlas;
      mcAtlasP = (UnityEngine_Object_o *)that->fields.mcAtlasP;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
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
    sub_1BCAA3C(this, that);
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
      srcLineSprite__SetQaaColorAnim_35314988(that, 1, 0.5, method);
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
        srcLineSprite__SetQaaScaleAnim_35314296(that, 1, 0.5, v6);
        return;
      }
LABEL_11:
      sub_1BCAA3C(this, that);
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
      srcLineSprite__SetQaaColorAnim_35314988(that, 0, 0.5, method);
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
        srcLineSprite__SetQaaScaleAnim_35314296(that, 1, 0.5, v6);
        return;
      }
LABEL_11:
      sub_1BCAA3C(this, that);
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
    sub_1BCAA3C(this, that);
  dispType = mMapCtrl_SpotRoadInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
      srcLineSprite__SetQaaScaleAnim_35314296(that, 0, 0.5, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(_4__this, method);
  }
  ActionExtensions__Call(v4->fields.mStateEndAct, 0LL);
  srcLineSprite__SetState(v4, 1, 0LL, v5);
}