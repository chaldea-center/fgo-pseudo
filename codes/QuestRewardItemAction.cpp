void QuestRewardItemAction___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct QuestRewardItemAction_StaticFields *static_fields; // x0
  int32_t v4; // w1

  if ( (byte_4C3FD66 & 1) == 0 )
  {
    sub_1C37058(&QuestRewardItemAction_TypeInfo);
    sub_1C37058(&StringLiteral_5895/*"Effect/Talk/GetTitleSprites/"*/);
    sub_1C37058(&StringLiteral_16269/*"_MaskTex"*/);
    byte_4C3FD66 = 1;
  }
  static_fields = QuestRewardItemAction_TypeInfo->static_fields;
  static_fields->ITEM_LABEL_MAX_WIDTH = 1024;
  v4 = StringLiteral_5895/*"Effect/Talk/GetTitleSprites/"*/;
  static_fields->GetSpritesTexturePath = (struct System_String_o *)StringLiteral_5895/*"Effect/Talk/GetTitleSprites/"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->GetSpritesTexturePath, v4, v1, v2);
  QuestRewardItemAction_TypeInfo->static_fields->MaskTex = UnityEngine_Shader__PropertyToID(
                                                             (System_String_o *)StringLiteral_16269/*"_MaskTex"*/,
                                                             0);
}


