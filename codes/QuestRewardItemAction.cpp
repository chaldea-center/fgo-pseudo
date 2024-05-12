void __fastcall QuestRewardItemAction___cctor(const MethodInfo *method)
{
  if ( (byte_438990E & 1) == 0 )
  {
    sub_B775C4(&QuestRewardItemAction_TypeInfo);
    byte_438990E = 1;
  }
  QuestRewardItemAction_TypeInfo->static_fields->ITEM_LABEL_MAX_WIDTH = 1024;
}


void __fastcall QuestRewardItemAction___ctor(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_438990D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17106/*"bit_item_get01"*/);
    sub_B775C4(&StringLiteral_17108/*"bit_item_get01_3"*/);
    sub_B775C4(&StringLiteral_17109/*"bit_item_get01_4"*/);
    sub_B775C4(&StringLiteral_17107/*"bit_item_get01_2"*/);
    byte_438990D = 1;
  }
  this->fields.mLabelAnimate = 1;
  this->fields.mTreasureAnimStartTime = 1.0;
  *(_WORD *)&this->fields.mTreasureEffectOff = 257;
  v9 = (System_Int32_array **)StringLiteral_17106/*"bit_item_get01"*/;
  this->fields.ANIMATION_NAME_1_TYPE = (struct System_String_o *)StringLiteral_17106/*"bit_item_get01"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.ANIMATION_NAME_1_TYPE, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_17107/*"bit_item_get01_2"*/;
  this->fields.DIFF_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17107/*"bit_item_get01_2"*/;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.DIFF_ANIMATION_NAME_2_TYPES,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Int32_array **)StringLiteral_17108/*"bit_item_get01_3"*/;
  this->fields.DIFF_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17108/*"bit_item_get01_3"*/;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.DIFF_ANIMATION_NAME_3_TYPES,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Int32_array **)StringLiteral_17109/*"bit_item_get01_4"*/;
  this->fields.DIFF_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17109/*"bit_item_get01_4"*/;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.DIFF_ANIMATION_NAME_4_TYPES,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Int32_array **)StringLiteral_17107/*"bit_item_get01_2"*/;
  this->fields.SAME_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17107/*"bit_item_get01_2"*/;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.SAME_ANIMATION_NAME_2_TYPES,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Int32_array **)StringLiteral_17108/*"bit_item_get01_3"*/;
  this->fields.SAME_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17108/*"bit_item_get01_3"*/;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.SAME_ANIMATION_NAME_3_TYPES,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Int32_array **)StringLiteral_17109/*"bit_item_get01_4"*/;
  this->fields.SAME_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17109/*"bit_item_get01_4"*/;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.SAME_ANIMATION_NAME_4_TYPES,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardItemAction__Awake(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardItemAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x21
  QuestRewardItemAction_StateNone_o *v12; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v14; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v15; // x21
  QuestRewardItemAction_StatePlay_o *v16; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  QuestRewardItemAction_StateItemLabel_o *v18; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v19; // x20
  QuestRewardItemAction_StateTouchWait_o *v20; // x21
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

  if ( (byte_4389903 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_QuestRewardItemAction___ctor__);
    sub_B775C4(&Method_CStateManager_QuestRewardItemAction__add__);
    sub_B775C4(&CStateManager_QuestRewardItemAction__TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&QuestRewardItemAction_StateItemLabel_TypeInfo);
    sub_B775C4(&QuestRewardItemAction_StateNone_TypeInfo);
    sub_B775C4(&QuestRewardItemAction_StatePlay_TypeInfo);
    sub_B775C4(&QuestRewardItemAction_StateTouchWait_TypeInfo);
    byte_4389903 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B77694(CStateManager_QuestRewardItemAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v4,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2CBF0B0 *)Method_CStateManager_QuestRewardItemAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardItemAction__o *)v4;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.mFSM, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
    mFSM = this->fields.mFSM;
    v12 = (QuestRewardItemAction_StateNone_o *)sub_B77694(QuestRewardItemAction_StateNone_TypeInfo);
    QuestRewardItemAction_StateNone___ctor(v12, 0LL);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_2CBF17C *)Method_CStateManager_QuestRewardItemAction__add__);
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v16 = (QuestRewardItemAction_StatePlay_o *)sub_B77694(QuestRewardItemAction_StatePlay_TypeInfo);
    QuestRewardItemAction_StatePlay___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_2CBF17C *)Method_CStateManager_QuestRewardItemAction__add__);
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v18 = (QuestRewardItemAction_StateItemLabel_o *)sub_B77694(QuestRewardItemAction_StateItemLabel_TypeInfo);
    QuestRewardItemAction_StateItemLabel___ctor(v18, 0LL);
    if ( !v17 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_2CBF17C *)Method_CStateManager_QuestRewardItemAction__add__);
    v19 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v20 = (QuestRewardItemAction_StateTouchWait_o *)sub_B77694(QuestRewardItemAction_StateTouchWait_TypeInfo);
    QuestRewardItemAction_StateTouchWait___ctor(v20, 0LL);
    if ( !v19 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_2CBF17C *)Method_CStateManager_QuestRewardItemAction__add__);
    QuestRewardItemAction__SetState(this, 0, v21);
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
            return;
          }
        }
LABEL_25:
        sub_B7769C(ComponentInChildren_Dropdown_DropdownItem, v14);
      }
    }
  }
}


void __fastcall QuestRewardItemAction__CommonSetUpEndAction(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  AndroidBackKeyManager_c *v15; // x0

  if ( (byte_4389909 & 1) == 0 )
  {
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389909 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      gameObject = CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)gameObject, 0, 0LL);
      if ( gameObject )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           gameObject,
                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
          Component_srcLineSprite,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        goto LABEL_11;
      }
    }
LABEL_17:
    sub_B7769C(gameObject, v4);
  }
LABEL_11:
  gameObject = (UnityEngine_GameObject_o *)*p_mScreenTouchInfo;
  if ( !*p_mScreenTouchInfo )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v15 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v15 = AndroidBackKeyManager_TypeInfo;
  }
  v15->static_fields->ToastEnabled = 1;
}


