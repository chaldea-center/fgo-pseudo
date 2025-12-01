void QuestRewardOrderGradeAction___ctor(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestRewardOrderGradeAction__Awake(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardOrderGradeAction__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v12; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x21
  Il2CppObject *v18; // x22
  CStateManager_T__o *v19; // x20
  Il2CppObject *v20; // x21
  const MethodInfo *v21; // x2
  GrandQuestFolderBoardItem_o *p_particleObj; // x20
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v25; // x21
  Il2CppObject *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  if ( (byte_4CC416F & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_QuestRewardOrderGradeAction___ctor__);
    sub_1C713B0(&Method_CStateManager_QuestRewardOrderGradeAction__add__);
    sub_1C713B0(&CStateManager_QuestRewardOrderGradeAction__TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&QuestRewardOrderGradeAction_StateItemLabel_TypeInfo);
    sub_1C713B0(&QuestRewardOrderGradeAction_StateNone_TypeInfo);
    sub_1C713B0(&QuestRewardOrderGradeAction_StatePlay_TypeInfo);
    sub_1C713B0(&QuestRewardOrderGradeAction_StateTouchWait_TypeInfo);
    byte_4CC416F = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C715FC(CStateManager_QuestRewardOrderGradeAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3394668 *)Method_CStateManager_QuestRewardOrderGradeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardOrderGradeAction__o *)v4;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_1C715FC(QuestRewardOrderGradeAction_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_24;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3394710 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_1C715FC(QuestRewardOrderGradeAction_StatePlay_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_24;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_3394710 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (Il2CppObject *)sub_1C715FC(QuestRewardOrderGradeAction_StateItemLabel_TypeInfo);
    System_Object___ctor(v18, 0);
    if ( !v17 )
      goto LABEL_24;
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_3394710 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    v19 = (CStateManager_T__o *)*p_mFSM;
    v20 = (Il2CppObject *)sub_1C715FC(QuestRewardOrderGradeAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v20, 0);
    if ( !v19 )
      goto LABEL_24;
    CStateManager_object___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_3394710 *)Method_CStateManager_QuestRewardOrderGradeAction__add__);
    QuestRewardOrderGradeAction__SetState(this, 0, v21);
  }
  p_particleObj = (GrandQuestFolderBoardItem_o *)&this->fields.particleObj;
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(particleObj, 0, 0) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0, 0) )
    {
      v25 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v26 = UnityEngine_Object__Instantiate_object_(
              v25,
              (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v26, (UnityEngine_Component_o *)this, 0);
        if ( !byte_4CC0D09 )
        {
          sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
          byte_4CC0D09 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v26,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( v26 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v26,
                                         (const MethodInfo_31A3134 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0);
            p_particleObj->klass = (GrandQuestFolderBoardItem_c *)v26;
            sub_1C71354(p_particleObj, (int32_t)v26, v27, v28, v29, v30, v31, v32);
            return;
          }
        }
LABEL_24:
        sub_1C71608(ComponentInChildren_object, v14);
      }
    }
  }
}


int32_t QuestRewardOrderGradeAction__GetState(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  QuestRewardOrderGradeAction_o *v2; // x19
  struct CStateManager_QuestRewardOrderGradeAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4CC4173 & 1) == 0 )
  {
    this = (QuestRewardOrderGradeAction_o *)sub_1C713B0(&Method_CStateManager_QuestRewardOrderGradeAction__getState__);
    byte_4CC4173 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C71608(this, method);
  return mFSM->fields.m_state;
}


void QuestRewardOrderGradeAction__Play(
        QuestRewardOrderGradeAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
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
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v26; // x0
  System_Action_o *v27; // x21

  if ( (byte_4CC4172 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_QuestRewardOrderGradeAction__Play_b__14_0__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&SimpleAnimation_State_TypeInfo);
    byte_4CC4172 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mEndAct,
    (int32_t)end_act,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v15 = this->fields.mSimpleAnimation;
    if ( !v15 )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)v15->fields.m_Clip;
    if ( !gameObject )
      goto LABEL_30;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v15, name, 0);
    if ( !gameObject )
      goto LABEL_30;
    klass = gameObject->klass;
    v18 = gameObject;
    v19 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
    if ( *(_WORD *)&gameObject->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v19;
        p_offset += 2;
        if ( !v19 )
          goto LABEL_14;
      }
      v21 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v21 = sub_1C47738(gameObject, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v21)(v18, *(_QWORD *)(v21 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v23 = this->fields.mAnimation;
      if ( !v23 )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0);
      if ( !gameObject )
        goto LABEL_30;
      v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v23, v24, 0);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v26 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v26 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v26->static_fields->DEFAULT_FADE_TIME;
  }
  v27 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_QuestRewardOrderGradeAction__Play_b__14_0__, 0);
  if ( !Instance )