void QuestRewardItemAction___ctor(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_T__o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C3FD65 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture____ctor__);
    sub_1C37058(&System_Collections_Generic_List_ValueTuple_UISprite__UITexture___TypeInfo);
    sub_1C37058(&StringLiteral_17219/*"bit_item_get01_3"*/);
    sub_1C37058(&StringLiteral_17220/*"bit_item_get01_4"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_17218/*"bit_item_get01_2"*/);
    byte_4C3FD65 = 1;
  }
  this->fields.mLabelAnimate = 1;
  this->fields.mTreasureAnimStartTime = 1.0;
  *(_WORD *)&this->fields.mTreasureEffectOff = 257;
  v5 = StringLiteral_17218/*"bit_item_get01_2"*/;
  this->fields.DIFF_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17218/*"bit_item_get01_2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.DIFF_ANIMATION_NAME_2_TYPES, v5, v2, v3);
  v6 = StringLiteral_17219/*"bit_item_get01_3"*/;
  this->fields.DIFF_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17219/*"bit_item_get01_3"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.DIFF_ANIMATION_NAME_3_TYPES, v6, v7, v8);
  v9 = StringLiteral_17220/*"bit_item_get01_4"*/;
  this->fields.DIFF_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17220/*"bit_item_get01_4"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.DIFF_ANIMATION_NAME_4_TYPES, v9, v10, v11);
  v12 = StringLiteral_17218/*"bit_item_get01_2"*/;
  this->fields.SAME_ANIMATION_NAME_2_TYPES = (struct System_String_o *)StringLiteral_17218/*"bit_item_get01_2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SAME_ANIMATION_NAME_2_TYPES, v12, v13, v14);
  v15 = StringLiteral_17219/*"bit_item_get01_3"*/;
  this->fields.SAME_ANIMATION_NAME_3_TYPES = (struct System_String_o *)StringLiteral_17219/*"bit_item_get01_3"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SAME_ANIMATION_NAME_3_TYPES, v15, v16, v17);
  v18 = StringLiteral_17220/*"bit_item_get01_4"*/;
  this->fields.SAME_ANIMATION_NAME_4_TYPES = (struct System_String_o *)StringLiteral_17220/*"bit_item_get01_4"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SAME_ANIMATION_NAME_4_TYPES, v18, v19, v20);
  v21 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_ValueTuple_UISprite__UITexture___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v21,
    (const MethodInfo_3751B30 *)Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture____ctor__);
  this->fields.titleSpriteToTextureList = (struct System_Collections_Generic_List_ValueTuple_UISprite__UITexture___o *)v21;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.titleSpriteToTextureList, (int32_t)v21, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.titleSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.titleSpriteName, v24, v25, v26);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestRewardItemAction__Awake(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardItemAction__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v8; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  CStateManager_T__o *v10; // x21
  Il2CppObject *v11; // x22
  CStateManager_T__o *v12; // x21
  QuestRewardItemAction_StatePlay_o *v13; // x22
  CStateManager_T__o *v14; // x21
  QuestRewardItemAction_StateItemLabel_o *v15; // x22
  CStateManager_T__o *v16; // x20
  QuestRewardItemAction_StateTouchWait_o *v17; // x21
  const MethodInfo *v18; // x2
  CGThumbnailListItem_o *p_particleObj; // x20
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4C3FD59 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QuestRewardItemAction___ctor__);
    sub_1C37058(&Method_CStateManager_QuestRewardItemAction__add__);
    sub_1C37058(&CStateManager_QuestRewardItemAction__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&QuestRewardItemAction_StateItemLabel_TypeInfo);
    sub_1C37058(&QuestRewardItemAction_StateNone_TypeInfo);
    sub_1C37058(&QuestRewardItemAction_StatePlay_TypeInfo);
    sub_1C37058(&QuestRewardItemAction_StateTitleSprite_TypeInfo);
    sub_1C37058(&QuestRewardItemAction_StateTouchWait_TypeInfo);
    byte_4C3FD59 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C372A4(CStateManager_QuestRewardItemAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_332CF70 *)Method_CStateManager_QuestRewardItemAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestRewardItemAction__o *)v4;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1C372A4(QuestRewardItemAction_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !mFSM )
      goto LABEL_25;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_332D018 *)Method_CStateManager_QuestRewardItemAction__add__);
    v10 = (CStateManager_T__o *)*p_mFSM;
    v11 = (Il2CppObject *)sub_1C372A4(QuestRewardItemAction_StateTitleSprite_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !v10 )
      goto LABEL_25;
    CStateManager_object___add(
      v10,
      1,
      (IState_T__o *)v11,
      (const MethodInfo_332D018 *)Method_CStateManager_QuestRewardItemAction__add__);
    v12 = (CStateManager_T__o *)*p_mFSM;
    v13 = (QuestRewardItemAction_StatePlay_o *)sub_1C372A4(QuestRewardItemAction_StatePlay_TypeInfo);
    QuestRewardItemAction_StatePlay___ctor(v13, 0);
    if ( !v12 )
      goto LABEL_25;
    CStateManager_object___add(
      v12,
      2,
      (IState_T__o *)v13,
      (const MethodInfo_332D018 *)Method_CStateManager_QuestRewardItemAction__add__);
    v14 = (CStateManager_T__o *)*p_mFSM;
    v15 = (QuestRewardItemAction_StateItemLabel_o *)sub_1C372A4(QuestRewardItemAction_StateItemLabel_TypeInfo);
    QuestRewardItemAction_StateItemLabel___ctor(v15, 0);
    if ( !v14 )
      goto LABEL_25;
    CStateManager_object___add(
      v14,
      3,
      (IState_T__o *)v15,
      (const MethodInfo_332D018 *)Method_CStateManager_QuestRewardItemAction__add__);
    v16 = (CStateManager_T__o *)*p_mFSM;
    v17 = (QuestRewardItemAction_StateTouchWait_o *)sub_1C372A4(QuestRewardItemAction_StateTouchWait_TypeInfo);
    QuestRewardItemAction_StateTouchWait___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_25;
    CStateManager_object___add(
      v16,
      4,
      (IState_T__o *)v17,
      (const MethodInfo_332D018 *)Method_CStateManager_QuestRewardItemAction__add__);
    QuestRewardItemAction__SetState(this, 0, v18);
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
      v22 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v23 = UnityEngine_Object__Instantiate_object_(
              v22,
              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v23, (UnityEngine_Component_o *)this, 0);
        if ( !byte_4C3C921 )
        {
          sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C921 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v23,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( v23 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v23,
                                         (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0);
            p_particleObj->klass = (CGThumbnailListItem_c *)v23;
            sub_1C36FFC(p_particleObj, (int32_t)v23, v24, v25);
            return;
          }
        }
LABEL_25:
        sub_1C372B4(ComponentInChildren_object);
      }
    }
  }
}


void QuestRewardItemAction__CheckTutorial(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  struct System_Action_o *mTouchWaitAct; // x20
  __int64 v5; // x0

  if ( (byte_4C3FD63 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_QuestRewardItemAction_TouchWaitEnd__);
    sub_1C37058(&Method_QuestRewardItemAction__CheckTutorial_b__64_0__);
    byte_4C3FD63 = 1;
  }
  if ( EventTutorialMaster__IsTutorialAvailable(0, 75, 0, 0, 0, 0, 0) )
  {
    this->fields.forcePause = 1;
    v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v3, (Il2CppObject *)this, Method_QuestRewardItemAction__CheckTutorial_b__64_0__, 0);
    EventTutorialMaster__CheckTutorial(0, 75, v3, 0, 0, 0, 0, 0);
  }
  else
  {
    mTouchWaitAct = this->fields.mTouchWaitAct;
    this->fields.forcePause = 0;
    if ( !mTouchWaitAct )
    {
      mTouchWaitAct = (struct System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        mTouchWaitAct,
        (Il2CppObject *)this,
        (intptr_t)Method_QuestRewardItemAction_TouchWaitEnd__,
        0);
      if ( !mTouchWaitAct )
        sub_1C372B4(v5);
    }
    ((void (__fastcall *)(intptr_t, intptr_t))mTouchWaitAct->fields.invoke_impl)(
      mTouchWaitAct->fields.method_code,
      mTouchWaitAct->fields.method);
  }
}


void QuestRewardItemAction__CommonSetUpEndAction(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct ScreenTouchInformationComponent_o **p_mScreenTouchInfo; // x20
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3FD5F & 1) == 0 )
  {
    sub_1C37058(&AndroidBackKeyManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3FD5F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  p_mScreenTouchInfo = &this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      gameObject = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, (UnityEngine_Transform_o *)gameObject, 0, 0);
      if ( gameObject )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mScreenTouchInfo, (int32_t)Component_object, v8, v9);
        goto LABEL_10;
      }
    }
LABEL_13:
    sub_1C372B4(gameObject);
  }
LABEL_10:
  gameObject = (UnityEngine_GameObject_o *)*p_mScreenTouchInfo;
  if ( !*p_mScreenTouchInfo )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
}


int32_t QuestRewardItemAction__GetState(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  QuestRewardItemAction_o *v2; // x19
  struct CStateManager_QuestRewardItemAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C3FD61 & 1) == 0 )
  {
    this = (QuestRewardItemAction_o *)sub_1C37058(&Method_CStateManager_QuestRewardItemAction__getState__);
    byte_4C3FD61 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(this);
  return mFSM->fields.m_state;
}


void QuestRewardItemAction__Play(
        QuestRewardItemAction_o *this,
        bool is_from_treasure_box,
        System_Action_o *end_act,
        float fade_in_time,
        System_Action_o *touchWaitAct,
        const MethodInfo *method)
{
  __int64 v11; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *mSimpleAnimation; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v21; // x21
  __int64 v22; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v24; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_TrackedReference_o *Item; // x21
  const MethodInfo *v27; // x2
  int32_t v28; // w1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v30; // x0
  System_Action_o *v31; // x21

  if ( (byte_4C3FD60 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    sub_1C37058(&Method_QuestRewardItemAction___c__DisplayClass55_0__Play_b__0__);
    sub_1C37058(&QuestRewardItemAction___c__DisplayClass55_0_TypeInfo);
    byte_4C3FD60 = 1;
  }
  v11 = sub_1C372A4(QuestRewardItemAction___c__DisplayClass55_0_TypeInfo);
  QuestRewardItemAction___c__DisplayClass55_0___ctor((QuestRewardItemAction___c__DisplayClass55_0_o *)v11, 0);
  if ( !v11 )
    goto LABEL_35;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  this->fields.mIsFromTreasureBox = is_from_treasure_box;
  this->fields.mEndAct = end_act;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mEndAct, (int32_t)end_act, v15, v16);
  this->fields.mTouchWaitAct = touchWaitAct;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mTouchWaitAct, (int32_t)touchWaitAct, v17, v18);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mSimpleAnimation;
    if ( !gameObject )
      goto LABEL_35;
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                               (SimpleAnimation_o *)gameObject,
                                               this->fields.playAnimationName,
                                               0);
    if ( !gameObject )
      goto LABEL_35;
    klass = gameObject->klass;
    v21 = gameObject;
    v22 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
    if ( *(_WORD *)&gameObject->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v22;
        p_offset += 2;
        if ( !v22 )
          goto LABEL_14;
      }
      v24 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v24 = sub_1C87870(gameObject, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v24)(v21, *(_QWORD *)(v24 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mAnimation, 0, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
      if ( !gameObject )
        goto LABEL_35;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)gameObject,
                                                 this->fields.playAnimationName,
                                                 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_35;
        UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0);
      }
    }
  }
  if ( System_String__IsNullOrEmpty(this->fields.titleSpriteName, 0) )
    v28 = 2;
  else
    v28 = 1;
  *(_DWORD *)(v11 + 24) = v28;
  if ( this->fields.mIsFromTreasureBox )
    QuestRewardItemAction__SetState(this, v28, v27);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v30 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v30 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v30->static_fields->DEFAULT_FADE_TIME;
  }
  v31 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v11, Method_QuestRewardItemAction___c__DisplayClass55_0__Play_b__0__, 0);
  if ( !Instance )
LABEL_35:
    sub_1C372B4(gameObject);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v31, 0);
}


void QuestRewardItemAction__SetActiveLabelList(
        QuestRewardItemAction_o *this,
        UILabel_array *itemLabelList,
        bool isActive,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  __int64 v6; // x21
  bool v7; // w20
  UnityEngine_Component_o *gameObject; // x0

  if ( itemLabelList )
  {
    max_length = itemLabelList->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v6 = 0;
        v7 = isActive;
        do
        {
          if ( (unsigned int)v6 >= (unsigned int)max_length )
            sub_1C372BC(this);
          gameObject = (UnityEngine_Component_o *)itemLabelList->m_Items[v6];
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
          {
            sub_1C372B4(gameObject);
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v7, 0);
          LODWORD(max_length) = itemLabelList->max_length;
          ++v6;
        }
        while ( (int)v6 < (int)max_length );
      }
    }
  }
}


void QuestRewardItemAction__SetClearTextLabel(
        QuestRewardItemAction_o *this,
        UILabel_o *itemLabel,
        QuestRewardInfo_o *questInfoReward,
        const MethodInfo *method)
{
  void *CrossOperatorString; // x0
  int32_t type; // w22
  Il2CppObject *v8; // x22
  Il2CppObject *CountableString; // x21
  System_String_o *Name; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v11; // x22
  System_String_o *v12; // x23
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x0
  QuestRewardItemAction_c *v20; // x0
  int32_t num; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3FD5E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C37058(&QuestRewardItemAction_TypeInfo);
    sub_1C37058(&StringLiteral_10849/*"QUEST_CLEAR_REWARD_GET"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FD5E = 1;
  }
  CrossOperatorString = ItemType__get_CrossOperatorString(0);
  if ( !questInfoReward )
    goto LABEL_29;
  type = questInfoReward->fields.type;
  if ( type == 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( CrossOperatorString )
    {
      CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                              questInfoReward->fields.objectId,
                              (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( CrossOperatorString )
      {
        v8 = (Il2CppObject *)*((_QWORD *)CrossOperatorString + 3);
        CountableString = (Il2CppObject *)ItemType__GetCountableString(*((_DWORD *)CrossOperatorString + 12), 0);
        goto LABEL_22;
      }
    }
LABEL_29:
    sub_1C372B4(CrossOperatorString);
  }
  CountableString = (Il2CppObject *)CrossOperatorString;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( type == 1 )
  {
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !CrossOperatorString )
      goto LABEL_29;
    CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                            questInfoReward->fields.objectId,
                            (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CrossOperatorString )
      goto LABEL_29;
    Name = ServantEntity__getName((ServantEntity_o *)CrossOperatorString, -1, -1, 0, 0);
  }
  else
  {
    CrossOperatorString = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EquipMaster___);
    if ( !CrossOperatorString )
      goto LABEL_29;
    CrossOperatorString = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)CrossOperatorString,
                            questInfoReward->fields.objectId,
                            (const MethodInfo_33A10A0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    if ( !CrossOperatorString )
      goto LABEL_29;
    v11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)CrossOperatorString + 4);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48966740(v11, 0);
  }
  v8 = (Il2CppObject *)Name;
LABEL_22:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_10849/*"QUEST_CLEAR_REWARD_GET"*/, 0);
  num = questInfoReward->fields.num;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v13, v14, v15, v16, v17, v18);
  CrossOperatorString = System_String__Format_63603016(v12, v8, CountableString, v19, 0);
  if ( !itemLabel )
    goto LABEL_29;
  UILabel__set_text(itemLabel, (System_String_o *)CrossOperatorString, 0);
  v20 = QuestRewardItemAction_TypeInfo;
  if ( !QuestRewardItemAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo);
    v20 = QuestRewardItemAction_TypeInfo;
  }
  UILabel__SetCondensedScale(itemLabel, v20->static_fields->ITEM_LABEL_MAX_WIDTH, 0, 0);
  CrossOperatorString = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemLabel, 0);
  if ( !CrossOperatorString )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CrossOperatorString, 0, 0);
}


void QuestRewardItemAction__SetForcePauseFlag(QuestRewardItemAction_o *this, bool isActive, const MethodInfo *method)
{
  this->fields.forcePause = isActive;
}


void QuestRewardItemAction__SetState(QuestRewardItemAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C3FD62 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QuestRewardItemAction__setState__);
    byte_4C3FD62 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(0);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_332D0A4 *)Method_CStateManager_QuestRewardItemAction__setState__);
}


void QuestRewardItemAction__SetTitleSprite(
        QuestRewardItemAction_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.titleSpriteName = spriteName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.titleSpriteName, (int32_t)spriteName, (int32_t)method, v3);
}


