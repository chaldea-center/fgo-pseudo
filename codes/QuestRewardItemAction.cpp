void __fastcall QuestRewardItemAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4217D01 & 1) == 0 )
  {
    sub_B0D8A4(&QuestRewardItemAction_TypeInfo, v1);
    byte_4217D01 = 1;
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

  if ( (byte_4217D00 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16823/*"bit_item_get01"*/, method);
    sub_B0D8A4(&StringLiteral_16825/*"bit_item_get01_3"*/, v9);
    sub_B0D8A4(&StringLiteral_16826/*"bit_item_get01_4"*/, v10);
    sub_B0D8A4(&StringLiteral_16824/*"bit_item_get01_2"*/, v11);
    byte_4217D00 = 1;
  }
  this->fields.mLabelAnimate = 1;
  this->fields.mTreasureAnimStartTime = 1.0;
  *(_WORD *)&this->fields.mTreasureEffectOff = 257;
  v12 = (System_Int32_array **)StringLiteral_16823/*"bit_item_get01"*/;
  this->fields.ANIMATION_NAME_1_TYPE = (struct System_String_o *)StringLiteral_16823/*"bit_item_get01"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.ANIMATION_NAME_1_TYPE, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_16824/*"bit_item_get01_2"*/;
  this->fields.DIFF_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_16824/*"bit_item_get01_2"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.DIFF_ANIMATION_NAME_2_TYPES,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Int32_array **)StringLiteral_16825/*"bit_item_get01_3"*/;
  this->fields.DIFF_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_16825/*"bit_item_get01_3"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.DIFF_ANIMATION_NAME_3_TYPES,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Int32_array **)StringLiteral_16826/*"bit_item_get01_4"*/;
  this->fields.DIFF_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_16826/*"bit_item_get01_4"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.DIFF_ANIMATION_NAME_4_TYPES,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Int32_array **)StringLiteral_16824/*"bit_item_get01_2"*/;
  this->fields.SAME_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_16824/*"bit_item_get01_2"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.SAME_ANIMATION_NAME_2_TYPES,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (System_Int32_array **)StringLiteral_16825/*"bit_item_get01_3"*/;
  this->fields.SAME_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_16825/*"bit_item_get01_3"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.SAME_ANIMATION_NAME_3_TYPES,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = (System_Int32_array **)StringLiteral_16826/*"bit_item_get01_4"*/;
  this->fields.SAME_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_16826/*"bit_item_get01_4"*/;
  sub_B0D840(
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct CStateManager_QuestRewardItemAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  QuestRewardItemAction_StateNone_o *v24; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  CStateManager_QAASpotStateController_IMapSpot__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  QuestRewardItemAction_StatePlay_o *v29; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  QuestRewardItemAction_StateItemLabel_o *v33; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  QuestRewardItemAction_StateTouchWait_o *v37; // x21
  const MethodInfo *v38; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v41; // x21
  UnityEngine_GameObject_o *v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217CF6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardItemAction___ctor__, method);
    sub_B0D8A4(&Method_CStateManager_QuestRewardItemAction__add__, v4);
    sub_B0D8A4(&CStateManager_QuestRewardItemAction__TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v6);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&QuestRewardItemAction_StateItemLabel_TypeInfo, v9);
    sub_B0D8A4(&QuestRewardItemAction_StateNone_TypeInfo, v10);
    sub_B0D8A4(&QuestRewardItemAction_StatePlay_TypeInfo, v11);
    sub_B0D8A4(&QuestRewardItemAction_StateTouchWait_TypeInfo, v12);
    byte_4217CF6 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v14 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(
                                                                CStateManager_QuestRewardItemAction__TypeInfo,
                                                                method,
                                                                v2);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v14,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2AAF784 *)Method_CStateManager_QuestRewardItemAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardItemAction__o *)v14;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    mFSM = this->fields.mFSM;
    v24 = (QuestRewardItemAction_StateNone_o *)sub_B0D974(QuestRewardItemAction_StateNone_TypeInfo, v22, v23);
    QuestRewardItemAction_StateNone___ctor(v24, 0LL);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v24,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardItemAction__add__);
    v26 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v29 = (QuestRewardItemAction_StatePlay_o *)sub_B0D974(QuestRewardItemAction_StatePlay_TypeInfo, v27, v28);
    QuestRewardItemAction_StatePlay___ctor(v29, 0LL);
    if ( !v26 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v26,
      1,
      (IState_T__o *)v29,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardItemAction__add__);
    v30 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v33 = (QuestRewardItemAction_StateItemLabel_o *)sub_B0D974(QuestRewardItemAction_StateItemLabel_TypeInfo, v31, v32);
    QuestRewardItemAction_StateItemLabel___ctor(v33, 0LL);
    if ( !v30 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v30,
      2,
      (IState_T__o *)v33,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardItemAction__add__);
    v34 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v37 = (QuestRewardItemAction_StateTouchWait_o *)sub_B0D974(QuestRewardItemAction_StateTouchWait_TypeInfo, v35, v36);
    QuestRewardItemAction_StateTouchWait___ctor(v37, 0LL);
    if ( !v34 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v34,
      3,
      (IState_T__o *)v37,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardItemAction__add__);
    QuestRewardItemAction__SetState(this, 0, v38);
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
      v41 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v42 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v41,
                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v42, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v42, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v42, zero, 0LL);
        if ( v42 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v42,
                                                        (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v42;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v42,
              v43,
              v44,
              v45,
              v46,
              v47,
              v48);
            return;
          }
        }
LABEL_25:
        sub_B0D97C(ComponentInChildren_Dropdown_DropdownItem);
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
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  AndroidBackKeyManager_c *v17; // x0

  if ( (byte_4217CFC & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4217CFC = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      gameObject = CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)gameObject, 0, 0LL);
      if ( gameObject )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           gameObject,
                                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
          Component_srcLineSprite,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        goto LABEL_11;
      }
    }
