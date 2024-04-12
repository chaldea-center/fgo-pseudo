void __fastcall QuestRewardBoxAction___ctor(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardBoxAction__Awake(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  CStateManager_QAASpotStateController_IMapSpot__o *v3; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x21
  QuestRewardBoxAction_StateNone_o *v11; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v13; // x1
  struct CStateManager_QuestRewardBoxAction__o *v14; // x20
  QuestRewardBoxAction_StatePlay_o *v15; // x21
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AE460 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QuestRewardBoxAction___ctor__);
    sub_B52984(&Method_CStateManager_QuestRewardBoxAction__add__);
    sub_B52984(&CStateManager_QuestRewardBoxAction__TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestRewardBoxAction_StateNone_TypeInfo);
    sub_B52984(&QuestRewardBoxAction_StatePlay_TypeInfo);
    byte_42AE460 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v3 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B52A54(CStateManager_QuestRewardBoxAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v3,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2B925C4 *)Method_CStateManager_QuestRewardBoxAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardBoxAction__o *)v3;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.mFSM, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
    mFSM = this->fields.mFSM;
    v11 = (QuestRewardBoxAction_StateNone_o *)sub_B52A54(QuestRewardBoxAction_StateNone_TypeInfo);
    QuestRewardBoxAction_StateNone___ctor(v11, 0LL);
    if ( !mFSM )
      goto LABEL_23;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v11,
      (const MethodInfo_2B92690 *)Method_CStateManager_QuestRewardBoxAction__add__);
    v14 = this->fields.mFSM;
    v15 = (QuestRewardBoxAction_StatePlay_o *)sub_B52A54(QuestRewardBoxAction_StatePlay_TypeInfo);
    QuestRewardBoxAction_StatePlay___ctor(v15, 0LL);
    if ( !v14 )
      goto LABEL_23;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_2B92690 *)Method_CStateManager_QuestRewardBoxAction__add__);
    QuestRewardBoxAction__SetState(this, 0, v16);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v19 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v20 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v19,
                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v20, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v20, zero, 0LL);
        if ( v20 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v20,
                                                        (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v20;
            sub_B52920(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v20,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26);
            return;
          }
        }
LABEL_23:
        sub_B52A5C(ComponentInChildren_Dropdown_DropdownItem, v13);
      }
    }
  }
}


int32_t __fastcall QuestRewardBoxAction__GetState(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  QuestRewardBoxAction_o *v2; // x19
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_42AE464 & 1) == 0 )
  {
    this = (QuestRewardBoxAction_o *)sub_B52984(&Method_CStateManager_QuestRewardBoxAction__getState__);
    byte_42AE464 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B52A5C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardBoxAction__Play(
        QuestRewardBoxAction_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v13; // x20
  System_String_o *name; // x0
  __int64 v15; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v17; // x20
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v20; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v22; // x20
  System_String_o *v23; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  if ( (byte_42AE463 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_QuestRewardBoxAction__Play_b__19_0__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42AE463 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v13 = this->fields.mSimpleAnimation;
    if ( !v13 )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)v13[1].monitor;
    if ( !gameObject )
      goto LABEL_31;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v13, name, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    klass = gameObject->klass;
    v17 = gameObject;
    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v18;
        p_offset += 2;
        if ( v18 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v20 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_15:
      v20 = sub_AEB880(gameObject, SimpleAnimation_State_TypeInfo, 8LL, v15);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v20)(v17, *(_QWORD *)(v20 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v22 = this->fields.mAnimation;
      if ( !v22 )
        goto LABEL_31;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_31;
      v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v22, v23, 0LL);
      if ( !gameObject )
        goto LABEL_31;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_QuestRewardBoxAction__Play_b__19_0__, 0LL);
  if ( !Instance )
LABEL_31:
    sub_B52A5C(gameObject, v11);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardBoxAction__SetState(QuestRewardBoxAction_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x0

  if ( (byte_42AE465 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QuestRewardBoxAction__setState__);
    byte_42AE465 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B52A5C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2B92734 *)Method_CStateManager_QuestRewardBoxAction__setState__);
}


void __fastcall QuestRewardBoxAction__Setup(
        QuestRewardBoxAction_o *this,
        int32_t box_type,
        bool overwrite,
        const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v8; // x1
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct SimpleAnimation_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 *v23; // x8

  if ( (byte_42AE462 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B52984(&StringLiteral_17025/*"box_s_open"*/);
    sub_B52984(&StringLiteral_17016/*"box_g_lock"*/);
    sub_B52984(&StringLiteral_17021/*"box_n_lock"*/);
    sub_B52984(&StringLiteral_17024/*"box_s_lock"*/);
    sub_B52984(&StringLiteral_17020/*"box_n_base"*/);
    sub_B52984(&StringLiteral_17017/*"box_g_open"*/);
    sub_B52984(&StringLiteral_17023/*"box_s_base"*/);
    sub_B52984(&StringLiteral_17015/*"box_g_base"*/);
    sub_B52984(&StringLiteral_17022/*"box_n_open"*/);
    byte_42AE462 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  v16 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      transform,
                                      (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v16;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_35;
  BYTE5(transform[4].klass) = 1;
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
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17015/*"box_g_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17016/*"box_g_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v23 = &StringLiteral_17017/*"box_g_open"*/;
                  goto LABEL_34;
                }
              }
            }
          }
        }
      }
