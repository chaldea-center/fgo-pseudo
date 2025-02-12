void __fastcall QuestRewardOrderGradeAction___ctor(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction__Awake(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
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
  struct CStateManager_QuestRewardOrderGradeAction__o **p_mFSM; // x20
  CStateManager_T__o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v21; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v23; // x1
  CStateManager_T__o *v24; // x21
  Il2CppObject *v25; // x22
  CStateManager_T__o *v26; // x21
  Il2CppObject *v27; // x22
  CStateManager_T__o *v28; // x20
  Il2CppObject *v29; // x21
  const MethodInfo *v30; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v33; // x21
  Il2CppObject *v34; // x21
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4BB1631 & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_QuestRewardOrderGradeAction___ctor__, method);
    sub_1C13D24(&Method_CStateManager_QuestRewardOrderGradeAction__add__, v3);
    sub_1C13D24(&CStateManager_QuestRewardOrderGradeAction__TypeInfo, v4);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v5);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&QuestRewardOrderGradeAction_StateItemLabel_TypeInfo, v8);
    sub_1C13D24(&QuestRewardOrderGradeAction_StateNone_TypeInfo, v9);
    sub_1C13D24(&QuestRewardOrderGradeAction_StatePlay_TypeInfo, v10);
    sub_1C13D24(&QuestRewardOrderGradeAction_StateTouchWait_TypeInfo, v11);
    byte_4BB1631 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v13 = (CStateManager_T__o *)sub_1C13F70(CStateManager_QuestRewardOrderGradeAction__TypeInfo);
    CStateManager_object____ctor(
      v13,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_31C327C *)Method_CStateManager_QuestRewardOrderGradeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardOrderGradeAction__o *)v13;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v21 = (Il2CppObject *)sub_1C13F70(QuestRewardOrderGradeAction_StateNone_TypeInfo);
    System_Object___ctor(v21, 0LL);
    if ( !mFSM )
      goto LABEL_24;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v21,
      (const MethodInfo_31C3324 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v24 = (CStateManager_T__o *)*p_mFSM;
    v25 = (Il2CppObject *)sub_1C13F70(QuestRewardOrderGradeAction_StatePlay_TypeInfo);
    System_Object___ctor(v25, 0LL);
    if ( !v24 )
      goto LABEL_24;
    CStateManager_object___add(
      v24,
      1,
      (IState_T__o *)v25,
      (const MethodInfo_31C3324 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v26 = (CStateManager_T__o *)*p_mFSM;
    v27 = (Il2CppObject *)sub_1C13F70(QuestRewardOrderGradeAction_StateItemLabel_TypeInfo);
    System_Object___ctor(v27, 0LL);
    if ( !v26 )
      goto LABEL_24;
    CStateManager_object___add(
      v26,
      2,
      (IState_T__o *)v27,
      (const MethodInfo_31C3324 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v28 = (CStateManager_T__o *)*p_mFSM;
    v29 = (Il2CppObject *)sub_1C13F70(QuestRewardOrderGradeAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v29, 0LL);
    if ( !v28 )
      goto LABEL_24;
    CStateManager_object___add(
      v28,
      3,
      (IState_T__o *)v29,
      (const MethodInfo_31C3324 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    QuestRewardOrderGradeAction__SetState(this, 0, v30);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v33 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v34 = UnityEngine_Object__Instantiate_object_(
              v33,
              (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v34, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4BAEDA1 )
        {
          sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v35);
          byte_4BAEDA1 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v34,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v34 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v34,
                                         (const MethodInfo_2FDFC60 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v34;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&this->fields.particleObj,
              (int64_t)v34,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41);
            return;
          }
        }
LABEL_24:
        sub_1C13F80(ComponentInChildren_object, v23);
      }
    }
  }
}


int32_t __fastcall QuestRewardOrderGradeAction__GetState(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  QuestRewardOrderGradeAction_o *v2; // x19
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4BB1635 & 1) == 0 )
  {
    this = (QuestRewardOrderGradeAction_o *)sub_1C13D24(
                                              &Method_CStateManager_QuestRewardOrderGradeAction__getState__,
                                              method);
    byte_4BB1635 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C13F80(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardOrderGradeAction__Play(
        QuestRewardOrderGradeAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
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
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v23; // x20
  __int64 v24; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v26; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v28; // x20
  System_String_o *v29; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v31; // x0
  System_Action_o *v32; // x21

  if ( (byte_4BB1634 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, end_act);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v12);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v13);
    sub_1C13D24(&Method_QuestRewardOrderGradeAction__Play_b__14_0__, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1C13D24(&SimpleAnimation_State_TypeInfo, v16);
    byte_4BB1634 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.mEndAct,
    (int64_t)end_act,
    (int64_t)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v20 = this->fields.mSimpleAnimation;
    if ( !v20 )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)v20[1].monitor;
    if ( !gameObject )
      goto LABEL_30;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v20, name, 0LL);
    if ( !gameObject )
      goto LABEL_30;
    klass = gameObject->klass;
    v23 = gameObject;
    v24 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v24;
        p_offset += 2;
        if ( !v24 )
          goto LABEL_14;
      }
      v26 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v26 = sub_1C65D04(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v26)(v23, *(_QWORD *)(v26 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v28 = this->fields.mAnimation;
      if ( !v28 )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      v29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v28, v29, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v31 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v31 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v31->static_fields->DEFAULT_FADE_TIME;
  }
  v32 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_QuestRewardOrderGradeAction__Play_b__14_0__, 0LL);
  if ( !Instance )
LABEL_30:
    sub_1C13F80(gameObject, v18);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardOrderGradeAction__SetState(
        QuestRewardOrderGradeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BB1636 & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_QuestRewardOrderGradeAction__setState__, *(_QWORD *)&state);
    byte_4BB1636 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C13F80(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_31C33B0 *)Method_CStateManager_QuestRewardOrderGradeAction__setState__);
}


