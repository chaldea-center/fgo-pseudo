void __fastcall QuestRewardBoxAction___ctor(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardBoxAction__Awake(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CStateManager_T__o *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v18; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v20; // x1
  CStateManager_T__o *v21; // x20
  Il2CppObject *v22; // x21
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v26; // x21
  Il2CppObject *v27; // x21
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B63AE5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CStateManager_QuestRewardBoxAction___ctor__, method);
    sub_1BE4ACC(&Method_CStateManager_QuestRewardBoxAction__add__, v3);
    sub_1BE4ACC(&CStateManager_QuestRewardBoxAction__TypeInfo, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v5);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    sub_1BE4ACC(&QuestRewardBoxAction_StateNone_TypeInfo, v8);
    sub_1BE4ACC(&QuestRewardBoxAction_StatePlay_TypeInfo, v9);
    byte_4B63AE5 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v10 = (CStateManager_T__o *)sub_1BE4D18(CStateManager_QuestRewardBoxAction__TypeInfo);
    CStateManager_object____ctor(
      v10,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_318A548 *)Method_CStateManager_QuestRewardBoxAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardBoxAction__o *)v10;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v18 = (Il2CppObject *)sub_1BE4D18(QuestRewardBoxAction_StateNone_TypeInfo);
    System_Object___ctor(v18, 0LL);
    if ( !mFSM )
      goto LABEL_22;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v18,
      (const MethodInfo_318A5F0 *)Method_CStateManager_QuestRewardBoxAction__add__);
    v21 = (CStateManager_T__o *)this->fields.mFSM;
    v22 = (Il2CppObject *)sub_1BE4D18(QuestRewardBoxAction_StatePlay_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !v21 )
      goto LABEL_22;
    CStateManager_object___add(
      v21,
      1,
      (IState_T__o *)v22,
      (const MethodInfo_318A5F0 *)Method_CStateManager_QuestRewardBoxAction__add__);
    QuestRewardBoxAction__SetState(this, 0, v23);
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
      v26 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v27 = UnityEngine_Object__Instantiate_object_(
              v26,
              (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v27, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4B612E1 )
        {
          sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v28);
          byte_4B612E1 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v27,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v27 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v27,
                                         (const MethodInfo_2FA9A00 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v27;
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&this->fields.particleObj,
              (int64_t)v27,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            return;
          }
        }
LABEL_22:
        sub_1BE4D28(ComponentInChildren_object, v20);
      }
    }
  }
}


int32_t __fastcall QuestRewardBoxAction__GetState(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  QuestRewardBoxAction_o *v2; // x19
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4B63AE9 & 1) == 0 )
  {
    this = (QuestRewardBoxAction_o *)sub_1BE4ACC(&Method_CStateManager_QuestRewardBoxAction__getState__, method);
    byte_4B63AE9 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1BE4D28(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardBoxAction__Play(
        QuestRewardBoxAction_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v18; // x20
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v21; // x20
  __int64 v22; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v24; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v26; // x20
  System_String_o *v27; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v29; // x8
  CommonUI_o *v30; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_4B63AE8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, end_act);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v10);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v11);
    sub_1BE4ACC(&Method_QuestRewardBoxAction__Play_b__19_0__, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BE4ACC(&SimpleAnimation_State_TypeInfo, v14);
    byte_4B63AE8 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.mEndAct,
    (int64_t)end_act,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v18 = this->fields.mSimpleAnimation;
    if ( !v18 )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)v18[1].monitor;
    if ( !gameObject )
      goto LABEL_28;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v18, name, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    klass = gameObject->klass;
    v21 = gameObject;
    v22 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v22;
        p_offset += 2;
        if ( !v22 )
          goto LABEL_14;
      }
      v24 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v24 = sub_1C36AAC(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v24)(v21, *(_QWORD *)(v24 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v26 = this->fields.mAnimation;
      if ( !v26 )
        goto LABEL_28;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_28;
      v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v26, v27, 0LL);
      if ( !gameObject )
        goto LABEL_28;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = AvalonSceneManager_TypeInfo;
  v30 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v29 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_QuestRewardBoxAction__Play_b__19_0__, 0LL);
  if ( !v30 )
