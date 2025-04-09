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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v14; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v16; // x1
  CStateManager_T__o *v17; // x20
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x21
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_49B7D87 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_QuestRewardBoxAction___ctor__, method);
    sub_1B4CF90(&Method_CStateManager_QuestRewardBoxAction__add__, v3);
    sub_1B4CF90(&CStateManager_QuestRewardBoxAction__TypeInfo, v4);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v5);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&QuestRewardBoxAction_StateNone_TypeInfo, v8);
    sub_1B4CF90(&QuestRewardBoxAction_StatePlay_TypeInfo, v9);
    byte_49B7D87 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v10 = (CStateManager_T__o *)sub_1B4D1DC(CStateManager_QuestRewardBoxAction__TypeInfo);
    CStateManager_object____ctor(
      v10,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_312D7A4 *)Method_CStateManager_QuestRewardBoxAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardBoxAction__o *)v10;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v10, v11, v12);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v14 = (Il2CppObject *)sub_1B4D1DC(QuestRewardBoxAction_StateNone_TypeInfo);
    System_Object___ctor(v14, 0LL);
    if ( !mFSM )
      goto LABEL_22;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v14,
      (const MethodInfo_312D84C *)Method_CStateManager_QuestRewardBoxAction__add__);
    v17 = (CStateManager_T__o *)this->fields.mFSM;
    v18 = (Il2CppObject *)sub_1B4D1DC(QuestRewardBoxAction_StatePlay_TypeInfo);
    System_Object___ctor(v18, 0LL);
    if ( !v17 )
      goto LABEL_22;
    CStateManager_object___add(
      v17,
      1,
      (IState_T__o *)v18,
      (const MethodInfo_312D84C *)Method_CStateManager_QuestRewardBoxAction__add__);
    QuestRewardBoxAction__SetState(this, 0, v19);
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
      v22 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v23 = UnityEngine_Object__Instantiate_object_(
              v22,
              (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v23, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_49B5361 )
        {
          sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v24);
          byte_49B5361 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v23,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v23 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v23,
                                         (const MethodInfo_2F536A8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v23;
            sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.particleObj, (int32_t)v23, v25, v26);
            return;
          }
        }
LABEL_22:
        sub_1B4D1EC(ComponentInChildren_object, v16);
      }
    }
  }
}


int32_t __fastcall QuestRewardBoxAction__GetState(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  QuestRewardBoxAction_o *v2; // x19
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_49B7D8B & 1) == 0 )
  {
    this = (QuestRewardBoxAction_o *)sub_1B4CF90(&Method_CStateManager_QuestRewardBoxAction__getState__, method);
    byte_49B7D8B = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B4D1EC(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardBoxAction__Play(
        QuestRewardBoxAction_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v14; // x20
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v17; // x20
  __int64 v18; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v20; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v22; // x20
  System_String_o *v23; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v25; // x8
  CommonUI_o *v26; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21

  if ( (byte_49B7D8A & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, end_act);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&Method_QuestRewardBoxAction__Play_b__19_0__, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B4CF90(&SimpleAnimation_State_TypeInfo, v10);
    byte_49B7D8A = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.mEndAct, (int32_t)end_act, (int32_t)method, v3);
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
    v14 = this->fields.mSimpleAnimation;
    if ( !v14 )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)v14[1].monitor;
    if ( !gameObject )
      goto LABEL_28;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v14, name, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    klass = gameObject->klass;
    v17 = gameObject;
    v18 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v18;
        p_offset += 2;
        if ( !v18 )
          goto LABEL_14;
      }
      v20 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v20 = sub_1B9D724(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v20)(v17, *(_QWORD *)(v20 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v22 = this->fields.mAnimation;
      if ( !v22 )
        goto LABEL_28;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_28;
      v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v22, v23, 0LL);
      if ( !gameObject )
        goto LABEL_28;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  v26 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v28 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_QuestRewardBoxAction__Play_b__19_0__, 0LL);
  if ( !v26 )
LABEL_28:
    sub_1B4D1EC(gameObject, v12);
  CommonUI__maskFadein(v26, DEFAULT_FADE_TIME, v28, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardBoxAction__SetState(QuestRewardBoxAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49B7D8C & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_QuestRewardBoxAction__setState__, *(_QWORD *)&state);
    byte_49B7D8C = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B4D1EC(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_312D8D8 *)Method_CStateManager_QuestRewardBoxAction__setState__);
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
  Il2CppObject *ComponentInChildren_object__49252240; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 *v26; // x8

  if ( (byte_49B7D89 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&box_type);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v8);
    sub_1B4CF90(&StringLiteral_17088/*"box_s_open"*/, v9);
    sub_1B4CF90(&StringLiteral_17079/*"box_g_lock"*/, v10);
    sub_1B4CF90(&StringLiteral_17084/*"box_n_lock"*/, v11);
    sub_1B4CF90(&StringLiteral_17087/*"box_s_lock"*/, v12);
    sub_1B4CF90(&StringLiteral_17083/*"box_n_base"*/, v13);
    sub_1B4CF90(&StringLiteral_17080/*"box_g_open"*/, v14);
    sub_1B4CF90(&StringLiteral_17086/*"box_s_base"*/, v15);
    sub_1B4CF90(&StringLiteral_17078/*"box_g_base"*/, v16);
    sub_1B4CF90(&StringLiteral_17085/*"box_n_open"*/, v17);
    byte_49B7D89 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  ComponentInChildren_object__49252240 = UnityEngine_Component__GetComponentInChildren_object__49252240(
                                           transform,
                                           (const MethodInfo_2EF8790 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49252240;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__49252240,
    v21,
    v22);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  v23 = UnityEngine_Component__GetComponentInChildren_object__49252240(
          transform,
          (const MethodInfo_2EF8790 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v23;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.mSimpleAnimation, (int32_t)v23, v24, v25);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__49252240(
                                           transform,
                                           (const MethodInfo_2EF8790 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17078/*"box_g_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17079/*"box_g_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v26 = &StringLiteral_17080/*"box_g_open"*/;
                  goto LABEL_34;
                }
              }
            }
          }
        }
      }