void __fastcall QuestRewardOrderGradeAction__Setup(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v9; // x1
  Il2CppObject *ComponentInChildren_object__49832308; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4BB1633 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, method);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v3);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v4);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4BB1633 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  ComponentInChildren_object__49832308 = UnityEngine_Component__GetComponentInChildren_object__49832308(
                                           transform,
                                           (const MethodInfo_2F86174 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49832308;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.mAnimation,
    (int64_t)ComponentInChildren_object__49832308,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  v17 = UnityEngine_Component__GetComponentInChildren_object__49832308(
          transform,
          (const MethodInfo_2F86174 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v17;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__49832308(
                                           transform,
                                           (const MethodInfo_2F86174 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_19;
  BYTE5(transform[4].monitor) = 1;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  p_mScreenTouchInfo = &this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = (UnityEngine_Component_o *)CommonUI__CreateScreeenTouchInfo(
                                               (CommonUI_o *)Instance,
                                               (UnityEngine_Transform_o *)transform,
                                               0,
                                               0LL);
      if ( transform )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&this->fields.mScreenTouchInfo,
          (int64_t)Component_object,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        goto LABEL_16;
      }
    }
LABEL_19:
    sub_1C13F80(transform, v9);
  }
LABEL_16:
  transform = (UnityEngine_Component_o *)*p_mScreenTouchInfo;
  if ( !*p_mScreenTouchInfo )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
}


void __fastcall QuestRewardOrderGradeAction__Update(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BB1632 & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_QuestRewardOrderGradeAction__update__, method);
    byte_4BB1632 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_31C338C *)Method_CStateManager_QuestRewardOrderGradeAction__update__);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  UnityEngine_Component_o *v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *Component_object; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  ManagerConfig_c *v34; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // w24
  MoveObject_o *v38; // x20
  float x; // s10
  float v40; // s11
  float v41; // s12
  System_Action_o *v42; // x21
  System_Action_o *v43; // x22
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BB1639 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, that);
    sub_1C13D24(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v4);
    sub_1C13D24(&ManagerConfig_TypeInfo, v5);
    sub_1C13D24(&Method_QuestRewardOrderGradeAction_StateItemLabel_begin__, v6);
    sub_1C13D24(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v7);
    sub_1C13D24(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v8);
    sub_1C13D24(&QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v9);
    byte_4BB1639 = 1;
  }
  v10 = sub_1C13F70(QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_13;
  *(_QWORD *)(v10 + 32) = that;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)that, v13, v14, v15, v16, v17, v18);
  v19 = *(_QWORD *)(v10 + 32);
  if ( !v19 )
    goto LABEL_13;
  v11 = *(UnityEngine_Component_o **)(v19 + 64);
  if ( !v11 )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
  *(_QWORD *)(v10 + 16) = gameObject;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)gameObject, v21, v22, v23, v24, v25, v26);
  v11 = *(UnityEngine_Component_o **)(v10 + 16);
  if ( !v11 )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, 1, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v10 + 16),
                       (const MethodInfo_2FE14E4 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v10 + 24) = Component_object;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)Component_object, v28, v29, v30, v31, v32, v33);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v10 + 16), 0LL);
  v34 = ManagerConfig_TypeInfo;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v34 = ManagerConfig_TypeInfo;
  }
  WIDTH = v34->static_fields->WIDTH;
  v47 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v10 + 16), 0LL);
  v38 = *(MoveObject_o **)(v10 + 24);
  x = v47.fields.x;
  v40 = v47.fields.y;
  v41 = v47.fields.z;
  v42 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v10,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v43 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v10,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v38 )
