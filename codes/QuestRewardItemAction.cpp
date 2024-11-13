void __fastcall QuestRewardItemAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1319E & 1) == 0 )
  {
    sub_1BCA7E0(&QuestRewardItemAction_TypeInfo, v1, v2);
    byte_4B1319E = 1;
  }
  QuestRewardItemAction_TypeInfo->static_fields->ITEM_LABEL_MAX_WIDTH = 1024;
}


void __fastcall QuestRewardItemAction___ctor(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x1
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7

  if ( (byte_4B1319D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17420/*"bit_item_get01_3"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17421/*"bit_item_get01_4"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17419/*"bit_item_get01_2"*/, v11, v12);
    byte_4B1319D = 1;
  }
  this->fields.mLabelAnimate = 1;
  this->fields.mTreasureAnimStartTime = 1.0;
  *(_WORD *)&this->fields.mTreasureEffectOff = 257;
  v13 = StringLiteral_17419/*"bit_item_get01_2"*/;
  this->fields.DIFF_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17419/*"bit_item_get01_2"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.DIFF_ANIMATION_NAME_2_TYPES, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_17420/*"bit_item_get01_3"*/;
  this->fields.DIFF_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17420/*"bit_item_get01_3"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.DIFF_ANIMATION_NAME_3_TYPES,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = StringLiteral_17421/*"bit_item_get01_4"*/;
  this->fields.DIFF_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17421/*"bit_item_get01_4"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.DIFF_ANIMATION_NAME_4_TYPES,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = StringLiteral_17419/*"bit_item_get01_2"*/;
  this->fields.SAME_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17419/*"bit_item_get01_2"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.SAME_ANIMATION_NAME_2_TYPES,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = StringLiteral_17420/*"bit_item_get01_3"*/;
  this->fields.SAME_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17420/*"bit_item_get01_3"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.SAME_ANIMATION_NAME_3_TYPES,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = StringLiteral_17421/*"bit_item_get01_4"*/;
  this->fields.SAME_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17421/*"bit_item_get01_4"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.SAME_ANIMATION_NAME_4_TYPES,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardItemAction__Awake(QuestRewardItemAction_o *this, const MethodInfo *method)
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
  struct CStateManager_QuestRewardItemAction__o **p_mFSM; // x20
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

  if ( (byte_4B13192 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardItemAction___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_QuestRewardItemAction__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_QuestRewardItemAction__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&QuestRewardItemAction_StateItemLabel_TypeInfo, v15, v16);
    sub_1BCA7E0(&QuestRewardItemAction_StateNone_TypeInfo, v17, v18);
    sub_1BCA7E0(&QuestRewardItemAction_StatePlay_TypeInfo, v19, v20);
    sub_1BCA7E0(&QuestRewardItemAction_StateTouchWait_TypeInfo, v21, v22);
    byte_4B13192 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v24 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_QuestRewardItemAction__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v24,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_313FBC4 *)Method_CStateManager_QuestRewardItemAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardItemAction__o *)v24;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v24, v25, v26, v27, v28, v29, v30);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v35 = (Il2CppObject *)sub_1BCAA2C(QuestRewardItemAction_StateNone_TypeInfo, v32, v33, v34);
    System_Object___ctor(v35, 0LL);
    if ( !mFSM )
      goto LABEL_24;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v35,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardItemAction__add__);
    v38 = (CStateManager_T__o *)*p_mFSM;
    v42 = (Il2CppObject *)sub_1BCAA2C(QuestRewardItemAction_StatePlay_TypeInfo, v39, v40, v41);
    System_Object___ctor(v42, 0LL);
    if ( !v38 )
      goto LABEL_24;
    CStateManager_object___add(
      v38,
      1,
      (IState_T__o *)v42,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardItemAction__add__);
    v43 = (CStateManager_T__o *)*p_mFSM;
    v47 = (Il2CppObject *)sub_1BCAA2C(QuestRewardItemAction_StateItemLabel_TypeInfo, v44, v45, v46);
    System_Object___ctor(v47, 0LL);
    if ( !v43 )
      goto LABEL_24;
    CStateManager_object___add(
      v43,
      2,
      (IState_T__o *)v47,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardItemAction__add__);
    v48 = (CStateManager_T__o *)*p_mFSM;
    v52 = (Il2CppObject *)sub_1BCAA2C(QuestRewardItemAction_StateTouchWait_TypeInfo, v49, v50, v51);
    System_Object___ctor(v52, 0LL);
    if ( !v48 )
      goto LABEL_24;
    CStateManager_object___add(
      v48,
      3,
      (IState_T__o *)v52,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardItemAction__add__);
    QuestRewardItemAction__SetState(this, 0, v53);
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


void __fastcall QuestRewardItemAction__CommonSetUpEndAction(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B13198 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidBackKeyManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B13198 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_mScreenTouchInfo = &this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      gameObject = CommonUI__CreateScreeenTouchInfo(
                     (CommonUI_o *)Instance,
                     (UnityEngine_Transform_o *)gameObject,
                     0,
                     0LL);
      if ( gameObject )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.mScreenTouchInfo,
          (int64_t)Component_object,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        goto LABEL_10;
      }
    }
LABEL_13:
    sub_1BCAA3C(gameObject, v11);
  }
LABEL_10:
  gameObject = (UnityEngine_GameObject_o *)*p_mScreenTouchInfo;
  if ( !*p_mScreenTouchInfo )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
}


int32_t __fastcall QuestRewardItemAction__GetState(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRewardItemAction_o *v3; // x19
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B1319A & 1) == 0 )
  {
    this = (QuestRewardItemAction_o *)sub_1BCA7E0(&Method_CStateManager_QuestRewardItemAction__getState__, method, v2);
    byte_4B1319A = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__Play(
        QuestRewardItemAction_o *this,
        bool is_from_treasure_box,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  bool v12; // w21
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v28; // x20
  __int64 v29; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v31; // x0
  UnityEngine_Object_o *mAnimation; // x20
  const MethodInfo *v33; // x2
  UnityEngine_TrackedReference_o *Item; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v39; // x0
  System_Action_o *v40; // x21

  v12 = is_from_treasure_box;
  if ( (byte_4B13199 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, is_from_treasure_box, end_act);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_QuestRewardItemAction__Play_b__49_0__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v21, v22);
    byte_4B13199 = 1;
  }
  this->fields.mIsFromTreasureBox = v12;
  this->fields.mEndAct = end_act;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mEndAct,
    (int64_t)end_act,
    (int64_t)end_act,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mSimpleAnimation;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                               (SimpleAnimation_o *)gameObject,
                                               this->fields.playAnimationName,
                                               0LL);
    if ( !gameObject )
      goto LABEL_31;
    klass = gameObject->klass;
    v28 = gameObject;
    v29 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v29;
        p_offset += 2;
        if ( !v29 )
          goto LABEL_13;
      }
      v31 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_13:
      v31 = sub_1C1C7C0(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v31)(v28, *(_QWORD *)(v31 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
      if ( !gameObject )
        goto LABEL_31;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)gameObject,
                                                 this->fields.playAnimationName,
                                                 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_31;
        UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
      }
    }
  }
  if ( this->fields.mIsFromTreasureBox )
    QuestRewardItemAction__SetState(this, 1, v33);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v39 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v35);
      v39 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v39->static_fields->DEFAULT_FADE_TIME;
  }
  v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_QuestRewardItemAction__Play_b__49_0__, 0LL);
  if ( !Instance )
LABEL_31:
    sub_1BCAA3C(gameObject, v24);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v40, 0LL);
}


void __fastcall QuestRewardItemAction__SetActiveLabelList(
        QuestRewardItemAction_o *this,
        UILabel_array *itemLabelList,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v6; // x21
  bool v7; // w20
  UnityEngine_Component_o *gameObject; // x0

  if ( itemLabelList )
  {
    v4 = *(_QWORD *)&itemLabelList->max_length;
    if ( v4 )
    {
      if ( (int)v4 >= 1 )
      {
        v6 = 0LL;
        v7 = isActive;
        do
        {
          if ( (unsigned int)v6 >= (unsigned int)v4 )
            sub_1BCAA44(this, itemLabelList);
          gameObject = (UnityEngine_Component_o *)itemLabelList->m_Items[v6];
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
          {
            sub_1BCAA3C(gameObject, itemLabelList);
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v7, 0LL);
          LODWORD(v4) = itemLabelList->max_length;
          ++v6;
        }
        while ( (int)v6 < (int)v4 );
      }
    }
  }
}


void __fastcall QuestRewardItemAction__SetClearTextLabel(
        QuestRewardItemAction_o *this,
        UILabel_o *itemLabel,
        QuestRewardInfo_o *questInfoReward,
        const MethodInfo *method)
{
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  void *CrossOperatorString; // x0
  __int64 v31; // x1
  int32_t type; // w22
  Il2CppObject *v33; // x22
  __int64 v34; // x1
  Il2CppObject *CountableString; // x21
  System_String_o *Name; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v37; // x22
  System_String_o *v38; // x23
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  QuestRewardItemAction_c *v41; // x0
  int32_t num; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B13197 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EquipMaster___, itemLabel, questInfoReward);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&int_TypeInfo, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v22, v23);
    sub_1BCA7E0(&QuestRewardItemAction_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_10986/*"QUEST_CLEAR_REWARD_GET"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v28, v29);
    byte_4B13197 = 1;
  }
  CrossOperatorString = ItemType__get_CrossOperatorString(0LL);
  if ( !questInfoReward )
    goto LABEL_29;
  type = questInfoReward->fields.type;
  if ( type == 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( CrossOperatorString )
    {
      CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                              questInfoReward->fields.objectId,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( CrossOperatorString )
      {
        v33 = (Il2CppObject *)*((_QWORD *)CrossOperatorString + 3);
        CountableString = (Il2CppObject *)ItemType__GetCountableString(*((_DWORD *)CrossOperatorString + 12), 0LL);
        goto LABEL_22;
      }
    }
LABEL_29:
    sub_1BCAA3C(CrossOperatorString, v31);
  }
  CountableString = (Il2CppObject *)CrossOperatorString;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
  if ( type == 1 )
  {
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !CrossOperatorString )
      goto LABEL_29;
    CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                            questInfoReward->fields.objectId,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CrossOperatorString )
      goto LABEL_29;
    Name = ServantEntity__getName((ServantEntity_o *)CrossOperatorString, -1, -1, 0LL);
  }
  else
  {
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EquipMaster___);
    if ( !CrossOperatorString )
      goto LABEL_29;
    CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                            questInfoReward->fields.objectId,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    if ( !CrossOperatorString )
      goto LABEL_29;
    v37 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)CrossOperatorString + 4);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v31);
    Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v37, 0LL);
  }
  v33 = (Il2CppObject *)Name;
LABEL_22:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_10986/*"QUEST_CLEAR_REWARD_GET"*/, 0LL);
  num = questInfoReward->fields.num;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
  CrossOperatorString = System_String__Format_62415660(v38, v33, CountableString, v39, 0LL);
  if ( !itemLabel )
    goto LABEL_29;
  UILabel__set_text(itemLabel, (System_String_o *)CrossOperatorString, 0LL);
  v41 = QuestRewardItemAction_TypeInfo;
  if ( !QuestRewardItemAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo, v40);
    v41 = QuestRewardItemAction_TypeInfo;
  }
  UILabel__SetCondensedScale(itemLabel, v41->static_fields->ITEM_LABEL_MAX_WIDTH, 0LL);
  CrossOperatorString = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemLabel, 0LL);
  if ( !CrossOperatorString )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CrossOperatorString, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetState(QuestRewardItemAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B1319B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardItemAction__setState__, *(_QWORD *)&state, method);
    byte_4B1319B = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_QuestRewardItemAction__setState__);
}


