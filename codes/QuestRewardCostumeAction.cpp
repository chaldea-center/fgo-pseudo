void QuestRewardCostumeAction___ctor(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestRewardCostumeAction__Awake(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardCostumeAction__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v8; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  CStateManager_T__o *v10; // x21
  Il2CppObject *v11; // x22
  CStateManager_T__o *v12; // x21
  Il2CppObject *v13; // x22
  CStateManager_T__o *v14; // x20
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x2
  CGThumbnailListItem_o *p_particleObj; // x20
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C3FD3C & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QuestRewardCostumeAction___ctor__);
    sub_1C37058(&Method_CStateManager_QuestRewardCostumeAction__add__);
    sub_1C37058(&CStateManager_QuestRewardCostumeAction__TypeInfo);
    sub_1C37058(&CTouch_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&QuestRewardCostumeAction_StateItemLabel_TypeInfo);
    sub_1C37058(&QuestRewardCostumeAction_StateNone_TypeInfo);
    sub_1C37058(&QuestRewardCostumeAction_StatePlay_TypeInfo);
    sub_1C37058(&QuestRewardCostumeAction_StateTouchWait_TypeInfo);
    byte_4C3FD3C = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C372A4(CStateManager_QuestRewardCostumeAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_332CF70 *)Method_CStateManager_QuestRewardCostumeAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardCostumeAction__o *)v4;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1C372A4(QuestRewardCostumeAction_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !mFSM )
      goto LABEL_26;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_332D018 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v10 = (CStateManager_T__o *)*p_mFSM;
    v11 = (Il2CppObject *)sub_1C372A4(QuestRewardCostumeAction_StatePlay_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !v10 )
      goto LABEL_26;
    CStateManager_object___add(
      v10,
      1,
      (IState_T__o *)v11,
      (const MethodInfo_332D018 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v12 = (CStateManager_T__o *)*p_mFSM;
    v13 = (Il2CppObject *)sub_1C372A4(QuestRewardCostumeAction_StateItemLabel_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !v12 )
      goto LABEL_26;
    CStateManager_object___add(
      v12,
      2,
      (IState_T__o *)v13,
      (const MethodInfo_332D018 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    v14 = (CStateManager_T__o *)*p_mFSM;
    v15 = (Il2CppObject *)sub_1C372A4(QuestRewardCostumeAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v15, 0);
    if ( !v14 )
      goto LABEL_26;
    CStateManager_object___add(
      v14,
      3,
      (IState_T__o *)v15,
      (const MethodInfo_332D018 *)Method_CStateManager_QuestRewardCostumeAction__add__);
    QuestRewardCostumeAction__SetState(this, 0, v16);
  }
  p_particleObj = (CGThumbnailListItem_o *)&this->fields.particleObj;
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
      v20 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__Instantiate_object_(
              v20,
              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v21, (UnityEngine_Component_o *)this, 0);
        if ( !byte_4C3C921 )
        {
          sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C921 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v21,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( v21 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v21,
                                         (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0);
            p_particleObj->klass = (CGThumbnailListItem_c *)v21;
            sub_1C36FFC(p_particleObj, (int32_t)v21, v22, v23);
            goto LABEL_23;
          }
        }
LABEL_26:
        sub_1C372B4(ComponentInChildren_object);
      }
    }
  }
LABEL_23:
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0);
}


int32_t QuestRewardCostumeAction__GetState(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  QuestRewardCostumeAction_o *v2; // x19
  struct CStateManager_QuestRewardCostumeAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C3FD40 & 1) == 0 )
  {
    this = (QuestRewardCostumeAction_o *)sub_1C37058(&Method_CStateManager_QuestRewardCostumeAction__getState__);
    byte_4C3FD40 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(this);
  return mFSM->fields.m_state;
}