LABEL_13:
    sub_1C13F80(v11, v12);
  v48.fields.x = (float)WIDTH;
  v48.fields.y = y;
  v48.fields.z = z;
  v49.fields.x = x;
  v49.fields.y = v40;
  v49.fields.z = v41;
  MoveObject__Play(v38, v48, v49, 0.25, v42, v43, 0.0, 17, 0LL);
  v44 = Method_QuestRewardOrderGradeAction_StateItemLabel_begin__;
  if ( (*((_BYTE *)Method_QuestRewardOrderGradeAction_StateItemLabel_begin__ + 83) & 2) != 0 )
    v44 = (_QWORD *)sub_1C13D3C(Method_QuestRewardOrderGradeAction_StateItemLabel_begin__);
  v45 = (System_Reflection_MethodBase_o *)sub_1C13D08(v44, v44[4]);
  OverwriteAssetSoundName__PlaySystemSe(v45, 4, 0, 0LL);
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
    sub_1C13F80(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, mo->fields.mNow, 0LL);
}


void __fastcall QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRewardOrderGradeAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C13F80(0LL, method);
  QuestRewardOrderGradeAction__SetState(that, 3, v2);
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
  __int64 v5; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v7; // x21
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x21
  System_String_o *v10; // x0
  SimpleAnimation_State_o *v11; // x0
  PartyOrganizationUtility_o *p_mSimpleAnimState; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  PartyOrganizationUtility_c *klass; // x21
  _QWORD *image; // x8
  __int64 v21; // x9
  SimpleAnimation_State_c **v22; // x10
  __int64 v23; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v25; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v27; // x21
  System_String_o *v28; // x0
  UnityEngine_AnimationState_o *Item; // x0
  PartyOrganizationUtility_o *p_fields; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  PartyOrganizationUtility_c *v37; // x20
  _QWORD *v38; // x8
  __int64 v39; // x9
  SimpleAnimation_State_c **v40; // x10
  __int64 v41; // x0

  v4 = this;
  if ( (byte_4BB1637 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)sub_1C13D24(&SimpleAnimation_State_TypeInfo, v5);
    byte_4BB1637 = 1;
  }
  if ( !that )
    goto LABEL_38;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_36;
    v25 = that->fields.mAnimation;
    if ( v25 )
    {
      this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__Play_70466396(v25, name, 0LL);
        v27 = that->fields.mAnimation;
        if ( v27 )
        {
          this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                              that->fields.mAnimation,
                                                              0LL);
          if ( this )
          {
            v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            Item = UnityEngine_Animation__get_Item(v27, v28, 0LL);
            v4->fields.mAnimState = Item;
            p_fields = (PartyOrganizationUtility_o *)&v4->fields;
            sub_1C13CC8(p_fields, (int64_t)Item, v31, v32, v33, v34, v35, v36);
            this = (QuestRewardOrderGradeAction_StatePlay_o *)p_fields->klass;
            if ( p_fields->klass )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              this = (QuestRewardOrderGradeAction_StatePlay_o *)p_fields->klass;
              if ( p_fields->klass )
              {
                UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
                goto LABEL_36;
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_1C13F80(this, that);
  }
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_38;
  this = (QuestRewardOrderGradeAction_StatePlay_o *)v7[1].monitor;
  if ( !this )
    goto LABEL_38;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)SimpleAnimation__Play_65106228(v7, v8, 0LL);
  v9 = that->fields.mSimpleAnimation;
  if ( !v9 )
    goto LABEL_38;
  this = (QuestRewardOrderGradeAction_StatePlay_o *)v9[1].monitor;
  if ( !this )
    goto LABEL_38;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v11 = SimpleAnimation__get_Item(v9, v10, 0LL);
  v4->fields.mSimpleAnimState = v11;
  p_mSimpleAnimState = (PartyOrganizationUtility_o *)&v4->fields.mSimpleAnimState;
  sub_1C13CC8(p_mSimpleAnimState, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  klass = p_mSimpleAnimState->klass;
  if ( !p_mSimpleAnimState->klass )
    goto LABEL_38;
  image = klass->_1.image;
  v21 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v22 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v22 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v21;
      v22 += 2;
      if ( !v21 )
        goto LABEL_16;
    }
    v23 = (__int64)&image[2 * *(_DWORD *)v22 + 51];
  }
  else
  {
LABEL_16:
    v23 = sub_1C65D04(p_mSimpleAnimState->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardOrderGradeAction_StatePlay_o *)(*(__int64 (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v23)(
                                                      klass,
                                                      *(_QWORD *)(v23 + 8),
                                                      0.0);
  v37 = p_mSimpleAnimState->klass;
  if ( !v37 )
    goto LABEL_38;
  v38 = v37->_1.image;
  v39 = *((unsigned __int16 *)v37->_1.image + 151);
  if ( *((_WORD *)v37->_1.image + 151) )
  {
    v40 = (SimpleAnimation_State_c **)(v38[22] + 8LL);
    while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v39;
      v40 += 2;
      if ( !v39 )
        goto LABEL_33;
    }
    v41 = (__int64)&v38[2 * *(_DWORD *)v40 + 55];
  }
  else
  {
LABEL_33:
    v41 = sub_1C65D04(v37, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v41)(v37, *(_QWORD *)(v41 + 8), 1.0);
LABEL_36:
  this = (QuestRewardOrderGradeAction_StatePlay_o *)that->fields.mAppearEffObj;
  if ( !this )
    goto LABEL_38;
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
  __int64 v4; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v9; // x20
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4BB1638 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)sub_1C13D24(
                                                        &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                        v4);
    byte_4BB1638 = 1;
  }
  if ( !that )
    goto LABEL_21;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = that->fields.mSimpleAnimation;
    if ( !v6 )
      goto LABEL_21;
    this = (QuestRewardOrderGradeAction_StatePlay_o *)v6[1].monitor;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v6, name, 0LL) )
      return;