LABEL_30:
    sub_1C71608(gameObject, v13);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v27, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestRewardOrderGradeAction__SetState(
        QuestRewardOrderGradeAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4CC4174 & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_QuestRewardOrderGradeAction__setState__);
    byte_4CC4174 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C71608(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_339479C *)Method_CStateManager_QuestRewardOrderGradeAction__setState__);
}


void QuestRewardOrderGradeAction__Setup(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *ComponentInChildren_object__51649344; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4CC4171 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC4171 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  ComponentInChildren_object__51649344 = UnityEngine_Component__GetComponentInChildren_object__51649344(
                                           transform,
                                           (const MethodInfo_3141B40 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51649344;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mAnimation,
    (int32_t)ComponentInChildren_object__51649344,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  v12 = UnityEngine_Component__GetComponentInChildren_object__51649344(
          transform,
          (const MethodInfo_3141B40 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v12;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mSimpleAnimation, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__51649344(
                                           transform,
                                           (const MethodInfo_3141B40 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_19;
  BYTE5(transform[4].monitor) = 1;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (UnityEngine_Component_o *)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  p_mScreenTouchInfo = &this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      transform = (UnityEngine_Component_o *)CommonUI__CreateScreeenTouchInfo(
                                               (CommonUI_o *)Instance,
                                               (UnityEngine_Transform_o *)transform,
                                               0,
                                               0);
      if ( transform )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.mScreenTouchInfo,
          (int32_t)Component_object,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        goto LABEL_16;
      }
    }
LABEL_19:
    sub_1C71608(transform, v4);
  }
LABEL_16:
  transform = (UnityEngine_Component_o *)*p_mScreenTouchInfo;
  if ( !*p_mScreenTouchInfo )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
}


void QuestRewardOrderGradeAction__Update(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4CC4170 & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_QuestRewardOrderGradeAction__update__);
    byte_4CC4170 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3394778 *)Method_CStateManager_QuestRewardOrderGradeAction__update__);
}


void QuestRewardOrderGradeAction___Play_b__14_0(QuestRewardOrderGradeAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardOrderGradeAction__SetState(this, 1, v2);
}


void QuestRewardOrderGradeAction_StateItemLabel___ctor(
        QuestRewardOrderGradeAction_StateItemLabel_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardOrderGradeAction_StateItemLabel__begin(
        QuestRewardOrderGradeAction_StateItemLabel_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  UnityEngine_Component_o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *Component_object; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  ManagerConfig_c *v28; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // w24
  MoveObject_o *v32; // x20
  float x; // s10
  float v34; // s11
  float v35; // s12
  System_Action_o *v36; // x21
  System_Action_o *v37; // x22
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4CC4177 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&Method_QuestRewardOrderGradeAction_StateItemLabel_begin__);
    sub_1C713B0(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__);
    sub_1C713B0(&Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_1C713B0(&QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    byte_4CC4177 = 1;
  }
  v4 = sub_1C715FC(QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_13;
  *(_QWORD *)(v4 + 32) = that;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)that, v7, v8, v9, v10, v11, v12);
  v13 = *(_QWORD *)(v4 + 32);
  if ( !v13 )
    goto LABEL_13;
  v5 = *(UnityEngine_Component_o **)(v13 + 64);
  if ( !v5 )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(v5, 0);
  *(_QWORD *)(v4 + 16) = gameObject;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)gameObject, v15, v16, v17, v18, v19, v20);
  v5 = *(UnityEngine_Component_o **)(v4 + 16);
  if ( !v5 )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 1, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v4 + 16),
                       (const MethodInfo_31A49B8 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v4 + 24) = Component_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)Component_object, v22, v23, v24, v25, v26, v27);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0);
  v28 = ManagerConfig_TypeInfo;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v28 = ManagerConfig_TypeInfo;
  }
  WIDTH = v28->static_fields->WIDTH;
  v41 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0);
  v32 = *(MoveObject_o **)(v4 + 24);
  x = v41.fields.x;
  v34 = v41.fields.y;
  v35 = v41.fields.z;
  v36 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v4,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0);
  v37 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v4,
    Method_QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0);
  if ( !v32 )
