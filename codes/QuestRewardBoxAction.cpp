void __fastcall QuestRewardBoxAction___ctor(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardBoxAction__Awake(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  QuestRewardBoxAction_StateNone_o *v25; // x22
  struct CStateManager_QuestRewardBoxAction__o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  QuestRewardBoxAction_StatePlay_o *v31; // x21
  const MethodInfo *v32; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v35; // x21
  UnityEngine_GameObject_o *v36; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD5DF & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardBoxAction___ctor__, method);
    sub_B16FFC(&Method_CStateManager_QuestRewardBoxAction__add__, v6);
    sub_B16FFC(&CStateManager_QuestRewardBoxAction__TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&QuestRewardBoxAction_StateNone_TypeInfo, v11);
    sub_B16FFC(&QuestRewardBoxAction_StatePlay_TypeInfo, v12);
    byte_40FD5DF = 1;
  }
  if ( !this->fields.mFSM )
  {
    v13 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_QuestRewardBoxAction__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v13,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2907EF0 *)Method_CStateManager_QuestRewardBoxAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardBoxAction__o *)v13;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    mFSM = this->fields.mFSM;
    v25 = (QuestRewardBoxAction_StateNone_o *)sub_B170CC(QuestRewardBoxAction_StateNone_TypeInfo, v21, v22, v23, v24);
    QuestRewardBoxAction_StateNone___ctor(v25, 0LL);
    if ( !mFSM )
      goto LABEL_23;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v25,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardBoxAction__add__);
    v26 = this->fields.mFSM;
    v31 = (QuestRewardBoxAction_StatePlay_o *)sub_B170CC(QuestRewardBoxAction_StatePlay_TypeInfo, v27, v28, v29, v30);
    QuestRewardBoxAction_StatePlay___ctor(v31, 0LL);
    if ( !v26 )
      goto LABEL_23;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v26,
      1,
      (IState_T__o *)v31,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardBoxAction__add__);
    QuestRewardBoxAction__SetState(this, 0, v32);
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
      v35 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v36 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v35,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v36, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v36, zero, 0LL);
        if ( v36 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v36,
                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v36;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v36,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43);
            return;
          }
        }
LABEL_23:
        sub_B170D4();
      }
    }
  }
}