LABEL_17:
    sub_B0D97C(gameObject);
  }
LABEL_11:
  gameObject = (UnityEngine_GameObject_o *)*p_mScreenTouchInfo;
  if ( !*p_mScreenTouchInfo )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v17 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v17 = AndroidBackKeyManager_TypeInfo;
  }
  v17->static_fields->ToastEnabled = 1;
}


int32_t __fastcall QuestRewardItemAction__GetState(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  QuestRewardItemAction_o *v2; // x19
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4217CFE & 1) == 0 )
  {
    this = (QuestRewardItemAction_o *)sub_B0D8A4(&Method_CStateManager_QuestRewardItemAction__getState__, method);
    byte_4217CFE = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(this);
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
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v21; // x20
  unsigned __int64 v22; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v24; // x0
  UnityEngine_Object_o *mAnimation; // x20
  const MethodInfo *v26; // x2
  UnityEngine_TrackedReference_o *Item; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v31; // x0
  System_Action_o *v32; // x21

  if ( (byte_4217CFD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, is_from_treasure_box);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_QuestRewardItemAction__Play_b__49_0__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v17);
    byte_4217CFD = 1;
  }
  this->fields.mIsFromTreasureBox = is_from_treasure_box;
  this->fields.mEndAct = end_act;
  sub_B0D840(
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
    v21 = gameObject;
    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v22;
        p_offset += 2;
        if ( v22 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      v24 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v24 = sub_AA67A0(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v24)(v21, *(_QWORD *)(v24 + 8), 0.0);
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
    QuestRewardItemAction__SetState(this, 1, v26);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v31 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v31 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v31->static_fields->DEFAULT_FADE_TIME;
  }
  v32 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_QuestRewardItemAction__Play_b__49_0__, 0LL);
  if ( !Instance )
LABEL_34:
    sub_B0D97C(gameObject);
  CommonUI__maskFadein(Instance, fade_in_time, v32, 0LL);
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
            v9 = sub_B0D9A8(this);
            sub_B0D948(v9, 0LL);
          }
          gameObject = (UnityEngine_Component_o *)itemLabelList->m_Items[v6];
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
          {
            sub_B0D97C(gameObject);
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
  void *CrossOperatorString; // x0
  int32_t type; // w8
  Il2CppObject *v20; // x22
  Il2CppObject *CountableString; // x21
  System_String_o *Name; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v23; // x22
  System_String_o *v24; // x23
  Il2CppObject *v25; // x0
  QuestRewardItemAction_c *v26; // x0
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4217CFB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EquipMaster___, itemLabel);
    sub_B0D8A4(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v9);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B0D8A4(&int_TypeInfo, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v14);
    sub_B0D8A4(&QuestRewardItemAction_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_10940/*"QUEST_CLEAR_REWARD_GET"*/, v16);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    byte_4217CFB = 1;
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
      CrossOperatorString = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( CrossOperatorString )
      {
        CrossOperatorString = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)CrossOperatorString,
                                questInfoReward->fields.objectId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( CrossOperatorString )
        {
          Name = ServantEntity__getName((ServantEntity_o *)CrossOperatorString, -1, -1, 0LL);
LABEL_27:
          v20 = (Il2CppObject *)Name;
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
      CrossOperatorString = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EquipMaster___);
      if ( CrossOperatorString )
      {
        CrossOperatorString = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)CrossOperatorString,
                                questInfoReward->fields.objectId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
        if ( CrossOperatorString )
        {
          v23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)CrossOperatorString + 4);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(v23, 0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_37:
    sub_B0D97C(CrossOperatorString);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CrossOperatorString = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !CrossOperatorString )
    goto LABEL_37;
  CrossOperatorString = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)CrossOperatorString,
                          questInfoReward->fields.objectId,
                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !CrossOperatorString )
    goto LABEL_37;
  v20 = (Il2CppObject *)*((_QWORD *)CrossOperatorString + 3);
  CountableString = (Il2CppObject *)ItemType__GetCountableString(*((_DWORD *)CrossOperatorString + 12), 0LL);
LABEL_28:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10940/*"QUEST_CLEAR_REWARD_GET"*/, 0LL);
  num = questInfoReward->fields.num;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
  CrossOperatorString = System_String__Format_43850968(v24, v20, CountableString, v25, 0LL);
  if ( !itemLabel )
    goto LABEL_37;
  UILabel__set_text(itemLabel, (System_String_o *)CrossOperatorString, 0LL);
  v26 = QuestRewardItemAction_TypeInfo;
  if ( (BYTE3(QuestRewardItemAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRewardItemAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo);
    v26 = QuestRewardItemAction_TypeInfo;
  }
  UILabel__SetCondensedScale(itemLabel, v26->static_fields->ITEM_LABEL_MAX_WIDTH, 0LL);
  CrossOperatorString = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemLabel, 0LL);
  if ( !CrossOperatorString )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CrossOperatorString, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetState(QuestRewardItemAction_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x0

  if ( (byte_4217CFF & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardItemAction__setState__, *(_QWORD *)&state);
    byte_4217CFF = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2AAF8F4 *)Method_CStateManager_QuestRewardItemAction__setState__);
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
  __int64 transform; // x0
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct SimpleAnimation_o *v21; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UIWidget_o *v29; // x0
  UnityEngine_Object_o *v30; // x24
  UIWidget_o *v31; // x21
  UnityEngine_Object_o *v32; // x23
  struct System_String_o *name; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  QuestRewardItemAction_o *v40; // x0
  const MethodInfo *v41; // x3
  QuestRewardItemAction_o *v42; // x0
  const MethodInfo *v43; // x3
  QuestRewardItemAction_o *v44; // x0
  const MethodInfo *v45; // x3
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **mItemLabel; // x22
  __int64 v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **mAppearEffObj; // x22
  __int64 v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UnityEngine_Object_o *mServantFaceIcon; // x21
  QuestRewardItemAction_o *v75; // x0
  const MethodInfo *v76; // x3
  UnityEngine_Object_o *v77; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v79; // x1
  __int64 v80; // x0
  __int64 v81; // x0

  if ( (byte_4217CF8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, qri);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v6);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v7);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&UILabel___TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_4217CF8 = 1;
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_54;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     (UnityEngine_Component_o *)transform,
                                                                     (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  p_mAnimation = &this->fields.mAnimation;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_54;
  v21 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      (UnityEngine_Component_o *)transform,
                                      (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v21;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_54;
  v29 = UnityEngine_Component__GetComponentInChildren_UIWidget_(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  v30 = (UnityEngine_Object_o *)*p_mSimpleAnimation;
  v31 = v29;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( !*p_mSimpleAnimation )
      goto LABEL_54;
    transform = (__int64)(*p_mSimpleAnimation)[1].monitor;
    if ( !transform )
      goto LABEL_54;
    goto LABEL_19;
  }
  v32 = (UnityEngine_Object_o *)*p_mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
  if ( (transform & 1) == 0 )
    goto LABEL_20;
  transform = (__int64)*p_mAnimation;
  if ( !*p_mAnimation
    || (transform = (__int64)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)transform, 0LL)) == 0 )
  {
LABEL_54:
    sub_B0D97C(transform);
  }
