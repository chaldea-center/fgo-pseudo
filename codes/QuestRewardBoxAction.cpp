void QuestRewardBoxAction___ctor(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestRewardBoxAction__Awake(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *v4; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v12; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x20
  Il2CppObject *v16; // x21
  const MethodInfo *v17; // x2
  MissionNaviTransitionBoardItem_o *p_particleObj; // x20
  UnityEngine_Object_o *particleObj; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *particlePrefab; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x21
  Il2CppObject *v26; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5935271 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_QuestRewardBoxAction___ctor__);
    sub_21FFC50(&Method_CStateManager_QuestRewardBoxAction__add__);
    sub_21FFC50(&CStateManager_QuestRewardBoxAction__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&QuestRewardBoxAction_StateNone_TypeInfo);
    sub_21FFC50(&QuestRewardBoxAction_StatePlay_TypeInfo);
    byte_5935271 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_21FFEBC(CStateManager_QuestRewardBoxAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_3E505AC *)Method_CStateManager_QuestRewardBoxAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardBoxAction__o *)v4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_21FFEBC(QuestRewardBoxAction_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_22;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3E5065C *)Method_CStateManager_QuestRewardBoxAction__add__);
    v15 = (CStateManager_T__o *)this->fields.mFSM;
    v16 = (Il2CppObject *)sub_21FFEBC(QuestRewardBoxAction_StatePlay_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_22;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_3E5065C *)Method_CStateManager_QuestRewardBoxAction__add__);
    QuestRewardBoxAction__SetState(this, 0, v17);
  }
  p_particleObj = (MissionNaviTransitionBoardItem_o *)&this->fields.particleObj;
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(particleObj, 0, 0) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0, 0) )
    {
      v25 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
      v26 = UnityEngine_Object__Instantiate_object_(
              v25,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v26, (UnityEngine_Component_o *)this, 0);
        if ( !byte_5931940 )
        {
          sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v26,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( v26 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v26,
                                         (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0);
            p_particleObj->klass = (MissionNaviTransitionBoardItem_c *)v26;
            sub_21FFBF4(p_particleObj, (int32_t)v26, v27, v28, v29, v30, v31, v32);
            return;
          }
        }
LABEL_22:
        sub_21FFECC(ComponentInChildren_object, v14);
      }
    }
  }
}


int32_t QuestRewardBoxAction__GetState(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  QuestRewardBoxAction_o *v2; // x19
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_5935275 & 1) == 0 )
  {
    this = (QuestRewardBoxAction_o *)sub_21FFC50(&Method_CStateManager_QuestRewardBoxAction__getState__);
    byte_5935275 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_21FFECC(this, method);
  return mFSM->fields.m_state;
}


void QuestRewardBoxAction__Play(QuestRewardBoxAction_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x20
  __int64 v15; // x2
  struct SimpleAnimation_o *v16; // x20
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v19; // x20
  __int64 v20; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v22; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v24; // x20
  System_String_o *v25; // x0
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  AvalonSceneManager_c *v29; // x8
  CommonUI_o *v30; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_5935274 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_QuestRewardBoxAction__Play_b__19_0__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_5935274 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mEndAct,
    (int32_t)end_act,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v16 = this->fields.mSimpleAnimation;
    if ( !v16 )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)v16->fields.m_Clip;
    if ( !gameObject )
      goto LABEL_28;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v16, name, 0);
    if ( !gameObject )
      goto LABEL_28;
    klass = gameObject->klass;
    v19 = gameObject;
    v20 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
    if ( *(_WORD *)&gameObject->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v20;
        p_offset += 2;
        if ( !v20 )
          goto LABEL_14;
      }
      v22 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v22 = sub_2237E2C(gameObject, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, double))v22)(v19, *(_QWORD *)(v22 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v15);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v24 = this->fields.mAnimation;
      if ( !v24 )
        goto LABEL_28;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0);
      if ( !gameObject )
        goto LABEL_28;
      v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v24, v25, 0);
      if ( !gameObject )
        goto LABEL_28;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = AvalonSceneManager_TypeInfo;
  v30 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v27, v28);
    v29 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_QuestRewardBoxAction__Play_b__19_0__, 0);
  if ( !v30 )
