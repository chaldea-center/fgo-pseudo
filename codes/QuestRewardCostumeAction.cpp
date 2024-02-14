void __fastcall QuestRewardCostumeAction___ctor(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction__Awake(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct CStateManager_QuestRewardCostumeAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  QuestRewardCostumeAction_StateNone_o *v25; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  CStateManager_QAASpotStateController_IMapSpot__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  QuestRewardCostumeAction_StatePlay_o *v30; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  QuestRewardCostumeAction_StateItemLabel_o *v34; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  QuestRewardCostumeAction_StateTouchWait_o *v38; // x21
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

  if ( (byte_4217CE4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardCostumeAction___ctor__, method);
    sub_B0D8A4(&Method_CStateManager_QuestRewardCostumeAction__add__, v4);
    sub_B0D8A4(&CStateManager_QuestRewardCostumeAction__TypeInfo, v5);
    sub_B0D8A4(&CTouch_TypeInfo, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&QuestRewardCostumeAction_StateItemLabel_TypeInfo, v10);
    sub_B0D8A4(&QuestRewardCostumeAction_StateNone_TypeInfo, v11);
    sub_B0D8A4(&QuestRewardCostumeAction_StatePlay_TypeInfo, v12);
    sub_B0D8A4(&QuestRewardCostumeAction_StateTouchWait_TypeInfo, v13);
    byte_4217CE4 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(
                                                                CStateManager_QuestRewardCostumeAction__TypeInfo,
                                                                method,
                                                                v2);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v15,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2AAF784 *)Method_CStateManager_QuestRewardCostumeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardCostumeAction__o *)v15;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    mFSM = this->fields.mFSM;
    v25 = (QuestRewardCostumeAction_StateNone_o *)sub_B0D974(QuestRewardCostumeAction_StateNone_TypeInfo, v23, v24);
    QuestRewardCostumeAction_StateNone___ctor(v25, 0LL);
    if ( !mFSM )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v25,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v27 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v30 = (QuestRewardCostumeAction_StatePlay_o *)sub_B0D974(QuestRewardCostumeAction_StatePlay_TypeInfo, v28, v29);
    QuestRewardCostumeAction_StatePlay___ctor(v30, 0LL);
    if ( !v27 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v27,
      1,
      (IState_T__o *)v30,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v31 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v34 = (QuestRewardCostumeAction_StateItemLabel_o *)sub_B0D974(
                                                         QuestRewardCostumeAction_StateItemLabel_TypeInfo,
                                                         v32,
                                                         v33);
    QuestRewardCostumeAction_StateItemLabel___ctor(v34, 0LL);
    if ( !v31 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v31,
      2,
      (IState_T__o *)v34,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v35 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v38 = (QuestRewardCostumeAction_StateTouchWait_o *)sub_B0D974(
                                                         QuestRewardCostumeAction_StateTouchWait_TypeInfo,
                                                         v36,
                                                         v37);
    QuestRewardCostumeAction_StateTouchWait___ctor(v38, 0LL);
    if ( !v35 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v35,
      3,
      (IState_T__o *)v38,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    QuestRewardCostumeAction__SetState(this, 0, v39);
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
                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v43, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v43, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v43, zero, 0LL);
        if ( v43 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v43,
                                                        (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v43;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v43,
              v44,
              v45,
              v46,
              v47,
              v48,
              v49);
            goto LABEL_24;
          }
        }
LABEL_28:
        sub_B0D97C(ComponentInChildren_Dropdown_DropdownItem);
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
  if ( (byte_4217CE8 & 1) == 0 )
  {
    this = (QuestRewardCostumeAction_o *)sub_B0D8A4(&Method_CStateManager_QuestRewardCostumeAction__getState__, method);
    byte_4217CE8 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(this);
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
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v19; // x20
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v22; // x20
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v25; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v27; // x20
  System_String_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v32; // x0
  System_Action_o *v33; // x21

  if ( (byte_4217CE7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, endAct);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&Method_QuestRewardCostumeAction__Play_b__14_0__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v16);
    byte_4217CE7 = 1;
  }
  this->fields.mEndAct = endAct;
  sub_B0D840(
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
    v19 = this->fields.mSimpleAnimation;
    if ( !v19 )
      goto LABEL_33;
    gameObject = (UnityEngine_GameObject_o *)v19[1].monitor;
    if ( !gameObject )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v19, name, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    klass = gameObject->klass;
    v22 = gameObject;
    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v23;
        p_offset += 2;
        if ( v23 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v25 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_15:
      v25 = sub_AA67A0(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v25)(v22, *(_QWORD *)(v25 + 8), 0.0);
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
      v27 = this->fields.mAnimation;
      if ( !v27 )
        goto LABEL_33;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v27, v28, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v29, v30);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_QuestRewardCostumeAction__Play_b__14_0__, 0LL);
  if ( !Instance )
LABEL_33:
    sub_B0D97C(gameObject);
  CommonUI__maskFadein(Instance, fadeInTime, v33, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardCostumeAction__SetState(
        QuestRewardCostumeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x0

  if ( (byte_4217CE9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardCostumeAction__setState__, *(_QWORD *)&state);
    byte_4217CE9 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2AAF8F4 *)Method_CStateManager_QuestRewardCostumeAction__setState__);
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
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct SimpleAnimation_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v31; // x0
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_4217CE6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, *(_QWORD *)&imgId);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v8);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B0D8A4(&StringLiteral_10939/*"QUEST_CLEAR_COSTUME_GET"*/, v14);
    byte_4217CE6 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_26;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_26;
  v23 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      transform,
                                      (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_26;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_26;
  BYTE5(transform[4].klass) = 1;
  transform = (UnityEngine_Component_o *)this->fields.mItemSp;
  if ( !transform )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  transform = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                           gameObject,
                                           (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
  if ( !transform )
    goto LABEL_26;
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)transform, imgId, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_10939/*"QUEST_CLEAR_COSTUME_GET"*/, 0LL);
  transform = (UnityEngine_Component_o *)System_String__Format(v31, (Il2CppObject *)itmName, 0LL);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
          Component_srcLineSprite,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
        goto LABEL_23;
      }
    }
