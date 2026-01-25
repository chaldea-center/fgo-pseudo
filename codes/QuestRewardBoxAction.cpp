void QuestRewardBoxAction___ctor(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestRewardBoxAction__Awake(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *v3; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v11; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v13; // x1
  CStateManager_T__o *v14; // x20
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x2
  GrandQuestFolderBoardItem_o *p_particleObj; // x20
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4CEB33A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestRewardBoxAction___ctor__);
    sub_1C7BAE8(&Method_CStateManager_QuestRewardBoxAction__add__);
    sub_1C7BAE8(&CStateManager_QuestRewardBoxAction__TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&QuestRewardBoxAction_StateNone_TypeInfo);
    sub_1C7BAE8(&QuestRewardBoxAction_StatePlay_TypeInfo);
    byte_4CEB33A = 1;
  }
  if ( !this->fields.mFSM )
  {
    v3 = (CStateManager_T__o *)sub_1C7BD34(CStateManager_QuestRewardBoxAction__TypeInfo);
    CStateManager_object____ctor(
      v3,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_33B93F0 *)Method_CStateManager_QuestRewardBoxAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardBoxAction__o *)v3;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v3, v4, v5, v6, v7, v8, v9);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v11 = (Il2CppObject *)sub_1C7BD34(QuestRewardBoxAction_StateNone_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !mFSM )
      goto LABEL_22;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v11,
      (const MethodInfo_33B9498 *)Method_CStateManager_QuestRewardBoxAction__add__);
    v14 = (CStateManager_T__o *)this->fields.mFSM;
    v15 = (Il2CppObject *)sub_1C7BD34(QuestRewardBoxAction_StatePlay_TypeInfo);
    System_Object___ctor(v15, 0);
    if ( !v14 )
      goto LABEL_22;
    CStateManager_object___add(
      v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_33B9498 *)Method_CStateManager_QuestRewardBoxAction__add__);
    QuestRewardBoxAction__SetState(this, 0, v16);
  }
  p_particleObj = (GrandQuestFolderBoardItem_o *)&this->fields.particleObj;
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(particleObj, 0, 0) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0, 0) )
    {
      v20 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__Instantiate_object_(
              v20,
              (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v21, (UnityEngine_Component_o *)this, 0);
        if ( !byte_4CE7E59 )
        {
          sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
          byte_4CE7E59 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v21,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( v21 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v21,
                                         (const MethodInfo_31C732C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0);
            p_particleObj->klass = (GrandQuestFolderBoardItem_c *)v21;
            sub_1C7BA8C(p_particleObj, (int32_t)v21, v22, v23, v24, v25, v26, v27);
            return;
          }
        }
LABEL_22:
        sub_1C7BD40(ComponentInChildren_object, v13);
      }
    }
  }
}


int32_t QuestRewardBoxAction__GetState(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  QuestRewardBoxAction_o *v2; // x19
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4CEB33E & 1) == 0 )
  {
    this = (QuestRewardBoxAction_o *)sub_1C7BAE8(&Method_CStateManager_QuestRewardBoxAction__getState__);
    byte_4CEB33E = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C7BD40(this, method);
  return mFSM->fields.m_state;
}


void QuestRewardBoxAction__Play(QuestRewardBoxAction_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v13; // x20
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v16; // x20
  __int64 v17; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v19; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v21; // x20
  System_String_o *v22; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v24; // x8
  CommonUI_o *v25; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  if ( (byte_4CEB33D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_QuestRewardBoxAction__Play_b__19_0__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CEB33D = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mEndAct,
    (int32_t)end_act,
    (int32_t)method,
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v13 = this->fields.mSimpleAnimation;
    if ( !v13 )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)v13->fields.m_Clip;
    if ( !gameObject )
      goto LABEL_28;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v13, name, 0);
    if ( !gameObject )
      goto LABEL_28;
    klass = gameObject->klass;
    v16 = gameObject;
    v17 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
    if ( *(_WORD *)&gameObject->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v17;
        p_offset += 2;
        if ( !v17 )
          goto LABEL_14;
      }
      v19 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v19 = sub_1C51E70(gameObject, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v19)(v16, *(_QWORD *)(v19 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v21 = this->fields.mAnimation;
      if ( !v21 )
        goto LABEL_28;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0);
      if ( !gameObject )
        goto LABEL_28;
      v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v21, v22, 0);
      if ( !gameObject )
        goto LABEL_28;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = AvalonSceneManager_TypeInfo;
  v25 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v24 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v24->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_QuestRewardBoxAction__Play_b__19_0__, 0);
  if ( !v25 )
