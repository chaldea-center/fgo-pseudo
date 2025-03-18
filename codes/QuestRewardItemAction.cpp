void __fastcall QuestRewardItemAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C1EEB8 & 1) == 0 )
  {
    sub_1C3B764(&QuestRewardItemAction_TypeInfo, v1);
    byte_4C1EEB8 = 1;
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
  __int64 v10; // x1
  int64_t v11; // x1
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4C1EEB7 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17582/*"charaShake"*/, method);
    sub_1C3B764(&StringLiteral_17583/*"charaShakeStop"*/, v9);
    sub_1C3B764(&StringLiteral_17581/*"charaShadow"*/, v10);
    byte_4C1EEB7 = 1;
  }
  this->fields.mLabelAnimate = 1;
  this->fields.mTreasureAnimStartTime = 1.0;
  *(_WORD *)&this->fields.mTreasureEffectOff = 257;
  v11 = StringLiteral_17581/*"charaShadow"*/;
  this->fields.DIFF_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17581/*"charaShadow"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.DIFF_ANIMATION_NAME_2_TYPES, v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_17582/*"charaShake"*/;
  this->fields.DIFF_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17582/*"charaShake"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.DIFF_ANIMATION_NAME_3_TYPES,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = StringLiteral_17583/*"charaShakeStop"*/;
  this->fields.DIFF_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17583/*"charaShakeStop"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.DIFF_ANIMATION_NAME_4_TYPES,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = StringLiteral_17581/*"charaShadow"*/;
  this->fields.SAME_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17581/*"charaShadow"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.SAME_ANIMATION_NAME_2_TYPES,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = StringLiteral_17582/*"charaShake"*/;
  this->fields.SAME_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17582/*"charaShake"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.SAME_ANIMATION_NAME_3_TYPES,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = StringLiteral_17583/*"charaShakeStop"*/;
  this->fields.SAME_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17583/*"charaShakeStop"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.SAME_ANIMATION_NAME_4_TYPES,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardItemAction__Awake(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct CStateManager_QuestRewardItemAction__o **p_mFSM; // x20
  CStateManager_T__o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v21; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v23; // x1
  CStateManager_T__o *v24; // x21
  Il2CppObject *v25; // x22
  CStateManager_T__o *v26; // x21
  Il2CppObject *v27; // x22
  CStateManager_T__o *v28; // x20
  Il2CppObject *v29; // x21
  const MethodInfo *v30; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v33; // x21
  Il2CppObject *v34; // x21
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4C1EEAC & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_QuestRewardItemAction___ctor__, method);
    sub_1C3B764(&Method_CStateManager_QuestRewardItemAction__add__, v3);
    sub_1C3B764(&CStateManager_QuestRewardItemAction__TypeInfo, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v5);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&QuestRewardItemAction_StateItemLabel_TypeInfo, v8);
    sub_1C3B764(&QuestRewardItemAction_StateNone_TypeInfo, v9);
    sub_1C3B764(&QuestRewardItemAction_StatePlay_TypeInfo, v10);
    sub_1C3B764(&QuestRewardItemAction_StateTouchWait_TypeInfo, v11);
    byte_4C1EEAC = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v13 = (CStateManager_T__o *)sub_1C3B9B0(CStateManager_QuestRewardItemAction__TypeInfo);
    CStateManager_object____ctor(
      v13,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3225B48 *)Method_CStateManager_QuestRewardItemAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardItemAction__o *)v13;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v21 = (Il2CppObject *)sub_1C3B9B0(QuestRewardItemAction_StateNone_TypeInfo);
    System_Object___ctor(v21, 0LL);
    if ( !mFSM )
      goto LABEL_24;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v21,
      (const MethodInfo_3225BF0 *)Method_CStateManager_QuestRewardItemAction__add__);
    v24 = (CStateManager_T__o *)*p_mFSM;
    v25 = (Il2CppObject *)sub_1C3B9B0(QuestRewardItemAction_StatePlay_TypeInfo);
    System_Object___ctor(v25, 0LL);
    if ( !v24 )
      goto LABEL_24;
    CStateManager_object___add(
      v24,
      1,
      (IState_T__o *)v25,
      (const MethodInfo_3225BF0 *)Method_CStateManager_QuestRewardItemAction__add__);
    v26 = (CStateManager_T__o *)*p_mFSM;
    v27 = (Il2CppObject *)sub_1C3B9B0(QuestRewardItemAction_StateItemLabel_TypeInfo);
    System_Object___ctor(v27, 0LL);
    if ( !v26 )
      goto LABEL_24;
    CStateManager_object___add(
      v26,
      2,
      (IState_T__o *)v27,
      (const MethodInfo_3225BF0 *)Method_CStateManager_QuestRewardItemAction__add__);
    v28 = (CStateManager_T__o *)*p_mFSM;
    v29 = (Il2CppObject *)sub_1C3B9B0(QuestRewardItemAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v29, 0LL);
    if ( !v28 )
      goto LABEL_24;
    CStateManager_object___add(
      v28,
      3,
      (IState_T__o *)v29,
      (const MethodInfo_3225BF0 *)Method_CStateManager_QuestRewardItemAction__add__);
    QuestRewardItemAction__SetState(this, 0, v30);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v33 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v34 = UnityEngine_Object__Instantiate_object_(
              v33,
              (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v34, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4C1C511 )
        {
          sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v35);
          byte_4C1C511 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v34,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v34 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v34,
                                         (const MethodInfo_3041C7C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v34;
            sub_1C3B708(
              (PartyOrganizationUtility_o *)&this->fields.particleObj,
              (int64_t)v34,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41);
            return;
          }
        }
LABEL_24:
        sub_1C3B9C0(ComponentInChildren_object, v23);
      }
    }
  }
}


void __fastcall QuestRewardItemAction__CommonSetUpEndAction(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C1EEB2 & 1) == 0 )
  {
    sub_1C3B764(&AndroidBackKeyManager_TypeInfo, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1EEB2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_mScreenTouchInfo = &this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.mScreenTouchInfo,
          (int64_t)Component_object,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        goto LABEL_10;
      }
    }
LABEL_13:
    sub_1C3B9C0(gameObject, v7);
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
  QuestRewardItemAction_o *v2; // x19
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C1EEB4 & 1) == 0 )
  {
    this = (QuestRewardItemAction_o *)sub_1C3B764(&Method_CStateManager_QuestRewardItemAction__getState__, method);
    byte_4C1EEB4 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C3B9C0(this, method);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v22; // x20
  __int64 v23; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v25; // x0
  UnityEngine_Object_o *mAnimation; // x20
  const MethodInfo *v27; // x2
  UnityEngine_TrackedReference_o *Item; // x20
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v30; // x0
  System_Action_o *v31; // x21

  v12 = is_from_treasure_box;
  if ( (byte_4C1EEB3 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, is_from_treasure_box);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v13);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v14);
    sub_1C3B764(&Method_QuestRewardItemAction__Play_b__49_0__, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1C3B764(&SimpleAnimation_State_TypeInfo, v17);
    byte_4C1EEB3 = 1;
  }
  this->fields.mIsFromTreasureBox = v12;
  this->fields.mEndAct = end_act;
  sub_1C3B708(
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v22 = gameObject;
    v23 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v23;
        p_offset += 2;
        if ( !v23 )
          goto LABEL_13;
      }
      v25 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_13:
      v25 = sub_1C8D744(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v25)(v22, *(_QWORD *)(v25 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    QuestRewardItemAction__SetState(this, 1, v27);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v30 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v30 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v30->static_fields->DEFAULT_FADE_TIME;
  }
  v31 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_QuestRewardItemAction__Play_b__49_0__, 0LL);
  if ( !Instance )
LABEL_31:
    sub_1C3B9C0(gameObject, v19);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v31, 0LL);
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
            sub_1C3B9C8(this, itemLabelList);
          gameObject = (UnityEngine_Component_o *)itemLabelList->m_Items[v6];
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
          {
            sub_1C3B9C0(gameObject, itemLabelList);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *CrossOperatorString; // x0
  __int64 v19; // x1
  int32_t type; // w22
  Il2CppObject *v21; // x22
  Il2CppObject *CountableString; // x21
  System_String_o *Name; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x22
  System_String_o *v25; // x23
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  QuestRewardItemAction_c *v30; // x0
  int32_t num; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C1EEB1 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EquipMaster___, itemLabel);
    sub_1C3B764(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1C3B764(&DataManager_TypeInfo, v8);
    sub_1C3B764(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1C3B764(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v11);
    sub_1C3B764(&int_TypeInfo, v12);
    sub_1C3B764(&LocalizationManager_TypeInfo, v13);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v14);
    sub_1C3B764(&QuestRewardItemAction_TypeInfo, v15);
    sub_1C3B764(&StringLiteral_11075/*"Reset"*/, v16);
    sub_1C3B764(&StringLiteral_1/*""*/, v17);
    byte_4C1EEB1 = 1;
  }
  CrossOperatorString = ItemType__get_CrossOperatorString(0LL);
  if ( !questInfoReward )
    goto LABEL_29;
  type = questInfoReward->fields.type;
  if ( type == 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( CrossOperatorString )
    {
      CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                              questInfoReward->fields.objectId,
                              (const MethodInfo_329AE48 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( CrossOperatorString )
      {
        v21 = (Il2CppObject *)*((_QWORD *)CrossOperatorString + 3);
        CountableString = (Il2CppObject *)ItemType__GetCountableString(*((_DWORD *)CrossOperatorString + 12), 0LL);
        goto LABEL_22;
      }
    }
LABEL_29:
    sub_1C3B9C0(CrossOperatorString, v19);
  }
  CountableString = (Il2CppObject *)CrossOperatorString;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( type == 1 )
  {
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !CrossOperatorString )
      goto LABEL_29;
    CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                            questInfoReward->fields.objectId,
                            (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CrossOperatorString )
      goto LABEL_29;
    Name = ServantEntity__getName((ServantEntity_o *)CrossOperatorString, -1, -1, 0, 0LL);
  }
  else
  {
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EquipMaster___);
    if ( !CrossOperatorString )
      goto LABEL_29;
    CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                            questInfoReward->fields.objectId,
                            (const MethodInfo_329AE48 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    if ( !CrossOperatorString )
      goto LABEL_29;
    v24 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)CrossOperatorString + 4);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47918404(v24, 0LL);
  }
  v21 = (Il2CppObject *)Name;
