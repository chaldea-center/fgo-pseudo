void __fastcall QuestRewardBoxAction___ctor(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardBoxAction__Awake(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  CStateManager_QAASpotStateController_IMapSpot__o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x21
  QuestRewardBoxAction_StateNone_o *v34; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v36; // x1
  struct CStateManager_QuestRewardBoxAction__o *v37; // x20
  QuestRewardBoxAction_StatePlay_o *v38; // x21
  const MethodInfo *v39; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v42; // x21
  UnityEngine_GameObject_o *v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6ED1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardBoxAction___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_QuestRewardBoxAction__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_QuestRewardBoxAction__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&QuestRewardBoxAction_StateNone_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&QuestRewardBoxAction_StatePlay_TypeInfo, v23, v24, v25);
    byte_42E6ED1 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v26 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_QuestRewardBoxAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v26,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2BB2630 *)Method_CStateManager_QuestRewardBoxAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardBoxAction__o *)v26;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    mFSM = this->fields.mFSM;
    v34 = (QuestRewardBoxAction_StateNone_o *)sub_B5D694(QuestRewardBoxAction_StateNone_TypeInfo);
    QuestRewardBoxAction_StateNone___ctor(v34, 0LL);
    if ( !mFSM )
      goto LABEL_23;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v34,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardBoxAction__add__);
    v37 = this->fields.mFSM;
    v38 = (QuestRewardBoxAction_StatePlay_o *)sub_B5D694(QuestRewardBoxAction_StatePlay_TypeInfo);
    QuestRewardBoxAction_StatePlay___ctor(v38, 0LL);
    if ( !v37 )
      goto LABEL_23;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v37,
      1,
      (IState_T__o *)v38,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardBoxAction__add__);
    QuestRewardBoxAction__SetState(this, 0, v39);
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
      v42 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v43 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v42,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v43, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v43, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v43, zero, 0LL);
        if ( v43 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v43,
                                                        (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v43;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v43,
              v44,
              v45,
              v46,
              v47,
              v48,
              v49);
            return;
          }
        }
LABEL_23:
        sub_B5D69C(ComponentInChildren_Dropdown_DropdownItem, v36);
      }
    }
  }
}


int32_t __fastcall QuestRewardBoxAction__GetState(QuestRewardBoxAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestRewardBoxAction_o *v4; // x19
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E6ED5 & 1) == 0 )
  {
    this = (QuestRewardBoxAction_o *)sub_B5D5C4(
                                       &Method_CStateManager_QuestRewardBoxAction__getState__,
                                       (_DWORD)method,
                                       v2,
                                       v3);
    byte_42E6ED5 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v28; // x20
  System_String_o *name; // x0
  __int64 v30; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v32; // x20
  unsigned __int64 v33; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v35; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v37; // x20
  System_String_o *v38; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v40; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v42; // x21

  if ( (byte_42E6ED4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_QuestRewardBoxAction__Play_b__19_0__, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v22, v23, v24);
    byte_42E6ED4 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B5D560(
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
    v28 = this->fields.mSimpleAnimation;
    if ( !v28 )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)v28[1].monitor;
    if ( !gameObject )
      goto LABEL_31;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v28, name, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    klass = gameObject->klass;
    v32 = gameObject;
    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v33;
        p_offset += 2;
        if ( v33 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v35 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_15:
      v35 = sub_AF54C0(gameObject, SimpleAnimation_State_TypeInfo, 8LL, v30);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v35)(v32, *(_QWORD *)(v35 + 8), 0.0);
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
      v37 = this->fields.mAnimation;
      if ( !v37 )
        goto LABEL_31;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_31;
      v38 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v37, v38, 0LL);
      if ( !gameObject )
        goto LABEL_31;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v40 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v40 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v40->static_fields->DEFAULT_FADE_TIME;
  v42 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_QuestRewardBoxAction__Play_b__19_0__, 0LL);
  if ( !Instance )
LABEL_31:
    sub_B5D69C(gameObject, v26);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v42, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardBoxAction__SetState(QuestRewardBoxAction_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x0

  if ( (byte_42E6ED6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardBoxAction__setState__, state, (_DWORD)method, v3);
    byte_42E6ED6 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_QuestRewardBoxAction__setState__);
}


void __fastcall QuestRewardBoxAction__Setup(
        QuestRewardBoxAction_o *this,
        int32_t box_type,
        bool overwrite,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  UnityEngine_Component_o *transform; // x0
  __int64 v41; // x1
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct SimpleAnimation_o *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 *v56; // x8

  if ( (byte_42E6ED3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, box_type, overwrite, method);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_17116/*"box_s_open"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_17107/*"box_g_lock"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_17112/*"box_n_lock"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_17115/*"box_s_lock"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_17111/*"box_n_base"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_17108/*"box_g_open"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_17114/*"box_s_base"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_17106/*"box_g_base"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_17113/*"box_n_open"*/, v37, v38, v39);
    byte_42E6ED3 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  v49 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      transform,
                                      (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v49;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17106/*"box_g_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17107/*"box_g_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mGoldAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v56 = &StringLiteral_17108/*"box_g_open"*/;
                  goto LABEL_34;
                }
              }
            }
          }
        }
      }
