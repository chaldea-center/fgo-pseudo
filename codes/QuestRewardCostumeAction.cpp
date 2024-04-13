void __fastcall QuestRewardCostumeAction___ctor(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardCostumeAction__Awake(QuestRewardCostumeAction_o *this, const MethodInfo *method)
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
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct CStateManager_QuestRewardCostumeAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x21
  QuestRewardCostumeAction_StateNone_o *v44; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v46; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v47; // x21
  QuestRewardCostumeAction_StatePlay_o *v48; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v49; // x21
  QuestRewardCostumeAction_StateItemLabel_o *v50; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v51; // x20
  QuestRewardCostumeAction_StateTouchWait_o *v52; // x21
  const MethodInfo *v53; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v56; // x21
  UnityEngine_GameObject_o *v57; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6ED7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardCostumeAction___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_QuestRewardCostumeAction__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_QuestRewardCostumeAction__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CTouch_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&QuestRewardCostumeAction_StateItemLabel_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&QuestRewardCostumeAction_StateNone_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&QuestRewardCostumeAction_StatePlay_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&QuestRewardCostumeAction_StateTouchWait_TypeInfo, v32, v33, v34);
    byte_42E6ED7 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v36 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_QuestRewardCostumeAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v36,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2BB2630 *)Method_CStateManager_QuestRewardCostumeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardCostumeAction__o *)v36;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    mFSM = this->fields.mFSM;
    v44 = (QuestRewardCostumeAction_StateNone_o *)sub_B5D694(QuestRewardCostumeAction_StateNone_TypeInfo);
    QuestRewardCostumeAction_StateNone___ctor(v44, 0LL);
    if ( !mFSM )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v44,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v47 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v48 = (QuestRewardCostumeAction_StatePlay_o *)sub_B5D694(QuestRewardCostumeAction_StatePlay_TypeInfo);
    QuestRewardCostumeAction_StatePlay___ctor(v48, 0LL);
    if ( !v47 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v47,
      1,
      (IState_T__o *)v48,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v49 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v50 = (QuestRewardCostumeAction_StateItemLabel_o *)sub_B5D694(QuestRewardCostumeAction_StateItemLabel_TypeInfo);
    QuestRewardCostumeAction_StateItemLabel___ctor(v50, 0LL);
    if ( !v49 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v49,
      2,
      (IState_T__o *)v50,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v51 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v52 = (QuestRewardCostumeAction_StateTouchWait_o *)sub_B5D694(QuestRewardCostumeAction_StateTouchWait_TypeInfo);
    QuestRewardCostumeAction_StateTouchWait___ctor(v52, 0LL);
    if ( !v51 )
      goto LABEL_28;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v51,
      3,
      (IState_T__o *)v52,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardCostumeAction__add__);
    QuestRewardCostumeAction__SetState(this, 0, v53);
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
      v56 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v57 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v56,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v57, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v57, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v57, zero, 0LL);
        if ( v57 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v57,
                                                        (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v57;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v57,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63);
            goto LABEL_24;
          }
        }
LABEL_28:
        sub_B5D69C(ComponentInChildren_Dropdown_DropdownItem, v46);
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
  int v2; // w2
  __int64 v3; // x3
  QuestRewardCostumeAction_o *v4; // x19
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E6EDB & 1) == 0 )
  {
    this = (QuestRewardCostumeAction_o *)sub_B5D5C4(
                                           &Method_CStateManager_QuestRewardCostumeAction__getState__,
                                           (_DWORD)method,
                                           v2,
                                           v3);
    byte_42E6EDB = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v30; // x20
  System_String_o *name; // x0
  __int64 v32; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v34; // x20
  unsigned __int64 v35; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v37; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v39; // x20
  System_String_o *v40; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v42; // x0
  System_Action_o *v43; // x21

  if ( (byte_42E6EDA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endAct, (_DWORD)method, v4);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_QuestRewardCostumeAction__Play_b__14_0__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v24, v25, v26);
    byte_42E6EDA = 1;
  }
  this->fields.mEndAct = endAct;
  sub_B5D560(
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
    v30 = this->fields.mSimpleAnimation;
    if ( !v30 )
      goto LABEL_33;
    gameObject = (UnityEngine_GameObject_o *)v30[1].monitor;
    if ( !gameObject )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v30, name, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    klass = gameObject->klass;
    v34 = gameObject;
    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v35;
        p_offset += 2;
        if ( v35 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v37 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_15:
      v37 = sub_AF54C0(gameObject, SimpleAnimation_State_TypeInfo, 8LL, v32);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v37)(v34, *(_QWORD *)(v37 + 8), 0.0);
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
      v39 = this->fields.mAnimation;
      if ( !v39 )
        goto LABEL_33;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      v40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v39, v40, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fadeInTime <= 0.0 )
  {
    v42 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v42 = AvalonSceneManager_TypeInfo;
    }
    fadeInTime = v42->static_fields->DEFAULT_FADE_TIME;
  }
  v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_QuestRewardCostumeAction__Play_b__14_0__, 0LL);
  if ( !Instance )