void QuestRewardItemAction__Setup(QuestRewardItemAction_o *this, QuestRewardInfo_o *qri, const MethodInfo *method)
{
  __int64 transform; // x0
  Il2CppObject *ComponentInChildren_object__51242636; // x0
  struct UnityEngine_Animation_o **p_mAnimation; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x0
  struct SimpleAnimation_o **p_mSimpleAnimation; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x0
  UnityEngine_Object_o *v15; // x24
  Il2CppObject *v16; // x21
  UnityEngine_Object_o *v17; // x23
  struct System_String_o *name; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  QuestRewardItemAction_o *v21; // x0
  const MethodInfo *v22; // x3
  QuestRewardItemAction_o *v23; // x0
  const MethodInfo *v24; // x3
  QuestRewardItemAction_o *v25; // x0
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct UILabel_o *mItemLabel; // x22
  __int64 v30; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct UnityEngine_GameObject_array *v35; // x21
  struct UnityEngine_GameObject_o *mAppearEffObj; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  UnityEngine_Object_o *mServantFaceIcon; // x21
  QuestRewardItemAction_o *v40; // x0
  const MethodInfo *v41; // x3
  UnityEngine_Object_o *v42; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v44; // x1
  __int64 v45; // x0

  if ( (byte_4C3FD5B & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C37058(&UnityEngine_GameObject___TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UILabel___TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FD5B = 1;
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_48;
  ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51242636;
  p_mAnimation = &this->fields.mAnimation;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mAnimation, (int32_t)ComponentInChildren_object__51242636, v8, v9);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_48;
  v10 = UnityEngine_Component__GetComponentInChildren_object__51242636(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v10;
  p_mSimpleAnimation = &this->fields.mSimpleAnimation;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mSimpleAnimation, (int32_t)v10, v12, v13);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_48;
  v14 = UnityEngine_Component__GetComponentInChildren_object__51242636(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  v15 = (UnityEngine_Object_o *)*p_mSimpleAnimation;
  v16 = v14;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(v15, 0, 0);
  if ( (transform & 1) != 0 )
  {
    if ( !*p_mSimpleAnimation )
      goto LABEL_48;
    transform = (__int64)(*p_mSimpleAnimation)->fields.m_Clip;
    if ( !transform )
      goto LABEL_48;
  }
  else
  {
    v17 = (UnityEngine_Object_o *)*p_mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality(v17, 0, 0);
    if ( (transform & 1) == 0 )
      goto LABEL_18;
    transform = (__int64)*p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_48;
    transform = (__int64)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)transform, 0);
    if ( !transform )
      goto LABEL_48;
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
  this->fields.playAnimationName = name;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playAnimationName, (int32_t)name, v19, v20);
LABEL_18:
  if ( !v16 )
    goto LABEL_48;
  BYTE5(v16[6].monitor) = 1;
  transform = (__int64)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_48;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  QuestRewardItemAction__SetActiveLabelList(v21, this->fields.mItemLabelList_2, 0, v22);
  QuestRewardItemAction__SetActiveLabelList(v23, this->fields.mItemLabelList_3, 0, v24);
  QuestRewardItemAction__SetActiveLabelList(v25, this->fields.mItemLabelList_4, 0, v26);
  transform = sub_1C37100(UILabel___TypeInfo, 1);
  if ( !transform )
    goto LABEL_48;
  mItemLabel = this->fields.mItemLabel;
  v30 = transform;
  if ( mItemLabel )
  {
    transform = sub_1C37194(this->fields.mItemLabel, *(_QWORD *)(*(_QWORD *)transform + 64LL));
    if ( !transform )
    {
      v45 = sub_1C372D8();
      sub_1C37180(v45, 0);
    }
  }
  if ( !*(_DWORD *)(v30 + 24) )
    goto LABEL_49;
  *(_QWORD *)(v30 + 32) = mItemLabel;
  sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 32), (int32_t)mItemLabel, v27, v28);
  this->fields.itemLabelDispList = (struct UILabel_array *)v30;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemLabelDispList, v30, v31, v32);
  transform = sub_1C37100(UnityEngine_GameObject___TypeInfo, 1);
  if ( !transform )
    goto LABEL_48;
  v35 = (struct UnityEngine_GameObject_array *)transform;
  if ( !*(_DWORD *)(transform + 24) )
LABEL_49:
    sub_1C372BC(transform);
  mAppearEffObj = this->fields.mAppearEffObj;
  *(_QWORD *)(transform + 32) = mAppearEffObj;
  sub_1C36FFC((CGThumbnailListItem_o *)(transform + 32), (int32_t)mAppearEffObj, v33, v34);
  this->fields.appearEffObjDispList = v35;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.appearEffObjDispList, (int32_t)v35, v37, v38);
  if ( !qri )
LABEL_48:
    sub_1C372B4(transform);
  if ( qri->fields.type == 1 )
  {
    transform = (__int64)this->fields.mItemSp;
    if ( !transform )
      goto LABEL_48;
    UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0);
    mServantFaceIcon = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mServantFaceIcon, 0, 0) )
    {
      transform = (__int64)this->fields.mServantFaceIcon;
      if ( !transform )
        goto LABEL_48;
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
    }
    transform = (__int64)this->fields.mServantFaceIcon;
    if ( !transform )
      goto LABEL_48;
    ServantFaceIconComponent__Set_41006624(
      (ServantFaceIconComponent_o *)transform,
      qri->fields.objectId,
      0,
      0,
      0,
      0,
      0,
      2,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0);
  }
  else
  {
    v42 = (UnityEngine_Object_o *)this->fields.mServantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v42, 0, 0) )
    {
      transform = (__int64)this->fields.mServantFaceIcon;
      if ( !transform )
        goto LABEL_48;
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
    }
    transform = (__int64)this->fields.mItemSp;
    if ( !transform )
      goto LABEL_48;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    transform = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                           gameObject,
                           (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    if ( !transform )
      goto LABEL_48;
    ItemIconComponent__SetGift_40921900(
      (ItemIconComponent_o *)transform,
      qri->fields.type,
      qri->fields.objectId,
      qri->fields.num,
      0,
      0);
  }
  QuestRewardItemAction__SetClearTextLabel(v40, this->fields.mItemLabel, qri, v41);
  QuestRewardItemAction__CommonSetUpEndAction(this, v44);
}


void QuestRewardItemAction__SetupMultipleQuestRewardInfo(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_o *questInfoReward,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *transform; // x0
  Il2CppObject *ComponentInChildren_object__51242636; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  QuestRewardItemAction_o *v12; // x0
  const MethodInfo *v13; // x3
  QuestRewardItemAction_o *v14; // x0
  const MethodInfo *v15; // x3
  QuestRewardItemAction_o *v16; // x0
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UILabel_o *mItemLabel; // x22
  ServantFaceIconComponent_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct UnityEngine_GameObject_array *v26; // x23
  struct UnityEngine_GameObject_o *mAppearEffObj; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t num; // w8
  struct System_String_o *SAME_ANIMATION_NAME_2_TYPES; // x1
  struct UISprite_array *mItemSpList_3; // x23
  struct ServantFaceIconComponent_array *mServantFaceIconList_3; // x24
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct UnityEngine_GameObject_array **p_mAppearEffObjList_3; // x8
  struct System_String_o *SAME_ANIMATION_NAME_3_TYPES; // x1
  struct System_String_o *SAME_ANIMATION_NAME_4_TYPES; // x1
  struct UnityEngine_GameObject_array *v41; // x1
  __int64 v42; // x21
  ServantFaceIconComponent_o **m_Items; // x22
  UISprite_o **v44; // x25
  float x; // s8
  float z; // s9
  const MethodInfo *v47; // x3
  il2cpp_array_size_t max_length; // x8
  il2cpp_array_size_t v49; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v51; // w8
  const MethodInfo *v52; // x1
  __int64 v53; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3FD5D & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C37058(&UnityEngine_GameObject___TypeInfo);
    sub_1C37058(&UILabel___TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FD5D = 1;
  }
  if ( !this->fields.mItemSpList_2 || !this->fields.mItemLabelList_3 || !this->fields.mItemLabelList_4 )
    return;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_60;
  ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51242636;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mAnimation, (int32_t)ComponentInChildren_object__51242636, v7, v8);
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_60;
  v9 = UnityEngine_Component__GetComponentInChildren_object__51242636(
         (UnityEngine_Component_o *)transform,
         (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mSimpleAnimation, (int32_t)v9, v10, v11);
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_60;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__GetComponentInChildren_object__51242636(
                                              (UnityEngine_Component_o *)transform,
                                              (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_60;
  BYTE5(transform->fields.rarity2Sprite) = 1;
  transform = (ServantFaceIconComponent_o *)this->fields.mItemLabel;
  if ( !transform )
    goto LABEL_60;
  transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)transform,
                                              0);
  if ( !transform )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  QuestRewardItemAction__SetActiveLabelList(v12, this->fields.mItemLabelList_2, 0, v13);
  QuestRewardItemAction__SetActiveLabelList(v14, this->fields.mItemLabelList_3, 0, v15);
  QuestRewardItemAction__SetActiveLabelList(v16, this->fields.mItemLabelList_4, 0, v17);
  transform = (ServantFaceIconComponent_o *)sub_1C37100(UILabel___TypeInfo, 1);
  if ( !transform )
    goto LABEL_60;
  mItemLabel = this->fields.mItemLabel;
  v21 = transform;
  if ( mItemLabel )
  {
    transform = (ServantFaceIconComponent_o *)sub_1C37194(this->fields.mItemLabel, transform->klass->_1.element_class);
    if ( !transform )
    {
      v53 = sub_1C372D8();
      sub_1C37180(v53, 0);
    }
  }
  if ( !LODWORD(v21->fields.m_CancellationTokenSource) )
    goto LABEL_61;
  v21->fields.backSprite = (struct UISprite_o *)mItemLabel;
  sub_1C36FFC((CGThumbnailListItem_o *)&v21->fields.backSprite, (int32_t)mItemLabel, v18, v19);
  this->fields.itemLabelDispList = (struct UILabel_array *)v21;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemLabelDispList, (int32_t)v21, v22, v23);
  transform = (ServantFaceIconComponent_o *)sub_1C37100(UnityEngine_GameObject___TypeInfo, 1);
  if ( !transform )
    goto LABEL_60;
  v26 = (struct UnityEngine_GameObject_array *)transform;
  if ( !LODWORD(transform->fields.m_CancellationTokenSource) )
