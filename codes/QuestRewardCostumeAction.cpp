void __fastcall QuestRewardCostumeAction___ctor(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction__Awake(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct CStateManager_QuestRewardCostumeAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x21
  QuestRewardCostumeAction_StateNone_o *v22; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v24; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v25; // x21
  QuestRewardCostumeAction_StatePlay_o *v26; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v27; // x21
  QuestRewardCostumeAction_StateItemLabel_o *v28; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v29; // x20
  QuestRewardCostumeAction_StateTouchWait_o *v30; // x21
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v34; // x21
  UnityEngine_GameObject_o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418AF69 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestRewardCostumeAction___ctor__, method);
    sub_B2C35C(&Method_CStateManager_QuestRewardCostumeAction__add__, v3);
    sub_B2C35C(&CStateManager_QuestRewardCostumeAction__TypeInfo, v4);
    sub_B2C35C(&CTouch_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&QuestRewardCostumeAction_StateItemLabel_TypeInfo, v9);
    sub_B2C35C(&QuestRewardCostumeAction_StateNone_TypeInfo, v10);
    sub_B2C35C(&QuestRewardCostumeAction_StatePlay_TypeInfo, v11);
    sub_B2C35C(&QuestRewardCostumeAction_StateTouchWait_TypeInfo, v12);
    byte_418AF69 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v14 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_QuestRewardCostumeAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v14,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2A08354 *)Method_CStateManager_QuestRewardCostumeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardCostumeAction__o *)v14;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    mFSM = this->fields.mFSM;
    v22 = (QuestRewardCostumeAction_StateNone_o *)sub_B2C42C(QuestRewardCostumeAction_StateNone_TypeInfo);
    QuestRewardCostumeAction_StateNone___ctor(v22, 0LL);
    if ( !mFSM )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v22,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v25 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v26 = (QuestRewardCostumeAction_StatePlay_o *)sub_B2C42C(QuestRewardCostumeAction_StatePlay_TypeInfo);
    QuestRewardCostumeAction_StatePlay___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v25,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v27 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v28 = (QuestRewardCostumeAction_StateItemLabel_o *)sub_B2C42C(QuestRewardCostumeAction_StateItemLabel_TypeInfo);
    QuestRewardCostumeAction_StateItemLabel___ctor(v28, 0LL);
    if ( !v27 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v27,
      2,
      (IState_T__o *)v28,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v29 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v30 = (QuestRewardCostumeAction_StateTouchWait_o *)sub_B2C42C(QuestRewardCostumeAction_StateTouchWait_TypeInfo);
    QuestRewardCostumeAction_StateTouchWait___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v29,
      3,
      (IState_T__o *)v30,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    QuestRewardCostumeAction__SetState(this, 0, v31);
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
      v34 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v35 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v34,
                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v35, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v35, zero, 0LL);
        if ( v35 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v35,
                                                        (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v35;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v35,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41);
            goto LABEL_24;
          }
        }
LABEL_28:
        sub_B2C434(ComponentInChildren_Dropdown_DropdownItem, v24);
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
  if ( (byte_418AF6D & 1) == 0 )
  {
    this = (QuestRewardCostumeAction_o *)sub_B2C35C(&Method_CStateManager_QuestRewardCostumeAction__getState__, method);
    byte_418AF6D = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v20; // x20
  System_String_o *name; // x0
  __int64 v22; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v24; // x20
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v27; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v29; // x20
  System_String_o *v30; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v32; // x0
  System_Action_o *v33; // x21

  if ( (byte_418AF6C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, endAct);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&Method_QuestRewardCostumeAction__Play_b__14_0__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v16);
    byte_418AF6C = 1;
  }
  this->fields.mEndAct = endAct;
  sub_B2C2F8(
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
    v20 = this->fields.mSimpleAnimation;
    if ( !v20 )
      goto LABEL_33;
    gameObject = (UnityEngine_GameObject_o *)v20[1].monitor;
    if ( !gameObject )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v20, name, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    klass = gameObject->klass;
    v24 = gameObject;
    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v25;
        p_offset += 2;
        if ( v25 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v27 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_15:
      v27 = sub_AC5258(gameObject, SimpleAnimation_State_TypeInfo, 8LL, v22);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v27)(v24, *(_QWORD *)(v27 + 8), 0.0);
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
      v29 = this->fields.mAnimation;
      if ( !v29 )
        goto LABEL_33;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      v30 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v29, v30, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fadeInTime <= 0.0 )
  {
    v32 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v32 = AvalonSceneManager_TypeInfo;
    }
    fadeInTime = v32->static_fields->DEFAULT_FADE_TIME;
  }
  v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_QuestRewardCostumeAction__Play_b__14_0__, 0LL);
  if ( !Instance )