LABEL_22:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11075/*"Reset"*/, 0LL);
  num = questInfoReward->fields.num;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v26, v27, v28);
  CrossOperatorString = System_String__Format_63383052(v25, v21, CountableString, v29, 0LL);
  if ( !itemLabel )
    goto LABEL_29;
  UILabel__set_text(itemLabel, (System_String_o *)CrossOperatorString, 0LL);
  v30 = QuestRewardItemAction_TypeInfo;
  if ( !QuestRewardItemAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo);
    v30 = QuestRewardItemAction_TypeInfo;
  }
  UILabel__SetCondensedScale(itemLabel, v30->static_fields->ITEM_LABEL_MAX_WIDTH, 0, 0LL);
  CrossOperatorString = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemLabel, 0LL);
  if ( !CrossOperatorString )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CrossOperatorString, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetState(QuestRewardItemAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C1EEB5 & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_QuestRewardItemAction__setState__, *(_QWORD *)&state);
    byte_4C1EEB5 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C3B9C0(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3225C7C *)Method_CStateManager_QuestRewardItemAction__setState__);
}


void __fastcall QuestRewardItemAction__SetTitleSprite(
        QuestRewardItemAction_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_UISprite__o *titleSprites; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C1EEB6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__, spriteName);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__, v7);
    byte_4C1EEB6 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !System_String__IsNullOrEmpty(spriteName, 0LL)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.titleSprites, 0LL) )
  {
    titleSprites = this->fields.titleSprites;
    if ( !titleSprites )
      sub_1C3B9C0(0LL, v8);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)titleSprites,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
      if ( !v10 )
        break;
      current = v13.fields._current;
      if ( !v13.fields._current )
        sub_1C3B9C0(v10, v11);
      UISprite__set_spriteName((UISprite_o *)v13.fields._current, spriteName, 0LL);
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[33].method)(
        current,
        current->klass->vtable[34].methodPtr);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
  }
}