LABEL_61:
    sub_1C372BC(transform);
  mAppearEffObj = this->fields.mAppearEffObj;
  transform->fields.backSprite = (struct UISprite_o *)mAppearEffObj;
  sub_1C36FFC((CGThumbnailListItem_o *)&transform->fields.backSprite, (int32_t)mAppearEffObj, v24, v25);
  this->fields.appearEffObjDispList = v26;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.appearEffObjDispList, (int32_t)v26, v28, v29);
  if ( !questInfoReward )
    goto LABEL_60;
  num = questInfoReward->fields.num;
  if ( num == 3 )
  {
    SAME_ANIMATION_NAME_3_TYPES = this->fields.SAME_ANIMATION_NAME_3_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_3_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_3;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_3;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_3_TYPES,
      v30,
      v31);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_3;
  }
  else if ( num == 2 )
  {
    SAME_ANIMATION_NAME_2_TYPES = this->fields.SAME_ANIMATION_NAME_2_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_2_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_2;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_2;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_2_TYPES,
      v30,
      v31);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_2;
  }
  else
  {
    SAME_ANIMATION_NAME_4_TYPES = this->fields.SAME_ANIMATION_NAME_4_TYPES;
    this->fields.playAnimationName = SAME_ANIMATION_NAME_4_TYPES;
    mItemSpList_3 = this->fields.mItemSpList_4;
    mServantFaceIconList_3 = this->fields.mServantFaceIconList_4;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&this->fields.playAnimationName,
      (int32_t)SAME_ANIMATION_NAME_4_TYPES,
      v30,
      v31);
    p_mAppearEffObjList_3 = &this->fields.mAppearEffObjList_4;
  }
  v41 = *p_mAppearEffObjList_3;
  this->fields.appearEffObjDispList = *p_mAppearEffObjList_3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.appearEffObjDispList, (int32_t)v41, v36, v37);
  if ( !mItemSpList_3 )
LABEL_60:
    sub_1C372B4(transform);
  v42 = 0;
  m_Items = mServantFaceIconList_3->m_Items;
  v44 = mItemSpList_3->m_Items;
  do
  {
    if ( (unsigned int)v42 >= LODWORD(mItemSpList_3->max_length) )
      goto LABEL_61;
    transform = (ServantFaceIconComponent_o *)v44[v42];
    if ( !transform )
      goto LABEL_60;
    transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0);
    if ( !transform )
      goto LABEL_60;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    if ( (unsigned int)v42 >= LODWORD(mItemSpList_3->max_length) )
      goto LABEL_61;
    transform = (ServantFaceIconComponent_o *)v44[v42];
    if ( !transform )
      goto LABEL_60;
    x = position.fields.x;
    z = position.fields.z;
    transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0);
    if ( !transform )
      goto LABEL_60;
    v55.fields.y = 0.0;
    v55.fields.x = x;
    v55.fields.z = z;
    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v55, 0);
    if ( questInfoReward->fields.type == 1 )
    {
      if ( (unsigned int)v42 >= LODWORD(mItemSpList_3->max_length) )
        goto LABEL_61;
      transform = (ServantFaceIconComponent_o *)v44[v42];
      if ( !transform )
        goto LABEL_60;
      UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( !mServantFaceIconList_3 )
        goto LABEL_60;
      max_length = mServantFaceIconList_3->max_length;
      if ( max_length )
      {
        if ( (unsigned int)v42 >= (unsigned int)max_length )
          goto LABEL_61;
        transform = m_Items[v42];
        if ( !transform )
          goto LABEL_60;
        transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0);
        if ( !transform )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
        if ( (unsigned int)v42 >= LODWORD(mServantFaceIconList_3->max_length) )
          goto LABEL_61;
        transform = m_Items[v42];
        if ( !transform )
          goto LABEL_60;
        ServantFaceIconComponent__Set_41006624(
          transform,
          questInfoReward->fields.objectId,
          0,
          0,
          0,
          0,
          0,
          2,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0);
      }
    }
    else
    {
      if ( !mServantFaceIconList_3 )
        goto LABEL_60;
      v49 = mServantFaceIconList_3->max_length;
      if ( v49 )
      {
        if ( (unsigned int)v42 >= (unsigned int)v49 )
          goto LABEL_61;
        transform = m_Items[v42];
        if ( !transform )
          goto LABEL_60;
        transform = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0);
        if ( !transform )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
      }
      if ( (unsigned int)v42 >= LODWORD(mItemSpList_3->max_length) )
        goto LABEL_61;
      transform = (ServantFaceIconComponent_o *)v44[v42];
      if ( !transform )
        goto LABEL_60;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      transform = (ServantFaceIconComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                  gameObject,
                                                  (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
      if ( !transform )
        goto LABEL_60;
      ItemIconComponent__SetGift_40921900(
        (ItemIconComponent_o *)transform,
        questInfoReward->fields.type,
        questInfoReward->fields.objectId,
        1,
        0,
        0);
    }
    v51 = questInfoReward->fields.num;
    ++v42;
    if ( v51 >= 4 )
      v51 = 4;
    if ( v51 <= 2 )
      v51 = 2;
  }
  while ( (unsigned int)v42 < v51 );
  QuestRewardItemAction__SetClearTextLabel(
    (QuestRewardItemAction_o *)transform,
    this->fields.mItemLabel,
    questInfoReward,
    v47);
  QuestRewardItemAction__CommonSetUpEndAction(this, v52);
}


void QuestRewardItemAction__Setup_36597772(
        QuestRewardItemAction_o *this,
        QuestRewardInfo_array *questInfoRewardList,
        bool isMultiDisp,
        const MethodInfo *method)
{
  QuestRewardItemAction_o *v5; // x19
  bool v6; // w21
  Il2CppObject *ComponentInChildren_object__51242636; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x3
  struct UILabel_array *mItemLabelList_2; // x1
  struct UISprite_array *mItemSpList_2; // x22
  struct ServantFaceIconComponent_array *mServantFaceIconList_2; // x23
  struct System_String_o *DIFF_ANIMATION_NAME_2_TYPES; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct UnityEngine_GameObject_array *mAppearEffObjList_2; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  QuestRewardItemAction_o *v24; // x0
  const MethodInfo *v25; // x3
  QuestRewardItemAction_o *v26; // x0
  const MethodInfo *v27; // x3
  UILabel_array *mItemLabelList_3; // x1
  bool v29; // w2
  TerminalPramsManager_c *v30; // x0
  int32_t PhaseCnt_k__BackingField; // w23
  Il2CppObject *Master_object; // x21
  QuestRewardInfo_o *v33; // x8
  QuestRewardInfo_o *v34; // x1
  struct UILabel_array *v35; // x1
  struct System_String_o *DIFF_ANIMATION_NAME_3_TYPES; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct UnityEngine_GameObject_array *mAppearEffObjList_3; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  QuestRewardItemAction_o *v42; // x0
  const MethodInfo *v43; // x3
  QuestRewardItemAction_o *v44; // x0
  const MethodInfo *v45; // x3
  bool v46; // w2
  UILabel_array **p_mItemLabelList_4; // x24
  struct UILabel_array *mItemLabelList_4; // x1
  struct System_String_o *DIFF_ANIMATION_NAME_4_TYPES; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct UnityEngine_GameObject_array *mAppearEffObjList_4; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  QuestRewardItemAction_o *v55; // x0
  const MethodInfo *v56; // x3
  QuestRewardItemAction_o *v57; // x0
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x1
  int max_length; // w8
  __int64 v61; // x24
  unsigned int v62; // w27
  QuestRewardInfo_o *v63; // x21
  const MethodInfo *v64; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabelDispList; // x8
  QuestPhaseEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  v5 = this;
  v6 = isMultiDisp;
  if ( (byte_4C3FD5C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_IndexOf_int___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    this = (QuestRewardItemAction_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FD5C = 1;
  }
  entity = 0;
  v5->fields.isMultiDisp = v6;
  if ( !questInfoRewardList )
    goto LABEL_73;
  if ( SLODWORD(questInfoRewardList->max_length) <= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3CFE6 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3CFE6 = 1;
    }
    v30 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v30->static_fields->_PhaseCnt_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !byte_4C3CFE7 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3CFE7 = 1;
    }
    this = (QuestRewardItemAction_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (QuestRewardItemAction_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_73;
    this = (QuestRewardItemAction_o *)QuestPhaseMaster__TryGetEntity(
                                        (QuestPhaseMaster_o *)Master_object,
                                        &entity,
                                        HIDWORD(this->fields.mAppearEffObjList_2->bounds),
                                        PhaseCnt_k__BackingField + 1,
                                        0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRewardItemAction_o *)entity;
      if ( !entity )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)QuestPhaseEntity__GetClearGiftItemListDisplay(entity, 0);
      if ( !LODWORD(questInfoRewardList->max_length) )
        goto LABEL_74;
      v33 = questInfoRewardList->m_Items[0];
      if ( !v33 )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)System_Array__IndexOf_int_(
                                          (System_Int32_array *)this,
                                          v33->fields.objectId,
                                          (const MethodInfo_31EECD8 *)Method_System_Array_IndexOf_int___);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        if ( !LODWORD(questInfoRewardList->max_length) )
          goto LABEL_74;
        v34 = questInfoRewardList->m_Items[0];
        if ( v34 )
        {
          if ( v34->fields.num >= 2 )
          {
            QuestRewardItemAction__SetupMultipleQuestRewardInfo(v5, v34, v13);
            return;
          }
          goto LABEL_34;
        }
LABEL_73:
        sub_1C372B4(this);
      }
    }
