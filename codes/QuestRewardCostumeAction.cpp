void __fastcall QuestRewardCostumeAction___ctor(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction__Awake(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardCostumeAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x21
  QuestRewardCostumeAction_StateNone_o *v12; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v14; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v15; // x21
  QuestRewardCostumeAction_StatePlay_o *v16; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  QuestRewardCostumeAction_StateItemLabel_o *v18; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v19; // x20
  QuestRewardCostumeAction_StateTouchWait_o *v20; // x21
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v24; // x21
  UnityEngine_GameObject_o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43898F1 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_QuestRewardCostumeAction___ctor__);
    sub_B775C4(&Method_CStateManager_QuestRewardCostumeAction__add__);
    sub_B775C4(&CStateManager_QuestRewardCostumeAction__TypeInfo);
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&QuestRewardCostumeAction_StateItemLabel_TypeInfo);
    sub_B775C4(&QuestRewardCostumeAction_StateNone_TypeInfo);
    sub_B775C4(&QuestRewardCostumeAction_StatePlay_TypeInfo);
    sub_B775C4(&QuestRewardCostumeAction_StateTouchWait_TypeInfo);
    byte_43898F1 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B77694(CStateManager_QuestRewardCostumeAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v4,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2CBF0B0 *)Method_CStateManager_QuestRewardCostumeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardCostumeAction__o *)v4;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.mFSM, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
    mFSM = this->fields.mFSM;
    v12 = (QuestRewardCostumeAction_StateNone_o *)sub_B77694(QuestRewardCostumeAction_StateNone_TypeInfo);
    QuestRewardCostumeAction_StateNone___ctor(v12, 0LL);
    if ( !mFSM )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_2CBF17C *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v16 = (QuestRewardCostumeAction_StatePlay_o *)sub_B77694(QuestRewardCostumeAction_StatePlay_TypeInfo);
    QuestRewardCostumeAction_StatePlay___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_2CBF17C *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v18 = (QuestRewardCostumeAction_StateItemLabel_o *)sub_B77694(QuestRewardCostumeAction_StateItemLabel_TypeInfo);
    QuestRewardCostumeAction_StateItemLabel___ctor(v18, 0LL);
    if ( !v17 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_2CBF17C *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v19 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v20 = (QuestRewardCostumeAction_StateTouchWait_o *)sub_B77694(QuestRewardCostumeAction_StateTouchWait_TypeInfo);
    QuestRewardCostumeAction_StateTouchWait___ctor(v20, 0LL);
    if ( !v19 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_2CBF17C *)Method_CStateManager_QuestRewardCostumeAction__add__);
    QuestRewardCostumeAction__SetState(this, 0, v21);
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
      v24 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v24,
                                          (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v25, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v25, zero, 0LL);
        if ( v25 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v25,
                                                        (const MethodInfo_1DEC070 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v25;
            sub_B77560(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v25,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
            goto LABEL_24;
          }
        }
LABEL_28:
        sub_B7769C(ComponentInChildren_Dropdown_DropdownItem, v14);
      }
    }
  }
LABEL_24:
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
}


