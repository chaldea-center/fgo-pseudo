void __fastcall QuestRewardCostumeAction___ctor(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction__Awake(QuestRewardCostumeAction_o *this, const MethodInfo *method)
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
  __int64 v23; // x1
  __int64 v24; // x2
  struct CStateManager_QuestRewardCostumeAction__o **p_mFSM; // x20
  CStateManager_T__o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  CStateManager_T__o *mFSM; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  Il2CppObject *v37; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v39; // x1
  CStateManager_T__o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  Il2CppObject *v44; // x22
  CStateManager_T__o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  Il2CppObject *v49; // x22
  CStateManager_T__o *v50; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  Il2CppObject *v54; // x21
  const MethodInfo *v55; // x2
  PartyOrganizationUtility_o *p_particleObj; // x20
  UnityEngine_Object_o *particleObj; // x21
  __int64 v58; // x1
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v60; // x21
  Il2CppObject *v61; // x21
  __int64 v62; // x1
  __int64 v63; // x2
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7

  if ( (byte_4B13175 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardCostumeAction___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_QuestRewardCostumeAction__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_QuestRewardCostumeAction__TypeInfo, v7, v8);
    sub_1BCA7E0(&CTouch_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&QuestRewardCostumeAction_StateItemLabel_TypeInfo, v17, v18);
    sub_1BCA7E0(&QuestRewardCostumeAction_StateNone_TypeInfo, v19, v20);
    sub_1BCA7E0(&QuestRewardCostumeAction_StatePlay_TypeInfo, v21, v22);
    sub_1BCA7E0(&QuestRewardCostumeAction_StateTouchWait_TypeInfo, v23, v24);
    byte_4B13175 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v26 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_QuestRewardCostumeAction__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v26,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_313FBC4 *)Method_CStateManager_QuestRewardCostumeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardCostumeAction__o *)v26;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v26, v27, v28, v29, v30, v31, v32);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v37 = (Il2CppObject *)sub_1BCAA2C(QuestRewardCostumeAction_StateNone_TypeInfo, v34, v35, v36);
    System_Object___ctor(v37, 0LL);
    if ( !mFSM )
      goto LABEL_26;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v37,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v40 = (CStateManager_T__o *)*p_mFSM;
    v44 = (Il2CppObject *)sub_1BCAA2C(QuestRewardCostumeAction_StatePlay_TypeInfo, v41, v42, v43);
    System_Object___ctor(v44, 0LL);
    if ( !v40 )
      goto LABEL_26;
    CStateManager_object___add(
      v40,
      1,
      (IState_T__o *)v44,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v45 = (CStateManager_T__o *)*p_mFSM;
    v49 = (Il2CppObject *)sub_1BCAA2C(QuestRewardCostumeAction_StateItemLabel_TypeInfo, v46, v47, v48);
    System_Object___ctor(v49, 0LL);
    if ( !v45 )
      goto LABEL_26;
    CStateManager_object___add(
      v45,
      2,
      (IState_T__o *)v49,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v50 = (CStateManager_T__o *)*p_mFSM;
    v54 = (Il2CppObject *)sub_1BCAA2C(QuestRewardCostumeAction_StateTouchWait_TypeInfo, v51, v52, v53);
    System_Object___ctor(v54, 0LL);
    if ( !v50 )
      goto LABEL_26;
    CStateManager_object___add(
      v50,
      3,
      (IState_T__o *)v54,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardCostumeAction__add__);
    QuestRewardCostumeAction__SetState(this, 0, v55);
  }
  p_particleObj = (PartyOrganizationUtility_o *)&this->fields.particleObj;
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v60 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58);
      v61 = UnityEngine_Object__Instantiate_object_(
              v60,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v61, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v61, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4B109C1 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v62, v63);
          byte_4B109C1 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v61,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v61 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v61,
                                         (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            p_particleObj->klass = (PartyOrganizationUtility_c *)v61;
            sub_1BCA784(p_particleObj, (int64_t)v61, v64, v65, v66, v67, v68, v69);
            goto LABEL_23;
          }
        }
LABEL_26:
        sub_1BCAA3C(ComponentInChildren_object, v39);
      }
    }
  }
LABEL_23:
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v58);
  CTouch__init(0LL);
}


int32_t __fastcall QuestRewardCostumeAction__GetState(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRewardCostumeAction_o *v3; // x19
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B13179 & 1) == 0 )
  {
    this = (QuestRewardCostumeAction_o *)sub_1BCA7E0(
                                           &Method_CStateManager_QuestRewardCostumeAction__getState__,
                                           method,
                                           v2);
    byte_4B13179 = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardCostumeAction__Play(
        QuestRewardCostumeAction_o *this,
        System_Action_o *endAct,
        float fadeInTime,
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

  if ( (byte_4B13178 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endAct, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_QuestRewardCostumeAction__Play_b__14_0__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v20, v21);
    byte_4B13178 = 1;
  }
  this->fields.mEndAct = endAct;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mEndAct, (int64_t)endAct, (int64_t)method, v4, v5, v6, v7, v8);
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
  if ( fadeInTime <= 0.0 )
  {
    v40 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v36);
      v40 = AvalonSceneManager_TypeInfo;
    }
    fadeInTime = v40->static_fields->DEFAULT_FADE_TIME;
  }
  v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_QuestRewardCostumeAction__Play_b__14_0__, 0LL);
  if ( !Instance )