LABEL_28:
    sub_21FFECC(gameObject, v11);
  CommonUI__maskFadein(v30, DEFAULT_FADE_TIME, v32, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestRewardBoxAction__SetState(QuestRewardBoxAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_5935276 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_QuestRewardBoxAction__setState__);
    byte_5935276 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_21FFECC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3E506E4 *)Method_CStateManager_QuestRewardBoxAction__setState__);
}


void QuestRewardBoxAction__Setup(
        QuestRewardBoxAction_o *this,
        int32_t box_type,
        bool overwrite,
        const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v8; // x1
  Il2CppObject *ComponentInChildren_object__58644924; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 *v23; // x8

  if ( (byte_5935273 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_21FFC50(&StringLiteral_18096/*"box_s_open"*/);
    sub_21FFC50(&StringLiteral_18087/*"box_g_lock"*/);
    sub_21FFC50(&StringLiteral_18092/*"box_n_lock"*/);
    sub_21FFC50(&StringLiteral_18095/*"box_s_lock"*/);
    sub_21FFC50(&StringLiteral_18091/*"box_n_base"*/);
    sub_21FFC50(&StringLiteral_18088/*"box_g_open"*/);
    sub_21FFC50(&StringLiteral_18094/*"box_s_base"*/);
    sub_21FFC50(&StringLiteral_18086/*"box_g_base"*/);
    sub_21FFC50(&StringLiteral_18093/*"box_n_open"*/);
    byte_5935273 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_35;
  ComponentInChildren_object__58644924 = UnityEngine_Component__GetComponentInChildren_object__58644924(
                                           transform,
                                           (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__58644924;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__58644924,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_35;
  v16 = UnityEngine_Component__GetComponentInChildren_object__58644924(
          transform,
          (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v16;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mSimpleAnimation,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_35;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__58644924(
                                           transform,
                                           (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_35;
  BYTE5(transform[4].monitor) = 1;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  if ( overwrite )
    return;
  switch ( box_type )
  {
    case 2:
      transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
      if ( transform )
      {
        UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0);
        transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
        if ( transform )
        {
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_18086/*"box_g_base"*/, 0);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_18087/*"box_g_lock"*/, 0);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v23 = &StringLiteral_18088/*"box_g_open"*/;
                  goto LABEL_34;
                }
              }
            }
          }
        }
      }
      goto LABEL_35;
    case 1:
      transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
      if ( transform )
      {
        UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0);
        transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
        if ( transform )
        {
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_18094/*"box_s_base"*/, 0);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_18095/*"box_s_lock"*/, 0);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v23 = &StringLiteral_18096/*"box_s_open"*/;
                  goto LABEL_34;
                }
              }
            }
          }
        }
      }
LABEL_35:
      sub_21FFECC(transform, v8);
    case 0:
      transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
      if ( transform )
      {
        UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0);
        transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
        if ( transform )
        {
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_18091/*"box_n_base"*/, 0);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_18092/*"box_n_lock"*/, 0);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v23 = &StringLiteral_18093/*"box_n_open"*/;
LABEL_34:
                  UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v23, 0);
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


void QuestRewardBoxAction__Update(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_5935272 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_QuestRewardBoxAction__update__);
    byte_5935272 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3E506C4 *)Method_CStateManager_QuestRewardBoxAction__update__);
}


void QuestRewardBoxAction___Play_b__19_0(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardBoxAction__SetState(this, 1, v2);
}


