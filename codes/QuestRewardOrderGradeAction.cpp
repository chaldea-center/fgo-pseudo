void __fastcall QuestRewardOrderGradeAction___ctor(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction__Awake(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
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
  struct CStateManager_QuestRewardOrderGradeAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x21
  QuestRewardOrderGradeAction_StateNone_o *v41; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v43; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v44; // x21
  QuestRewardOrderGradeAction_StatePlay_o *v45; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v46; // x21
  QuestRewardOrderGradeAction_StateItemLabel_o *v47; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v48; // x20
  QuestRewardOrderGradeAction_StateTouchWait_o *v49; // x21
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

  if ( (byte_42E6EF5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardOrderGradeAction___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_QuestRewardOrderGradeAction__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_QuestRewardOrderGradeAction__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&QuestRewardOrderGradeAction_StateItemLabel_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&QuestRewardOrderGradeAction_StateNone_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&QuestRewardOrderGradeAction_StatePlay_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&QuestRewardOrderGradeAction_StateTouchWait_TypeInfo, v29, v30, v31);
    byte_42E6EF5 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v33 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_QuestRewardOrderGradeAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v33,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2BB2630 *)Method_CStateManager_QuestRewardOrderGradeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardOrderGradeAction__o *)v33;
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
    v41 = (QuestRewardOrderGradeAction_StateNone_o *)sub_B5D694(QuestRewardOrderGradeAction_StateNone_TypeInfo);
    QuestRewardOrderGradeAction_StateNone___ctor(v41, 0LL);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v41,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v44 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v45 = (QuestRewardOrderGradeAction_StatePlay_o *)sub_B5D694(QuestRewardOrderGradeAction_StatePlay_TypeInfo);
    QuestRewardOrderGradeAction_StatePlay___ctor(v45, 0LL);
    if ( !v44 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v44,
      1,
      (IState_T__o *)v45,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v46 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v47 = (QuestRewardOrderGradeAction_StateItemLabel_o *)sub_B5D694(QuestRewardOrderGradeAction_StateItemLabel_TypeInfo);
    QuestRewardOrderGradeAction_StateItemLabel___ctor(v47, 0LL);
    if ( !v46 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v46,
      2,
      (IState_T__o *)v47,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v48 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v49 = (QuestRewardOrderGradeAction_StateTouchWait_o *)sub_B5D694(QuestRewardOrderGradeAction_StateTouchWait_TypeInfo);
    QuestRewardOrderGradeAction_StateTouchWait___ctor(v49, 0LL);
    if ( !v48 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v48,
      3,
      (IState_T__o *)v49,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    QuestRewardOrderGradeAction__SetState(this, 0, v50);
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


int32_t __fastcall QuestRewardOrderGradeAction__GetState(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestRewardOrderGradeAction_o *v4; // x19
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E6EF9 & 1) == 0 )
  {
    this = (QuestRewardOrderGradeAction_o *)sub_B5D5C4(
                                              &Method_CStateManager_QuestRewardOrderGradeAction__getState__,
                                              (_DWORD)method,
                                              v2,
                                              v3);
    byte_42E6EF9 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardOrderGradeAction__Play(
        QuestRewardOrderGradeAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
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

  if ( (byte_42E6EF8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)method, v4);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_QuestRewardOrderGradeAction__Play_b__14_0__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v24, v25, v26);
    byte_42E6EF8 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mEndAct,
    (System_Int32_array **)end_act,
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
  if ( fade_in_time <= 0.0 )
  {
    v42 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v42 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v42->static_fields->DEFAULT_FADE_TIME;
  }
  v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_QuestRewardOrderGradeAction__Play_b__14_0__, 0LL);
  if ( !Instance )
LABEL_33:
    sub_B5D69C(gameObject, v28);
  CommonUI__maskFadein(Instance, fade_in_time, v43, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardOrderGradeAction__SetState(
        QuestRewardOrderGradeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x0

  if ( (byte_42E6EFA & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardOrderGradeAction__setState__, state, (_DWORD)method, v3);
    byte_42E6EFA = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_QuestRewardOrderGradeAction__setState__);
}


void __fastcall QuestRewardOrderGradeAction__Setup(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
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
  UnityEngine_Component_o *transform; // x0
  __int64 v21; // x1
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct SimpleAnimation_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_42E6EF7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    byte_42E6EF7 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_20;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_20;
  v29 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      transform,
                                      (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_20;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_20;
  BYTE5(transform[4].klass) = 1;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_20;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_20;
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
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        goto LABEL_17;
      }
    }
LABEL_20:
    sub_B5D69C(transform, v21);
  }
LABEL_17:
  transform = (UnityEngine_Component_o *)*p_mScreenTouchInfo;
  if ( !*p_mScreenTouchInfo )
    goto LABEL_20;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
}


void __fastcall QuestRewardOrderGradeAction__Update(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x0

  if ( (byte_42E6EF6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardOrderGradeAction__update__, (_DWORD)method, v2, v3);
    byte_42E6EF6 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_QuestRewardOrderGradeAction__update__);
}


void __fastcall QuestRewardOrderGradeAction___Play_b__14_0(
        QuestRewardOrderGradeAction_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardOrderGradeAction__SetState(this, 1, v2);
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel___ctor(
        QuestRewardOrderGradeAction_StateItemLabel_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel__begin(
        QuestRewardOrderGradeAction_StateItemLabel_o *this,
        QuestRewardOrderGradeAction_o *that,
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
  __int64 v23; // x19
  UnityEngine_Component_o *v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x8
  System_Int32_array **gameObject; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  float y; // s8
  float z; // s9
  ManagerConfig_c *v49; // x0
  int WIDTH; // w23
  MoveObject_o *v51; // x20
  float x; // s10
  float v53; // s11
  float v54; // s12
  System_Action_o *v55; // x21
  System_Action_o *v56; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E7F21 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v5, v6, v7);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v14, v15, v16);
    sub_B5D5C4(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v17, v18, v19);
    sub_B5D5C4(&QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v20, v21, v22);
    byte_42E7F21 = 1;
  }
  v23 = sub_B5D694(QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___ctor(
    (QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_15;
  *(_QWORD *)(v23 + 32) = that;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 32), (System_Int32_array **)that, v26, v27, v28, v29, v30, v31);
  v32 = *(_QWORD *)(v23 + 32);
  if ( !v32 )
    goto LABEL_15;
  v24 = *(UnityEngine_Component_o **)(v32 + 56);
  if ( !v24 )
    goto LABEL_15;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(v24, 0LL);
  *(_QWORD *)(v23 + 16) = gameObject;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 16), gameObject, v34, v35, v36, v37, v38, v39);
  v24 = *(UnityEngine_Component_o **)(v23 + 16);
  if ( !v24 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v24, 1, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v23 + 16),
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v23 + 24) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 24), Component_UIWidget, v41, v42, v43, v44, v45, v46);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v23 + 16), 0LL);
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v49 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v49 = ManagerConfig_TypeInfo;
  }
  WIDTH = v49->static_fields->WIDTH;
  v58 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v23 + 16), 0LL);
  v51 = *(MoveObject_o **)(v23 + 24);
  x = v58.fields.x;
  v53 = v58.fields.y;
  v54 = v58.fields.z;
  v55 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v23,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v23,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v51 )