void __fastcall QuestRewardItemAction__SetTitleSprite(
        QuestRewardItemAction_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  struct System_Collections_Generic_List_UISprite__o *titleSprites; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1319C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__, spriteName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__, v9, v10);
    byte_4B1319C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !System_String__IsNullOrEmpty(spriteName, 0LL)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.titleSprites, 0LL) )
  {
    titleSprites = this->fields.titleSprites;
    if ( !titleSprites )
      sub_1BCAA3C(0LL, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)titleSprites,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
      if ( !v13 )
        break;
      current = v16.fields._current;
      if ( !v16.fields._current )
        sub_1BCAA3C(v13, v14);
      UISprite__set_spriteName((UISprite_o *)v16.fields._current, spriteName, 0LL);
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[33].method)(
        current,
        current->klass->vtable[34].methodPtr);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
  }
}


void __fastcall QuestRewardItemAction__Setup(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *qri,
        const MethodInfo *method)
{
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
  __int64 transform; // x0
  __int64 v20; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *v29; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x23
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  UnityEngine_Object_o *v39; // x24
  Il2CppObject *v40; // x21
  UnityEngine_Object_o *v41; // x23
  struct System_String_o *name; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  QuestRewardItemAction_o *v49; // x0
  const MethodInfo *v50; // x3
  QuestRewardItemAction_o *v51; // x0
  const MethodInfo *v52; // x3
  QuestRewardItemAction_o *v53; // x0
  const MethodInfo *v54; // x3
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct UILabel_o *mItemLabel; // x22
  int64_t v62; // x21
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct UnityEngine_GameObject_array *v75; // x21
  struct UnityEngine_GameObject_o *mAppearEffObj; // x1
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  __int64 v83; // x1
  UnityEngine_Object_o *mServantFaceIcon; // x21
  QuestRewardItemAction_o *v85; // x0
  const MethodInfo *v86; // x3
  UnityEngine_Object_o *v87; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v89; // x1
  __int64 v90; // x0

  if ( (byte_4B13194 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, qri, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v7, v8);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v9, v10);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&UILabel___TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B13194 = 1;
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_48;
  ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49322392;
  p_mAnimation = &this->fields.mAnimation;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mAnimation,
    (int64_t)ComponentInChildren_object__49322392,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_48;
  v29 = UnityEngine_Component__GetComponentInChildren_object__49322392(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v29;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation, (int64_t)v29, v31, v32, v33, v34, v35, v36);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_48;
  v37 = UnityEngine_Component__GetComponentInChildren_object__49322392(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  v39 = (UnityEngine_Object_o *)*p_mSimpleAnimation;
  v40 = v37;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
  transform = UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( !*p_mSimpleAnimation )
      goto LABEL_48;
    transform = (__int64)(*p_mSimpleAnimation)[1].monitor;
    if ( !transform )
      goto LABEL_48;
  }
  else
  {
    v41 = (UnityEngine_Object_o *)*p_mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    transform = UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
    if ( (transform & 1) == 0 )
      goto LABEL_18;
    transform = (__int64)*p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_48;
    transform = (__int64)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_48;
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  this->fields.playAnimationName = name;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playAnimationName,
    (int64_t)name,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
LABEL_18:
  if ( !v40 )
    goto LABEL_48;
  BYTE5(v40[6].monitor) = 1;
  transform = (__int64)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_48;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  QuestRewardItemAction__SetActiveLabelList(v49, this->fields.mItemLabelList_2, 0, v50);
  QuestRewardItemAction__SetActiveLabelList(v51, this->fields.mItemLabelList_3, 0, v52);
  QuestRewardItemAction__SetActiveLabelList(v53, this->fields.mItemLabelList_4, 0, v54);
  transform = sub_1BCA888(UILabel___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_48;
  mItemLabel = this->fields.mItemLabel;
  v62 = transform;
  if ( mItemLabel )
  {
    transform = sub_1BCA91C(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)transform + 64LL));
    if ( !transform )
    {
      v90 = sub_1BCAA60();
      sub_1BCA908(v90, 0LL);
    }
  }
  if ( !*(_DWORD *)(v62 + 24) )
    goto LABEL_49;
  *(_QWORD *)(v62 + 32) = mItemLabel;
  sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 32), (int64_t)mItemLabel, v55, v56, v57, v58, v59, v60);
  this->fields.itemLabelDispList = (struct UILabel_array *)v62;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemLabelDispList, v62, v63, v64, v65, v66, v67, v68);
  transform = sub_1BCA888(UnityEngine_GameObject___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_48;
  v75 = (struct UnityEngine_GameObject_array *)transform;
  if ( !*(_DWORD *)(transform + 24) )
LABEL_49:
    sub_1BCAA44(transform, v20);
  mAppearEffObj = this->fields.mAppearEffObj;
  *(_QWORD *)(transform + 32) = mAppearEffObj;
  sub_1BCA784((PartyOrganizationUtility_o *)(transform + 32), (int64_t)mAppearEffObj, v69, v70, v71, v72, v73, v74);
  this->fields.appearEffObjDispList = v75;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.appearEffObjDispList,
    (int64_t)v75,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  if ( !qri )
LABEL_48:
    sub_1BCAA3C(transform, v20);
  if ( qri->fields.type == 1 )
  {
    transform = (__int64)this->fields.mItemSp;
    if ( !transform )
      goto LABEL_48;
    UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mServantFaceIcon = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v83);
    if ( UnityEngine_Object__op_Inequality(mServantFaceIcon, 0LL, 0LL) )
    {
      transform = (__int64)this->fields.mServantFaceIcon;
      if ( !transform )
        goto LABEL_48;
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
    }
    transform = (__int64)this->fields.mServantFaceIcon;
    if ( !transform )
      goto LABEL_48;
    ServantFaceIconComponent__Set_38928428(
      (ServantFaceIconComponent_o *)transform,
      qri->fields.objectId,
      0,
      0,
      0,
      0LL,
      0LL,
      2,
      0,
      0,
      0LL,
      0,
      0,
      0,
      0,
      0LL);
  }
  else
  {
    v87 = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    if ( UnityEngine_Object__op_Inequality(v87, 0LL, 0LL) )
    {
      transform = (__int64)this->fields.mServantFaceIcon;
      if ( !transform )
        goto LABEL_48;
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
    }
    transform = (__int64)this->fields.mItemSp;
    if ( !transform )
      goto LABEL_48;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    transform = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                           gameObject,
                           (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    if ( !transform )
      goto LABEL_48;
    ItemIconComponent__SetGift_38855180(
      (ItemIconComponent_o *)transform,
      qri->fields.type,
      qri->fields.objectId,
      qri->fields.num,
      0,
      0LL);
  }
  QuestRewardItemAction__SetClearTextLabel(v85, this->fields.mItemLabel, qri, v86);
  QuestRewardItemAction__CommonSetUpEndAction(this, v89);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetupMultipleQuestRewardInfo(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *questInfoReward,
        const MethodInfo *method)
{
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
  ServantFaceIconComponent_o *transform; // x0
  __int64 v18; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  QuestRewardItemAction_o *v33; // x0
  const MethodInfo *v34; // x3
  QuestRewardItemAction_o *v35; // x0
  const MethodInfo *v36; // x3
  QuestRewardItemAction_o *v37; // x0
  const MethodInfo *v38; // x3
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct UILabel_o *mItemLabel; // x22
  int64_t v46; // x21
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct UnityEngine_GameObject_array *v59; // x23
  struct UnityEngine_GameObject_o *mAppearEffObj; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int32_t num; // w8
  struct System_String_o *SAME_ANIMATION_NAME_2_TYPES; // x1
  struct UISprite_array *mItemSpList_3; // x23
  struct ServantFaceIconComponent_array *mServantFaceIconList_3; // x24
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct UnityEngine_GameObject_array **p_mAppearEffObjList_3; // x8
  struct System_String_o *SAME_ANIMATION_NAME_3_TYPES; // x1
  struct System_String_o *SAME_ANIMATION_NAME_4_TYPES; // x1
  struct UnityEngine_GameObject_array *v86; // x1
  __int64 v87; // x21
  ServantFaceIconComponent_o **m_Items; // x22
  UISprite_o **v89; // x25
  float v90; // s0
  float v91; // s2
  float v92; // s8
  float v93; // s9
  const MethodInfo *v94; // x3
  __int64 v95; // x8
  __int64 v96; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v98; // w8
  const MethodInfo *v99; // x1
  __int64 v100; // x0
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13196 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, questInfoReward, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v7, v8);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v9, v10);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v11, v12);
    sub_1BCA7E0(&UILabel___TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B13196 = 1;
  }
  if ( !this->fields.mItemSpList_2 || !this->fields.mItemLabelList_3 || !this->fields.mItemLabelList_4 )
    return;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_60;
  ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49322392;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mAnimation,
    (int64_t)ComponentInChildren_object__49322392,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_60;
  v26 = UnityEngine_Component__GetComponentInChildren_object__49322392(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v26;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_60;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__GetComponentInChildren_object__49322392(
                                              (UnityEngine_Component_o *)transform,
                                              (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_60;
  BYTE5(transform->fields.rarity2Sprite) = 1;
  transform = (ServantFaceIconComponent_o *)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_60;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)transform,
                                              0LL);
  if ( !transform )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  QuestRewardItemAction__SetActiveLabelList(v33, this->fields.mItemLabelList_2, 0, v34);
  QuestRewardItemAction__SetActiveLabelList(v35, this->fields.mItemLabelList_3, 0, v36);
  QuestRewardItemAction__SetActiveLabelList(v37, this->fields.mItemLabelList_4, 0, v38);
  transform = (ServantFaceIconComponent_o *)sub_1BCA888(UILabel___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_60;
  mItemLabel = this->fields.mItemLabel;
  v46 = (int64_t)transform;
  if ( mItemLabel )
  {
    transform = (ServantFaceIconComponent_o *)sub_1BCA91C(this->fields.mItemLabel, transform->klass->_1.element_class);
    if ( !transform )
    {
      v100 = sub_1BCAA60();
      sub_1BCA908(v100, 0LL);
    }
  }
  if ( !*(_DWORD *)(v46 + 24) )
    goto LABEL_61;
  *(_QWORD *)(v46 + 32) = mItemLabel;
  sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 32), (int64_t)mItemLabel, v39, v40, v41, v42, v43, v44);
  this->fields.itemLabelDispList = (struct UILabel_array *)v46;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemLabelDispList, v46, v47, v48, v49, v50, v51, v52);
  transform = (ServantFaceIconComponent_o *)sub_1BCA888(UnityEngine_GameObject___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_60;
  v59 = (struct UnityEngine_GameObject_array *)transform;
  if ( !LODWORD(transform->fields.m_CancellationTokenSource) )
LABEL_61:
    sub_1BCAA44(transform, v18);
  mAppearEffObj = this->fields.mAppearEffObj;
  transform->fields.backSprite = (struct UISprite_o *)mAppearEffObj;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&transform->fields.backSprite,
    (int64_t)mAppearEffObj,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.appearEffObjDispList = v59;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.appearEffObjDispList,
    (int64_t)v59,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( !questInfoReward )
    goto LABEL_60;
  num = questInfoReward->fields.num;
  if ( num == 3 )
  {
    SAME_ANIMATION_NAME_3_TYPES = this->fields.SAME_ANIMATION_NAME_3_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_3_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_3;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_3;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.playAnimationName,
      (int64_t)SAME_ANIMATION_NAME_3_TYPES,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_3;
  }
  else if ( num == 2 )
  {
    SAME_ANIMATION_NAME_2_TYPES = this->fields.SAME_ANIMATION_NAME_2_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_2_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_2;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.playAnimationName,
      (int64_t)SAME_ANIMATION_NAME_2_TYPES,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_2;
  }
  else
  {
    SAME_ANIMATION_NAME_4_TYPES = this->fields.SAME_ANIMATION_NAME_4_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_4_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_4;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_4;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.playAnimationName,
      (int64_t)SAME_ANIMATION_NAME_4_TYPES,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_4;
  }
  v86 = *p_mAppearEffObjList_3;
  this->fields.appearEffObjDispList = *p_mAppearEffObjList_3;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.appearEffObjDispList,
    (int64_t)v86,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  if ( !mItemSpList_3 )
LABEL_60:
    sub_1BCAA3C(transform, v18);
  v87 = 0LL;
  m_Items = mServantFaceIconList_3->m_Items;
  v89 = mItemSpList_3->m_Items;
  do
  {
    if ( (unsigned int)v87 >= mItemSpList_3->max_length )
      goto LABEL_61;
    transform = (ServantFaceIconComponent_o *)v89[v87];
    if ( !transform )
      goto LABEL_60;
    transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0LL);
    if ( !transform )
      goto LABEL_60;
    *(UnityEngine_Vector3_o *)&v90 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( (unsigned int)v87 >= mItemSpList_3->max_length )
      goto LABEL_61;
    transform = (ServantFaceIconComponent_o *)v89[v87];
    if ( !transform )
      goto LABEL_60;
    v92 = v90;
    v93 = v91;
    transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0LL);
    if ( !transform )
      goto LABEL_60;
    v101.fields.y = 0.0;
    v101.fields.x = v92;
    v101.fields.z = v93;
    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v101, 0LL);
    if ( questInfoReward->fields.type == 1 )
    {
      if ( (unsigned int)v87 >= mItemSpList_3->max_length )
        goto LABEL_61;
      transform = (ServantFaceIconComponent_o *)v89[v87];
      if ( !transform )
        goto LABEL_60;
      UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !mServantFaceIconList_3 )
        goto LABEL_60;
      v95 = *(_QWORD *)&mServantFaceIconList_3->max_length;
      if ( v95 )
      {
        if ( (unsigned int)v87 >= (unsigned int)v95 )
          goto LABEL_61;
        transform = m_Items[v87];
        if ( !transform )
          goto LABEL_60;
        transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0LL);
        if ( !transform )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
        if ( (unsigned int)v87 >= mServantFaceIconList_3->max_length )
          goto LABEL_61;
        transform = m_Items[v87];
        if ( !transform )
          goto LABEL_60;
        ServantFaceIconComponent__Set_38928428(
          transform,
          questInfoReward->fields.objectId,
          0,
          0,
          0,
          0LL,
          0LL,
          2,
          0,
          0,
          0LL,
          0,
          0,
          0,
          0,
          0LL);
      }
    }
    else
    {
      if ( !mServantFaceIconList_3 )
        goto LABEL_60;
      v96 = *(_QWORD *)&mServantFaceIconList_3->max_length;
      if ( v96 )
      {
        if ( (unsigned int)v87 >= (unsigned int)v96 )
          goto LABEL_61;
        transform = m_Items[v87];
        if ( !transform )
          goto LABEL_60;
        transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0LL);
        if ( !transform )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
      }
      if ( (unsigned int)v87 >= mItemSpList_3->max_length )
        goto LABEL_61;
      transform = (ServantFaceIconComponent_o *)v89[v87];
      if ( !transform )
        goto LABEL_60;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      transform = (ServantFaceIconComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                  gameObject,
                                                  (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
      if ( !transform )
        goto LABEL_60;
      ItemIconComponent__SetGift_38855180(
        (ItemIconComponent_o *)transform,
        questInfoReward->fields.type,
        questInfoReward->fields.objectId,
        1,
        0,
        0LL);
    }
    v98 = questInfoReward->fields.num;
    ++v87;
    if ( v98 >= 4 )
      v98 = 4;
    if ( v98 <= 2 )
      v98 = 2;
  }
  while ( (unsigned int)v87 < v98 );
  QuestRewardItemAction__SetClearTextLabel(
    (QuestRewardItemAction_o *)transform,
    this->fields.mItemLabel,
    questInfoReward,
    v94);
  QuestRewardItemAction__CommonSetUpEndAction(this, v99);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__Setup_34701004(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_array *questInfoRewardList,
        bool isMultiDisp,
        const MethodInfo *method)
{
  QuestRewardInfo_array *v4; // x20
  QuestRewardItemAction_o *v5; // x19
  bool v6; // w21
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
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t mItemLabelList_2; // x1
  struct UISprite_array *mItemSpList_2; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_2; // x23
  int64_t DIFF_ANIMATION_NAME_2_TYPES; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t mAppearEffObjList_2; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  QuestRewardItemAction_o *v60; // x0
  const MethodInfo *v61; // x3
  QuestRewardItemAction_o *v62; // x0
  const MethodInfo *v63; // x3
  UILabel_array *mItemLabelList_3; // x1
  bool v65; // w2
  TerminalPramsManager_c *v66; // x0
  int32_t PhaseCnt_k__BackingField; // w23
  __int64 v68; // x2
  Il2CppObject *Master_object; // x21
  QuestRewardInfo_o *v70; // x8
  int64_t v71; // x1
  int64_t DIFF_ANIMATION_NAME_3_TYPES; // x1
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t mAppearEffObjList_3; // x1
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  QuestRewardItemAction_o *v86; // x0
  const MethodInfo *v87; // x3
  QuestRewardItemAction_o *v88; // x0
  const MethodInfo *v89; // x3
  bool v90; // w2
  UILabel_array **p_mItemLabelList_4; // x24
  int64_t mItemLabelList_4; // x1
  int64_t DIFF_ANIMATION_NAME_4_TYPES; // x1
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t mAppearEffObjList_4; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  QuestRewardItemAction_o *v107; // x0
  const MethodInfo *v108; // x3
  QuestRewardItemAction_o *v109; // x0
  const MethodInfo *v110; // x3
  int max_length; // w8
  __int64 v112; // x24
  il2cpp_array_size_t v113; // w27
  QuestRewardInfo_o *v114; // x21
  const MethodInfo *v115; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabelDispList; // x8
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  v4 = questInfoRewardList;
  v5 = this;
  v6 = isMultiDisp;
  if ( (byte_4B13195 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, questInfoRewardList, isMultiDisp);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v17, v18);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v20);
    this = (QuestRewardItemAction_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    byte_4B13195 = 1;
  }
  entity = 0LL;
  v5->fields.isMultiDisp = v6;
  if ( !v4 )
    goto LABEL_73;
  if ( (int)v4->max_length <= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, questInfoRewardList);
    if ( !byte_4B12DCE )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, questInfoRewardList, isMultiDisp);
      byte_4B12DCE = 1;
    }
    v66 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, questInfoRewardList);
      v66 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v66->static_fields->_PhaseCnt_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, questInfoRewardList);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, questInfoRewardList, v68);
      byte_4B12DC3 = 1;
    }
    this = (QuestRewardItemAction_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, questInfoRewardList);
      this = (QuestRewardItemAction_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_73;
    this = (QuestRewardItemAction_o *)QuestPhaseMaster__TryGetEntity(
                                        (QuestPhaseMaster_o *)Master_object,
                                        &entity,
                                        HIDWORD(this->fields.mAppearEffObjList_2->bounds),
                                        PhaseCnt_k__BackingField + 1,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRewardItemAction_o *)entity;
      if ( !entity )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)QuestPhaseEntity__GetClearGiftItemListDisplay(entity, 0LL);
      if ( !v4->max_length )
        goto LABEL_74;
      v70 = v4->m_Items[0];
      if ( !v70 )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)System_Array__IndexOf_int_(
                                          (System_Int32_array *)this,
                                          v70->fields.objectId,
                                          (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        if ( !v4->max_length )
          goto LABEL_74;
        questInfoRewardList = (QuestRewardInfo_array *)v4->m_Items[0];
        if ( questInfoRewardList )
        {
          if ( (int)questInfoRewardList->max_length >= 2 )
          {
            QuestRewardItemAction__SetupMultipleQuestRewardInfo(v5, (QuestRewardInfo_o *)questInfoRewardList, v37);
            return;
          }
          goto LABEL_34;
        }
LABEL_73:
        sub_1BCAA3C(this, questInfoRewardList);
      }
    }