void QuestRewardBoxAction_StateNone___ctor(QuestRewardBoxAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardBoxAction_StateNone__begin(
        QuestRewardBoxAction_StateNone_o *this,
        QuestRewardBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardBoxAction_StateNone__end(
        QuestRewardBoxAction_StateNone_o *this,
        QuestRewardBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardBoxAction_StateNone__update(
        QuestRewardBoxAction_StateNone_o *this,
        QuestRewardBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardBoxAction_StatePlay___ctor(QuestRewardBoxAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardBoxAction_StatePlay__begin(
        QuestRewardBoxAction_StatePlay_o *this,
        QuestRewardBoxAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mSimpleAnimation; // x20
  __int64 v5; // x2
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

  if ( (byte_5935277 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardBoxAction_StatePlay_o *)sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_5935277 = 1;
  }
  if ( !that )
    goto LABEL_29;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v5);
    this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v16 = that->fields.mAnimation;
    if ( v16 )
    {
      this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__Play_82865240(v16, name, 0);
        v18 = that->fields.mAnimation;
        if ( v18 )
        {
          this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_clip(v18, 0);
          if ( this )
          {
            v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_Item(v18, v19, 0);
            if ( this )
            {
              UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_29:
    sub_21FFECC(this, that);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_29;
  this = (QuestRewardBoxAction_StatePlay_o *)v6->fields.m_Clip;
  if ( !this )
    goto LABEL_29;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__Play_78338864(v6, v7, 0);
  v8 = that->fields.mSimpleAnimation;
  if ( !v8 )
    goto LABEL_29;
  this = (QuestRewardBoxAction_StatePlay_o *)v8->fields.m_Clip;
  if ( !this )
    goto LABEL_29;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__get_Item(v8, v9, 0);
  if ( !this )
    goto LABEL_29;
  klass = this->klass;
  v11 = this;
  v12 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_16;
    }
    v14 = (__int64)(&klass[1]._1.name + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v14 = sub_2237E2C(this, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(QuestRewardBoxAction_StatePlay_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 1.0);
}


void QuestRewardBoxAction_StatePlay__end(
        QuestRewardBoxAction_StatePlay_o *this,
        QuestRewardBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardBoxAction_StatePlay__update(
        QuestRewardBoxAction_StatePlay_o *this,
        QuestRewardBoxAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  UnityEngine_AnimationClip_o *m_Clip; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_AnimationClip_o **v13; // x19
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x21
  __int64 v16; // x2
  UnityEngine_AnimationClip_o *v17; // x8
  SimpleAnimation_o *m_CachedPtr; // x21
  System_String_o *name; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v21; // x0
  intptr_t *v22; // x8
  UnityEngine_Object_o *monitor; // x21
  UnityEngine_AnimationClip_o *v24; // x8
  UnityEngine_Animation_o *v25; // x21
  System_String_o *v26; // x0
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x2

  if ( (byte_5935278 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__);
    sub_21FFC50(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__);
    sub_21FFC50(&QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo);
    byte_5935278 = 1;
  }
  v4 = sub_21FFEBC(QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_26;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (UnityEngine_AnimationClip_o **)(v4 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_26;
  v15 = *(UnityEngine_Object_o **)(*(_QWORD *)(v4 + 16) + 48LL);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v14);
  m_Clip = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Inequality(v15, 0, 0);
  v17 = *v13;
  if ( ((unsigned __int8)m_Clip & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_26;
    m_CachedPtr = (SimpleAnimation_o *)v17[1].fields.m_CachedPtr;
    if ( !m_CachedPtr )
      goto LABEL_26;
    m_Clip = m_CachedPtr->fields.m_Clip;
    if ( !m_Clip )
      goto LABEL_26;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)m_Clip, 0);
    if ( !SimpleAnimation__IsPlaying(m_CachedPtr, name, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      v22 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__;
LABEL_23:
      v27 = v21;
      System_Action___ctor(v21, (Il2CppObject *)v4, *v22, 0);
      if ( Instance )
      {
        CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 1.0, v27, 0);
        m_Clip = *v13;
        if ( *v13 )
        {
          QuestRewardBoxAction__SetState((QuestRewardBoxAction_o *)m_Clip, 0, v28);
          return;
        }
      }
LABEL_26:
      sub_21FFECC(m_Clip, v6);
    }
  }
  else
  {
    if ( !v17 )
      goto LABEL_26;
    monitor = (UnityEngine_Object_o *)v17[1].monitor;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v16);
    m_Clip = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Inequality(monitor, 0, 0);
    if ( ((unsigned __int8)m_Clip & 1) != 0 )
    {
      v24 = *v13;
      if ( !*v13 )
        goto LABEL_26;
      v25 = (UnityEngine_Animation_o *)v24[1].monitor;
      if ( !v25 )
        goto LABEL_26;
      m_Clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v24[1].monitor, 0);
      if ( !m_Clip )
        goto LABEL_26;
      v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)m_Clip, 0);
      if ( !UnityEngine_Animation__IsPlaying(v25, v26, 0) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        v22 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__;
        goto LABEL_23;
      }
    }
  }
}


void QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___ctor(
        QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___update_b__0(
        QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardBoxAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_21FFECC(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0);
}


void QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___update_b__1(
        QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardBoxAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_21FFECC(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0);
}