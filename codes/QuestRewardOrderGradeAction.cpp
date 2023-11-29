void __fastcall QuestRewardOrderGradeAction___ctor(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction__Awake(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
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
  struct CStateManager_QuestRewardOrderGradeAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  QuestRewardOrderGradeAction_StateNone_o *v28; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  QuestRewardOrderGradeAction_StatePlay_o *v34; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  QuestRewardOrderGradeAction_StateItemLabel_o *v40; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  QuestRewardOrderGradeAction_StateTouchWait_o *v46; // x21
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

  if ( (byte_40F8216 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardOrderGradeAction___ctor__, method);
    sub_B16FFC(&Method_CStateManager_QuestRewardOrderGradeAction__add__, v6);
    sub_B16FFC(&CStateManager_QuestRewardOrderGradeAction__TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&QuestRewardOrderGradeAction_StateItemLabel_TypeInfo, v11);
    sub_B16FFC(&QuestRewardOrderGradeAction_StateNone_TypeInfo, v12);
    sub_B16FFC(&QuestRewardOrderGradeAction_StatePlay_TypeInfo, v13);
    sub_B16FFC(&QuestRewardOrderGradeAction_StateTouchWait_TypeInfo, v14);
    byte_40F8216 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v16 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_QuestRewardOrderGradeAction__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v16,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2907EF0 *)Method_CStateManager_QuestRewardOrderGradeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardOrderGradeAction__o *)v16;
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
    v28 = (QuestRewardOrderGradeAction_StateNone_o *)sub_B170CC(
                                                       QuestRewardOrderGradeAction_StateNone_TypeInfo,
                                                       v24,
                                                       v25,
                                                       v26,
                                                       v27);
    QuestRewardOrderGradeAction_StateNone___ctor(v28, 0LL);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v28,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v29 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v34 = (QuestRewardOrderGradeAction_StatePlay_o *)sub_B170CC(
                                                       QuestRewardOrderGradeAction_StatePlay_TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32,
                                                       v33);
    QuestRewardOrderGradeAction_StatePlay___ctor(v34, 0LL);
    if ( !v29 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v29,
      1,
      (IState_T__o *)v34,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v35 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v40 = (QuestRewardOrderGradeAction_StateItemLabel_o *)sub_B170CC(
                                                            QuestRewardOrderGradeAction_StateItemLabel_TypeInfo,
                                                            v36,
                                                            v37,
                                                            v38,
                                                            v39);
    QuestRewardOrderGradeAction_StateItemLabel___ctor(v40, 0LL);
    if ( !v35 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v35,
      2,
      (IState_T__o *)v40,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v41 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v46 = (QuestRewardOrderGradeAction_StateTouchWait_o *)sub_B170CC(
                                                            QuestRewardOrderGradeAction_StateTouchWait_TypeInfo,
                                                            v42,
                                                            v43,
                                                            v44,
                                                            v45);
    QuestRewardOrderGradeAction_StateTouchWait___ctor(v46, 0LL);
    if ( !v41 )
      goto LABEL_25;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v41,
      3,
      (IState_T__o *)v46,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    QuestRewardOrderGradeAction__SetState(this, 0, v47);
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


int32_t __fastcall QuestRewardOrderGradeAction__GetState(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x8

  if ( (byte_40F821A & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardOrderGradeAction__getState__, method);
    byte_40F821A = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v19; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v24; // x20
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v29; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *v31; // x0
  UnityEngine_AnimationState_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v38; // x0
  System_Action_o *v39; // x21

  if ( (byte_40F8219 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, end_act);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&Method_QuestRewardOrderGradeAction__Play_b__14_0__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v16);
    byte_40F8219 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B16F98(
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
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    v19 = this->fields.mSimpleAnimation;
    if ( !v19 )
      goto LABEL_33;
    monitor = (UnityEngine_Object_o *)v19[1].monitor;
    if ( !monitor )
      goto LABEL_33;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    Item = SimpleAnimation__get_Item(v19, name, 0LL);
    if ( !Item )
      goto LABEL_33;
    klass = Item->klass;
    v24 = Item;
    if ( *(_WORD *)&Item->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v25;
        p_offset += 2;
        if ( v25 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
    }
    else
    {
LABEL_15:
      p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v24, *(_QWORD *)(p_method + 8), 0.0);
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
        goto LABEL_33;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !clip )
        goto LABEL_33;
      v31 = UnityEngine_Object__get_name(clip, 0LL);
      v32 = UnityEngine_Animation__get_Item(v29, v31, 0LL);
      if ( !v32 )
        goto LABEL_33;
      UnityEngine_AnimationState__set_speed(v32, 0.0, 0LL);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v38 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v38 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v38->static_fields->DEFAULT_FADE_TIME;
  }
  v39 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v33, v34, v35, v36);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_QuestRewardOrderGradeAction__Play_b__14_0__, 0LL);
  if ( !Instance )
LABEL_33:
    sub_B170D4();
  CommonUI__maskFadein(Instance, fade_in_time, v39, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardOrderGradeAction__SetState(
        QuestRewardOrderGradeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x0

  if ( (byte_40F821B & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardOrderGradeAction__setState__, *(_QWORD *)&state);
    byte_40F821B = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_QuestRewardOrderGradeAction__setState__);
}


void __fastcall QuestRewardOrderGradeAction__Setup(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *transform; // x0
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Component_o *v16; // x0
  struct SimpleAnimation_o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Component_o *v24; // x0
  UIWidget_o *v25; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *mItemLabel; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Component_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  UnityEngine_Transform_o *v32; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_GameObject_o *v41; // x0

  if ( (byte_40F8218 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40F8218 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_20;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = ComponentInChildren_UIWidget;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v16 )
    goto LABEL_20;
  v17 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      v16,
                                      (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v24 )
    goto LABEL_20;
  v25 = UnityEngine_Component__GetComponentInChildren_UIWidget_(
          v24,
          (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !v25 )
    goto LABEL_20;
  *(&v25->fields.mAnchorsCached + 5) = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  mItemLabel = (UnityEngine_Component_o *)this->fields.mItemLabel;
  if ( !mItemLabel )
    goto LABEL_20;
  v28 = UnityEngine_Component__get_gameObject(mItemLabel, 0LL);
  if ( !v28 )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(v28, 0, 0LL);
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
    v32 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(Instance, v32, 0, 0LL);
      if ( ScreeenTouchInfo )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           ScreeenTouchInfo,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (UnityEngine_Component_o *)Component_srcLineSprite;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
          Component_srcLineSprite,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        goto LABEL_17;
      }
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_17:
  if ( !*p_mScreenTouchInfo )
    goto LABEL_20;
  v41 = UnityEngine_Component__get_gameObject(*p_mScreenTouchInfo, 0LL);
  if ( !v41 )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(v41, 0, 0LL);
}


void __fastcall QuestRewardOrderGradeAction__Update(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x0

  if ( (byte_40F8217 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardOrderGradeAction__update__, method);
    byte_40F8217 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_QuestRewardOrderGradeAction__update__);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x8
  UnityEngine_Component_o *v20; // x0
  System_Int32_array **gameObject; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_GameObject_o *v28; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  float y; // s8
  float z; // s9
  ManagerConfig_c *v38; // x0
  int WIDTH; // w23
  MoveObject_o *v40; // x20
  float x; // s10
  float v42; // s11
  float v43; // s12
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Action_o *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Action_o *v53; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FA331 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v6);
    sub_B16FFC(&ManagerConfig_TypeInfo, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v9);
    sub_B16FFC(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v10);
    sub_B16FFC(&QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v11);
    byte_40FA331 = 1;
  }
  v12 = sub_B170CC(QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___ctor(
    (QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_15;
  *(_QWORD *)(v12 + 32) = that;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)that, v13, v14, v15, v16, v17, v18);
  v19 = *(_QWORD *)(v12 + 32);
  if ( !v19 )
    goto LABEL_15;
  v20 = *(UnityEngine_Component_o **)(v19 + 56);
  if ( !v20 )
    goto LABEL_15;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(v20, 0LL);
  *(_QWORD *)(v12 + 16) = gameObject;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), gameObject, v22, v23, v24, v25, v26, v27);
  v28 = *(UnityEngine_GameObject_o **)(v12 + 16);
  if ( !v28 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(v28, 1, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v12 + 16),
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v12 + 24) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), Component_UIWidget, v30, v31, v32, v33, v34, v35);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v12 + 16), 0LL);
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v38 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v38 = ManagerConfig_TypeInfo;
  }
  WIDTH = v38->static_fields->WIDTH;
  v55 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v12 + 16), 0LL);
  v40 = *(MoveObject_o **)(v12 + 24);
  x = v55.fields.x;
  v42 = v55.fields.y;
  v43 = v55.fields.z;
  v48 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v44, v45, v46, v47);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v12,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v53 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v49, v50, v51, v52);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v12,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v40 )