LABEL_34:
    if ( !LODWORD(questInfoRewardList->max_length) )
      goto LABEL_74;
LABEL_35:
    QuestRewardItemAction__Setup(v5, questInfoRewardList->m_Items[0], v13);
    return;
  }
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0);
  if ( !this )
    goto LABEL_73;
  ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v5->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51242636;
  sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.mAnimation, (int32_t)ComponentInChildren_object__51242636, v8, v9);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0);
  if ( !this )
    goto LABEL_73;
  v10 = UnityEngine_Component__GetComponentInChildren_object__51242636(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v5->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.mSimpleAnimation, (int32_t)v10, v11, v12);
  this = (QuestRewardItemAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0);
  if ( !this )
    goto LABEL_73;
  this = (QuestRewardItemAction_o *)UnityEngine_Component__GetComponentInChildren_object__51242636(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !this )
    goto LABEL_73;
  BYTE5(this->fields.titleSprites) = 1;
  switch ( LODWORD(questInfoRewardList->max_length) )
  {
    case 0:
      goto LABEL_74;
    case 2:
      mItemLabelList_2 = v5->fields.mItemLabelList_2;
      mItemSpList_2 = v5->fields.mItemSpList_2;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_2;
      v5->fields.itemLabelDispList = mItemLabelList_2;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.itemLabelDispList, (int32_t)mItemLabelList_2, (int32_t)v13, v14);
      DIFF_ANIMATION_NAME_2_TYPES = v5->fields.DIFF_ANIMATION_NAME_2_TYPES;
      v5->fields.playAnimationName = DIFF_ANIMATION_NAME_2_TYPES;
      sub_1C36FFC(
        (CGThumbnailListItem_o *)&v5->fields.playAnimationName,
        (int32_t)DIFF_ANIMATION_NAME_2_TYPES,
        v19,
        v20);
      mAppearEffObjList_2 = v5->fields.mAppearEffObjList_2;
      v5->fields.appearEffObjDispList = mAppearEffObjList_2;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.appearEffObjDispList, (int32_t)mAppearEffObjList_2, v22, v23);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      QuestRewardItemAction__SetActiveLabelList(v24, v5->fields.mItemLabelList_2, 1, v25);
      mItemLabelList_3 = v5->fields.mItemLabelList_3;
      v29 = 0;
      goto LABEL_39;
    case 3:
      v35 = v5->fields.mItemLabelList_3;
      mItemSpList_2 = v5->fields.mItemSpList_3;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_3;
      v5->fields.itemLabelDispList = v35;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.itemLabelDispList, (int32_t)v35, (int32_t)v13, v14);
      DIFF_ANIMATION_NAME_3_TYPES = v5->fields.DIFF_ANIMATION_NAME_3_TYPES;
      v5->fields.playAnimationName = DIFF_ANIMATION_NAME_3_TYPES;
      sub_1C36FFC(
        (CGThumbnailListItem_o *)&v5->fields.playAnimationName,
        (int32_t)DIFF_ANIMATION_NAME_3_TYPES,
        v37,
        v38);
      mAppearEffObjList_3 = v5->fields.mAppearEffObjList_3;
      v5->fields.appearEffObjDispList = mAppearEffObjList_3;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.appearEffObjDispList, (int32_t)mAppearEffObjList_3, v40, v41);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      QuestRewardItemAction__SetActiveLabelList(v42, v5->fields.mItemLabelList_2, 0, v43);
      mItemLabelList_3 = v5->fields.mItemLabelList_3;
      v29 = 1;