LABEL_13:
    sub_1C71608(v5, v6);
  v42.fields.x = (float)WIDTH;
  v42.fields.y = y;
  v42.fields.z = z;
  v43.fields.x = x;
  v43.fields.y = v34;
  v43.fields.z = v35;
  MoveObject__Play(v32, v42, v43, 0.25, v36, v37, 0.0, 17, 0);
  v38 = Method_QuestRewardOrderGradeAction_StateItemLabel_begin__;
  if ( (*((_BYTE *)Method_QuestRewardOrderGradeAction_StateItemLabel_begin__ + 83) & 2) != 0 )
    v38 = (_QWORD *)sub_1C713C8(Method_QuestRewardOrderGradeAction_StateItemLabel_begin__);
  v39 = (System_Reflection_MethodBase_o *)sub_1C71394(v38, v38[4]);
  OverwriteAssetSoundName__PlaySystemSe(v39, 4, 0, 0);
}


void QuestRewardOrderGradeAction_StateItemLabel__end(
        QuestRewardOrderGradeAction_StateItemLabel_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardOrderGradeAction_StateItemLabel__update(
        QuestRewardOrderGradeAction_StateItemLabel_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___ctor(
        QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___begin_b__0(
        QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1C71608(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, mo->fields.mNow, 0);
}


void QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardOrderGradeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRewardOrderGradeAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C71608(0, method);
  QuestRewardOrderGradeAction__SetState(that, 3, v2);
}


void QuestRewardOrderGradeAction_StateNone___ctor(
        QuestRewardOrderGradeAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardOrderGradeAction_StateNone__begin(
        QuestRewardOrderGradeAction_StateNone_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardOrderGradeAction_StateNone__end(
        QuestRewardOrderGradeAction_StateNone_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardOrderGradeAction_StateNone__update(
        QuestRewardOrderGradeAction_StateNone_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardOrderGradeAction_StatePlay___ctor(
        QuestRewardOrderGradeAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardOrderGradeAction_StatePlay__begin(
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
  GrandQuestFolderBoardItem_o *p_mSimpleAnimState; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  GrandQuestFolderBoardItem_c *klass; // x21
  _QWORD *image; // x8
  __int64 v20; // x9
  SimpleAnimation_State_c **v21; // x10
  __int64 v22; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v24; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v26; // x21
  System_String_o *v27; // x0
  UnityEngine_AnimationState_o *Item; // x0
  GrandQuestFolderBoardItem_o *p_fields; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  GrandQuestFolderBoardItem_c *v36; // x20
  _QWORD *v37; // x8
  __int64 v38; // x9
  SimpleAnimation_State_c **v39; // x10
  __int64 v40; // x0

  v4 = this;
  if ( (byte_4CC4175 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)sub_1C713B0(&SimpleAnimation_State_TypeInfo);
    byte_4CC4175 = 1;
  }
  if ( !that )
    goto LABEL_38;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_36;
    v24 = that->fields.mAnimation;
    if ( v24 )
    {
      this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__Play_71468084(v24, name, 0);
        v26 = that->fields.mAnimation;
        if ( v26 )
        {
          this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
          if ( this )
          {
            v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            Item = UnityEngine_Animation__get_Item(v26, v27, 0);
            v4->fields.mAnimState = Item;
            p_fields = (GrandQuestFolderBoardItem_o *)&v4->fields;
            sub_1C71354(p_fields, (int32_t)Item, v30, v31, v32, v33, v34, v35);
            this = (QuestRewardOrderGradeAction_StatePlay_o *)p_fields->klass;
            if ( p_fields->klass )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0);
              this = (QuestRewardOrderGradeAction_StatePlay_o *)p_fields->klass;
              if ( p_fields->klass )
              {
                UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0);
                goto LABEL_36;
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_1C71608(this, that);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_38;
  this = (QuestRewardOrderGradeAction_StatePlay_o *)v6->fields.m_Clip;
  if ( !this )
    goto LABEL_38;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)SimpleAnimation__Play_66976788(v6, v7, 0);
  v8 = that->fields.mSimpleAnimation;
  if ( !v8 )
    goto LABEL_38;
  this = (QuestRewardOrderGradeAction_StatePlay_o *)v8->fields.m_Clip;
  if ( !this )
    goto LABEL_38;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  v10 = SimpleAnimation__get_Item(v8, v9, 0);
  v4->fields.mSimpleAnimState = v10;
  p_mSimpleAnimState = (GrandQuestFolderBoardItem_o *)&v4->fields.mSimpleAnimState;
  sub_1C71354(p_mSimpleAnimState, (int32_t)v10, v12, v13, v14, v15, v16, v17);
  klass = p_mSimpleAnimState->klass;
  if ( !p_mSimpleAnimState->klass )
    goto LABEL_38;
  image = klass->_1.image;
  v20 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v21 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v20;
      v21 += 2;
      if ( !v20 )
        goto LABEL_16;
    }
    v22 = (__int64)&image[2 * *(_DWORD *)v21 + 51];
  }
  else
  {
LABEL_16:
    v22 = sub_1C47738(p_mSimpleAnimState->klass, SimpleAnimation_State_TypeInfo, 6);
  }
  this = (QuestRewardOrderGradeAction_StatePlay_o *)(*(__int64 (__fastcall **)(GrandQuestFolderBoardItem_c *, _QWORD, float))v22)(
                                                      klass,
                                                      *(_QWORD *)(v22 + 8),
                                                      0.0);
  v36 = p_mSimpleAnimState->klass;
  if ( !v36 )
    goto LABEL_38;
  v37 = v36->_1.image;
  v38 = *((unsigned __int16 *)v36->_1.image + 151);
  if ( *((_WORD *)v36->_1.image + 151) )
  {
    v39 = (SimpleAnimation_State_c **)(v37[22] + 8LL);
    while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v38;
      v39 += 2;
      if ( !v38 )
        goto LABEL_33;
    }
    v40 = (__int64)&v37[2 * *(_DWORD *)v39 + 55];
  }
  else
  {
LABEL_33:
    v40 = sub_1C47738(v36, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(GrandQuestFolderBoardItem_c *, _QWORD, float))v40)(v36, *(_QWORD *)(v40 + 8), 1.0);
LABEL_36:
  this = (QuestRewardOrderGradeAction_StatePlay_o *)that->fields.mAppearEffObj;
  if ( !this )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void QuestRewardOrderGradeAction_StatePlay__end(
        QuestRewardOrderGradeAction_StatePlay_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardOrderGradeAction_StatePlay__update(
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

  if ( (byte_4CC4176 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardOrderGradeAction_StatePlay_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC4176 = 1;
  }
  if ( !that )
    goto LABEL_21;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mSimpleAnimation;
    if ( !v5 )
      goto LABEL_21;
    this = (QuestRewardOrderGradeAction_StatePlay_o *)v5->fields.m_Clip;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( SimpleAnimation__IsPlaying(v5, name, 0) )
      return;
LABEL_17:
    this = (QuestRewardOrderGradeAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
        QuestRewardOrderGradeAction__SetState(that, 2, v10);
      return;
    }
LABEL_21:
    sub_1C71608(this, that);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = that->fields.mAnimation;
    if ( !v8 )
      goto LABEL_21;
    this = (QuestRewardOrderGradeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
    if ( !this )
      goto LABEL_21;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( UnityEngine_Animation__IsPlaying(v8, v9, 0) )
      return;
    goto LABEL_17;
  }
}


void QuestRewardOrderGradeAction_StateTouchWait___ctor(
        QuestRewardOrderGradeAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardOrderGradeAction_StateTouchWait__begin(
        QuestRewardOrderGradeAction_StateTouchWait_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (QuestRewardOrderGradeAction_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0
    || (this = (QuestRewardOrderGradeAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0)) == 0 )
  {
    sub_1C71608(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void QuestRewardOrderGradeAction_StateTouchWait__end(
        QuestRewardOrderGradeAction_StateTouchWait_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardOrderGradeAction_StateTouchWait__update(
        QuestRewardOrderGradeAction_StateTouchWait_o *this,
        QuestRewardOrderGradeAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x19
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x2

  if ( (byte_4CC4178 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&CTouch_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_QuestRewardOrderGradeAction_StateTouchWait_update__);
    sub_1C713B0(&Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1C713B0(&QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4CC4178 = 1;
  }
  v4 = sub_1C715FC(QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v13 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v13 + 96LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0);
          v14 = Method_QuestRewardOrderGradeAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardOrderGradeAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v14 = (_QWORD *)sub_1C713C8(Method_QuestRewardOrderGradeAction_StateTouchWait_update__);
          v15 = (System_Reflection_MethodBase_o *)sub_1C71394(v14, v14[4]);
          OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v17 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v17 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
          v19 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            v19,
            (Il2CppObject *)v4,
            Method_QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v19, 0);
            isTouchPush = *(UnityEngine_GameObject_o **)v13;
            if ( *(_QWORD *)v13 )
            {
              QuestRewardOrderGradeAction__SetState((QuestRewardOrderGradeAction_o *)isTouchPush, 0, v20);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C71608(isTouchPush, v6);
  }
}


void QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0___ctor(
        QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        QuestRewardOrderGradeAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardOrderGradeAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C71608(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0);
}