LABEL_35:
      sub_B5D69C(transform, v41);
    case 1:
      transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
      if ( transform )
      {
        UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.mBoxBaseSp;
        if ( transform )
        {
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17114/*"box_s_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17115/*"box_s_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mSilverAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v56 = &StringLiteral_17116/*"box_s_open"*/;
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
          UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17111/*"box_n_base"*/, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
          if ( transform )
          {
            UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0LL);
            transform = (UnityEngine_Component_o *)this->fields.mBoxLockSp;
            if ( transform )
            {
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_17112/*"box_n_lock"*/, 0LL);
              transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
              if ( transform )
              {
                UISprite__set_atlas((UISprite_o *)transform, this->fields.mNormalAtlas, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.mBoxOpenSp;
                if ( transform )
                {
                  v56 = &StringLiteral_17113/*"box_n_open"*/;
LABEL_34:
                  UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v56, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_QuestRewardBoxAction__o *mFSM; // x0

  if ( (byte_42E6ED2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardBoxAction__update__, (_DWORD)method, v2, v3);
    byte_42E6ED2 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_QuestRewardBoxAction__update__);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  struct SimpleAnimation_o *v11; // x19
  System_String_o *v12; // x0
  __int64 v13; // x3
  QuestRewardBoxAction_StatePlay_c *klass; // x8
  QuestRewardBoxAction_StatePlay_o *v15; // x19
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 v18; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v20; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v22; // x19
  System_String_o *v23; // x0

  if ( (byte_42E7F0F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QuestRewardBoxAction_StatePlay_o *)sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v5, v6, v7);
    byte_42E7F0F = 1;
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
    v20 = that->fields.mAnimation;
    if ( v20 )
    {
      this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__Play_51249124(v20, name, 0LL);
        v22 = that->fields.mAnimation;
        if ( v22 )
        {
          this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_clip(v22, 0LL);
          if ( this )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestRewardBoxAction_StatePlay_o *)UnityEngine_Animation__get_Item(v22, v23, 0LL);
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
    sub_B5D69C(this, that);
  }
  v9 = that->fields.mSimpleAnimation;
  if ( !v9 )
    goto LABEL_31;
  this = (QuestRewardBoxAction_StatePlay_o *)v9[1].monitor;
  if ( !this )
    goto LABEL_31;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__Play_16676044(v9, v10, 0LL);
  v11 = that->fields.mSimpleAnimation;
  if ( !v11 )
    goto LABEL_31;
  this = (QuestRewardBoxAction_StatePlay_o *)v11[1].monitor;
  if ( !this )
    goto LABEL_31;
  v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardBoxAction_StatePlay_o *)SimpleAnimation__get_Item(v11, v12, 0LL);
  if ( !this )
    goto LABEL_31;
  klass = this->klass;
  v15 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v18 = (__int64)(&klass[1]._1.namespaze + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v18 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 8LL, v13);
  }
  (*(void (__fastcall **)(QuestRewardBoxAction_StatePlay_o *, _QWORD, float))v18)(v15, *(_QWORD *)(v18 + 8), 1.0);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x20
  UnityEngine_Object_o *monitor; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o **v29; // x19
  UnityEngine_Object_o *v30; // x21
  UnityEngine_Object_o *v31; // x8
  SimpleAnimation_o *v32; // x21
  System_String_o *name; // x0
  CommonUI_o *Instance; // x21
  System_Action_o *v35; // x0
  __int64 *v36; // x8
  UnityEngine_Object_o *v37; // x21
  UnityEngine_Object_o *v38; // x8
  UnityEngine_Animation_o *v39; // x21
  System_String_o *v40; // x0
  System_Action_o *v41; // x22

  if ( (byte_42E7F10 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__, v11, v12, v13);
    sub_B5D5C4(&Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__, v14, v15, v16);
    sub_B5D5C4(&QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo, v17, v18, v19);
    byte_42E7F10 = 1;
  }
  v20 = sub_B5D694(QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_TypeInfo);
  QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___ctor(
    (QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_27;
  *(_QWORD *)(v20 + 16) = that;
  v29 = (UnityEngine_Object_o **)(v20 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)that, v23, v24, v25, v26, v27, v28);
  if ( !*(_QWORD *)(v20 + 16) )
    goto LABEL_27;
  v30 = *(UnityEngine_Object_o **)(*(_QWORD *)(v20 + 16) + 40LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
  v31 = *v29;
  if ( !*v29 )
    goto LABEL_27;
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    v32 = *(SimpleAnimation_o **)&v31[1].fields.m_CachedPtr;
    if ( !v32 )
      goto LABEL_27;
    monitor = (UnityEngine_Object_o *)v32[1].monitor;
    if ( !monitor )
      goto LABEL_27;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    if ( !SimpleAnimation__IsPlaying(v32, name, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      v36 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__0__;
LABEL_24:
      v41 = v35;
      System_Action___ctor(v35, (Il2CppObject *)v20, *v36, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout(Instance, 2, 1.0, v41, 0LL);
        monitor = *v29;
        if ( *v29 )
        {
          QuestRewardBoxAction__SetState((QuestRewardBoxAction_o *)monitor, 0, 0LL);
          return;
        }
      }
LABEL_27:
      sub_B5D69C(monitor, v22);
    }
  }
  else
  {
    v37 = (UnityEngine_Object_o *)v31[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) != 0 )
    {
      v38 = *v29;
      if ( !*v29 )
        goto LABEL_27;
      v39 = (UnityEngine_Animation_o *)v38[1].monitor;
      if ( !v39 )
        goto LABEL_27;
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v38[1].monitor, 0LL);
      if ( !monitor )
        goto LABEL_27;
      v40 = UnityEngine_Object__get_name(monitor, 0LL);
      if ( !UnityEngine_Animation__IsPlaying(v39, v40, 0LL) )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        v36 = &Method_QuestRewardBoxAction_StatePlay___c__DisplayClass1_0__update_b__1__;
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
    sub_B5D69C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}


void __fastcall QuestRewardBoxAction_StatePlay___c__DisplayClass1_0___update_b__1(
        QuestRewardBoxAction_StatePlay___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardBoxAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}