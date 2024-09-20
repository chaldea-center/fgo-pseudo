void __fastcall QuestRewardOrderGradeAction___ctor(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardOrderGradeAction__Awake(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardOrderGradeAction__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v8; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v10; // x1
  CStateManager_T__o *v11; // x21
  Il2CppObject *v12; // x22
  CStateManager_T__o *v13; // x21
  Il2CppObject *v14; // x22
  CStateManager_T__o *v15; // x20
  Il2CppObject *v16; // x21
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A581EC & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_QuestRewardOrderGradeAction___ctor__);
    sub_1B885B0(&Method_CStateManager_QuestRewardOrderGradeAction__add__);
    sub_1B885B0(&CStateManager_QuestRewardOrderGradeAction__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestRewardOrderGradeAction_StateItemLabel_TypeInfo);
    sub_1B885B0(&QuestRewardOrderGradeAction_StateNone_TypeInfo);
    sub_1B885B0(&QuestRewardOrderGradeAction_StatePlay_TypeInfo);
    sub_1B885B0(&QuestRewardOrderGradeAction_StateTouchWait_TypeInfo);
    byte_4A581EC = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1B887FC(CStateManager_QuestRewardOrderGradeAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_30AAD34 *)Method_CStateManager_QuestRewardOrderGradeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardOrderGradeAction__o *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1B887FC(QuestRewardOrderGradeAction_StateNone_TypeInfo);
    System_Object___ctor(v8, 0LL);
    if ( !mFSM )
      goto LABEL_24;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_30AADDC *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v11 = (CStateManager_T__o *)*p_mFSM;
    v12 = (Il2CppObject *)sub_1B887FC(QuestRewardOrderGradeAction_StatePlay_TypeInfo);
    System_Object___ctor(v12, 0LL);
    if ( !v11 )
      goto LABEL_24;
    CStateManager_object___add(
      v11,
      1,
      (IState_T__o *)v12,
      (const MethodInfo_30AADDC *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v13 = (CStateManager_T__o *)*p_mFSM;
    v14 = (Il2CppObject *)sub_1B887FC(QuestRewardOrderGradeAction_StateItemLabel_TypeInfo);
    System_Object___ctor(v14, 0LL);
    if ( !v13 )
      goto LABEL_24;
    CStateManager_object___add(
      v13,
      2,
      (IState_T__o *)v14,
      (const MethodInfo_30AADDC *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_1B887FC(QuestRewardOrderGradeAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_24;
    CStateManager_object___add(
      v15,
      3,
      (IState_T__o *)v16,
      (const MethodInfo_30AADDC *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    QuestRewardOrderGradeAction__SetState(this, 0, v17);
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
      v20 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__Instantiate_object_(
              v20,
              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v21, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4A55CE1 )
        {
          sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v21,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v21 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v21,
                                         (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v21;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.particleObj, (int32_t)v21, v22, v23);
            return;
          }
        }
LABEL_24:
        sub_1B8880C(ComponentInChildren_object, v10);
      }
    }
  }
}


int32_t __fastcall QuestRewardOrderGradeAction__GetState(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  QuestRewardOrderGradeAction_o *v2; // x19
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4A581F0 & 1) == 0 )
  {
    this = (QuestRewardOrderGradeAction_o *)sub_1B885B0(&Method_CStateManager_QuestRewardOrderGradeAction__getState__);
    byte_4A581F0 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestRewardOrderGradeAction__Play(
        QuestRewardOrderGradeAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v11; // x20
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v14; // x20
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v17; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v19; // x20
  System_String_o *v20; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v22; // x0
  System_Action_o *v23; // x21

  if ( (byte_4A581EF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_QuestRewardOrderGradeAction__Play_b__14_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A581EF = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mEndAct, (int32_t)end_act, (int32_t)method, v4);
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
    v11 = this->fields.mSimpleAnimation;
    if ( !v11 )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)v11[1].monitor;
    if ( !gameObject )
      goto LABEL_30;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v11, name, 0LL);
    if ( !gameObject )
      goto LABEL_30;
    klass = gameObject->klass;
    v14 = gameObject;
    v15 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v15;
        p_offset += 2;
        if ( !v15 )
          goto LABEL_14;
      }
      v17 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v17 = sub_1BDA590(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v17)(v14, *(_QWORD *)(v17 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v19 = this->fields.mAnimation;
      if ( !v19 )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v19, v20, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v22 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v22 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v22->static_fields->DEFAULT_FADE_TIME;
  }
  v23 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_QuestRewardOrderGradeAction__Play_b__14_0__, 0LL);
  if ( !Instance )
LABEL_30:
    sub_1B8880C(gameObject, v9);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardOrderGradeAction__SetState(
        QuestRewardOrderGradeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A581F1 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_QuestRewardOrderGradeAction__setState__);
    byte_4A581F1 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_QuestRewardOrderGradeAction__setState__);
}