LABEL_28:
    sub_1C7BD40(gameObject, v11);
  CommonUI__maskFadein(v25, DEFAULT_FADE_TIME, v27, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestRewardBoxAction__SetState(QuestRewardBoxAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4CEB33F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestRewardBoxAction__setState__);
    byte_4CEB33F = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C7BD40(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_33B9524 *)Method_CStateManager_QuestRewardBoxAction__setState__);
}


void QuestRewardBoxAction__Setup(
        QuestRewardBoxAction_o *this,
        int32_t box_type,
        bool overwrite,
        const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v8; // x1
  Il2CppObject *ComponentInChildren_object__51801640; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  __int64 *v23; // x8

  if ( (byte_4CEB33C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C7BAE8(&StringLiteral_17462/*"box_s_open"*/);
    sub_1C7BAE8(&StringLiteral_17453/*"box_g_lock"*/);
    sub_1C7BAE8(&StringLiteral_17458/*"box_n_lock"*/);
    sub_1C7BAE8(&StringLiteral_17461/*"box_s_lock"*/);
    sub_1C7BAE8(&StringLiteral_17457/*"box_n_base"*/);
    sub_1C7BAE8(&StringLiteral_17454/*"box_g_open"*/);
    sub_1C7BAE8(&StringLiteral_17460/*"box_s_base"*/);
    sub_1C7BAE8(&StringLiteral_17452/*"box_g_base"*/);
    sub_1C7BAE8(&StringLiteral_17459/*"box_n_open"*/);
    byte_4CEB33C = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_35;
  ComponentInChildren_object__51801640 = UnityEngine_Component__GetComponentInChildren_object__51801640(
                                           transform,
                                           (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51801640;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__51801640,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_35;
  v16 = UnityEngine_Component__GetComponentInChildren_object__51801640(
          transform,
          (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mSimpleAnimation, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_35;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__51801640(
                                           transform,
                                           (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17452/*"box_g_base"*/, 0);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17453/*"box_g_lock"*/, 0);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v23 = &StringLiteral_17454/*"box_g_open"*/;
                  goto LABEL_34;
                }
              }
            }
          }
        }
      }
LABEL_35:
      sub_1C7BD40(transform, v8);
    case 1:
      transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
      if ( transform )
      {
        UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0);
        transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
        if ( transform )
        {
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17460/*"box_s_base"*/, 0);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17461/*"box_s_lock"*/, 0);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v23 = &StringLiteral_17462/*"box_s_open"*/;
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
        UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0);
        transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
        if ( transform )
        {
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17457/*"box_n_base"*/, 0);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17458/*"box_n_lock"*/, 0);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v23 = &StringLiteral_17459/*"box_n_open"*/;
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

  if ( (byte_4CEB33B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestRewardBoxAction__update__);
    byte_4CEB33B = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_33B9500 *)Method_CStateManager_QuestRewardBoxAction__update__);
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

  if ( (byte_4CEB340 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardBoxAction_StatePlay_o *)sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CEB340 = 1;
  }
  if ( !that )
    goto LABEL_29;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v15 = that->fields.mAnimation;
    if ( v15 )
    {
      this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__Play_71613624(v15, name, 0);
        v17 = that->fields.mAnimation;
        if ( v17 )
        {
          this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_clip(v17, 0);
          if ( this )
          {
            v18 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_Item(v17, v18, 0);
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
    sub_1C7BD40(this, that);
  }
  v5 = that->fields.mSimpleAnimation;
  if ( !v5 )
    goto LABEL_29;
  this = (QuestRewardBoxAction_StatePlay_o *)v5->fields.m_Clip;
  if ( !this )
    goto LABEL_29;
  v6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__Play_67121960(v5, v6, 0);
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_29;
  this = (QuestRewardBoxAction_StatePlay_o *)v7->fields.m_Clip;
  if ( !this )
    goto LABEL_29;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__get_Item(v7, v8, 0);
  if ( !this )
    goto LABEL_29;
  klass = this->klass;
  v10 = this;
  v11 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_16;
    }
    v13 = (__int64)(&klass[1]._1.name + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v13 = sub_1C51E70(this, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(QuestRewardBoxAction_StatePlay_o *, _QWORD, float))v13)(v10, *(_QWORD *)(v13 + 8), 1.0);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_AnimationClip_o **v13; // x19
  UnityEngine_Object_o *v14; // x21
  UnityEngine_AnimationClip_o *v15; // x8
  SimpleAnimation_o *m_CachedPtr; // x21
  System_String_o *name; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v19; // x0
  intptr_t *v20; // x8
  UnityEngine_Object_o *monitor; // x21
  UnityEngine_AnimationClip_o *v22; // x8
  UnityEngine_Animation_o *v23; // x21
  System_String_o *v24; // x0
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x2

  if ( (byte_4CEB341 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__);
    sub_1C7BAE8(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__);
    sub_1C7BAE8(&QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo);
    byte_4CEB341 = 1;
  }
  v4 = sub_1C7BD34(QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_25;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (UnityEngine_AnimationClip_o **)(v4 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_25;
  v14 = *(UnityEngine_Object_o **)(*(_QWORD *)(v4 + 16) + 48LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_Clip = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
  v15 = *v13;
  if ( !*v13 )
    goto LABEL_25;
  if ( ((unsigned __int8)m_Clip & 1) != 0 )
  {
    m_CachedPtr = (SimpleAnimation_o *)v15[1].fields.m_CachedPtr;
    if ( !m_CachedPtr )
      goto LABEL_25;
    m_Clip = m_CachedPtr->fields.m_Clip;
    if ( !m_Clip )
      goto LABEL_25;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)m_Clip, 0);
    if ( !SimpleAnimation__IsPlaying(m_CachedPtr, name, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      v20 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__;
LABEL_22:
      v25 = v19;
      System_Action___ctor(v19, (Il2CppObject *)v4, *v20, 0);
      if ( Instance )
      {
        CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 1.0, v25, 0);
        m_Clip = *v13;
        if ( *v13 )
        {
          QuestRewardBoxAction__SetState((QuestRewardBoxAction_o *)m_Clip, 0, v26);
          return;
        }
      }
LABEL_25:
      sub_1C7BD40(m_Clip, v6);
    }
  }
  else
  {
    monitor = (UnityEngine_Object_o *)v15[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    m_Clip = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Inequality(monitor, 0, 0);
    if ( ((unsigned __int8)m_Clip & 1) != 0 )
    {
      v22 = *v13;
      if ( !*v13 )
        goto LABEL_25;
      v23 = (UnityEngine_Animation_o *)v22[1].monitor;
      if ( !v23 )
        goto LABEL_25;
      m_Clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v22[1].monitor, 0);
      if ( !m_Clip )
        goto LABEL_25;
      v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)m_Clip, 0);
      if ( !UnityEngine_Animation__IsPlaying(v23, v24, 0) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v19 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        v20 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__;
        goto LABEL_22;
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
    sub_1C7BD40(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0);
}


void QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___update_b__1(
        QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardBoxAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C7BD40(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0);
}