LABEL_15:
    sub_B5D69C(v24, v25);
  v59.fields.x = (float)WIDTH;
  v59.fields.y = y;
  v59.fields.z = z;
  v60.fields.x = x;
  v60.fields.y = v53;
  v60.fields.z = v54;
  MoveObject__Play(v51, v59, v60, 0.25, v55, v56, 0.0, 17, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(4, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel__end(
        QuestRewardOrderGradeAction_StateItemLabel_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel__update(
        QuestRewardOrderGradeAction_StateItemLabel_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___ctor(
        QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___begin_b__0(
        QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_B5D69C(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardOrderGradeAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(0LL, method);
  QuestRewardOrderGradeAction__SetState(that, 3, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateNone___ctor(
        QuestRewardOrderGradeAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateNone__begin(
        QuestRewardOrderGradeAction_StateNone_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardOrderGradeAction_StateNone__end(
        QuestRewardOrderGradeAction_StateNone_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardOrderGradeAction_StateNone__update(
        QuestRewardOrderGradeAction_StateNone_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardOrderGradeAction_StatePlay___ctor(
        QuestRewardOrderGradeAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StatePlay__begin(
        QuestRewardOrderGradeAction_StatePlay_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestRewardOrderGradeAction_StatePlay_o *v5; // x20
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
  if ( (byte_42E7F22 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v6, v7, v8);
    byte_42E7F22 = 1;
  }
  if ( !that )
    goto LABEL_40;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_38;
    v29 = that->fields.mAnimation;
    if ( v29 )
    {
      this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__Play_51249124(v29, name, 0LL);
        v31 = that->fields.mAnimation;
        if ( v31 )
        {
          this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                              that->fields.mAnimation,
                                                              0LL);
          if ( this )
          {
            v32 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            Item = (System_Int32_array **)UnityEngine_Animation__get_Item(v31, v32, 0LL);
            v5->fields.mAnimState = (struct UnityEngine_AnimationState_o *)Item;
            p_fields = (BattleServantConfConponent_o *)&v5->fields;
            sub_B5D560(p_fields, Item, v35, v36, v37, v38, v39, v40);
            this = (QuestRewardOrderGradeAction_StatePlay_o *)p_fields->klass;
            if ( p_fields->klass )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              this = (QuestRewardOrderGradeAction_StatePlay_o *)p_fields->klass;
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
  this = (QuestRewardOrderGradeAction_StatePlay_o *)v10[1].monitor;
  if ( !this )
    goto LABEL_40;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)SimpleAnimation__Play_16676044(v10, v11, 0LL);
  v12 = that->fields.mSimpleAnimation;
  if ( !v12 )
    goto LABEL_40;
  this = (QuestRewardOrderGradeAction_StatePlay_o *)v12[1].monitor;
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
  this = (QuestRewardOrderGradeAction_StatePlay_o *)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD, float))v27)(
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
  this = (QuestRewardOrderGradeAction_StatePlay_o *)that->fields.mAppearEffObj;
  if ( !this )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StatePlay__end(
        QuestRewardOrderGradeAction_StatePlay_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardOrderGradeAction_StatePlay__update(
        QuestRewardOrderGradeAction_StatePlay_o *this,
        QuestRewardOrderGradeAction_o *that,
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

  if ( (byte_42E7F23 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)sub_B5D5C4(
                                                        &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                        v5,
                                                        v6,
                                                        v7);
    byte_42E7F23 = 1;
  }
  if ( !that )
    goto LABEL_23;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = that->fields.mSimpleAnimation;
    if ( !v9 )
      goto LABEL_23;
    this = (QuestRewardOrderGradeAction_StatePlay_o *)v9[1].monitor;
    if ( !this )
      goto LABEL_23;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v9, name, 0LL) )
      return;
LABEL_19:
    this = (QuestRewardOrderGradeAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardOrderGradeAction__SetState(that, 2, 0LL);
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
  this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v12 = that->fields.mAnimation;
    if ( !v12 )
      goto LABEL_23;
    this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !this )
      goto LABEL_23;
    v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v12, v13, 0LL) )
      return;
    goto LABEL_19;
  }
}


void __fastcall QuestRewardOrderGradeAction_StateTouchWait___ctor(
        QuestRewardOrderGradeAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateTouchWait__begin(
        QuestRewardOrderGradeAction_StateTouchWait_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (QuestRewardOrderGradeAction_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0LL
    || (this = (QuestRewardOrderGradeAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL)) == 0LL )
  {
    sub_B5D69C(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateTouchWait__end(
        QuestRewardOrderGradeAction_StateTouchWait_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardOrderGradeAction_StateTouchWait__update(
        QuestRewardOrderGradeAction_StateTouchWait_o *this,
        QuestRewardOrderGradeAction_o *that,
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

  if ( (byte_42E7F24 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CTouch_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v17, v18, v19);
    sub_B5D5C4(&QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v20, v21, v22);
    byte_42E7F24 = 1;
  }
  v23 = sub_B5D694(QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0___ctor(
    (QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_o *)v23,
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
            Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v36, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v32;
            if ( *(_QWORD *)v32 )
            {
              QuestRewardOrderGradeAction__SetState((QuestRewardOrderGradeAction_o *)isTouchPush, 0, 0LL);
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


void __fastcall QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0___ctor(
        QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardOrderGradeAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}