LABEL_34:
    if ( !v4->max_length )
      goto LABEL_74;
LABEL_35:
    QuestRewardItemAction__Setup(v5, v4->m_Items[0], v37);
    return;
  }
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
  if ( !this )
    goto LABEL_73;
  ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v5->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49322392;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v5->fields.mAnimation,
    (int64_t)ComponentInChildren_object__49322392,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
  if ( !this )
    goto LABEL_73;
  v30 = UnityEngine_Component__GetComponentInChildren_object__49322392(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v5->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v30;
  sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.mSimpleAnimation, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
  if ( !this )
    goto LABEL_73;
  this = (QuestRewardItemAction_o *)UnityEngine_Component__GetComponentInChildren_object__49322392(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !this )
    goto LABEL_73;
  BYTE5(this->fields.titleSprites) = 1;
  switch ( v4->max_length )
  {
    case 0u:
      goto LABEL_74;
    case 2u:
      mItemLabelList_2 = (int64_t)v5->fields.mItemLabelList_2;
      mItemSpList_2 = v5->fields.mItemSpList_2;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_2;
      v5->fields.itemLabelDispList = (struct UILabel_array *)mItemLabelList_2;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v5->fields.itemLabelDispList,
        mItemLabelList_2,
        (int64_t)v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      DIFF_ANIMATION_NAME_2_TYPES = (int64_t)v5->fields.DIFF_ANIMATION_NAME_2_TYPES;
      v5->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_2_TYPES;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v5->fields.playAnimationName,
        DIFF_ANIMATION_NAME_2_TYPES,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      mAppearEffObjList_2 = (int64_t)v5->fields.mAppearEffObjList_2;
      v5->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_2;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v5->fields.appearEffObjDispList,
        mAppearEffObjList_2,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v60, v5->fields.mItemLabelList_2, 1, v61);
      mItemLabelList_3 = v5->fields.mItemLabelList_3;
      v65 = 0;
      goto LABEL_39;
    case 3u:
      v71 = (int64_t)v5->fields.mItemLabelList_3;
      mItemSpList_2 = v5->fields.mItemSpList_3;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_3;
      v5->fields.itemLabelDispList = (struct UILabel_array *)v71;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v5->fields.itemLabelDispList,
        v71,
        (int64_t)v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      DIFF_ANIMATION_NAME_3_TYPES = (int64_t)v5->fields.DIFF_ANIMATION_NAME_3_TYPES;
      v5->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_3_TYPES;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v5->fields.playAnimationName,
        DIFF_ANIMATION_NAME_3_TYPES,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
      mAppearEffObjList_3 = (int64_t)v5->fields.mAppearEffObjList_3;
      v5->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_3;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v5->fields.appearEffObjDispList,
        mAppearEffObjList_3,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v86, v5->fields.mItemLabelList_2, 0, v87);
      mItemLabelList_3 = v5->fields.mItemLabelList_3;
      v65 = 1;
