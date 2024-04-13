void __fastcall QuestRewardItemAction___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6EF4 & 1) == 0 )
  {
    sub_B5D5C4(&QuestRewardItemAction_TypeInfo, v1, v2, v3);
    byte_42E6EF4 = 1;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Int32_array **v18; // x1
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7

  if ( (byte_42E6EF3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16980/*"bit_item_get01"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16982/*"bit_item_get01_3"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16983/*"bit_item_get01_4"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16981/*"bit_item_get01_2"*/, v15, v16, v17);
    byte_42E6EF3 = 1;
  }
  this->fields.mLabelAnimate = 1;
  this->fields.mTreasureAnimStartTime = 1.0;
  *(_WORD *)&this->fields.mTreasureEffectOff = 257;
  v18 = (System_Int32_array **)StringLiteral_16980/*"bit_item_get01"*/;
  this->fields.ANIMATION_NAME_1_TYPE = (struct System_String_o *)StringLiteral_16980/*"bit_item_get01"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.ANIMATION_NAME_1_TYPE, v18, v2, v3, v4, v5, v6, v7);
  v19 = (System_Int32_array **)StringLiteral_16981/*"bit_item_get01_2"*/;
  this->fields.DIFF_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_16981/*"bit_item_get01_2"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.DIFF_ANIMATION_NAME_2_TYPES,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Int32_array **)StringLiteral_16982/*"bit_item_get01_3"*/;
  this->fields.DIFF_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_16982/*"bit_item_get01_3"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.DIFF_ANIMATION_NAME_3_TYPES,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Int32_array **)StringLiteral_16983/*"bit_item_get01_4"*/;
  this->fields.DIFF_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_16983/*"bit_item_get01_4"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.DIFF_ANIMATION_NAME_4_TYPES,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Int32_array **)StringLiteral_16981/*"bit_item_get01_2"*/;
  this->fields.SAME_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_16981/*"bit_item_get01_2"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.SAME_ANIMATION_NAME_2_TYPES,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Int32_array **)StringLiteral_16982/*"bit_item_get01_3"*/;
  this->fields.SAME_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_16982/*"bit_item_get01_3"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.SAME_ANIMATION_NAME_3_TYPES,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = (System_Int32_array **)StringLiteral_16983/*"bit_item_get01_4"*/;
  this->fields.SAME_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_16983/*"bit_item_get01_4"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.SAME_ANIMATION_NAME_4_TYPES,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardItemAction__Awake(QuestRewardItemAction_o *this, const MethodInfo *method)
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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct CStateManager_QuestRewardItemAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x21
  QuestRewardItemAction_StateNone_o *v41; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v43; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v44; // x21
  QuestRewardItemAction_StatePlay_o *v45; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v46; // x21
  QuestRewardItemAction_StateItemLabel_o *v47; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v48; // x20
  QuestRewardItemAction_StateTouchWait_o *v49; // x21
  const MethodInfo *v50; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v53; // x21
  UnityEngine_GameObject_o *v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6EE9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardItemAction___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_QuestRewardItemAction__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_QuestRewardItemAction__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&QuestRewardItemAction_StateItemLabel_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&QuestRewardItemAction_StateNone_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&QuestRewardItemAction_StatePlay_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&QuestRewardItemAction_StateTouchWait_TypeInfo, v29, v30, v31);
    byte_42E6EE9 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v33 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_QuestRewardItemAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v33,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2BB2630 *)Method_CStateManager_QuestRewardItemAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardItemAction__o *)v33;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    mFSM = this->fields.mFSM;
    v41 = (QuestRewardItemAction_StateNone_o *)sub_B5D694(QuestRewardItemAction_StateNone_TypeInfo);
    QuestRewardItemAction_StateNone___ctor(v41, 0LL);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v41,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardItemAction__add__);
    v44 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v45 = (QuestRewardItemAction_StatePlay_o *)sub_B5D694(QuestRewardItemAction_StatePlay_TypeInfo);
    QuestRewardItemAction_StatePlay___ctor(v45, 0LL);
    if ( !v44 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v44,
      1,
      (IState_T__o *)v45,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardItemAction__add__);
    v46 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v47 = (QuestRewardItemAction_StateItemLabel_o *)sub_B5D694(QuestRewardItemAction_StateItemLabel_TypeInfo);
    QuestRewardItemAction_StateItemLabel___ctor(v47, 0LL);
    if ( !v46 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v46,
      2,
      (IState_T__o *)v47,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardItemAction__add__);
    v48 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v49 = (QuestRewardItemAction_StateTouchWait_o *)sub_B5D694(QuestRewardItemAction_StateTouchWait_TypeInfo);
    QuestRewardItemAction_StateTouchWait___ctor(v49, 0LL);
    if ( !v48 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v48,
      3,
      (IState_T__o *)v49,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardItemAction__add__);
    QuestRewardItemAction__SetState(this, 0, v50);
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
      v53 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v54 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v53,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v54, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v54, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v54, zero, 0LL);
        if ( v54 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v54,
                                                        (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v54;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v54,
              v55,
              v56,
              v57,
              v58,
              v59,
              v60);
            return;
          }
        }
LABEL_25:
        sub_B5D69C(ComponentInChildren_Dropdown_DropdownItem, v43);
      }
    }
  }
}


void __fastcall QuestRewardItemAction__CommonSetUpEndAction(QuestRewardItemAction_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  AndroidBackKeyManager_c *v26; // x0

  if ( (byte_42E6EEF & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E6EEF = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      gameObject = CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)gameObject, 0, 0LL);
      if ( gameObject )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           gameObject,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
          Component_srcLineSprite,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        goto LABEL_11;
      }
    }
LABEL_17:
    sub_B5D69C(gameObject, v15);
  }
LABEL_11:
  gameObject = (UnityEngine_GameObject_o *)*p_mScreenTouchInfo;
  if ( !*p_mScreenTouchInfo )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v26 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v26 = AndroidBackKeyManager_TypeInfo;
  }
  v26->static_fields->ToastEnabled = 1;
}


int32_t __fastcall QuestRewardItemAction__GetState(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestRewardItemAction_o *v4; // x19
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E6EF1 & 1) == 0 )
  {
    this = (QuestRewardItemAction_o *)sub_B5D5C4(
                                        &Method_CStateManager_QuestRewardItemAction__getState__,
                                        (_DWORD)method,
                                        v2,
                                        v3);
    byte_42E6EF1 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
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
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  char v19; // w1
  int v20; // w2
  __int64 v21; // x3
  char v22; // w1
  int v23; // w2
  __int64 v24; // x3
  char v25; // w1
  int v26; // w2
  __int64 v27; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  __int64 v31; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v33; // x20
  unsigned __int64 v34; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v36; // x0
  UnityEngine_Object_o *mAnimation; // x20
  const MethodInfo *v38; // x2
  UnityEngine_TrackedReference_o *Item; // x20
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v41; // x0
  System_Action_o *v42; // x21

  if ( (byte_42E6EF0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, is_from_treasure_box, (_DWORD)end_act, method);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_QuestRewardItemAction__Play_b__49_0__, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22, v23, v24);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v25, v26, v27);
    byte_42E6EF0 = 1;
  }
  this->fields.mIsFromTreasureBox = is_from_treasure_box;
  this->fields.mEndAct = end_act;
  sub_B5D560(
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
    v33 = gameObject;
    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v34;
        p_offset += 2;
        if ( v34 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      v36 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v36 = sub_AF54C0(gameObject, SimpleAnimation_State_TypeInfo, 8LL, v31);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v36)(v33, *(_QWORD *)(v36 + 8), 0.0);
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
    QuestRewardItemAction__SetState(this, 1, v38);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v41 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v41 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v41->static_fields->DEFAULT_FADE_TIME;
  }
  v42 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_QuestRewardItemAction__Play_b__49_0__, 0LL);
  if ( !Instance )
LABEL_34:
    sub_B5D69C(gameObject, v29);
  CommonUI__maskFadein(Instance, fade_in_time, v42, 0LL);
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
            v9 = sub_B5D6C8(this);
            sub_B5D668(v9, 0LL);
          }
          gameObject = (UnityEngine_Component_o *)itemLabelList->m_Items[v6];
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
          {
            sub_B5D69C(gameObject, itemLabelList);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  void *CrossOperatorString; // x0
  __int64 v43; // x1
  int32_t type; // w8
  Il2CppObject *v45; // x22
  Il2CppObject *CountableString; // x21
  System_String_o *Name; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v48; // x22
  System_String_o *v49; // x23
  Il2CppObject *v50; // x0
  QuestRewardItemAction_c *v51; // x0
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E6EEE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EquipMaster___, (_DWORD)itemLabel, (_DWORD)questInfoReward, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&int_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&QuestRewardItemAction_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_11044/*"QUEST_CLEAR_REWARD_GET"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_1/*""*/, v39, v40, v41);
    byte_42E6EEE = 1;
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
      CrossOperatorString = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
      if ( CrossOperatorString )
      {
        CrossOperatorString = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)CrossOperatorString,
                                questInfoReward->fields.objectId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( CrossOperatorString )
        {
          Name = ServantEntity__getName((ServantEntity_o *)CrossOperatorString, -1, -1, 0LL);
LABEL_27:
          v45 = (Il2CppObject *)Name;
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
      CrossOperatorString = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EquipMaster___);
      if ( CrossOperatorString )
      {
        CrossOperatorString = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)CrossOperatorString,
                                questInfoReward->fields.objectId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
        if ( CrossOperatorString )
        {
          v48 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)CrossOperatorString + 4);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(v48, 0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_37:
    sub_B5D69C(CrossOperatorString, v43);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CrossOperatorString = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !CrossOperatorString )
    goto LABEL_37;
  CrossOperatorString = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)CrossOperatorString,
                          questInfoReward->fields.objectId,
                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !CrossOperatorString )
    goto LABEL_37;
  v45 = (Il2CppObject *)*((_QWORD *)CrossOperatorString + 3);
  CountableString = (Il2CppObject *)ItemType__GetCountableString(*((_DWORD *)CrossOperatorString + 12), 0LL);