void __fastcall QuestRewardItemAction__Setup(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *qri,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 transform; // x0
  __int64 v13; // x1
  Il2CppObject *ComponentInChildren_object__50228848; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *v22; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *v30; // x0
  UnityEngine_Object_o *v31; // x24
  Il2CppObject *v32; // x21
  UnityEngine_Object_o *v33; // x23
  struct System_String_o *name; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  QuestRewardItemAction_o *v41; // x0
  const MethodInfo *v42; // x3
  QuestRewardItemAction_o *v43; // x0
  const MethodInfo *v44; // x3
  QuestRewardItemAction_o *v45; // x0
  const MethodInfo *v46; // x3
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct UILabel_o *mItemLabel; // x22
  int64_t v54; // x21
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct UnityEngine_GameObject_array *v67; // x21
  struct UnityEngine_GameObject_o *mAppearEffObj; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  UnityEngine_Object_o *mServantFaceIcon; // x21
  QuestRewardItemAction_o *v76; // x0
  const MethodInfo *v77; // x3
  UnityEngine_Object_o *v78; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v80; // x1
  __int64 v81; // x0

  if ( (byte_4C1EEAE & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, qri);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v6);
    sub_1C3B764(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v7);
    sub_1C3B764(&UnityEngine_GameObject___TypeInfo, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&UILabel___TypeInfo, v10);
    sub_1C3B764(&StringLiteral_1/*""*/, v11);
    byte_4C1EEAE = 1;
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_48;
  ComponentInChildren_object__50228848 = UnityEngine_Component__GetComponentInChildren_object__50228848(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__50228848;
  p_mAnimation = &this->fields.mAnimation;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mAnimation,
    (int64_t)ComponentInChildren_object__50228848,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_48;
  v22 = UnityEngine_Component__GetComponentInChildren_object__50228848(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v22;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation, (int64_t)v22, v24, v25, v26, v27, v28, v29);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_48;
  v30 = UnityEngine_Component__GetComponentInChildren_object__50228848(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  v31 = (UnityEngine_Object_o *)*p_mSimpleAnimation;
  v32 = v30;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
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
    v33 = (UnityEngine_Object_o *)*p_mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality(v33, 0LL, 0LL);
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
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playAnimationName,
    (int64_t)name,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
LABEL_18:
  if ( !v32 )
    goto LABEL_48;
  BYTE5(v32[6].monitor) = 1;
  transform = (__int64)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_48;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  QuestRewardItemAction__SetActiveLabelList(v41, this->fields.mItemLabelList_2, 0, v42);
  QuestRewardItemAction__SetActiveLabelList(v43, this->fields.mItemLabelList_3, 0, v44);
  QuestRewardItemAction__SetActiveLabelList(v45, this->fields.mItemLabelList_4, 0, v46);
  transform = sub_1C3B80C(UILabel___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_48;
  mItemLabel = this->fields.mItemLabel;
  v54 = transform;
  if ( mItemLabel )
  {
    transform = sub_1C3B8A0(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)transform + 64LL));
    if ( !transform )
    {
      v81 = sub_1C3B9E4();
      sub_1C3B88C(v81, 0LL);
    }
  }
  if ( !*(_DWORD *)(v54 + 24) )
    goto LABEL_49;
  *(_QWORD *)(v54 + 32) = mItemLabel;
  sub_1C3B708((PartyOrganizationUtility_o *)(v54 + 32), (int64_t)mItemLabel, v47, v48, v49, v50, v51, v52);
  this->fields.itemLabelDispList = (struct UILabel_array *)v54;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.itemLabelDispList, v54, v55, v56, v57, v58, v59, v60);
  transform = sub_1C3B80C(UnityEngine_GameObject___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_48;
  v67 = (struct UnityEngine_GameObject_array *)transform;
  if ( !*(_DWORD *)(transform + 24) )
LABEL_49:
    sub_1C3B9C8(transform, v13);
  mAppearEffObj = this->fields.mAppearEffObj;
  *(_QWORD *)(transform + 32) = mAppearEffObj;
  sub_1C3B708((PartyOrganizationUtility_o *)(transform + 32), (int64_t)mAppearEffObj, v61, v62, v63, v64, v65, v66);
  this->fields.appearEffObjDispList = v67;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.appearEffObjDispList,
    (int64_t)v67,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  if ( !qri )
LABEL_48:
    sub_1C3B9C0(transform, v13);
  if ( qri->fields.type == 1 )
  {
    transform = (__int64)this->fields.mItemSp;
    if ( !transform )
      goto LABEL_48;
    UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mServantFaceIcon = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    ServantFaceIconComponent__Set_39640656(
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
      0LL,
      0LL);
  }
  else
  {
    v78 = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v78, 0LL, 0LL) )
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
                           (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    if ( !transform )
      goto LABEL_48;
    ItemIconComponent__SetGift_39566180(
      (ItemIconComponent_o *)transform,
      qri->fields.type,
      qri->fields.objectId,
      qri->fields.num,
      0,
      0LL);
  }
  QuestRewardItemAction__SetClearTextLabel(v76, this->fields.mItemLabel, qri, v77);
  QuestRewardItemAction__CommonSetUpEndAction(this, v80);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetupMultipleQuestRewardInfo(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *questInfoReward,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ServantFaceIconComponent_o *transform; // x0
  __int64 v12; // x1
  Il2CppObject *ComponentInChildren_object__50228848; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  QuestRewardItemAction_o *v27; // x0
  const MethodInfo *v28; // x3
  QuestRewardItemAction_o *v29; // x0
  const MethodInfo *v30; // x3
  QuestRewardItemAction_o *v31; // x0
  const MethodInfo *v32; // x3
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct UILabel_o *mItemLabel; // x22
  int64_t v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct UnityEngine_GameObject_array *v53; // x23
  struct UnityEngine_GameObject_o *mAppearEffObj; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int32_t num; // w8
  struct System_String_o *SAME_ANIMATION_NAME_2_TYPES; // x1
  struct UISprite_array *mItemSpList_3; // x23
  struct ServantFaceIconComponent_array *mServantFaceIconList_3; // x24
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct UnityEngine_GameObject_array **p_mAppearEffObjList_3; // x8
  struct System_String_o *SAME_ANIMATION_NAME_3_TYPES; // x1
  struct System_String_o *SAME_ANIMATION_NAME_4_TYPES; // x1
  struct UnityEngine_GameObject_array *v80; // x1
  __int64 v81; // x21
  ServantFaceIconComponent_o **m_Items; // x22
  UISprite_o **v83; // x25
  float v84; // s0
  float v85; // s2
  float v86; // s8
  float v87; // s9
  const MethodInfo *v88; // x3
  __int64 v89; // x8
  __int64 v90; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v92; // w8
  const MethodInfo *v93; // x1
  __int64 v94; // x0
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1EEB0 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, questInfoReward);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v6);
    sub_1C3B764(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v7);
    sub_1C3B764(&UnityEngine_GameObject___TypeInfo, v8);
    sub_1C3B764(&UILabel___TypeInfo, v9);
    sub_1C3B764(&StringLiteral_1/*""*/, v10);
    byte_4C1EEB0 = 1;
  }
  if ( !this->fields.mItemSpList_2 || !this->fields.mItemLabelList_3 || !this->fields.mItemLabelList_4 )
    return;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_60;
  ComponentInChildren_object__50228848 = UnityEngine_Component__GetComponentInChildren_object__50228848(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__50228848;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mAnimation,
    (int64_t)ComponentInChildren_object__50228848,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_60;
  v20 = UnityEngine_Component__GetComponentInChildren_object__50228848(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v20;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_60;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__GetComponentInChildren_object__50228848(
                                              (UnityEngine_Component_o *)transform,
                                              (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
  QuestRewardItemAction__SetActiveLabelList(v27, this->fields.mItemLabelList_2, 0, v28);
  QuestRewardItemAction__SetActiveLabelList(v29, this->fields.mItemLabelList_3, 0, v30);
  QuestRewardItemAction__SetActiveLabelList(v31, this->fields.mItemLabelList_4, 0, v32);
  transform = (ServantFaceIconComponent_o *)sub_1C3B80C(UILabel___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_60;
  mItemLabel = this->fields.mItemLabel;
  v40 = (int64_t)transform;
  if ( mItemLabel )
  {
    transform = (ServantFaceIconComponent_o *)sub_1C3B8A0(this->fields.mItemLabel, transform->klass->_1.element_class);
    if ( !transform )
    {
      v94 = sub_1C3B9E4();
      sub_1C3B88C(v94, 0LL);
    }
  }
  if ( !*(_DWORD *)(v40 + 24) )
    goto LABEL_61;
  *(_QWORD *)(v40 + 32) = mItemLabel;
  sub_1C3B708((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)mItemLabel, v33, v34, v35, v36, v37, v38);
  this->fields.itemLabelDispList = (struct UILabel_array *)v40;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.itemLabelDispList, v40, v41, v42, v43, v44, v45, v46);
  transform = (ServantFaceIconComponent_o *)sub_1C3B80C(UnityEngine_GameObject___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_60;
  v53 = (struct UnityEngine_GameObject_array *)transform;
  if ( !LODWORD(transform->fields.m_CancellationTokenSource) )
LABEL_61:
    sub_1C3B9C8(transform, v12);
  mAppearEffObj = this->fields.mAppearEffObj;
  transform->fields.backSprite = (struct UISprite_o *)mAppearEffObj;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&transform->fields.backSprite,
    (int64_t)mAppearEffObj,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.appearEffObjDispList = v53;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.appearEffObjDispList,
    (int64_t)v53,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  if ( !questInfoReward )
    goto LABEL_60;
  num = questInfoReward->fields.num;
  if ( num == 3 )
  {
    SAME_ANIMATION_NAME_3_TYPES = this->fields.SAME_ANIMATION_NAME_3_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_3_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_3;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_3;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.playAnimationName,
      (int64_t)SAME_ANIMATION_NAME_3_TYPES,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_3;
  }
  else if ( num == 2 )
  {
    SAME_ANIMATION_NAME_2_TYPES = this->fields.SAME_ANIMATION_NAME_2_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_2_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_2;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_2;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.playAnimationName,
      (int64_t)SAME_ANIMATION_NAME_2_TYPES,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_2;
  }
  else
  {
    SAME_ANIMATION_NAME_4_TYPES = this->fields.SAME_ANIMATION_NAME_4_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_4_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_4;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_4;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.playAnimationName,
      (int64_t)SAME_ANIMATION_NAME_4_TYPES,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_4;
  }
  v80 = *p_mAppearEffObjList_3;
  this->fields.appearEffObjDispList = *p_mAppearEffObjList_3;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.appearEffObjDispList,
    (int64_t)v80,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  if ( !mItemSpList_3 )
LABEL_60:
    sub_1C3B9C0(transform, v12);
  v81 = 0LL;
  m_Items = mServantFaceIconList_3->m_Items;
  v83 = mItemSpList_3->m_Items;
  do
  {
    if ( (unsigned int)v81 >= mItemSpList_3->max_length )
      goto LABEL_61;
    transform = (ServantFaceIconComponent_o *)v83[v81];
    if ( !transform )
      goto LABEL_60;
    transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0LL);
    if ( !transform )
      goto LABEL_60;
    *(UnityEngine_Vector3_o *)&v84 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( (unsigned int)v81 >= mItemSpList_3->max_length )
      goto LABEL_61;
    transform = (ServantFaceIconComponent_o *)v83[v81];
    if ( !transform )
      goto LABEL_60;
    v86 = v84;
    v87 = v85;
    transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0LL);
    if ( !transform )
      goto LABEL_60;
    v95.fields.y = 0.0;
    v95.fields.x = v86;
    v95.fields.z = v87;
    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v95, 0LL);
    if ( questInfoReward->fields.type == 1 )
    {
      if ( (unsigned int)v81 >= mItemSpList_3->max_length )
        goto LABEL_61;
      transform = (ServantFaceIconComponent_o *)v83[v81];
      if ( !transform )
        goto LABEL_60;
      UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !mServantFaceIconList_3 )
        goto LABEL_60;
      v89 = *(_QWORD *)&mServantFaceIconList_3->max_length;
      if ( v89 )
      {
        if ( (unsigned int)v81 >= (unsigned int)v89 )
          goto LABEL_61;
        transform = m_Items[v81];
        if ( !transform )
          goto LABEL_60;
        transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0LL);
        if ( !transform )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
        if ( (unsigned int)v81 >= mServantFaceIconList_3->max_length )
          goto LABEL_61;
        transform = m_Items[v81];
        if ( !transform )
          goto LABEL_60;
        ServantFaceIconComponent__Set_39640656(
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
          0LL,
          0LL);
      }
    }
    else
    {
      if ( !mServantFaceIconList_3 )
        goto LABEL_60;
      v90 = *(_QWORD *)&mServantFaceIconList_3->max_length;
      if ( v90 )
      {
        if ( (unsigned int)v81 >= (unsigned int)v90 )
          goto LABEL_61;
        transform = m_Items[v81];
        if ( !transform )
          goto LABEL_60;
        transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0LL);
        if ( !transform )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
      }
      if ( (unsigned int)v81 >= mItemSpList_3->max_length )
        goto LABEL_61;
      transform = (ServantFaceIconComponent_o *)v83[v81];
      if ( !transform )
        goto LABEL_60;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      transform = (ServantFaceIconComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                  gameObject,
                                                  (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
      if ( !transform )
        goto LABEL_60;
      ItemIconComponent__SetGift_39566180(
        (ItemIconComponent_o *)transform,
        questInfoReward->fields.type,
        questInfoReward->fields.objectId,
        1,
        0,
        0LL);
    }
    v92 = questInfoReward->fields.num;
    ++v81;
    if ( v92 >= 4 )
      v92 = 4;
    if ( v92 <= 2 )
      v92 = 2;
  }
  while ( (unsigned int)v81 < v92 );
  QuestRewardItemAction__SetClearTextLabel(
    (QuestRewardItemAction_o *)transform,
    this->fields.mItemLabel,
    questInfoReward,
    v88);
  QuestRewardItemAction__CommonSetUpEndAction(this, v93);
}