void QuestRewardCostumeAction__Play(
        QuestRewardCostumeAction_o *this,
        System_Action_o *endAct,
        float fadeInTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v10; // x20
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v13; // x20
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v18; // x20
  System_String_o *v19; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v21; // x0
  System_Action_o *v22; // x21

  if ( (byte_4C3FD3F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_QuestRewardCostumeAction__Play_b__14_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C3FD3F = 1;
  }
  this->fields.mEndAct = endAct;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mEndAct, (int32_t)endAct, (int32_t)method, v4);
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
    v10 = this->fields.mSimpleAnimation;
    if ( !v10 )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)v10->fields.m_Clip;
    if ( !gameObject )
      goto LABEL_30;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v10, name, 0);
    if ( !gameObject )
      goto LABEL_30;
    klass = gameObject->klass;
    v13 = gameObject;
    v14 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
    if ( *(_WORD *)&gameObject->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v14;
        p_offset += 2;
        if ( !v14 )
          goto LABEL_14;
      }
      v16 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v16 = sub_1C87870(gameObject, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v16)(v13, *(_QWORD *)(v16 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v18 = this->fields.mAnimation;
      if ( !v18 )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0);
      if ( !gameObject )
        goto LABEL_30;
      v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v18, v19, 0);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fadeInTime <= 0.0 )
  {
    v21 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v21 = AvalonSceneManager_TypeInfo;
    }
    fadeInTime = v21->static_fields->DEFAULT_FADE_TIME;
  }
  v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_QuestRewardCostumeAction__Play_b__14_0__, 0);
  if ( !Instance )
LABEL_30:
    sub_1C372B4(gameObject);
  CommonUI__maskFadein((CommonUI_o *)Instance, fadeInTime, v22, 0);
}


void QuestRewardCostumeAction__SetState(QuestRewardCostumeAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C3FD41 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QuestRewardCostumeAction__setState__);
    byte_4C3FD41 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(0);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_332D0A4 *)Method_CStateManager_QuestRewardCostumeAction__setState__);
}


void QuestRewardCostumeAction__Setup(
        QuestRewardCostumeAction_o *this,
        int32_t imgId,
        System_String_o *itmName,
        const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *ComponentInChildren_object__51242636; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v15; // x0
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C3FD3E & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_10848/*"QUEST_CLEAR_COSTUME_GET"*/);
    byte_4C3FD3E = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_24;
  ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                           transform,
                                           (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51242636;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mAnimation, (int32_t)ComponentInChildren_object__51242636, v9, v10);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_24;
  v11 = UnityEngine_Component__GetComponentInChildren_object__51242636(
          transform,
          (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mSimpleAnimation, (int32_t)v11, v12, v13);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_24;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__51242636(
                                           transform,
                                           (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_24;
  BYTE5(transform[4].monitor) = 1;
  transform = (UnityEngine_Component_o *)this->fields.mItemSp;
  if ( !transform )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0);
  transform = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_object_(
                                           gameObject,
                                           (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
  if ( !transform )
    goto LABEL_24;
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)transform, imgId, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10848/*"QUEST_CLEAR_COSTUME_GET"*/, 0);
  transform = (UnityEngine_Component_o *)System_String__Format(v15, (Il2CppObject *)itmName, 0);
  if ( !this->fields.mItemLabel )
    goto LABEL_24;
  UILabel__set_text(this->fields.mItemLabel, (System_String_o *)transform, 0);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (UnityEngine_Component_o *)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_24;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0);
  if ( !transform )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  p_mScreenTouchInfo = &this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mScreenTouchInfo, (int32_t)Component_object, v20, v21);
        goto LABEL_21;
      }
    }
LABEL_24:
    sub_1C372B4(transform);
  }
LABEL_21:
  transform = (UnityEngine_Component_o *)*p_mScreenTouchInfo;
  if ( !*p_mScreenTouchInfo )
    goto LABEL_24;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0);
  if ( !transform )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
}


void QuestRewardCostumeAction__Update(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C3FD3D & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QuestRewardCostumeAction__update__);
    sub_1C37058(&CTouch_TypeInfo);
    byte_4C3FD3D = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_332D080 *)Method_CStateManager_QuestRewardCostumeAction__update__);
}


void QuestRewardCostumeAction___Play_b__14_0(QuestRewardCostumeAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardCostumeAction__SetState(this, 1, v2);
}