int32_t __fastcall QuestRewardItemAction__GetState(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  QuestRewardItemAction_o *v2; // x19
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_438990B & 1) == 0 )
  {
    this = (QuestRewardItemAction_o *)sub_B775C4(&Method_CStateManager_QuestRewardItemAction__getState__);
    byte_438990B = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B7769C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardItemAction__Play(
        QuestRewardItemAction_o *this,
        bool is_from_treasure_box,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v17; // x20
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v20; // x0
  UnityEngine_Object_o *mAnimation; // x20
  const MethodInfo *v22; // x2
  UnityEngine_TrackedReference_o *Item; // x20
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v25; // x0
  System_Action_o *v26; // x21

  if ( (byte_438990A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_QuestRewardItemAction__Play_b__49_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438990A = 1;
  }
  this->fields.mIsFromTreasureBox = is_from_treasure_box;
  this->fields.mEndAct = end_act;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)end_act,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mSimpleAnimation;
    if ( !gameObject )
      goto LABEL_34;
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                               (SimpleAnimation_o *)gameObject,
                                               this->fields.playAnimationName,
                                               0LL);
    if ( !gameObject )
      goto LABEL_34;
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
          goto LABEL_14;
      }
      v20 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v20 = sub_B0F4C0(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
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
    if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
      if ( !gameObject )
        goto LABEL_34;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)gameObject,
                                                 this->fields.playAnimationName,
                                                 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_34;
        UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
      }
    }
  }
  if ( this->fields.mIsFromTreasureBox )
    QuestRewardItemAction__SetState(this, 1, v22);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v25 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v25 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v25->static_fields->DEFAULT_FADE_TIME;
  }
  v26 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_QuestRewardItemAction__Play_b__49_0__, 0LL);
  if ( !Instance )
LABEL_34:
    sub_B7769C(gameObject, v14);
  CommonUI__maskFadein(Instance, fade_in_time, v26, 0LL);
}


void __fastcall QuestRewardItemAction__SetActiveLabelList(
        QuestRewardItemAction_o *this,
        UILabel_array *itemLabelList,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v6; // x21
  bool v7; // w20
  UnityEngine_Component_o *gameObject; // x0
  __int64 v9; // x0

  if ( itemLabelList )
  {
    v4 = *(_QWORD *)&itemLabelList->max_length;
    if ( v4 )
    {
      if ( (int)v4 >= 1 )
      {
        v6 = 0LL;
        v7 = isActive;
        do
        {
          if ( (unsigned int)v6 >= (unsigned int)v4 )
          {
            v9 = sub_B776C8(this);
            sub_B77668(v9, 0LL);
          }
          gameObject = (UnityEngine_Component_o *)itemLabelList->m_Items[v6];
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
          {
            sub_B7769C(gameObject, itemLabelList);
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v7, 0LL);
          LODWORD(v4) = itemLabelList->max_length;
          ++v6;
        }
        while ( (int)v6 < (int)v4 );
      }
    }
  }
}


void __fastcall QuestRewardItemAction__SetClearTextLabel(
        QuestRewardItemAction_o *this,
        UILabel_o *itemLabel,
        QuestRewardInfo_o *questInfoReward,
        const MethodInfo *method)
{
  void *CrossOperatorString; // x0
  __int64 v7; // x1
  int32_t type; // w8
  Il2CppObject *v9; // x22
  Il2CppObject *CountableString; // x21
  System_String_o *Name; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v12; // x22
  System_String_o *v13; // x23
  __int64 v14; // x2
  Il2CppObject *v15; // x0
  QuestRewardItemAction_c *v16; // x0
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4389908 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EquipMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B775C4(&QuestRewardItemAction_TypeInfo);
    sub_B775C4(&StringLiteral_11124/*"QUEST_CLEAR_REWARD_GET"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389908 = 1;
  }
  CrossOperatorString = ItemType__get_CrossOperatorString(0LL);
  if ( !questInfoReward )
    goto LABEL_37;
  type = questInfoReward->fields.type;
  if ( type != 2 )
  {
    CountableString = (Il2CppObject *)CrossOperatorString;
    if ( type == 1 )
    {
      if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      CrossOperatorString = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( CrossOperatorString )
      {
        CrossOperatorString = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)CrossOperatorString,
                                questInfoReward->fields.objectId,
                                (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( CrossOperatorString )
        {
          Name = ServantEntity__getName((ServantEntity_o *)CrossOperatorString, -1, -1, 0LL);
LABEL_27:
          v9 = (Il2CppObject *)Name;
          goto LABEL_28;
        }
      }
    }
    else
    {
      if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      CrossOperatorString = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EquipMaster___);
      if ( CrossOperatorString )
      {
        CrossOperatorString = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)CrossOperatorString,
                                questInfoReward->fields.objectId,
                                (const MethodInfo_21FB894 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
        if ( CrossOperatorString )
        {
          v12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)CrossOperatorString + 4);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(v12, 0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_37:
    sub_B7769C(CrossOperatorString, v7);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CrossOperatorString = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !CrossOperatorString )
    goto LABEL_37;
  CrossOperatorString = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)CrossOperatorString,
                          questInfoReward->fields.objectId,
                          (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !CrossOperatorString )
    goto LABEL_37;
  v9 = (Il2CppObject *)*((_QWORD *)CrossOperatorString + 3);
  CountableString = (Il2CppObject *)ItemType__GetCountableString(*((_DWORD *)CrossOperatorString + 12), 0LL);
LABEL_28:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11124/*"QUEST_CLEAR_REWARD_GET"*/, 0LL);
  num = questInfoReward->fields.num;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v14);
  CrossOperatorString = System_String__Format_44903000(v13, v9, CountableString, v15, 0LL);
  if ( !itemLabel )
    goto LABEL_37;
  UILabel__set_text(itemLabel, (System_String_o *)CrossOperatorString, 0LL);
  v16 = QuestRewardItemAction_TypeInfo;
  if ( (BYTE3(QuestRewardItemAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRewardItemAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo);
    v16 = QuestRewardItemAction_TypeInfo;
  }
  UILabel__SetCondensedScale(itemLabel, v16->static_fields->ITEM_LABEL_MAX_WIDTH, 0LL);
  CrossOperatorString = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemLabel, 0LL);
  if ( !CrossOperatorString )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CrossOperatorString, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetState(QuestRewardItemAction_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x0

  if ( (byte_438990C & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_QuestRewardItemAction__setState__);
    byte_438990C = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B7769C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2CBF220 *)Method_CStateManager_QuestRewardItemAction__setState__);
}