int32_t __fastcall QuestRewardCostumeAction__GetState(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  QuestRewardCostumeAction_o *v2; // x19
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_43898F5 & 1) == 0 )
  {
    this = (QuestRewardCostumeAction_o *)sub_B775C4(&Method_CStateManager_QuestRewardCostumeAction__getState__);
    byte_43898F5 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B7769C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardCostumeAction__Play(
        QuestRewardCostumeAction_o *this,
        System_Action_o *endAct,
        float fadeInTime,
        const MethodInfo *method)
{
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v15; // x20
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v18; // x20
  unsigned __int64 v19; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v21; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v26; // x0
  System_Action_o *v27; // x21

  if ( (byte_43898F4 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_QuestRewardCostumeAction__Play_b__14_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_43898F4 = 1;
  }
  this->fields.mEndAct = endAct;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mEndAct,
    (System_Int32_array **)endAct,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_33;
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
    v15 = this->fields.mSimpleAnimation;
    if ( !v15 )
      goto LABEL_33;
    gameObject = (UnityEngine_GameObject_o *)v15[1].monitor;
    if ( !gameObject )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v15, name, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    klass = gameObject->klass;
    v18 = gameObject;
    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v19;
        p_offset += 2;
        if ( v19 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v21 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_15:
      v21 = sub_B0F4C0(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v21)(v18, *(_QWORD *)(v21 + 8), 0.0);
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
      v23 = this->fields.mAnimation;
      if ( !v23 )
        goto LABEL_33;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v23, v24, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fadeInTime <= 0.0 )
  {
    v26 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v26 = AvalonSceneManager_TypeInfo;
    }
    fadeInTime = v26->static_fields->DEFAULT_FADE_TIME;
  }
  v27 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_QuestRewardCostumeAction__Play_b__14_0__, 0LL);
  if ( !Instance )
LABEL_33:
    sub_B7769C(gameObject, v13);
  CommonUI__maskFadein(Instance, fadeInTime, v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardCostumeAction__SetState(
        QuestRewardCostumeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x0

  if ( (byte_43898F6 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_QuestRewardCostumeAction__setState__);
    byte_43898F6 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B7769C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2CBF220 *)Method_CStateManager_QuestRewardCostumeAction__setState__);
}


void __fastcall QuestRewardCostumeAction__Setup(
        QuestRewardCostumeAction_o *this,
        int32_t imgId,
        System_String_o *itmName,
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
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v24; // x0
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_43898F3 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_11123/*"QUEST_CLEAR_COSTUME_GET"*/);
    byte_43898F3 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_26;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B77560(
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
    goto LABEL_26;
  v16 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      transform,
                                      (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v16;
  sub_B77560(
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
    goto LABEL_26;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_26;
  BYTE5(transform[4].klass) = 1;
  transform = (UnityEngine_Component_o *)this->fields.mItemSp;
  if ( !transform )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  transform = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                           gameObject,
                                           (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
  if ( !transform )
    goto LABEL_26;
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)transform, imgId, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11123/*"QUEST_CLEAR_COSTUME_GET"*/, 0LL);
  transform = (UnityEngine_Component_o *)System_String__Format(v24, (Il2CppObject *)itmName, 0LL);
  if ( !this->fields.mItemLabel )
    goto LABEL_26;
  UILabel__set_text(this->fields.mItemLabel, (System_String_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_26;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  p_mScreenTouchInfo = &this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = (UnityEngine_Component_o *)CommonUI__CreateScreeenTouchInfo(
                                               Instance,
                                               (UnityEngine_Transform_o *)transform,
                                               0,
                                               0LL);
      if ( transform )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
          Component_srcLineSprite,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        goto LABEL_23;
      }
    }
LABEL_26:
    sub_B7769C(transform, v8);
  }
LABEL_23:
  transform = (UnityEngine_Component_o *)*p_mScreenTouchInfo;
  if ( !*p_mScreenTouchInfo )
    goto LABEL_26;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
}


void __fastcall QuestRewardCostumeAction__Update(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x0

  if ( (byte_43898F2 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_QuestRewardCostumeAction__update__);
    sub_B775C4(&CTouch_TypeInfo);
    byte_43898F2 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2CBF1F8 *)Method_CStateManager_QuestRewardCostumeAction__update__);
}


void __fastcall QuestRewardCostumeAction___Play_b__14_0(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardCostumeAction__SetState(this, 1, v2);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___ctor(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel__begin(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  UnityEngine_Component_o *v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x8
  System_Int32_array **gameObject; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  float y; // s8
  float z; // s9
  ManagerConfig_c *v30; // x0
  int WIDTH; // w23
  MoveObject_o *v32; // x20
  float x; // s10
  float v34; // s11
  float v35; // s12
  System_Action_o *v36; // x21
  System_Action_o *v37; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_438B19A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__);
    sub_B775C4(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_B775C4(&QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    byte_438B19A = 1;
  }
  v4 = sub_B77694(QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___ctor(
    (QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *)v4,
    0LL);
  if ( !v4 )
    goto LABEL_12;
  *(_QWORD *)(v4 + 32) = that;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)that, v7, v8, v9, v10, v11, v12);
  v13 = *(_QWORD *)(v4 + 32);
  if ( !v13 )
    goto LABEL_12;
  v5 = *(UnityEngine_Component_o **)(v13 + 56);
  if ( !v5 )
    goto LABEL_12;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(v5, 0LL);
  *(_QWORD *)(v4 + 16) = gameObject;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 16), gameObject, v15, v16, v17, v18, v19, v20);
  v5 = *(UnityEngine_Component_o **)(v4 + 16);
  if ( !v5 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 1, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v4 + 16),
                                                (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v4 + 24) = Component_UIWidget;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 24), Component_UIWidget, v22, v23, v24, v25, v26, v27);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0LL);
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v30 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v30 = ManagerConfig_TypeInfo;
  }
  WIDTH = v30->static_fields->WIDTH;
  v39 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0LL);
  v32 = *(MoveObject_o **)(v4 + 24);
  x = v39.fields.x;
  v34 = v39.fields.y;
  v35 = v39.fields.z;
  v36 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v4,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v37 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v4,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v32 )
