void __fastcall QuestRewardItemAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD602 & 1) == 0 )
  {
    sub_B16FFC(&QuestRewardItemAction_TypeInfo, v1);
    byte_40FD602 = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array **v12; // x1
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_40FD601 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16710/*"bit_item_get01"*/, method);
    sub_B16FFC(&StringLiteral_16712/*"bit_item_get01_3"*/, v9);
    sub_B16FFC(&StringLiteral_16713/*"bit_item_get01_4"*/, v10);
    sub_B16FFC(&StringLiteral_16711/*"bit_item_get01_2"*/, v11);
    byte_40FD601 = 1;
  }
  this->fields.mLabelAnimate = 1;
  this->fields.mTreasureAnimStartTime = 1.0;
  *(_WORD *)&this->fields.mTreasureEffectOff = 257;
  v12 = (System_Int32_array **)StringLiteral_16710/*"bit_item_get01"*/;
  this->fields.ANIMATION_NAME_1_TYPE = (struct System_String_o *)StringLiteral_16710/*"bit_item_get01"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.ANIMATION_NAME_1_TYPE, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_16711/*"bit_item_get01_2"*/;
  this->fields.DIFF_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_16711/*"bit_item_get01_2"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.DIFF_ANIMATION_NAME_2_TYPES,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Int32_array **)StringLiteral_16712/*"bit_item_get01_3"*/;
  this->fields.DIFF_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_16712/*"bit_item_get01_3"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.DIFF_ANIMATION_NAME_3_TYPES,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Int32_array **)StringLiteral_16713/*"bit_item_get01_4"*/;
  this->fields.DIFF_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_16713/*"bit_item_get01_4"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.DIFF_ANIMATION_NAME_4_TYPES,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Int32_array **)StringLiteral_16711/*"bit_item_get01_2"*/;
  this->fields.SAME_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_16711/*"bit_item_get01_2"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.SAME_ANIMATION_NAME_2_TYPES,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (System_Int32_array **)StringLiteral_16712/*"bit_item_get01_3"*/;
  this->fields.SAME_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_16712/*"bit_item_get01_3"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.SAME_ANIMATION_NAME_3_TYPES,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = (System_Int32_array **)StringLiteral_16713/*"bit_item_get01_4"*/;
  this->fields.SAME_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_16713/*"bit_item_get01_4"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.SAME_ANIMATION_NAME_4_TYPES,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardItemAction__Awake(QuestRewardItemAction_o *this, const MethodInfo *method)
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
  __int64 v13; // x1
  __int64 v14; // x1
  struct CStateManager_QuestRewardItemAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  QuestRewardItemAction_StateNone_o *v28; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  QuestRewardItemAction_StatePlay_o *v34; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  QuestRewardItemAction_StateItemLabel_o *v40; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  QuestRewardItemAction_StateTouchWait_o *v46; // x21
  const MethodInfo *v47; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v50; // x21
  UnityEngine_GameObject_o *v51; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD5F7 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardItemAction___ctor__, method);
    sub_B16FFC(&Method_CStateManager_QuestRewardItemAction__add__, v6);
    sub_B16FFC(&CStateManager_QuestRewardItemAction__TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&QuestRewardItemAction_StateItemLabel_TypeInfo, v11);
    sub_B16FFC(&QuestRewardItemAction_StateNone_TypeInfo, v12);
    sub_B16FFC(&QuestRewardItemAction_StatePlay_TypeInfo, v13);
    sub_B16FFC(&QuestRewardItemAction_StateTouchWait_TypeInfo, v14);
    byte_40FD5F7 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v16 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_QuestRewardItemAction__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v16,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2907EF0 *)Method_CStateManager_QuestRewardItemAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardItemAction__o *)v16;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    mFSM = this->fields.mFSM;
    v28 = (QuestRewardItemAction_StateNone_o *)sub_B170CC(QuestRewardItemAction_StateNone_TypeInfo, v24, v25, v26, v27);
    QuestRewardItemAction_StateNone___ctor(v28, 0LL);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v28,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardItemAction__add__);
    v29 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v34 = (QuestRewardItemAction_StatePlay_o *)sub_B170CC(QuestRewardItemAction_StatePlay_TypeInfo, v30, v31, v32, v33);
    QuestRewardItemAction_StatePlay___ctor(v34, 0LL);
    if ( !v29 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v29,
      1,
      (IState_T__o *)v34,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardItemAction__add__);
    v35 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v40 = (QuestRewardItemAction_StateItemLabel_o *)sub_B170CC(
                                                      QuestRewardItemAction_StateItemLabel_TypeInfo,
                                                      v36,
                                                      v37,
                                                      v38,
                                                      v39);
    QuestRewardItemAction_StateItemLabel___ctor(v40, 0LL);
    if ( !v35 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v35,
      2,
      (IState_T__o *)v40,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardItemAction__add__);
    v41 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v46 = (QuestRewardItemAction_StateTouchWait_o *)sub_B170CC(
                                                      QuestRewardItemAction_StateTouchWait_TypeInfo,
                                                      v42,
                                                      v43,
                                                      v44,
                                                      v45);
    QuestRewardItemAction_StateTouchWait___ctor(v46, 0LL);
    if ( !v41 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v41,
      3,
      (IState_T__o *)v46,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardItemAction__add__);
    QuestRewardItemAction__SetState(this, 0, v47);
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
      v50 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v51 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v50,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v51, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v51, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v51, zero, 0LL);
        if ( v51 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v51,
                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v51;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v51,
              v53,
              v54,
              v55,
              v56,
              v57,
              v58);
            return;
          }
        }
LABEL_25:
        sub_B170D4();
      }
    }
  }
}


void __fastcall QuestRewardItemAction__CommonSetUpEndAction(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_GameObject_o *v19; // x0
  AndroidBackKeyManager_c *v20; // x0

  if ( (byte_40FD5FD & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FD5FD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_mScreenTouchInfo = (UnityEngine_Component_o **)&this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(Instance, transform, 0, 0LL);
      if ( ScreeenTouchInfo )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           ScreeenTouchInfo,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (UnityEngine_Component_o *)Component_srcLineSprite;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
          Component_srcLineSprite,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        goto LABEL_11;
      }
    }
LABEL_17:
    sub_B170D4();
  }
LABEL_11:
  if ( !*p_mScreenTouchInfo )
    goto LABEL_17;
  v19 = UnityEngine_Component__get_gameObject(*p_mScreenTouchInfo, 0LL);
  if ( !v19 )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(v19, 0, 0LL);
  v20 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v20 = AndroidBackKeyManager_TypeInfo;
  }
  v20->static_fields->ToastEnabled = 1;
}


int32_t __fastcall QuestRewardItemAction__GetState(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x8

  if ( (byte_40FD5FF & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardItemAction__getState__, method);
    byte_40FD5FF = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  SimpleAnimation_o *v20; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v23; // x20
  unsigned __int64 v24; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x20
  const MethodInfo *v28; // x2
  UnityEngine_Animation_o *v29; // x0
  UnityEngine_AnimationState_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v36; // x0
  System_Action_o *v37; // x21

  if ( (byte_40FD5FE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, is_from_treasure_box);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_QuestRewardItemAction__Play_b__49_0__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v17);
    byte_40FD5FE = 1;
  }
  this->fields.mIsFromTreasureBox = is_from_treasure_box;
  this->fields.mEndAct = end_act;
  sub_B16F98(
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
    v20 = this->fields.mSimpleAnimation;
    if ( !v20 )
      goto LABEL_34;
    Item = SimpleAnimation__get_Item(v20, this->fields.playAnimationName, 0LL);
    if ( !Item )
      goto LABEL_34;
    klass = Item->klass;
    v23 = Item;
    if ( *(_WORD *)&Item->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v24;
        p_offset += 2;
        if ( v24 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v23, *(_QWORD *)(p_method + 8), 0.0);
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
      v29 = this->fields.mAnimation;
      if ( !v29 )
        goto LABEL_34;
      v30 = UnityEngine_Animation__get_Item(v29, this->fields.playAnimationName, 0LL);
      if ( UnityEngine_TrackedReference__op_Inequality((UnityEngine_TrackedReference_o *)v30, 0LL, 0LL) )
      {
        if ( !v30 )
          goto LABEL_34;
        UnityEngine_AnimationState__set_speed(v30, 0.0, 0LL);
      }
    }
  }
  if ( this->fields.mIsFromTreasureBox )
    QuestRewardItemAction__SetState(this, 1, v28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v36 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v36 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v36->static_fields->DEFAULT_FADE_TIME;
  }
  v37 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_QuestRewardItemAction__Play_b__49_0__, 0LL);
  if ( !Instance )
LABEL_34:
    sub_B170D4();
  CommonUI__maskFadein(Instance, fade_in_time, v37, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetActiveLabelList(
        QuestRewardItemAction_o *this,
        UILabel_array *itemLabelList,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v6; // x21
  bool v7; // w20
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0

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
            sub_B17100(this, itemLabelList, isActive);
            sub_B170A0();
          }
          v8 = (UnityEngine_Component_o *)itemLabelList->m_Items[v6];
          if ( !v8 || (gameObject = UnityEngine_Component__get_gameObject(v8, 0LL)) == 0LL )
            sub_B170D4();
          UnityEngine_GameObject__SetActive(gameObject, v7, 0LL);
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
  __int64 v6; // x1
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
  System_String_o *CrossOperatorString; // x0
  int32_t type; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x0
  WarEntity_o *v21; // x0
  Il2CppObject *age; // x22
  Il2CppObject *CountableString; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x0
  System_String_o *Name; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x0
  WarEntity_o *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v29; // x22
  System_String_o *v30; // x23
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  QuestRewardItemAction_c *v33; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FD5FC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EquipMaster___, itemLabel);
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v14);
    sub_B16FFC(&QuestRewardItemAction_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_10878/*"QUEST_CLEAR_REWARD_GET"*/, v16);
    sub_B16FFC(&StringLiteral_1/*""*/, v17);
    byte_40FD5FC = 1;
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
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      Master_WarQuestSelectionMaster,
                                      questInfoReward->fields.objectId,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
        {
          Name = ServantEntity__getName(Entity, -1, -1, 0LL);
LABEL_27:
          age = (Il2CppObject *)Name;
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
      v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EquipMaster___);
      if ( v27 )
      {
        v28 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v27,
                questInfoReward->fields.objectId,
                (const MethodInfo_266F388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
        if ( v28 )
        {
          v29 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v28->fields.name;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v29, 0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_37:
    sub_B170D4();
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v20 )
    goto LABEL_37;
  v21 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v20,
          questInfoReward->fields.objectId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !v21 )
    goto LABEL_37;
  age = (Il2CppObject *)v21->fields.age;
  CountableString = (Il2CppObject *)ItemType__GetCountableString(v21->fields.bannerId, 0LL);
LABEL_28:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_10878/*"QUEST_CLEAR_REWARD_GET"*/, 0LL);
  num = questInfoReward->fields.num;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
  v32 = System_String__Format_43744796(v30, age, CountableString, v31, 0LL);
  if ( !itemLabel )
    goto LABEL_37;
  UILabel__set_text(itemLabel, v32, 0LL);
  v33 = QuestRewardItemAction_TypeInfo;
  if ( (BYTE3(QuestRewardItemAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRewardItemAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo);
    v33 = QuestRewardItemAction_TypeInfo;
  }
  UILabel__SetCondensedScale(itemLabel, v33->static_fields->ITEM_LABEL_MAX_WIDTH, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemLabel, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetState(QuestRewardItemAction_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x0

  if ( (byte_40FD600 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardItemAction__setState__, *(_QWORD *)&state);
    byte_40FD600 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_QuestRewardItemAction__setState__);
}


void __fastcall QuestRewardItemAction__Setup(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *qri,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *transform; // x0
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_mAnimation; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Component_o *v21; // x0
  struct SimpleAnimation_o *v22; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Component_o *v30; // x0
  UIWidget_o *v31; // x0
  UnityEngine_Object_o *v32; // x24
  UIWidget_o *v33; // x21
  UnityEngine_Object_o *monitor; // x0
  UnityEngine_Animation_o *v35; // x23
  struct System_String_o *name; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_Component_o *mItemLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  QuestRewardItemAction_o *v45; // x0
  const MethodInfo *v46; // x3
  QuestRewardItemAction_o *v47; // x0
  const MethodInfo *v48; // x3
  QuestRewardItemAction_o *v49; // x0
  const MethodInfo *v50; // x3
  __int64 v51; // x2
  __int64 v52; // x0
  __int64 v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x22
  __int64 v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **mAppearEffObj; // x22
  __int64 v75; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UISprite_o *mItemSp; // x0
  UnityEngine_Object_o *mServantFaceIcon; // x21
  UnityEngine_Component_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  ServantFaceIconComponent_o *v86; // x0
  QuestRewardItemAction_o *v87; // x0
  const MethodInfo *v88; // x3
  UnityEngine_Object_o *v89; // x21
  UnityEngine_Component_o *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  UnityEngine_Component_o *v92; // x0
  UnityEngine_GameObject_o *v93; // x0
  UIWidget_o *Component_UIWidget; // x0
  const MethodInfo *v95; // x1

  if ( (byte_40FD5F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, qri);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v6);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v7);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&UILabel___TypeInfo, v10);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    byte_40FD5F9 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_54;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  p_mAnimation = &this->fields.mAnimation;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v21 )
    goto LABEL_54;
  v22 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      v21,
                                      (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v22;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v30 )
    goto LABEL_54;
  v31 = UnityEngine_Component__GetComponentInChildren_UIWidget_(
          v30,
          (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  v32 = (UnityEngine_Object_o *)*p_mSimpleAnimation;
  v33 = v31;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
  {
    if ( !*p_mSimpleAnimation )
      goto LABEL_54;
    monitor = (UnityEngine_Object_o *)(*p_mSimpleAnimation)[1].monitor;
    if ( !monitor )
      goto LABEL_54;
    goto LABEL_19;
  }
  v35 = *p_mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0LL, 0LL) )
    goto LABEL_20;
  if ( !*p_mAnimation || (monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(*p_mAnimation, 0LL)) == 0LL )