LABEL_39:
      QuestRewardItemAction__SetActiveLabelList(v26, mItemLabelList_3, v29, v27);
      v46 = 0;
      p_mItemLabelList_4 = &v5->fields.mItemLabelList_4;
      break;
    case 4:
      mItemSpList_2 = v5->fields.mItemSpList_4;
      mServantFaceIconList_2 = v5->fields.mServantFaceIconList_4;
      p_mItemLabelList_4 = &v5->fields.mItemLabelList_4;
      mItemLabelList_4 = v5->fields.mItemLabelList_4;
      v5->fields.itemLabelDispList = mItemLabelList_4;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.itemLabelDispList, (int32_t)mItemLabelList_4, (int32_t)v13, v14);
      DIFF_ANIMATION_NAME_4_TYPES = v5->fields.DIFF_ANIMATION_NAME_4_TYPES;
      v5->fields.playAnimationName = DIFF_ANIMATION_NAME_4_TYPES;
      sub_1C36FFC(
        (CGThumbnailListItem_o *)&v5->fields.playAnimationName,
        (int32_t)DIFF_ANIMATION_NAME_4_TYPES,
        v50,
        v51);
      mAppearEffObjList_4 = v5->fields.mAppearEffObjList_4;
      v5->fields.appearEffObjDispList = mAppearEffObjList_4;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.appearEffObjDispList, (int32_t)mAppearEffObjList_4, v53, v54);
      this = (QuestRewardItemAction_o *)v5->fields.mItemLabel;
      if ( !this )
        goto LABEL_73;
      this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      QuestRewardItemAction__SetActiveLabelList(v55, v5->fields.mItemLabelList_2, 0, v56);
      QuestRewardItemAction__SetActiveLabelList(v57, v5->fields.mItemLabelList_3, 0, v58);
      v46 = 1;
      break;
    default:
      goto LABEL_35;
  }
  QuestRewardItemAction__SetActiveLabelList(v44, *p_mItemLabelList_4, v46, v45);
  max_length = questInfoRewardList->max_length;
  if ( max_length >= 1 )
  {
    v61 = 4;
    while ( 1 )
    {
      v62 = v61 - 4;
      if ( (int)v61 - 4 >= (unsigned int)max_length )
        break;
      v63 = (QuestRewardInfo_o *)*((_QWORD *)&questInfoRewardList->obj.klass + v61);
      if ( !v63 )
        goto LABEL_73;
      if ( v63->fields.type == 1 )
      {
        if ( !mItemSpList_2 )
          goto LABEL_73;
        if ( v62 >= LODWORD(mItemSpList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v61);
        if ( !this )
          goto LABEL_73;
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( !mServantFaceIconList_2 )
          goto LABEL_73;
        if ( v62 >= LODWORD(mServantFaceIconList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v61);
        if ( !this )
          goto LABEL_73;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        if ( v62 >= LODWORD(mServantFaceIconList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v61);
        if ( !this )
          goto LABEL_73;
        ServantFaceIconComponent__Set_41006624(
          (ServantFaceIconComponent_o *)this,
          v63->fields.objectId,
          0,
          0,
          0,
          0,
          0,
          2,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0);
      }
      else
      {
        if ( !mServantFaceIconList_2 )
          goto LABEL_73;
        if ( v62 >= LODWORD(mServantFaceIconList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mServantFaceIconList_2->obj.klass + v61);
        if ( !this )
          goto LABEL_73;
        this = (QuestRewardItemAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        if ( !mItemSpList_2 )
          goto LABEL_73;
        if ( v62 >= LODWORD(mItemSpList_2->max_length) )
          break;
        this = (QuestRewardItemAction_o *)*((_QWORD *)&mItemSpList_2->obj.klass + v61);
        if ( !this )
          goto LABEL_73;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        this = (QuestRewardItemAction_o *)GameObjectExtensions__SafeGetComponent_object_(
                                            gameObject,
                                            (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_73;
        ItemIconComponent__SetGift_40921900(
          (ItemIconComponent_o *)this,
          v63->fields.type,
          v63->fields.objectId,
          v63->fields.num,
          0,
          0);
      }
      itemLabelDispList = v5->fields.itemLabelDispList;
      if ( !itemLabelDispList )
        goto LABEL_73;
      if ( v62 >= LODWORD(itemLabelDispList->max_length) )
        break;
      QuestRewardItemAction__SetClearTextLabel(this, *((UILabel_o **)&itemLabelDispList->obj.klass + v61), v63, v64);
      max_length = questInfoRewardList->max_length;
      if ( (int)++v61 - 4 >= max_length )
        goto LABEL_70;
    }
LABEL_74:
    sub_1C372BC(this);
  }
LABEL_70:
  QuestRewardItemAction__CommonSetUpEndAction(v5, v59);
}


void QuestRewardItemAction__TouchWaitEnd(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mScreenTouchInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_4C3FD64 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AndroidBackKeyManager_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_QuestRewardItemAction_TouchWaitEnd__);
    sub_1C37058(&Method_QuestRewardItemAction__TouchWaitEnd_b__65_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3FD64 = 1;
  }
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  mScreenTouchInfo = (UnityEngine_Component_o *)this->fields.mScreenTouchInfo;
  if ( !mScreenTouchInfo )
    goto LABEL_13;
  mScreenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mScreenTouchInfo, 0);
  if ( !mScreenTouchInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mScreenTouchInfo, 0, 0);
  if ( !this->fields.forcePause )
  {
    v4 = Method_QuestRewardItemAction_TouchWaitEnd__;
    if ( (*((_BYTE *)Method_QuestRewardItemAction_TouchWaitEnd__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C37070(Method_QuestRewardItemAction_TouchWaitEnd__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_QuestRewardItemAction__TouchWaitEnd_b__65_0__, 0);
  if ( !v8 )
LABEL_13:
    sub_1C372B4(mScreenTouchInfo);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0);
  QuestRewardItemAction__SetState(this, 0, v11);
}


void QuestRewardItemAction__Update(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C3FD5A & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QuestRewardItemAction__update__);
    sub_1C37058(&CTouch_TypeInfo);
    byte_4C3FD5A = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_332D080 *)Method_CStateManager_QuestRewardItemAction__update__);
}


void QuestRewardItemAction___TouchWaitEnd_b__65_0(QuestRewardItemAction_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.mEndAct, 0);
}


void QuestRewardItemAction_StateItemLabel___ctor(
        QuestRewardItemAction_StateItemLabel_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardItemAction_StateItemLabel__begin(
        QuestRewardItemAction_StateItemLabel_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x19
  __int64 v9; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  ManagerConfig_c *v16; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // w25
  MoveObject_o *v20; // x21
  float x; // s10
  float v22; // s11
  float v23; // s12
  System_Action_o *v24; // x22
  System_Action_o *v25; // x23
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C3FD6B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&Method_QuestRewardItemAction_StateItemLabel_begin__);
    sub_1C37058(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__);
    sub_1C37058(&Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_1C37058(&QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    byte_4C3FD6B = 1;
  }
  v4 = sub_1C372A4(QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 32) = that;
  v8 = v4 + 32;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 32), (int32_t)that, v6, v7);
  v9 = *(_QWORD *)(v4 + 32);
  if ( !v9 )
    goto LABEL_19;
  transform = *(UnityEngine_Transform_o **)(v9 + 80);
  if ( !transform )
    goto LABEL_19;
  if ( *(_BYTE *)(v9 + 312) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_19;
    transform = UnityEngine_Transform__get_parent(transform, 0);
    if ( !transform )
      goto LABEL_19;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  *(_QWORD *)(v4 + 16) = gameObject;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)gameObject, v11, v12);
  transform = *(UnityEngine_Transform_o **)(v4 + 32);
  if ( !transform )
    goto LABEL_19;
  QuestRewardItemAction__SetActiveLabelList(
    (QuestRewardItemAction_o *)transform,
    (UILabel_array *)transform[10].monitor,
    1,
    0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v4 + 16),
                       (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v4 + 24) = Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 24), (int32_t)Component_object, v14, v15);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0);
  v16 = ManagerConfig_TypeInfo;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v16 = ManagerConfig_TypeInfo;
  }
  WIDTH = v16->static_fields->WIDTH;
  v29 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v4 + 16), 0);
  v20 = *(MoveObject_o **)(v4 + 24);
  x = v29.fields.x;
  v22 = v29.fields.y;
  v23 = v29.fields.z;
  v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v4,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__0__,
    0);
  v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v4,
    Method_QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
    0);
  if ( !v20
    || (v30.fields.x = (float)WIDTH,
        v30.fields.y = y,
        v30.fields.z = z,
        v31.fields.x = x,
        v31.fields.y = v22,
        v31.fields.z = v23,
        MoveObject__Play(v20, v30, v31, 0.25, v24, v25, 0.0, 17, 0),
        !*(_QWORD *)v8) )
  {
LABEL_19:
    sub_1C372B4(transform);
  }
  if ( *(_BYTE *)(*(_QWORD *)v8 + 217LL) )
  {
    v26 = Method_QuestRewardItemAction_StateItemLabel_begin__;
    if ( (*((_BYTE *)Method_QuestRewardItemAction_StateItemLabel_begin__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1C37070(Method_QuestRewardItemAction_StateItemLabel_begin__);
    v27 = (System_Reflection_MethodBase_o *)sub_1C3703C(v26, v26[4]);
    OverwriteAssetSoundName__PlaySystemSe(v27, 4, 0, 0);
  }
}


void QuestRewardItemAction_StateItemLabel__end(
        QuestRewardItemAction_StateItemLabel_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardItemAction_StateItemLabel__update(
        QuestRewardItemAction_StateItemLabel_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___ctor(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___begin_b__0(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1C372B4(this);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, mo->fields.mNow, 0);
}


void QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardItemAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardItemAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C372B4(0);
  QuestRewardItemAction__SetState(that, 4, 0);
}


void QuestRewardItemAction_StateNone___ctor(QuestRewardItemAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardItemAction_StateNone__begin(
        QuestRewardItemAction_StateNone_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardItemAction_StateNone__end(
        QuestRewardItemAction_StateNone_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardItemAction_StateNone__update(
        QuestRewardItemAction_StateNone_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardItemAction_StatePlay___ctor(QuestRewardItemAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardItemAction_StatePlay__begin(
        QuestRewardItemAction_StatePlay_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  long double v3; // q8
  QuestRewardItemAction_StatePlay_o *v5; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x21
  SimpleAnimation_State_o *Item; // x0
  CGThumbnailListItem_o *p_fields; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CGThumbnailListItem_c *klass; // x21
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_TrackedReference_o *v13; // x20
  float mTreasureAnimStartTime; // s0
  _QWORD *image; // x8
  __int64 v16; // x9
  SimpleAnimation_State_c **v17; // x10
  __int64 v18; // x0
  CGThumbnailListItem_c *v19; // x20
  _QWORD *v20; // x8
  __int64 v21; // x9
  SimpleAnimation_State_c **v22; // x10
  __int64 v23; // x0
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x20
  int max_length; // w8
  unsigned int v26; // w21
  _BOOL4 v27; // w8

  v5 = this;
  if ( (byte_4C3FD69 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardItemAction_StatePlay_o *)sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C3FD69 = 1;
  }
  if ( !that )
    goto LABEL_48;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
      goto LABEL_48;
    Item = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.playAnimationName, 0);
    v5->fields.mSimpleAnimState = Item;
    p_fields = (CGThumbnailListItem_o *)&v5->fields;
    sub_1C36FFC(p_fields, (int32_t)Item, v9, v10);
    klass = p_fields->klass;
    if ( that->fields.mIsFromTreasureBox )
    {
      *(float *)&v3 = that->fields.mTreasureAnimStartTime;
      if ( !klass )
        goto LABEL_48;
    }
    else
    {
      LODWORD(v3) = 0;
      if ( !klass )
        goto LABEL_48;
    }
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
          goto LABEL_24;
      }
      v18 = (__int64)&image[2 * *(_DWORD *)v17 + 51];
    }
    else
    {
LABEL_24:
      v18 = sub_1C87870(p_fields->klass, SimpleAnimation_State_TypeInfo, 6);
    }
    this = (QuestRewardItemAction_StatePlay_o *)(*(__int64 (__fastcall **)(CGThumbnailListItem_c *, _QWORD, long double))v18)(
                                                  klass,
                                                  *(_QWORD *)(v18 + 8),
                                                  v3);
    v19 = p_fields->klass;
    if ( !v19 )
      goto LABEL_48;
    v20 = v19->_1.image;
    v21 = *((unsigned __int16 *)v19->_1.image + 151);
    if ( *((_WORD *)v19->_1.image + 151) )
    {
      v22 = (SimpleAnimation_State_c **)(v20[22] + 8LL);
      while ( *(v22 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v21;
        v22 += 2;
        if ( !v21 )
          goto LABEL_31;
      }
      v23 = (__int64)&v20[2 * *(_DWORD *)v22 + 55];
    }
    else
    {
LABEL_31:
      v23 = sub_1C87870(v19, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(CGThumbnailListItem_c *, _QWORD, float))v23)(v19, *(_QWORD *)(v23 + 8), 1.0);
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
LABEL_48:
      sub_1C372B4(this);
    this = (QuestRewardItemAction_StatePlay_o *)SimpleAnimation__Play_66507412(
                                                  (SimpleAnimation_o *)this,
                                                  that->fields.playAnimationName,
                                                  0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
      if ( !this )
        goto LABEL_48;
      v13 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                (UnityEngine_Animation_o *)this,
                                                that->fields.playAnimationName,
                                                0);
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_TrackedReference__op_Inequality(v13, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( that->fields.mIsFromTreasureBox )
        {
          mTreasureAnimStartTime = that->fields.mTreasureAnimStartTime;
          if ( !v13 )
            goto LABEL_48;
        }
        else
        {
          mTreasureAnimStartTime = 0.0;
          if ( !v13 )
            goto LABEL_48;
        }
        UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)v13, mTreasureAnimStartTime, 0);
        UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)v13, 1.0, 0);
        this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
        if ( !this )
          goto LABEL_48;
        this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_Animation__Play_71012036(
                                                      (UnityEngine_Animation_o *)this,
                                                      that->fields.playAnimationName,
                                                      0);
      }
    }
  }
  appearEffObjDispList = that->fields.appearEffObjDispList;
  if ( !appearEffObjDispList )
    goto LABEL_48;
  max_length = appearEffObjDispList->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
        sub_1C372BC(this);
      v27 = !that->fields.mIsFromTreasureBox || !that->fields.mTreasureEffectOff;
      this = (QuestRewardItemAction_StatePlay_o *)appearEffObjDispList->m_Items[v26];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v27, 0);
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v26 >= max_length )
        return;
    }
    goto LABEL_48;
  }
}