LABEL_33:
    sub_B2C434(gameObject, v18);
  CommonUI__maskFadein(Instance, fadeInTime, v33, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardCostumeAction__SetState(
        QuestRewardCostumeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x0

  if ( (byte_418AF6E & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestRewardCostumeAction__setState__, *(_QWORD *)&state);
    byte_418AF6E = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_QuestRewardCostumeAction__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardCostumeAction__Setup(
        QuestRewardCostumeAction_o *this,
        int32_t imgId,
        System_String_o *itmName,
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
  UnityEngine_Component_o *transform; // x0
  __int64 v16; // x1
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct SimpleAnimation_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v32; // x0
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_418AF6B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&imgId);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v8);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B2C35C(&StringLiteral_10913/*"QUEST_CLEAR_COSTUME_GET"*/, v14);
    byte_418AF6B = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_26;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_26;
  v24 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      transform,
                                      (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_26;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_26;
  BYTE5(transform[4].klass) = 1;
  transform = (UnityEngine_Component_o *)this->fields.mItemSp;
  if ( !transform )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  transform = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                           gameObject,
                                           (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
  if ( !transform )
    goto LABEL_26;
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)transform, imgId, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10913/*"QUEST_CLEAR_COSTUME_GET"*/, 0LL);
  transform = (UnityEngine_Component_o *)System_String__Format(v32, (Il2CppObject *)itmName, 0LL);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
          Component_srcLineSprite,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        goto LABEL_23;
      }
    }
LABEL_26:
    sub_B2C434(transform, v16);
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
  __int64 v3; // x1
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x0

  if ( (byte_418AF6A & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestRewardCostumeAction__update__, method);
    sub_B2C35C(&CTouch_TypeInfo, v3);
    byte_418AF6A = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_QuestRewardCostumeAction__update__);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *v9; // x19
  UnityEngine_Component_o *mItemLabel; // x0
  __int64 v11; // x1
  struct QuestRewardCostumeAction_o *v12; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  float y; // s8
  float z; // s9
  ManagerConfig_c *v17; // x0
  int WIDTH; // w23
  MoveObject_o *mo; // x20
  float x; // s10
  float v21; // s11
  float v22; // s12
  System_Action_o *v23; // x21
  System_Action_o *v24; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_418561C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v6);
    sub_B2C35C(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v7);
    sub_B2C35C(&QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v8);
    byte_418561C = 1;
  }
  v9 = (QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *)sub_B2C42C(QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_12;
  v9->fields.that = that;
  sub_B2C2F8(&v9->fields.that, that);
  v12 = v9->fields.that;
  if ( !v12 )
    goto LABEL_12;
  mItemLabel = (UnityEngine_Component_o *)v12->fields.mItemLabel;
  if ( !mItemLabel )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject(mItemLabel, 0LL);
  v9->fields.tgt_obj = gameObject;
  sub_B2C2F8(&v9->fields, gameObject);
  mItemLabel = (UnityEngine_Component_o *)v9->fields.tgt_obj;
  if ( !mItemLabel )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mItemLabel, 1, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         v9->fields.tgt_obj,
                         (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  v9->fields.mo = (struct MoveObject_o *)Component_UIWidget;
  sub_B2C2F8(&v9->fields.mo, Component_UIWidget);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v9->fields.tgt_obj, 0LL);
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v17 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v17 = ManagerConfig_TypeInfo;
  }
  WIDTH = v17->static_fields->WIDTH;
  v26 = GameObjectExtensions__GetLocalPosition(v9->fields.tgt_obj, 0LL);
  mo = v9->fields.mo;
  x = v26.fields.x;
  v21 = v26.fields.y;
  v22 = v26.fields.z;
  v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v9,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v9,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !mo )