LABEL_19:
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  this->fields.playAnimationName = name;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.playAnimationName,
    (System_Int32_array **)name,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
LABEL_20:
  if ( !v31 )
    goto LABEL_54;
  *(&v31->fields.mAnchorsCached + 5) = 1;
  transform = (__int64)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_54;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  QuestRewardItemAction__SetActiveLabelList(v40, this->fields.mItemLabelList_2, 0, v41);
  QuestRewardItemAction__SetActiveLabelList(v42, this->fields.mItemLabelList_3, 0, v43);
  QuestRewardItemAction__SetActiveLabelList(v44, this->fields.mItemLabelList_4, 0, v45);
  transform = sub_B0D8BC(UILabel___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_54;
  mItemLabel = (System_Int32_array **)this->fields.mItemLabel;
  v53 = transform;
  if ( mItemLabel )
  {
    transform = sub_B0D964(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)transform + 64LL));
    if ( !transform )
      goto LABEL_56;
  }
  if ( !*(_DWORD *)(v53 + 24) )
    goto LABEL_55;
  *(_QWORD *)(v53 + 32) = mItemLabel;
  sub_B0D840((BattleServantConfConponent_o *)(v53 + 32), mItemLabel, v46, v47, v48, v49, v50, v51);
  this->fields.itemLabelDispList = (struct UILabel_array *)v53;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemLabelDispList,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  transform = sub_B0D8BC(UnityEngine_GameObject___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_54;
  mAppearEffObj = (System_Int32_array **)this->fields.mAppearEffObj;
  v67 = transform;
  if ( mAppearEffObj )
  {
    transform = sub_B0D964(this->fields.mAppearEffObj, *(_QWORD *)(*(_QWORD *)transform + 64LL));
    if ( !transform )
    {
LABEL_56:
      v81 = sub_B0D99C(transform);
      sub_B0D948(v81, 0LL);
    }
  }
  if ( !*(_DWORD *)(v67 + 24) )
  {
LABEL_55:
    v80 = sub_B0D9A8(transform);
    sub_B0D948(v80, 0LL);
  }
  *(_QWORD *)(v67 + 32) = mAppearEffObj;
  sub_B0D840((BattleServantConfConponent_o *)(v67 + 32), mAppearEffObj, v60, v61, v62, v63, v64, v65);
  this->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)v67;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
    (System_Int32_array **)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
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
    ServantFaceIconComponent__Set_29623744(
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
    v77 = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v77, 0LL, 0LL) )
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
                           (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
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
  QuestRewardItemAction__SetClearTextLabel(v75, this->fields.mItemLabel, qri, v76);
  QuestRewardItemAction__CommonSetUpEndAction(this, v79);
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
  __int64 transform; // x0
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct SimpleAnimation_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  QuestRewardItemAction_o *v26; // x0
  const MethodInfo *v27; // x3
  QuestRewardItemAction_o *v28; // x0
  const MethodInfo *v29; // x3
  QuestRewardItemAction_o *v30; // x0
  const MethodInfo *v31; // x3
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **mItemLabel; // x22
  __int64 v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **mAppearEffObj; // x21
  __int64 v53; // x22
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  int32_t num; // w8
  struct System_String_o *SAME_ANIMATION_NAME_2_TYPES; // x1
  struct UISprite_array *mItemSpList_3; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_3; // x23
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct UnityEngine_GameObject_array *mAppearEffObjList_3; // x1
  struct System_String_o *SAME_ANIMATION_NAME_3_TYPES; // x1
  struct System_String_o *SAME_ANIMATION_NAME_4_TYPES; // x1
  const MethodInfo *v79; // x3
  __int64 v80; // x21
  ServantFaceIconComponent_o **m_Items; // x24
  UISprite_o **v82; // x25
  float v83; // s0
  float v84; // s2
  float v85; // s8
  float v86; // s9
  __int64 v87; // x8
  __int64 v88; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v90; // x1
  __int64 v91; // x0
  __int64 v92; // x0
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217CFA & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, questInfoReward);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v6);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v7);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v8);
    sub_B0D8A4(&UILabel___TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4217CFA = 1;
  }
  if ( this->fields.mItemSpList_2 && this->fields.mItemLabelList_3 && this->fields.mItemLabelList_4 )
  {
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_59;
    ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                       (UnityEngine_Component_o *)transform,
                                                                       (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    this->fields.mAnimation = ComponentInChildren_UIWidget;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.mAnimation,
      (System_Int32_array **)ComponentInChildren_UIWidget,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_59;
    v19 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                        (UnityEngine_Component_o *)transform,
                                        (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    this->fields.mSimpleAnimation = v19;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
      (System_Int32_array **)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_59;
    transform = (__int64)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
    QuestRewardItemAction__SetActiveLabelList(v26, this->fields.mItemLabelList_2, 0, v27);
    QuestRewardItemAction__SetActiveLabelList(v28, this->fields.mItemLabelList_3, 0, v29);
    QuestRewardItemAction__SetActiveLabelList(v30, this->fields.mItemLabelList_4, 0, v31);
    transform = sub_B0D8BC(UILabel___TypeInfo, 1LL);
    if ( !transform )
      goto LABEL_59;
    mItemLabel = (System_Int32_array **)this->fields.mItemLabel;
    v39 = transform;
    if ( mItemLabel )
    {
      transform = sub_B0D964(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)transform + 64LL));
      if ( !transform )
        goto LABEL_61;
    }
    if ( !*(_DWORD *)(v39 + 24) )
      goto LABEL_60;
    *(_QWORD *)(v39 + 32) = mItemLabel;
    sub_B0D840((BattleServantConfConponent_o *)(v39 + 32), mItemLabel, v32, v33, v34, v35, v36, v37);
    this->fields.itemLabelDispList = (struct UILabel_array *)v39;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.itemLabelDispList,
      (System_Int32_array **)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    transform = sub_B0D8BC(UnityEngine_GameObject___TypeInfo, 1LL);
    if ( !transform )
      goto LABEL_59;
    mAppearEffObj = (System_Int32_array **)this->fields.mAppearEffObj;
    v53 = transform;
    if ( mAppearEffObj )
    {
      transform = sub_B0D964(this->fields.mAppearEffObj, *(_QWORD *)(*(_QWORD *)transform + 64LL));
      if ( !transform )
      {
LABEL_61:
        v92 = sub_B0D99C(transform);
        sub_B0D948(v92, 0LL);
      }
    }
    if ( !*(_DWORD *)(v53 + 24) )
      goto LABEL_60;
    *(_QWORD *)(v53 + 32) = mAppearEffObj;
    sub_B0D840((BattleServantConfConponent_o *)(v53 + 32), mAppearEffObj, v46, v47, v48, v49, v50, v51);
    this->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)v53;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
      (System_Int32_array **)v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    if ( !questInfoReward )