LABEL_35:
      sub_1B4D1EC(transform, v19);
    case 1:
      transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
      if ( transform )
      {
        UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
        if ( transform )
        {
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17086/*"box_s_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17087/*"box_s_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v26 = &StringLiteral_17088/*"box_s_open"*/;
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
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17083/*"box_n_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17084/*"box_n_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v26 = &StringLiteral_17085/*"box_n_open"*/;
LABEL_34:
                  UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v26, 0LL);
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

  if ( (byte_49B7D88 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_QuestRewardBoxAction__update__, method);
    byte_49B7D88 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_312D8B4 *)Method_CStateManager_QuestRewardBoxAction__update__);
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

  if ( (byte_49B7D8D & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardBoxAction_StatePlay_o *)sub_1B4CF90(&SimpleAnimation_State_TypeInfo, v4);
    byte_49B7D8D = 1;
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
        this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__Play_68548868(v16, name, 0LL);
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
    sub_1B4D1EC(this, that);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_29;
  this = (QuestRewardBoxAction_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_29;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__Play_64044448(v6, v7, 0LL);
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
    v14 = sub_1B9D724(this, SimpleAnimation_State_TypeInfo, 8LL);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o **v14; // x19
  UnityEngine_Object_o *v15; // x21
  UnityEngine_Object_o *v16; // x8
  SimpleAnimation_o *klass; // x21
  System_String_o *name; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v20; // x0
  __int64 *v21; // x8
  UnityEngine_Object_o *v22; // x21
  UnityEngine_Object_o *v23; // x8
  UnityEngine_Animation_o *v24; // x21
  System_String_o *v25; // x0
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x2

  if ( (byte_49B7D8E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, that);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B4CF90(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__, v6);
    sub_1B4CF90(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__, v7);
    sub_1B4CF90(&QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo, v8);
    byte_49B7D8E = 1;
  }
  v9 = sub_1B4D1DC(QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_25;
  *(_QWORD *)(v9 + 16) = that;
  v14 = (UnityEngine_Object_o **)(v9 + 16);
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 16), (int32_t)that, v12, v13);
  if ( !*(_QWORD *)(v9 + 16) )
    goto LABEL_25;
  v15 = *(UnityEngine_Object_o **)(*(_QWORD *)(v9 + 16) + 48LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  v16 = *v14;
  if ( !*v14 )
    goto LABEL_25;
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    klass = (SimpleAnimation_o *)v16[2].klass;
    if ( !klass )
      goto LABEL_25;
    monitor = (UnityEngine_Object_o *)klass[1].monitor;
    if ( !monitor )
      goto LABEL_25;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    if ( !SimpleAnimation__IsPlaying(klass, name, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v20 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      v21 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__;
LABEL_22:
      v26 = v20;
      System_Action___ctor(v20, (Il2CppObject *)v9, *v21, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 1.0, v26, 0LL);
        monitor = *v14;
        if ( *v14 )
        {
          QuestRewardBoxAction__SetState((QuestRewardBoxAction_o *)monitor, 0, v27);
          return;
        }
      }
LABEL_25:
      sub_1B4D1EC(monitor, v11);
    }
  }
  else
  {
    v22 = *(UnityEngine_Object_o **)&v16[1].fields.m_CachedPtr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) != 0 )
    {
      v23 = *v14;
      if ( !*v14 )
        goto LABEL_25;
      v24 = *(UnityEngine_Animation_o **)&v23[1].fields.m_CachedPtr;
      if ( !v24 )
        goto LABEL_25;
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(
                                          *(UnityEngine_Animation_o **)&v23[1].fields.m_CachedPtr,
                                          0LL);
      if ( !monitor )
        goto LABEL_25;
      v25 = UnityEngine_Object__get_name(monitor, 0LL);
      if ( !UnityEngine_Animation__IsPlaying(v24, v25, 0LL) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v20 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
        v21 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__;
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
    sub_1B4D1EC(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}


void __fastcall QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___update_b__1(
        QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardBoxAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1B4D1EC(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}