LABEL_12:
    sub_B2C434(mItemLabel, v11);
  v27.fields.x = (float)WIDTH;
  v27.fields.y = y;
  v27.fields.z = z;
  v28.fields.x = x;
  v28.fields.y = v21;
  v28.fields.z = v22;
  MoveObject__Play(mo, v27, v28, 0.25, v23, v24, 0.0, 17, 0LL);
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
    sub_B2C434(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardCostumeAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B2C434(0LL, method);
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
  __int64 v5; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v7; // x21
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x21
  System_String_o *v10; // x0
  SimpleAnimation_State_o *v11; // x0
  struct SimpleAnimation_State_o **p_mSimpleAnimState; // x20
  __int64 v13; // x3
  struct SimpleAnimation_State_o *v14; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v16; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v20; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v22; // x21
  System_String_o *v23; // x0
  UnityEngine_AnimationState_o *Item; // x0
  QuestRewardCostumeAction_StatePlay_o **p_fields; // x20
  __int64 v26; // x3
  struct SimpleAnimation_State_o *v27; // x20
  SimpleAnimation_State_c *v28; // x8
  unsigned __int64 v29; // x10
  SimpleAnimation_State_c **v30; // x11
  __int64 v31; // x0

  v4 = this;
  if ( (byte_418561D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardCostumeAction_StatePlay_o *)sub_B2C35C(&SimpleAnimation_State_TypeInfo, v5);
    byte_418561D = 1;
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
    v20 = that->fields.mAnimation;
    if ( v20 )
    {
      this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__Play_50201580(v20, name, 0LL);
        v22 = that->fields.mAnimation;
        if ( v22 )
        {
          this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( this )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            Item = UnityEngine_Animation__get_Item(v22, v23, 0LL);
            v4->fields.mAnimState = Item;
            p_fields = (QuestRewardCostumeAction_StatePlay_o **)&v4->fields;
            sub_B2C2F8(p_fields, Item);
            this = *p_fields;
            if ( *p_fields )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              this = *p_fields;
              if ( *p_fields )
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
    sub_B2C434(this, that);
  }
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_40;
  this = (QuestRewardCostumeAction_StatePlay_o *)v7[1].monitor;
  if ( !this )
    goto LABEL_40;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardCostumeAction_StatePlay_o *)SimpleAnimation__Play_16486620(v7, v8, 0LL);
  v9 = that->fields.mSimpleAnimation;
  if ( !v9 )
    goto LABEL_40;
  this = (QuestRewardCostumeAction_StatePlay_o *)v9[1].monitor;
  if ( !this )
    goto LABEL_40;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v11 = SimpleAnimation__get_Item(v9, v10, 0LL);
  v4->fields.mSimpleAnimState = v11;
  p_mSimpleAnimState = &v4->fields.mSimpleAnimState;
  sub_B2C2F8(p_mSimpleAnimState, v11);
  v14 = *p_mSimpleAnimState;
  if ( !*p_mSimpleAnimState )
    goto LABEL_40;
  klass = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v16;
      p_offset += 2;
      if ( v16 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_17:
    p_method = sub_AC5258(*p_mSimpleAnimState, SimpleAnimation_State_TypeInfo, 6LL, v13);
  }
  this = (QuestRewardCostumeAction_StatePlay_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))p_method)(
                                                   v14,
                                                   *(_QWORD *)(p_method + 8),
                                                   0.0);
  v27 = *p_mSimpleAnimState;
  if ( !v27 )
    goto LABEL_40;
  v28 = v27->klass;
  if ( *(_WORD *)&v27->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = (SimpleAnimation_State_c **)&v28->_1.interfaceOffsets->offset;
    while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v29;
      v30 += 2;
      if ( v29 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v31 = (__int64)&v28->vtable[*(_DWORD *)v30 + 8].method;
  }
  else
  {
LABEL_35:
    v31 = sub_AC5258(v27, SimpleAnimation_State_TypeInfo, 8LL, v26);
  }
  (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v31)(v27, *(_QWORD *)(v31 + 8), 1.0);
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
  __int64 v4; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v9; // x20
  System_String_o *v10; // x0

  if ( (byte_418561E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardCostumeAction_StatePlay_o *)sub_B2C35C(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v4);
    byte_418561E = 1;
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
    v6 = that->fields.mSimpleAnimation;
    if ( !v6 )
      goto LABEL_23;
    this = (QuestRewardCostumeAction_StatePlay_o *)v6[1].monitor;
    if ( !this )
      goto LABEL_23;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v6, name, 0LL) )
      return;
LABEL_19:
    this = (QuestRewardCostumeAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardCostumeAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B2C434(this, that);
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
    v9 = that->fields.mAnimation;
    if ( !v9 )
      goto LABEL_23;
    this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !this )
      goto LABEL_23;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v9, v10, 0LL) )
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
    sub_B2C434(this, that);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_o *v10; // x20
  UnityEngine_Component_o *isTouchPush; // x0
  __int64 v12; // x1
  QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x22

  if ( (byte_418561F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&CTouch_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v8);
    sub_B2C35C(&QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v9);
    byte_418561F = 1;
  }
  v10 = (QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_o *)sub_B2C42C(QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  v10->fields.that = that;
  p_fields = &v10->fields;
  sub_B2C2F8(&v10->fields, that);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_Component_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( p_fields->that )
    {
      isTouchPush = (UnityEngine_Component_o *)p_fields->that->fields.mScreenTouchInfo;
      if ( isTouchPush )
      {
        isTouchPush = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isTouchPush, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v15 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v15 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
          v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v17,
            (Il2CppObject *)v10,
            Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
            isTouchPush = (UnityEngine_Component_o *)p_fields->that;
            if ( p_fields->that )
            {
              QuestRewardCostumeAction__SetState((QuestRewardCostumeAction_o *)isTouchPush, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B2C434(isTouchPush, v12);
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
    sub_B2C434(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}