LABEL_15:
    sub_B170D4();
  v56.fields.x = (float)WIDTH;
  v56.fields.y = y;
  v56.fields.z = z;
  v57.fields.x = x;
  v57.fields.y = v42;
  v57.fields.z = v43;
  MoveObject__Play(v40, v56, v57, 0.25, v48, v53, 0.0, 17, 0LL);
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
    sub_B170D4();
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardOrderGradeAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B170D4();
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
  __int64 v5; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v7; // x21
  UnityEngine_Object_o *monitor; // x0
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x21
  UnityEngine_Object_o *v11; // x0
  System_String_o *v12; // x0
  struct SimpleAnimation_State_o *v13; // x0
  struct SimpleAnimation_State_o **p_mSimpleAnimState; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct SimpleAnimation_State_o *v21; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v27; // x21
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  UnityEngine_Animation_o *v30; // x21
  UnityEngine_Object_o *v31; // x0
  System_String_o *v32; // x0
  struct UnityEngine_AnimationState_o *Item; // x0
  BattleServantConfConponent_o *p_fields; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct SimpleAnimation_State_o *v41; // x20
  SimpleAnimation_State_c *v42; // x8
  unsigned __int64 v43; // x10
  SimpleAnimation_State_c **v44; // x11
  __int64 v45; // x0
  UnityEngine_GameObject_o *mAppearEffObj; // x0

  if ( (byte_40FA332 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v5);
    byte_40FA332 = 1;
  }
  if ( !that )
    goto LABEL_40;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
      goto LABEL_38;
    v27 = that->fields.mAnimation;
    if ( v27 )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        UnityEngine_Animation__Play_49744236(v27, name, 0LL);
        v30 = that->fields.mAnimation;
        if ( v30 )
        {
          v31 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( v31 )
          {
            v32 = UnityEngine_Object__get_name(v31, 0LL);
            Item = UnityEngine_Animation__get_Item(v30, v32, 0LL);
            this->fields.mAnimState = Item;
            p_fields = (BattleServantConfConponent_o *)&this->fields;
            sub_B16F98(p_fields, (System_Int32_array **)Item, v35, v36, v37, v38, v39, v40);
            if ( p_fields->klass )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)p_fields->klass, 0.0, 0LL);
              if ( p_fields->klass )
              {
                UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)p_fields->klass, 1.0, 0LL);
                goto LABEL_38;
              }
            }
          }
        }
      }
    }