void QuestRewardItemAction_StatePlay__end(
        QuestRewardItemAction_StatePlay_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardItemAction_StatePlay__update(
        QuestRewardItemAction_StatePlay_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *appearEffObjDispList; // x21
  int max_length; // w8
  char v6; // w22
  char v7; // w23
  unsigned int v8; // w24
  Il2CppClass **v9; // x8
  UnityEngine_GameObject_o *v10; // x20
  _BOOL4 v11; // w8
  _BOOL8 v12; // x0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  int32_t v15; // w1
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  _OWORD v18[2]; // [xsp+0h] [xbp-80h] BYREF
  __int128 v19; // [xsp+20h] [xbp-60h] BYREF
  UIWidget_o *v20[2]; // [xsp+30h] [xbp-50h]

  if ( (byte_4C3FD6A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture___GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (QuestRewardItemAction_StatePlay_o *)sub_1C37058(&Method_QuestRewardItemAction_StatePlay_update__);
    byte_4C3FD6A = 1;
  }
  v19 = 0u;
  *(_OWORD *)v20 = 0u;
  if ( !that )
    goto LABEL_49;
  appearEffObjDispList = that->fields.appearEffObjDispList;
  if ( !appearEffObjDispList )
    goto LABEL_49;
  max_length = appearEffObjDispList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C372BC(this);
      v9 = &appearEffObjDispList->obj.klass + (int)v8;
      v10 = (UnityEngine_GameObject_o *)v9[4];
      if ( !v10 )
        goto LABEL_49;
      this = (QuestRewardItemAction_StatePlay_o *)UnityEngine_GameObject__get_activeSelf(
                                                    (UnityEngine_GameObject_o *)v9[4],
                                                    0);
      if ( that->fields.mIsFromTreasureBox )
        v6 = (char)this;
      else
        v7 = (char)this;
      if ( that->fields.mIsFromTreasureBox )
        break;
      if ( (v7 & 1) == 0 )
      {
        v11 = 1;
LABEL_17:
        UnityEngine_GameObject__SetActive(v10, v11, 0);
      }
LABEL_18:
      max_length = appearEffObjDispList->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_19;
    }
    v11 = !that->fields.mTreasureEffectOff;
    if ( v11 == (v6 & 1) )
      goto LABEL_18;
    goto LABEL_17;
  }
LABEL_19:
  this = (QuestRewardItemAction_StatePlay_o *)that->fields.titleSpriteToTextureList;
  if ( !this )
    goto LABEL_49;
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v18,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_3752F08 *)Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture___GetEnumerator__);
  v19 = v18[0];
  *(_OWORD *)v20 = v18[1];
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v19,
            (const MethodInfo_3524D64 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___MoveNext__);
    if ( !v12 )
      break;
    if ( !v20[0] )
      sub_1C372B4(v12);
    if ( !v20[1] )
      sub_1C372B4(0);
    UIWidget__set_color(v20[1], v20[0]->fields.mColor, 0);
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (const MethodInfo_3524D60 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_UISprite__UITexture___Dispose__);
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mSimpleAnimation;
    if ( !this )
      goto LABEL_49;
    if ( SimpleAnimation__IsPlaying((SimpleAnimation_o *)this, that->fields.playAnimationName, 0) )
      return;
LABEL_36:
    this = (QuestRewardItemAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
      {
        if ( that->fields.mLabelAnimate )
        {
          v15 = 3;
        }
        else
        {
          if ( that->fields.mGetSEonProgram )
          {
            v16 = Method_QuestRewardItemAction_StatePlay_update__;
            if ( (*((_BYTE *)Method_QuestRewardItemAction_StatePlay_update__ + 83) & 2) != 0 )
              v16 = (_QWORD *)sub_1C37070(Method_QuestRewardItemAction_StatePlay_update__);
            v17 = (System_Reflection_MethodBase_o *)sub_1C3703C(v16, v16[4]);
            OverwriteAssetSoundName__PlaySystemSe(v17, 4, 0, 0);
          }
          v15 = 4;
        }
        QuestRewardItemAction__SetState(that, v15, 0);
      }
      return;
    }
LABEL_49:
    sub_1C372B4(this);
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0, 0) )
  {
    this = (QuestRewardItemAction_StatePlay_o *)that->fields.mAnimation;
    if ( !this )
      goto LABEL_49;
    if ( UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)this, that->fields.playAnimationName, 0) )
      return;
    goto LABEL_36;
  }
}


void QuestRewardItemAction_StateTitleSprite___ctor(
        QuestRewardItemAction_StateTitleSprite_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardItemAction_StateTitleSprite__begin(
        QuestRewardItemAction_StateTitleSprite_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  QuestRewardItemAction_o *IsNullOrEmpty; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x19
  const MethodInfo *v9; // x2
  __int64 v10; // x8
  _BOOL8 v11; // x0
  Il2CppObject *current; // x20
  System_String_o *v13; // x21
  AssetLoader_LoadEndDataHandler_o *v14; // x22
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3FD67 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_First_UISprite___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&QuestRewardItemAction_TypeInfo);
    sub_1C37058(&Method_QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0__begin_b__0__);
    sub_1C37058(&QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0_TypeInfo);
    byte_4C3FD67 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v4 = sub_1C372A4(QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_31;
  *(_QWORD *)(v4 + 16) = that;
  v8 = v4 + 16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_31;
  IsNullOrEmpty = (QuestRewardItemAction_o *)System_String__IsNullOrEmpty(
                                               *(System_String_o **)(*(_QWORD *)(v4 + 16) + 328LL),
                                               0);
  v10 = *(_QWORD *)v8;
  if ( !*(_QWORD *)v8 )
    goto LABEL_31;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
LABEL_9:
    IsNullOrEmpty = (QuestRewardItemAction_o *)v10;
LABEL_29:
    QuestRewardItemAction__SetState(IsNullOrEmpty, 2, v9);
    return;
  }
  IsNullOrEmpty = (QuestRewardItemAction_o *)BasicHelper__IsNullOrEmpty(
                                               *(System_Collections_ICollection_o **)(v10 + 104),
                                               0);
  v10 = *(_QWORD *)v8;
  if ( !*(_QWORD *)v8 )
    goto LABEL_31;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_9;
  IsNullOrEmpty = (QuestRewardItemAction_o *)System_Linq_Enumerable__First_object_(
                                               *(System_Collections_Generic_IEnumerable_TSource__o **)(v10 + 104),
                                               (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_UISprite___);
  if ( !IsNullOrEmpty
    || !*(_QWORD *)v8
    || (IsNullOrEmpty = (QuestRewardItemAction_o *)IsNullOrEmpty[1].fields.mItemSpList_2) == 0 )
  {
LABEL_31:
    sub_1C372B4(IsNullOrEmpty);
  }
  IsNullOrEmpty = (QuestRewardItemAction_o *)UIAtlas__GetSprite(
                                               (UIAtlas_o *)IsNullOrEmpty,
                                               *(System_String_o **)(*(_QWORD *)v8 + 328LL),
                                               0);
  if ( IsNullOrEmpty )
  {
    if ( !*(_QWORD *)v8 )
      goto LABEL_31;
    IsNullOrEmpty = *(QuestRewardItemAction_o **)(*(_QWORD *)v8 + 104LL);
    if ( !IsNullOrEmpty )
      goto LABEL_31;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
      if ( !v11 )
        break;
      if ( !*(_QWORD *)v8 )
        sub_1C372B4(v11);
      current = v15.fields._current;
      if ( !v15.fields._current )
        sub_1C372B4(v11);
      UISprite__set_spriteName((UISprite_o *)v15.fields._current, *(System_String_o **)(*(_QWORD *)v8 + 328LL), 0);
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[33].methodPtr)(
        current,
        current->klass->vtable[33].method);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
LABEL_28:
    IsNullOrEmpty = *(QuestRewardItemAction_o **)v8;
    if ( *(_QWORD *)v8 )
      goto LABEL_29;
    goto LABEL_31;
  }
  IsNullOrEmpty = (QuestRewardItemAction_o *)QuestRewardItemAction_TypeInfo;
  if ( !QuestRewardItemAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo);
  if ( !*(_QWORD *)v8 )
    goto LABEL_31;
  v13 = System_String__Concat_63561656(
          QuestRewardItemAction_TypeInfo->static_fields->GetSpritesTexturePath,
          *(System_String_o **)(*(_QWORD *)v8 + 328LL),
          0);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)v4,
    Method_QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v13, v14, 1, 0) )
    goto LABEL_28;
}