LABEL_35:
      sub_B52A5C(transform, v8);
    case 1:
      transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
      if ( transform )
      {
        UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
        if ( transform )
        {
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17023/*"box_s_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17024/*"box_s_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v23 = &StringLiteral_17025/*"box_s_open"*/;
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
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17020/*"box_n_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17021/*"box_n_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v23 = &StringLiteral_17022/*"box_n_open"*/;
LABEL_34:
                  UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v23, 0LL);
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
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x0

  if ( (byte_42AE461 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QuestRewardBoxAction__update__);
    byte_42AE461 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2B9270C *)Method_CStateManager_QuestRewardBoxAction__update__);
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
  __int64 v9; // x3
  QuestRewardBoxAction_StatePlay_c *klass; // x8
  QuestRewardBoxAction_StatePlay_o *v11; // x19
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 v14; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v18; // x19
  System_String_o *v19; // x0

  if ( (byte_42AF26B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardBoxAction_StatePlay_o *)sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42AF26B = 1;
  }
  if ( !that )
    goto LABEL_31;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
        this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__Play_51067744(v16, name, 0LL);
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
LABEL_31:
    sub_B52A5C(this, that);
  }
  v5 = that->fields.mSimpleAnimation;
  if ( !v5 )
    goto LABEL_31;
  this = (QuestRewardBoxAction_StatePlay_o *)v5[1].monitor;
  if ( !this )
    goto LABEL_31;
  v6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__Play_16625408(v5, v6, 0LL);
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_31;
  this = (QuestRewardBoxAction_StatePlay_o *)v7[1].monitor;
  if ( !this )
    goto LABEL_31;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__get_Item(v7, v8, 0LL);
  if ( !this )
    goto LABEL_31;
  klass = this->klass;
  v11 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v14 = (__int64)(&klass[1]._1.namespaze + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v14 = sub_AEB880(this, SimpleAnimation_State_TypeInfo, 8LL, v9);
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
  __int64 v4; // x20
  UnityEngine_Object_o *monitor; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Object_o **v13; // x19
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Object_o *v15; // x8
  SimpleAnimation_o *v16; // x21
  System_String_o *name; // x0
  CommonUI_o *Instance; // x21
  System_Action_o *v19; // x0
  __int64 *v20; // x8
  UnityEngine_Object_o *v21; // x21
  UnityEngine_Object_o *v22; // x8
  UnityEngine_Animation_o *v23; // x21
  System_String_o *v24; // x0
  System_Action_o *v25; // x22

  if ( (byte_42AF26C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__);
    sub_B52984(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__);
    sub_B52984(&QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo);
    byte_42AF26C = 1;
  }
  v4 = sub_B52A54(QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo);
  QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___ctor(
    (QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *)v4,
    0LL);
  if ( !v4 )
    goto LABEL_27;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (UnityEngine_Object_o **)(v4 + 16);
  sub_B52920((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_27;
  v14 = *(UnityEngine_Object_o **)(*(_QWORD *)(v4 + 16) + 40LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  v15 = *v13;
  if ( !*v13 )
    goto LABEL_27;
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    v16 = *(SimpleAnimation_o **)&v15[1].fields.m_CachedPtr;
    if ( !v16 )
      goto LABEL_27;
    monitor = (UnityEngine_Object_o *)v16[1].monitor;
    if ( !monitor )
      goto LABEL_27;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    if ( !SimpleAnimation__IsPlaying(v16, name, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      v20 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__;
LABEL_24:
      v25 = v19;
      System_Action___ctor(v19, (Il2CppObject *)v4, *v20, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout(Instance, 2, 1.0, v25, 0LL);
        monitor = *v13;
        if ( *v13 )
        {
          QuestRewardBoxAction__SetState((QuestRewardBoxAction_o *)monitor, 0, 0LL);
          return;
        }
      }
LABEL_27:
      sub_B52A5C(monitor, v6);
    }
  }
  else
  {
    v21 = (UnityEngine_Object_o *)v15[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) != 0 )
    {
      v22 = *v13;
      if ( !*v13 )
        goto LABEL_27;
      v23 = (UnityEngine_Animation_o *)v22[1].monitor;
      if ( !v23 )
        goto LABEL_27;
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v22[1].monitor, 0LL);
      if ( !monitor )
        goto LABEL_27;
      v24 = UnityEngine_Object__get_name(monitor, 0LL);
      if ( !UnityEngine_Animation__IsPlaying(v23, v24, 0LL) )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        v20 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__;
        goto LABEL_24;
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
    sub_B52A5C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}


void __fastcall QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___update_b__1(
        QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardBoxAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B52A5C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}