LABEL_12:
    sub_B7769C(v5, v6);
  v40.fields.x = (float)WIDTH;
  v40.fields.y = y;
  v40.fields.z = z;
  v41.fields.x = x;
  v41.fields.y = v34;
  v41.fields.z = v35;
  MoveObject__Play(v32, v40, v41, 0.25, v36, v37, 0.0, 17, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel__end(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateItemLabel__update(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___ctor(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___begin_b__0(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_B7769C(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardCostumeAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B7769C(0LL, method);
  QuestRewardCostumeAction__SetState(that, 3, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateNone___ctor(
        QuestRewardCostumeAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateNone__begin(
        QuestRewardCostumeAction_StateNone_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateNone__end(
        QuestRewardCostumeAction_StateNone_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateNone__update(
        QuestRewardCostumeAction_StateNone_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StatePlay___ctor(
        QuestRewardCostumeAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StatePlay__begin(
        QuestRewardCostumeAction_StatePlay_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  QuestRewardCostumeAction_StatePlay_o *v4; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v6; // x21
  System_String_o *v7; // x0
  struct SimpleAnimation_o *v8; // x21
  System_String_o *v9; // x0
  System_Int32_array **v10; // x0
  BattleServantConfConponent_o *p_mSimpleAnimState; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleServantConfConponent_c *klass; // x21
  _QWORD *image; // x8
  unsigned __int64 v20; // x10
  SimpleAnimation_State_c **v21; // x11
  __int64 v22; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v24; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v26; // x21
  System_String_o *v27; // x0
  System_Int32_array **Item; // x0
  BattleServantConfConponent_o *p_fields; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  BattleServantConfConponent_c *v36; // x20
  _QWORD *v37; // x8
  unsigned __int64 v38; // x10
  SimpleAnimation_State_c **v39; // x11
  __int64 v40; // x0

  v4 = this;
  if ( (byte_438B19B & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardCostumeAction_StatePlay_o *)sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438B19B = 1;
  }
  if ( !that )
    goto LABEL_40;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_38;
    v24 = that->fields.mAnimation;
    if ( v24 )
    {
      this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__Play_51745976(v24, name, 0LL);
        v26 = that->fields.mAnimation;
        if ( v26 )
        {
          this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( this )
          {
            v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            Item = (System_Int32_array **)UnityEngine_Animation__get_Item(v26, v27, 0LL);
            v4->fields.mAnimState = (struct UnityEngine_AnimationState_o *)Item;
            p_fields = (BattleServantConfConponent_o *)&v4->fields;
            sub_B77560(p_fields, Item, v30, v31, v32, v33, v34, v35);
            this = (QuestRewardCostumeAction_StatePlay_o *)p_fields->klass;
            if ( p_fields->klass )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              this = (QuestRewardCostumeAction_StatePlay_o *)p_fields->klass;
              if ( p_fields->klass )
              {
                UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
                goto LABEL_38;
              }
            }
          }
        }
      }
    }
LABEL_40:
    sub_B7769C(this, that);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_40;
  this = (QuestRewardCostumeAction_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_40;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardCostumeAction_StatePlay_o *)SimpleAnimation__Play_16815192(v6, v7, 0LL);
  v8 = that->fields.mSimpleAnimation;
  if ( !v8 )
    goto LABEL_40;
  this = (QuestRewardCostumeAction_StatePlay_o *)v8[1].monitor;
  if ( !this )
    goto LABEL_40;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v10 = (System_Int32_array **)SimpleAnimation__get_Item(v8, v9, 0LL);
  v4->fields.mSimpleAnimState = (struct SimpleAnimation_State_o *)v10;
  p_mSimpleAnimState = (BattleServantConfConponent_o *)&v4->fields.mSimpleAnimState;
  sub_B77560(p_mSimpleAnimState, v10, v12, v13, v14, v15, v16, v17);
  klass = p_mSimpleAnimState->klass;
  if ( !p_mSimpleAnimState->klass )
    goto LABEL_40;
  image = klass->_1.image;
  if ( *((_WORD *)klass->_1.image + 149) )
  {
    v20 = 0LL;
    v21 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v20;
      v21 += 2;
      if ( v20 >= *((unsigned __int16 *)klass->_1.image + 149) )
        goto LABEL_17;
    }
    v22 = (__int64)&image[2 * *(_DWORD *)v21 + 51];
  }
  else
  {
LABEL_17:
    v22 = sub_B0F4C0(p_mSimpleAnimState->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardCostumeAction_StatePlay_o *)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD, float))v22)(
                                                   klass,
                                                   *(_QWORD *)(v22 + 8),
                                                   0.0);
  v36 = p_mSimpleAnimState->klass;
  if ( !v36 )
    goto LABEL_40;
  v37 = v36->_1.image;
  if ( *((_WORD *)v36->_1.image + 149) )
  {
    v38 = 0LL;
    v39 = (SimpleAnimation_State_c **)(v37[22] + 8LL);
    while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v38;
      v39 += 2;
      if ( v38 >= *((unsigned __int16 *)v36->_1.image + 149) )
        goto LABEL_35;
    }
    v40 = (__int64)&v37[2 * *(_DWORD *)v39 + 55];
  }
  else
  {
LABEL_35:
    v40 = sub_B0F4C0(v36, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(BattleServantConfConponent_c *, _QWORD, float))v40)(v36, *(_QWORD *)(v40 + 8), 1.0);
LABEL_38:
  this = (QuestRewardCostumeAction_StatePlay_o *)that->fields.mAppearEffObj;
  if ( !this )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall QuestRewardCostumeAction_StatePlay__end(
        QuestRewardCostumeAction_StatePlay_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StatePlay__update(
        QuestRewardCostumeAction_StatePlay_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v8; // x20
  System_String_o *v9; // x0

  if ( (byte_438B19C & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardCostumeAction_StatePlay_o *)sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438B19C = 1;
  }
  if ( !that )
    goto LABEL_23;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mSimpleAnimation;
    if ( !v5 )
      goto LABEL_23;
    this = (QuestRewardCostumeAction_StatePlay_o *)v5[1].monitor;
    if ( !this )
      goto LABEL_23;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v5, name, 0LL) )
      return;
LABEL_19:
    this = (QuestRewardCostumeAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardCostumeAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B7769C(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = that->fields.mAnimation;
    if ( !v8 )
      goto LABEL_23;
    this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !this )
      goto LABEL_23;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v8, v9, 0LL) )
      return;
    goto LABEL_19;
  }
}


void __fastcall QuestRewardCostumeAction_StateTouchWait___ctor(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateTouchWait__begin(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (QuestRewardCostumeAction_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0LL
    || (this = (QuestRewardCostumeAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL)) == 0LL )
  {
    sub_B7769C(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateTouchWait__end(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardCostumeAction_StateTouchWait__update(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x19
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x22

  if ( (byte_438B19D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_B775C4(&QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_438B19D = 1;
  }
  v4 = sub_B77694(QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0___ctor(
    (QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_o *)v4,
    0LL);
  if ( !v4 )
    goto LABEL_21;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)that, v7, v8, v9, v10, v11, v12);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v13 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v13 + 88LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v15 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v15 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
          v17 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(
            v17,
            (Il2CppObject *)v4,
            Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v13;
            if ( *(_QWORD *)v13 )
            {
              QuestRewardCostumeAction__SetState((QuestRewardCostumeAction_o *)isTouchPush, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B7769C(isTouchPush, v6);
  }
}


void __fastcall QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0___ctor(
        QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardCostumeAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B7769C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}