void __fastcall QuestRewardItemAction__Setup_35409328(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_array *questInfoRewardList,
        bool isMultiDisp,
        const MethodInfo *method)
{
  QuestRewardInfo_array *v4; // x20
  QuestRewardItemAction_o *v5; // x19
  bool v6; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *ComponentInChildren_object__50228848; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t mItemLabelList_2; // x1
  struct UISprite_array *mItemSpList_2; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_2; // x23
  int64_t DIFF_ANIMATION_NAME_2_TYPES; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t mAppearEffObjList_2; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  QuestRewardItemAction_o *v52; // x0
  const MethodInfo *v53; // x3
  QuestRewardItemAction_o *v54; // x0
  const MethodInfo *v55; // x3
  UILabel_array *mItemLabelList_3; // x1
  bool v57; // w2
  TerminalPramsManager_c *v58; // x0
  int32_t PhaseCnt_k__BackingField; // w23
  Il2CppObject *Master_object; // x21
  QuestRewardInfo_o *v61; // x8
  int64_t v62; // x1
  int64_t DIFF_ANIMATION_NAME_3_TYPES; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t mAppearEffObjList_3; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  QuestRewardItemAction_o *v77; // x0
  const MethodInfo *v78; // x3
  QuestRewardItemAction_o *v79; // x0
  const MethodInfo *v80; // x3
  bool v81; // w2
  UILabel_array **p_mItemLabelList_4; // x24
  int64_t mItemLabelList_4; // x1
  int64_t DIFF_ANIMATION_NAME_4_TYPES; // x1
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t mAppearEffObjList_4; // x1
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  QuestRewardItemAction_o *v98; // x0
  const MethodInfo *v99; // x3
  QuestRewardItemAction_o *v100; // x0
  const MethodInfo *v101; // x3
  int max_length; // w8
  __int64 v103; // x24
  il2cpp_array_size_t v104; // w27
  QuestRewardInfo_o *v105; // x21
  const MethodInfo *v106; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabelDispList; // x8
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  v4 = questInfoRewardList;
  v5 = this;
  v6 = isMultiDisp;
  if ( (byte_4C1EEAF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_IndexOf_int___, questInfoRewardList);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v7);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v8);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseMaster___, v10);
    sub_1C3B764(&DataManager_TypeInfo, v11);
    sub_1C3B764(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v12);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
    this = (QuestRewardItemAction_o *)sub_1C3B764(&StringLiteral_1/*""*/, v14);
    byte_4C1EEAF = 1;
  }
  entity = 0LL;
  v5->fields.isMultiDisp = v6;
  if ( !v4 )
    goto LABEL_73;
  if ( (int)v4->max_length <= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1CBC3 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, questInfoRewardList);
      byte_4C1CBC3 = 1;
    }
    v58 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v58 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v58->static_fields->_PhaseCnt_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_4C1CBC4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, questInfoRewardList);
      byte_4C1CBC4 = 1;
    }
    this = (QuestRewardItemAction_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
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
      v61 = v4->m_Items[0];
      if ( !v61 )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)System_Array__IndexOf_int_(
                                          (System_Int32_array *)this,
                                          v61->fields.objectId,
                                          (const MethodInfo_30EE4E0 *)Method_System_Array_IndexOf_int___);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        if ( !v4->max_length )
          goto LABEL_74;
        questInfoRewardList = (QuestRewardInfo_array *)v4->m_Items[0];
        if ( questInfoRewardList )
        {
          if ( (int)questInfoRewardList->max_length >= 2 )
          {
            QuestRewardItemAction__SetupMultipleQuestRewardInfo(v5, (QuestRewardInfo_o *)questInfoRewardList, v29);
            return;
          }
          goto LABEL_34;
        }
