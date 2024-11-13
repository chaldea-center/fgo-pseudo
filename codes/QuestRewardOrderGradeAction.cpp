void __fastcall QuestRewardOrderGradeAction___ctor(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction__Awake(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct CStateManager_QuestRewardOrderGradeAction__o **p_mFSM; // x20
  CStateManager_T__o *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  CStateManager_T__o *mFSM; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  Il2CppObject *v35; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v37; // x1
  CStateManager_T__o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  Il2CppObject *v42; // x22
  CStateManager_T__o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  Il2CppObject *v47; // x22
  CStateManager_T__o *v48; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  Il2CppObject *v52; // x21
  const MethodInfo *v53; // x2
  UnityEngine_Object_o *particleObj; // x21
  __int64 v55; // x1
  UnityEngine_Object_o *particlePrefab; // x21
  __int64 v57; // x1
  Il2CppObject *v58; // x21
  Il2CppObject *v59; // x21
  __int64 v60; // x1
  __int64 v61; // x2
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7

  if ( (byte_4B131A4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardOrderGradeAction___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_QuestRewardOrderGradeAction__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_QuestRewardOrderGradeAction__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&QuestRewardOrderGradeAction_StateItemLabel_TypeInfo, v15, v16);
    sub_1BCA7E0(&QuestRewardOrderGradeAction_StateNone_TypeInfo, v17, v18);
    sub_1BCA7E0(&QuestRewardOrderGradeAction_StatePlay_TypeInfo, v19, v20);
    sub_1BCA7E0(&QuestRewardOrderGradeAction_StateTouchWait_TypeInfo, v21, v22);
    byte_4B131A4 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v24 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_QuestRewardOrderGradeAction__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v24,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_313FBC4 *)Method_CStateManager_QuestRewardOrderGradeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardOrderGradeAction__o *)v24;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v24, v25, v26, v27, v28, v29, v30);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v35 = (Il2CppObject *)sub_1BCAA2C(QuestRewardOrderGradeAction_StateNone_TypeInfo, v32, v33, v34);
    System_Object___ctor(v35, 0LL);
    if ( !mFSM )
      goto LABEL_24;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v35,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v38 = (CStateManager_T__o *)*p_mFSM;
    v42 = (Il2CppObject *)sub_1BCAA2C(QuestRewardOrderGradeAction_StatePlay_TypeInfo, v39, v40, v41);
    System_Object___ctor(v42, 0LL);
    if ( !v38 )
      goto LABEL_24;
    CStateManager_object___add(
      v38,
      1,
      (IState_T__o *)v42,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v43 = (CStateManager_T__o *)*p_mFSM;
    v47 = (Il2CppObject *)sub_1BCAA2C(QuestRewardOrderGradeAction_StateItemLabel_TypeInfo, v44, v45, v46);
    System_Object___ctor(v47, 0LL);
    if ( !v43 )
      goto LABEL_24;
    CStateManager_object___add(
      v43,
      2,
      (IState_T__o *)v47,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v48 = (CStateManager_T__o *)*p_mFSM;
    v52 = (Il2CppObject *)sub_1BCAA2C(QuestRewardOrderGradeAction_StateTouchWait_TypeInfo, v49, v50, v51);
    System_Object___ctor(v52, 0LL);
    if ( !v48 )
      goto LABEL_24;
    CStateManager_object___add(
      v48,
      3,
      (IState_T__o *)v52,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    QuestRewardOrderGradeAction__SetState(this, 0, v53);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v58 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
      v59 = UnityEngine_Object__Instantiate_object_(
              v58,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v59, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v59, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4B109C1 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v60, v61);
          byte_4B109C1 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v59,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v59 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v59,
                                         (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v59;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.particleObj,
              (int64_t)v59,
              v62,
              v63,
              v64,
              v65,
              v66,
              v67);
            return;
          }
        }
LABEL_24:
        sub_1BCAA3C(ComponentInChildren_object, v37);
      }
    }
  }
}