LABEL_33:
    sub_B5D69C(gameObject, v28);
  CommonUI__maskFadein(Instance, fadeInTime, v43, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardCostumeAction__SetState(
        QuestRewardCostumeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x0

  if ( (byte_42E6EDC & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardCostumeAction__setState__, state, (_DWORD)method, v3);
    byte_42E6EDC = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_QuestRewardCostumeAction__setState__);
}


void __fastcall QuestRewardCostumeAction__Setup(
        QuestRewardCostumeAction_o *this,
        int32_t imgId,
        System_String_o *itmName,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
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
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  UnityEngine_Component_o *transform; // x0
  __int64 v32; // x1
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct SimpleAnimation_o *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v48; // x0
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7

  if ( (byte_42E6ED9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, imgId, (_DWORD)itmName, method);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v10, v11, v12);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v16, v17, v18);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_11043/*"QUEST_CLEAR_COSTUME_GET"*/, v28, v29, v30);
    byte_42E6ED9 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_26;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_26;
  v40 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      transform,
                                      (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v40;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_26;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_26;
  BYTE5(transform[4].klass) = 1;
  transform = (UnityEngine_Component_o *)this->fields.mItemSp;
  if ( !transform )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  transform = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                           gameObject,
                                           (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
  if ( !transform )
    goto LABEL_26;
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)transform, imgId, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11043/*"QUEST_CLEAR_COSTUME_GET"*/, 0LL);
  transform = (UnityEngine_Component_o *)System_String__Format(v48, (Il2CppObject *)itmName, 0LL);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
          Component_srcLineSprite,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
        goto LABEL_23;
      }
    }
LABEL_26:
    sub_B5D69C(transform, v32);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x0

  if ( (byte_42E6ED8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardCostumeAction__update__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CTouch_TypeInfo, v5, v6, v7);
    byte_42E6ED8 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_QuestRewardCostumeAction__update__);
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
  __int64 v20; // x19
  UnityEngine_Component_o *v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x8
  System_Int32_array **gameObject; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  float y; // s8
  float z; // s9
  ManagerConfig_c *v46; // x0
  int WIDTH; // w23
  MoveObject_o *v48; // x20
  float x; // s10
  float v50; // s11
  float v51; // s12
  System_Action_o *v52; // x21
  System_Action_o *v53; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E7F11 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v5, v6, v7);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v11, v12, v13);
    sub_B5D5C4(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v14, v15, v16);
    sub_B5D5C4(&QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v17, v18, v19);
    byte_42E7F11 = 1;
  }
  v20 = sub_B5D694(QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___ctor(
    (QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_12;
  *(_QWORD *)(v20 + 32) = that;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 32), (System_Int32_array **)that, v23, v24, v25, v26, v27, v28);
  v29 = *(_QWORD *)(v20 + 32);
  if ( !v29 )
    goto LABEL_12;
  v21 = *(UnityEngine_Component_o **)(v29 + 56);
  if ( !v21 )
    goto LABEL_12;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(v21, 0LL);
  *(_QWORD *)(v20 + 16) = gameObject;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), gameObject, v31, v32, v33, v34, v35, v36);
  v21 = *(UnityEngine_Component_o **)(v20 + 16);
  if ( !v21 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v21, 1, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v20 + 16),
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v20 + 24) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 24), Component_UIWidget, v38, v39, v40, v41, v42, v43);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v20 + 16), 0LL);
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v46 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v46 = ManagerConfig_TypeInfo;
  }
  WIDTH = v46->static_fields->WIDTH;
  v55 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v20 + 16), 0LL);
  v48 = *(MoveObject_o **)(v20 + 24);
  x = v55.fields.x;
  v50 = v55.fields.y;
  v51 = v55.fields.z;
  v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v20,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v20,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v48 )