void QuestRewardItemAction_StateTitleSprite__end(
        QuestRewardItemAction_StateTitleSprite_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardItemAction_StateTitleSprite__update(
        QuestRewardItemAction_StateTitleSprite_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0___ctor(
        QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0___begin_b__0(
        QuestRewardItemAction_StateTitleSprite___c__DisplayClass0_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  UnityEngine_Shader_o *v5; // x22
  UnityEngine_Material_o *v6; // x20
  System_Collections_Generic_List_object__o *Object_object__51154888; // x0
  struct QuestRewardItemAction_o *that; // x8
  struct QuestRewardItemAction_o *v9; // x8
  UnityEngine_Texture_o *v10; // x22
  System_String_o *v11; // x0
  UnityEngine_Texture_o *v12; // x21
  QuestRewardItemAction_c *v13; // x0
  struct QuestRewardItemAction_o *v14; // x8
  _BOOL8 v15; // x0
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  UnityEngine_Behaviour_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo_3B02E38 *v21; // x4
  struct QuestRewardItemAction_o *v22; // x8
  System_Collections_Generic_List_T__o *titleSpriteToTextureList; // x23
  __int64 v24; // x0
  const MethodInfo *v25; // x3
  System_ValueTuple_object__object__o v26; // x1 OVERLAPPED
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  CGThumbnailListItem_o *v30; // x0
  const MethodInfo *v31; // x2
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF
  System_ValueTuple_object__object__o v34; // 0:x0.16

  if ( (byte_4C3FD68 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_UITexture___);
    sub_1C37058(&Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture___Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&QuestRewardItemAction_TypeInfo);
    sub_1C37058(&Method_System_ValueTuple_UISprite__UITexture___ctor__);
    sub_1C37058(&StringLiteral_16535/*"_alpha"*/);
    sub_1C37058(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    byte_4C3FD68 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
  v6 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v6, v5, 0);
  that = this->fields.that;
  if ( !that )
    goto LABEL_28;
  if ( !assetData )
    goto LABEL_28;
  Object_object__51154888 = (System_Collections_Generic_List_object__o *)AssetData__GetObject_object__51154888(
                                                                           assetData,
                                                                           that->fields.titleSpriteName,
                                                                           (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200);
  v9 = this->fields.that;
  if ( !v9 )
    goto LABEL_28;
  v10 = (UnityEngine_Texture_o *)Object_object__51154888;
  v11 = System_String__Concat_63561656(v9->fields.titleSpriteName, (System_String_o *)StringLiteral_16535/*"_alpha"*/, 0);
  Object_object__51154888 = (System_Collections_Generic_List_object__o *)AssetData__GetObject_object__51154888(
                                                                           assetData,
                                                                           v11,
                                                                           (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200);
  if ( !v6 )
    goto LABEL_28;
  v12 = (UnityEngine_Texture_o *)Object_object__51154888;
  UnityEngine_Material__set_mainTexture(v6, v10, 0);
  v13 = QuestRewardItemAction_TypeInfo;
  if ( !QuestRewardItemAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardItemAction_TypeInfo);
    v13 = QuestRewardItemAction_TypeInfo;
  }
  UnityEngine_Material__SetTexture_71131564(v6, v13->static_fields->MaskTex, v12, 0);
  v14 = this->fields.that;
  if ( !v14 )
    goto LABEL_28;
  Object_object__51154888 = (System_Collections_Generic_List_object__o *)v14->fields.titleSprites;
  if ( !Object_object__51154888 )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    Object_object__51154888,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    if ( !v15 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1C372B4(v15);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v33.fields._current, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_UITexture___);
    v19 = (UnityEngine_Behaviour_o *)Component_object;
    if ( !Component_object )
      sub_1C372B4(0);
    ((void (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, const MethodInfo *))Component_object->klass->vtable[25].methodPtr)(
      Component_object,
      v6,
      Component_object->klass->vtable[25].method);
    UnityEngine_Behaviour__set_enabled(v19, 1, 0);
    v20 = ((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v19->klass[2]._1.parent)(
            v19,
            v19->klass[2]._1.generic_class);
    v22 = this->fields.that;
    if ( !v22 )
      sub_1C372B4(v20);
    titleSpriteToTextureList = (System_Collections_Generic_List_T__o *)v22->fields.titleSpriteToTextureList;
    *(_OWORD *)&v32.fields._list = 0u;
    v34.fields.Item1 = (Il2CppObject *)&v32;
    v34.fields.Item2 = current;
    System_ValueTuple_object__object____ctor(
      v34,
      (Il2CppObject *)v19,
      (Il2CppObject *)Method_System_ValueTuple_UISprite__UITexture___ctor__,
      v21);
    if ( !titleSpriteToTextureList )
      sub_1C372B4(v24);
    v26 = *(System_ValueTuple_object__object__o *)&v32.fields._list;
    items = titleSpriteToTextureList->fields._items;
    v28 = Method_System_Collections_Generic_List_ValueTuple_UISprite__UITexture___Add__;
    ++titleSpriteToTextureList->fields._version;
    if ( !items )
      sub_1C372B4(v24);
    size = titleSpriteToTextureList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
        titleSpriteToTextureList,
        v26,
        *(const MethodInfo_37523B0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = (CGThumbnailListItem_o *)(&items->obj + size);
      titleSpriteToTextureList->fields._size = size + 1;
      v30->fields.sortValue0 = (int64_t)v26.fields.Item1;
      v30 = (CGThumbnailListItem_o *)((char *)v30 + 32);
      v30->monitor = v26.fields.Item2;
      sub_1C36FFC(v30, 0, (int32_t)v26.fields.Item2, v25);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
  Object_object__51154888 = (System_Collections_Generic_List_object__o *)this->fields.that;
  if ( !Object_object__51154888 )
LABEL_28:
    sub_1C372B4(Object_object__51154888);
  QuestRewardItemAction__SetState((QuestRewardItemAction_o *)Object_object__51154888, 2, v31);
}


void QuestRewardItemAction_StateTouchWait___ctor(
        QuestRewardItemAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardItemAction_StateTouchWait__begin(
        QuestRewardItemAction_StateTouchWait_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (QuestRewardItemAction_StateTouchWait_o *)that->fields.mScreenTouchInfo,
        that->fields.forcePause = 0,
        !this)
    || (this = (QuestRewardItemAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0)) == 0 )
  {
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void QuestRewardItemAction_StateTouchWait__end(
        QuestRewardItemAction_StateTouchWait_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardItemAction_StateTouchWait__update(
        QuestRewardItemAction_StateTouchWait_o *this,
        QuestRewardItemAction_o *that,
        const MethodInfo *method)
{
  Il2CppObject *isTouchPush; // x0

  if ( (byte_4C3FD6C & 1) == 0 )
  {
    sub_1C37058(&CTouch_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3FD6C = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (Il2CppObject *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( !that )
      goto LABEL_12;
    if ( that->fields.forcePause )
      return;
    isTouchPush = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !isTouchPush )
LABEL_12:
      sub_1C372B4(isTouchPush);
    if ( !CommonUI__IsActive_TreasureBoxDialog((CommonUI_o *)isTouchPush, 0) )
      QuestRewardItemAction__CheckTutorial(that, 0);
  }
}


void QuestRewardItemAction___c__DisplayClass55_0___ctor(
        QuestRewardItemAction___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardItemAction___c__DisplayClass55_0___Play_b__0(
        QuestRewardItemAction___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardItemAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  if ( !_4__this->fields.mIsFromTreasureBox )
    QuestRewardItemAction__SetState(_4__this, this->fields.state, 0);
}