LABEL_28:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11044/*"QUEST_CLEAR_REWARD_GET"*/, 0LL);
  num = questInfoReward->fields.num;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
  CrossOperatorString = System_String__Format_44578852(v49, v45, CountableString, v50, 0LL);
  if ( !itemLabel )
    goto LABEL_37;
  UILabel__set_text(itemLabel, (System_String_o *)CrossOperatorString, 0LL);
  v51 = QuestRewardItemAction_TypeInfo;
  if ( (BYTE3(QuestRewardItemAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRewardItemAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo);
    v51 = QuestRewardItemAction_TypeInfo;
  }
  UILabel__SetCondensedScale(itemLabel, v51->static_fields->ITEM_LABEL_MAX_WIDTH, 0LL);
  CrossOperatorString = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemLabel, 0LL);
  if ( !CrossOperatorString )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CrossOperatorString, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetState(QuestRewardItemAction_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x0

  if ( (byte_42E6EF2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardItemAction__setState__, state, (_DWORD)method, v3);
    byte_42E6EF2 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_QuestRewardItemAction__setState__);
}


void __fastcall QuestRewardItemAction__Setup(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *qri,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 transform; // x0
  __int64 v28; // x1
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct SimpleAnimation_o *v37; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UIWidget_o *v45; // x0
  UnityEngine_Object_o *v46; // x24
  UIWidget_o *v47; // x21
  UnityEngine_Object_o *v48; // x23
  struct System_String_o *name; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  QuestRewardItemAction_o *v56; // x0
  const MethodInfo *v57; // x3
  QuestRewardItemAction_o *v58; // x0
  const MethodInfo *v59; // x3
  QuestRewardItemAction_o *v60; // x0
  const MethodInfo *v61; // x3
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **mItemLabel; // x22
  __int64 v69; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **mAppearEffObj; // x22
  __int64 v83; // x21
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  UnityEngine_Object_o *mServantFaceIcon; // x21
  QuestRewardItemAction_o *v91; // x0
  const MethodInfo *v92; // x3
  UnityEngine_Object_o *v93; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v95; // x1
  __int64 v96; // x0
  __int64 v97; // x0

  if ( (byte_42E6EEB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, (_DWORD)qri, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9, v10, v11);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UILabel___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_1/*""*/, v24, v25, v26);
    byte_42E6EEB = 1;
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_54;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     (UnityEngine_Component_o *)transform,
                                                                     (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  p_mAnimation = &this->fields.mAnimation;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_54;
  v37 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      (UnityEngine_Component_o *)transform,
                                      (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v37;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_54;
  v45 = UnityEngine_Component__GetComponentInChildren_UIWidget_(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  v46 = (UnityEngine_Object_o *)*p_mSimpleAnimation;
  v47 = v45;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( !*p_mSimpleAnimation )
      goto LABEL_54;
    transform = (__int64)(*p_mSimpleAnimation)[1].monitor;
    if ( !transform )
      goto LABEL_54;
    goto LABEL_19;
  }
  v48 = (UnityEngine_Object_o *)*p_mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
  if ( (transform & 1) == 0 )
    goto LABEL_20;
  transform = (__int64)*p_mAnimation;
  if ( !*p_mAnimation
    || (transform = (__int64)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)transform, 0LL)) == 0 )
  {
LABEL_54:
    sub_B5D69C(transform, v28);
  }
LABEL_19:
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  this->fields.playAnimationName = name;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.playAnimationName,
    (System_Int32_array **)name,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
LABEL_20:
  if ( !v47 )
    goto LABEL_54;
  *(&v47->fields.mAnchorsCached + 5) = 1;
  transform = (__int64)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_54;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  QuestRewardItemAction__SetActiveLabelList(v56, this->fields.mItemLabelList_2, 0, v57);
  QuestRewardItemAction__SetActiveLabelList(v58, this->fields.mItemLabelList_3, 0, v59);
  QuestRewardItemAction__SetActiveLabelList(v60, this->fields.mItemLabelList_4, 0, v61);
  transform = sub_B5D5DC(UILabel___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_54;
  mItemLabel = (System_Int32_array **)this->fields.mItemLabel;
  v69 = transform;
  if ( mItemLabel )
  {
    transform = sub_B5D684(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)transform + 64LL));
    if ( !transform )
      goto LABEL_56;
  }
  if ( !*(_DWORD *)(v69 + 24) )
    goto LABEL_55;
  *(_QWORD *)(v69 + 32) = mItemLabel;
  sub_B5D560((BattleServantConfConponent_o *)(v69 + 32), mItemLabel, v62, v63, v64, v65, v66, v67);
  this->fields.itemLabelDispList = (struct UILabel_array *)v69;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemLabelDispList,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  transform = sub_B5D5DC(UnityEngine_GameObject___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_54;
  mAppearEffObj = (System_Int32_array **)this->fields.mAppearEffObj;
  v83 = transform;
  if ( mAppearEffObj )
  {
    transform = sub_B5D684(this->fields.mAppearEffObj, *(_QWORD *)(*(_QWORD *)transform + 64LL));
    if ( !transform )
    {
LABEL_56:
      v97 = sub_B5D6BC();
      sub_B5D668(v97, 0LL);
    }
  }
  if ( !*(_DWORD *)(v83 + 24) )
  {
LABEL_55:
    v96 = sub_B5D6C8(transform);
    sub_B5D668(v96, 0LL);
  }
  *(_QWORD *)(v83 + 32) = mAppearEffObj;
  sub_B5D560((BattleServantConfConponent_o *)(v83 + 32), mAppearEffObj, v76, v77, v78, v79, v80, v81);
  this->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)v83;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
    (System_Int32_array **)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
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
    ServantFaceIconComponent__Set_30846632(
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
    v93 = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v93, 0LL, 0LL) )
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
                           (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
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
  QuestRewardItemAction__SetClearTextLabel(v91, this->fields.mItemLabel, qri, v92);
  QuestRewardItemAction__CommonSetUpEndAction(this, v95);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardItemAction__SetupMultipleQuestRewardInfo(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *questInfoReward,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 transform; // x0
  __int64 v25; // x1
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct SimpleAnimation_o *v33; // x0
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
  System_Int32_array **mAppearEffObj; // x21
  __int64 v67; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  int32_t num; // w8
  struct System_String_o *SAME_ANIMATION_NAME_2_TYPES; // x1
  struct UISprite_array *mItemSpList_3; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_3; // x23
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  struct UnityEngine_GameObject_array *mAppearEffObjList_3; // x1
  struct System_String_o *SAME_ANIMATION_NAME_3_TYPES; // x1
  struct System_String_o *SAME_ANIMATION_NAME_4_TYPES; // x1
  const MethodInfo *v93; // x3
  __int64 v94; // x21
  ServantFaceIconComponent_o **m_Items; // x24
  UISprite_o **v96; // x25
  float v97; // s0
  float v98; // s2
  float v99; // s8
  float v100; // s9
  __int64 v101; // x8
  __int64 v102; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v104; // x1
  __int64 v105; // x0
  __int64 v106; // x0
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6EED & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentInChildren_Animation___,
      (_DWORD)questInfoReward,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9, v10, v11);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UILabel___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    byte_42E6EED = 1;
  }
  if ( this->fields.mItemSpList_2 && this->fields.mItemLabelList_3 && this->fields.mItemLabelList_4 )
  {
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_59;
    ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                       (UnityEngine_Component_o *)transform,
                                                                       (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    this->fields.mAnimation = ComponentInChildren_UIWidget;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mAnimation,
      (System_Int32_array **)ComponentInChildren_UIWidget,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_59;
    v33 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                        (UnityEngine_Component_o *)transform,
                                        (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    this->fields.mSimpleAnimation = v33;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
      (System_Int32_array **)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_59;
    transform = (__int64)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
    QuestRewardItemAction__SetActiveLabelList(v40, this->fields.mItemLabelList_2, 0, v41);
    QuestRewardItemAction__SetActiveLabelList(v42, this->fields.mItemLabelList_3, 0, v43);
    QuestRewardItemAction__SetActiveLabelList(v44, this->fields.mItemLabelList_4, 0, v45);
    transform = sub_B5D5DC(UILabel___TypeInfo, 1LL);
    if ( !transform )
      goto LABEL_59;
    mItemLabel = (System_Int32_array **)this->fields.mItemLabel;
    v53 = transform;
    if ( mItemLabel )
    {
      transform = sub_B5D684(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)transform + 64LL));
      if ( !transform )
        goto LABEL_61;
    }
    if ( !*(_DWORD *)(v53 + 24) )
      goto LABEL_60;
    *(_QWORD *)(v53 + 32) = mItemLabel;
    sub_B5D560((BattleServantConfConponent_o *)(v53 + 32), mItemLabel, v46, v47, v48, v49, v50, v51);
    this->fields.itemLabelDispList = (struct UILabel_array *)v53;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.itemLabelDispList,
      (System_Int32_array **)v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    transform = sub_B5D5DC(UnityEngine_GameObject___TypeInfo, 1LL);
    if ( !transform )
      goto LABEL_59;
    mAppearEffObj = (System_Int32_array **)this->fields.mAppearEffObj;
    v67 = transform;
    if ( mAppearEffObj )
    {
      transform = sub_B5D684(this->fields.mAppearEffObj, *(_QWORD *)(*(_QWORD *)transform + 64LL));
      if ( !transform )
      {
LABEL_61:
        v106 = sub_B5D6BC();
        sub_B5D668(v106, 0LL);
      }
    }
    if ( !*(_DWORD *)(v67 + 24) )
      goto LABEL_60;
    *(_QWORD *)(v67 + 32) = mAppearEffObj;
    sub_B5D560((BattleServantConfConponent_o *)(v67 + 32), mAppearEffObj, v60, v61, v62, v63, v64, v65);
    this->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)v67;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
      (System_Int32_array **)v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    if ( !questInfoReward )