LABEL_54:
    sub_B170D4();
LABEL_19:
  name = UnityEngine_Object__get_name(monitor, 0LL);
  this->fields.playAnimationName = name;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.playAnimationName,
    (System_Int32_array **)name,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
LABEL_20:
  if ( !v33 )
    goto LABEL_54;
  *(&v33->fields.mAnchorsCached + 5) = 1;
  mItemLabel = (UnityEngine_Component_o *)this->fields.mItemLabel;
  if ( !mItemLabel )
    goto LABEL_54;
  gameObject = UnityEngine_Component__get_gameObject(mItemLabel, 0LL);
  if ( !gameObject )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  QuestRewardItemAction__SetActiveLabelList(v45, this->fields.mItemLabelList_2, 0, v46);
  QuestRewardItemAction__SetActiveLabelList(v47, this->fields.mItemLabelList_3, 0, v48);
  QuestRewardItemAction__SetActiveLabelList(v49, this->fields.mItemLabelList_4, 0, v50);
  v52 = sub_B17014(UILabel___TypeInfo, 1LL, v51);
  if ( !v52 )
    goto LABEL_54;
  v60 = (System_Int32_array **)this->fields.mItemLabel;
  v61 = v52;
  if ( v60 )
  {
    v52 = sub_B170BC(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)v52 + 64LL));
    if ( !v52 )
      goto LABEL_56;
  }
  if ( !*(_DWORD *)(v61 + 24) )
    goto LABEL_55;
  *(_QWORD *)(v61 + 32) = v60;
  sub_B16F98((BattleServantConfConponent_o *)(v61 + 32), v60, v54, v55, v56, v57, v58, v59);
  this->fields.itemLabelDispList = (struct UILabel_array *)v61;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemLabelDispList,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v52 = sub_B17014(UnityEngine_GameObject___TypeInfo, 1LL, v68);
  if ( !v52 )
    goto LABEL_54;
  mAppearEffObj = (System_Int32_array **)this->fields.mAppearEffObj;
  v75 = v52;
  if ( mAppearEffObj )
  {
    v52 = sub_B170BC(this->fields.mAppearEffObj, *(_QWORD *)(*(_QWORD *)v52 + 64LL));
    if ( !v52 )
    {
LABEL_56:
      sub_B170F4(v52);
      sub_B170A0();
    }
  }
  if ( !*(_DWORD *)(v75 + 24) )
  {
LABEL_55:
    sub_B17100(v52, v53, v54);
    sub_B170A0();
  }
  *(_QWORD *)(v75 + 32) = mAppearEffObj;
  sub_B16F98((BattleServantConfConponent_o *)(v75 + 32), mAppearEffObj, v54, v69, v70, v71, v72, v73);
  this->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)v75;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
    (System_Int32_array **)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  if ( !qri )
    goto LABEL_54;
  if ( qri->fields.type == 1 )
  {
    mItemSp = this->fields.mItemSp;
    if ( !mItemSp )
      goto LABEL_54;
    UISprite__set_spriteName(mItemSp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mServantFaceIcon = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(mServantFaceIcon, 0LL, 0LL) )
    {
      v84 = (UnityEngine_Component_o *)this->fields.mServantFaceIcon;
      if ( !v84 )
        goto LABEL_54;
      v85 = UnityEngine_Component__get_gameObject(v84, 0LL);
      if ( !v85 )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive(v85, 1, 0LL);
    }
    v86 = this->fields.mServantFaceIcon;
    if ( !v86 )
      goto LABEL_54;
    ServantFaceIconComponent__Set_30702780(v86, qri->fields.objectId, 0, 0, 0, 0LL, 0LL, 2, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  }
  else
  {
    v89 = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v89, 0LL, 0LL) )
    {
      v90 = (UnityEngine_Component_o *)this->fields.mServantFaceIcon;
      if ( !v90 )
        goto LABEL_54;
      v91 = UnityEngine_Component__get_gameObject(v90, 0LL);
      if ( !v91 )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive(v91, 0, 0LL);
    }
    v92 = (UnityEngine_Component_o *)this->fields.mItemSp;
    if ( !v92 )
      goto LABEL_54;
    v93 = UnityEngine_Component__get_gameObject(v92, 0LL);
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           v93,
                           (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    if ( !Component_UIWidget )
      goto LABEL_54;
    ItemIconComponent__SetGift(
      (ItemIconComponent_o *)Component_UIWidget,
      qri->fields.type,
      qri->fields.objectId,
      qri->fields.num,
      0,
      0LL);
  }
  QuestRewardItemAction__SetClearTextLabel(v87, this->fields.mItemLabel, qri, v88);
  QuestRewardItemAction__CommonSetUpEndAction(this, v95);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetupMultipleQuestRewardInfo(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *questInfoReward,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Component_o *transform; // x0
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Component_o *v19; // x0
  struct SimpleAnimation_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Component_o *v27; // x0
  UIWidget_o *v28; // x0
  UnityEngine_Component_o *mItemLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  QuestRewardItemAction_o *v31; // x0
  const MethodInfo *v32; // x3
  QuestRewardItemAction_o *v33; // x0
  const MethodInfo *v34; // x3
  QuestRewardItemAction_o *v35; // x0
  const MethodInfo *v36; // x3
  __int64 v37; // x2
  __int64 v38; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x22
  __int64 v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **mAppearEffObj; // x21
  __int64 v61; // x22
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  int32_t num; // w8
  struct System_String_o *SAME_ANIMATION_NAME_2_TYPES; // x1
  struct UISprite_array *mItemSpList_3; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_3; // x23
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct UnityEngine_GameObject_array *mAppearEffObjList_3; // x1
  struct System_String_o *SAME_ANIMATION_NAME_3_TYPES; // x1
  struct System_String_o *SAME_ANIMATION_NAME_4_TYPES; // x1
  const MethodInfo *v87; // x3
  __int64 v88; // x21
  ServantFaceIconComponent_o **m_Items; // x24
  UISprite_o **v90; // x25
  UnityEngine_Component_o *v91; // x0
  UnityEngine_Transform_o *v92; // x0
  float v93; // s0
  float v94; // s2
  UnityEngine_Component_o *v95; // x0
  float v96; // s8
  float v97; // s9
  UnityEngine_Transform_o *v98; // x0
  UISprite_o *v99; // x0
  __int64 v100; // x8
  UnityEngine_Component_o *v101; // x0
  UnityEngine_GameObject_o *v102; // x0
  ServantFaceIconComponent_o *v103; // x0
  __int64 v104; // x8
  UnityEngine_Component_o *v105; // x0
  UnityEngine_GameObject_o *v106; // x0
  UnityEngine_Component_o *v107; // x0
  UnityEngine_GameObject_o *v108; // x0
  UIWidget_o *Component_UIWidget; // x0
  const MethodInfo *v110; // x1
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD5FB & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, questInfoReward);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v6);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v7);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v8);
    sub_B16FFC(&UILabel___TypeInfo, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40FD5FB = 1;
  }
  if ( this->fields.mItemSpList_2 && this->fields.mItemLabelList_3 && this->fields.mItemLabelList_4 )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_59;
    ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                       transform,
                                                                       (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    this->fields.mAnimation = ComponentInChildren_UIWidget;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mAnimation,
      (System_Int32_array **)ComponentInChildren_UIWidget,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v19 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v19 )
      goto LABEL_59;
    v20 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                        v19,
                                        (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    this->fields.mSimpleAnimation = v20;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
      (System_Int32_array **)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v27 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v27 )
      goto LABEL_59;
    v28 = UnityEngine_Component__GetComponentInChildren_UIWidget_(
            v27,
            (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    if ( !v28 )
      goto LABEL_59;
    *(&v28->fields.mAnchorsCached + 5) = 1;
    mItemLabel = (UnityEngine_Component_o *)this->fields.mItemLabel;
    if ( !mItemLabel )
      goto LABEL_59;
    gameObject = UnityEngine_Component__get_gameObject(mItemLabel, 0LL);
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    QuestRewardItemAction__SetActiveLabelList(v31, this->fields.mItemLabelList_2, 0, v32);
    QuestRewardItemAction__SetActiveLabelList(v33, this->fields.mItemLabelList_3, 0, v34);
    QuestRewardItemAction__SetActiveLabelList(v35, this->fields.mItemLabelList_4, 0, v36);
    v38 = sub_B17014(UILabel___TypeInfo, 1LL, v37);
    if ( !v38 )
      goto LABEL_59;
    v46 = (System_Int32_array **)this->fields.mItemLabel;
    v47 = v38;
    if ( v46 )
    {
      v38 = sub_B170BC(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
      if ( !v38 )
        goto LABEL_61;
    }
    if ( !*(_DWORD *)(v47 + 24) )
      goto LABEL_60;
    *(_QWORD *)(v47 + 32) = v46;
    sub_B16F98((BattleServantConfConponent_o *)(v47 + 32), v46, v40, v41, v42, v43, v44, v45);
    this->fields.itemLabelDispList = (struct UILabel_array *)v47;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.itemLabelDispList,
      (System_Int32_array **)v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    v38 = sub_B17014(UnityEngine_GameObject___TypeInfo, 1LL, v54);
    if ( !v38 )
      goto LABEL_59;
    mAppearEffObj = (System_Int32_array **)this->fields.mAppearEffObj;
    v61 = v38;
    if ( mAppearEffObj )
    {
      v38 = sub_B170BC(this->fields.mAppearEffObj, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
      if ( !v38 )
      {
LABEL_61:
        sub_B170F4(v38);
        sub_B170A0();
      }
    }
    if ( !*(_DWORD *)(v61 + 24) )
      goto LABEL_60;
    *(_QWORD *)(v61 + 32) = mAppearEffObj;
    sub_B16F98((BattleServantConfConponent_o *)(v61 + 32), mAppearEffObj, v40, v55, v56, v57, v58, v59);
    this->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)v61;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
      (System_Int32_array **)v61,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    if ( !questInfoReward )
LABEL_59:
      sub_B170D4();
    num = questInfoReward->fields.num;
    if ( num == 3 )
    {
      SAME_ANIMATION_NAME_3_TYPES = this->fields.SAME_ANIMATION_NAME_3_TYPES;
      mItemSpList_3 = this->fields.mItemSpList_3;
      mServantFaceIconList_3 = this->fields.mServantFaceIconList_3;
      this->fields.playAnimationName = SAME_ANIMATION_NAME_3_TYPES;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)SAME_ANIMATION_NAME_3_TYPES,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      mAppearEffObjList_3 = this->fields.mAppearEffObjList_3;
    }
    else if ( num == 2 )
    {
      SAME_ANIMATION_NAME_2_TYPES = this->fields.SAME_ANIMATION_NAME_2_TYPES;
      mItemSpList_3 = this->fields.mItemSpList_2;
      mServantFaceIconList_3 = this->fields.mServantFaceIconList_2;
      this->fields.playAnimationName = SAME_ANIMATION_NAME_2_TYPES;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)SAME_ANIMATION_NAME_2_TYPES,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      mAppearEffObjList_3 = this->fields.mAppearEffObjList_2;
    }
    else
    {
      SAME_ANIMATION_NAME_4_TYPES = this->fields.SAME_ANIMATION_NAME_4_TYPES;
      mItemSpList_3 = this->fields.mItemSpList_4;
      mServantFaceIconList_3 = this->fields.mServantFaceIconList_4;
      this->fields.playAnimationName = SAME_ANIMATION_NAME_4_TYPES;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)SAME_ANIMATION_NAME_4_TYPES,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      mAppearEffObjList_3 = this->fields.mAppearEffObjList_4;
    }
    this->fields.appearEffObjDispList = mAppearEffObjList_3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
      (System_Int32_array **)mAppearEffObjList_3,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
    v38 = UnityEngine_Mathf__Clamp_40670656(questInfoReward->fields.num, 2, 4, 0LL);
    if ( (int)v38 >= 1 )
    {
      if ( mItemSpList_3 )
      {
        v88 = 0LL;
        m_Items = mServantFaceIconList_3->m_Items;
        v90 = mItemSpList_3->m_Items;
        while ( (unsigned int)v88 < mItemSpList_3->max_length )
        {
          v91 = (UnityEngine_Component_o *)v90[v88];
          if ( !v91 )
            goto LABEL_59;
          v92 = UnityEngine_Component__get_transform(v91, 0LL);
          if ( !v92 )
            goto LABEL_59;
          *(UnityEngine_Vector3_o *)&v93 = UnityEngine_Transform__get_position(v92, 0LL);
          if ( (unsigned int)v88 >= mItemSpList_3->max_length )
            break;
          v95 = (UnityEngine_Component_o *)v90[v88];
          if ( !v95 )
            goto LABEL_59;
          v96 = v93;
          v97 = v94;
          v98 = UnityEngine_Component__get_transform(v95, 0LL);
          if ( !v98 )
            goto LABEL_59;
          v111.fields.y = 0.0;
          v111.fields.x = v96;
          v111.fields.z = v97;
          UnityEngine_Transform__set_position(v98, v111, 0LL);
          if ( questInfoReward->fields.type == 1 )
          {
            if ( (unsigned int)v88 >= mItemSpList_3->max_length )
              break;
            v99 = v90[v88];
            if ( !v99 )
              goto LABEL_59;
            UISprite__set_spriteName(v99, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            if ( !mServantFaceIconList_3 )
              goto LABEL_59;
            v100 = *(_QWORD *)&mServantFaceIconList_3->max_length;
            if ( v100 )
            {
              if ( (unsigned int)v88 >= (unsigned int)v100 )
                break;
              v101 = (UnityEngine_Component_o *)m_Items[v88];
              if ( !v101 )
                goto LABEL_59;
              v102 = UnityEngine_Component__get_gameObject(v101, 0LL);
              if ( !v102 )
                goto LABEL_59;
              UnityEngine_GameObject__SetActive(v102, 1, 0LL);
              if ( (unsigned int)v88 >= mServantFaceIconList_3->max_length )
                break;
              v103 = m_Items[v88];
              if ( !v103 )
                goto LABEL_59;
              ServantFaceIconComponent__Set_30702780(
                v103,
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
            v104 = *(_QWORD *)&mServantFaceIconList_3->max_length;
            if ( v104 )
            {
              if ( (unsigned int)v88 >= (unsigned int)v104 )
                break;
              v105 = (UnityEngine_Component_o *)m_Items[v88];
              if ( !v105 )
                goto LABEL_59;
              v106 = UnityEngine_Component__get_gameObject(v105, 0LL);
              if ( !v106 )
                goto LABEL_59;
              UnityEngine_GameObject__SetActive(v106, 0, 0LL);
            }
            if ( (unsigned int)v88 >= mItemSpList_3->max_length )
              break;
            v107 = (UnityEngine_Component_o *)v90[v88];
            if ( !v107 )
              goto LABEL_59;
            v108 = UnityEngine_Component__get_gameObject(v107, 0LL);
            Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                                   v108,
                                   (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
            if ( !Component_UIWidget )
              goto LABEL_59;
            ItemIconComponent__SetGift(
              (ItemIconComponent_o *)Component_UIWidget,
              questInfoReward->fields.type,
              questInfoReward->fields.objectId,
              1,
              0,
              0LL);
          }
          v38 = UnityEngine_Mathf__Clamp_40670656(questInfoReward->fields.num, 2, 4, 0LL);
          if ( (int)++v88 >= (int)v38 )
            goto LABEL_58;
        }
LABEL_60:
        sub_B17100(v38, v39, v40);
        sub_B170A0();
      }
      goto LABEL_59;
    }
LABEL_58:
    QuestRewardItemAction__SetClearTextLabel(
      (QuestRewardItemAction_o *)v38,
      this->fields.mItemLabel,
      questInfoReward,
      v87);
    QuestRewardItemAction__CommonSetUpEndAction(this, v110);
  }
}


void __fastcall QuestRewardItemAction__Setup_31289008(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_array *questInfoRewardList,
        bool isMultiDisp,
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
  UnityEngine_Component_o *v23; // x0
  struct SimpleAnimation_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Component_o *v31; // x0
  System_Int32_array *ClearGiftItemListDisplay; // x0
  QuestRewardInfo_o *v33; // x1
  MethodInfo *v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct UILabel_array *mItemLabelList_2; // x1
  struct UISprite_array *mItemSpList_2; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_2; // x23
  struct System_String_o *DIFF_ANIMATION_NAME_2_TYPES; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct UnityEngine_GameObject_array *mAppearEffObjList_2; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  UnityEngine_Component_o *mItemLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  QuestRewardItemAction_o *v59; // x0
  const MethodInfo *v60; // x3
  QuestRewardItemAction_o *v61; // x0
  const MethodInfo *v62; // x3
  UILabel_array *mItemLabelList_3; // x1
  bool v64; // w2
  TerminalPramsManager_c *v65; // x0
  int32_t PhaseCnt_k__BackingField; // w23
  __int64 v67; // x1
  const MethodInfo *v68; // x4
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x21
  TerminalPramsManager_c *v70; // x0
  QuestRewardInfo_o *v71; // x8
  struct UILabel_array *v72; // x1
  struct System_String_o *DIFF_ANIMATION_NAME_3_TYPES; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct UnityEngine_GameObject_array *mAppearEffObjList_3; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  UnityEngine_Component_o *v87; // x0
  UnityEngine_GameObject_o *v88; // x0
  QuestRewardItemAction_o *v89; // x0
  const MethodInfo *v90; // x3
  QuestRewardItemAction_o *v91; // x0
  const MethodInfo *v92; // x3
  UILabel_array *mItemLabelList_4; // x1
  bool v94; // w2
  struct UILabel_array *v95; // x1
  struct System_String_o *DIFF_ANIMATION_NAME_4_TYPES; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  struct UnityEngine_GameObject_array *mAppearEffObjList_4; // x1
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  UnityEngine_Component_o *v110; // x0
  UnityEngine_GameObject_o *v111; // x0
  QuestRewardItemAction_o *v112; // x0
  const MethodInfo *v113; // x3
  QuestRewardItemAction_o *v114; // x0
  const MethodInfo *v115; // x3
  signed int max_length; // w8
  __int64 v117; // x24
  il2cpp_array_size_t v118; // w27
  QuestRewardInfo_o *v119; // x21
  UISprite_o *v120; // x0
  UnityEngine_Component_o *v121; // x0
  UnityEngine_GameObject_o *v122; // x0
  ServantFaceIconComponent_o *v123; // x0
  const MethodInfo *v124; // x3
  UnityEngine_Component_o *v125; // x0
  UnityEngine_GameObject_o *v126; // x0
  UnityEngine_Component_o *v127; // x0
  UnityEngine_GameObject_o *v128; // x0
  UIWidget_o *Component_UIWidget; // x0
  struct UILabel_array *itemLabelDispList; // x8
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_40FD5FA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, questInfoRewardList);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v7);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v8);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v12);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    byte_40FD5FA = 1;
  }
  entity = 0LL;
  this->fields.isMultiDisp = isMultiDisp;
  if ( !questInfoRewardList )
    goto LABEL_76;
  if ( (int)questInfoRewardList->max_length <= 1 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6058 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, questInfoRewardList);
      byte_40F6058 = 1;
    }
    v65 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v65 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v65->static_fields->_PhaseCnt_k__BackingField;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v67);
      byte_40F6057 = 1;
    }
    v70 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
    }
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_76;
    ClearGiftItemListDisplay = (System_Int32_array *)QuestPhaseMaster__TryGetEntity(
                                                       Master_WarQuestSelectionMaster,
                                                       &entity,
                                                       v70->static_fields->_QuestId_k__BackingField,
                                                       PhaseCnt_k__BackingField + 1,
                                                       v68);
    if ( ((unsigned __int8)ClearGiftItemListDisplay & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_76;
      ClearGiftItemListDisplay = QuestPhaseEntity__GetClearGiftItemListDisplay(entity, 0LL);
      if ( !questInfoRewardList->max_length )
        goto LABEL_77;
      v71 = questInfoRewardList->m_Items[0];
      if ( !v71 )
        goto LABEL_76;
      ClearGiftItemListDisplay = (System_Int32_array *)System_Array__IndexOf_int_(
                                                         ClearGiftItemListDisplay,
                                                         v71->fields.objectId,
                                                         (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
      if ( ((unsigned int)ClearGiftItemListDisplay & 0x80000000) == 0 )
      {
        if ( !questInfoRewardList->max_length )
          goto LABEL_77;
        v33 = questInfoRewardList->m_Items[0];
        if ( v33 )
        {
          if ( v33->fields.num >= 2 )
          {
            QuestRewardItemAction__SetupMultipleQuestRewardInfo(this, v33, v34);
            return;
          }
          goto LABEL_38;
        }
LABEL_76:
        sub_B170D4();
      }
    }
LABEL_38:
    if ( !questInfoRewardList->max_length )
      goto LABEL_77;
LABEL_39:
    QuestRewardItemAction__Setup(this, questInfoRewardList->m_Items[0], v34);
    return;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_76;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v23 )
    goto LABEL_76;
  v24 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      v23,
                                      (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v31 )
    goto LABEL_76;
  ClearGiftItemListDisplay = (System_Int32_array *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                     v31,
                                                     (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !ClearGiftItemListDisplay )
    goto LABEL_76;
  BYTE1(ClearGiftItemListDisplay->m_Items[18]) = 1;
  switch ( questInfoRewardList->max_length )
  {
    case 0u:
      goto LABEL_77;
    case 2u:
      mItemLabelList_2 = this->fields.mItemLabelList_2;
      mItemSpList_2 = this->fields.mItemSpList_2;
      mServantFaceIconList_2 = this->fields.mServantFaceIconList_2;
      this->fields.itemLabelDispList = mItemLabelList_2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.itemLabelDispList,
        (System_Int32_array **)mItemLabelList_2,
        (System_String_array **)v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      DIFF_ANIMATION_NAME_2_TYPES = this->fields.DIFF_ANIMATION_NAME_2_TYPES;
      this->fields.playAnimationName = DIFF_ANIMATION_NAME_2_TYPES;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)DIFF_ANIMATION_NAME_2_TYPES,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      mAppearEffObjList_2 = this->fields.mAppearEffObjList_2;
      this->fields.appearEffObjDispList = mAppearEffObjList_2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
        (System_Int32_array **)mAppearEffObjList_2,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      mItemLabel = (UnityEngine_Component_o *)this->fields.mItemLabel;
      if ( !mItemLabel )
        goto LABEL_76;
      gameObject = UnityEngine_Component__get_gameObject(mItemLabel, 0LL);
      if ( !gameObject )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v59, this->fields.mItemLabelList_2, 1, v60);
      mItemLabelList_3 = this->fields.mItemLabelList_3;
      v64 = 0;
      goto LABEL_43;
    case 3u:
      v72 = this->fields.mItemLabelList_3;
      mItemSpList_2 = this->fields.mItemSpList_3;
      mServantFaceIconList_2 = this->fields.mServantFaceIconList_3;
      this->fields.itemLabelDispList = v72;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.itemLabelDispList,
        (System_Int32_array **)v72,
        (System_String_array **)v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      DIFF_ANIMATION_NAME_3_TYPES = this->fields.DIFF_ANIMATION_NAME_3_TYPES;
      this->fields.playAnimationName = DIFF_ANIMATION_NAME_3_TYPES;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)DIFF_ANIMATION_NAME_3_TYPES,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      mAppearEffObjList_3 = this->fields.mAppearEffObjList_3;
      this->fields.appearEffObjDispList = mAppearEffObjList_3;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
        (System_Int32_array **)mAppearEffObjList_3,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
      v87 = (UnityEngine_Component_o *)this->fields.mItemLabel;
      if ( !v87 )
        goto LABEL_76;
      v88 = UnityEngine_Component__get_gameObject(v87, 0LL);
      if ( !v88 )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive(v88, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v89, this->fields.mItemLabelList_2, 0, v90);
      mItemLabelList_3 = this->fields.mItemLabelList_3;
      v64 = 1;
LABEL_43:
      QuestRewardItemAction__SetActiveLabelList(v61, mItemLabelList_3, v64, v62);
      mItemLabelList_4 = this->fields.mItemLabelList_4;
      v94 = 0;
      break;
    case 4u:
      v95 = this->fields.mItemLabelList_4;
      mItemSpList_2 = this->fields.mItemSpList_4;
      mServantFaceIconList_2 = this->fields.mServantFaceIconList_4;
      this->fields.itemLabelDispList = v95;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.itemLabelDispList,
        (System_Int32_array **)v95,
        (System_String_array **)v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      DIFF_ANIMATION_NAME_4_TYPES = this->fields.DIFF_ANIMATION_NAME_4_TYPES;
      this->fields.playAnimationName = DIFF_ANIMATION_NAME_4_TYPES;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)DIFF_ANIMATION_NAME_4_TYPES,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102);
      mAppearEffObjList_4 = this->fields.mAppearEffObjList_4;
      this->fields.appearEffObjDispList = mAppearEffObjList_4;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
        (System_Int32_array **)mAppearEffObjList_4,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
      v110 = (UnityEngine_Component_o *)this->fields.mItemLabel;
      if ( !v110 )
        goto LABEL_76;
      v111 = UnityEngine_Component__get_gameObject(v110, 0LL);
      if ( !v111 )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive(v111, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v112, this->fields.mItemLabelList_2, 0, v113);
      QuestRewardItemAction__SetActiveLabelList(v114, this->fields.mItemLabelList_3, 0, v115);
      mItemLabelList_4 = this->fields.mItemLabelList_4;
      v94 = 1;
      break;
    default:
      goto LABEL_39;
  }
  QuestRewardItemAction__SetActiveLabelList(v91, mItemLabelList_4, v94, v92);
  max_length = questInfoRewardList->max_length;
  if ( max_length >= 1 )
  {
    v117 = 4LL;
    while ( 1 )
    {
      v118 = v117 - 4;
      if ( (int)v117 - 4 >= (unsigned int)max_length )
        break;
      v119 = (QuestRewardInfo_o *)*((_QWORD *)&questInfoRewardList->obj.klass + v117);
      if ( !v119 )
        goto LABEL_76;
      if ( v119->fields.type == 1 )
      {
        if ( !mItemSpList_2 )
          goto LABEL_76;
        if ( v118 >= mItemSpList_2->max_length )
          break;
        v120 = (UISprite_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v117);
        if ( !v120 )
          goto LABEL_76;
        UISprite__set_spriteName(v120, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !mServantFaceIconList_2 )
          goto LABEL_76;
        if ( v118 >= mServantFaceIconList_2->max_length )
          break;
        v121 = (UnityEngine_Component_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v117);
        if ( !v121 )
          goto LABEL_76;
        v122 = UnityEngine_Component__get_gameObject(v121, 0LL);
        if ( !v122 )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive(v122, 1, 0LL);
        if ( v118 >= mServantFaceIconList_2->max_length )
          break;
        v123 = (ServantFaceIconComponent_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v117);
        if ( !v123 )
          goto LABEL_76;
        ServantFaceIconComponent__Set_30702780(
          v123,
          v119->fields.objectId,
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
        if ( v118 >= mServantFaceIconList_2->max_length )
          break;
        v125 = (UnityEngine_Component_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v117);
        if ( !v125 )
          goto LABEL_76;
        v126 = UnityEngine_Component__get_gameObject(v125, 0LL);
        if ( !v126 )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive(v126, 0, 0LL);
        if ( !mItemSpList_2 )
          goto LABEL_76;
        if ( v118 >= mItemSpList_2->max_length )
          break;
        v127 = (UnityEngine_Component_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v117);
        if ( !v127 )
          goto LABEL_76;
        v128 = UnityEngine_Component__get_gameObject(v127, 0LL);
        Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                               v128,
                               (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !Component_UIWidget )
          goto LABEL_76;
        ItemIconComponent__SetGift(
          (ItemIconComponent_o *)Component_UIWidget,
          v119->fields.type,
          v119->fields.objectId,
          v119->fields.num,
          0,
          0LL);
      }
      itemLabelDispList = this->fields.itemLabelDispList;
      if ( !itemLabelDispList )
        goto LABEL_76;
      if ( v118 >= itemLabelDispList->max_length )
        break;
      QuestRewardItemAction__SetClearTextLabel(
        (QuestRewardItemAction_o *)ClearGiftItemListDisplay,
        *((UILabel_o **)&itemLabelDispList->obj.klass + v117),
        v119,
        v124);
      max_length = questInfoRewardList->max_length;
      if ( (int)++v117 - 4 >= max_length )
        goto LABEL_74;
    }
LABEL_77:
    sub_B17100(ClearGiftItemListDisplay, v33, v34);
    sub_B170A0();
  }
LABEL_74:
  QuestRewardItemAction__CommonSetUpEndAction(this, (const MethodInfo *)v33);
}