LABEL_12:
    sub_B5D69C(v21, v22);
  v56.fields.x = (float)WIDTH;
  v56.fields.y = y;
  v56.fields.z = z;
  v57.fields.x = x;
  v57.fields.y = v50;
  v57.fields.z = v51;
  MoveObject__Play(v48, v56, v57, 0.25, v52, v53, 0.0, 17, 0LL);
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
    sub_B5D69C(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardCostumeAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  QuestRewardCostumeAction_StatePlay_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v10; // x21
  System_String_o *v11; // x0
  struct SimpleAnimation_o *v12; // x21
  System_String_o *v13; // x0
  System_Int32_array **v14; // x0
  BattleServantConfConponent_o *p_mSimpleAnimState; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x3
  BattleServantConfConponent_c *klass; // x21
  _QWORD *image; // x8
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **v26; // x11
  __int64 v27; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v29; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v31; // x21
  System_String_o *v32; // x0
  System_Int32_array **Item; // x0
  BattleServantConfConponent_o *p_fields; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x3
  BattleServantConfConponent_c *v42; // x20
  _QWORD *v43; // x8
  unsigned __int64 v44; // x10
  SimpleAnimation_State_c **v45; // x11
  __int64 v46; // x0

  v5 = this;
  if ( (byte_42E7F12 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QuestRewardCostumeAction_StatePlay_o *)sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v6, v7, v8);
    byte_42E7F12 = 1;
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
    v29 = that->fields.mAnimation;
    if ( v29 )
    {
      this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__Play_51249124(v29, name, 0LL);
        v31 = that->fields.mAnimation;
        if ( v31 )
        {
          this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( this )
          {
            v32 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            Item = (System_Int32_array **)UnityEngine_Animation__get_Item(v31, v32, 0LL);
            v5->fields.mAnimState = (struct UnityEngine_AnimationState_o *)Item;
            p_fields = (BattleServantConfConponent_o *)&v5->fields;
            sub_B5D560(p_fields, Item, v35, v36, v37, v38, v39, v40);
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
    sub_B5D69C(this, that);
  }
  v10 = that->fields.mSimpleAnimation;
  if ( !v10 )
    goto LABEL_40;
  this = (QuestRewardCostumeAction_StatePlay_o *)v10[1].monitor;
  if ( !this )
    goto LABEL_40;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardCostumeAction_StatePlay_o *)SimpleAnimation__Play_16676044(v10, v11, 0LL);
  v12 = that->fields.mSimpleAnimation;
  if ( !v12 )
    goto LABEL_40;
  this = (QuestRewardCostumeAction_StatePlay_o *)v12[1].monitor;
  if ( !this )
    goto LABEL_40;
  v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v14 = (System_Int32_array **)SimpleAnimation__get_Item(v12, v13, 0LL);
  v5->fields.mSimpleAnimState = (struct SimpleAnimation_State_o *)v14;
  p_mSimpleAnimState = (BattleServantConfConponent_o *)&v5->fields.mSimpleAnimState;
  sub_B5D560(p_mSimpleAnimState, v14, v16, v17, v18, v19, v20, v21);
  klass = p_mSimpleAnimState->klass;
  if ( !p_mSimpleAnimState->klass )
    goto LABEL_40;
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
        goto LABEL_17;
    }
    v27 = (__int64)&image[2 * *(_DWORD *)v26 + 51];
  }
  else
  {
LABEL_17:
    v27 = sub_AF54C0(p_mSimpleAnimState->klass, SimpleAnimation_State_TypeInfo, 6LL, v22);
  }
  this = (QuestRewardCostumeAction_StatePlay_o *)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD, float))v27)(
                                                   klass,
                                                   *(_QWORD *)(v27 + 8),
                                                   0.0);
  v42 = p_mSimpleAnimState->klass;
  if ( !v42 )
    goto LABEL_40;
  v43 = v42->_1.image;
  if ( *((_WORD *)v42->_1.image + 149) )
  {
    v44 = 0LL;
    v45 = (SimpleAnimation_State_c **)(v43[22] + 8LL);
    while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v44;
      v45 += 2;
      if ( v44 >= *((unsigned __int16 *)v42->_1.image + 149) )
        goto LABEL_35;
    }
    v46 = (__int64)&v43[2 * *(_DWORD *)v45 + 55];
  }
  else
  {
LABEL_35:
    v46 = sub_AF54C0(v42, SimpleAnimation_State_TypeInfo, 8LL, v41);
  }
  (*(void (__fastcall **)(BattleServantConfConponent_c *, _QWORD, float))v46)(v42, *(_QWORD *)(v46 + 8), 1.0);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v9; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v12; // x20
  System_String_o *v13; // x0

  if ( (byte_42E7F13 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QuestRewardCostumeAction_StatePlay_o *)sub_B5D5C4(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v5,
                                                     v6,
                                                     v7);
    byte_42E7F13 = 1;
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
    v9 = that->fields.mSimpleAnimation;
    if ( !v9 )
      goto LABEL_23;
    this = (QuestRewardCostumeAction_StatePlay_o *)v9[1].monitor;
    if ( !this )
      goto LABEL_23;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v9, name, 0LL) )
      return;
LABEL_19:
    this = (QuestRewardCostumeAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardCostumeAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B5D69C(this, that);
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
    v12 = that->fields.mAnimation;
    if ( !v12 )
      goto LABEL_23;
    this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !this )
      goto LABEL_23;
    v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v12, v13, 0LL) )
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
    sub_B5D69C(this, that);
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
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x19
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x22

  if ( (byte_42E7F14 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CTouch_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v17, v18, v19);
    sub_B5D5C4(&QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v20, v21, v22);
    byte_42E7F14 = 1;
  }
  v23 = sub_B5D694(QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0___ctor(
    (QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_21;
  *(_QWORD *)(v23 + 16) = that;
  v32 = v23 + 16;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)that, v26, v27, v28, v29, v30, v31);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v32 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v32 + 88LL);
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v34 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v34 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
          v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v36,
            (Il2CppObject *)v23,
            Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v36, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v32;
            if ( *(_QWORD *)v32 )
            {
              QuestRewardCostumeAction__SetState((QuestRewardCostumeAction_o *)isTouchPush, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B5D69C(isTouchPush, v25);
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
    sub_B5D69C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}