LABEL_59:
      sub_B5D69C(transform, v25);
    num = questInfoReward->fields.num;
    if ( num == 3 )
    {
      SAME_ANIMATION_NAME_3_TYPES = this->fields.SAME_ANIMATION_NAME_3_TYPES;
      mItemSpList_3 = this->fields.mItemSpList_3;
      mServantFaceIconList_3 = this->fields.mServantFaceIconList_3;
      this->fields.playAnimationName = SAME_ANIMATION_NAME_3_TYPES;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)SAME_ANIMATION_NAME_3_TYPES,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      mAppearEffObjList_3 = this->fields.mAppearEffObjList_3;
    }
    else if ( num == 2 )
    {
      SAME_ANIMATION_NAME_2_TYPES = this->fields.SAME_ANIMATION_NAME_2_TYPES;
      mItemSpList_3 = this->fields.mItemSpList_2;
      mServantFaceIconList_3 = this->fields.mServantFaceIconList_2;
      this->fields.playAnimationName = SAME_ANIMATION_NAME_2_TYPES;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)SAME_ANIMATION_NAME_2_TYPES,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      mAppearEffObjList_3 = this->fields.mAppearEffObjList_2;
    }
    else
    {
      SAME_ANIMATION_NAME_4_TYPES = this->fields.SAME_ANIMATION_NAME_4_TYPES;
      mItemSpList_3 = this->fields.mItemSpList_4;
      mServantFaceIconList_3 = this->fields.mServantFaceIconList_4;
      this->fields.playAnimationName = SAME_ANIMATION_NAME_4_TYPES;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.playAnimationName,
        (System_Int32_array **)SAME_ANIMATION_NAME_4_TYPES,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      mAppearEffObjList_3 = this->fields.mAppearEffObjList_4;
    }
    this->fields.appearEffObjDispList = mAppearEffObjList_3;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.appearEffObjDispList,
      (System_Int32_array **)mAppearEffObjList_3,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
    transform = UnityEngine_Mathf__Clamp_41572460(questInfoReward->fields.num, 2, 4, 0LL);
    if ( (int)transform >= 1 )
    {
      if ( mItemSpList_3 )
      {
        v94 = 0LL;
        m_Items = mServantFaceIconList_3->m_Items;
        v96 = mItemSpList_3->m_Items;
        while ( (unsigned int)v94 < mItemSpList_3->max_length )
        {
          transform = (__int64)v96[v94];
          if ( !transform )
            goto LABEL_59;
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_59;
          *(UnityEngine_Vector3_o *)&v97 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)transform,
                                             0LL);
          if ( (unsigned int)v94 >= mItemSpList_3->max_length )
            break;
          transform = (__int64)v96[v94];
          if ( !transform )
            goto LABEL_59;
          v99 = v97;
          v100 = v98;
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_59;
          v107.fields.y = 0.0;
          v107.fields.x = v99;
          v107.fields.z = v100;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v107, 0LL);
          if ( questInfoReward->fields.type == 1 )
          {
            if ( (unsigned int)v94 >= mItemSpList_3->max_length )
              break;
            transform = (__int64)v96[v94];
            if ( !transform )
              goto LABEL_59;
            UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            if ( !mServantFaceIconList_3 )
              goto LABEL_59;
            v101 = *(_QWORD *)&mServantFaceIconList_3->max_length;
            if ( v101 )
            {
              if ( (unsigned int)v94 >= (unsigned int)v101 )
                break;
              transform = (__int64)m_Items[v94];
              if ( !transform )
                goto LABEL_59;
              transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              if ( !transform )
                goto LABEL_59;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
              if ( (unsigned int)v94 >= mServantFaceIconList_3->max_length )
                break;
              transform = (__int64)m_Items[v94];
              if ( !transform )
                goto LABEL_59;
              ServantFaceIconComponent__Set_30846632(
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
            v102 = *(_QWORD *)&mServantFaceIconList_3->max_length;
            if ( v102 )
            {
              if ( (unsigned int)v94 >= (unsigned int)v102 )
                break;
              transform = (__int64)m_Items[v94];
              if ( !transform )
                goto LABEL_59;
              transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              if ( !transform )
                goto LABEL_59;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
            }
            if ( (unsigned int)v94 >= mItemSpList_3->max_length )
              break;
            transform = (__int64)v96[v94];
            if ( !transform )
              goto LABEL_59;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
            transform = (__int64)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                   gameObject,
                                   (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
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
          transform = UnityEngine_Mathf__Clamp_41572460(questInfoReward->fields.num, 2, 4, 0LL);
          if ( (int)++v94 >= (int)transform )
            goto LABEL_58;
        }
LABEL_60:
        v105 = sub_B5D6C8(transform);
        sub_B5D668(v105, 0LL);
      }
      goto LABEL_59;
    }
LABEL_58:
    QuestRewardItemAction__SetClearTextLabel(
      (QuestRewardItemAction_o *)transform,
      this->fields.mItemLabel,
      questInfoReward,
      v93);
    QuestRewardItemAction__CommonSetUpEndAction(this, v104);
  }
}


