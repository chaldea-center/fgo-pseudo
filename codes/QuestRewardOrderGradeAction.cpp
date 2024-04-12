void __fastcall QuestRewardOrderGradeAction___ctor(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction__Awake(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardOrderGradeAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x21
  QuestRewardOrderGradeAction_StateNone_o *v12; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v14; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v15; // x21
  QuestRewardOrderGradeAction_StatePlay_o *v16; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  QuestRewardOrderGradeAction_StateItemLabel_o *v18; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v19; // x20
  QuestRewardOrderGradeAction_StateTouchWait_o *v20; // x21
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

  if ( (byte_42AE484 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QuestRewardOrderGradeAction___ctor__);
    sub_B52984(&Method_CStateManager_QuestRewardOrderGradeAction__add__);
    sub_B52984(&CStateManager_QuestRewardOrderGradeAction__TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestRewardOrderGradeAction_StateItemLabel_TypeInfo);
    sub_B52984(&QuestRewardOrderGradeAction_StateNone_TypeInfo);
    sub_B52984(&QuestRewardOrderGradeAction_StatePlay_TypeInfo);
    sub_B52984(&QuestRewardOrderGradeAction_StateTouchWait_TypeInfo);
    byte_42AE484 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B52A54(CStateManager_QuestRewardOrderGradeAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v4,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2B925C4 *)Method_CStateManager_QuestRewardOrderGradeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardOrderGradeAction__o *)v4;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.mFSM, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
    mFSM = this->fields.mFSM;
    v12 = (QuestRewardOrderGradeAction_StateNone_o *)sub_B52A54(QuestRewardOrderGradeAction_StateNone_TypeInfo);
    QuestRewardOrderGradeAction_StateNone___ctor(v12, 0LL);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_2B92690 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v16 = (QuestRewardOrderGradeAction_StatePlay_o *)sub_B52A54(QuestRewardOrderGradeAction_StatePlay_TypeInfo);
    QuestRewardOrderGradeAction_StatePlay___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_2B92690 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v18 = (QuestRewardOrderGradeAction_StateItemLabel_o *)sub_B52A54(QuestRewardOrderGradeAction_StateItemLabel_TypeInfo);
    QuestRewardOrderGradeAction_StateItemLabel___ctor(v18, 0LL);
    if ( !v17 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_2B92690 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v19 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v20 = (QuestRewardOrderGradeAction_StateTouchWait_o *)sub_B52A54(QuestRewardOrderGradeAction_StateTouchWait_TypeInfo);
    QuestRewardOrderGradeAction_StateTouchWait___ctor(v20, 0LL);
    if ( !v19 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_2B92690 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    QuestRewardOrderGradeAction__SetState(this, 0, v21);
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
                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v25, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v25, zero, 0LL);
        if ( v25 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v25,
                                                        (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v25;
            sub_B52920(
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
        sub_B52A5C(ComponentInChildren_Dropdown_DropdownItem, v14);
      }
    }
  }
}


int32_t __fastcall QuestRewardOrderGradeAction__GetState(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  QuestRewardOrderGradeAction_o *v2; // x19
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_42AE488 & 1) == 0 )
  {
    this = (QuestRewardOrderGradeAction_o *)sub_B52984(&Method_CStateManager_QuestRewardOrderGradeAction__getState__);
    byte_42AE488 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B52A5C(this, method);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v15; // x20
  System_String_o *name; // x0
  __int64 v17; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v19; // x20
  unsigned __int64 v20; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v22; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v24; // x20
  System_String_o *v25; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v27; // x0
  System_Action_o *v28; // x21

  if ( (byte_42AE487 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_QuestRewardOrderGradeAction__Play_b__14_0__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42AE487 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B52920(
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
    v19 = gameObject;
    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v20;
        p_offset += 2;
        if ( v20 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v22 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_15:
      v22 = sub_AEB880(gameObject, SimpleAnimation_State_TypeInfo, 8LL, v17);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v22)(v19, *(_QWORD *)(v22 + 8), 0.0);
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
      v24 = this->fields.mAnimation;
      if ( !v24 )
        goto LABEL_33;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v24, v25, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v27 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v27 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v27->static_fields->DEFAULT_FADE_TIME;
  }
  v28 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_QuestRewardOrderGradeAction__Play_b__14_0__, 0LL);
  if ( !Instance )
LABEL_33:
    sub_B52A5C(gameObject, v13);
  CommonUI__maskFadein(Instance, fade_in_time, v28, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardOrderGradeAction__SetState(
        QuestRewardOrderGradeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x0

  if ( (byte_42AE489 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QuestRewardOrderGradeAction__setState__);
    byte_42AE489 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B52A5C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2B92734 *)Method_CStateManager_QuestRewardOrderGradeAction__setState__);
}


void __fastcall QuestRewardOrderGradeAction__Setup(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v4; // x1
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct SimpleAnimation_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42AE486 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AE486 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_20;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_20;
  v12 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      transform,
                                      (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v12;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_20;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
          Component_srcLineSprite,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        goto LABEL_17;
      }
    }
LABEL_20:
    sub_B52A5C(transform, v4);
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
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x0

  if ( (byte_42AE485 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QuestRewardOrderGradeAction__update__);
    byte_42AE485 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2B9270C *)Method_CStateManager_QuestRewardOrderGradeAction__update__);
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

  if ( (byte_42AF27D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__);
    sub_B52984(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_B52984(&QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    byte_42AF27D = 1;
  }
  v4 = sub_B52A54(QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___ctor(
    (QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *)v4,
    0LL);
  if ( !v4 )
    goto LABEL_15;
  *(_QWORD *)(v4 + 32) = that;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)that, v7, v8, v9, v10, v11, v12);
  v13 = *(_QWORD *)(v4 + 32);
  if ( !v13 )
    goto LABEL_15;
  v5 = *(UnityEngine_Component_o **)(v13 + 56);
  if ( !v5 )
    goto LABEL_15;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(v5, 0LL);
  *(_QWORD *)(v4 + 16) = gameObject;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 16), gameObject, v15, v16, v17, v18, v19, v20);
  v5 = *(UnityEngine_Component_o **)(v4 + 16);
  if ( !v5 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 1, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v4 + 16),
                                                (const MethodInfo_1B7BF3C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v4 + 24) = Component_UIWidget;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 24), Component_UIWidget, v22, v23, v24, v25, v26, v27);
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
  v36 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v4,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v37 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v4,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v32 )