void __fastcall QuestRewardItemAction__Setup(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *qri,
        const MethodInfo *method)
{
  __int64 transform; // x0
  __int64 v6; // x1
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct SimpleAnimation_o *v15; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UIWidget_o *v23; // x0
  UnityEngine_Object_o *v24; // x24
  UIWidget_o *v25; // x21
  UnityEngine_Object_o *v26; // x23
  struct System_String_o *name; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  QuestRewardItemAction_o *v34; // x0
  const MethodInfo *v35; // x3
  QuestRewardItemAction_o *v36; // x0
  const MethodInfo *v37; // x3
  QuestRewardItemAction_o *v38; // x0
  const MethodInfo *v39; // x3
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **mItemLabel; // x22
  __int64 v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **mAppearEffObj; // x22
  __int64 v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UnityEngine_Object_o *mServantFaceIcon; // x21
  QuestRewardItemAction_o *v69; // x0
  const MethodInfo *v70; // x3
  UnityEngine_Object_o *v71; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v73; // x1
  __int64 v74; // x0
  __int64 v75; // x0

  if ( (byte_4389905 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_B775C4(&UnityEngine_GameObject___TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UILabel___TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389905 = 1;
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_54;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     (UnityEngine_Component_o *)transform,
                                                                     (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  p_mAnimation = &this->fields.mAnimation;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_54;
  v15 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      (UnityEngine_Component_o *)transform,
                                      (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v15;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_54;
  v23 = UnityEngine_Component__GetComponentInChildren_UIWidget_(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  v24 = (UnityEngine_Object_o *)*p_mSimpleAnimation;
  v25 = v23;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( !*p_mSimpleAnimation )
      goto LABEL_54;
    transform = (__int64)(*p_mSimpleAnimation)[1].monitor;
    if ( !transform )
      goto LABEL_54;
    goto LABEL_19;
  }
  v26 = (UnityEngine_Object_o *)*p_mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
  if ( (transform & 1) == 0 )
    goto LABEL_20;
  transform = (__int64)*p_mAnimation;
  if ( !*p_mAnimation
    || (transform = (__int64)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)transform, 0LL)) == 0 )
  {
LABEL_54:
    sub_B7769C(transform, v6);
  }
LABEL_19:
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  this->fields.playAnimationName = name;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.playAnimationName,
    (System_Int32_array **)name,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
LABEL_20:
  if ( !v25 )
    goto LABEL_54;
  *(&v25->fields.mAnchorsCached + 5) = 1;
  transform = (__int64)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_54;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  QuestRewardItemAction__SetActiveLabelList(v34, this->fields.mItemLabelList_2, 0, v35);
  QuestRewardItemAction__SetActiveLabelList(v36, this->fields.mItemLabelList_3, 0, v37);
  QuestRewardItemAction__SetActiveLabelList(v38, this->fields.mItemLabelList_4, 0, v39);
  transform = sub_B775DC(UILabel___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_54;
  mItemLabel = (System_Int32_array **)this->fields.mItemLabel;
  v47 = transform;
  if ( mItemLabel )
  {
    transform = sub_B77684(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)transform + 64LL));
    if ( !transform )
      goto LABEL_56;
  }
  if ( !*(_DWORD *)(v47 + 24) )
    goto LABEL_55;
  *(_QWORD *)(v47 + 32) = mItemLabel;
  sub_B77560((BattleServantConfConponent_o *)(v47 + 32), mItemLabel, v40, v41, v42, v43, v44, v45);
  this->fields.itemLabelDispList = (struct UILabel_array *)v47;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.itemLabelDispList,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  transform = sub_B775DC(UnityEngine_GameObject___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_54;
  mAppearEffObj = (System_Int32_array **)this->fields.mAppearEffObj;
  v61 = transform;
  if ( mAppearEffObj )
  {
    transform = sub_B77684(this->fields.mAppearEffObj, *(_QWORD *)(*(_QWORD *)transform + 64LL));
    if ( !transform )
    {
LABEL_56:
      v75 = sub_B776BC();
      sub_B77668(v75, 0LL);
    }
  }
  if ( !*(_DWORD *)(v61 + 24) )
  {
LABEL_55:
    v74 = sub_B776C8(transform);
    sub_B77668(v74, 0LL);
  }
  *(_QWORD *)(v61 + 32) = mAppearEffObj;
  sub_B77560((BattleServantConfConponent_o *)(v61 + 32), mAppearEffObj, v54, v55, v56, v57, v58, v59);
  this->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)v61;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  if ( !qri )
    goto LABEL_54;
  if ( qri->fields.type == 1 )
  {
    transform = (__int64)this->fields.mItemSp;
    if ( !transform )
      goto LABEL_54;
    UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mServantFaceIcon = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(mServantFaceIcon, 0LL, 0LL) )
    {
      transform = (__int64)this->fields.mServantFaceIcon;
      if ( !transform )
        goto LABEL_54;
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
    }
    transform = (__int64)this->fields.mServantFaceIcon;
    if ( !transform )
      goto LABEL_54;
    ServantFaceIconComponent__Set_31755472(
      (ServantFaceIconComponent_o *)transform,
      qri->fields.objectId,
      0,
      0,
      0,
      0LL,
      0LL,
      2,
      0,
      0,
      0LL,
      0,
      0,
      0,
      0,
      0LL);
  }
  else
  {
    v71 = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
    {
      transform = (__int64)this->fields.mServantFaceIcon;
      if ( !transform )
        goto LABEL_54;
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
    }
    transform = (__int64)this->fields.mItemSp;
    if ( !transform )
      goto LABEL_54;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    transform = (__int64)GameObjectExtensions__SafeGetComponent_UIWidget_(
                           gameObject,
                           (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    if ( !transform )
      goto LABEL_54;
    ItemIconComponent__SetGift(
      (ItemIconComponent_o *)transform,
      qri->fields.type,
      qri->fields.objectId,
      qri->fields.num,
      0,
      0LL);
  }
  QuestRewardItemAction__SetClearTextLabel(v69, this->fields.mItemLabel, qri, v70);
  QuestRewardItemAction__CommonSetUpEndAction(this, v73);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetupMultipleQuestRewardInfo(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *questInfoReward,
        const MethodInfo *method)
{
  __int64 transform; // x0
  __int64 v6; // x1
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct SimpleAnimation_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  QuestRewardItemAction_o *v21; // x0
  const MethodInfo *v22; // x3
  QuestRewardItemAction_o *v23; // x0
  const MethodInfo *v24; // x3
  QuestRewardItemAction_o *v25; // x0
  const MethodInfo *v26; // x3
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **mItemLabel; // x22
  __int64 v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **mAppearEffObj; // x21
  __int64 v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int32_t num; // w8
  struct System_String_o *SAME_ANIMATION_NAME_2_TYPES; // x1
  struct UISprite_array *mItemSpList_3; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_3; // x23
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct UnityEngine_GameObject_array *mAppearEffObjList_3; // x1
  struct System_String_o *SAME_ANIMATION_NAME_3_TYPES; // x1
  struct System_String_o *SAME_ANIMATION_NAME_4_TYPES; // x1
  const MethodInfo *v74; // x3
  __int64 v75; // x21
  ServantFaceIconComponent_o **m_Items; // x24
  UISprite_o **v77; // x25
  float v78; // s0
  float v79; // s2
  float v80; // s8
  float v81; // s9
  __int64 v82; // x8
  __int64 v83; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v85; // x1
  __int64 v86; // x0
  __int64 v87; // x0
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4389907 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_B775C4(&UnityEngine_GameObject___TypeInfo);
    sub_B775C4(&UILabel___TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389907 = 1;
  }
  if ( this->fields.mItemSpList_2 && this->fields.mItemLabelList_3 && this->fields.mItemLabelList_4 )
  {
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_59;
    ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                       (UnityEngine_Component_o *)transform,
                                                                       (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    this->fields.mAnimation = ComponentInChildren_UIWidget;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.mAnimation,
      (System_Int32_array **)ComponentInChildren_UIWidget,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_59;
    v14 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                        (UnityEngine_Component_o *)transform,
                                        (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    this->fields.mSimpleAnimation = v14;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_59;
    transform = (__int64)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    if ( !transform )
      goto LABEL_59;
    *(_BYTE *)(transform + 101) = 1;
    transform = (__int64)this->fields.mItemLabel;
    if ( !transform )
      goto LABEL_59;
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
    QuestRewardItemAction__SetActiveLabelList(v21, this->fields.mItemLabelList_2, 0, v22);
    QuestRewardItemAction__SetActiveLabelList(v23, this->fields.mItemLabelList_3, 0, v24);
    QuestRewardItemAction__SetActiveLabelList(v25, this->fields.mItemLabelList_4, 0, v26);
    transform = sub_B775DC(UILabel___TypeInfo, 1LL);
    if ( !transform )
      goto LABEL_59;
    mItemLabel = (System_Int32_array **)this->fields.mItemLabel;
    v34 = transform;
    if ( mItemLabel )
    {
      transform = sub_B77684(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)transform + 64LL));
      if ( !transform )
        goto LABEL_61;
    }
    if ( !*(_DWORD *)(v34 + 24) )
      goto LABEL_60;
    *(_QWORD *)(v34 + 32) = mItemLabel;
    sub_B77560((BattleServantConfConponent_o *)(v34 + 32), mItemLabel, v27, v28, v29, v30, v31, v32);
    this->fields.itemLabelDispList = (struct UILabel_array *)v34;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.itemLabelDispList,
      (System_Int32_array **)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    transform = sub_B775DC(UnityEngine_GameObject___TypeInfo, 1LL);
    if ( !transform )
      goto LABEL_59;
    mAppearEffObj = (System_Int32_array **)this->fields.mAppearEffObj;
    v48 = transform;
    if ( mAppearEffObj )
    {
      transform = sub_B77684(this->fields.mAppearEffObj, *(_QWORD *)(*(_QWORD *)transform + 64LL));
      if ( !transform )
      {
LABEL_61:
        v87 = sub_B776BC();
        sub_B77668(v87, 0LL);
      }
    }
    if ( !*(_DWORD *)(v48 + 24) )
      goto LABEL_60;
    *(_QWORD *)(v48 + 32) = mAppearEffObj;
    sub_B77560((BattleServantConfConponent_o *)(v48 + 32), mAppearEffObj, v41, v42, v43, v44, v45, v46);
    this->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)v48;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
      (System_Int32_array **)v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    if ( !questInfoReward )
LABEL_59:
      sub_B7769C(transform, v6);
    num = questInfoReward->fields.num;
    if ( num == 3 )
    {
      SAME_ANIMATION_NAME_3_TYPES = this->fields.SAME_ANIMATION_NAME_3_TYPES;
      mItemSpList_3 = this->fields.mItemSpList_3;
      mServantFaceIconList_3 = this->fields.mServantFaceIconList_3;
      this->fields.playAnimationName = SAME_ANIMATION_NAME_3_TYPES;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)SAME_ANIMATION_NAME_3_TYPES,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      mAppearEffObjList_3 = this->fields.mAppearEffObjList_3;
    }
    else if ( num == 2 )
    {
      SAME_ANIMATION_NAME_2_TYPES = this->fields.SAME_ANIMATION_NAME_2_TYPES;
      mItemSpList_3 = this->fields.mItemSpList_2;
      mServantFaceIconList_3 = this->fields.mServantFaceIconList_2;
      this->fields.playAnimationName = SAME_ANIMATION_NAME_2_TYPES;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)SAME_ANIMATION_NAME_2_TYPES,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      mAppearEffObjList_3 = this->fields.mAppearEffObjList_2;
    }
    else
    {
      SAME_ANIMATION_NAME_4_TYPES = this->fields.SAME_ANIMATION_NAME_4_TYPES;
      mItemSpList_3 = this->fields.mItemSpList_4;
      mServantFaceIconList_3 = this->fields.mServantFaceIconList_4;
      this->fields.playAnimationName = SAME_ANIMATION_NAME_4_TYPES;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)SAME_ANIMATION_NAME_4_TYPES,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      mAppearEffObjList_3 = this->fields.mAppearEffObjList_4;
    }
    this->fields.appearEffObjDispList = mAppearEffObjList_3;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
      (System_Int32_array **)mAppearEffObjList_3,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    transform = UnityEngine_Mathf__Clamp_41415476(questInfoReward->fields.num, 2, 4, 0LL);
    if ( (int)transform >= 1 )
    {
      if ( mItemSpList_3 )
      {
        v75 = 0LL;
        m_Items = mServantFaceIconList_3->m_Items;
        v77 = mItemSpList_3->m_Items;
        while ( (unsigned int)v75 < mItemSpList_3->max_length )
        {
          transform = (__int64)v77[v75];
          if ( !transform )
            goto LABEL_59;
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_59;
          *(UnityEngine_Vector3_o *)&v78 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)transform,
                                             0LL);
          if ( (unsigned int)v75 >= mItemSpList_3->max_length )
            break;
          transform = (__int64)v77[v75];
          if ( !transform )
            goto LABEL_59;
          v80 = v78;
          v81 = v79;
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_59;
          v88.fields.y = 0.0;
          v88.fields.x = v80;
          v88.fields.z = v81;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v88, 0LL);
          if ( questInfoReward->fields.type == 1 )
          {
            if ( (unsigned int)v75 >= mItemSpList_3->max_length )
              break;
            transform = (__int64)v77[v75];
            if ( !transform )
              goto LABEL_59;
            UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            if ( !mServantFaceIconList_3 )
              goto LABEL_59;
            v82 = *(_QWORD *)&mServantFaceIconList_3->max_length;
            if ( v82 )
            {
              if ( (unsigned int)v75 >= (unsigned int)v82 )
                break;
              transform = (__int64)m_Items[v75];
              if ( !transform )
                goto LABEL_59;
              transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              if ( !transform )
                goto LABEL_59;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
              if ( (unsigned int)v75 >= mServantFaceIconList_3->max_length )
                break;
              transform = (__int64)m_Items[v75];
              if ( !transform )
                goto LABEL_59;
              ServantFaceIconComponent__Set_31755472(
                (ServantFaceIconComponent_o *)transform,
                questInfoReward->fields.objectId,
                0,
                0,
                0,
                0LL,
                0LL,
                2,
                0,
                0,
                0LL,
                0,
                0,
                0,
                0,
                0LL);
            }
          }
          else
          {
            if ( !mServantFaceIconList_3 )
              goto LABEL_59;
            v83 = *(_QWORD *)&mServantFaceIconList_3->max_length;
            if ( v83 )
            {
              if ( (unsigned int)v75 >= (unsigned int)v83 )
                break;
              transform = (__int64)m_Items[v75];
              if ( !transform )
                goto LABEL_59;
              transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              if ( !transform )
                goto LABEL_59;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
            }
            if ( (unsigned int)v75 >= mItemSpList_3->max_length )
              break;
            transform = (__int64)v77[v75];
            if ( !transform )
              goto LABEL_59;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
            transform = (__int64)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                   gameObject,
                                   (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
            if ( !transform )
              goto LABEL_59;
            ItemIconComponent__SetGift(
              (ItemIconComponent_o *)transform,
              questInfoReward->fields.type,
              questInfoReward->fields.objectId,
              1,
              0,
              0LL);
          }
          transform = UnityEngine_Mathf__Clamp_41415476(questInfoReward->fields.num, 2, 4, 0LL);
          if ( (int)++v75 >= (int)transform )
            goto LABEL_58;
        }
LABEL_60:
        v86 = sub_B776C8(transform);
        sub_B77668(v86, 0LL);
      }
      goto LABEL_59;
    }