void __fastcall QuestRewardItemAction__Setup_22251448(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_array *questInfoRewardList,
        bool isMultiDisp,
        const MethodInfo *method)
{
  QuestRewardInfo_array *v5; // x20
  QuestRewardItemAction_o *v6; // x19
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
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  MethodInfo *v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **mItemLabelList_2; // x1
  struct UISprite_array *mItemSpList_2; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_2; // x23
  System_Int32_array **DIFF_ANIMATION_NAME_2_TYPES; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **mAppearEffObjList_2; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  QuestRewardItemAction_o *v68; // x0
  const MethodInfo *v69; // x3
  QuestRewardItemAction_o *v70; // x0
  const MethodInfo *v71; // x3
  UILabel_array *mItemLabelList_3; // x1
  bool v73; // w2
  TerminalPramsManager_c *v74; // x0
  int32_t PhaseCnt_k__BackingField; // w23
  char v76; // w2
  __int64 v77; // x3
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x21
  QuestRewardInfo_o *v79; // x8
  System_Int32_array **v80; // x1
  System_Int32_array **DIFF_ANIMATION_NAME_3_TYPES; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **mAppearEffObjList_3; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  QuestRewardItemAction_o *v95; // x0
  const MethodInfo *v96; // x3
  QuestRewardItemAction_o *v97; // x0
  const MethodInfo *v98; // x3
  UILabel_array *mItemLabelList_4; // x1
  bool v100; // w2
  System_Int32_array **v101; // x1
  System_Int32_array **DIFF_ANIMATION_NAME_4_TYPES; // x1
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **mAppearEffObjList_4; // x1
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  QuestRewardItemAction_o *v116; // x0
  const MethodInfo *v117; // x3
  QuestRewardItemAction_o *v118; // x0
  const MethodInfo *v119; // x3
  int max_length; // w8
  __int64 v121; // x24
  il2cpp_array_size_t v122; // w27
  QuestRewardInfo_o *v123; // x21
  const MethodInfo *v124; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabelDispList; // x8
  __int64 v127; // x0
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  v5 = questInfoRewardList;
  v6 = this;
  if ( (byte_42E6EEC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)questInfoRewardList, isMultiDisp, method);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v22, v23, v24);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v25, v26, v27);
    this = (QuestRewardItemAction_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    byte_42E6EEC = 1;
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
    if ( !byte_42E4B34 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)questInfoRewardList, isMultiDisp, method);
      byte_42E4B34 = 1;
    }
    v74 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v74 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v74->static_fields->_PhaseCnt_k__BackingField;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)questInfoRewardList, v76, v77);
      byte_42E4B33 = 1;
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
      v79 = v5->m_Items[0];
      if ( !v79 )
        goto LABEL_76;
      this = (QuestRewardItemAction_o *)System_Array__IndexOf_int_(
                                          (System_Int32_array *)this,
                                          v79->fields.objectId,
                                          (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        if ( !v5->max_length )
          goto LABEL_77;
        questInfoRewardList = (QuestRewardInfo_array *)v5->m_Items[0];
        if ( questInfoRewardList )
        {
          if ( (int)questInfoRewardList->max_length >= 2 )
          {
            QuestRewardItemAction__SetupMultipleQuestRewardInfo(v6, (QuestRewardInfo_o *)questInfoRewardList, v45);
            return;
          }
          goto LABEL_38;
        }
LABEL_76:
        sub_B5D69C(this, questInfoRewardList);
      }
    }