LABEL_17:
    this = (QuestRewardOrderGradeAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardOrderGradeAction__SetState(that, 2, v11);
      return;
    }
LABEL_21:
    sub_1C13F80(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = that->fields.mAnimation;
    if ( !v9 )
      goto LABEL_21;
    this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !this )
      goto LABEL_21;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v9, v10, 0LL) )
      return;
    goto LABEL_17;
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
    sub_1C13F80(this, that);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x19
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v23; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x2

  if ( (byte_4BB163A & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, that);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v4);
    sub_1C13D24(&CTouch_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C13D24(&Method_QuestRewardOrderGradeAction_StateTouchWait_update__, v7);
    sub_1C13D24(&Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v8);
    sub_1C13D24(&QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v9);
    byte_4BB163A = 1;
  }
  v10 = sub_1C13F70(QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_18;
  *(_QWORD *)(v10 + 16) = that;
  v19 = v10 + 16;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)that, v13, v14, v15, v16, v17, v18);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v19 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v19 + 96LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v20 = Method_QuestRewardOrderGradeAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardOrderGradeAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v20 = (_QWORD *)sub_1C13D3C(Method_QuestRewardOrderGradeAction_StateTouchWait_update__);
          v21 = (System_Reflection_MethodBase_o *)sub_1C13D08(v20, v20[4]);
          OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v23 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v23 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
          v25 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            v25,
            (Il2CppObject *)v10,
            Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v25, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v19;
            if ( *(_QWORD *)v19 )
            {
              QuestRewardOrderGradeAction__SetState((QuestRewardOrderGradeAction_o *)isTouchPush, 0, v26);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C13F80(isTouchPush, v12);
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
    sub_1C13F80(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}