LABEL_26:
    sub_B0D97C(transform);
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

  if ( (byte_4217CE5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardCostumeAction__update__, method);
    sub_B0D8A4(&CTouch_TypeInfo, v3);
    byte_4217CE5 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2AAF8CC *)Method_CStateManager_QuestRewardCostumeAction__update__);
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
  struct QuestRewardCostumeAction_o *v11; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  float y; // s8
  float z; // s9
  ManagerConfig_c *v16; // x0
  int WIDTH; // w23
  MoveObject_o *mo; // x20
  float x; // s10
  float v20; // s11
  float v21; // s12
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42124ED & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v4);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v5);
    sub_B0D8A4(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v6);
    sub_B0D8A4(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v7);
    sub_B0D8A4(&QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v8);
    byte_42124ED = 1;
  }
  v9 = (QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *)sub_B0D974(
                                                                           QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo,
                                                                           that,
                                                                           method);
  QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_12;
  v9->fields.that = that;
  sub_B0D840(&v9->fields.that, that);
  v11 = v9->fields.that;
  if ( !v11 )
    goto LABEL_12;
  mItemLabel = (UnityEngine_Component_o *)v11->fields.mItemLabel;
  if ( !mItemLabel )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject(mItemLabel, 0LL);
  v9->fields.tgt_obj = gameObject;
  sub_B0D840(&v9->fields, gameObject);
  mItemLabel = (UnityEngine_Component_o *)v9->fields.tgt_obj;
  if ( !mItemLabel )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mItemLabel, 1, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         v9->fields.tgt_obj,
                         (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  v9->fields.mo = (struct MoveObject_o *)Component_UIWidget;
  sub_B0D840(&v9->fields.mo, Component_UIWidget);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v9->fields.tgt_obj, 0LL);
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v16 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v16 = ManagerConfig_TypeInfo;
  }
  WIDTH = v16->static_fields->WIDTH;
  v29 = GameObjectExtensions__GetLocalPosition(v9->fields.tgt_obj, 0LL);
  mo = v9->fields.mo;
  x = v29.fields.x;
  v20 = v29.fields.y;
  v21 = v29.fields.z;
  v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v9,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v27 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !mo )