void __fastcall QuestRewardItemAction__Update(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x0

  if ( (byte_40FD5F8 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardItemAction__update__, method);
    sub_B16FFC(&CTouch_TypeInfo, v3);
    byte_40FD5F8 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_QuestRewardItemAction__update__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x19
  __int64 v20; // x8
  UnityEngine_Component_o *parent; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **gameObject; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  QuestRewardItemAction_o *v30; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  float y; // s8
  float z; // s9
  ManagerConfig_c *v40; // x0
  int WIDTH; // w24
  MoveObject_o *v42; // x21
  float x; // s10
  float v44; // s11
  float v45; // s12
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Action_o *v50; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Action_o *v55; // x23
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FA32C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v6);
    sub_B16FFC(&ManagerConfig_TypeInfo, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v9);
    sub_B16FFC(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v10);
    sub_B16FFC(&QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v11);
    byte_40FA32C = 1;
  }
  v12 = sub_B170CC(QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___ctor(
    (QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_21;
  *(_QWORD *)(v12 + 32) = that;
  v19 = v12 + 32;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)that, v13, v14, v15, v16, v17, v18);
  v20 = *(_QWORD *)(v12 + 32);
  if ( !v20 )
    goto LABEL_21;
  parent = *(UnityEngine_Component_o **)(v20 + 72);
  if ( !parent )
    goto LABEL_21;
  if ( *(_BYTE *)(v20 + 304) )
  {
    transform = UnityEngine_Component__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_21;
    parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
    if ( !parent )
      goto LABEL_21;
  }
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(parent, 0LL);
  *(_QWORD *)(v12 + 16) = gameObject;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), gameObject, v24, v25, v26, v27, v28, v29);
  v30 = *(QuestRewardItemAction_o **)(v12 + 32);
  if ( !v30 )
    goto LABEL_21;
  QuestRewardItemAction__SetActiveLabelList(v30, v30->fields.itemLabelDispList, 1, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v12 + 16),
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v12 + 24) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), Component_UIWidget, v32, v33, v34, v35, v36, v37);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v12 + 16), 0LL);
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v40 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v40 = ManagerConfig_TypeInfo;
  }
  WIDTH = v40->static_fields->WIDTH;
  v57 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v12 + 16), 0LL);
  v42 = *(MoveObject_o **)(v12 + 24);
  x = v57.fields.x;
  v44 = v57.fields.y;
  v45 = v57.fields.z;
  v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v12,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v55 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v51, v52, v53, v54);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v12,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v42
    || (v58.fields.x = (float)WIDTH,
        v58.fields.y = y,
        v58.fields.z = z,
        v59.fields.x = x,
        v59.fields.y = v44,
        v59.fields.z = v45,
        MoveObject__Play(v42, v58, v59, 0.25, v50, v55, 0.0, 17, 0LL),
        !*(_QWORD *)v19) )
  {
LABEL_21:
    sub_B170D4();
  }
  if ( *(_BYTE *)(*(_QWORD *)v19 + 201LL) )
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
    sub_B170D4();
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardItemAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B170D4();
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
  __int64 v6; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  SimpleAnimation_o *v8; // x0
  struct SimpleAnimation_State_o *Item; // x0
  struct SimpleAnimation_State_o **p_mSimpleAnimState; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct SimpleAnimation_State_o *v17; // x21
  UnityEngine_Object_o *mAnimation; // x20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Animation_o *v22; // x0
  UnityEngine_TrackedReference_o *v23; // x20
  float mTreasureAnimStartTime; // s0
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v26; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct SimpleAnimation_State_o *v29; // x20
  SimpleAnimation_State_c *v30; // x8
  unsigned __int64 v31; // x10
  SimpleAnimation_State_c **v32; // x11
  __int64 v33; // x0
  SimpleAnimation_o *v34; // x0
  UnityEngine_Animation_o *v35; // x0
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x20
  int max_length; // w8
  int i; // w21
  UnityEngine_GameObject_o *v39; // x0
  _BOOL4 v40; // w8

  if ( (byte_40FA32D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v6);
    byte_40FA32D = 1;
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
    v8 = that->fields.mSimpleAnimation;
    if ( !v8 )
      goto LABEL_50;
    Item = SimpleAnimation__get_Item(v8, that->fields.playAnimationName, 0LL);
    this->fields.mSimpleAnimState = Item;
    p_mSimpleAnimState = &this->fields.mSimpleAnimState;
    sub_B16F98(
      (BattleServantConfConponent_o *)p_mSimpleAnimState,
      (System_Int32_array **)Item,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v17 = *p_mSimpleAnimState;
    if ( that->fields.mIsFromTreasureBox )
    {
      *(float *)&v3 = that->fields.mTreasureAnimStartTime;
      if ( !v17 )
        goto LABEL_50;
    }
    else
    {
      LODWORD(v3) = 0;
      if ( !v17 )
        goto LABEL_50;
    }
    klass = v17->klass;
    if ( *(_WORD *)&v17->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v26;
        p_offset += 2;
        if ( v26 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
          goto LABEL_26;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
    }
    else
    {
LABEL_26:
      p_method = sub_AAFEF8(*p_mSimpleAnimState, SimpleAnimation_State_TypeInfo, 6LL);
    }
    (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, long double))p_method)(
      v17,
      *(_QWORD *)(p_method + 8),
      v3);
    v29 = *p_mSimpleAnimState;
    if ( v29 )
    {
      v30 = v29->klass;
      if ( *(_WORD *)&v29->klass->_2.bitflags1 )
      {
        v31 = 0LL;
        v32 = (SimpleAnimation_State_c **)&v30->_1.interfaceOffsets->offset;
        while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v31;
          v32 += 2;
          if ( v31 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
            goto LABEL_33;
        }
        v33 = (__int64)&v30->vtable[*(_DWORD *)v32 + 8].method;
      }
      else
      {
LABEL_33:
        v33 = sub_AAFEF8(v29, SimpleAnimation_State_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v33)(v29, *(_QWORD *)(v33 + 8), 1.0);
      v34 = that->fields.mSimpleAnimation;
      if ( v34 )
      {
        v19 = SimpleAnimation__Play_16380456(v34, that->fields.playAnimationName, 0LL);
        goto LABEL_40;
      }
    }
LABEL_50:
    sub_B170D4();
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( v19 )
  {
    v22 = that->fields.mAnimation;
    if ( !v22 )
      goto LABEL_50;
    v23 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v22, that->fields.playAnimationName, 0LL);
    v19 = UnityEngine_TrackedReference__op_Inequality(v23, 0LL, 0LL);
    if ( v19 )
    {
      if ( that->fields.mIsFromTreasureBox )
      {
        mTreasureAnimStartTime = that->fields.mTreasureAnimStartTime;
        if ( !v23 )
          goto LABEL_50;
      }
      else
      {
        mTreasureAnimStartTime = 0.0;
        if ( !v23 )
          goto LABEL_50;
      }
      UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)v23, mTreasureAnimStartTime, 0LL);
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)v23, 1.0, 0LL);
      v35 = that->fields.mAnimation;
      if ( !v35 )
        goto LABEL_50;
      v19 = UnityEngine_Animation__Play_49744236(v35, that->fields.playAnimationName, 0LL);
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
        sub_B17100(v19, v20, v21);
        sub_B170A0();
      }
      v39 = appearEffObjDispList->m_Items[i];
      if ( that->fields.mIsFromTreasureBox )
      {
        v40 = !that->fields.mTreasureEffectOff;
        if ( !v39 )
          goto LABEL_50;
      }
      else
      {
        v40 = 1;
        if ( !v39 )
          goto LABEL_50;
      }
      UnityEngine_GameObject__SetActive(v39, v40, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x21
  int max_length; // w8
  unsigned int v8; // w22
  Il2CppClass **v9; // x8
  UnityEngine_GameObject_o *v10; // x20
  _BOOL4 v11; // w9
  _BOOL4 v12; // w8
  UnityEngine_Object_o *mSimpleAnimation; // x20
  SimpleAnimation_o *v14; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v16; // x0
  CommonUI_o *Instance; // x0
  int32_t v18; // w1

  if ( (byte_40FA32E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (QuestRewardItemAction_StatePlay_o *)sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FA32E = 1;
  }
  if ( !that )
    goto LABEL_43;
  appearEffObjDispList = that->fields.appearEffObjDispList;
  if ( !appearEffObjDispList )
    goto LABEL_43;
  max_length = appearEffObjDispList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        sub_B17100(this, that, method);
        sub_B170A0();
      }
      v9 = &appearEffObjDispList->obj.klass + (int)v8;
      v10 = (UnityEngine_GameObject_o *)v9[4];
      if ( !v10 )
        break;
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_GameObject__get_activeSelf(
                                                    (UnityEngine_GameObject_o *)v9[4],
                                                    0LL);
      v11 = !that->fields.mIsFromTreasureBox || !that->fields.mTreasureEffectOff;
      if ( v11 != ((unsigned __int8)this & 1) )
      {
        v12 = !that->fields.mIsFromTreasureBox || !that->fields.mTreasureEffectOff;
        UnityEngine_GameObject__SetActive(v10, v12, 0LL);
      }
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_18;
    }
