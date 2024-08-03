void __fastcall QuestRewardOrderGradeAction___ctor(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction__Awake(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
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
  struct CStateManager_QuestRewardOrderGradeAction__o **p_mFSM; // x20
  CStateManager_T__o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  CStateManager_T__o *mFSM; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *v20; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  CStateManager_T__o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x22
  CStateManager_T__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *v29; // x22
  CStateManager_T__o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *v33; // x21
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v37; // x21
  Il2CppObject *v38; // x21
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3

  if ( (byte_49F94EF & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QuestRewardOrderGradeAction___ctor__, method);
    sub_1B640C8(&Method_CStateManager_QuestRewardOrderGradeAction__add__, v4);
    sub_1B640C8(&CStateManager_QuestRewardOrderGradeAction__TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&QuestRewardOrderGradeAction_StateItemLabel_TypeInfo, v9);
    sub_1B640C8(&QuestRewardOrderGradeAction_StateNone_TypeInfo, v10);
    sub_1B640C8(&QuestRewardOrderGradeAction_StatePlay_TypeInfo, v11);
    sub_1B640C8(&QuestRewardOrderGradeAction_StateTouchWait_TypeInfo, v12);
    byte_49F94EF = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v14 = (CStateManager_T__o *)sub_1B64314(CStateManager_QuestRewardOrderGradeAction__TypeInfo, method, v2);
    CStateManager_object____ctor(
      v14,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_30612BC *)Method_CStateManager_QuestRewardOrderGradeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardOrderGradeAction__o *)v14;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v14, v15, v16);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v20 = (Il2CppObject *)sub_1B64314(QuestRewardOrderGradeAction_StateNone_TypeInfo, v18, v19);
    System_Object___ctor(v20, 0LL);
    if ( !mFSM )
      goto LABEL_24;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v20,
      (const MethodInfo_3061364 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v22 = (CStateManager_T__o *)*p_mFSM;
    v25 = (Il2CppObject *)sub_1B64314(QuestRewardOrderGradeAction_StatePlay_TypeInfo, v23, v24);
    System_Object___ctor(v25, 0LL);
    if ( !v22 )
      goto LABEL_24;
    CStateManager_object___add(
      v22,
      1,
      (IState_T__o *)v25,
      (const MethodInfo_3061364 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v26 = (CStateManager_T__o *)*p_mFSM;
    v29 = (Il2CppObject *)sub_1B64314(QuestRewardOrderGradeAction_StateItemLabel_TypeInfo, v27, v28);
    System_Object___ctor(v29, 0LL);
    if ( !v26 )
      goto LABEL_24;
    CStateManager_object___add(
      v26,
      2,
      (IState_T__o *)v29,
      (const MethodInfo_3061364 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v30 = (CStateManager_T__o *)*p_mFSM;
    v33 = (Il2CppObject *)sub_1B64314(QuestRewardOrderGradeAction_StateTouchWait_TypeInfo, v31, v32);
    System_Object___ctor(v33, 0LL);
    if ( !v30 )
      goto LABEL_24;
    CStateManager_object___add(
      v30,
      3,
      (IState_T__o *)v33,
      (const MethodInfo_3061364 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    QuestRewardOrderGradeAction__SetState(this, 0, v34);
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
      v37 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v38 = UnityEngine_Object__Instantiate_object_(
              v37,
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v38, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_49F7111 )
        {
          sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v39);
          byte_49F7111 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v38,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v38 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v38,
                                         (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v38;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.particleObj, (int32_t)v38, v40, v41);
            return;
          }
        }
LABEL_24:
        sub_1B64324(ComponentInChildren_object);
      }
    }
  }
}


int32_t __fastcall QuestRewardOrderGradeAction__GetState(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  QuestRewardOrderGradeAction_o *v2; // x19
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_49F94F3 & 1) == 0 )
  {
    this = (QuestRewardOrderGradeAction_o *)sub_1B640C8(
                                              &Method_CStateManager_QuestRewardOrderGradeAction__getState__,
                                              method);
    byte_49F94F3 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(this);
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardOrderGradeAction__Play(
        QuestRewardOrderGradeAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v15; // x20
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v18; // x20
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v21; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v28; // x0
  System_Action_o *v29; // x21

  if ( (byte_49F94F2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, end_act);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_QuestRewardOrderGradeAction__Play_b__14_0__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v12);
    byte_49F94F2 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mEndAct, (int32_t)end_act, (int32_t)method, v4);
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
    v15 = this->fields.mSimpleAnimation;
    if ( !v15 )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)v15[1].monitor;
    if ( !gameObject )
      goto LABEL_30;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v15, name, 0LL);
    if ( !gameObject )
      goto LABEL_30;
    klass = gameObject->klass;
    v18 = gameObject;
    v19 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v19;
        p_offset += 2;
        if ( !v19 )
          goto LABEL_14;
      }
      v21 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v21 = sub_1BB60A8(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v21)(v18, *(_QWORD *)(v21 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v23 = this->fields.mAnimation;
      if ( !v23 )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v23, v24, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v28 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v28 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v28->static_fields->DEFAULT_FADE_TIME;
  }
  v29 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_QuestRewardOrderGradeAction__Play_b__14_0__, 0LL);
  if ( !Instance )