int32_t __fastcall QuestRewardOrderGradeAction__GetState(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRewardOrderGradeAction_o *v3; // x19
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B131A8 & 1) == 0 )
  {
    this = (QuestRewardOrderGradeAction_o *)sub_1BCA7E0(
                                              &Method_CStateManager_QuestRewardOrderGradeAction__getState__,
                                              method,
                                              v2);
    byte_4B131A8 = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardOrderGradeAction__Play(
        QuestRewardOrderGradeAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v26; // x20
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v29; // x20
  __int64 v30; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v32; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v34; // x20
  System_String_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v40; // x0
  System_Action_o *v41; // x21

  if ( (byte_4B131A7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, end_act, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_QuestRewardOrderGradeAction__Play_b__14_0__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v20, v21);
    byte_4B131A7 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mEndAct,
    (int64_t)end_act,
    (int64_t)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v26 = this->fields.mSimpleAnimation;
    if ( !v26 )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)v26[1].monitor;
    if ( !gameObject )
      goto LABEL_30;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v26, name, 0LL);
    if ( !gameObject )
      goto LABEL_30;
    klass = gameObject->klass;
    v29 = gameObject;
    v30 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v30;
        p_offset += 2;
        if ( !v30 )
          goto LABEL_14;
      }
      v32 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v32 = sub_1C1C7C0(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v32)(v29, *(_QWORD *)(v32 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v34 = this->fields.mAnimation;
      if ( !v34 )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      v35 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v34, v35, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v40 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v36);
      v40 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v40->static_fields->DEFAULT_FADE_TIME;
  }
  v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_QuestRewardOrderGradeAction__Play_b__14_0__, 0LL);
  if ( !Instance )
LABEL_30:
    sub_1BCAA3C(gameObject, v23);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v41, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardOrderGradeAction__SetState(
        QuestRewardOrderGradeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B131A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardOrderGradeAction__setState__, *(_QWORD *)&state, method);
    byte_4B131A9 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_QuestRewardOrderGradeAction__setState__);
}


void __fastcall QuestRewardOrderGradeAction__Setup(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
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
  UnityEngine_Component_o *transform; // x0
  __int64 v15; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B131A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    byte_4B131A6 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           transform,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49322392;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mAnimation,
    (int64_t)ComponentInChildren_object__49322392,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  v23 = UnityEngine_Component__GetComponentInChildren_object__49322392(
          transform,
          (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           transform,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_19;
  BYTE5(transform[4].monitor) = 1;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  p_mScreenTouchInfo = &this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = (UnityEngine_Component_o *)CommonUI__CreateScreeenTouchInfo(
                                               (CommonUI_o *)Instance,
                                               (UnityEngine_Transform_o *)transform,
                                               0,
                                               0LL);
      if ( transform )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.mScreenTouchInfo,
          (int64_t)Component_object,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        goto LABEL_16;
      }
    }
LABEL_19:
    sub_1BCAA3C(transform, v15);
  }
LABEL_16:
  transform = (UnityEngine_Component_o *)*p_mScreenTouchInfo;
  if ( !*p_mScreenTouchInfo )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
}


void __fastcall QuestRewardOrderGradeAction__Update(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B131A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardOrderGradeAction__update__, method, v2);
    byte_4B131A5 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_313FCD4 *)Method_CStateManager_QuestRewardOrderGradeAction__update__);
}


void __fastcall QuestRewardOrderGradeAction___Play_b__14_0(
        QuestRewardOrderGradeAction_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardOrderGradeAction__SetState(this, 1, v2);
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel___ctor(
        QuestRewardOrderGradeAction_StateItemLabel_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel__begin(
        QuestRewardOrderGradeAction_StateItemLabel_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x19
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *Component_object; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  ManagerConfig_c *v42; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // w24
  MoveObject_o *v46; // x20
  float x; // s10
  float v48; // s11
  float v49; // s12
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Action_o *v53; // x21
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Action_o *v57; // x22
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4B131AC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v5, v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_QuestRewardOrderGradeAction_StateItemLabel_begin__, v9, v10);
    sub_1BCA7E0(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v11, v12);
    sub_1BCA7E0(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v13, v14);
    sub_1BCA7E0(&QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v15, v16);
    byte_4B131AC = 1;
  }
  v17 = sub_1BCAA2C(QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_13;
  *(_QWORD *)(v17 + 32) = that;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)that, v20, v21, v22, v23, v24, v25);
  v26 = *(_QWORD *)(v17 + 32);
  if ( !v26 )
    goto LABEL_13;
  v18 = *(UnityEngine_Component_o **)(v26 + 64);
  if ( !v18 )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
  *(_QWORD *)(v17 + 16) = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)gameObject, v28, v29, v30, v31, v32, v33);
  v18 = *(UnityEngine_Component_o **)(v17 + 16);
  if ( !v18 )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v18, 1, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v17 + 16),
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v17 + 24) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)Component_object, v35, v36, v37, v38, v39, v40);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v17 + 16), 0LL);
  v42 = ManagerConfig_TypeInfo;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v41);
    v42 = ManagerConfig_TypeInfo;
  }
  WIDTH = v42->static_fields->WIDTH;
  v61 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v17 + 16), 0LL);
  v46 = *(MoveObject_o **)(v17 + 24);
  x = v61.fields.x;
  v48 = v61.fields.y;
  v49 = v61.fields.z;
  v53 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v50, v51, v52);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v17,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v57 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v54, v55, v56);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v17,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v46 )