LABEL_39:
      QuestRewardItemAction__SetActiveLabelList(v62, mItemLabelList_3, v65, v63);
      v90 = 0;
      p_mItemLabelList_4 = &v5->fields.mItemLabelList_4;
      break;
    case 4u:
      mItemSpList_2 = v5->fields.mItemSpList_4;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_4;
      p_mItemLabelList_4 = &v5->fields.mItemLabelList_4;
      mItemLabelList_4 = (int64_t)v5->fields.mItemLabelList_4;
      v5->fields.itemLabelDispList = (struct UILabel_array *)mItemLabelList_4;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v5->fields.itemLabelDispList,
        mItemLabelList_4,
        (int64_t)v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      DIFF_ANIMATION_NAME_4_TYPES = (int64_t)v5->fields.DIFF_ANIMATION_NAME_4_TYPES;
      v5->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_4_TYPES;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v5->fields.playAnimationName,
        DIFF_ANIMATION_NAME_4_TYPES,
        v94,
        v95,
        v96,
        v97,
        v98,
        v99);
      mAppearEffObjList_4 = (int64_t)v5->fields.mAppearEffObjList_4;
      v5->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_4;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v5->fields.appearEffObjDispList,
        mAppearEffObjList_4,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v107, v5->fields.mItemLabelList_2, 0, v108);
      QuestRewardItemAction__SetActiveLabelList(v109, v5->fields.mItemLabelList_3, 0, v110);
      v90 = 1;
      break;
    default:
      goto LABEL_35;
  }
  QuestRewardItemAction__SetActiveLabelList(v88, *p_mItemLabelList_4, v90, v89);
  max_length = v4->max_length;
  if ( max_length >= 1 )
  {
    v112 = 4LL;
    while ( 1 )
    {
      v113 = v112 - 4;
      if ( (int)v112 - 4 >= (unsigned int)max_length )
        break;
      v114 = (QuestRewardInfo_o *)*((_QWORD *)&v4->obj.klass + v112);
      if ( !v114 )
        goto LABEL_73;
      if ( v114->fields.type == 1 )
      {
        if ( !mItemSpList_2 )
          goto LABEL_73;
        if ( v113 >= mItemSpList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v112);
        if ( !this )
          goto LABEL_73;
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !mServantFaceIconList_2 )
          goto LABEL_73;
        if ( v113 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v112);
        if ( !this )
          goto LABEL_73;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( v113 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v112);
        if ( !this )
          goto LABEL_73;
        ServantFaceIconComponent__Set_38928428(
          (ServantFaceIconComponent_o *)this,
          v114->fields.objectId,
          0,
          0,
          0,
          0LL,
          0LL,
          2,
          0,
          0,
          0LL,
          0,
          0,
          0,
          0,
          0LL);
      }
      else
      {
        if ( !mServantFaceIconList_2 )
          goto LABEL_73;
        if ( v113 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v112);
        if ( !this )
          goto LABEL_73;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( !mItemSpList_2 )
          goto LABEL_73;
        if ( v113 >= mItemSpList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v112);
        if ( !this )
          goto LABEL_73;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (QuestRewardItemAction_o *)GameObjectExtensions__SafeGetComponent_object_(
                                            gameObject,
                                            (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_73;
        ItemIconComponent__SetGift_38855180(
          (ItemIconComponent_o *)this,
          v114->fields.type,
          v114->fields.objectId,
          v114->fields.num,
          0,
          0LL);
      }
      itemLabelDispList = v5->fields.itemLabelDispList;
      if ( !itemLabelDispList )
        goto LABEL_73;
      if ( v113 >= itemLabelDispList->max_length )
        break;
      QuestRewardItemAction__SetClearTextLabel(this, *((UILabel_o **)&itemLabelDispList->obj.klass + v112), v114, v115);
      max_length = v4->max_length;
      if ( (int)++v112 - 4 >= max_length )
        goto LABEL_70;
    }
LABEL_74:
    sub_1BCAA44(this, questInfoRewardList);
  }
LABEL_70:
  QuestRewardItemAction__CommonSetUpEndAction(v5, (const MethodInfo *)questInfoRewardList);
}