LABEL_28:
    sub_1BE4D28(gameObject, v16);
  CommonUI__maskFadein(v30, DEFAULT_FADE_TIME, v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardBoxAction__SetState(QuestRewardBoxAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B63AEA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CStateManager_QuestRewardBoxAction__setState__, *(_QWORD *)&state);
    byte_4B63AEA = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BE4D28(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_318A67C *)Method_CStateManager_QuestRewardBoxAction__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardBoxAction__Setup(
        QuestRewardBoxAction_o *this,
        int32_t box_type,
        bool overwrite,
        const MethodInfo *method)
{
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
  UnityEngine_Component_o *transform; // x0
  __int64 v19; // x1
  Il2CppObject *ComponentInChildren_object__49610264; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 *v34; // x8

  if ( (byte_4B63AE7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&box_type);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v8);
    sub_1BE4ACC(&StringLiteral_17626/*"box_s_open"*/, v9);
    sub_1BE4ACC(&StringLiteral_17617/*"box_g_lock"*/, v10);
    sub_1BE4ACC(&StringLiteral_17622/*"box_n_lock"*/, v11);
    sub_1BE4ACC(&StringLiteral_17625/*"box_s_lock"*/, v12);
    sub_1BE4ACC(&StringLiteral_17621/*"box_n_base"*/, v13);
    sub_1BE4ACC(&StringLiteral_17618/*"box_g_open"*/, v14);
    sub_1BE4ACC(&StringLiteral_17624/*"box_s_base"*/, v15);
    sub_1BE4ACC(&StringLiteral_17616/*"box_g_base"*/, v16);
    sub_1BE4ACC(&StringLiteral_17623/*"box_n_open"*/, v17);
    byte_4B63AE7 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  ComponentInChildren_object__49610264 = UnityEngine_Component__GetComponentInChildren_object__49610264(
                                           transform,
                                           (const MethodInfo_2F4FE18 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49610264;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.mAnimation,
    (int64_t)ComponentInChildren_object__49610264,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  v27 = UnityEngine_Component__GetComponentInChildren_object__49610264(
          transform,
          (const MethodInfo_2F4FE18 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v27;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__49610264(
                                           transform,
                                           (const MethodInfo_2F4FE18 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_35;
  BYTE5(transform[4].monitor) = 1;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  if ( overwrite )
    return;
  switch ( box_type )
  {
    case 2:
      transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
      if ( transform )
      {
        UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
        if ( transform )
        {
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17616/*"box_g_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17617/*"box_g_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v34 = &StringLiteral_17618/*"box_g_open"*/;
                  goto LABEL_34;
                }
              }
            }
          }
        }
      }
LABEL_35:
      sub_1BE4D28(transform, v19);
    case 1:
      transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
      if ( transform )
      {
        UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
        if ( transform )
        {
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17624/*"box_s_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17625/*"box_s_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v34 = &StringLiteral_17626/*"box_s_open"*/;
                  goto LABEL_34;
                }
              }
            }
          }
        }
      }
      goto LABEL_35;
    case 0:
      transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
      if ( transform )
      {
        UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
        if ( transform )
        {
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17621/*"box_n_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17622/*"box_n_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v34 = &StringLiteral_17623/*"box_n_open"*/;
LABEL_34:
                  UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v34, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
      goto LABEL_35;
  }
}


void __fastcall QuestRewardBoxAction__Update(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B63AE6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CStateManager_QuestRewardBoxAction__update__, method);
    byte_4B63AE6 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_318A658 *)Method_CStateManager_QuestRewardBoxAction__update__);
}


void __fastcall QuestRewardBoxAction___Play_b__19_0(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardBoxAction__SetState(this, 1, v2);
}