void __fastcall QuestRewardOrderGradeAction__Setup(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A581EE & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A581EE = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                           transform,
                                           (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48719376;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__48719376,
    v6,
    v7);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  v8 = UnityEngine_Component__GetComponentInChildren_object__48719376(
         transform,
         (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimation, (int32_t)v8, v9, v10);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__48719376(
                                           transform,
                                           (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.mScreenTouchInfo,
          (int32_t)Component_object,
          v15,
          v16);
        goto LABEL_16;
      }
    }
LABEL_19:
    sub_1B8880C(transform, v4);
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

  if ( (byte_4A581ED & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_QuestRewardOrderGradeAction__update__);
    byte_4A581ED = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_30AAE44 *)Method_CStateManager_QuestRewardOrderGradeAction__update__);
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
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  ManagerConfig_c *v16; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // w24
  MoveObject_o *v20; // x20
  float x; // s10
  float v22; // s11
  float v23; // s12
  System_Action_o *v24; // x21
  System_Action_o *v25; // x22
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4A581F4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&Method_QuestRewardOrderGradeAction_StateItemLabel_begin__);
    sub_1B885B0(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__);
    sub_1B885B0(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_1B885B0(&QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    byte_4A581F4 = 1;
  }
  v4 = sub_1B887FC(QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_13;
  *(_QWORD *)(v4 + 32) = that;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)that, v7, v8);
  v9 = *(_QWORD *)(v4 + 32);
  if ( !v9 )
    goto LABEL_13;
  v5 = *(UnityEngine_Component_o **)(v9 + 64);
  if ( !v5 )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
  *(_QWORD *)(v4 + 16) = gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)gameObject, v11, v12);
  v5 = *(UnityEngine_Component_o **)(v4 + 16);
  if ( !v5 )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 1, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v4 + 16),
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v4 + 24) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)Component_object, v14, v15);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0LL);
  v16 = ManagerConfig_TypeInfo;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v16 = ManagerConfig_TypeInfo;
  }
  WIDTH = v16->static_fields->WIDTH;
  v29 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0LL);
  v20 = *(MoveObject_o **)(v4 + 24);
  x = v29.fields.x;
  v22 = v29.fields.y;
  v23 = v29.fields.z;
  v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v4,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0LL);
  v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v4,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0LL);
  if ( !v20 )