LABEL_58:
    QuestRewardItemAction__SetClearTextLabel(
      (QuestRewardItemAction_o *)transform,
      this->fields.mItemLabel,
      questInfoReward,
      v74);
    QuestRewardItemAction__CommonSetUpEndAction(this, v85);
  }
}


void __fastcall QuestRewardItemAction__Setup_22569904(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_array *questInfoRewardList,
        bool isMultiDisp,
        const MethodInfo *method)
{
  QuestRewardInfo_array *v5; // x20
  QuestRewardItemAction_o *v6; // x19
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  MethodInfo *v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **mItemLabelList_2; // x1
  struct UISprite_array *mItemSpList_2; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_2; // x23
  System_Int32_array **DIFF_ANIMATION_NAME_2_TYPES; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **mAppearEffObjList_2; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  QuestRewardItemAction_o *v44; // x0
  const MethodInfo *v45; // x3
  QuestRewardItemAction_o *v46; // x0
  const MethodInfo *v47; // x3
  UILabel_array *mItemLabelList_3; // x1
  bool v49; // w2
  TerminalPramsManager_c *v50; // x0
  int32_t PhaseCnt_k__BackingField; // w23
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x21
  QuestRewardInfo_o *v53; // x8
  System_Int32_array **v54; // x1
  System_Int32_array **DIFF_ANIMATION_NAME_3_TYPES; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **mAppearEffObjList_3; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  QuestRewardItemAction_o *v69; // x0
  const MethodInfo *v70; // x3
  QuestRewardItemAction_o *v71; // x0
  const MethodInfo *v72; // x3
  UILabel_array *mItemLabelList_4; // x1
  bool v74; // w2
  System_Int32_array **v75; // x1
  System_Int32_array **DIFF_ANIMATION_NAME_4_TYPES; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **mAppearEffObjList_4; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  QuestRewardItemAction_o *v90; // x0
  const MethodInfo *v91; // x3
  QuestRewardItemAction_o *v92; // x0
  const MethodInfo *v93; // x3
  int max_length; // w8
  __int64 v95; // x24
  il2cpp_array_size_t v96; // w27
  QuestRewardInfo_o *v97; // x21
  const MethodInfo *v98; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabelDispList; // x8
  __int64 v101; // x0
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  v5 = questInfoRewardList;
  v6 = this;
  if ( (byte_4389906 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_IndexOf_int___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B775C4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    this = (QuestRewardItemAction_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389906 = 1;
  }
  entity = 0LL;
  v6->fields.isMultiDisp = isMultiDisp;
  if ( !v5 )
    goto LABEL_76;
  if ( (int)v5->max_length <= 1 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387479 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387479 = 1;
    }
    v50 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v50 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v50->static_fields->_PhaseCnt_k__BackingField;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_4387478 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387478 = 1;
    }
    this = (QuestRewardItemAction_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (QuestRewardItemAction_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_76;
    this = (QuestRewardItemAction_o *)QuestPhaseMaster__TryGetEntity(
                                        Master_WarQuestSelectionMaster,
                                        &entity,
                                        (int32_t)this->fields.mAppearEffObjList_4->bounds,
                                        PhaseCnt_k__BackingField + 1,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRewardItemAction_o *)entity;
      if ( !entity )
        goto LABEL_76;
      this = (QuestRewardItemAction_o *)QuestPhaseEntity__GetClearGiftItemListDisplay(entity, 0LL);
      if ( !v5->max_length )
        goto LABEL_77;
      v53 = v5->m_Items[0];
      if ( !v53 )
        goto LABEL_76;
      this = (QuestRewardItemAction_o *)System_Array__IndexOf_int_(
                                          (System_Int32_array *)this,
                                          v53->fields.objectId,
                                          (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        if ( !v5->max_length )
          goto LABEL_77;
        questInfoRewardList = (QuestRewardInfo_array *)v5->m_Items[0];
        if ( questInfoRewardList )
        {
          if ( (int)questInfoRewardList->max_length >= 2 )
          {
            QuestRewardItemAction__SetupMultipleQuestRewardInfo(v6, (QuestRewardInfo_o *)questInfoRewardList, v21);
            return;
          }
          goto LABEL_38;
        }
LABEL_76:
        sub_B7769C(this, questInfoRewardList);
      }
    }
LABEL_38:
    if ( !v5->max_length )
      goto LABEL_77;
LABEL_39:
    QuestRewardItemAction__Setup(v6, v5->m_Items[0], v21);
    return;
  }
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  if ( !this )
    goto LABEL_76;
  ComponentInChildren_UIWidget = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v6->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_UIWidget;
  sub_B77560(
    (BattleServantConfConponent_o *)&v6->fields.mAnimation,
    ComponentInChildren_UIWidget,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  if ( !this )
    goto LABEL_76;
  v14 = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v6->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v14;
  sub_B77560((BattleServantConfConponent_o *)&v6->fields.mSimpleAnimation, v14, v15, v16, v17, v18, v19, v20);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  if ( !this )
    goto LABEL_76;
  this = (QuestRewardItemAction_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !this )
    goto LABEL_76;
  BYTE5(this->fields.mItemSpList_2) = 1;
  switch ( v5->max_length )
  {
    case 0u:
      goto LABEL_77;
    case 2u:
      mItemLabelList_2 = (System_Int32_array **)v6->fields.mItemLabelList_2;
      mItemSpList_2 = v6->fields.mItemSpList_2;
      mServantFaceIconList_2 = v6->fields.mServantFaceIconList_2;
      v6->fields.itemLabelDispList = (struct UILabel_array *)mItemLabelList_2;
      sub_B77560(
        (BattleServantConfConponent_o *)&v6->fields.itemLabelDispList,
        mItemLabelList_2,
        (System_String_array **)v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      DIFF_ANIMATION_NAME_2_TYPES = (System_Int32_array **)v6->fields.DIFF_ANIMATION_NAME_2_TYPES;
      v6->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_2_TYPES;
      sub_B77560(
        (BattleServantConfConponent_o *)&v6->fields.playAnimationName,
        DIFF_ANIMATION_NAME_2_TYPES,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      mAppearEffObjList_2 = (System_Int32_array **)v6->fields.mAppearEffObjList_2;
      v6->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_2;
      sub_B77560(
        (BattleServantConfConponent_o *)&v6->fields.appearEffObjDispList,
        mAppearEffObjList_2,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      this = (QuestRewardItemAction_o *)v6->fields.mItemLabel;
      if ( !this )
        goto LABEL_76;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v44, v6->fields.mItemLabelList_2, 1, v45);
      mItemLabelList_3 = v6->fields.mItemLabelList_3;
      v49 = 0;
      goto LABEL_43;
    case 3u:
      v54 = (System_Int32_array **)v6->fields.mItemLabelList_3;
      mItemSpList_2 = v6->fields.mItemSpList_3;
      mServantFaceIconList_2 = v6->fields.mServantFaceIconList_3;
      v6->fields.itemLabelDispList = (struct UILabel_array *)v54;
      sub_B77560(
        (BattleServantConfConponent_o *)&v6->fields.itemLabelDispList,
        v54,
        (System_String_array **)v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      DIFF_ANIMATION_NAME_3_TYPES = (System_Int32_array **)v6->fields.DIFF_ANIMATION_NAME_3_TYPES;
      v6->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_3_TYPES;
      sub_B77560(
        (BattleServantConfConponent_o *)&v6->fields.playAnimationName,
        DIFF_ANIMATION_NAME_3_TYPES,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      mAppearEffObjList_3 = (System_Int32_array **)v6->fields.mAppearEffObjList_3;
      v6->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_3;
      sub_B77560(
        (BattleServantConfConponent_o *)&v6->fields.appearEffObjDispList,
        mAppearEffObjList_3,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
      this = (QuestRewardItemAction_o *)v6->fields.mItemLabel;
      if ( !this )
        goto LABEL_76;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v69, v6->fields.mItemLabelList_2, 0, v70);
      mItemLabelList_3 = v6->fields.mItemLabelList_3;
      v49 = 1;
LABEL_43:
      QuestRewardItemAction__SetActiveLabelList(v46, mItemLabelList_3, v49, v47);
      mItemLabelList_4 = v6->fields.mItemLabelList_4;
      v74 = 0;
      break;
    case 4u:
      v75 = (System_Int32_array **)v6->fields.mItemLabelList_4;
      mItemSpList_2 = v6->fields.mItemSpList_4;
      mServantFaceIconList_2 = v6->fields.mServantFaceIconList_4;
      v6->fields.itemLabelDispList = (struct UILabel_array *)v75;
      sub_B77560(
        (BattleServantConfConponent_o *)&v6->fields.itemLabelDispList,
        v75,
        (System_String_array **)v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      DIFF_ANIMATION_NAME_4_TYPES = (System_Int32_array **)v6->fields.DIFF_ANIMATION_NAME_4_TYPES;
      v6->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_4_TYPES;
      sub_B77560(
        (BattleServantConfConponent_o *)&v6->fields.playAnimationName,
        DIFF_ANIMATION_NAME_4_TYPES,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
      mAppearEffObjList_4 = (System_Int32_array **)v6->fields.mAppearEffObjList_4;
      v6->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_4;
      sub_B77560(
        (BattleServantConfConponent_o *)&v6->fields.appearEffObjDispList,
        mAppearEffObjList_4,
        v84,
        v85,
        v86,
        v87,
        v88,
        v89);
      this = (QuestRewardItemAction_o *)v6->fields.mItemLabel;
      if ( !this )
        goto LABEL_76;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v90, v6->fields.mItemLabelList_2, 0, v91);
      QuestRewardItemAction__SetActiveLabelList(v92, v6->fields.mItemLabelList_3, 0, v93);
      mItemLabelList_4 = v6->fields.mItemLabelList_4;
      v74 = 1;
      break;
    default:
      goto LABEL_39;
  }
  QuestRewardItemAction__SetActiveLabelList(v71, mItemLabelList_4, v74, v72);
  max_length = v5->max_length;
  if ( max_length >= 1 )
  {
    v95 = 4LL;
    while ( 1 )
    {
      v96 = v95 - 4;
      if ( (int)v95 - 4 >= (unsigned int)max_length )
        break;
      v97 = (QuestRewardInfo_o *)*((_QWORD *)&v5->obj.klass + v95);
      if ( !v97 )
        goto LABEL_76;
      if ( v97->fields.type == 1 )
      {
        if ( !mItemSpList_2 )
          goto LABEL_76;
        if ( v96 >= mItemSpList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v95);
        if ( !this )
          goto LABEL_76;
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !mServantFaceIconList_2 )
          goto LABEL_76;
        if ( v96 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v95);
        if ( !this )
          goto LABEL_76;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( v96 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v95);
        if ( !this )
          goto LABEL_76;
        ServantFaceIconComponent__Set_31755472(
          (ServantFaceIconComponent_o *)this,
          v97->fields.objectId,
          0,
          0,
          0,
          0LL,
          0LL,
          2,
          0,
          0,
          0LL,
          0,
          0,
          0,
          0,
          0LL);
      }
      else
      {
        if ( !mServantFaceIconList_2 )
          goto LABEL_76;
        if ( v96 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v95);
        if ( !this )
          goto LABEL_76;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( !mItemSpList_2 )
          goto LABEL_76;
        if ( v96 >= mItemSpList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v95);
        if ( !this )
          goto LABEL_76;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (QuestRewardItemAction_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                            gameObject,
                                            (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_76;
        ItemIconComponent__SetGift(
          (ItemIconComponent_o *)this,
          v97->fields.type,
          v97->fields.objectId,
          v97->fields.num,
          0,
          0LL);
      }
      itemLabelDispList = v6->fields.itemLabelDispList;
      if ( !itemLabelDispList )
        goto LABEL_76;
      if ( v96 >= itemLabelDispList->max_length )
        break;
      QuestRewardItemAction__SetClearTextLabel(this, *((UILabel_o **)&itemLabelDispList->obj.klass + v95), v97, v98);
      max_length = v5->max_length;
      if ( (int)++v95 - 4 >= max_length )
        goto LABEL_74;
    }
LABEL_77:
    v101 = sub_B776C8(this);
    sub_B77668(v101, 0LL);
  }
LABEL_74:
  QuestRewardItemAction__CommonSetUpEndAction(v6, (const MethodInfo *)questInfoRewardList);
}


void __fastcall QuestRewardItemAction__Update(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x0

  if ( (byte_4389904 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_QuestRewardItemAction__update__);
    sub_B775C4(&CTouch_TypeInfo);
    byte_4389904 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2CBF1F8 *)Method_CStateManager_QuestRewardItemAction__update__);
}


void __fastcall QuestRewardItemAction___Play_b__49_0(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.mIsFromTreasureBox )
    QuestRewardItemAction__SetState(this, 1, v2);
}


void __fastcall QuestRewardItemAction_StateItemLabel___ctor(
        QuestRewardItemAction_StateItemLabel_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateItemLabel__begin(
        QuestRewardItemAction_StateItemLabel_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x19
  __int64 v14; // x8
  System_Int32_array **gameObject; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  float y; // s8
  float z; // s9
  ManagerConfig_c *v31; // x0
  int WIDTH; // w24
  MoveObject_o *v33; // x21
  float x; // s10
  float v35; // s11
  float v36; // s12
  System_Action_o *v37; // x22
  System_Action_o *v38; // x23
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_438B1A5 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__);
    sub_B775C4(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_B775C4(&QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    byte_438B1A5 = 1;
  }
  v4 = sub_B77694(QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___ctor(
    (QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *)v4,
    0LL);
  if ( !v4 )
    goto LABEL_21;
  *(_QWORD *)(v4 + 32) = that;
  v13 = v4 + 32;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)that, v7, v8, v9, v10, v11, v12);
  v14 = *(_QWORD *)(v4 + 32);
  if ( !v14 )
    goto LABEL_21;
  transform = *(UnityEngine_Transform_o **)(v14 + 72);
  if ( !transform )
    goto LABEL_21;
  if ( *(_BYTE *)(v14 + 304) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_21;
    transform = UnityEngine_Transform__get_parent(transform, 0LL);
    if ( !transform )
      goto LABEL_21;
  }
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  *(_QWORD *)(v4 + 16) = gameObject;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 16), gameObject, v16, v17, v18, v19, v20, v21);
  transform = *(UnityEngine_Transform_o **)(v4 + 32);
  if ( !transform )
    goto LABEL_21;
  QuestRewardItemAction__SetActiveLabelList(
    (QuestRewardItemAction_o *)transform,
    *(UILabel_array **)&transform[9].fields.m_CachedPtr,
    1,
    0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v4 + 16),
                                                (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v4 + 24) = Component_UIWidget;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 24), Component_UIWidget, v23, v24, v25, v26, v27, v28);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0LL);
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v31 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v31 = ManagerConfig_TypeInfo;
  }
  WIDTH = v31->static_fields->WIDTH;
  v40 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0LL);
  v33 = *(MoveObject_o **)(v4 + 24);
  x = v40.fields.x;
  v35 = v40.fields.y;
  v36 = v40.fields.z;
  v37 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v4,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v38 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v4,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v33
    || (v41.fields.x = (float)WIDTH,
        v41.fields.y = y,
        v41.fields.z = z,
        v42.fields.x = x,
        v42.fields.y = v35,
        v42.fields.z = v36,
        MoveObject__Play(v33, v41, v42, 0.25, v37, v38, 0.0, 17, 0LL),
        !*(_QWORD *)v13) )
  {
LABEL_21:
    sub_B7769C(transform, v6);
  }
  if ( *(_BYTE *)(*(_QWORD *)v13 + 201LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(4, 0LL);
  }
}