void __fastcall QuestRewardItemAction__Update(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B13193 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardItemAction__update__, method, v2);
    sub_1BCA7E0(&CTouch_TypeInfo, v4, v5);
    byte_4B13193 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_313FCD4 *)Method_CStateManager_QuestRewardItemAction__update__);
}


void __fastcall QuestRewardItemAction___Play_b__49_0(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.mIsFromTreasureBox )
    QuestRewardItemAction__SetState(this, 1, v2);
}


void __fastcall QuestRewardItemAction_StateItemLabel___ctor(
        QuestRewardItemAction_StateItemLabel_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateItemLabel__begin(
        QuestRewardItemAction_StateItemLabel_o *this,
        QuestRewardItemAction_o *that,
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
  UnityEngine_Component_o *transform; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x19
  __int64 v27; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x3
  __int64 v36; // x8
  Il2CppObject *Component_object; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x1
  ManagerConfig_c *v45; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // w25
  MoveObject_o *v49; // x21
  float x; // s10
  float v51; // s11
  float v52; // s12
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Action_o *v56; // x22
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Action_o *v60; // x23
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4B131A1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v5, v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_QuestRewardItemAction_StateItemLabel_begin__, v9, v10);
    sub_1BCA7E0(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v11, v12);
    sub_1BCA7E0(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v13, v14);
    sub_1BCA7E0(&QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v15, v16);
    byte_4B131A1 = 1;
  }
  v17 = sub_1BCAA2C(QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_19;
  *(_QWORD *)(v17 + 32) = that;
  v26 = v17 + 32;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)that, v20, v21, v22, v23, v24, v25);
  v27 = *(_QWORD *)(v17 + 32);
  if ( !v27 )
    goto LABEL_19;
  transform = *(UnityEngine_Component_o **)(v27 + 80);
  if ( !transform )
    goto LABEL_19;
  if ( *(_BYTE *)(v27 + 312) )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_19;
    transform = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_19;
  }
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  *(_QWORD *)(v17 + 16) = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)gameObject, v29, v30, v31, v32, v33, v34);
  v36 = *(_QWORD *)(v17 + 32);
  if ( !v36 )
    goto LABEL_19;
  QuestRewardItemAction__SetActiveLabelList(
    (QuestRewardItemAction_o *)transform,
    *(UILabel_array **)(v36 + 248),
    1,
    v35);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v17 + 16),
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v17 + 24) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)Component_object, v38, v39, v40, v41, v42, v43);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v17 + 16), 0LL);
  v45 = ManagerConfig_TypeInfo;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v44);
    v45 = ManagerConfig_TypeInfo;
  }
  WIDTH = v45->static_fields->WIDTH;
  v64 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v17 + 16), 0LL);
  v49 = *(MoveObject_o **)(v17 + 24);
  x = v64.fields.x;
  v51 = v64.fields.y;
  v52 = v64.fields.z;
  v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v53, v54, v55);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v17,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v60 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v57, v58, v59);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v17,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v49
    || (v65.fields.x = (float)WIDTH,
        v65.fields.y = y,
        v65.fields.z = z,
        v66.fields.x = x,
        v66.fields.y = v51,
        v66.fields.z = v52,
        MoveObject__Play(v49, v65, v66, 0.25, v56, v60, 0.0, 17, 0LL),
        !*(_QWORD *)v26) )
  {
LABEL_19:
    sub_1BCAA3C(transform, v19);
  }
  if ( *(_BYTE *)(*(_QWORD *)v26 + 217LL) )
  {
    v61 = Method_QuestRewardItemAction_StateItemLabel_begin__;
    if ( (*((_BYTE *)Method_QuestRewardItemAction_StateItemLabel_begin__ + 83) & 2) != 0 )
      v61 = (_QWORD *)sub_1BCA7F8(Method_QuestRewardItemAction_StateItemLabel_begin__);
    v62 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v61, v61[4]);
    OverwriteAssetSoundName__PlaySystemSe(v62, 4, 0LL);
  }
}