LABEL_59:
      sub_B0D97C(transform);
    num = questInfoReward->fields.num;
    if ( num == 3 )
    {
      SAME_ANIMATION_NAME_3_TYPES = this->fields.SAME_ANIMATION_NAME_3_TYPES;
      mItemSpList_3 = this->fields.mItemSpList_3;
      mServantFaceIconList_3 = this->fields.mServantFaceIconList_3;
      this->fields.playAnimationName = SAME_ANIMATION_NAME_3_TYPES;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)SAME_ANIMATION_NAME_3_TYPES,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
      mAppearEffObjList_3 = this->fields.mAppearEffObjList_3;
    }
    else if ( num == 2 )
    {
      SAME_ANIMATION_NAME_2_TYPES = this->fields.SAME_ANIMATION_NAME_2_TYPES;
      mItemSpList_3 = this->fields.mItemSpList_2;
      mServantFaceIconList_3 = this->fields.mServantFaceIconList_2;
      this->fields.playAnimationName = SAME_ANIMATION_NAME_2_TYPES;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)SAME_ANIMATION_NAME_2_TYPES,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
      mAppearEffObjList_3 = this->fields.mAppearEffObjList_2;
    }
    else
    {
      SAME_ANIMATION_NAME_4_TYPES = this->fields.SAME_ANIMATION_NAME_4_TYPES;
      mItemSpList_3 = this->fields.mItemSpList_4;
      mServantFaceIconList_3 = this->fields.mServantFaceIconList_4;
      this->fields.playAnimationName = SAME_ANIMATION_NAME_4_TYPES;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)SAME_ANIMATION_NAME_4_TYPES,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
      mAppearEffObjList_3 = this->fields.mAppearEffObjList_4;
    }
    this->fields.appearEffObjDispList = mAppearEffObjList_3;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
      (System_Int32_array **)mAppearEffObjList_3,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
    transform = UnityEngine_Mathf__Clamp_40762168(questInfoReward->fields.num, 2, 4, 0LL);
    if ( (int)transform >= 1 )
    {
      if ( mItemSpList_3 )
      {
        v80 = 0LL;
        m_Items = mServantFaceIconList_3->m_Items;
        v82 = mItemSpList_3->m_Items;
        while ( (unsigned int)v80 < mItemSpList_3->max_length )
        {
          transform = (__int64)v82[v80];
          if ( !transform )
            goto LABEL_59;
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_59;
          *(UnityEngine_Vector3_o *)&v83 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)transform,
                                             0LL);
          if ( (unsigned int)v80 >= mItemSpList_3->max_length )
            break;
          transform = (__int64)v82[v80];
          if ( !transform )
            goto LABEL_59;
          v85 = v83;
          v86 = v84;
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_59;
          v93.fields.y = 0.0;
          v93.fields.x = v85;
          v93.fields.z = v86;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v93, 0LL);
          if ( questInfoReward->fields.type == 1 )
          {
            if ( (unsigned int)v80 >= mItemSpList_3->max_length )
              break;
            transform = (__int64)v82[v80];
            if ( !transform )
              goto LABEL_59;
            UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            if ( !mServantFaceIconList_3 )
              goto LABEL_59;
            v87 = *(_QWORD *)&mServantFaceIconList_3->max_length;
            if ( v87 )
            {
              if ( (unsigned int)v80 >= (unsigned int)v87 )
                break;
              transform = (__int64)m_Items[v80];
              if ( !transform )
                goto LABEL_59;
              transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              if ( !transform )
                goto LABEL_59;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
              if ( (unsigned int)v80 >= mServantFaceIconList_3->max_length )
                break;
              transform = (__int64)m_Items[v80];
              if ( !transform )
                goto LABEL_59;
              ServantFaceIconComponent__Set_29623744(
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
            v88 = *(_QWORD *)&mServantFaceIconList_3->max_length;
            if ( v88 )
            {
              if ( (unsigned int)v80 >= (unsigned int)v88 )
                break;
              transform = (__int64)m_Items[v80];
              if ( !transform )
                goto LABEL_59;
              transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              if ( !transform )
                goto LABEL_59;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
            }
            if ( (unsigned int)v80 >= mItemSpList_3->max_length )
              break;
            transform = (__int64)v82[v80];
            if ( !transform )
              goto LABEL_59;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
            transform = (__int64)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                   gameObject,
                                   (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
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
          transform = UnityEngine_Mathf__Clamp_40762168(questInfoReward->fields.num, 2, 4, 0LL);
          if ( (int)++v80 >= (int)transform )
            goto LABEL_58;
        }
LABEL_60:
        v91 = sub_B0D9A8(transform);
        sub_B0D948(v91, 0LL);
      }
      goto LABEL_59;
    }
LABEL_58:
    QuestRewardItemAction__SetClearTextLabel(
      (QuestRewardItemAction_o *)transform,
      this->fields.mItemLabel,
      questInfoReward,
      v79);
    QuestRewardItemAction__CommonSetUpEndAction(this, v90);
  }
}