void __fastcall QuestRewardItemAction_StateItemLabel__end(
        QuestRewardItemAction_StateItemLabel_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateItemLabel__update(
        QuestRewardItemAction_StateItemLabel_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___ctor(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___begin_b__0(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_B7769C(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardItemAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B7769C(0LL, method);
  QuestRewardItemAction__SetState(that, 3, 0LL);
}


void __fastcall QuestRewardItemAction_StateNone___ctor(
        QuestRewardItemAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateNone__begin(
        QuestRewardItemAction_StateNone_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateNone__end(
        QuestRewardItemAction_StateNone_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateNone__update(
        QuestRewardItemAction_StateNone_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StatePlay___ctor(
        QuestRewardItemAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StatePlay__begin(
        QuestRewardItemAction_StatePlay_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  long double v3; // q8
  QuestRewardItemAction_StatePlay_o *v5; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x21
  System_Int32_array **Item; // x0
  BattleServantConfConponent_o *p_mSimpleAnimState; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleServantConfConponent_c *klass; // x21
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_TrackedReference_o *v17; // x20
  float mTreasureAnimStartTime; // s0
  _QWORD *image; // x8
  unsigned __int64 v20; // x10
  SimpleAnimation_State_c **v21; // x11
  __int64 v22; // x0
  BattleServantConfConponent_c *v23; // x20
  _QWORD *v24; // x8
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **v26; // x11
  __int64 v27; // x0
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x20
  int max_length; // w8
  int i; // w21
  _BOOL4 v31; // w8
  __int64 v32; // x0

  v5 = this;
  if ( (byte_438B1A6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardItemAction_StatePlay_o *)sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438B1A6 = 1;
  }
  if ( !that )
    goto LABEL_50;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
      goto LABEL_50;
    Item = (System_Int32_array **)SimpleAnimation__get_Item(
                                    (SimpleAnimation_o *)this,
                                    that->fields.playAnimationName,
                                    0LL);
    v5->fields.mSimpleAnimState = (struct SimpleAnimation_State_o *)Item;
    p_mSimpleAnimState = (BattleServantConfConponent_o *)&v5->fields.mSimpleAnimState;
    sub_B77560(p_mSimpleAnimState, Item, v9, v10, v11, v12, v13, v14);
    klass = p_mSimpleAnimState->klass;
    if ( that->fields.mIsFromTreasureBox )
    {
      *(float *)&v3 = that->fields.mTreasureAnimStartTime;
      if ( !klass )
        goto LABEL_50;
    }
    else
    {
      LODWORD(v3) = 0;
      if ( !klass )
        goto LABEL_50;
    }
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
          goto LABEL_26;
      }
      v22 = (__int64)&image[2 * *(_DWORD *)v21 + 51];
    }
    else
    {
LABEL_26:
      v22 = sub_B0F4C0(p_mSimpleAnimState->klass, SimpleAnimation_State_TypeInfo, 6LL);
    }
    this = (QuestRewardItemAction_StatePlay_o *)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD, long double))v22)(
                                                  klass,
                                                  *(_QWORD *)(v22 + 8),
                                                  v3);
    v23 = p_mSimpleAnimState->klass;
    if ( v23 )
    {
      v24 = v23->_1.image;
      if ( *((_WORD *)v23->_1.image + 149) )
      {
        v25 = 0LL;
        v26 = (SimpleAnimation_State_c **)(v24[22] + 8LL);
        while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v25;
          v26 += 2;
          if ( v25 >= *((unsigned __int16 *)v23->_1.image + 149) )
            goto LABEL_33;
        }
        v27 = (__int64)&v24[2 * *(_DWORD *)v26 + 55];
      }
      else
      {
LABEL_33:
        v27 = sub_B0F4C0(v23, SimpleAnimation_State_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(BattleServantConfConponent_c *, _QWORD, float))v27)(v23, *(_QWORD *)(v27 + 8), 1.0);
      this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
      if ( this )
      {
        this = (QuestRewardItemAction_StatePlay_o *)SimpleAnimation__Play_16815192(
                                                      (SimpleAnimation_o *)this,
                                                      that->fields.playAnimationName,
                                                      0LL);
        goto LABEL_40;
      }
    }
LABEL_50:
    sub_B7769C(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
    if ( !this )
      goto LABEL_50;
    v17 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                              (UnityEngine_Animation_o *)this,
                                              that->fields.playAnimationName,
                                              0LL);
    this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_TrackedReference__op_Inequality(v17, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( that->fields.mIsFromTreasureBox )
      {
        mTreasureAnimStartTime = that->fields.mTreasureAnimStartTime;
        if ( !v17 )
          goto LABEL_50;
      }
      else
      {
        mTreasureAnimStartTime = 0.0;
        if ( !v17 )
          goto LABEL_50;
      }
      UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)v17, mTreasureAnimStartTime, 0LL);
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)v17, 1.0, 0LL);
      this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
      if ( !this )
        goto LABEL_50;
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Animation__Play_51745976(
                                                    (UnityEngine_Animation_o *)this,
                                                    that->fields.playAnimationName,
                                                    0LL);
    }
  }