void __fastcall QuestRewardBoxAction_StateNone___ctor(QuestRewardBoxAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardBoxAction_StateNone__begin(
        QuestRewardBoxAction_StateNone_o *this,
        QuestRewardBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardBoxAction_StateNone__end(
        QuestRewardBoxAction_StateNone_o *this,
        QuestRewardBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardBoxAction_StateNone__update(
        QuestRewardBoxAction_StateNone_o *this,
        QuestRewardBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardBoxAction_StatePlay___ctor(QuestRewardBoxAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardBoxAction_StatePlay__begin(
        QuestRewardBoxAction_StatePlay_o *this,
        QuestRewardBoxAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *v7; // x0
  struct SimpleAnimation_o *v8; // x19
  System_String_o *v9; // x0
  QuestRewardBoxAction_StatePlay_c *klass; // x8
  QuestRewardBoxAction_StatePlay_o *v11; // x19
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v18; // x19
  System_String_o *v19; // x0

  if ( (byte_4B63AEB & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardBoxAction_StatePlay_o *)sub_1BE4ACC(&SimpleAnimation_State_TypeInfo, v4);
    byte_4B63AEB = 1;
  }
  if ( !that )
    goto LABEL_29;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v16 = that->fields.mAnimation;
    if ( v16 )
    {
      this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__Play_70197004(v16, name, 0LL);
        v18 = that->fields.mAnimation;
        if ( v18 )
        {
          this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_clip(v18, 0LL);
          if ( this )
          {
            v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_Item(v18, v19, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_29:
    sub_1BE4D28(this, that);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_29;
  this = (QuestRewardBoxAction_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_29;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__Play_64837092(v6, v7, 0LL);
  v8 = that->fields.mSimpleAnimation;
  if ( !v8 )
    goto LABEL_29;
  this = (QuestRewardBoxAction_StatePlay_o *)v8[1].monitor;
  if ( !this )
    goto LABEL_29;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__get_Item(v8, v9, 0LL);
  if ( !this )
    goto LABEL_29;
  klass = this->klass;
  v11 = this;
  v12 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_16;
    }
    v14 = (__int64)(&klass[1]._1.namespaze + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v14 = sub_1C36AAC(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(QuestRewardBoxAction_StatePlay_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 1.0);
}


void __fastcall QuestRewardBoxAction_StatePlay__end(
        QuestRewardBoxAction_StatePlay_o *this,
        QuestRewardBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardBoxAction_StatePlay__update(
        QuestRewardBoxAction_StatePlay_o *this,
        QuestRewardBoxAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  UnityEngine_Object_o *monitor; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_Object_o **v18; // x19
  UnityEngine_Object_o *v19; // x21
  UnityEngine_Object_o *v20; // x8
  SimpleAnimation_o *klass; // x21
  System_String_o *name; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v24; // x0
  __int64 *v25; // x8
  UnityEngine_Object_o *v26; // x21
  UnityEngine_Object_o *v27; // x8
  UnityEngine_Animation_o *v28; // x21
  System_String_o *v29; // x0
  System_Action_o *v30; // x22
  const MethodInfo *v31; // x2

  if ( (byte_4B63AEC & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, that);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__, v6);
    sub_1BE4ACC(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__, v7);
    sub_1BE4ACC(&QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo, v8);
    byte_4B63AEC = 1;
  }
  v9 = sub_1BE4D18(QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_25;
  *(_QWORD *)(v9 + 16) = that;
  v18 = (UnityEngine_Object_o **)(v9 + 16);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)that, v12, v13, v14, v15, v16, v17);
  if ( !*(_QWORD *)(v9 + 16) )
    goto LABEL_25;
  v19 = *(UnityEngine_Object_o **)(*(_QWORD *)(v9 + 16) + 48LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
  v20 = *v18;
  if ( !*v18 )
    goto LABEL_25;
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    klass = (SimpleAnimation_o *)v20[2].klass;
    if ( !klass )
      goto LABEL_25;
    monitor = (UnityEngine_Object_o *)klass[1].monitor;
    if ( !monitor )
      goto LABEL_25;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    if ( !SimpleAnimation__IsPlaying(klass, name, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v24 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      v25 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__;
LABEL_22:
      v30 = v24;
      System_Action___ctor(v24, (Il2CppObject *)v9, *v25, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 1.0, v30, 0LL);
        monitor = *v18;
        if ( *v18 )
        {
          QuestRewardBoxAction__SetState((QuestRewardBoxAction_o *)monitor, 0, v31);
          return;
        }
      }
LABEL_25:
      sub_1BE4D28(monitor, v11);
    }
  }
  else
  {
    v26 = *(UnityEngine_Object_o **)&v20[1].fields.m_CachedPtr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) != 0 )
    {
      v27 = *v18;
      if ( !*v18 )
        goto LABEL_25;
      v28 = *(UnityEngine_Animation_o **)&v27[1].fields.m_CachedPtr;
      if ( !v28 )
        goto LABEL_25;
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(
                                          *(UnityEngine_Animation_o **)&v27[1].fields.m_CachedPtr,
                                          0LL);
      if ( !monitor )
        goto LABEL_25;
      v29 = UnityEngine_Object__get_name(monitor, 0LL);
      if ( !UnityEngine_Animation__IsPlaying(v28, v29, 0LL) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v24 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        v25 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__;
        goto LABEL_22;
      }
    }
  }
}


void __fastcall QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___ctor(
        QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___update_b__0(
        QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardBoxAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BE4D28(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}


void __fastcall QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___update_b__1(
        QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardBoxAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BE4D28(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}