LABEL_38:
    if ( !v5->max_length )
      goto LABEL_77;
LABEL_39:
    QuestRewardItemAction__Setup(v6, v5->m_Items[0], v45);
    return;
  }
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  if ( !this )
    goto LABEL_76;
  ComponentInChildren_UIWidget = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v6->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_UIWidget;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v6->fields.mAnimation,
    ComponentInChildren_UIWidget,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  if ( !this )
    goto LABEL_76;
  v38 = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v6->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v38;
  sub_B5D560((BattleServantConfConponent_o *)&v6->fields.mSimpleAnimation, v38, v39, v40, v41, v42, v43, v44);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  if ( !this )
    goto LABEL_76;
  this = (QuestRewardItemAction_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&v6->fields.itemLabelDispList,
        mItemLabelList_2,
        (System_String_array **)v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      DIFF_ANIMATION_NAME_2_TYPES = (System_Int32_array **)v6->fields.DIFF_ANIMATION_NAME_2_TYPES;
      v6->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_2_TYPES;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v6->fields.playAnimationName,
        DIFF_ANIMATION_NAME_2_TYPES,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      mAppearEffObjList_2 = (System_Int32_array **)v6->fields.mAppearEffObjList_2;
      v6->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_2;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v6->fields.appearEffObjDispList,
        mAppearEffObjList_2,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      this = (QuestRewardItemAction_o *)v6->fields.mItemLabel;
      if ( !this )
        goto LABEL_76;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v68, v6->fields.mItemLabelList_2, 1, v69);
      mItemLabelList_3 = v6->fields.mItemLabelList_3;
      v73 = 0;
      goto LABEL_43;
    case 3u:
      v80 = (System_Int32_array **)v6->fields.mItemLabelList_3;
      mItemSpList_2 = v6->fields.mItemSpList_3;
      mServantFaceIconList_2 = v6->fields.mServantFaceIconList_3;
      v6->fields.itemLabelDispList = (struct UILabel_array *)v80;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v6->fields.itemLabelDispList,
        v80,
        (System_String_array **)v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      DIFF_ANIMATION_NAME_3_TYPES = (System_Int32_array **)v6->fields.DIFF_ANIMATION_NAME_3_TYPES;
      v6->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_3_TYPES;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v6->fields.playAnimationName,
        DIFF_ANIMATION_NAME_3_TYPES,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
      mAppearEffObjList_3 = (System_Int32_array **)v6->fields.mAppearEffObjList_3;
      v6->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_3;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v6->fields.appearEffObjDispList,
        mAppearEffObjList_3,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
      this = (QuestRewardItemAction_o *)v6->fields.mItemLabel;
      if ( !this )
        goto LABEL_76;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v95, v6->fields.mItemLabelList_2, 0, v96);
      mItemLabelList_3 = v6->fields.mItemLabelList_3;
      v73 = 1;