LABEL_30:
    sub_1B64324(gameObject);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v29, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardOrderGradeAction__SetState(
        QuestRewardOrderGradeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49F94F4 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QuestRewardOrderGradeAction__setState__, *(_QWORD *)&state);
    byte_49F94F4 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(0LL);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30613F0 *)Method_CStateManager_QuestRewardOrderGradeAction__setState__);
}


void __fastcall QuestRewardOrderGradeAction__Setup(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *ComponentInChildren_object__48431348; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49F94F1 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v3);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49F94F1 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  ComponentInChildren_object__48431348 = UnityEngine_Component__GetComponentInChildren_object__48431348(
                                           transform,
                                           (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48431348;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__48431348,
    v10,
    v11);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  v12 = UnityEngine_Component__GetComponentInChildren_object__48431348(
          transform,
          (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimation, (int32_t)v12, v13, v14);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__48431348(
                                           transform,
                                           (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.mScreenTouchInfo,
          (int32_t)Component_object,
          v19,
          v20);
        goto LABEL_16;
      }
    }
LABEL_19:
    sub_1B64324(transform);
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

  if ( (byte_49F94F0 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QuestRewardOrderGradeAction__update__, method);
    byte_49F94F0 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_30613CC *)Method_CStateManager_QuestRewardOrderGradeAction__update__);
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *Component_object; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  ManagerConfig_c *v21; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // w24
  MoveObject_o *v25; // x20
  float x; // s10
  float v27; // s11
  float v28; // s12
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x22
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49F94F7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v4);
    sub_1B640C8(&ManagerConfig_TypeInfo, v5);
    sub_1B640C8(&Method_QuestRewardOrderGradeAction_StateItemLabel_begin__, v6);
    sub_1B640C8(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__, v7);
    sub_1B640C8(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v8);
    sub_1B640C8(&QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v9);
    byte_49F94F7 = 1;
  }
  v10 = sub_1B64314(QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_13;
  *(_QWORD *)(v10 + 32) = that;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)that, v12, v13);
  v14 = *(_QWORD *)(v10 + 32);
  if ( !v14 )
    goto LABEL_13;
  v11 = *(UnityEngine_Component_o **)(v14 + 64);
  if ( !v11 )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
  *(_QWORD *)(v10 + 16) = gameObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)gameObject, v16, v17);
  v11 = *(UnityEngine_Component_o **)(v10 + 16);
  if ( !v11 )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, 1, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v10 + 16),
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v10 + 24) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)Component_object, v19, v20);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v10 + 16), 0LL);
  v21 = ManagerConfig_TypeInfo;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v21 = ManagerConfig_TypeInfo;
  }
  WIDTH = v21->static_fields->WIDTH;
  v38 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v10 + 16), 0LL);
  v25 = *(MoveObject_o **)(v10 + 24);
  x = v38.fields.x;
  v27 = v38.fields.y;
  v28 = v38.fields.z;
  v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v10,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v34 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v10,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v25 )