LABEL_73:
        sub_1C3B9C0(this, questInfoRewardList);
      }
    }
LABEL_34:
    if ( !v4->max_length )
      goto LABEL_74;
LABEL_35:
    QuestRewardItemAction__Setup(v5, v4->m_Items[0], v29);
    return;
  }
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
  if ( !this )
    goto LABEL_73;
  ComponentInChildren_object__50228848 = UnityEngine_Component__GetComponentInChildren_object__50228848(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v5->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__50228848;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v5->fields.mAnimation,
    (int64_t)ComponentInChildren_object__50228848,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
  if ( !this )
    goto LABEL_73;
  v22 = UnityEngine_Component__GetComponentInChildren_object__50228848(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v5->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v22;
  sub_1C3B708((PartyOrganizationUtility_o *)&v5->fields.mSimpleAnimation, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
  if ( !this )
    goto LABEL_73;
  this = (QuestRewardItemAction_o *)UnityEngine_Component__GetComponentInChildren_object__50228848(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v5->fields.itemLabelDispList,
        mItemLabelList_2,
        (int64_t)v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      DIFF_ANIMATION_NAME_2_TYPES = (int64_t)v5->fields.DIFF_ANIMATION_NAME_2_TYPES;
      v5->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_2_TYPES;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v5->fields.playAnimationName,
        DIFF_ANIMATION_NAME_2_TYPES,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      mAppearEffObjList_2 = (int64_t)v5->fields.mAppearEffObjList_2;
      v5->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_2;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v5->fields.appearEffObjDispList,
        mAppearEffObjList_2,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v52, v5->fields.mItemLabelList_2, 1, v53);
      mItemLabelList_3 = v5->fields.mItemLabelList_3;
      v57 = 0;
      goto LABEL_39;
    case 3u:
      v62 = (int64_t)v5->fields.mItemLabelList_3;
      mItemSpList_2 = v5->fields.mItemSpList_3;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_3;
      v5->fields.itemLabelDispList = (struct UILabel_array *)v62;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v5->fields.itemLabelDispList,
        v62,
        (int64_t)v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      DIFF_ANIMATION_NAME_3_TYPES = (int64_t)v5->fields.DIFF_ANIMATION_NAME_3_TYPES;
      v5->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_3_TYPES;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v5->fields.playAnimationName,
        DIFF_ANIMATION_NAME_3_TYPES,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
      mAppearEffObjList_3 = (int64_t)v5->fields.mAppearEffObjList_3;
      v5->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_3;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v5->fields.appearEffObjDispList,
        mAppearEffObjList_3,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v77, v5->fields.mItemLabelList_2, 0, v78);
      mItemLabelList_3 = v5->fields.mItemLabelList_3;
      v57 = 1;
LABEL_39:
      QuestRewardItemAction__SetActiveLabelList(v54, mItemLabelList_3, v57, v55);
      v81 = 0;
      p_mItemLabelList_4 = &v5->fields.mItemLabelList_4;
      break;
    case 4u:
      mItemSpList_2 = v5->fields.mItemSpList_4;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_4;
      p_mItemLabelList_4 = &v5->fields.mItemLabelList_4;
      mItemLabelList_4 = (int64_t)v5->fields.mItemLabelList_4;
      v5->fields.itemLabelDispList = (struct UILabel_array *)mItemLabelList_4;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v5->fields.itemLabelDispList,
        mItemLabelList_4,
        (int64_t)v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      DIFF_ANIMATION_NAME_4_TYPES = (int64_t)v5->fields.DIFF_ANIMATION_NAME_4_TYPES;
      v5->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_4_TYPES;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v5->fields.playAnimationName,
        DIFF_ANIMATION_NAME_4_TYPES,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90);
      mAppearEffObjList_4 = (int64_t)v5->fields.mAppearEffObjList_4;
      v5->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_4;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v5->fields.appearEffObjDispList,
        mAppearEffObjList_4,
        v92,
        v93,
        v94,
        v95,
        v96,
        v97);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v98, v5->fields.mItemLabelList_2, 0, v99);
      QuestRewardItemAction__SetActiveLabelList(v100, v5->fields.mItemLabelList_3, 0, v101);
      v81 = 1;
      break;
    default:
      goto LABEL_35;
  }
  QuestRewardItemAction__SetActiveLabelList(v79, *p_mItemLabelList_4, v81, v80);
  max_length = v4->max_length;
  if ( max_length >= 1 )
  {
    v103 = 4LL;
    while ( 1 )
    {
      v104 = v103 - 4;
      if ( (int)v103 - 4 >= (unsigned int)max_length )
        break;
      v105 = (QuestRewardInfo_o *)*((_QWORD *)&v4->obj.klass + v103);
      if ( !v105 )
        goto LABEL_73;
      if ( v105->fields.type == 1 )
      {
        if ( !mItemSpList_2 )
          goto LABEL_73;
        if ( v104 >= mItemSpList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v103);
        if ( !this )
          goto LABEL_73;
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !mServantFaceIconList_2 )
          goto LABEL_73;
        if ( v104 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v103);
        if ( !this )
          goto LABEL_73;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( v104 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v103);
        if ( !this )
          goto LABEL_73;
        ServantFaceIconComponent__Set_39640656(
          (ServantFaceIconComponent_o *)this,
          v105->fields.objectId,
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
          0LL,
          0LL);
      }
      else
      {
        if ( !mServantFaceIconList_2 )
          goto LABEL_73;
        if ( v104 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v103);
        if ( !this )
          goto LABEL_73;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( !mItemSpList_2 )
          goto LABEL_73;
        if ( v104 >= mItemSpList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v103);
        if ( !this )
          goto LABEL_73;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (QuestRewardItemAction_o *)GameObjectExtensions__SafeGetComponent_object_(
                                            gameObject,
                                            (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_73;
        ItemIconComponent__SetGift_39566180(
          (ItemIconComponent_o *)this,
          v105->fields.type,
          v105->fields.objectId,
          v105->fields.num,
          0,
          0LL);
      }
      itemLabelDispList = v5->fields.itemLabelDispList;
      if ( !itemLabelDispList )
        goto LABEL_73;
      if ( v104 >= itemLabelDispList->max_length )
        break;
      QuestRewardItemAction__SetClearTextLabel(this, *((UILabel_o **)&itemLabelDispList->obj.klass + v103), v105, v106);
      max_length = v4->max_length;
      if ( (int)++v103 - 4 >= max_length )
        goto LABEL_70;
    }
LABEL_74:
    sub_1C3B9C8(this, questInfoRewardList);
  }
LABEL_70:
  QuestRewardItemAction__CommonSetUpEndAction(v5, (const MethodInfo *)questInfoRewardList);
}