LABEL_43:
    sub_B170D4();
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
    v14 = that->fields.mSimpleAnimation;
    if ( !v14 )
      goto LABEL_43;
    if ( SimpleAnimation__IsPlaying(v14, that->fields.playAnimationName, 0LL) )
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
    v16 = that->fields.mAnimation;
    if ( !v16 )
      goto LABEL_43;
    if ( UnityEngine_Animation__IsPlaying(v16, that->fields.playAnimationName, 0LL) )
      return;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  if ( !CommonUI__maskFadeIsBusy(Instance, 0LL) )
  {
    if ( that->fields.mLabelAnimate )
    {
      v18 = 2;
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
      v18 = 3;
    }
    QuestRewardItemAction__SetState(that, v18, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  System_Action_o *v8; // x20

  if ( (byte_40FA330 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__, v3);
    byte_40FA330 = 1;
  }
  if ( EventTutorialMaster__IsTutorialAvailable(0, 75, 0, 0, 0, 0, 0LL) )
  {
    this->fields.waitTutorial = 1;
    v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v4, v5, v6, v7);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__,
      0LL);
    EventTutorialMaster__CheckTutorial(0, 75, v8, 0, 0, 0, 0, 0LL);
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
  UnityEngine_Component_o *mScreenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1

  if ( !that
    || (mScreenTouchInfo = (UnityEngine_Component_o *)that->fields.mScreenTouchInfo) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(mScreenTouchInfo, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  QuestRewardItemAction_StateTouchWait__CheckTutorial(this, v6);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  QuestRewardItemAction_o **v21; // x19
  AndroidBackKeyManager_c *v22; // x0
  UnityEngine_Component_o *mScreenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v30; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x22

  if ( (byte_40FA32F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, v7);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v8);
    sub_B16FFC(&CTouch_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    sub_B16FFC(&Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__, v12);
    sub_B16FFC(&QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo, v13);
    byte_40FA32F = 1;
  }
  v14 = sub_B170CC(QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo, that, method, v3, v4);
  QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0___ctor(
    (QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_25;
  *(_QWORD *)(v14 + 16) = that;
  v21 = (QuestRewardItemAction_o **)(v14 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)that, v15, v16, v17, v18, v19, v20);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) && !this->fields.waitTutorial )
  {
    v22 = AndroidBackKeyManager_TypeInfo;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      v22 = AndroidBackKeyManager_TypeInfo;
    }
    v22->static_fields->ToastEnabled = 0;
    if ( *v21 )
    {
      mScreenTouchInfo = (UnityEngine_Component_o *)(*v21)->fields.mScreenTouchInfo;
      if ( mScreenTouchInfo )
      {
        gameObject = UnityEngine_Component__get_gameObject(mScreenTouchInfo, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v30 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v30 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
          v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
          System_Action___ctor(
            v32,
            (Il2CppObject *)v14,
            Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v32, 0LL);
            if ( *v21 )
            {
              QuestRewardItemAction__SetState(*v21, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_B170D4();
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
    sub_B170D4();
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}