void __fastcall QuestRewardItemAction__Setup_30656116(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_array *questInfoRewardList,
        bool isMultiDisp,
        const MethodInfo *method)
{
  QuestRewardItemAction_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  MethodInfo *v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **mItemLabelList_2; // x1
  struct UISprite_array *mItemSpList_2; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_2; // x23
  System_Int32_array **DIFF_ANIMATION_NAME_2_TYPES; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **mAppearEffObjList_2; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  QuestRewardItemAction_o *v52; // x0
  const MethodInfo *v53; // x3
  QuestRewardItemAction_o *v54; // x0
  const MethodInfo *v55; // x3
  UILabel_array *mItemLabelList_3; // x1
  bool v57; // w2
  TerminalPramsManager_c *v58; // x0
  int32_t PhaseCnt_k__BackingField; // w23
  __int64 v60; // x1
  const MethodInfo *v61; // x4
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x21
  QuestRewardInfo_o *v63; // x8
  QuestRewardInfo_o *v64; // x1
  System_Int32_array **v65; // x1
  System_Int32_array **DIFF_ANIMATION_NAME_3_TYPES; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **mAppearEffObjList_3; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  QuestRewardItemAction_o *v80; // x0
  const MethodInfo *v81; // x3
  QuestRewardItemAction_o *v82; // x0
  const MethodInfo *v83; // x3
  UILabel_array *mItemLabelList_4; // x1
  bool v85; // w2
  System_Int32_array **v86; // x1
  System_Int32_array **DIFF_ANIMATION_NAME_4_TYPES; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **mAppearEffObjList_4; // x1
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  QuestRewardItemAction_o *v101; // x0
  const MethodInfo *v102; // x3
  QuestRewardItemAction_o *v103; // x0
  const MethodInfo *v104; // x3
  const MethodInfo *v105; // x1
  signed int max_length; // w8
  __int64 v107; // x24
  il2cpp_array_size_t v108; // w27
  QuestRewardInfo_o *v109; // x21
  const MethodInfo *v110; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabelDispList; // x8
  __int64 v113; // x0
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4217CF9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, questInfoRewardList);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v7);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v8);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v12);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
    this = (QuestRewardItemAction_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_4217CF9 = 1;
  }
  entity = 0LL;
  v6->fields.isMultiDisp = isMultiDisp;
  if ( !questInfoRewardList )
    goto LABEL_76;
  if ( (int)questInfoRewardList->max_length <= 1 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210853 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, questInfoRewardList);
      byte_4210853 = 1;
    }
    v58 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v58 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v58->static_fields->_PhaseCnt_k__BackingField;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_4210852 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v60);
      byte_4210852 = 1;
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
                                        v61);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRewardItemAction_o *)entity;
      if ( !entity )
        goto LABEL_76;
      this = (QuestRewardItemAction_o *)QuestPhaseEntity__GetClearGiftItemListDisplay(entity, 0LL);
      if ( !questInfoRewardList->max_length )
        goto LABEL_77;
      v63 = questInfoRewardList->m_Items[0];
      if ( !v63 )
        goto LABEL_76;
      this = (QuestRewardItemAction_o *)System_Array__IndexOf_int_(
                                          (System_Int32_array *)this,
                                          v63->fields.objectId,
                                          (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        if ( !questInfoRewardList->max_length )
          goto LABEL_77;
        v64 = questInfoRewardList->m_Items[0];
        if ( v64 )
        {
          if ( v64->fields.num >= 2 )
          {
            QuestRewardItemAction__SetupMultipleQuestRewardInfo(v6, v64, v29);
            return;
          }
          goto LABEL_38;
        }
LABEL_76:
        sub_B0D97C(this);
      }
    }
LABEL_38:
    if ( !questInfoRewardList->max_length )
      goto LABEL_77;