void __fastcall QuestRewardItemAction__Update(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C1EEAD & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_QuestRewardItemAction__update__, method);
    sub_1C3B764(&CTouch_TypeInfo, v3);
    byte_4C1EEAD = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3225C58 *)Method_CStateManager_QuestRewardItemAction__update__);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  UnityEngine_Component_o *transform; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x19
  __int64 v20; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  Il2CppObject *Component_object; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  ManagerConfig_c *v37; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // w25
  MoveObject_o *v41; // x21
  float x; // s10
  float v43; // s11
  float v44; // s12
  System_Action_o *v45; // x22
  System_Action_o *v46; // x23
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C1EEBB & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    sub_1C3B764(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v4);
    sub_1C3B764(&ManagerConfig_TypeInfo, v5);
    sub_1C3B764(&Method_QuestRewardItemAction_StateItemLabel_begin__, v6);
    sub_1C3B764(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v7);
    sub_1C3B764(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v8);
    sub_1C3B764(&QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v9);
    byte_4C1EEBB = 1;
  }
  v10 = sub_1C3B9B0(QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_19;
  *(_QWORD *)(v10 + 32) = that;
  v19 = v10 + 32;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)that, v13, v14, v15, v16, v17, v18);
  v20 = *(_QWORD *)(v10 + 32);
  if ( !v20 )
    goto LABEL_19;
  transform = *(UnityEngine_Component_o **)(v20 + 80);
  if ( !transform )
    goto LABEL_19;
  if ( *(_BYTE *)(v20 + 312) )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_19;
    transform = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_19;
  }
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  *(_QWORD *)(v10 + 16) = gameObject;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)gameObject, v22, v23, v24, v25, v26, v27);
  v29 = *(_QWORD *)(v10 + 32);
  if ( !v29 )
    goto LABEL_19;
  QuestRewardItemAction__SetActiveLabelList(
    (QuestRewardItemAction_o *)transform,
    *(UILabel_array **)(v29 + 248),
    1,
    v28);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v10 + 16),
                       (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v10 + 24) = Component_object;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)Component_object, v31, v32, v33, v34, v35, v36);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v10 + 16), 0LL);
  v37 = ManagerConfig_TypeInfo;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v37 = ManagerConfig_TypeInfo;
  }
  WIDTH = v37->static_fields->WIDTH;
  v50 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v10 + 16), 0LL);
  v41 = *(MoveObject_o **)(v10 + 24);
  x = v50.fields.x;
  v43 = v50.fields.y;
  v44 = v50.fields.z;
  v45 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v10,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v46 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v10,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v41
    || (v51.fields.x = (float)WIDTH,
        v51.fields.y = y,
        v51.fields.z = z,
        v52.fields.x = x,
        v52.fields.y = v43,
        v52.fields.z = v44,
        MoveObject__Play(v41, v51, v52, 0.25, v45, v46, 0.0, 17, 0LL),
        !*(_QWORD *)v19) )
  {
LABEL_19:
    sub_1C3B9C0(transform, v12);
  }
  if ( *(_BYTE *)(*(_QWORD *)v19 + 217LL) )
  {
    v47 = Method_QuestRewardItemAction_StateItemLabel_begin__;
    if ( (*((_BYTE *)Method_QuestRewardItemAction_StateItemLabel_begin__ + 83) & 2) != 0 )
      v47 = (_QWORD *)sub_1C3B77C(Method_QuestRewardItemAction_StateItemLabel_begin__);
    v48 = (System_Reflection_MethodBase_o *)sub_1C3B748(v47, v47[4]);
    OverwriteAssetSoundName__PlaySystemSe(v48, 4, 0, 0LL);
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
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(0LL, method);
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
  UnityEngine_Object_o *mSimpleAnimation; // x21
  SimpleAnimation_State_o *Item; // x0
  PartyOrganizationUtility_o *p_fields; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  PartyOrganizationUtility_c *klass; // x21
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_TrackedReference_o *v18; // x20
  float mTreasureAnimStartTime; // s0
  _QWORD *image; // x8
  __int64 v21; // x9
  SimpleAnimation_State_c **v22; // x10
  __int64 v23; // x0
  PartyOrganizationUtility_c *v24; // x20
  _QWORD *v25; // x8
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x0
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x20
  int max_length; // w8
  unsigned int v31; // w21
  _BOOL4 v32; // w8

  v5 = this;
  if ( (byte_4C1EEB9 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardItemAction_StatePlay_o *)sub_1C3B764(&SimpleAnimation_State_TypeInfo, v6);
    byte_4C1EEB9 = 1;
  }
  if ( !that )
    goto LABEL_48;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
      goto LABEL_48;
    Item = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.playAnimationName, 0LL);
    v5->fields.mSimpleAnimState = Item;
    p_fields = (PartyOrganizationUtility_o *)&v5->fields;
    sub_1C3B708(p_fields, (int64_t)Item, v10, v11, v12, v13, v14, v15);
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
    v21 = *((unsigned __int16 *)klass->_1.image + 151);
    if ( *((_WORD *)klass->_1.image + 151) )
    {
      v22 = (SimpleAnimation_State_c **)(image[22] + 8LL);
      while ( *(v22 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v21;
        v22 += 2;
        if ( !v21 )
          goto LABEL_24;
      }
      v23 = (__int64)&image[2 * *(_DWORD *)v22 + 51];
    }
    else
    {
LABEL_24:
      v23 = sub_1C8D744(p_fields->klass, SimpleAnimation_State_TypeInfo, 6LL);
    }
    this = (QuestRewardItemAction_StatePlay_o *)(*(__int64 (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, long double))v23)(
                                                  klass,
                                                  *(_QWORD *)(v23 + 8),
                                                  v3);
    v24 = p_fields->klass;
    if ( !v24 )
      goto LABEL_48;
    v25 = v24->_1.image;
    v26 = *((unsigned __int16 *)v24->_1.image + 151);
    if ( *((_WORD *)v24->_1.image + 151) )
    {
      v27 = (SimpleAnimation_State_c **)(v25[22] + 8LL);
      while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v26;
        v27 += 2;
        if ( !v26 )
          goto LABEL_31;
      }
      v28 = (__int64)&v25[2 * *(_DWORD *)v27 + 55];
    }
    else
    {
LABEL_31:
      v28 = sub_1C8D744(v24, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v28)(v24, *(_QWORD *)(v28 + 8), 1.0);
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
LABEL_48:
      sub_1C3B9C0(this, that);
    this = (QuestRewardItemAction_StatePlay_o *)SimpleAnimation__Play_65506988(
                                                  (SimpleAnimation_o *)this,
                                                  that->fields.playAnimationName,
                                                  0LL);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
      if ( !this )
        goto LABEL_48;
      v18 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                (UnityEngine_Animation_o *)this,
                                                that->fields.playAnimationName,
                                                0LL);
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_TrackedReference__op_Inequality(v18, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( that->fields.mIsFromTreasureBox )
        {
          mTreasureAnimStartTime = that->fields.mTreasureAnimStartTime;
          if ( !v18 )
            goto LABEL_48;
        }
        else
        {
          mTreasureAnimStartTime = 0.0;
          if ( !v18 )
            goto LABEL_48;
        }
        UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)v18, mTreasureAnimStartTime, 0LL);
        UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)v18, 1.0, 0LL);
        this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
        if ( !this )
          goto LABEL_48;
        this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Animation__Play_70867156(
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
    v31 = 0;
    while ( 1 )
    {
      if ( v31 >= max_length )
        sub_1C3B9C8(this, that);
      v32 = !that->fields.mIsFromTreasureBox || !that->fields.mTreasureEffectOff;
      this = (QuestRewardItemAction_StatePlay_o *)appearEffObjDispList->m_Items[v31];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v32, 0LL);
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v31 >= max_length )
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
  __int64 v5; // x1
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x21
  int max_length; // w8
  char v8; // w22
  char v9; // w23
  unsigned int v10; // w24
  Il2CppClass **v11; // x8
  UnityEngine_GameObject_o *v12; // x20
  _BOOL4 v13; // w8
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  const MethodInfo *v16; // x2
  int32_t v17; // w1
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0

  if ( (byte_4C1EEBA & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, that);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (QuestRewardItemAction_StatePlay_o *)sub_1C3B764(&Method_QuestRewardItemAction_StatePlay_update__, v5);
    byte_4C1EEBA = 1;
  }
  if ( !that )
    goto LABEL_42;
  appearEffObjDispList = that->fields.appearEffObjDispList;
  if ( !appearEffObjDispList )
    goto LABEL_42;
  max_length = appearEffObjDispList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C3B9C8(this, that);
      v11 = &appearEffObjDispList->obj.klass + (int)v10;
      v12 = (UnityEngine_GameObject_o *)v11[4];
      if ( !v12 )
        goto LABEL_42;
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_GameObject__get_activeSelf(
                                                    (UnityEngine_GameObject_o *)v11[4],
                                                    0LL);
      if ( that->fields.mIsFromTreasureBox )
        v8 = (char)this;
      if ( !that->fields.mIsFromTreasureBox )
        v9 = (char)this;
      if ( that->fields.mIsFromTreasureBox )
        break;
      if ( (v9 & 1) == 0 )
      {
        v13 = 1;
LABEL_18:
        UnityEngine_GameObject__SetActive(v12, v13, 0LL);
      }