LABEL_30:
    sub_1BCAA3C(gameObject, v23);
  CommonUI__maskFadein((CommonUI_o *)Instance, fadeInTime, v41, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardCostumeAction__SetState(
        QuestRewardCostumeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B1317A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardCostumeAction__setState__, *(_QWORD *)&state, method);
    byte_4B1317A = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_QuestRewardCostumeAction__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardCostumeAction__Setup(
        QuestRewardCostumeAction_o *this,
        int32_t imgId,
        System_String_o *itmName,
        const MethodInfo *method)
{
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
  UnityEngine_Component_o *transform; // x0
  __int64 v24; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v40; // x1
  System_String_o *v41; // x0
  __int64 v42; // x1
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4B13177 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&imgId, itmName);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9, v10);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_10985/*"QUEST_CLEAR_COSTUME_GET"*/, v21, v22);
    byte_4B13177 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           transform,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49322392;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mAnimation,
    (int64_t)ComponentInChildren_object__49322392,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  v32 = UnityEngine_Component__GetComponentInChildren_object__49322392(
          transform,
          (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v32;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           transform,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_24;
  BYTE5(transform[4].monitor) = 1;
  transform = (UnityEngine_Component_o *)this->fields.mItemSp;
  if ( !transform )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  transform = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_object_(
                                           gameObject,
                                           (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
  if ( !transform )
    goto LABEL_24;
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)transform, imgId, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10985/*"QUEST_CLEAR_COSTUME_GET"*/, 0LL);
  transform = (UnityEngine_Component_o *)System_String__Format(v41, (Il2CppObject *)itmName, 0LL);
  if ( !this->fields.mItemLabel )
    goto LABEL_24;
  UILabel__set_text(this->fields.mItemLabel, (System_String_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_24;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  p_mScreenTouchInfo = &this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
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
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        goto LABEL_21;
      }
    }
LABEL_24:
    sub_1BCAA3C(transform, v24);
  }
LABEL_21:
  transform = (UnityEngine_Component_o *)*p_mScreenTouchInfo;
  if ( !*p_mScreenTouchInfo )
    goto LABEL_24;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
}


void __fastcall QuestRewardCostumeAction__Update(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B13176 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardCostumeAction__update__, method, v2);
    sub_1BCA7E0(&CTouch_TypeInfo, v4, v5);
    byte_4B13176 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_313FCD4 *)Method_CStateManager_QuestRewardCostumeAction__update__);
}


void __fastcall QuestRewardCostumeAction___Play_b__14_0(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardCostumeAction__SetState(this, 1, v2);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___ctor(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel__begin(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        QuestRewardCostumeAction_o *that,
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
  __int64 v15; // x19
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *Component_object; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  ManagerConfig_c *v40; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // w24
  MoveObject_o *v44; // x20
  float x; // s10
  float v46; // s11
  float v47; // s12
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *v51; // x21
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_o *v55; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4B1317D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v5, v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v9, v10);
    sub_1BCA7E0(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v11, v12);
    sub_1BCA7E0(&QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v13, v14);
    byte_4B1317D = 1;
  }
  v15 = sub_1BCAA2C(QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_11;
  *(_QWORD *)(v15 + 32) = that;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)that, v18, v19, v20, v21, v22, v23);
  v24 = *(_QWORD *)(v15 + 32);
  if ( !v24 )
    goto LABEL_11;
  v16 = *(UnityEngine_Component_o **)(v24 + 64);
  if ( !v16 )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
  *(_QWORD *)(v15 + 16) = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)gameObject, v26, v27, v28, v29, v30, v31);
  v16 = *(UnityEngine_Component_o **)(v15 + 16);
  if ( !v16 )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v15 + 16),
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v15 + 24) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)Component_object, v33, v34, v35, v36, v37, v38);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v15 + 16), 0LL);
  v40 = ManagerConfig_TypeInfo;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v39);
    v40 = ManagerConfig_TypeInfo;
  }
  WIDTH = v40->static_fields->WIDTH;
  v57 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v15 + 16), 0LL);
  v44 = *(MoveObject_o **)(v15 + 24);
  x = v57.fields.x;
  v46 = v57.fields.y;
  v47 = v57.fields.z;
  v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v49, v50);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v15,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v55 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v15,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v44 )