LABEL_43:
      QuestRewardItemAction__SetActiveLabelList(v70, mItemLabelList_3, v73, v71);
      mItemLabelList_4 = v6->fields.mItemLabelList_4;
      v100 = 0;
      break;
    case 4u:
      v101 = (System_Int32_array **)v6->fields.mItemLabelList_4;
      mItemSpList_2 = v6->fields.mItemSpList_4;
      mServantFaceIconList_2 = v6->fields.mServantFaceIconList_4;
      v6->fields.itemLabelDispList = (struct UILabel_array *)v101;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v6->fields.itemLabelDispList,
        v101,
        (System_String_array **)v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      DIFF_ANIMATION_NAME_4_TYPES = (System_Int32_array **)v6->fields.DIFF_ANIMATION_NAME_4_TYPES;
      v6->fields.playAnimationName = (struct System_String_o *)DIFF_ANIMATION_NAME_4_TYPES;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v6->fields.playAnimationName,
        DIFF_ANIMATION_NAME_4_TYPES,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108);
      mAppearEffObjList_4 = (System_Int32_array **)v6->fields.mAppearEffObjList_4;
      v6->fields.appearEffObjDispList = (struct UnityEngine_GameObject_array *)mAppearEffObjList_4;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v6->fields.appearEffObjDispList,
        mAppearEffObjList_4,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115);
      this = (QuestRewardItemAction_o *)v6->fields.mItemLabel;
      if ( !this )
        goto LABEL_76;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      QuestRewardItemAction__SetActiveLabelList(v116, v6->fields.mItemLabelList_2, 0, v117);
      QuestRewardItemAction__SetActiveLabelList(v118, v6->fields.mItemLabelList_3, 0, v119);
      mItemLabelList_4 = v6->fields.mItemLabelList_4;
      v100 = 1;
      break;
    default:
      goto LABEL_39;
  }
  QuestRewardItemAction__SetActiveLabelList(v97, mItemLabelList_4, v100, v98);
  max_length = v5->max_length;
  if ( max_length >= 1 )
  {
    v121 = 4LL;
    while ( 1 )
    {
      v122 = v121 - 4;
      if ( (int)v121 - 4 >= (unsigned int)max_length )
        break;
      v123 = (QuestRewardInfo_o *)*((_QWORD *)&v5->obj.klass + v121);
      if ( !v123 )
        goto LABEL_76;
      if ( v123->fields.type == 1 )
      {
        if ( !mItemSpList_2 )
          goto LABEL_76;
        if ( v122 >= mItemSpList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v121);
        if ( !this )
          goto LABEL_76;
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !mServantFaceIconList_2 )
          goto LABEL_76;
        if ( v122 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v121);
        if ( !this )
          goto LABEL_76;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( v122 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v121);
        if ( !this )
          goto LABEL_76;
        ServantFaceIconComponent__Set_30846632(
          (ServantFaceIconComponent_o *)this,
          v123->fields.objectId,
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
        if ( v122 >= mServantFaceIconList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v121);
        if ( !this )
          goto LABEL_76;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_76;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( !mItemSpList_2 )
          goto LABEL_76;
        if ( v122 >= mItemSpList_2->max_length )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v121);
        if ( !this )
          goto LABEL_76;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (QuestRewardItemAction_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                            gameObject,
                                            (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_76;
        ItemIconComponent__SetGift(
          (ItemIconComponent_o *)this,
          v123->fields.type,
          v123->fields.objectId,
          v123->fields.num,
          0,
          0LL);
      }
      itemLabelDispList = v6->fields.itemLabelDispList;
      if ( !itemLabelDispList )
        goto LABEL_76;
      if ( v122 >= itemLabelDispList->max_length )
        break;
      QuestRewardItemAction__SetClearTextLabel(this, *((UILabel_o **)&itemLabelDispList->obj.klass + v121), v123, v124);
      max_length = v5->max_length;
      if ( (int)++v121 - 4 >= max_length )
        goto LABEL_74;
    }
LABEL_77:
    v127 = sub_B5D6C8(this);
    sub_B5D668(v127, 0LL);
  }
LABEL_74:
  QuestRewardItemAction__CommonSetUpEndAction(v6, (const MethodInfo *)questInfoRewardList);
}