void __fastcall QuestRewardItemAction_StateItemLabel__end(
        QuestRewardItemAction_StateItemLabel_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateItemLabel__update(
        QuestRewardItemAction_StateItemLabel_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___ctor(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___begin_b__0(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1BCAA3C(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, mo->fields.mNow, 0LL);
}


void __fastcall QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRewardItemAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(0LL, method);
  QuestRewardItemAction__SetState(that, 3, v2);
}


void __fastcall QuestRewardItemAction_StateNone___ctor(
        QuestRewardItemAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateNone__begin(
        QuestRewardItemAction_StateNone_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateNone__end(
        QuestRewardItemAction_StateNone_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateNone__update(
        QuestRewardItemAction_StateNone_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StatePlay___ctor(
        QuestRewardItemAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StatePlay__begin(
        QuestRewardItemAction_StatePlay_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  long double v3; // q8
  QuestRewardItemAction_StatePlay_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x21
  SimpleAnimation_State_o *Item; // x0
  PartyOrganizationUtility_o *p_fields; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_c *klass; // x21
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_TrackedReference_o *v19; // x20
  float mTreasureAnimStartTime; // s0
  _QWORD *image; // x8
  __int64 v22; // x9
  SimpleAnimation_State_c **v23; // x10
  __int64 v24; // x0
  PartyOrganizationUtility_c *v25; // x20
  _QWORD *v26; // x8
  __int64 v27; // x9
  SimpleAnimation_State_c **v28; // x10
  __int64 v29; // x0
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x20
  int max_length; // w8
  unsigned int v32; // w21
  _BOOL4 v33; // w8

  v5 = this;
  if ( (byte_4B1319F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    this = (QuestRewardItemAction_StatePlay_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v6, v7);
    byte_4B1319F = 1;
  }
  if ( !that )
    goto LABEL_48;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
      goto LABEL_48;
    Item = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.playAnimationName, 0LL);
    v5->fields.mSimpleAnimState = Item;
    p_fields = (PartyOrganizationUtility_o *)&v5->fields;
    sub_1BCA784(p_fields, (int64_t)Item, v11, v12, v13, v14, v15, v16);
    klass = p_fields->klass;
    if ( that->fields.mIsFromTreasureBox )
    {
      *(float *)&v3 = that->fields.mTreasureAnimStartTime;
      if ( !klass )
        goto LABEL_48;
    }
    else
    {
      LODWORD(v3) = 0;
      if ( !klass )
        goto LABEL_48;
    }
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
          goto LABEL_24;
      }
      v24 = (__int64)&image[2 * *(_DWORD *)v23 + 51];
    }
    else
    {
LABEL_24:
      v24 = sub_1C1C7C0(p_fields->klass, SimpleAnimation_State_TypeInfo, 6LL);
    }
    this = (QuestRewardItemAction_StatePlay_o *)(*(__int64 (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, long double))v24)(
                                                  klass,
                                                  *(_QWORD *)(v24 + 8),
                                                  v3);
    v25 = p_fields->klass;
    if ( !v25 )
      goto LABEL_48;
    v26 = v25->_1.image;
    v27 = *((unsigned __int16 *)v25->_1.image + 151);
    if ( *((_WORD *)v25->_1.image + 151) )
    {
      v28 = (SimpleAnimation_State_c **)(v26[22] + 8LL);
      while ( *(v28 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v27;
        v28 += 2;
        if ( !v27 )
          goto LABEL_31;
      }
      v29 = (__int64)&v26[2 * *(_DWORD *)v28 + 55];
    }
    else
    {
LABEL_31:
      v29 = sub_1C1C7C0(v25, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v29)(v25, *(_QWORD *)(v29 + 8), 1.0);
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
LABEL_48:
      sub_1BCAA3C(this, that);
    this = (QuestRewardItemAction_StatePlay_o *)SimpleAnimation__Play_64539336(
                                                  (SimpleAnimation_o *)this,
                                                  that->fields.playAnimationName,
                                                  0LL);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
      if ( !this )
        goto LABEL_48;
      v19 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                (UnityEngine_Animation_o *)this,
                                                that->fields.playAnimationName,
                                                0LL);
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_TrackedReference__op_Inequality(v19, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( that->fields.mIsFromTreasureBox )
        {
          mTreasureAnimStartTime = that->fields.mTreasureAnimStartTime;
          if ( !v19 )
            goto LABEL_48;
        }
        else
        {
          mTreasureAnimStartTime = 0.0;
          if ( !v19 )
            goto LABEL_48;
        }
        UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)v19, mTreasureAnimStartTime, 0LL);
        UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)v19, 1.0, 0LL);
        this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
        if ( !this )
          goto LABEL_48;
        this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Animation__Play_69899248(
                                                      (UnityEngine_Animation_o *)this,
                                                      that->fields.playAnimationName,
                                                      0LL);
      }
    }
  }
  appearEffObjDispList = that->fields.appearEffObjDispList;
  if ( !appearEffObjDispList )
    goto LABEL_48;
  max_length = appearEffObjDispList->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
        sub_1BCAA44(this, that);
      v33 = !that->fields.mIsFromTreasureBox || !that->fields.mTreasureEffectOff;
      this = (QuestRewardItemAction_StatePlay_o *)appearEffObjDispList->m_Items[v32];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v33, 0LL);
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v32 >= max_length )
        return;
    }
    goto LABEL_48;
  }
}