LABEL_40:
    sub_B170D4();
  }
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_40;
  monitor = (UnityEngine_Object_o *)v7[1].monitor;
  if ( !monitor )
    goto LABEL_40;
  v9 = UnityEngine_Object__get_name(monitor, 0LL);
  SimpleAnimation__Play_16380456(v7, v9, 0LL);
  v10 = that->fields.mSimpleAnimation;
  if ( !v10 )
    goto LABEL_40;
  v11 = (UnityEngine_Object_o *)v10[1].monitor;
  if ( !v11 )
    goto LABEL_40;
  v12 = UnityEngine_Object__get_name(v11, 0LL);
  v13 = SimpleAnimation__get_Item(v10, v12, 0LL);
  this->fields.mSimpleAnimState = v13;
  p_mSimpleAnimState = &this->fields.mSimpleAnimState;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_mSimpleAnimState,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = *p_mSimpleAnimState;
  if ( !*p_mSimpleAnimState )
    goto LABEL_40;
  klass = v21->klass;
  if ( *(_WORD *)&v21->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v23;
      p_offset += 2;
      if ( v23 >= *(unsigned __int16 *)&v21->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_17:
    p_method = sub_AAFEF8(*p_mSimpleAnimState, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))p_method)(
    v21,
    *(_QWORD *)(p_method + 8),
    0.0);
  v41 = *p_mSimpleAnimState;
  if ( !v41 )
    goto LABEL_40;
  v42 = v41->klass;
  if ( *(_WORD *)&v41->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = (SimpleAnimation_State_c **)&v42->_1.interfaceOffsets->offset;
    while ( *(v44 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v43;
      v44 += 2;
      if ( v43 >= *(unsigned __int16 *)&v41->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v45 = (__int64)&v42->vtable[*(_DWORD *)v44 + 8].method;
  }
  else
  {
LABEL_35:
    v45 = sub_AAFEF8(v41, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v45)(v41, *(_QWORD *)(v45 + 8), 1.0);
LABEL_38:
  mAppearEffObj = that->fields.mAppearEffObj;
  if ( !mAppearEffObj )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive(mAppearEffObj, 0, 0LL);
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
  __int64 v4; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v10; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *v12; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FA333 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40FA333 = 1;
  }
  if ( !that )
    goto LABEL_23;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    v6 = that->fields.mSimpleAnimation;
    if ( !v6 )
      goto LABEL_23;
    monitor = (UnityEngine_Object_o *)v6[1].monitor;
    if ( !monitor )
      goto LABEL_23;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    if ( SimpleAnimation__IsPlaying(v6, name, 0LL) )
      return;
LABEL_19:
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( !CommonUI__maskFadeIsBusy(Instance, 0LL) )
        QuestRewardOrderGradeAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B170D4();
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    v10 = that->fields.mAnimation;
    if ( !v10 )
      goto LABEL_23;
    clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !clip )
      goto LABEL_23;
    v12 = UnityEngine_Object__get_name(clip, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v10, v12, 0LL) )
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
  UnityEngine_Component_o *mScreenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !that
    || (mScreenTouchInfo = (UnityEngine_Component_o *)that->fields.mScreenTouchInfo) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(mScreenTouchInfo, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
  QuestRewardOrderGradeAction_o **v19; // x19
  UnityEngine_Component_o *mScreenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v27; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x22

  if ( (byte_40FA334 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&CTouch_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v10);
    sub_B16FFC(&QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v11);
    byte_40FA334 = 1;
  }
  v12 = sub_B170CC(QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0___ctor(
    (QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_21;
  *(_QWORD *)(v12 + 16) = that;
  v19 = (QuestRewardOrderGradeAction_o **)(v12 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)that, v13, v14, v15, v16, v17, v18);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
  {
    if ( *v19 )
    {
      mScreenTouchInfo = (UnityEngine_Component_o *)(*v19)->fields.mScreenTouchInfo;
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
          v27 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v27 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
          v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
          System_Action___ctor(
            v29,
            (Il2CppObject *)v12,
            Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v29, 0LL);
            if ( *v19 )
            {
              QuestRewardOrderGradeAction__SetState(*v19, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
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
    sub_B170D4();
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}