LABEL_39:
    QuestRewardItemAction__Setup(v6, questInfoRewardList->m_Items[0], v29);
    return;
  }
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  if ( !this )
    goto LABEL_76;
  ComponentInChildren_UIWidget = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v6->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_UIWidget;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v6->fields.mAnimation,
    ComponentInChildren_UIWidget,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  if ( !this )
    goto LABEL_76;
  v22 = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v6->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v22;
  sub_B0D840((BattleServantConfConponent_o *)&v6->fields.mSimpleAnimation, v22, v23, v24, v25, v26, v27, v28);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  if ( !this )
    goto LABEL_76;
  this = (QuestRewardItemAction_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !this )
    goto LABEL_76;
  BYTE5(this->fields.mItemSpList_2) = 1;
  switch ( questInfoRewardList->max_length )
  {
    case 0u:
      goto LABEL_77;
    case 2u:
      mItemLabelList_2 = (System_Int32_array **)v6->fields.mItemLabelList_2;
      mItemSpList_2 = v6->fields.mItemSpList_2;
      mServantFaceIconList_2 = v6->fields.mServantFaceIconList_2;
      v6->fields.itemLabelDispList = (struct UILabel_array *)mItemLabelList_2;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v6->fields.itemLabelDispList,
        mItemLabelList_2,
        (System_String_array **)v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      DIFF_ANIMATION_NAME_2_TYPES = (System_Int32_array **)v6->fields.DIFF_ANIMATION_NAME_2_TYPES;
      v6->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_2_TYPES;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v6->fields.playAnimationName,
        DIFF_ANIMATION_NAME_2_TYPES,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      mAppearEffObjList_2 = (System_Int32_array **)v6->fields.mAppearEffObjList_2;
      v6->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_2;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v6->fields.appearEffObjDispList,
        mAppearEffObjList_2,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      this = (QuestRewardItemAction_o *)v6->fields.mItemLabel;
      if ( !this )
        goto LABEL_76;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v52, v6->fields.mItemLabelList_2, 1, v53);
      mItemLabelList_3 = v6->fields.mItemLabelList_3;
      v57 = 0;
      goto LABEL_43;
    case 3u:
      v65 = (System_Int32_array **)v6->fields.mItemLabelList_3;
      mItemSpList_2 = v6->fields.mItemSpList_3;
      mServantFaceIconList_2 = v6->fields.mServantFaceIconList_3;
      v6->fields.itemLabelDispList = (struct UILabel_array *)v65;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v6->fields.itemLabelDispList,
        v65,
        (System_String_array **)v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      DIFF_ANIMATION_NAME_3_TYPES = (System_Int32_array **)v6->fields.DIFF_ANIMATION_NAME_3_TYPES;
      v6->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_3_TYPES;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v6->fields.playAnimationName,
        DIFF_ANIMATION_NAME_3_TYPES,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      mAppearEffObjList_3 = (System_Int32_array **)v6->fields.mAppearEffObjList_3;
      v6->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_3;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v6->fields.appearEffObjDispList,
        mAppearEffObjList_3,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      this = (QuestRewardItemAction_o *)v6->fields.mItemLabel;
      if ( !this )
        goto LABEL_76;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v80, v6->fields.mItemLabelList_2, 0, v81);
      mItemLabelList_3 = v6->fields.mItemLabelList_3;
      v57 = 1;