LABEL_13:
    sub_1B8880C(v5, v6);
  v30.fields.x = (float)WIDTH;
  v30.fields.y = y;
  v30.fields.z = z;
  v31.fields.x = x;
  v31.fields.y = v22;
  v31.fields.z = v23;
  MoveObject__Play(v20, v30, v31, 0.25, v24, v25, 0.0, 17, 0LL);
  v26 = Method_QuestRewardOrderGradeAction_StateItemLabel_begin__;
  if ( (*((_BYTE *)Method_QuestRewardOrderGradeAction_StateItemLabel_begin__ + 83) & 2) != 0 )
    v26 = (_QWORD *)sub_1B885C8(Method_QuestRewardOrderGradeAction_StateItemLabel_begin__);
  v27 = (System_Reflection_MethodBase_o *)sub_1B88594(v26, v26[4]);
  OverwriteAssetSoundName__PlaySystemSe(v27, 4, 0LL);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, method);
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
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v6; // x21
  System_String_o *v7; // x0
  struct SimpleAnimation_o *v8; // x21
  System_String_o *v9; // x0
  SimpleAnimation_State_o *v10; // x0
  ServantStatusBattleListViewItem_o *p_mSimpleAnimState; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  ServantStatusBattleListViewItem_c *klass; // x21
  _QWORD *image; // x8
  __int64 v16; // x9
  SimpleAnimation_State_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v20; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v22; // x21
  System_String_o *v23; // x0
  UnityEngine_AnimationState_o *Item; // x0
  ServantStatusBattleListViewItem_o *p_fields; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  ServantStatusBattleListViewItem_c *v28; // x20
  _QWORD *v29; // x8
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x0

  v4 = this;
  if ( (byte_4A581F2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A581F2 = 1;
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
    v20 = that->fields.mAnimation;
    if ( v20 )
    {
      this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__Play_69204472(v20, name, 0LL);
        v22 = that->fields.mAnimation;
        if ( v22 )
        {
          this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                              that->fields.mAnimation,
                                                              0LL);
          if ( this )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            Item = UnityEngine_Animation__get_Item(v22, v23, 0LL);
            v4->fields.mAnimState = Item;
            p_fields = (ServantStatusBattleListViewItem_o *)&v4->fields;
            sub_1B88554(p_fields, (int32_t)Item, v26, v27);
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
    sub_1B8880C(this, that);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_38;
  this = (QuestRewardOrderGradeAction_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_38;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)SimpleAnimation__Play_63844704(v6, v7, 0LL);
  v8 = that->fields.mSimpleAnimation;
  if ( !v8 )
    goto LABEL_38;
  this = (QuestRewardOrderGradeAction_StatePlay_o *)v8[1].monitor;
  if ( !this )
    goto LABEL_38;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v10 = SimpleAnimation__get_Item(v8, v9, 0LL);
  v4->fields.mSimpleAnimState = v10;
  p_mSimpleAnimState = (ServantStatusBattleListViewItem_o *)&v4->fields.mSimpleAnimState;
  sub_1B88554(p_mSimpleAnimState, (int32_t)v10, v12, v13);
  klass = p_mSimpleAnimState->klass;
  if ( !p_mSimpleAnimState->klass )
    goto LABEL_38;
  image = klass->_1.image;
  v16 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v17 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v17 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v16;
      v17 += 2;
      if ( !v16 )
        goto LABEL_16;
    }
    v18 = (__int64)&image[2 * *(_DWORD *)v17 + 51];
  }
  else
  {
LABEL_16:
    v18 = sub_1BDA590(p_mSimpleAnimState->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardOrderGradeAction_StatePlay_o *)(*(__int64 (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD, float))v18)(
                                                      klass,
                                                      *(_QWORD *)(v18 + 8),
                                                      0.0);
  v28 = p_mSimpleAnimState->klass;
  if ( !v28 )
    goto LABEL_38;
  v29 = v28->_1.image;
  v30 = *((unsigned __int16 *)v28->_1.image + 151);
  if ( *((_WORD *)v28->_1.image + 151) )
  {
    v31 = (SimpleAnimation_State_c **)(v29[22] + 8LL);
    while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v30;
      v31 += 2;
      if ( !v30 )
        goto LABEL_33;
    }
    v32 = (__int64)&v29[2 * *(_DWORD *)v31 + 55];
  }
  else
  {
LABEL_33:
    v32 = sub_1BDA590(v28, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD, float))v32)(v28, *(_QWORD *)(v32 + 8), 1.0);
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
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v8; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4A581F3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A581F3 = 1;
  }
  if ( !that )
    goto LABEL_21;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mSimpleAnimation;
    if ( !v5 )
      goto LABEL_21;
    this = (QuestRewardOrderGradeAction_StatePlay_o *)v5[1].monitor;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v5, name, 0LL) )
      return;
LABEL_17:
    this = (QuestRewardOrderGradeAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardOrderGradeAction__SetState(that, 2, v10);
      return;
    }
LABEL_21:
    sub_1B8880C(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = that->fields.mAnimation;
    if ( !v8 )
      goto LABEL_21;
    this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !this )
      goto LABEL_21;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v8, v9, 0LL) )
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
    sub_1B8880C(this, that);
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
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x19
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x2

  if ( (byte_4A581F5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&CTouch_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_QuestRewardOrderGradeAction_StateTouchWait_update__);
    sub_1B885B0(&Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1B885B0(&QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4A581F5 = 1;
  }
  v4 = sub_1B887FC(QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v9 = v4 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v9 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v9 + 96LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v10 = Method_QuestRewardOrderGradeAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardOrderGradeAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1B885C8(Method_QuestRewardOrderGradeAction_StateTouchWait_update__);
          v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v13 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v13 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
          v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v15,
            (Il2CppObject *)v4,
            Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v15, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v9;
            if ( *(_QWORD *)v9 )
            {
              QuestRewardOrderGradeAction__SetState((QuestRewardOrderGradeAction_o *)isTouchPush, 0, v16);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1B8880C(isTouchPush, v6);
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
    sub_1B8880C(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}