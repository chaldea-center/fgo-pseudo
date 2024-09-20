void __fastcall QuestRewardBoxAction___ctor(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardBoxAction__Awake(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *v3; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v7; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v9; // x1
  CStateManager_T__o *v10; // x20
  Il2CppObject *v11; // x21
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A581B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_QuestRewardBoxAction___ctor__);
    sub_1B885B0(&Method_CStateManager_QuestRewardBoxAction__add__);
    sub_1B885B0(&CStateManager_QuestRewardBoxAction__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestRewardBoxAction_StateNone_TypeInfo);
    sub_1B885B0(&QuestRewardBoxAction_StatePlay_TypeInfo);
    byte_4A581B6 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v3 = (CStateManager_T__o *)sub_1B887FC(CStateManager_QuestRewardBoxAction__TypeInfo);
    CStateManager_object____ctor(
      v3,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_30AAD34 *)Method_CStateManager_QuestRewardBoxAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardBoxAction__o *)v3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v3, v4, v5);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v7 = (Il2CppObject *)sub_1B887FC(QuestRewardBoxAction_StateNone_TypeInfo);
    System_Object___ctor(v7, 0LL);
    if ( !mFSM )
      goto LABEL_22;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v7,
      (const MethodInfo_30AADDC *)Method_CStateManager_QuestRewardBoxAction__add__);
    v10 = (CStateManager_T__o *)this->fields.mFSM;
    v11 = (Il2CppObject *)sub_1B887FC(QuestRewardBoxAction_StatePlay_TypeInfo);
    System_Object___ctor(v11, 0LL);
    if ( !v10 )
      goto LABEL_22;
    CStateManager_object___add(
      v10,
      1,
      (IState_T__o *)v11,
      (const MethodInfo_30AADDC *)Method_CStateManager_QuestRewardBoxAction__add__);
    QuestRewardBoxAction__SetState(this, 0, v12);
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
      v15 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__Instantiate_object_(
              v15,
              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v16, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4A55CE1 )
        {
          sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v16,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v16 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v16,
                                         (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v16;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.particleObj, (int32_t)v16, v17, v18);
            return;
          }
        }
LABEL_22:
        sub_1B8880C(ComponentInChildren_object, v9);
      }
    }
  }
}


int32_t __fastcall QuestRewardBoxAction__GetState(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  QuestRewardBoxAction_o *v2; // x19
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4A581BA & 1) == 0 )
  {
    this = (QuestRewardBoxAction_o *)sub_1B885B0(&Method_CStateManager_QuestRewardBoxAction__getState__);
    byte_4A581BA = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardBoxAction__Play(
        QuestRewardBoxAction_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v9; // x20
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v12; // x20
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v17; // x20
  System_String_o *v18; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v20; // x8
  CommonUI_o *v21; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21

  if ( (byte_4A581B9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_QuestRewardBoxAction__Play_b__19_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A581B9 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mEndAct, (int32_t)end_act, (int32_t)method, v3);
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
    v9 = this->fields.mSimpleAnimation;
    if ( !v9 )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)v9[1].monitor;
    if ( !gameObject )
      goto LABEL_28;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v9, name, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    klass = gameObject->klass;
    v12 = gameObject;
    v13 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v13;
        p_offset += 2;
        if ( !v13 )
          goto LABEL_14;
      }
      v15 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v15 = sub_1BDA590(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v15)(v12, *(_QWORD *)(v15 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v17 = this->fields.mAnimation;
      if ( !v17 )
        goto LABEL_28;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_28;
      v18 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v17, v18, 0LL);
      if ( !gameObject )
        goto LABEL_28;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = AvalonSceneManager_TypeInfo;
  v21 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v20 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_QuestRewardBoxAction__Play_b__19_0__, 0LL);
  if ( !v21 )
LABEL_28:
    sub_1B8880C(gameObject, v7);
  CommonUI__maskFadein(v21, DEFAULT_FADE_TIME, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardBoxAction__SetState(QuestRewardBoxAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A581BB & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_QuestRewardBoxAction__setState__);
    byte_4A581BB = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_QuestRewardBoxAction__setState__);
}


void __fastcall QuestRewardBoxAction__Setup(
        QuestRewardBoxAction_o *this,
        int32_t box_type,
        bool overwrite,
        const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v8; // x1
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 *v15; // x8

  if ( (byte_4A581B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1B885B0(&StringLiteral_17406/*"box_s_open"*/);
    sub_1B885B0(&StringLiteral_17397/*"box_g_lock"*/);
    sub_1B885B0(&StringLiteral_17402/*"box_n_lock"*/);
    sub_1B885B0(&StringLiteral_17405/*"box_s_lock"*/);
    sub_1B885B0(&StringLiteral_17401/*"box_n_base"*/);
    sub_1B885B0(&StringLiteral_17398/*"box_g_open"*/);
    sub_1B885B0(&StringLiteral_17404/*"box_s_base"*/);
    sub_1B885B0(&StringLiteral_17396/*"box_g_base"*/);
    sub_1B885B0(&StringLiteral_17403/*"box_n_open"*/);
    byte_4A581B8 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                           transform,
                                           (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48719376;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__48719376,
    v10,
    v11);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  v12 = UnityEngine_Component__GetComponentInChildren_object__48719376(
          transform,
          (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimation, (int32_t)v12, v13, v14);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__48719376(
                                           transform,
                                           (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17396/*"box_g_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17397/*"box_g_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v15 = &StringLiteral_17398/*"box_g_open"*/;
                  goto LABEL_34;
                }
              }
            }
          }
        }
      }