LABEL_40:
  appearEffObjDispList = that->fields.appearEffObjDispList;
  if ( !appearEffObjDispList )
    goto LABEL_50;
  max_length = appearEffObjDispList->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v32 = sub_B776C8(this);
        sub_B77668(v32, 0LL);
      }
      this = (QuestRewardItemAction_StatePlay_o *)appearEffObjDispList->m_Items[i];
      if ( that->fields.mIsFromTreasureBox )
      {
        v31 = !that->fields.mTreasureEffectOff;
        if ( !this )
          goto LABEL_50;
      }
      else
      {
        v31 = 1;
        if ( !this )
          goto LABEL_50;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v31, 0LL);
      max_length = appearEffObjDispList->max_length;
    }
  }
}


void __fastcall QuestRewardItemAction_StatePlay__end(
        QuestRewardItemAction_StatePlay_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StatePlay__update(
        QuestRewardItemAction_StatePlay_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x21
  int max_length; // w8
  unsigned int v6; // w22
  Il2CppClass **v7; // x8
  UnityEngine_GameObject_o *v8; // x20
  _BOOL4 v9; // w9
  _BOOL4 v10; // w8
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  int32_t v13; // w1
  __int64 v14; // x0

  if ( (byte_438B1A7 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (QuestRewardItemAction_StatePlay_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_438B1A7 = 1;
  }
  if ( !that )
    goto LABEL_43;
  appearEffObjDispList = that->fields.appearEffObjDispList;
  if ( !appearEffObjDispList )
    goto LABEL_43;
  max_length = appearEffObjDispList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v14 = sub_B776C8(this);
        sub_B77668(v14, 0LL);
      }
      v7 = &appearEffObjDispList->obj.klass + (int)v6;
      v8 = (UnityEngine_GameObject_o *)v7[4];
      if ( !v8 )
        break;
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_GameObject__get_activeSelf(
                                                    (UnityEngine_GameObject_o *)v7[4],
                                                    0LL);
      v9 = !that->fields.mIsFromTreasureBox || !that->fields.mTreasureEffectOff;
      if ( v9 != ((unsigned __int8)this & 1) )
      {
        v10 = !that->fields.mIsFromTreasureBox || !that->fields.mTreasureEffectOff;
        UnityEngine_GameObject__SetActive(v8, v10, 0LL);
      }
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_18;
    }
LABEL_43:
    sub_B7769C(this, that);
  }
LABEL_18:
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
      goto LABEL_43;
    if ( SimpleAnimation__IsPlaying((SimpleAnimation_o *)this, that->fields.playAnimationName, 0LL) )
      return;
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
      return;
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
    if ( !this )
      goto LABEL_43;
    if ( UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)this, that->fields.playAnimationName, 0LL) )
      return;
  }
  this = (QuestRewardItemAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_43;
  if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
  {
    if ( that->fields.mLabelAnimate )
    {
      v13 = 2;
    }
    else
    {
      if ( that->fields.mGetSEonProgram )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(4, 0LL);
      }
      v13 = 3;
    }
    QuestRewardItemAction__SetState(that, v13, 0LL);
  }
}