LABEL_15:
    sub_B52A5C(v5, v6);
  v40.fields.x = (float)WIDTH;
  v40.fields.y = y;
  v40.fields.z = z;
  v41.fields.x = x;
  v41.fields.y = v34;
  v41.fields.z = v35;
  MoveObject__Play(v32, v40, v41, 0.25, v36, v37, 0.0, 17, 0LL);
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
    sub_B52A5C(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardOrderGradeAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B52A5C(0LL, method);
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
  QuestRewardOrderGradeAction_StatePlay_o *v4; // x20
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
  __int64 v18; // x3
  BattleServantConfConponent_c *klass; // x21
  _QWORD *image; // x8
  unsigned __int64 v21; // x10
  SimpleAnimation_State_c **v22; // x11
  __int64 v23; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v25; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v27; // x21
  System_String_o *v28; // x0
  System_Int32_array **Item; // x0
  BattleServantConfConponent_o *p_fields; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x3
  BattleServantConfConponent_c *v38; // x20
  _QWORD *v39; // x8
  unsigned __int64 v40; // x10
  SimpleAnimation_State_c **v41; // x11
  __int64 v42; // x0

  v4 = this;
  if ( (byte_42AF27E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42AF27E = 1;
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
    v25 = that->fields.mAnimation;
    if ( v25 )
    {
      this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__Play_51067744(v25, name, 0LL);
        v27 = that->fields.mAnimation;
        if ( v27 )
        {
          this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                              that->fields.mAnimation,
                                                              0LL);
          if ( this )
          {
            v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            Item = (System_Int32_array **)UnityEngine_Animation__get_Item(v27, v28, 0LL);
            v4->fields.mAnimState = (struct UnityEngine_AnimationState_o *)Item;
            p_fields = (BattleServantConfConponent_o *)&v4->fields;
            sub_B52920(p_fields, Item, v31, v32, v33, v34, v35, v36);
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
    sub_B52A5C(this, that);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_40;
  this = (QuestRewardOrderGradeAction_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_40;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)SimpleAnimation__Play_16625408(v6, v7, 0LL);
  v8 = that->fields.mSimpleAnimation;
  if ( !v8 )
    goto LABEL_40;
  this = (QuestRewardOrderGradeAction_StatePlay_o *)v8[1].monitor;
  if ( !this )
    goto LABEL_40;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v10 = (System_Int32_array **)SimpleAnimation__get_Item(v8, v9, 0LL);
  v4->fields.mSimpleAnimState = (struct SimpleAnimation_State_o *)v10;
  p_mSimpleAnimState = (BattleServantConfConponent_o *)&v4->fields.mSimpleAnimState;
  sub_B52920(p_mSimpleAnimState, v10, v12, v13, v14, v15, v16, v17);
  klass = p_mSimpleAnimState->klass;
  if ( !p_mSimpleAnimState->klass )
    goto LABEL_40;
  image = klass->_1.image;
  if ( *((_WORD *)klass->_1.image + 149) )
  {
    v21 = 0LL;
    v22 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v22 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v21;
      v22 += 2;
      if ( v21 >= *((unsigned __int16 *)klass->_1.image + 149) )
        goto LABEL_17;
    }
    v23 = (__int64)&image[2 * *(_DWORD *)v22 + 51];
  }
  else
  {
LABEL_17:
    v23 = sub_AEB880(p_mSimpleAnimState->klass, SimpleAnimation_State_TypeInfo, 6LL, v18);
  }
  this = (QuestRewardOrderGradeAction_StatePlay_o *)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD, float))v23)(
                                                      klass,
                                                      *(_QWORD *)(v23 + 8),
                                                      0.0);
  v38 = p_mSimpleAnimState->klass;
  if ( !v38 )
    goto LABEL_40;
  v39 = v38->_1.image;
  if ( *((_WORD *)v38->_1.image + 149) )
  {
    v40 = 0LL;
    v41 = (SimpleAnimation_State_c **)(v39[22] + 8LL);
    while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v40;
      v41 += 2;
      if ( v40 >= *((unsigned __int16 *)v38->_1.image + 149) )
        goto LABEL_35;
    }
    v42 = (__int64)&v39[2 * *(_DWORD *)v41 + 55];
  }
  else
  {
LABEL_35:
    v42 = sub_AEB880(v38, SimpleAnimation_State_TypeInfo, 8LL, v37);
  }
  (*(void (__fastcall **)(BattleServantConfConponent_c *, _QWORD, float))v42)(v38, *(_QWORD *)(v42 + 8), 1.0);
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
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v8; // x20
  System_String_o *v9; // x0

  if ( (byte_42AF27F & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AF27F = 1;
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
    v5 = that->fields.mSimpleAnimation;
    if ( !v5 )
      goto LABEL_23;
    this = (QuestRewardOrderGradeAction_StatePlay_o *)v5[1].monitor;
    if ( !this )
      goto LABEL_23;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v5, name, 0LL) )
      return;
LABEL_19:
    this = (QuestRewardOrderGradeAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardOrderGradeAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B52A5C(this, that);
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
    v8 = that->fields.mAnimation;
    if ( !v8 )
      goto LABEL_23;
    this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !this )
      goto LABEL_23;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v8, v9, 0LL) )
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
    sub_B52A5C(this, that);
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

  if ( (byte_42AF280 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&CTouch_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_B52984(&QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_42AF280 = 1;
  }
  v4 = sub_B52A54(QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0___ctor(
    (QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_o *)v4,
    0LL);
  if ( !v4 )
    goto LABEL_21;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)that, v7, v8, v9, v10, v11, v12);
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v15 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v15 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
          v17 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v17,
            (Il2CppObject *)v4,
            Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v13;
            if ( *(_QWORD *)v13 )
            {
              QuestRewardOrderGradeAction__SetState((QuestRewardOrderGradeAction_o *)isTouchPush, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B52A5C(isTouchPush, v6);
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
    sub_B52A5C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}