void __fastcall QuestRewardItemAction_StatePlay__end(
        QuestRewardItemAction_StatePlay_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StatePlay__update(
        QuestRewardItemAction_StatePlay_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x21
  int max_length; // w8
  char v10; // w22
  char v11; // w23
  unsigned int v12; // w24
  Il2CppClass **v13; // x8
  UnityEngine_GameObject_o *v14; // x20
  _BOOL4 v15; // w8
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  const MethodInfo *v18; // x2
  int32_t v19; // w1
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0

  if ( (byte_4B131A0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    this = (QuestRewardItemAction_StatePlay_o *)sub_1BCA7E0(&Method_QuestRewardItemAction_StatePlay_update__, v6, v7);
    byte_4B131A0 = 1;
  }
  if ( !that )
    goto LABEL_42;
  appearEffObjDispList = that->fields.appearEffObjDispList;
  if ( !appearEffObjDispList )
    goto LABEL_42;
  max_length = appearEffObjDispList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1BCAA44(this, that);
      v13 = &appearEffObjDispList->obj.klass + (int)v12;
      v14 = (UnityEngine_GameObject_o *)v13[4];
      if ( !v14 )
        goto LABEL_42;
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_GameObject__get_activeSelf(
                                                    (UnityEngine_GameObject_o *)v13[4],
                                                    0LL);
      if ( that->fields.mIsFromTreasureBox )
        v10 = (char)this;
      if ( !that->fields.mIsFromTreasureBox )
        v11 = (char)this;
      if ( that->fields.mIsFromTreasureBox )
        break;
      if ( (v11 & 1) == 0 )
      {
        v15 = 1;
LABEL_18:
        UnityEngine_GameObject__SetActive(v14, v15, 0LL);
      }
LABEL_19:
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_20;
    }
    v15 = !that->fields.mTreasureEffectOff;
    if ( v15 == (v10 & 1) )
      goto LABEL_19;
    goto LABEL_18;
  }
LABEL_20:
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
      goto LABEL_42;
    if ( SimpleAnimation__IsPlaying((SimpleAnimation_o *)this, that->fields.playAnimationName, 0LL) )
      return;
LABEL_31:
    this = (QuestRewardItemAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
      {
        if ( that->fields.mLabelAnimate )
        {
          v19 = 2;
        }
        else
        {
          if ( that->fields.mGetSEonProgram )
          {
            v20 = Method_QuestRewardItemAction_StatePlay_update__;
            if ( (*((_BYTE *)Method_QuestRewardItemAction_StatePlay_update__ + 83) & 2) != 0 )
              v20 = (_QWORD *)sub_1BCA7F8(Method_QuestRewardItemAction_StatePlay_update__);
            v21 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
            OverwriteAssetSoundName__PlaySystemSe(v21, 4, 0LL);
          }
          v19 = 3;
        }
        QuestRewardItemAction__SetState(that, v19, v18);
      }
      return;
    }
LABEL_42:
    sub_1BCAA3C(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
    if ( !this )
      goto LABEL_42;
    if ( UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)this, that->fields.playAnimationName, 0LL) )
      return;
    goto LABEL_31;
  }
}