LABEL_13:
    sub_1B64324(v11);
  v39.fields.x = (float)WIDTH;
  v39.fields.y = y;
  v39.fields.z = z;
  v40.fields.x = x;
  v40.fields.y = v27;
  v40.fields.z = v28;
  MoveObject__Play(v25, v39, v40, 0.25, v31, v34, 0.0, 17, 0LL);
  v35 = Method_QuestRewardOrderGradeAction_StateItemLabel_begin__;
  if ( (*((_BYTE *)Method_QuestRewardOrderGradeAction_StateItemLabel_begin__ + 83) & 2) != 0 )
    v35 = (_QWORD *)sub_1B640E0(Method_QuestRewardOrderGradeAction_StateItemLabel_begin__);
  v36 = (System_Reflection_MethodBase_o *)sub_1B640AC(v35, v35[4]);
  OverwriteAssetSoundName__PlaySystemSe(v36, 4, 0LL);
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
    sub_1B64324(this);
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
    sub_1B64324(0LL);
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
  ServantStatusBattleListViewItem_o *p_mSimpleAnimState; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  ServantStatusBattleListViewItem_c *klass; // x21
  _QWORD *image; // x8
  __int64 v17; // x9
  SimpleAnimation_State_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v21; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v23; // x21
  System_String_o *v24; // x0
  UnityEngine_AnimationState_o *Item; // x0
  ServantStatusBattleListViewItem_o *p_fields; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  ServantStatusBattleListViewItem_c *v29; // x20
  _QWORD *v30; // x8
  __int64 v31; // x9
  SimpleAnimation_State_c **v32; // x10
  __int64 v33; // x0

  v4 = this;
  if ( (byte_49F94F5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)sub_1B640C8(&SimpleAnimation_State_TypeInfo, v5);
    byte_49F94F5 = 1;
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
    v21 = that->fields.mAnimation;
    if ( v21 )
    {
      this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__Play_68872828(v21, name, 0LL);
        v23 = that->fields.mAnimation;
        if ( v23 )
        {
          this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                              that->fields.mAnimation,
                                                              0LL);
          if ( this )
          {
            v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            Item = UnityEngine_Animation__get_Item(v23, v24, 0LL);
            v4->fields.mAnimState = Item;
            p_fields = (ServantStatusBattleListViewItem_o *)&v4->fields;
            sub_1B6406C(p_fields, (int32_t)Item, v27, v28);
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
    sub_1B64324(this);
  }
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_38;
  this = (QuestRewardOrderGradeAction_StatePlay_o *)v7[1].monitor;
  if ( !this )
    goto LABEL_38;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)SimpleAnimation__Play_63513060(v7, v8, 0LL);
  v9 = that->fields.mSimpleAnimation;
  if ( !v9 )
    goto LABEL_38;
  this = (QuestRewardOrderGradeAction_StatePlay_o *)v9[1].monitor;
  if ( !this )
    goto LABEL_38;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v11 = SimpleAnimation__get_Item(v9, v10, 0LL);
  v4->fields.mSimpleAnimState = v11;
  p_mSimpleAnimState = (ServantStatusBattleListViewItem_o *)&v4->fields.mSimpleAnimState;
  sub_1B6406C(p_mSimpleAnimState, (int32_t)v11, v13, v14);
  klass = p_mSimpleAnimState->klass;
  if ( !p_mSimpleAnimState->klass )
    goto LABEL_38;
  image = klass->_1.image;
  v17 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v18 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v18 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_16;
    }
    v19 = (__int64)&image[2 * *(_DWORD *)v18 + 51];
  }
  else
  {
LABEL_16:
    v19 = sub_1BB60A8(p_mSimpleAnimState->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardOrderGradeAction_StatePlay_o *)(*(__int64 (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD, float))v19)(
                                                      klass,
                                                      *(_QWORD *)(v19 + 8),
                                                      0.0);
  v29 = p_mSimpleAnimState->klass;
  if ( !v29 )
    goto LABEL_38;
  v30 = v29->_1.image;
  v31 = *((unsigned __int16 *)v29->_1.image + 151);
  if ( *((_WORD *)v29->_1.image + 151) )
  {
    v32 = (SimpleAnimation_State_c **)(v30[22] + 8LL);
    while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v31;
      v32 += 2;
      if ( !v31 )
        goto LABEL_33;
    }
    v33 = (__int64)&v30[2 * *(_DWORD *)v32 + 55];
  }
  else
  {
LABEL_33:
    v33 = sub_1BB60A8(v29, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD, float))v33)(v29, *(_QWORD *)(v33 + 8), 1.0);
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

  if ( (byte_49F94F6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)sub_1B640C8(
                                                        &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                        v4);
    byte_49F94F6 = 1;
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
    this = (QuestRewardOrderGradeAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardOrderGradeAction__SetState(that, 2, v11);
      return;
    }
LABEL_21:
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x19
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x2

  if ( (byte_49F94F8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&CTouch_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_QuestRewardOrderGradeAction_StateTouchWait_update__, v7);
    sub_1B640C8(&Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v8);
    sub_1B640C8(&QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v9);
    byte_49F94F8 = 1;
  }
  v10 = sub_1B64314(QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_18;
  *(_QWORD *)(v10 + 16) = that;
  v14 = v10 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)that, v12, v13);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v14 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v14 + 96LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v15 = Method_QuestRewardOrderGradeAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardOrderGradeAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v15 = (_QWORD *)sub_1B640E0(Method_QuestRewardOrderGradeAction_StateTouchWait_update__);
          v16 = (System_Reflection_MethodBase_o *)sub_1B640AC(v15, v15[4]);
          OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v20 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v20 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
          v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
          System_Action___ctor(
            v22,
            (Il2CppObject *)v10,
            Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v22, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v14;
            if ( *(_QWORD *)v14 )
            {
              QuestRewardOrderGradeAction__SetState((QuestRewardOrderGradeAction_o *)isTouchPush, 0, v23);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1B64324(isTouchPush);
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
    sub_1B64324(this);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}