void QuestRewardCostumeAction_StateItemLabel___ctor(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardCostumeAction_StateItemLabel__begin(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  UnityEngine_Component_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  ManagerConfig_c *v15; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // w24
  MoveObject_o *v19; // x20
  float x; // s10
  float v21; // s11
  float v22; // s12
  System_Action_o *v23; // x21
  System_Action_o *v24; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C3FD44 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__);
    sub_1C37058(&Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_1C37058(&QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    byte_4C3FD44 = 1;
  }
  v4 = sub_1C372A4(QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_11;
  *(_QWORD *)(v4 + 32) = that;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 32), (int32_t)that, v6, v7);
  v8 = *(_QWORD *)(v4 + 32);
  if ( !v8 )
    goto LABEL_11;
  v5 = *(UnityEngine_Component_o **)(v8 + 64);
  if ( !v5 )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(v5, 0);
  *(_QWORD *)(v4 + 16) = gameObject;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)gameObject, v10, v11);
  v5 = *(UnityEngine_Component_o **)(v4 + 16);
  if ( !v5 )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 1, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v4 + 16),
                       (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v4 + 24) = Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 24), (int32_t)Component_object, v13, v14);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0);
  v15 = ManagerConfig_TypeInfo;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v15 = ManagerConfig_TypeInfo;
  }
  WIDTH = v15->static_fields->WIDTH;
  v26 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0);
  v19 = *(MoveObject_o **)(v4 + 24);
  x = v26.fields.x;
  v21 = v26.fields.y;
  v22 = v26.fields.z;
  v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v4,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0);
  v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v4,
    Method_QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0);
  if ( !v19 )
LABEL_11:
    sub_1C372B4(v5);
  v27.fields.x = (float)WIDTH;
  v27.fields.y = y;
  v27.fields.z = z;
  v28.fields.x = x;
  v28.fields.y = v21;
  v28.fields.z = v22;
  MoveObject__Play(v19, v27, v28, 0.25, v23, v24, 0.0, 17, 0);
}