LABEL_35:
      sub_1B8880C(transform, v8);
    case 1:
      transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
      if ( transform )
      {
        UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
        if ( transform )
        {
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17404/*"box_s_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17405/*"box_s_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v15 = &StringLiteral_17406/*"box_s_open"*/;
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
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17401/*"box_n_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17402/*"box_n_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v15 = &StringLiteral_17403/*"box_n_open"*/;
LABEL_34:
                  UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v15, 0LL);
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

  if ( (byte_4A581B7 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_QuestRewardBoxAction__update__);
    byte_4A581B7 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_30AAE44 *)Method_CStateManager_QuestRewardBoxAction__update__);
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
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *v6; // x0
  struct SimpleAnimation_o *v7; // x19
  System_String_o *v8; // x0
  QuestRewardBoxAction_StatePlay_c *klass; // x8
  QuestRewardBoxAction_StatePlay_o *v10; // x19
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v15; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v17; // x19
  System_String_o *v18; // x0

  if ( (byte_4A581BC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardBoxAction_StatePlay_o *)sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A581BC = 1;
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
    v15 = that->fields.mAnimation;
    if ( v15 )
    {
      this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__Play_69204472(v15, name, 0LL);
        v17 = that->fields.mAnimation;
        if ( v17 )
        {
          this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_clip(v17, 0LL);
          if ( this )
          {
            v18 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_Item(v17, v18, 0LL);
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
    sub_1B8880C(this, that);
  }
  v5 = that->fields.mSimpleAnimation;
  if ( !v5 )
    goto LABEL_29;
  this = (QuestRewardBoxAction_StatePlay_o *)v5[1].monitor;
  if ( !this )
    goto LABEL_29;
  v6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__Play_63844704(v5, v6, 0LL);
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_29;
  this = (QuestRewardBoxAction_StatePlay_o *)v7[1].monitor;
  if ( !this )
    goto LABEL_29;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__get_Item(v7, v8, 0LL);
  if ( !this )
    goto LABEL_29;
  klass = this->klass;
  v10 = this;
  v11 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_16;
    }
    v13 = (__int64)(&klass[1]._1.namespaze + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v13 = sub_1BDA590(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(QuestRewardBoxAction_StatePlay_o *, _QWORD, float))v13)(v10, *(_QWORD *)(v13 + 8), 1.0);
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
  __int64 v4; // x20
  UnityEngine_Object_o *monitor; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_Object_o **v9; // x19
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *v11; // x8
  SimpleAnimation_o *klass; // x21
  System_String_o *name; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v15; // x0
  __int64 *v16; // x8
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Object_o *v18; // x8
  UnityEngine_Animation_o *v19; // x21
  System_String_o *v20; // x0
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x2

  if ( (byte_4A581BD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__);
    sub_1B885B0(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__);
    sub_1B885B0(&QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo);
    byte_4A581BD = 1;
  }
  v4 = sub_1B887FC(QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_25;
  *(_QWORD *)(v4 + 16) = that;
  v9 = (UnityEngine_Object_o **)(v4 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_25;
  v10 = *(UnityEngine_Object_o **)(*(_QWORD *)(v4 + 16) + 48LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  v11 = *v9;
  if ( !*v9 )
    goto LABEL_25;
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    klass = (SimpleAnimation_o *)v11[2].klass;
    if ( !klass )
      goto LABEL_25;
    monitor = (UnityEngine_Object_o *)klass[1].monitor;
    if ( !monitor )
      goto LABEL_25;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    if ( !SimpleAnimation__IsPlaying(klass, name, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v16 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__;
LABEL_22:
      v21 = v15;
      System_Action___ctor(v15, (Il2CppObject *)v4, *v16, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 1.0, v21, 0LL);
        monitor = *v9;
        if ( *v9 )
        {
          QuestRewardBoxAction__SetState((QuestRewardBoxAction_o *)monitor, 0, v22);
          return;
        }
      }
LABEL_25:
      sub_1B8880C(monitor, v6);
    }
  }
  else
  {
    v17 = *(UnityEngine_Object_o **)&v11[1].fields.m_CachedPtr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) != 0 )
    {
      v18 = *v9;
      if ( !*v9 )
        goto LABEL_25;
      v19 = *(UnityEngine_Animation_o **)&v18[1].fields.m_CachedPtr;
      if ( !v19 )
        goto LABEL_25;
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(
                                          *(UnityEngine_Animation_o **)&v18[1].fields.m_CachedPtr,
                                          0LL);
      if ( !monitor )
        goto LABEL_25;
      v20 = UnityEngine_Object__get_name(monitor, 0LL);
      if ( !UnityEngine_Animation__IsPlaying(v19, v20, 0LL) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        v16 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__;
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
    sub_1B8880C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}


void __fastcall QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___update_b__1(
        QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardBoxAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1B8880C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}