LABEL_11:
    sub_1BCAA3C(v16, v17);
  v58.fields.x = (float)WIDTH;
  v58.fields.y = y;
  v58.fields.z = z;
  v59.fields.x = x;
  v59.fields.y = v46;
  v59.fields.z = v47;
  MoveObject__Play(v44, v58, v59, 0.25, v51, v55, 0.0, 17, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel__end(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateItemLabel__update(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___ctor(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___begin_b__0(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1BCAA3C(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, mo->fields.mNow, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRewardCostumeAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(0LL, method);
  QuestRewardCostumeAction__SetState(that, 3, v2);
}


void __fastcall QuestRewardCostumeAction_StateNone___ctor(
        QuestRewardCostumeAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateNone__begin(
        QuestRewardCostumeAction_StateNone_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateNone__end(
        QuestRewardCostumeAction_StateNone_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateNone__update(
        QuestRewardCostumeAction_StateNone_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StatePlay___ctor(
        QuestRewardCostumeAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StatePlay__begin(
        QuestRewardCostumeAction_StatePlay_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  QuestRewardCostumeAction_StatePlay_o *v4; // x20
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
  if ( (byte_4B1317B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    this = (QuestRewardCostumeAction_StatePlay_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v5, v6);
    byte_4B1317B = 1;
  }
  if ( !that )
    goto LABEL_38;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_36;
    v26 = that->fields.mAnimation;
    if ( v26 )
    {
      this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__Play_69899248(v26, name, 0LL);
        v28 = that->fields.mAnimation;
        if ( v28 )
        {
          this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( this )
          {
            v29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            Item = UnityEngine_Animation__get_Item(v28, v29, 0LL);
            v4->fields.mAnimState = Item;
            p_fields = (PartyOrganizationUtility_o *)&v4->fields;
            sub_1BCA784(p_fields, (int64_t)Item, v32, v33, v34, v35, v36, v37);
            this = (QuestRewardCostumeAction_StatePlay_o *)p_fields->klass;
            if ( p_fields->klass )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              this = (QuestRewardCostumeAction_StatePlay_o *)p_fields->klass;
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
  this = (QuestRewardCostumeAction_StatePlay_o *)v8[1].monitor;
  if ( !this )
    goto LABEL_38;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardCostumeAction_StatePlay_o *)SimpleAnimation__Play_64539336(v8, v9, 0LL);
  v10 = that->fields.mSimpleAnimation;
  if ( !v10 )
    goto LABEL_38;
  this = (QuestRewardCostumeAction_StatePlay_o *)v10[1].monitor;
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
  this = (QuestRewardCostumeAction_StatePlay_o *)(*(__int64 (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v24)(
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
  this = (QuestRewardCostumeAction_StatePlay_o *)that->fields.mAppearEffObj;
  if ( !this )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall QuestRewardCostumeAction_StatePlay__end(
        QuestRewardCostumeAction_StatePlay_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StatePlay__update(
        QuestRewardCostumeAction_StatePlay_o *this,
        QuestRewardCostumeAction_o *that,
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

  if ( (byte_4B1317C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    this = (QuestRewardCostumeAction_StatePlay_o *)sub_1BCA7E0(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v4,
                                                     v5);
    byte_4B1317C = 1;
  }
  if ( !that )
    goto LABEL_21;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = that->fields.mSimpleAnimation;
    if ( !v7 )
      goto LABEL_21;
    this = (QuestRewardCostumeAction_StatePlay_o *)v7[1].monitor;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v7, name, 0LL) )
      return;
LABEL_17:
    this = (QuestRewardCostumeAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardCostumeAction__SetState(that, 2, v12);
      return;
    }
LABEL_21:
    sub_1BCAA3C(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = that->fields.mAnimation;
    if ( !v10 )
      goto LABEL_21;
    this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !this )
      goto LABEL_21;
    v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v10, v11, 0LL) )
      return;
    goto LABEL_17;
  }
}


void __fastcall QuestRewardCostumeAction_StateTouchWait___ctor(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateTouchWait__begin(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (QuestRewardCostumeAction_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0LL
    || (this = (QuestRewardCostumeAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL)) == 0LL )
  {
    sub_1BCAA3C(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateTouchWait__end(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateTouchWait__update(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        QuestRewardCostumeAction_o *that,
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

  if ( (byte_4B1317E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CTouch_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_QuestRewardCostumeAction_StateTouchWait_update__, v11, v12);
    sub_1BCA7E0(&Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v13, v14);
    sub_1BCA7E0(&QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v15, v16);
    byte_4B1317E = 1;
  }
  v17 = sub_1BCAA2C(QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3);
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
          v28 = Method_QuestRewardCostumeAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardCostumeAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v28 = (_QWORD *)sub_1BCA7F8(Method_QuestRewardCostumeAction_StateTouchWait_update__);
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
            Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v36, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v26;
            if ( *(_QWORD *)v26 )
            {
              QuestRewardCostumeAction__SetState((QuestRewardCostumeAction_o *)isTouchPush, 0, v37);
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


void __fastcall QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0___ctor(
        QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardCostumeAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}