void QuestRewardCostumeAction_StateItemLabel__end(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardCostumeAction_StateItemLabel__update(
        QuestRewardCostumeAction_StateItemLabel_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___ctor(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___begin_b__0(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1C372B4(this);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, mo->fields.mNow, 0);
}


void QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardCostumeAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRewardCostumeAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C372B4(0);
  QuestRewardCostumeAction__SetState(that, 3, v2);
}


void QuestRewardCostumeAction_StateNone___ctor(QuestRewardCostumeAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardCostumeAction_StateNone__begin(
        QuestRewardCostumeAction_StateNone_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardCostumeAction_StateNone__end(
        QuestRewardCostumeAction_StateNone_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardCostumeAction_StateNone__update(
        QuestRewardCostumeAction_StateNone_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardCostumeAction_StatePlay___ctor(QuestRewardCostumeAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardCostumeAction_StatePlay__begin(
        QuestRewardCostumeAction_StatePlay_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  QuestRewardCostumeAction_StatePlay_o *v4; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v6; // x21
  System_String_o *v7; // x0
  struct SimpleAnimation_o *v8; // x21
  System_String_o *v9; // x0
  SimpleAnimation_State_o *v10; // x0
  CGThumbnailListItem_o *p_mSimpleAnimState; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CGThumbnailListItem_c *klass; // x21
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
  CGThumbnailListItem_o *p_fields; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  CGThumbnailListItem_c *v28; // x20
  _QWORD *v29; // x8
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x0

  v4 = this;
  if ( (byte_4C3FD42 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardCostumeAction_StatePlay_o *)sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C3FD42 = 1;
  }
  if ( !that )
    goto LABEL_38;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_36;
    v20 = that->fields.mAnimation;
    if ( v20 )
    {
      this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__Play_71012036(v20, name, 0);
        v22 = that->fields.mAnimation;
        if ( v22 )
        {
          this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
          if ( this )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            Item = UnityEngine_Animation__get_Item(v22, v23, 0);
            v4->fields.mAnimState = Item;
            p_fields = (CGThumbnailListItem_o *)&v4->fields;
            sub_1C36FFC(p_fields, (int32_t)Item, v26, v27);
            this = (QuestRewardCostumeAction_StatePlay_o *)p_fields->klass;
            if ( p_fields->klass )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0);
              this = (QuestRewardCostumeAction_StatePlay_o *)p_fields->klass;
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
    sub_1C372B4(this);
  }
  v6 = that->fields.mSimpleAnimation;
  if ( !v6 )
    goto LABEL_38;
  this = (QuestRewardCostumeAction_StatePlay_o *)v6->fields.m_Clip;
  if ( !this )
    goto LABEL_38;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardCostumeAction_StatePlay_o *)SimpleAnimation__Play_66507412(v6, v7, 0);
  v8 = that->fields.mSimpleAnimation;
  if ( !v8 )
    goto LABEL_38;
  this = (QuestRewardCostumeAction_StatePlay_o *)v8->fields.m_Clip;
  if ( !this )
    goto LABEL_38;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  v10 = SimpleAnimation__get_Item(v8, v9, 0);
  v4->fields.mSimpleAnimState = v10;
  p_mSimpleAnimState = (CGThumbnailListItem_o *)&v4->fields.mSimpleAnimState;
  sub_1C36FFC(p_mSimpleAnimState, (int32_t)v10, v12, v13);
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
    v18 = sub_1C87870(p_mSimpleAnimState->klass, SimpleAnimation_State_TypeInfo, 6);
  }
  this = (QuestRewardCostumeAction_StatePlay_o *)(*(__int64 (__fastcall **)(CGThumbnailListItem_c *, _QWORD, float))v18)(
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
    v32 = sub_1C87870(v28, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(CGThumbnailListItem_c *, _QWORD, float))v32)(v28, *(_QWORD *)(v32 + 8), 1.0);
LABEL_36:
  this = (QuestRewardCostumeAction_StatePlay_o *)that->fields.mAppearEffObj;
  if ( !this )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void QuestRewardCostumeAction_StatePlay__end(
        QuestRewardCostumeAction_StatePlay_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardCostumeAction_StatePlay__update(
        QuestRewardCostumeAction_StatePlay_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v8; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4C3FD43 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardCostumeAction_StatePlay_o *)sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3FD43 = 1;
  }
  if ( !that )
    goto LABEL_21;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mSimpleAnimation;
    if ( !v5 )
      goto LABEL_21;
    this = (QuestRewardCostumeAction_StatePlay_o *)v5->fields.m_Clip;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( SimpleAnimation__IsPlaying(v5, name, 0) )
      return;
LABEL_17:
    this = (QuestRewardCostumeAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
        QuestRewardCostumeAction__SetState(that, 2, v10);
      return;
    }
LABEL_21:
    sub_1C372B4(this);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = that->fields.mAnimation;
    if ( !v8 )
      goto LABEL_21;
    this = (QuestRewardCostumeAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
    if ( !this )
      goto LABEL_21;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( UnityEngine_Animation__IsPlaying(v8, v9, 0) )
      return;
    goto LABEL_17;
  }
}


void QuestRewardCostumeAction_StateTouchWait___ctor(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardCostumeAction_StateTouchWait__begin(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (QuestRewardCostumeAction_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0
    || (this = (QuestRewardCostumeAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0)) == 0 )
  {
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void QuestRewardCostumeAction_StateTouchWait__end(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardCostumeAction_StateTouchWait__update(
        QuestRewardCostumeAction_StateTouchWait_o *this,
        QuestRewardCostumeAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x19
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x2

  if ( (byte_4C3FD45 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&CTouch_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_QuestRewardCostumeAction_StateTouchWait_update__);
    sub_1C37058(&Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1C37058(&QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4C3FD45 = 1;
  }
  v4 = sub_1C372A4(QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v8 = v4 + 16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v8 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v8 + 96LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0);
          v9 = Method_QuestRewardCostumeAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardCostumeAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_1C37070(Method_QuestRewardCostumeAction_StateTouchWait_update__);
          v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v12 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v12 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
          v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            v14,
            (Il2CppObject *)v4,
            Method_QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v14, 0);
            isTouchPush = *(UnityEngine_GameObject_o **)v8;
            if ( *(_QWORD *)v8 )
            {
              QuestRewardCostumeAction__SetState((QuestRewardCostumeAction_o *)isTouchPush, 0, v15);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C372B4(isTouchPush);
  }
}


void QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0___ctor(
        QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        QuestRewardCostumeAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardCostumeAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C372B4(this);
  ActionExtensions__Call(that->fields.mEndAct, 0);
}