void __fastcall QuestRewardItemAction_StateTouchWait___ctor(
        QuestRewardItemAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateTouchWait__CheckTutorial(
        QuestRewardItemAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_4B131A3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__, v4, v5);
    byte_4B131A3 = 1;
  }
  if ( EventTutorialMaster__IsTutorialAvailable(0, 75, 0, 0, 0, 0, 0LL) )
  {
    this->fields.waitTutorial = 1;
    v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v6, v7, v8);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__,
      0LL);
    EventTutorialMaster__CheckTutorial(0, 75, v9, 0, 0, 0, 0, 0LL);
  }
  else
  {
    this->fields.waitTutorial = 0;
  }
}


void __fastcall QuestRewardItemAction_StateTouchWait__begin(
        QuestRewardItemAction_StateTouchWait_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  QuestRewardItemAction_StateTouchWait_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( !that
    || (v3 = this, (this = (QuestRewardItemAction_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0LL)
    || (this = (QuestRewardItemAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL)) == 0LL )
  {
    sub_1BCAA3C(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  QuestRewardItemAction_StateTouchWait__CheckTutorial(v3, v4);
}


void __fastcall QuestRewardItemAction_StateTouchWait__end(
        QuestRewardItemAction_StateTouchWait_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateTouchWait__update(
        QuestRewardItemAction_StateTouchWait_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v20; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x19
  __int64 v30; // x1
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v37; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v39; // x22
  const MethodInfo *v40; // x2

  if ( (byte_4B131A2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&AndroidBackKeyManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&CTouch_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_QuestRewardItemAction_StateTouchWait_update__, v14, v15);
    sub_1BCA7E0(&Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__, v16, v17);
    sub_1BCA7E0(&QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo, v18, v19);
    byte_4B131A2 = 1;
  }
  v20 = sub_1BCAA2C(QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_19;
  *(_QWORD *)(v20 + 16) = that;
  v29 = v20 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)that, v23, v24, v25, v26, v27, v28);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v30);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 && !this->fields.waitTutorial )
  {
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( *(_QWORD *)v29 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v29 + 232LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v31 = Method_QuestRewardItemAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardItemAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v31 = (_QWORD *)sub_1BCA7F8(Method_QuestRewardItemAction_StateTouchWait_update__);
          v32 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v31, v31[4]);
          OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v37 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v33);
            v37 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v37->static_fields->DEFAULT_FADE_TIME;
          v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
          System_Action___ctor(
            v39,
            (Il2CppObject *)v20,
            Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v39, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v29;
            if ( *(_QWORD *)v29 )
            {
              QuestRewardItemAction__SetState((QuestRewardItemAction_o *)isTouchPush, 0, v40);
              return;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(isTouchPush, v22);
  }
}


void __fastcall QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0___ctor(
        QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0___update_b__0(
        QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardItemAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}