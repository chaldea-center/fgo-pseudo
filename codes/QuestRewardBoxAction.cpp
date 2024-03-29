void __fastcall QuestRewardBoxAction___ctor(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardBoxAction__Awake(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  QuestRewardBoxAction_StateNone_o *v21; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  struct CStateManager_QuestRewardBoxAction__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  QuestRewardBoxAction_StatePlay_o *v26; // x21
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v30; // x21
  UnityEngine_GameObject_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217CDE & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardBoxAction___ctor__, method);
    sub_B0D8A4(&Method_CStateManager_QuestRewardBoxAction__add__, v4);
    sub_B0D8A4(&CStateManager_QuestRewardBoxAction__TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v6);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&QuestRewardBoxAction_StateNone_TypeInfo, v9);
    sub_B0D8A4(&QuestRewardBoxAction_StatePlay_TypeInfo, v10);
    byte_4217CDE = 1;
  }
  if ( !this->fields.mFSM )
  {
    v11 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(
                                                                CStateManager_QuestRewardBoxAction__TypeInfo,
                                                                method,
                                                                v2);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v11,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2AAF784 *)Method_CStateManager_QuestRewardBoxAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardBoxAction__o *)v11;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    mFSM = this->fields.mFSM;
    v21 = (QuestRewardBoxAction_StateNone_o *)sub_B0D974(QuestRewardBoxAction_StateNone_TypeInfo, v19, v20);
    QuestRewardBoxAction_StateNone___ctor(v21, 0LL);
    if ( !mFSM )
      goto LABEL_23;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v21,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardBoxAction__add__);
    v23 = this->fields.mFSM;
    v26 = (QuestRewardBoxAction_StatePlay_o *)sub_B0D974(QuestRewardBoxAction_StatePlay_TypeInfo, v24, v25);
    QuestRewardBoxAction_StatePlay___ctor(v26, 0LL);
    if ( !v23 )
      goto LABEL_23;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v23,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardBoxAction__add__);
    QuestRewardBoxAction__SetState(this, 0, v27);
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
      v30 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v31 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v30,
                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v31, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v31, zero, 0LL);
        if ( v31 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v31,
                                                        (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v31;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v31,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37);
            return;
          }
        }
LABEL_23:
        sub_B0D97C(ComponentInChildren_Dropdown_DropdownItem);
      }
    }
  }
}


int32_t __fastcall QuestRewardBoxAction__GetState(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  QuestRewardBoxAction_o *v2; // x19
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4217CE2 & 1) == 0 )
  {
    this = (QuestRewardBoxAction_o *)sub_B0D8A4(&Method_CStateManager_QuestRewardBoxAction__getState__, method);
    byte_4217CE2 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(this);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v17; // x20
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v20; // x20
  unsigned __int64 v21; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v23; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v25; // x20
  System_String_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v30; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_4217CE1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, end_act);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&Method_QuestRewardBoxAction__Play_b__19_0__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v14);
    byte_4217CE1 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B0D840(
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
    v17 = this->fields.mSimpleAnimation;
    if ( !v17 )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)v17[1].monitor;
    if ( !gameObject )
      goto LABEL_31;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v17, name, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    klass = gameObject->klass;
    v20 = gameObject;
    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v21;
        p_offset += 2;
        if ( v21 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v23 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_15:
      v23 = sub_AA67A0(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v23)(v20, *(_QWORD *)(v23 + 8), 0.0);
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
      v25 = this->fields.mAnimation;
      if ( !v25 )
        goto LABEL_31;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_31;
      v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v25, v26, 0LL);
      if ( !gameObject )
        goto LABEL_31;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v30 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_QuestRewardBoxAction__Play_b__19_0__, 0LL);
  if ( !Instance )
LABEL_31:
    sub_B0D97C(gameObject);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardBoxAction__SetState(QuestRewardBoxAction_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x0

  if ( (byte_4217CE3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardBoxAction__setState__, *(_QWORD *)&state);
    byte_4217CE3 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2AAF8F4 *)Method_CStateManager_QuestRewardBoxAction__setState__);
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
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct SimpleAnimation_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 *v33; // x8

  if ( (byte_4217CE0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&box_type);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v8);
    sub_B0D8A4(&StringLiteral_16959/*"box_s_open"*/, v9);
    sub_B0D8A4(&StringLiteral_16950/*"box_g_lock"*/, v10);
    sub_B0D8A4(&StringLiteral_16955/*"box_n_lock"*/, v11);
    sub_B0D8A4(&StringLiteral_16958/*"box_s_lock"*/, v12);
    sub_B0D8A4(&StringLiteral_16954/*"box_n_base"*/, v13);
    sub_B0D8A4(&StringLiteral_16951/*"box_g_open"*/, v14);
    sub_B0D8A4(&StringLiteral_16957/*"box_s_base"*/, v15);
    sub_B0D8A4(&StringLiteral_16949/*"box_g_base"*/, v16);
    sub_B0D8A4(&StringLiteral_16956/*"box_n_open"*/, v17);
    byte_4217CE0 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  v26 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      transform,
                                      (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v26;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_16949/*"box_g_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_16950/*"box_g_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v33 = &StringLiteral_16951/*"box_g_open"*/;
                  goto LABEL_34;
                }
              }
            }
          }
        }
      }