void __fastcall QuestRewardItemAction__Update(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x0

  if ( (byte_42E6EEA & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardItemAction__update__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CTouch_TypeInfo, v5, v6, v7);
    byte_42E6EEA = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_QuestRewardItemAction__update__);
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
  __int64 v23; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x19
  __int64 v33; // x8
  System_Int32_array **gameObject; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  float y; // s8
  float z; // s9
  ManagerConfig_c *v50; // x0
  int WIDTH; // w24
  MoveObject_o *v52; // x21
  float x; // s10
  float v54; // s11
  float v55; // s12
  System_Action_o *v56; // x22
  System_Action_o *v57; // x23
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E7F1C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v5, v6, v7);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v14, v15, v16);
    sub_B5D5C4(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v17, v18, v19);
    sub_B5D5C4(&QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v20, v21, v22);
    byte_42E7F1C = 1;
  }
  v23 = sub_B5D694(QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___ctor(
    (QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_21;
  *(_QWORD *)(v23 + 32) = that;
  v32 = v23 + 32;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 32), (System_Int32_array **)that, v26, v27, v28, v29, v30, v31);
  v33 = *(_QWORD *)(v23 + 32);
  if ( !v33 )
    goto LABEL_21;
  transform = *(UnityEngine_Transform_o **)(v33 + 72);
  if ( !transform )
    goto LABEL_21;
  if ( *(_BYTE *)(v33 + 304) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_21;
    transform = UnityEngine_Transform__get_parent(transform, 0LL);
    if ( !transform )
      goto LABEL_21;
  }
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  *(_QWORD *)(v23 + 16) = gameObject;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 16), gameObject, v35, v36, v37, v38, v39, v40);
  transform = *(UnityEngine_Transform_o **)(v23 + 32);
  if ( !transform )
    goto LABEL_21;
  QuestRewardItemAction__SetActiveLabelList(
    (QuestRewardItemAction_o *)transform,
    *(UILabel_array **)&transform[9].fields.m_CachedPtr,
    1,
    0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v23 + 16),
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v23 + 24) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 24), Component_UIWidget, v42, v43, v44, v45, v46, v47);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v23 + 16), 0LL);
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v50 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v50 = ManagerConfig_TypeInfo;
  }
  WIDTH = v50->static_fields->WIDTH;
  v59 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v23 + 16), 0LL);
  v52 = *(MoveObject_o **)(v23 + 24);
  x = v59.fields.x;
  v54 = v59.fields.y;
  v55 = v59.fields.z;
  v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v23,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v23,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v52
    || (v60.fields.x = (float)WIDTH,
        v60.fields.y = y,
        v60.fields.z = z,
        v61.fields.x = x,
        v61.fields.y = v54,
        v61.fields.z = v55,
        MoveObject__Play(v52, v60, v61, 0.25, v56, v57, 0.0, 17, 0LL),
        !*(_QWORD *)v32) )
  {
LABEL_21:
    sub_B5D69C(transform, v25);
  }
  if ( *(_BYTE *)(*(_QWORD *)v32 + 201LL) )
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
    sub_B5D69C(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardItemAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  long double v4; // q8
  QuestRewardItemAction_StatePlay_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *mSimpleAnimation; // x21
  System_Int32_array **Item; // x0
  BattleServantConfConponent_o *p_mSimpleAnimState; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x3
  BattleServantConfConponent_c *klass; // x21
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_TrackedReference_o *v22; // x20
  float mTreasureAnimStartTime; // s0
  _QWORD *image; // x8
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **v26; // x11
  __int64 v27; // x0
  __int64 v28; // x3
  BattleServantConfConponent_c *v29; // x20
  _QWORD *v30; // x8
  unsigned __int64 v31; // x10
  SimpleAnimation_State_c **v32; // x11
  __int64 v33; // x0
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x20
  int max_length; // w8
  int i; // w21
  _BOOL4 v37; // w8
  __int64 v38; // x0

  v6 = this;
  if ( (byte_42E7F1D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QuestRewardItemAction_StatePlay_o *)sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v7, v8, v9);
    byte_42E7F1D = 1;
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
    v6->fields.mSimpleAnimState = (struct SimpleAnimation_State_o *)Item;
    p_mSimpleAnimState = (BattleServantConfConponent_o *)&v6->fields.mSimpleAnimState;
    sub_B5D560(p_mSimpleAnimState, Item, v13, v14, v15, v16, v17, v18);
    klass = p_mSimpleAnimState->klass;
    if ( that->fields.mIsFromTreasureBox )
    {
      *(float *)&v4 = that->fields.mTreasureAnimStartTime;
      if ( !klass )
        goto LABEL_50;
    }
    else
    {
      LODWORD(v4) = 0;
      if ( !klass )
        goto LABEL_50;
    }
    image = klass->_1.image;
    if ( *((_WORD *)klass->_1.image + 149) )
    {
      v25 = 0LL;
      v26 = (SimpleAnimation_State_c **)(image[22] + 8LL);
      while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v25;
        v26 += 2;
        if ( v25 >= *((unsigned __int16 *)klass->_1.image + 149) )
          goto LABEL_26;
      }
      v27 = (__int64)&image[2 * *(_DWORD *)v26 + 51];
    }
    else
    {
LABEL_26:
      v27 = sub_AF54C0(p_mSimpleAnimState->klass, SimpleAnimation_State_TypeInfo, 6LL, v19);
    }
    this = (QuestRewardItemAction_StatePlay_o *)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD, long double))v27)(
                                                  klass,
                                                  *(_QWORD *)(v27 + 8),
                                                  v4);
    v29 = p_mSimpleAnimState->klass;
    if ( v29 )
    {
      v30 = v29->_1.image;
      if ( *((_WORD *)v29->_1.image + 149) )
      {
        v31 = 0LL;
        v32 = (SimpleAnimation_State_c **)(v30[22] + 8LL);
        while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v31;
          v32 += 2;
          if ( v31 >= *((unsigned __int16 *)v29->_1.image + 149) )
            goto LABEL_33;
        }
        v33 = (__int64)&v30[2 * *(_DWORD *)v32 + 55];
      }
      else
      {
LABEL_33:
        v33 = sub_AF54C0(v29, SimpleAnimation_State_TypeInfo, 8LL, v28);
      }
      (*(void (__fastcall **)(BattleServantConfConponent_c *, _QWORD, float))v33)(v29, *(_QWORD *)(v33 + 8), 1.0);
      this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
      if ( this )
      {
        this = (QuestRewardItemAction_StatePlay_o *)SimpleAnimation__Play_16676044(
                                                      (SimpleAnimation_o *)this,
                                                      that->fields.playAnimationName,
                                                      0LL);
        goto LABEL_40;
      }
    }