LABEL_43:
      QuestRewardItemAction__SetActiveLabelList(v54, mItemLabelList_3, v57, v55);
      mItemLabelList_4 = v6->fields.mItemLabelList_4;
      v85 = 0;
      break;
    case 4u:
      v86 = (System_Int32_array **)v6->fields.mItemLabelList_4;
      mItemSpList_2 = v6->fields.mItemSpList_4;
      mServantFaceIconList_2 = v6->fields.mServantFaceIconList_4;
      v6->fields.itemLabelDispList = (struct UILabel_array *)v86;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v6->fields.itemLabelDispList,
        v86,
        (System_String_array **)v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      DIFF_ANIMATION_NAME_4_TYPES = (System_Int32_array **)v6->fields.DIFF_ANIMATION_NAME_4_TYPES;
      v6->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_4_TYPES;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v6->fields.playAnimationName,
        DIFF_ANIMATION_NAME_4_TYPES,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
      mAppearEffObjList_4 = (System_Int32_array **)v6->fields.mAppearEffObjList_4;
      v6->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_4;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v6->fields.appearEffObjDispList,
        mAppearEffObjList_4,
        v95,
        v96,
        v97,
        v98,
        v99,
        v100);
      this = (QuestRewardItemAction_o *)v6->fields.mItemLabel;
      if ( !this )
        goto LABEL_76;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v101, v6->fields.mItemLabelList_2, 0, v102);
      QuestRewardItemAction__SetActiveLabelList(v103, v6->fields.mItemLabelList_3, 0, v104);
      mItemLabelList_4 = v6->fields.mItemLabelList_4;
      v85 = 1;
      break;
    default:
      goto LABEL_39;
  }
  QuestRewardItemAction__SetActiveLabelList(v82, mItemLabelList_4, v85, v83);
  max_length = questInfoRewardList->max_length;
  if ( max_length >= 1 )
  {
    v107 = 4LL;
    while ( 1 )
    {
      v108 = v107 - 4;
      if ( (int)v107 - 4 >= (unsigned int)max_length )
        break;
      v109 = (QuestRewardInfo_o *)*((_QWORD *)&questInfoRewardList->obj.klass + v107);
      if ( !v109 )
        goto LABEL_76;
      if ( v109->fields.type == 1 )
      {
        if ( !mItemSpList_2 )
          goto LABEL_76;
        if ( v108 >= mItemSpList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v107);
        if ( !this )
          goto LABEL_76;
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !mServantFaceIconList_2 )
          goto LABEL_76;
        if ( v108 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v107);
        if ( !this )
          goto LABEL_76;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( v108 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v107);
        if ( !this )
          goto LABEL_76;
        ServantFaceIconComponent__Set_29623744(
          (ServantFaceIconComponent_o *)this,
          v109->fields.objectId,
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
        if ( v108 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v107);
        if ( !this )
          goto LABEL_76;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( !mItemSpList_2 )
          goto LABEL_76;
        if ( v108 >= mItemSpList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v107);
        if ( !this )
          goto LABEL_76;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (QuestRewardItemAction_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                            gameObject,
                                            (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_76;
        ItemIconComponent__SetGift(
          (ItemIconComponent_o *)this,
          v109->fields.type,
          v109->fields.objectId,
          v109->fields.num,
          0,
          0LL);
      }
      itemLabelDispList = v6->fields.itemLabelDispList;
      if ( !itemLabelDispList )
        goto LABEL_76;
      if ( v108 >= itemLabelDispList->max_length )
        break;
      QuestRewardItemAction__SetClearTextLabel(this, *((UILabel_o **)&itemLabelDispList->obj.klass + v107), v109, v110);
      max_length = questInfoRewardList->max_length;
      if ( (int)++v107 - 4 >= max_length )
        goto LABEL_74;
    }
LABEL_77:
    v113 = sub_B0D9A8(this);
    sub_B0D948(v113, 0LL);
  }
LABEL_74:
  QuestRewardItemAction__CommonSetUpEndAction(v6, v105);
}


void __fastcall QuestRewardItemAction__Update(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x0

  if ( (byte_4217CF7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardItemAction__update__, method);
    sub_B0D8A4(&CTouch_TypeInfo, v3);
    byte_4217CF7 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2AAF8CC *)Method_CStateManager_QuestRewardItemAction__update__);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *v10; // x20
  UnityEngine_Transform_o *mItemLabel; // x0
  struct QuestRewardItemAction_o **p_that; // x19
  struct QuestRewardItemAction_o *v13; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  float y; // s8
  float z; // s9
  ManagerConfig_c *v18; // x0
  int WIDTH; // w24
  MoveObject_o *mo; // x21
  float x; // s10
  float v22; // s11
  float v23; // s12
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *v26; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x23
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42124F8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v4);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v7);
    sub_B0D8A4(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v8);
    sub_B0D8A4(&QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v9);
    byte_42124F8 = 1;
  }
  v10 = (QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *)sub_B0D974(
                                                                         QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo,
                                                                         that,
                                                                         method);
  QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  v10->fields.that = that;
  p_that = &v10->fields.that;
  sub_B0D840(&v10->fields.that, that);
  v13 = v10->fields.that;
  if ( !v13 )
    goto LABEL_21;
  mItemLabel = (UnityEngine_Transform_o *)v13->fields.mItemLabel;
  if ( !mItemLabel )
    goto LABEL_21;
  if ( v13->fields.isMultiDisp )
  {
    mItemLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mItemLabel, 0LL);
    if ( !mItemLabel )
      goto LABEL_21;
    mItemLabel = UnityEngine_Transform__get_parent(mItemLabel, 0LL);
    if ( !mItemLabel )
      goto LABEL_21;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mItemLabel, 0LL);
  v10->fields.tgt_obj = gameObject;
  sub_B0D840(&v10->fields, gameObject);
  mItemLabel = (UnityEngine_Transform_o *)v10->fields.that;
  if ( !mItemLabel )
    goto LABEL_21;
  QuestRewardItemAction__SetActiveLabelList(
    (QuestRewardItemAction_o *)mItemLabel,
    *(UILabel_array **)&mItemLabel[9].fields.m_CachedPtr,
    1,
    0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         v10->fields.tgt_obj,
                         (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  v10->fields.mo = (struct MoveObject_o *)Component_UIWidget;
  sub_B0D840(&v10->fields.mo, Component_UIWidget);
  LocalPosition = GameObjectExtensions__GetLocalPosition(v10->fields.tgt_obj, 0LL);
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v18 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v18 = ManagerConfig_TypeInfo;
  }
  WIDTH = v18->static_fields->WIDTH;
  v31 = GameObjectExtensions__GetLocalPosition(v10->fields.tgt_obj, 0LL);
  mo = v10->fields.mo;
  x = v31.fields.x;
  v22 = v31.fields.y;
  v23 = v31.fields.z;
  v26 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v10,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v10,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !mo
    || (v32.fields.x = (float)WIDTH,
        v32.fields.y = y,
        v32.fields.z = z,
        v33.fields.x = x,
        v33.fields.y = v22,
        v33.fields.z = v23,
        MoveObject__Play(mo, v32, v33, 0.25, v26, v29, 0.0, 17, 0LL),
        !*p_that) )
  {
LABEL_21:
    sub_B0D97C(mItemLabel);
  }
  if ( (*p_that)->fields.mGetSEonProgram )
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
    sub_B0D97C(this);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardItemAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B0D97C(0LL);
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
  __int64 v6; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  SimpleAnimation_State_o *Item; // x0
  struct SimpleAnimation_State_o **p_mSimpleAnimState; // x20
  struct SimpleAnimation_State_o *v10; // x21
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_TrackedReference_o *v12; // x20
  float mTreasureAnimStartTime; // s0
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct SimpleAnimation_State_o *v18; // x20
  SimpleAnimation_State_c *v19; // x8
  unsigned __int64 v20; // x10
  SimpleAnimation_State_c **v21; // x11
  __int64 v22; // x0
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x20
  int max_length; // w8
  int i; // w21
  _BOOL4 v26; // w8
  __int64 v27; // x0

  v5 = this;
  if ( (byte_42124F9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardItemAction_StatePlay_o *)sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v6);
    byte_42124F9 = 1;
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
    Item = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.playAnimationName, 0LL);
    v5->fields.mSimpleAnimState = Item;
    p_mSimpleAnimState = &v5->fields.mSimpleAnimState;
    sub_B0D840(p_mSimpleAnimState, Item);
    v10 = *p_mSimpleAnimState;
    if ( that->fields.mIsFromTreasureBox )
    {
      *(float *)&v3 = that->fields.mTreasureAnimStartTime;
      if ( !v10 )
        goto LABEL_50;
    }
    else
    {
      LODWORD(v3) = 0;
      if ( !v10 )
        goto LABEL_50;
    }
    klass = v10->klass;
    if ( *(_WORD *)&v10->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v15;
        p_offset += 2;
        if ( v15 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
          goto LABEL_26;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
    }
    else
    {
LABEL_26:
      p_method = sub_AA67A0(*p_mSimpleAnimState, SimpleAnimation_State_TypeInfo, 6LL);
    }
    this = (QuestRewardItemAction_StatePlay_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, long double))p_method)(
                                                  v10,
                                                  *(_QWORD *)(p_method + 8),
                                                  v3);
    v18 = *p_mSimpleAnimState;
    if ( v18 )
    {
      v19 = v18->klass;
      if ( *(_WORD *)&v18->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        v21 = (SimpleAnimation_State_c **)&v19->_1.interfaceOffsets->offset;
        while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v20;
          v21 += 2;
          if ( v20 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
            goto LABEL_33;
        }
        v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 8].method;
      }
      else
      {
LABEL_33:
        v22 = sub_AA67A0(v18, SimpleAnimation_State_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v22)(v18, *(_QWORD *)(v22 + 8), 1.0);
      this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
      if ( this )
      {
        this = (QuestRewardItemAction_StatePlay_o *)SimpleAnimation__Play_50482404(
                                                      (SimpleAnimation_o *)this,
                                                      that->fields.playAnimationName,
                                                      0LL);
        goto LABEL_40;
      }
    }