void __fastcall QuestRewardItemAction_StateTouchWait___ctor(
        QuestRewardItemAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateTouchWait__CheckTutorial(
        QuestRewardItemAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_438B1A9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__);
    byte_438B1A9 = 1;
  }
  if ( EventTutorialMaster__IsTutorialAvailable(0, 75, 0, 0, 0, 0, 0LL) )
  {
    this->fields.waitTutorial = 1;
    v3 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__,
      0LL);
    EventTutorialMaster__CheckTutorial(0, 75, v3, 0, 0, 0, 0, 0LL);
  }
  else
  {
    this->fields.waitTutorial = 0;
  }
}


void __fastcall QuestRewardItemAction_StateTouchWait__begin(
        QuestRewardItemAction_StateTouchWait_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  QuestRewardItemAction_StateTouchWait_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( !that
    || (v3 = this, (this = (QuestRewardItemAction_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0LL)
    || (this = (QuestRewardItemAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL)) == 0LL )
  {
    sub_B7769C(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  QuestRewardItemAction_StateTouchWait__CheckTutorial(v3, v4);
}


void __fastcall QuestRewardItemAction_StateTouchWait__end(
        QuestRewardItemAction_StateTouchWait_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardItemAction_StateTouchWait__update(
        QuestRewardItemAction_StateTouchWait_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x19
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x22

  if ( (byte_438B1A8 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__);
    sub_B775C4(&QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo);
    byte_438B1A8 = 1;
  }
  v5 = sub_B77694(QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo);
  QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0___ctor(
    (QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = that;
  v14 = v5 + 16;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)that, v8, v9, v10, v11, v12, v13);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) && !this->fields.waitTutorial )
  {
    gameObject = (UnityEngine_Component_o *)AndroidBackKeyManager_TypeInfo;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      gameObject = (UnityEngine_Component_o *)AndroidBackKeyManager_TypeInfo;
    }
    **(_BYTE **)&gameObject[7].fields.m_CachedPtr = 0;
    if ( *(_QWORD *)v14 )
    {
      gameObject = *(UnityEngine_Component_o **)(*(_QWORD *)v14 + 216LL);
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v16 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v16 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
          v18 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(
            v18,
            (Il2CppObject *)v5,
            Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v18, 0LL);
            gameObject = *(UnityEngine_Component_o **)v14;
            if ( *(_QWORD *)v14 )
            {
              QuestRewardItemAction__SetState((QuestRewardItemAction_o *)gameObject, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_B7769C(gameObject, v7);
  }
}


void __fastcall QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0___ctor(
        QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0___update_b__0(
        QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardItemAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B7769C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}