LABEL_50:
    sub_B5D69C(this, that);
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
    v22 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                              (UnityEngine_Animation_o *)this,
                                              that->fields.playAnimationName,
                                              0LL);
    this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_TrackedReference__op_Inequality(v22, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( that->fields.mIsFromTreasureBox )
      {
        mTreasureAnimStartTime = that->fields.mTreasureAnimStartTime;
        if ( !v22 )
          goto LABEL_50;
      }
      else
      {
        mTreasureAnimStartTime = 0.0;
        if ( !v22 )
          goto LABEL_50;
      }
      UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)v22, mTreasureAnimStartTime, 0LL);
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)v22, 1.0, 0LL);
      this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
      if ( !this )
        goto LABEL_50;
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Animation__Play_51249124(
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
        v38 = sub_B5D6C8(this);
        sub_B5D668(v38, 0LL);
      }
      this = (QuestRewardItemAction_StatePlay_o *)appearEffObjDispList->m_Items[i];
      if ( that->fields.mIsFromTreasureBox )
      {
        v37 = !that->fields.mTreasureEffectOff;
        if ( !this )
          goto LABEL_50;
      }
      else
      {
        v37 = 1;
        if ( !this )
          goto LABEL_50;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v37, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x21
  int max_length; // w8
  unsigned int v13; // w22
  Il2CppClass **v14; // x8
  UnityEngine_GameObject_o *v15; // x20
  _BOOL4 v16; // w9
  _BOOL4 v17; // w8
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  int32_t v20; // w1
  __int64 v21; // x0

  if ( (byte_42E7F1E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    this = (QuestRewardItemAction_StatePlay_o *)sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E7F1E = 1;
  }
  if ( !that )
    goto LABEL_43;
  appearEffObjDispList = that->fields.appearEffObjDispList;
  if ( !appearEffObjDispList )
    goto LABEL_43;
  max_length = appearEffObjDispList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        v21 = sub_B5D6C8(this);
        sub_B5D668(v21, 0LL);
      }
      v14 = &appearEffObjDispList->obj.klass + (int)v13;
      v15 = (UnityEngine_GameObject_o *)v14[4];
      if ( !v15 )
        break;
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_GameObject__get_activeSelf(
                                                    (UnityEngine_GameObject_o *)v14[4],
                                                    0LL);
      v16 = !that->fields.mIsFromTreasureBox || !that->fields.mTreasureEffectOff;
      if ( v16 != ((unsigned __int8)this & 1) )
      {
        v17 = !that->fields.mIsFromTreasureBox || !that->fields.mTreasureEffectOff;
        UnityEngine_GameObject__SetActive(v15, v17, 0LL);
      }
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_18;
    }
LABEL_43:
    sub_B5D69C(this, that);
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
  this = (QuestRewardItemAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_43;
  if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
  {
    if ( that->fields.mLabelAnimate )
    {
      v20 = 2;
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
      v20 = 3;
    }
    QuestRewardItemAction__SetState(that, v20, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E7F20 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_QuestRewardItemAction_StateTouchWait__CheckTutorial_b__4_0__, v5, v6, v7);
    byte_42E7F20 = 1;
  }
  if ( EventTutorialMaster__IsTutorialAvailable(0, 75, 0, 0, 0, 0, 0LL) )
  {
    this->fields.waitTutorial = 1;
    v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
  QuestRewardItemAction_StateTouchWait_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( !that
    || (v3 = this, (this = (QuestRewardItemAction_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0LL)
    || (this = (QuestRewardItemAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL)) == 0LL )
  {
    sub_B5D69C(this, that);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x19
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v38; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v40; // x22

  if ( (byte_42E7F1F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CTouch_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&SoundManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__, v21, v22, v23);
    sub_B5D5C4(&QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo, v24, v25, v26);
    byte_42E7F1F = 1;
  }
  v27 = sub_B5D694(QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_TypeInfo);
  QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0___ctor(
    (QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_25;
  *(_QWORD *)(v27 + 16) = that;
  v36 = v27 + 16;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)that, v30, v31, v32, v33, v34, v35);
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
    if ( *(_QWORD *)v36 )
    {
      gameObject = *(UnityEngine_Component_o **)(*(_QWORD *)v36 + 216LL);
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v38 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v38 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v38->static_fields->DEFAULT_FADE_TIME;
          v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v40,
            (Il2CppObject *)v27,
            Method_QuestRewardItemAction_StateTouchWait___c__DisplayClass2_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v40, 0LL);
            gameObject = *(UnityEngine_Component_o **)v36;
            if ( *(_QWORD *)v36 )
            {
              QuestRewardItemAction__SetState((QuestRewardItemAction_o *)gameObject, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_B5D69C(gameObject, v29);
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
    sub_B5D69C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}