LABEL_35:
      sub_B0D97C(transform);
    case 1:
      transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
      if ( transform )
      {
        UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
        if ( transform )
        {
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_16957/*"box_s_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_16958/*"box_s_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v33 = &StringLiteral_16959/*"box_s_open"*/;
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
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_16954/*"box_n_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_16955/*"box_n_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v33 = &StringLiteral_16956/*"box_n_open"*/;
LABEL_34:
                  UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v33, 0LL);
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

  if ( (byte_4217CDF & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardBoxAction__update__, method);
    byte_4217CDF = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2AAF8CC *)Method_CStateManager_QuestRewardBoxAction__update__);
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
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 v14; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v18; // x19
  System_String_o *v19; // x0

  if ( (byte_42124EB & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardBoxAction_StatePlay_o *)sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v4);
    byte_42124EB = 1;
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
        this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__Play_50564840(v16, name, 0LL);
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
    sub_B0D97C(this);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_31;
  this = (QuestRewardBoxAction_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_31;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__Play_50482404(v6, v7, 0LL);
  v8 = that->fields.mSimpleAnimation;
  if ( !v8 )
    goto LABEL_31;
  this = (QuestRewardBoxAction_StatePlay_o *)v8[1].monitor;
  if ( !this )
    goto LABEL_31;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__get_Item(v8, v9, 0LL);
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
    v14 = sub_AA67A0(this, SimpleAnimation_State_TypeInfo, 8LL);
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
  QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *v9; // x20
  UnityEngine_Object_o *monitor; // x0
  QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_Fields *p_fields; // x19
  UnityEngine_Object_o *mSimpleAnimation; // x21
  UnityEngine_Object_o *v13; // x8
  SimpleAnimation_o *v14; // x21
  System_String_o *name; // x0
  CommonUI_o *Instance; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x0
  __int64 *v20; // x8
  UnityEngine_Object_o *v21; // x21
  struct QuestRewardBoxAction_o *v22; // x8
  UnityEngine_Animation_o *mAnimation; // x21
  System_String_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x22

  if ( (byte_42124EC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__, v6);
    sub_B0D8A4(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__, v7);
    sub_B0D8A4(&QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo, v8);
    byte_42124EC = 1;
  }
  v9 = (QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *)sub_B0D974(
                                                                  QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo,
                                                                  that,
                                                                  method);
  QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_27;
  v9->fields.that = that;
  p_fields = &v9->fields;
  sub_B0D840(&v9->fields, that);
  if ( !v9->fields.that )
    goto LABEL_27;
  mSimpleAnimation = (UnityEngine_Object_o *)v9->fields.that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  v13 = (UnityEngine_Object_o *)p_fields->that;
  if ( !p_fields->that )
    goto LABEL_27;
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    v14 = *(SimpleAnimation_o **)&v13[1].fields.m_CachedPtr;
    if ( !v14 )
      goto LABEL_27;
    monitor = (UnityEngine_Object_o *)v14[1].monitor;
    if ( !monitor )
      goto LABEL_27;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    if ( !SimpleAnimation__IsPlaying(v14, name, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
      v20 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__;
LABEL_24:
      v27 = v19;
      System_Action___ctor(v19, (Il2CppObject *)v9, *v20, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout(Instance, 2, 1.0, v27, 0LL);
        monitor = (UnityEngine_Object_o *)p_fields->that;
        if ( p_fields->that )
        {
          QuestRewardBoxAction__SetState((QuestRewardBoxAction_o *)monitor, 0, 0LL);
          return;
        }
      }
LABEL_27:
      sub_B0D97C(monitor);
    }
  }
  else
  {
    v21 = (UnityEngine_Object_o *)v13[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) != 0 )
    {
      v22 = p_fields->that;
      if ( !p_fields->that )
        goto LABEL_27;
      mAnimation = v22->fields.mAnimation;
      if ( !mAnimation )
        goto LABEL_27;
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v22->fields.mAnimation, 0LL);
      if ( !monitor )
        goto LABEL_27;
      v24 = UnityEngine_Object__get_name(monitor, 0LL);
      if ( !UnityEngine_Animation__IsPlaying(mAnimation, v24, 0LL) )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26);
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
    sub_B0D97C(this);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}


void __fastcall QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___update_b__1(
        QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardBoxAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B0D97C(this);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}