LABEL_13:
    sub_1BCAA3C(v18, v19);
  v62.fields.x = (float)WIDTH;
  v62.fields.y = y;
  v62.fields.z = z;
  v63.fields.x = x;
  v63.fields.y = v48;
  v63.fields.z = v49;
  MoveObject__Play(v46, v62, v63, 0.25, v53, v57, 0.0, 17, 0LL);
  v58 = Method_QuestRewardOrderGradeAction_StateItemLabel_begin__;
  if ( (*((_BYTE *)Method_QuestRewardOrderGradeAction_StateItemLabel_begin__ + 83) & 2) != 0 )
    v58 = (_QWORD *)sub_1BCA7F8(Method_QuestRewardOrderGradeAction_StateItemLabel_begin__);
  v59 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v58, v58[4]);
  OverwriteAssetSoundName__PlaySystemSe(v59, 4, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel__end(
        QuestRewardOrderGradeAction_StateItemLabel_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel__update(
        QuestRewardOrderGradeAction_StateItemLabel_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___ctor(
        QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___begin_b__0(
        QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1BCAA3C(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, mo->fields.mNow, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRewardOrderGradeAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(0LL, method);
  QuestRewardOrderGradeAction__SetState(that, 3, v2);
}


void __fastcall QuestRewardOrderGradeAction_StateNone___ctor(
        QuestRewardOrderGradeAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateNone__begin(
        QuestRewardOrderGradeAction_StateNone_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardOrderGradeAction_StateNone__end(
        QuestRewardOrderGradeAction_StateNone_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardOrderGradeAction_StateNone__update(
        QuestRewardOrderGradeAction_StateNone_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardOrderGradeAction_StatePlay___ctor(
        QuestRewardOrderGradeAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StatePlay__begin(
        QuestRewardOrderGradeAction_StatePlay_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  QuestRewardOrderGradeAction_StatePlay_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v8; // x21
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x21
  System_String_o *v11; // x0
  SimpleAnimation_State_o *v12; // x0
  PartyOrganizationUtility_o *p_mSimpleAnimState; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  PartyOrganizationUtility_c *klass; // x21
  _QWORD *image; // x8
  __int64 v22; // x9
  SimpleAnimation_State_c **v23; // x10
  __int64 v24; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v26; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v28; // x21
  System_String_o *v29; // x0
  UnityEngine_AnimationState_o *Item; // x0
  PartyOrganizationUtility_o *p_fields; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  PartyOrganizationUtility_c *v38; // x20
  _QWORD *v39; // x8
  __int64 v40; // x9
  SimpleAnimation_State_c **v41; // x10
  __int64 v42; // x0

  v4 = this;
  if ( (byte_4B131AA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v5, v6);
    byte_4B131AA = 1;
  }
  if ( !that )
    goto LABEL_38;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_36;
    v26 = that->fields.mAnimation;
    if ( v26 )
    {
      this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__Play_69899248(v26, name, 0LL);
        v28 = that->fields.mAnimation;
        if ( v28 )
        {
          this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                              that->fields.mAnimation,
                                                              0LL);
          if ( this )
          {
            v29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            Item = UnityEngine_Animation__get_Item(v28, v29, 0LL);
            v4->fields.mAnimState = Item;
            p_fields = (PartyOrganizationUtility_o *)&v4->fields;
            sub_1BCA784(p_fields, (int64_t)Item, v32, v33, v34, v35, v36, v37);
            this = (QuestRewardOrderGradeAction_StatePlay_o *)p_fields->klass;
            if ( p_fields->klass )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              this = (QuestRewardOrderGradeAction_StatePlay_o *)p_fields->klass;
              if ( p_fields->klass )
              {
                UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
                goto LABEL_36;
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_1BCAA3C(this, that);
  }
  v8 = that->fields.mSimpleAnimation;
  if ( !v8 )
    goto LABEL_38;
  this = (QuestRewardOrderGradeAction_StatePlay_o *)v8[1].monitor;
  if ( !this )
    goto LABEL_38;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)SimpleAnimation__Play_64539336(v8, v9, 0LL);
  v10 = that->fields.mSimpleAnimation;
  if ( !v10 )
    goto LABEL_38;
  this = (QuestRewardOrderGradeAction_StatePlay_o *)v10[1].monitor;
  if ( !this )
    goto LABEL_38;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v12 = SimpleAnimation__get_Item(v10, v11, 0LL);
  v4->fields.mSimpleAnimState = v12;
  p_mSimpleAnimState = (PartyOrganizationUtility_o *)&v4->fields.mSimpleAnimState;
  sub_1BCA784(p_mSimpleAnimState, (int64_t)v12, v14, v15, v16, v17, v18, v19);
  klass = p_mSimpleAnimState->klass;
  if ( !p_mSimpleAnimState->klass )
    goto LABEL_38;
  image = klass->_1.image;
  v22 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v23 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v23 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v22;
      v23 += 2;
      if ( !v22 )
        goto LABEL_16;
    }
    v24 = (__int64)&image[2 * *(_DWORD *)v23 + 51];
  }
  else
  {
LABEL_16:
    v24 = sub_1C1C7C0(p_mSimpleAnimState->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardOrderGradeAction_StatePlay_o *)(*(__int64 (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v24)(
                                                      klass,
                                                      *(_QWORD *)(v24 + 8),
                                                      0.0);
  v38 = p_mSimpleAnimState->klass;
  if ( !v38 )
    goto LABEL_38;
  v39 = v38->_1.image;
  v40 = *((unsigned __int16 *)v38->_1.image + 151);
  if ( *((_WORD *)v38->_1.image + 151) )
  {
    v41 = (SimpleAnimation_State_c **)(v39[22] + 8LL);
    while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v40;
      v41 += 2;
      if ( !v40 )
        goto LABEL_33;
    }
    v42 = (__int64)&v39[2 * *(_DWORD *)v41 + 55];
  }
  else
  {
LABEL_33:
    v42 = sub_1C1C7C0(v38, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v42)(v38, *(_QWORD *)(v42 + 8), 1.0);
LABEL_36:
  this = (QuestRewardOrderGradeAction_StatePlay_o *)that->fields.mAppearEffObj;
  if ( !this )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StatePlay__end(
        QuestRewardOrderGradeAction_StatePlay_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardOrderGradeAction_StatePlay__update(
        QuestRewardOrderGradeAction_StatePlay_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v7; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v10; // x20
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4B131AB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)sub_1BCA7E0(
                                                        &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                        v4,
                                                        v5);
    byte_4B131AB = 1;
  }
  if ( !that )
    goto LABEL_21;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = that->fields.mSimpleAnimation;
    if ( !v7 )
      goto LABEL_21;
    this = (QuestRewardOrderGradeAction_StatePlay_o *)v7[1].monitor;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v7, name, 0LL) )
      return;
LABEL_17:
    this = (QuestRewardOrderGradeAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardOrderGradeAction__SetState(that, 2, v12);
      return;
    }
LABEL_21:
    sub_1BCAA3C(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = that->fields.mAnimation;
    if ( !v10 )
      goto LABEL_21;
    this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !this )
      goto LABEL_21;
    v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v10, v11, 0LL) )
      return;
    goto LABEL_17;
  }
}


void __fastcall QuestRewardOrderGradeAction_StateTouchWait___ctor(
        QuestRewardOrderGradeAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateTouchWait__begin(
        QuestRewardOrderGradeAction_StateTouchWait_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (QuestRewardOrderGradeAction_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0LL
    || (this = (QuestRewardOrderGradeAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL)) == 0LL )
  {
    sub_1BCAA3C(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateTouchWait__end(
        QuestRewardOrderGradeAction_StateTouchWait_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardOrderGradeAction_StateTouchWait__update(
        QuestRewardOrderGradeAction_StateTouchWait_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x19
  __int64 v27; // x1
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x22
  const MethodInfo *v37; // x2

  if ( (byte_4B131AD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CTouch_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_QuestRewardOrderGradeAction_StateTouchWait_update__, v11, v12);
    sub_1BCA7E0(&Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v13, v14);
    sub_1BCA7E0(&QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v15, v16);
    byte_4B131AD = 1;
  }
  v17 = sub_1BCAA2C(QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = that;
  v26 = v17 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)that, v20, v21, v22, v23, v24, v25);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v27);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v26 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v26 + 96LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v28 = Method_QuestRewardOrderGradeAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardOrderGradeAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v28 = (_QWORD *)sub_1BCA7F8(Method_QuestRewardOrderGradeAction_StateTouchWait_update__);
          v29 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v28, v28[4]);
          OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v34 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v30);
            v34 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
          v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
          System_Action___ctor(
            v36,
            (Il2CppObject *)v17,
            Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v36, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v26;
            if ( *(_QWORD *)v26 )
            {
              QuestRewardOrderGradeAction__SetState((QuestRewardOrderGradeAction_o *)isTouchPush, 0, v37);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(isTouchPush, v19);
  }
}


void __fastcall QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0___ctor(
        QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardOrderGradeAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}