LABEL_12:
    sub_B0D97C(mItemLabel);
  v30.fields.x = (float)WIDTH;
  v30.fields.y = y;
  v30.fields.z = z;
  v31.fields.x = x;
  v31.fields.y = v20;
  v31.fields.z = v21;
  MoveObject__Play(mo, v30, v31, 0.25, v24, v27, 0.0, 17, 0LL);
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
    sub_B0D97C(this);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardCostumeAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B0D97C(0LL);
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
  struct SimpleAnimation_State_o *v13; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v19; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v21; // x21
  System_String_o *v22; // x0
  UnityEngine_AnimationState_o *Item; // x0
  QuestRewardCostumeAction_StatePlay_o **p_fields; // x20
  struct SimpleAnimation_State_o *v25; // x20
  SimpleAnimation_State_c *v26; // x8
  unsigned __int64 v27; // x10
  SimpleAnimation_State_c **v28; // x11
  __int64 v29; // x0

  v4 = this;
  if ( (byte_42124EE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardCostumeAction_StatePlay_o *)sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v5);
    byte_42124EE = 1;
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
    v19 = that->fields.mAnimation;
    if ( v19 )
    {
      this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__Play_50564840(v19, name, 0LL);
        v21 = that->fields.mAnimation;
        if ( v21 )
        {
          this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( this )
          {
            v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            Item = UnityEngine_Animation__get_Item(v21, v22, 0LL);
            v4->fields.mAnimState = Item;
            p_fields = (QuestRewardCostumeAction_StatePlay_o **)&v4->fields;
            sub_B0D840(p_fields, Item);
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
    sub_B0D97C(this);
  }
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_40;
  this = (QuestRewardCostumeAction_StatePlay_o *)v7[1].monitor;
  if ( !this )
    goto LABEL_40;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardCostumeAction_StatePlay_o *)SimpleAnimation__Play_50482404(v7, v8, 0LL);
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
  sub_B0D840(p_mSimpleAnimState, v11);
  v13 = *p_mSimpleAnimState;
  if ( !*p_mSimpleAnimState )
    goto LABEL_40;
  klass = v13->klass;
  if ( *(_WORD *)&v13->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      p_offset += 2;
      if ( v15 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_17:
    p_method = sub_AA67A0(*p_mSimpleAnimState, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardCostumeAction_StatePlay_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))p_method)(
                                                   v13,
                                                   *(_QWORD *)(p_method + 8),
                                                   0.0);
  v25 = *p_mSimpleAnimState;
  if ( !v25 )
    goto LABEL_40;
  v26 = v25->klass;
  if ( *(_WORD *)&v25->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = (SimpleAnimation_State_c **)&v26->_1.interfaceOffsets->offset;
    while ( *(v28 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v27;
      v28 += 2;
      if ( v27 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v29 = (__int64)&v26->vtable[*(_DWORD *)v28 + 8].method;
  }
  else
  {
LABEL_35:
    v29 = sub_AA67A0(v25, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v29)(v25, *(_QWORD *)(v29 + 8), 1.0);
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

  if ( (byte_42124EF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardCostumeAction_StatePlay_o *)sub_B0D8A4(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v4);
    byte_42124EF = 1;
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
    this = (QuestRewardCostumeAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardCostumeAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x22

  if ( (byte_42124F0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&CTouch_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    sub_B0D8A4(&Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v8);
    sub_B0D8A4(&QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v9);
    byte_42124F0 = 1;
  }
  v10 = (QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_o *)sub_B0D974(
                                                                            QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo,
                                                                            that,
                                                                            method);
  QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  v10->fields.that = that;
  p_fields = &v10->fields;
  sub_B0D840(&v10->fields, that);
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v16 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v16 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
          v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
          System_Action___ctor(
            v18,
            (Il2CppObject *)v10,
            Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v18, 0LL);
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
    sub_B0D97C(isTouchPush);
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
    sub_B0D97C(this);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}