int32_t __fastcall QuestRewardBoxAction__GetState(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x8

  if ( (byte_40FD5E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardBoxAction__getState__, method);
    byte_40FD5E3 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
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
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v22; // x20
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v27; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *v29; // x0
  UnityEngine_AnimationState_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v36; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v38; // x21

  if ( (byte_40FD5E2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, end_act);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_QuestRewardBoxAction__Play_b__19_0__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v14);
    byte_40FD5E2 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B16F98(
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
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    v17 = this->fields.mSimpleAnimation;
    if ( !v17 )
      goto LABEL_31;
    monitor = (UnityEngine_Object_o *)v17[1].monitor;
    if ( !monitor )
      goto LABEL_31;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    Item = SimpleAnimation__get_Item(v17, name, 0LL);
    if ( !Item )
      goto LABEL_31;
    klass = Item->klass;
    v22 = Item;
    if ( *(_WORD *)&Item->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v23;
        p_offset += 2;
        if ( v23 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
    }
    else
    {
LABEL_15:
      p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v22, *(_QWORD *)(p_method + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
    {
      v27 = this->fields.mAnimation;
      if ( !v27 )
        goto LABEL_31;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !clip )
        goto LABEL_31;
      v29 = UnityEngine_Object__get_name(clip, 0LL);
      v30 = UnityEngine_Animation__get_Item(v27, v29, 0LL);
      if ( !v30 )
        goto LABEL_31;
      UnityEngine_AnimationState__set_speed(v30, 0.0, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v36 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v36 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
  v38 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_QuestRewardBoxAction__Play_b__19_0__, 0LL);
  if ( !Instance )
LABEL_31:
    sub_B170D4();
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v38, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardBoxAction__SetState(QuestRewardBoxAction_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x0

  if ( (byte_40FD5E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardBoxAction__setState__, *(_QWORD *)&state);
    byte_40FD5E4 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_QuestRewardBoxAction__setState__);
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
  UnityEngine_Component_o *v26; // x0
  struct SimpleAnimation_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Component_o *v34; // x0
  UIWidget_o *v35; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v37; // x0
  UISprite_o *v38; // x0
  UISprite_o *v39; // x0
  UISprite_o *v40; // x0
  UISprite_o *v41; // x0
  UISprite_o *v42; // x0
  __int64 *v43; // x8
  UISprite_o *mBoxBaseSp; // x0
  UISprite_o *v45; // x0
  UISprite_o *mBoxLockSp; // x0
  UISprite_o *v47; // x0
  UISprite_o *mBoxOpenSp; // x0
  UISprite_o *v49; // x0
  UISprite_o *v50; // x0
  UISprite_o *v51; // x0
  UISprite_o *v52; // x0
  UISprite_o *v53; // x0

  if ( (byte_40FD5E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&box_type);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v8);
    sub_B16FFC(&StringLiteral_16843/*"box_s_open"*/, v9);
    sub_B16FFC(&StringLiteral_16834/*"box_g_lock"*/, v10);
    sub_B16FFC(&StringLiteral_16839/*"box_n_lock"*/, v11);
    sub_B16FFC(&StringLiteral_16842/*"box_s_lock"*/, v12);
    sub_B16FFC(&StringLiteral_16838/*"box_n_base"*/, v13);
    sub_B16FFC(&StringLiteral_16835/*"box_g_open"*/, v14);
    sub_B16FFC(&StringLiteral_16841/*"box_s_base"*/, v15);
    sub_B16FFC(&StringLiteral_16833/*"box_g_base"*/, v16);
    sub_B16FFC(&StringLiteral_16840/*"box_n_open"*/, v17);
    byte_40FD5E1 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v26 )
    goto LABEL_35;
  v27 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      v26,
                                      (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v34 )
    goto LABEL_35;
  v35 = UnityEngine_Component__GetComponentInChildren_UIWidget_(
          v34,
          (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !v35 )
    goto LABEL_35;
  *(&v35->fields.mAnchorsCached + 5) = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( overwrite )
    return;
  switch ( box_type )
  {
    case 2:
      mBoxBaseSp = this->fields.mBoxBaseSp;
      if ( mBoxBaseSp )
      {
        UISprite__set_atlas(mBoxBaseSp, this->fields.mGoldAtlas, 0LL);
        v45 = this->fields.mBoxBaseSp;
        if ( v45 )
        {
          UISprite__set_spriteName(v45, (System_String_o *)StringLiteral_16833/*"box_g_base"*/, 0LL);
          mBoxLockSp = this->fields.mBoxLockSp;
          if ( mBoxLockSp )
          {
            UISprite__set_atlas(mBoxLockSp, this->fields.mGoldAtlas, 0LL);
            v47 = this->fields.mBoxLockSp;
            if ( v47 )
            {
              UISprite__set_spriteName(v47, (System_String_o *)StringLiteral_16834/*"box_g_lock"*/, 0LL);
              mBoxOpenSp = this->fields.mBoxOpenSp;
              if ( mBoxOpenSp )
              {
                UISprite__set_atlas(mBoxOpenSp, this->fields.mGoldAtlas, 0LL);
                v42 = this->fields.mBoxOpenSp;
                if ( v42 )
                {
                  v43 = &StringLiteral_16835/*"box_g_open"*/;
                  goto LABEL_34;
                }
              }
            }
          }
        }
      }
LABEL_35:
      sub_B170D4();
    case 1:
      v49 = this->fields.mBoxBaseSp;
      if ( v49 )
      {
        UISprite__set_atlas(v49, this->fields.mSilverAtlas, 0LL);
        v50 = this->fields.mBoxBaseSp;
        if ( v50 )
        {
          UISprite__set_spriteName(v50, (System_String_o *)StringLiteral_16841/*"box_s_base"*/, 0LL);
          v51 = this->fields.mBoxLockSp;
          if ( v51 )
          {
            UISprite__set_atlas(v51, this->fields.mSilverAtlas, 0LL);
            v52 = this->fields.mBoxLockSp;
            if ( v52 )
            {
              UISprite__set_spriteName(v52, (System_String_o *)StringLiteral_16842/*"box_s_lock"*/, 0LL);
              v53 = this->fields.mBoxOpenSp;
              if ( v53 )
              {
                UISprite__set_atlas(v53, this->fields.mSilverAtlas, 0LL);
                v42 = this->fields.mBoxOpenSp;
                if ( v42 )
                {
                  v43 = &StringLiteral_16843/*"box_s_open"*/;
                  goto LABEL_34;
                }
              }
            }
          }
        }
      }
      goto LABEL_35;
    case 0:
      v37 = this->fields.mBoxBaseSp;
      if ( v37 )
      {
        UISprite__set_atlas(v37, this->fields.mNormalAtlas, 0LL);
        v38 = this->fields.mBoxBaseSp;
        if ( v38 )
        {
          UISprite__set_spriteName(v38, (System_String_o *)StringLiteral_16838/*"box_n_base"*/, 0LL);
          v39 = this->fields.mBoxLockSp;
          if ( v39 )
          {
            UISprite__set_atlas(v39, this->fields.mNormalAtlas, 0LL);
            v40 = this->fields.mBoxLockSp;
            if ( v40 )
            {
              UISprite__set_spriteName(v40, (System_String_o *)StringLiteral_16839/*"box_n_lock"*/, 0LL);
              v41 = this->fields.mBoxOpenSp;
              if ( v41 )
              {
                UISprite__set_atlas(v41, this->fields.mNormalAtlas, 0LL);
                v42 = this->fields.mBoxOpenSp;
                if ( v42 )
                {
                  v43 = &StringLiteral_16840/*"box_n_open"*/;
LABEL_34:
                  UISprite__set_spriteName(v42, (System_String_o *)*v43, 0LL);
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

  if ( (byte_40FD5E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardBoxAction__update__, method);
    byte_40FD5E0 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_QuestRewardBoxAction__update__);
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
  UnityEngine_Object_o *monitor; // x0
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x19
  UnityEngine_Object_o *v10; // x0
  System_String_o *v11; // x0
  SimpleAnimation_State_o *v12; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x19
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v19; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  UnityEngine_Animation_o *v22; // x19
  UnityEngine_Object_o *v23; // x0
  System_String_o *v24; // x0
  UnityEngine_AnimationState_o *Item; // x0

  if ( (byte_40FA31F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v4);
    byte_40FA31F = 1;
  }
  if ( !that )
    goto LABEL_31;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
      return;
    v19 = that->fields.mAnimation;
    if ( v19 )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        UnityEngine_Animation__Play_49744236(v19, name, 0LL);
        v22 = that->fields.mAnimation;
        if ( v22 )
        {
          v23 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v22, 0LL);
          if ( v23 )
          {
            v24 = UnityEngine_Object__get_name(v23, 0LL);
            Item = UnityEngine_Animation__get_Item(v22, v24, 0LL);
            if ( Item )
            {
              UnityEngine_AnimationState__set_speed(Item, 1.0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_31:
    sub_B170D4();
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_31;
  monitor = (UnityEngine_Object_o *)v6[1].monitor;
  if ( !monitor )
    goto LABEL_31;
  v8 = UnityEngine_Object__get_name(monitor, 0LL);
  SimpleAnimation__Play_16380456(v6, v8, 0LL);
  v9 = that->fields.mSimpleAnimation;
  if ( !v9 )
    goto LABEL_31;
  v10 = (UnityEngine_Object_o *)v9[1].monitor;
  if ( !v10 )
    goto LABEL_31;
  v11 = UnityEngine_Object__get_name(v10, 0LL);
  v12 = SimpleAnimation__get_Item(v9, v11, 0LL);
  if ( !v12 )
    goto LABEL_31;
  klass = v12->klass;
  v14 = v12;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      p_offset += 2;
      if ( v15 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
  }
  else
  {
LABEL_17:
    p_method = sub_AAFEF8(v12, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v14, *(_QWORD *)(p_method + 8), 1.0);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  QuestRewardBoxAction_o **v18; // x19
  UnityEngine_Object_o *v19; // x21
  bool v20; // w0
  QuestRewardBoxAction_o *v21; // x8
  SimpleAnimation_o *mSimpleAnimation; // x21
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  CommonUI_o *Instance; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Action_o *v30; // x0
  __int64 *v31; // x8
  UnityEngine_Object_o *mAnimation; // x21
  QuestRewardBoxAction_o *v33; // x8
  UnityEngine_Animation_o *v34; // x21
  UnityEngine_Object_o *clip; // x0
  System_String_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_o *v41; // x22

  if ( (byte_40FA320 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__, v8);
    sub_B16FFC(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__, v9);
    sub_B16FFC(&QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo, v10);
    byte_40FA320 = 1;
  }
  v11 = sub_B170CC(QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___ctor(
    (QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_27;
  *(_QWORD *)(v11 + 16) = that;
  v18 = (QuestRewardBoxAction_o **)(v11 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)that, v12, v13, v14, v15, v16, v17);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_27;
  v19 = *(UnityEngine_Object_o **)(*(_QWORD *)(v11 + 16) + 40LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
  v21 = *v18;
  if ( !*v18 )
    goto LABEL_27;
  if ( v20 )
  {
    mSimpleAnimation = v21->fields.mSimpleAnimation;
    if ( !mSimpleAnimation )
      goto LABEL_27;
    monitor = (UnityEngine_Object_o *)mSimpleAnimation[1].monitor;
    if ( !monitor )
      goto LABEL_27;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    if ( !SimpleAnimation__IsPlaying(mSimpleAnimation, name, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
      v31 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__;
LABEL_24:
      v41 = v30;
      System_Action___ctor(v30, (Il2CppObject *)v11, *v31, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout(Instance, 2, 1.0, v41, 0LL);
        if ( *v18 )
        {
          QuestRewardBoxAction__SetState(*v18, 0, 0LL);
          return;
        }
      }
LABEL_27:
      sub_B170D4();
    }
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)v21->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
    {
      v33 = *v18;
      if ( !*v18 )
        goto LABEL_27;
      v34 = v33->fields.mAnimation;
      if ( !v34 )
        goto LABEL_27;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v33->fields.mAnimation, 0LL);
      if ( !clip )
        goto LABEL_27;
      v36 = UnityEngine_Object__get_name(clip, 0LL);
      if ( !UnityEngine_Animation__IsPlaying(v34, v36, 0LL) )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
        v31 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__;
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
    sub_B170D4();
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}


void __fastcall QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___update_b__1(
        QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardBoxAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B170D4();
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}