LABEL_19:
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_20;
    }
    v13 = !that->fields.mTreasureEffectOff;
    if ( v13 == (v8 & 1) )
      goto LABEL_19;
    goto LABEL_18;
  }
LABEL_20:
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
      goto LABEL_42;
    if ( SimpleAnimation__IsPlaying((SimpleAnimation_o *)this, that->fields.playAnimationName, 0LL) )
      return;
LABEL_31:
    this = (QuestRewardItemAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
      {
        if ( that->fields.mLabelAnimate )
        {
          v17 = 2;
        }
        else
        {
          if ( that->fields.mGetSEonProgram )
          {
            v18 = Method_QuestRewardItemAction_StatePlay_update__;
            if ( (*((_BYTE *)Method_QuestRewardItemAction_StatePlay_update__ + 83) & 2) != 0 )
              v18 = (_QWORD *)sub_1C3B77C(Method_QuestRewardItemAction_StatePlay_update__);
            v19 = (System_Reflection_MethodBase_o *)sub_1C3B748(v18, v18[4]);
            OverwriteAssetSoundName__PlaySystemSe(v19, 4, 0, 0LL);
          }
          v17 = 3;
        }
        QuestRewardItemAction__SetState(that, v17, v16);
      }
      return;
    }
LABEL_42:
    sub_1C3B9C0(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4C1EEBD & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__, v3);
    byte_4C1EEBD = 1;
  }
  if ( EventTutorialMaster__IsTutorialAvailable(0, 75, 0, 0, 0, 0, 0LL) )
  {
    this->fields.waitTutorial = 1;
    v4 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__,
      0LL);
    EventTutorialMaster__CheckTutorial(0, 75, v4, 0, 0, 0, 0, 0LL);
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
    sub_1C3B9C0(this, that);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x19
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x2

  if ( (byte_4C1EEBC & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    sub_1C3B764(&AndroidBackKeyManager_TypeInfo, v5);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v6);
    sub_1C3B764(&CTouch_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C3B764(&Method_QuestRewardItemAction_StateTouchWait_update__, v9);
    sub_1C3B764(&Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__, v10);
    sub_1C3B764(&QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo, v11);
    byte_4C1EEBC = 1;
  }
  v12 = sub_1C3B9B0(QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_19;
  *(_QWORD *)(v12 + 16) = that;
  v21 = v12 + 16;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)that, v15, v16, v17, v18, v19, v20);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 && !this->fields.waitTutorial )
  {
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( *(_QWORD *)v21 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v21 + 232LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v22 = Method_QuestRewardItemAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardItemAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v22 = (_QWORD *)sub_1C3B77C(Method_QuestRewardItemAction_StateTouchWait_update__);
          v23 = (System_Reflection_MethodBase_o *)sub_1C3B748(v22, v22[4]);
          OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v25 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v25 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
          v27 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(
            v27,
            (Il2CppObject *)v12,
            Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v27, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v21;
            if ( *(_QWORD *)v21 )
            {
              QuestRewardItemAction__SetState((QuestRewardItemAction_o *)isTouchPush, 0, v28);
              return;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C3B9C0(isTouchPush, v14);
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
    sub_1C3B9C0(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}