LABEL_50:
    sub_B0D97C(this);
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
    v12 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                              (UnityEngine_Animation_o *)this,
                                              that->fields.playAnimationName,
                                              0LL);
    this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_TrackedReference__op_Inequality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( that->fields.mIsFromTreasureBox )
      {
        mTreasureAnimStartTime = that->fields.mTreasureAnimStartTime;
        if ( !v12 )
          goto LABEL_50;
      }
      else
      {
        mTreasureAnimStartTime = 0.0;
        if ( !v12 )
          goto LABEL_50;
      }
      UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)v12, mTreasureAnimStartTime, 0LL);
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)v12, 1.0, 0LL);
      this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
      if ( !this )
        goto LABEL_50;
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Animation__Play_50564840(
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
        v27 = sub_B0D9A8(this);
        sub_B0D948(v27, 0LL);
      }
      this = (QuestRewardItemAction_StatePlay_o *)appearEffObjDispList->m_Items[i];
      if ( that->fields.mIsFromTreasureBox )
      {
        v26 = !that->fields.mTreasureEffectOff;
        if ( !this )
          goto LABEL_50;
      }
      else
      {
        v26 = 1;
        if ( !this )
          goto LABEL_50;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v26, 0LL);
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
  UnityEngine_Object_o *mAnimation; // x20
  int32_t v15; // w1
  __int64 v16; // x0

  if ( (byte_42124FA & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, that);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (QuestRewardItemAction_StatePlay_o *)sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_42124FA = 1;
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
        v16 = sub_B0D9A8(this);
        sub_B0D948(v16, 0LL);
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
    sub_B0D97C(this);
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
  this = (QuestRewardItemAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_43;
  if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
  {
    if ( that->fields.mLabelAnimate )
    {
      v15 = 2;
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
      v15 = 3;
    }
    QuestRewardItemAction__SetState(that, v15, 0LL);
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
  System_Action_o *v6; // x20

  if ( (byte_42124FC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__, v3);
    byte_42124FC = 1;
  }
  if ( EventTutorialMaster__IsTutorialAvailable(0, 75, 0, 0, 0, 0, 0LL) )
  {
    this->fields.waitTutorial = 1;
    v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v4, v5);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__,
      0LL);
    EventTutorialMaster__CheckTutorial(0, 75, v6, 0, 0, 0, 0, 0LL);
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
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_o *v12; // x20
  UnityEngine_Component_o *mScreenTouchInfo; // x0
  QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_Fields *p_fields; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v18; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x22

  if ( (byte_42124FB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, v5);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v6);
    sub_B0D8A4(&CTouch_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&SoundManager_TypeInfo, v9);
    sub_B0D8A4(&Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__, v10);
    sub_B0D8A4(&QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo, v11);
    byte_42124FB = 1;
  }
  v12 = (QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_o *)sub_B0D974(
                                                                         QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo,
                                                                         that,
                                                                         method);
  QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_25;
  v12->fields.that = that;
  p_fields = &v12->fields;
  sub_B0D840(&v12->fields, that);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) && !this->fields.waitTutorial )
  {
    mScreenTouchInfo = (UnityEngine_Component_o *)AndroidBackKeyManager_TypeInfo;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      mScreenTouchInfo = (UnityEngine_Component_o *)AndroidBackKeyManager_TypeInfo;
    }
    **(_BYTE **)&mScreenTouchInfo[7].fields.m_CachedPtr = 0;
    if ( p_fields->that )
    {
      mScreenTouchInfo = (UnityEngine_Component_o *)p_fields->that->fields.mScreenTouchInfo;
      if ( mScreenTouchInfo )
      {
        mScreenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mScreenTouchInfo, 0LL);
        if ( mScreenTouchInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mScreenTouchInfo, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v18 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v18 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
          v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
          System_Action___ctor(
            v20,
            (Il2CppObject *)v12,
            Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v20, 0LL);
            mScreenTouchInfo = (UnityEngine_Component_o *)p_fields->that;
            if ( p_fields->that )
            {
              QuestRewardItemAction__SetState((QuestRewardItemAction_o *)mScreenTouchInfo, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_B0D97C(mScreenTouchInfo);
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
    sub_B0D97C(this);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}